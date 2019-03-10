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
#include "frost/core/Int64.h"
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
#include "frost/core/Range.LTfrost/core/Int64.GT.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim(org$frostlang$frostc$Type* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(p0, ((org$frostlang$frostc$Type*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Type$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Type$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$frostc$Type$_frost$core$Equatable, { org$frostlang$frostc$Type$get_hash$R$frost$core$Int64} };

static frost$core$String $s1;
org$frostlang$frostc$Type$class_type org$frostlang$frostc$Type$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, (ITable*) &org$frostlang$frostc$Type$_frost$collections$Key, { org$frostlang$frostc$Type$get_asString$R$frost$core$String, org$frostlang$frostc$Type$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit, org$frostlang$frostc$Type$get_size$R$frost$core$Int64, org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit, org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT, org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim, org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit, org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit, org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit, org$frostlang$frostc$Type$get_isTuple$R$frost$core$Bit, org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit, org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit, org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit, org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64, org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_hash$R$frost$core$Int64} };

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
typedef frost$core$Bit (*$fn650)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn677)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn690)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn704)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn710)(frost$core$Object*);
typedef frost$core$Bit (*$fn745)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn751)(frost$core$Object*);
typedef frost$core$String* (*$fn766)(frost$core$Object*);
typedef frost$core$String* (*$fn781)(frost$core$Object*);
typedef frost$core$String* (*$fn804)(frost$core$Object*);
typedef frost$core$Bit (*$fn855)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn885)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn902)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn932)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn949)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn979)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn997)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1056)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1070)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1083)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1096)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1110)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1124)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1141)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1235)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1263)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1316)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1328)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1357)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1380)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1393)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1406)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1419)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1435)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1452)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1465)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1478)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1491)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1510)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1544)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1557)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1570)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1583)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1607)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1629)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1649)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1663)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1683)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1697)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1717)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1737)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1751)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1768)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1781)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1800)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1813)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1837)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1856)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1869)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1893)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1918)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2025)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2033)(frost$collections$MapView*);
typedef frost$core$Int64 (*$fn2097)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2210)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2231)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2313)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2344)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2348)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2353)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2367)(frost$collections$Key*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 25, -4810824236343314128, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 185, -4094487666733104239, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x73\x69\x7a\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 143, -847011152089489091, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x73\x75\x62\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x70\x72\x69\x6f\x72\x69\x74\x79\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 276, 4307366265613662491, NULL };
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
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x74\x75\x70\x6c\x65\x28\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 156, 5221116226980720398, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s606 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e\x28", 4, 5596484150606072277, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, -4273821116298159575, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, -895118643158701403, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, -5497142298437553839, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s713 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, -3775131800234382932, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s716 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s728 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, 3926445080533411332, NULL };
static frost$core$String $s756 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s769 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, -2488816111207655509, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s784 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -3618193066842889572, NULL };
static frost$core$String $s786 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s821 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s910 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s957 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1005 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1032 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s1037 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -8998979431191354836, NULL };
static frost$core$String $s1043 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s1147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s1158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s1243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s1297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s1301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s1305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s1338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s1365 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 97, 8312561504095511799, NULL };
static frost$core$String $s1430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 119, 1578211334716446145, NULL };
static frost$core$String $s1530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1587 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1588 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s1594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1787 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1821 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x36\x34", 2, 573522890330722151, NULL };
static frost$core$String $s1843 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s1877 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x36\x34", 2, 573522890330722151, NULL };
static frost$core$String $s1901 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s1926 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2029 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2030 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 208, 5208730858812988615, NULL };
static frost$core$String $s2077 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2092 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s2339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };

void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:85
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:43
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:46
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
frost$core$Int64 $tmp12 = (frost$core$Int64) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:88:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
frost$core$Int64 $tmp23 = (frost$core$Int64) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:88:69
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
frost$core$Int64 $tmp34 = (frost$core$Int64) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:89:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
frost$core$Int64 $tmp45 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:89:55
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
frost$core$Int64 $tmp56 = (frost$core$Int64) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:90:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
frost$core$Int64 $tmp67 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:90:65
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
frost$core$Int64 $tmp77 = (frost$core$Int64) {91u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s78, $tmp77, &$s79);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:92
org$frostlang$frostc$Type$Kind* $tmp80 = &param0->typeKind;
*$tmp80 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:93
org$frostlang$frostc$Position* $tmp81 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp81 = param3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:94
frost$core$Bit* $tmp82 = &param0->resolved;
*$tmp82 = param4;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:95
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp83 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp84 = *$tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
org$frostlang$frostc$FixedArray** $tmp85 = &param0->_subtypes;
*$tmp85 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:96
frost$core$Int64 $tmp86 = (frost$core$Int64) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from Type.frost:96:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Symbol.frost:4
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:43
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:46
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
frost$core$Int64 $tmp99 = (frost$core$Int64) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:99:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
frost$core$Int64 $tmp110 = (frost$core$Int64) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:99:69
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
frost$core$Int64 $tmp121 = (frost$core$Int64) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:100:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
frost$core$Int64 $tmp132 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:100:55
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
frost$core$Int64 $tmp143 = (frost$core$Int64) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:101:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
frost$core$Int64 $tmp154 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:101:65
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
frost$core$Int64 $tmp164 = (frost$core$Int64) {102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s165, $tmp164, &$s166);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:103
frost$core$Bit $tmp167 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s168);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Type.frost:103:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp169 = $tmp167.value;
bool $tmp170 = !$tmp169;
frost$core$Bit $tmp171 = (frost$core$Bit) {$tmp170};
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp173 = (frost$core$Int64) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s174, $tmp173);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:104
org$frostlang$frostc$Type$Kind* $tmp175 = &param0->typeKind;
*$tmp175 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:105
frost$core$Int64 $tmp176 = (frost$core$Int64) {18446744073709551615u};
org$frostlang$frostc$Position $tmp177 = org$frostlang$frostc$Position$init$frost$core$Int64$frost$core$Int64$frost$core$Int64($tmp176, param3, param3);
org$frostlang$frostc$Position* $tmp178 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp178 = $tmp177;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:106
frost$core$Bit $tmp179 = (frost$core$Bit) {true};
frost$core$Bit* $tmp180 = &param0->resolved;
*$tmp180 = $tmp179;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:107
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp181 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp182 = *$tmp181;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
org$frostlang$frostc$FixedArray** $tmp183 = &param0->_subtypes;
*$tmp183 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:108
frost$core$Int64 $tmp184 = (frost$core$Int64) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from Type.frost:108:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Symbol.frost:4
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

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:112
frost$core$Int64 $tmp190 = (frost$core$Int64) {0u};
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:43
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:46
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
frost$core$Int64 $tmp200 = (frost$core$Int64) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:115:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
frost$core$Int64 $tmp211 = (frost$core$Int64) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:115:69
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
frost$core$Int64 $tmp221 = (frost$core$Int64) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s222, $tmp221, &$s223);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:118
org$frostlang$frostc$Type$Kind$wrapper* $tmp224;
$tmp224 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp224->value = param2;
frost$core$Int64 $tmp225 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:118:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:25
bool $tmp236 = $tmp233.value;
bool $tmp237 = $tmp234.value;
bool $tmp238 = $tmp236 == $tmp237;
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp241 = (frost$core$Int64) {118u};
frost$core$String* $tmp242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s243, param1);
frost$core$String* $tmp244 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp242, &$s245);
org$frostlang$frostc$Type$Kind$wrapper* $tmp246;
$tmp246 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp246->value = param2;
frost$core$Int64 $tmp247 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:119:72
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:120
org$frostlang$frostc$Type$Kind$wrapper* $tmp264;
$tmp264 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp264->value = param2;
frost$core$Int64 $tmp265 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:120:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:25
bool $tmp276 = $tmp273.value;
bool $tmp277 = $tmp274.value;
bool $tmp278 = $tmp276 == $tmp277;
frost$core$Bit $tmp279 = (frost$core$Bit) {$tmp278};
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp281 = (frost$core$Int64) {120u};
frost$core$String* $tmp282 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s283, param1);
frost$core$String* $tmp284 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp282, &$s285);
org$frostlang$frostc$Type$Kind$wrapper* $tmp286;
$tmp286 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp286->value = param2;
frost$core$Int64 $tmp287 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:121:71
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:122
org$frostlang$frostc$Type$Kind* $tmp304 = &param0->typeKind;
*$tmp304 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:123
org$frostlang$frostc$Position* $tmp305 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp305 = param3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:124
frost$core$Bit* $tmp306 = &param0->resolved;
*$tmp306 = param5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:125
frost$core$Int64* $tmp307 = &param0->priority;
*$tmp307 = param6;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:126
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:127
frost$core$Int64 $tmp312 = (frost$core$Int64) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from Type.frost:127:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Symbol.frost:4
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:43
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:46
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:131
frost$core$Int64 $tmp324 = (frost$core$Int64) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:131:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp325 = &(&local1)->$rawValue;
*$tmp325 = $tmp324;
org$frostlang$frostc$Type$Kind $tmp326 = *(&local1);
*(&local0) = $tmp326;
org$frostlang$frostc$Type$Kind $tmp327 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp328 = &param0->typeKind;
*$tmp328 = $tmp327;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:132
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:133
frost$core$Bit $tmp333 = (frost$core$Bit) {true};
frost$core$Bit* $tmp334 = &param0->resolved;
*$tmp334 = $tmp333;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp335 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp336 = *$tmp335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
org$frostlang$frostc$FixedArray** $tmp337 = &param0->_subtypes;
*$tmp337 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:135
frost$core$Int64 $tmp338 = (frost$core$Int64) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from Type.frost:135:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Symbol.frost:4
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:43
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:46
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:139
frost$core$Int64 $tmp361 = (frost$core$Int64) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:139:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp362 = &(&local1)->$rawValue;
*$tmp362 = $tmp361;
org$frostlang$frostc$Type$Kind $tmp363 = *(&local1);
*(&local0) = $tmp363;
org$frostlang$frostc$Type$Kind $tmp364 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp365 = &param0->typeKind;
*$tmp365 = $tmp364;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:140
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:141
frost$core$Bit $tmp370 = (frost$core$Bit) {true};
frost$core$Bit* $tmp371 = &param0->resolved;
*$tmp371 = $tmp370;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp372 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp373 = *$tmp372;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
org$frostlang$frostc$FixedArray** $tmp374 = &param0->_subtypes;
*$tmp374 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:143
frost$core$Int64 $tmp375 = (frost$core$Int64) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from Type.frost:143:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Symbol.frost:4
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:43
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:46
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:147
org$frostlang$frostc$Type** $tmp398 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp399 = *$tmp398;
org$frostlang$frostc$Type$Kind* $tmp400 = &$tmp399->typeKind;
org$frostlang$frostc$Type$Kind $tmp401 = *$tmp400;
org$frostlang$frostc$Type$Kind* $tmp402 = &param0->typeKind;
*$tmp402 = $tmp401;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:148
org$frostlang$frostc$Type** $tmp403 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp404 = *$tmp403;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:148:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp405 = &$tmp404->_subtypes;
org$frostlang$frostc$FixedArray* $tmp406 = *$tmp405;
frost$core$Bit $tmp407 = (frost$core$Bit) {$tmp406 != NULL};
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp409 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s410, $tmp409);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:149
org$frostlang$frostc$Type** $tmp416 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp417 = *$tmp416;
frost$core$Bit* $tmp418 = &$tmp417->resolved;
frost$core$Bit $tmp419 = *$tmp418;
frost$core$Bit* $tmp420 = &param0->resolved;
*$tmp420 = $tmp419;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:150
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodRef** $tmp421 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp422 = *$tmp421;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
org$frostlang$frostc$MethodRef** $tmp423 = &param0->methodRef;
*$tmp423 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:151
frost$core$Int64 $tmp424 = (frost$core$Int64) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from Type.frost:151:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Symbol.frost:4
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
frost$core$Int64 $tmp440 = (frost$core$Int64) {2u};
int64_t $tmp441 = $tmp439.value;
int64_t $tmp442 = $tmp440.value;
bool $tmp443 = $tmp441 >= $tmp442;
frost$core$Bit $tmp444 = (frost$core$Bit) {$tmp443};
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp446 = (frost$core$Int64) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s447, $tmp446, &$s448);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:157
frost$core$Bit $tmp449 = (frost$core$Bit) {true};
*(&local0) = $tmp449;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:158
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp450 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp450);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$core$MutableString* $tmp451 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local1) = $tmp450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:159
frost$core$MutableString* $tmp452 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp452, &$s453);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:160
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s454));
frost$core$String* $tmp455 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local2) = &$s456;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:161
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:162
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:163
frost$core$MutableString* $tmp477 = *(&local1);
frost$core$String* $tmp478 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp477, $tmp478);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:164
frost$core$MutableString* $tmp479 = *(&local1);
org$frostlang$frostc$Type* $tmp480 = *(&local3);
frost$core$String** $tmp481 = &((org$frostlang$frostc$Symbol*) $tmp480)->name;
frost$core$String* $tmp482 = *$tmp481;
frost$core$MutableString$append$frost$core$String($tmp479, $tmp482);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:165
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:167
frost$core$MutableString* $tmp487 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp487, &$s488);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:168
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp489 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp490 = *(&local1);
frost$core$String* $tmp491 = frost$core$MutableString$finish$R$frost$core$String($tmp490);
frost$core$Int64 $tmp492 = (frost$core$Int64) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:168:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp493 = &(&local6)->$rawValue;
*$tmp493 = $tmp492;
org$frostlang$frostc$Type$Kind $tmp494 = *(&local6);
*(&local5) = $tmp494;
org$frostlang$frostc$Type$Kind $tmp495 = *(&local5);
frost$core$Int64 $tmp496 = (frost$core$Int64) {0u};
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:173
frost$core$Bit* $tmp506 = &param0->resolved;
frost$core$Bit $tmp507 = *$tmp506;
*(&local0) = $tmp507;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:174
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp508 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp508);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$MutableString* $tmp509 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local1) = $tmp508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:175
frost$core$MutableString* $tmp510 = *(&local1);
frost$core$String** $tmp511 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp512 = *$tmp511;
frost$core$MutableString$append$frost$core$String($tmp510, $tmp512);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:176
frost$core$MutableString* $tmp513 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp513, &$s514);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:177
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s515));
frost$core$String* $tmp516 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local2) = &$s517;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:178
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:179
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:180
frost$core$MutableString* $tmp538 = *(&local1);
frost$core$String* $tmp539 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp538, $tmp539);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:181
frost$core$MutableString* $tmp540 = *(&local1);
org$frostlang$frostc$Type* $tmp541 = *(&local3);
frost$core$String** $tmp542 = &((org$frostlang$frostc$Symbol*) $tmp541)->name;
frost$core$String* $tmp543 = *$tmp542;
frost$core$MutableString$append$frost$core$String($tmp540, $tmp543);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:182
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:184
frost$core$MutableString* $tmp548 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp548, &$s549);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:185
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp550 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp550);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$collections$Array* $tmp551 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
*(&local5) = $tmp550;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:186
frost$collections$Array* $tmp552 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp552, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:187
frost$collections$Array* $tmp553 = *(&local5);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp553, ((frost$collections$CollectionView*) param1));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:188
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp554 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp555 = *(&local1);
frost$core$String* $tmp556 = frost$core$MutableString$finish$R$frost$core$String($tmp555);
frost$core$Int64 $tmp557 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:188:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$Type$Kind param2, frost$collections$ListView* param3, org$frostlang$frostc$Type* param4, frost$core$Int64 param5) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:194
frost$core$Bit* $tmp568 = &param4->resolved;
frost$core$Bit $tmp569 = *$tmp568;
*(&local0) = $tmp569;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:195
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp570 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp570, &$s571);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$MutableString* $tmp572 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local1) = $tmp570;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:196
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp573 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp573);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
frost$collections$Array* $tmp574 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local2) = $tmp573;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:197
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s575));
frost$core$String* $tmp576 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local3) = &$s577;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:198
ITable* $tmp578 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp578->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp578 = $tmp578->next;
}
$fn580 $tmp579 = $tmp578->methods[0];
frost$collections$Iterator* $tmp581 = $tmp579(((frost$collections$Iterable*) param3));
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:199
frost$collections$Array* $tmp592 = *(&local2);
org$frostlang$frostc$Type* $tmp593 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp592, ((frost$core$Object*) $tmp593));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:200
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:201
frost$core$MutableString* $tmp600 = *(&local1);
frost$core$String* $tmp601 = *(&local3);
frost$core$MutableString$append$frost$core$String($tmp600, $tmp601);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:202
frost$core$MutableString* $tmp602 = *(&local1);
org$frostlang$frostc$Type* $tmp603 = *(&local4);
frost$core$String** $tmp604 = &((org$frostlang$frostc$Symbol*) $tmp603)->name;
frost$core$String* $tmp605 = *$tmp604;
frost$core$MutableString$append$frost$core$String($tmp602, $tmp605);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:203
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:205
frost$core$Int64 $tmp610 = param2.$rawValue;
frost$core$Int64 $tmp611 = (frost$core$Int64) {15u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:206:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp612 = $tmp610.value;
int64_t $tmp613 = $tmp611.value;
bool $tmp614 = $tmp612 == $tmp613;
frost$core$Bit $tmp615 = (frost$core$Bit) {$tmp614};
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:207
frost$core$MutableString* $tmp617 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp617, &$s618);
goto block7;
block9:;
frost$core$Int64 $tmp619 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:209:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp620 = $tmp610.value;
int64_t $tmp621 = $tmp619.value;
bool $tmp622 = $tmp620 == $tmp621;
frost$core$Bit $tmp623 = (frost$core$Bit) {$tmp622};
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:210
frost$core$MutableString* $tmp625 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp625, &$s626);
goto block7;
block12:;
frost$core$Int64 $tmp627 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:212:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp628 = $tmp610.value;
int64_t $tmp629 = $tmp627.value;
bool $tmp630 = $tmp628 == $tmp629;
frost$core$Bit $tmp631 = (frost$core$Bit) {$tmp630};
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:213
frost$core$MutableString* $tmp633 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp633, &$s634);
goto block7;
block15:;
frost$core$Int64 $tmp635 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:215:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp636 = $tmp610.value;
int64_t $tmp637 = $tmp635.value;
bool $tmp638 = $tmp636 == $tmp637;
frost$core$Bit $tmp639 = (frost$core$Bit) {$tmp638};
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:216
frost$core$MutableString* $tmp641 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp641, &$s642);
goto block7;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:219
frost$core$Int64 $tmp643 = (frost$core$Int64) {219u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s644, $tmp643);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:222
frost$collections$Array* $tmp645 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp645, ((frost$core$Object*) param4));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:223
org$frostlang$frostc$Type** $tmp646 = &param0->VOID_TYPE;
org$frostlang$frostc$Type* $tmp647 = *$tmp646;
ITable* $tmp648 = ((frost$core$Equatable*) param4)->$class->itable;
while ($tmp648->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp648 = $tmp648->next;
}
$fn650 $tmp649 = $tmp648->methods[1];
frost$core$Bit $tmp651 = $tmp649(((frost$core$Equatable*) param4), ((frost$core$Equatable*) $tmp647));
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:224
frost$core$MutableString* $tmp653 = *(&local1);
frost$core$String** $tmp654 = &((org$frostlang$frostc$Symbol*) param4)->name;
frost$core$String* $tmp655 = *$tmp654;
frost$core$MutableString$append$frost$core$String($tmp653, $tmp655);
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:226
frost$core$MutableString* $tmp656 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp656, &$s657);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:227
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp658 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp659 = *(&local1);
frost$core$String* $tmp660 = frost$core$MutableString$finish$R$frost$core$String($tmp659);
frost$collections$Array* $tmp661 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp662 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp661);
frost$core$Bit $tmp663 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64($tmp658, $tmp660, param2, param1, ((frost$collections$ListView*) $tmp662), $tmp663, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$String* $tmp664 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp665 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$MutableString* $tmp666 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp658;

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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:232
org$frostlang$frostc$Type$Kind* $tmp667 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp668 = *$tmp667;
org$frostlang$frostc$Type$Kind$wrapper* $tmp669;
$tmp669 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp669->value = $tmp668;
frost$core$Int64 $tmp670 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:232:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp671 = &(&local3)->$rawValue;
*$tmp671 = $tmp670;
org$frostlang$frostc$Type$Kind $tmp672 = *(&local3);
*(&local2) = $tmp672;
org$frostlang$frostc$Type$Kind $tmp673 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp674;
$tmp674 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp674->value = $tmp673;
ITable* $tmp675 = ((frost$core$Equatable*) $tmp669)->$class->itable;
while ($tmp675->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp675 = $tmp675->next;
}
$fn677 $tmp676 = $tmp675->methods[0];
frost$core$Bit $tmp678 = $tmp676(((frost$core$Equatable*) $tmp669), ((frost$core$Equatable*) $tmp674));
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block2; else goto block3;
block2:;
*(&local1) = $tmp678;
goto block4;
block3:;
org$frostlang$frostc$Type$Kind* $tmp680 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp681 = *$tmp680;
org$frostlang$frostc$Type$Kind$wrapper* $tmp682;
$tmp682 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp682->value = $tmp681;
frost$core$Int64 $tmp683 = (frost$core$Int64) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:232:61
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp684 = &(&local5)->$rawValue;
*$tmp684 = $tmp683;
org$frostlang$frostc$Type$Kind $tmp685 = *(&local5);
*(&local4) = $tmp685;
org$frostlang$frostc$Type$Kind $tmp686 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp687;
$tmp687 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp687->value = $tmp686;
ITable* $tmp688 = ((frost$core$Equatable*) $tmp682)->$class->itable;
while ($tmp688->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp688 = $tmp688->next;
}
$fn690 $tmp689 = $tmp688->methods[0];
frost$core$Bit $tmp691 = $tmp689(((frost$core$Equatable*) $tmp682), ((frost$core$Equatable*) $tmp687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp687)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp682)));
*(&local1) = $tmp691;
goto block4;
block4:;
frost$core$Bit $tmp692 = *(&local1);
bool $tmp693 = $tmp692.value;
if ($tmp693) goto block6; else goto block7;
block6:;
*(&local0) = $tmp692;
goto block8;
block7:;
org$frostlang$frostc$Type$Kind* $tmp694 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp695 = *$tmp694;
org$frostlang$frostc$Type$Kind$wrapper* $tmp696;
$tmp696 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp696->value = $tmp695;
frost$core$Int64 $tmp697 = (frost$core$Int64) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:233:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp698 = &(&local7)->$rawValue;
*$tmp698 = $tmp697;
org$frostlang$frostc$Type$Kind $tmp699 = *(&local7);
*(&local6) = $tmp699;
org$frostlang$frostc$Type$Kind $tmp700 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp701;
$tmp701 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp701->value = $tmp700;
ITable* $tmp702 = ((frost$core$Equatable*) $tmp696)->$class->itable;
while ($tmp702->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp702 = $tmp702->next;
}
$fn704 $tmp703 = $tmp702->methods[0];
frost$core$Bit $tmp705 = $tmp703(((frost$core$Equatable*) $tmp696), ((frost$core$Equatable*) $tmp701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp701)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp696)));
*(&local0) = $tmp705;
goto block8;
block8:;
frost$core$Bit $tmp706 = *(&local0);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp708 = (frost$core$Int64) {232u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:233:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn710 $tmp709 = ($fn710) ((frost$core$Object*) param0)->$class->vtable[0];
frost$core$String* $tmp711 = $tmp709(((frost$core$Object*) param0));
frost$core$String* $tmp712 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s713, $tmp711);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$String* $tmp714 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp712, &$s715);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s716, $tmp708, $tmp714);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
abort(); // unreachable
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp674)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp669)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:234
org$frostlang$frostc$Position* $tmp717 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp718 = *$tmp717;
frost$core$Int64 $tmp719 = $tmp718.line;
return $tmp719;

}
frost$core$Bit org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:238
org$frostlang$frostc$FixedArray** $tmp720 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp721 = *$tmp720;
frost$core$Bit $tmp722 = (frost$core$Bit) {$tmp721 != NULL};
return $tmp722;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp723 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp724 = *$tmp723;
frost$core$Bit $tmp725 = (frost$core$Bit) {$tmp724 != NULL};
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp727 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s728, $tmp727);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp729 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp730 = *$tmp729;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
return $tmp730;

}
frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp731 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp732 = *$tmp731;
frost$core$String** $tmp733 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp734 = *$tmp733;
frost$core$Bit $tmp735 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp732, $tmp734);
bool $tmp736 = $tmp735.value;
if ($tmp736) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Type$Kind* $tmp737 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp738 = *$tmp737;
org$frostlang$frostc$Type$Kind$wrapper* $tmp739;
$tmp739 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp739->value = $tmp738;
org$frostlang$frostc$Type$Kind* $tmp740 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp741 = *$tmp740;
org$frostlang$frostc$Type$Kind$wrapper* $tmp742;
$tmp742 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp742->value = $tmp741;
ITable* $tmp743 = ((frost$core$Equatable*) $tmp739)->$class->itable;
while ($tmp743->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp743 = $tmp743->next;
}
$fn745 $tmp744 = $tmp743->methods[0];
frost$core$Bit $tmp746 = $tmp744(((frost$core$Equatable*) $tmp739), ((frost$core$Equatable*) $tmp742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp742)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp739)));
*(&local0) = $tmp746;
goto block3;
block2:;
*(&local0) = $tmp735;
goto block3;
block3:;
frost$core$Bit $tmp747 = *(&local0);
return $tmp747;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$IntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp748 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp749;
$tmp749 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp749->value = param0;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:258:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn751 $tmp750 = ($fn751) ((frost$core$Object*) $tmp749)->$class->vtable[0];
frost$core$String* $tmp752 = $tmp750(((frost$core$Object*) $tmp749));
frost$core$String* $tmp753 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s754, $tmp752);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$core$String* $tmp755 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp753, &$s756);
frost$core$Int64 $tmp757 = (frost$core$Int64) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:53
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp758 = &(&local1)->$rawValue;
*$tmp758 = $tmp757;
org$frostlang$frostc$Type$Kind $tmp759 = *(&local1);
*(&local0) = $tmp759;
org$frostlang$frostc$Type$Kind $tmp760 = *(&local0);
org$frostlang$frostc$Position $tmp761 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp762 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp748, $tmp755, $tmp760, $tmp761, $tmp762);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
return $tmp748;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$NegatedIntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:263
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp763 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp764;
$tmp764 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp764->value = param0;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:263:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn766 $tmp765 = ($fn766) ((frost$core$Object*) $tmp764)->$class->vtable[0];
frost$core$String* $tmp767 = $tmp765(((frost$core$Object*) $tmp764));
frost$core$String* $tmp768 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s769, $tmp767);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$String* $tmp770 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp768, &$s771);
frost$core$Int64 $tmp772 = (frost$core$Int64) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:263:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp773 = &(&local1)->$rawValue;
*$tmp773 = $tmp772;
org$frostlang$frostc$Type$Kind $tmp774 = *(&local1);
*(&local0) = $tmp774;
org$frostlang$frostc$Type$Kind $tmp775 = *(&local0);
org$frostlang$frostc$Position $tmp776 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp777 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp763, $tmp770, $tmp775, $tmp776, $tmp777);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
return $tmp763;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RealLiteral$frost$core$Real64$R$org$frostlang$frostc$Type(frost$core$Real64 param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:268
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp778 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Real64$wrapper* $tmp779;
$tmp779 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp779->value = param0;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:268:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn781 $tmp780 = ($fn781) ((frost$core$Object*) $tmp779)->$class->vtable[0];
frost$core$String* $tmp782 = $tmp780(((frost$core$Object*) $tmp779));
frost$core$String* $tmp783 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s784, $tmp782);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$String* $tmp785 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp783, &$s786);
frost$core$Int64 $tmp787 = (frost$core$Int64) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:268:50
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp788 = &(&local1)->$rawValue;
*$tmp788 = $tmp787;
org$frostlang$frostc$Type$Kind $tmp789 = *(&local1);
*(&local0) = $tmp789;
org$frostlang$frostc$Type$Kind $tmp790 = *(&local0);
org$frostlang$frostc$Position $tmp791 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp792 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp778, $tmp785, $tmp790, $tmp791, $tmp792);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
return $tmp778;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ClassLiteral$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:273
org$frostlang$frostc$Type** $tmp793 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp794 = *$tmp793;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp795 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp796 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp795, $tmp796);
frost$collections$Array$add$frost$collections$Array$T($tmp795, ((frost$core$Object*) param1));
org$frostlang$frostc$Type* $tmp797 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp794, ((frost$collections$ListView*) $tmp795));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
return $tmp797;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:278
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp798 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:278:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s799));
frost$core$String* $tmp800 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s801, &$s802);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:278:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn804 $tmp803 = ($fn804) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp805 = $tmp803(((frost$core$Object*) param1));
frost$core$String* $tmp806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp800, $tmp805);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$String* $tmp807 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp806, &$s808);
frost$core$Int64 $tmp809 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:278:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp810 = &(&local1)->$rawValue;
*$tmp810 = $tmp809;
org$frostlang$frostc$Type$Kind $tmp811 = *(&local1);
*(&local0) = $tmp811;
org$frostlang$frostc$Type$Kind $tmp812 = *(&local0);
org$frostlang$frostc$Position* $tmp813 = &((org$frostlang$frostc$Symbol*) param1)->position;
org$frostlang$frostc$Position $tmp814 = *$tmp813;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp815 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp816 = (frost$core$Int64) {2u};
frost$collections$Array$init$frost$core$Int64($tmp815, $tmp816);
org$frostlang$frostc$Type** $tmp817 = &param0->WEAK_TYPE;
org$frostlang$frostc$Type* $tmp818 = *$tmp817;
frost$collections$Array$add$frost$collections$Array$T($tmp815, ((frost$core$Object*) $tmp818));
frost$collections$Array$add$frost$collections$Array$T($tmp815, ((frost$core$Object*) param1));
frost$core$Bit* $tmp819 = &param1->resolved;
frost$core$Bit $tmp820 = *$tmp819;
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp798, $tmp807, $tmp812, $tmp814, ((frost$collections$ListView*) $tmp815), $tmp820);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) &$s821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
return $tmp798;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:284
org$frostlang$frostc$Type** $tmp822 = &param0->POINTER_TYPE;
org$frostlang$frostc$Type* $tmp823 = *$tmp822;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp824 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp825 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp824, $tmp825);
frost$collections$Array$add$frost$collections$Array$T($tmp824, ((frost$core$Object*) param1));
org$frostlang$frostc$Type* $tmp826 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp823, ((frost$collections$ListView*) $tmp824));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
return $tmp826;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ArrayOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:289
org$frostlang$frostc$Type** $tmp827 = &param0->ARRAY_TYPE;
org$frostlang$frostc$Type* $tmp828 = *$tmp827;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp829 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp830 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp829, $tmp830);
frost$collections$Array$add$frost$collections$Array$T($tmp829, ((frost$core$Object*) param1));
org$frostlang$frostc$Type* $tmp831 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp828, ((frost$collections$ListView*) $tmp829));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
return $tmp831;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ImmutableArrayOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:294
org$frostlang$frostc$Type** $tmp832 = &param0->IMMUTABLE_ARRAY_TYPE;
org$frostlang$frostc$Type* $tmp833 = *$tmp832;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp834 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp835 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp834, $tmp835);
frost$collections$Array$add$frost$collections$Array$T($tmp834, ((frost$core$Object*) param1));
org$frostlang$frostc$Type* $tmp836 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp833, ((frost$collections$ListView*) $tmp834));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
return $tmp836;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:299
org$frostlang$frostc$Type** $tmp837 = &param0->RANGE_TYPE;
org$frostlang$frostc$Type* $tmp838 = *$tmp837;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp839 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp840 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp839, $tmp840);
frost$collections$Array$add$frost$collections$Array$T($tmp839, ((frost$core$Object*) param1));
org$frostlang$frostc$Type* $tmp841 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp838, ((frost$collections$ListView*) $tmp839));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
return $tmp841;

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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:304
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp842 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp842);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
frost$collections$Array* $tmp843 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local0) = $tmp842;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:305
frost$collections$Array* $tmp844 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp844, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:306
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:306:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp845 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp846 = *$tmp845;
org$frostlang$frostc$Type$Kind$wrapper* $tmp847;
$tmp847 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp847->value = $tmp846;
frost$core$Int64 $tmp848 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp849 = &(&local3)->$rawValue;
*$tmp849 = $tmp848;
org$frostlang$frostc$Type$Kind $tmp850 = *(&local3);
*(&local2) = $tmp850;
org$frostlang$frostc$Type$Kind $tmp851 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp852;
$tmp852 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp852->value = $tmp851;
ITable* $tmp853 = ((frost$core$Equatable*) $tmp847)->$class->itable;
while ($tmp853->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp853 = $tmp853->next;
}
$fn855 $tmp854 = $tmp853->methods[1];
frost$core$Bit $tmp856 = $tmp854(((frost$core$Equatable*) $tmp847), ((frost$core$Equatable*) $tmp852));
bool $tmp857 = $tmp856.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp852)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp847)));
if ($tmp857) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local1) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp858 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp859 = *$tmp858;
frost$core$Bit $tmp860 = (frost$core$Bit) {$tmp859 != NULL};
bool $tmp861 = $tmp860.value;
if ($tmp861) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp862 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s863, $tmp862);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp864 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp865 = *$tmp864;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
frost$core$Int64 $tmp866 = (frost$core$Int64) {0u};
frost$core$Object* $tmp867 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp865, $tmp866);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp867)));
frost$core$Frost$unref$frost$core$Object$Q($tmp867);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp867);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp867)));
goto block4;
block4:;
org$frostlang$frostc$Type* $tmp868 = *(&local1);
org$frostlang$frostc$Type** $tmp869 = &param0->CHAR8_TYPE;
org$frostlang$frostc$Type* $tmp870 = *$tmp869;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:306:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp871 = &((org$frostlang$frostc$Symbol*) $tmp868)->name;
frost$core$String* $tmp872 = *$tmp871;
frost$core$String** $tmp873 = &((org$frostlang$frostc$Symbol*) $tmp870)->name;
frost$core$String* $tmp874 = *$tmp873;
frost$core$Bit $tmp875 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp872, $tmp874);
bool $tmp876 = $tmp875.value;
if ($tmp876) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Type$Kind* $tmp877 = &$tmp868->typeKind;
org$frostlang$frostc$Type$Kind $tmp878 = *$tmp877;
org$frostlang$frostc$Type$Kind$wrapper* $tmp879;
$tmp879 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp879->value = $tmp878;
org$frostlang$frostc$Type$Kind* $tmp880 = &$tmp870->typeKind;
org$frostlang$frostc$Type$Kind $tmp881 = *$tmp880;
org$frostlang$frostc$Type$Kind$wrapper* $tmp882;
$tmp882 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp882->value = $tmp881;
ITable* $tmp883 = ((frost$core$Equatable*) $tmp879)->$class->itable;
while ($tmp883->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp883 = $tmp883->next;
}
$fn885 $tmp884 = $tmp883->methods[0];
frost$core$Bit $tmp886 = $tmp884(((frost$core$Equatable*) $tmp879), ((frost$core$Equatable*) $tmp882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp882)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp879)));
*(&local4) = $tmp886;
goto block14;
block13:;
*(&local4) = $tmp875;
goto block14;
block14:;
frost$core$Bit $tmp887 = *(&local4);
bool $tmp888 = $tmp887.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
if ($tmp888) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:307
frost$collections$Array* $tmp889 = *(&local0);
org$frostlang$frostc$Type** $tmp890 = &param0->INT8_TYPE;
org$frostlang$frostc$Type* $tmp891 = *$tmp890;
frost$collections$Array$add$frost$collections$Array$T($tmp889, ((frost$core$Object*) $tmp891));
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:309
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:309:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp892 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp893 = *$tmp892;
org$frostlang$frostc$Type$Kind$wrapper* $tmp894;
$tmp894 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp894->value = $tmp893;
frost$core$Int64 $tmp895 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp896 = &(&local7)->$rawValue;
*$tmp896 = $tmp895;
org$frostlang$frostc$Type$Kind $tmp897 = *(&local7);
*(&local6) = $tmp897;
org$frostlang$frostc$Type$Kind $tmp898 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp899;
$tmp899 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp899->value = $tmp898;
ITable* $tmp900 = ((frost$core$Equatable*) $tmp894)->$class->itable;
while ($tmp900->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp900 = $tmp900->next;
}
$fn902 $tmp901 = $tmp900->methods[1];
frost$core$Bit $tmp903 = $tmp901(((frost$core$Equatable*) $tmp894), ((frost$core$Equatable*) $tmp899));
bool $tmp904 = $tmp903.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp899)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp894)));
if ($tmp904) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local5) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block18;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp905 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp906 = *$tmp905;
frost$core$Bit $tmp907 = (frost$core$Bit) {$tmp906 != NULL};
bool $tmp908 = $tmp907.value;
if ($tmp908) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp909 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s910, $tmp909);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp911 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp912 = *$tmp911;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
frost$core$Int64 $tmp913 = (frost$core$Int64) {0u};
frost$core$Object* $tmp914 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp912, $tmp913);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp914)));
frost$core$Frost$unref$frost$core$Object$Q($tmp914);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp914);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp914)));
goto block18;
block18:;
org$frostlang$frostc$Type* $tmp915 = *(&local5);
org$frostlang$frostc$Type** $tmp916 = &param0->CHAR16_TYPE;
org$frostlang$frostc$Type* $tmp917 = *$tmp916;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:309:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp918 = &((org$frostlang$frostc$Symbol*) $tmp915)->name;
frost$core$String* $tmp919 = *$tmp918;
frost$core$String** $tmp920 = &((org$frostlang$frostc$Symbol*) $tmp917)->name;
frost$core$String* $tmp921 = *$tmp920;
frost$core$Bit $tmp922 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp919, $tmp921);
bool $tmp923 = $tmp922.value;
if ($tmp923) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Type$Kind* $tmp924 = &$tmp915->typeKind;
org$frostlang$frostc$Type$Kind $tmp925 = *$tmp924;
org$frostlang$frostc$Type$Kind$wrapper* $tmp926;
$tmp926 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp926->value = $tmp925;
org$frostlang$frostc$Type$Kind* $tmp927 = &$tmp917->typeKind;
org$frostlang$frostc$Type$Kind $tmp928 = *$tmp927;
org$frostlang$frostc$Type$Kind$wrapper* $tmp929;
$tmp929 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp929->value = $tmp928;
ITable* $tmp930 = ((frost$core$Equatable*) $tmp926)->$class->itable;
while ($tmp930->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp930 = $tmp930->next;
}
$fn932 $tmp931 = $tmp930->methods[0];
frost$core$Bit $tmp933 = $tmp931(((frost$core$Equatable*) $tmp926), ((frost$core$Equatable*) $tmp929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp929)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp926)));
*(&local8) = $tmp933;
goto block28;
block27:;
*(&local8) = $tmp922;
goto block28;
block28:;
frost$core$Bit $tmp934 = *(&local8);
bool $tmp935 = $tmp934.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
if ($tmp935) goto block15; else goto block17;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:310
frost$collections$Array* $tmp936 = *(&local0);
org$frostlang$frostc$Type** $tmp937 = &param0->INT16_TYPE;
org$frostlang$frostc$Type* $tmp938 = *$tmp937;
frost$collections$Array$add$frost$collections$Array$T($tmp936, ((frost$core$Object*) $tmp938));
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:312
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:312:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp939 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp940 = *$tmp939;
org$frostlang$frostc$Type$Kind$wrapper* $tmp941;
$tmp941 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp941->value = $tmp940;
frost$core$Int64 $tmp942 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp943 = &(&local11)->$rawValue;
*$tmp943 = $tmp942;
org$frostlang$frostc$Type$Kind $tmp944 = *(&local11);
*(&local10) = $tmp944;
org$frostlang$frostc$Type$Kind $tmp945 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp946;
$tmp946 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp946->value = $tmp945;
ITable* $tmp947 = ((frost$core$Equatable*) $tmp941)->$class->itable;
while ($tmp947->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp947 = $tmp947->next;
}
$fn949 $tmp948 = $tmp947->methods[1];
frost$core$Bit $tmp950 = $tmp948(((frost$core$Equatable*) $tmp941), ((frost$core$Equatable*) $tmp946));
bool $tmp951 = $tmp950.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp946)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp941)));
if ($tmp951) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local9) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block32;
block34:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp952 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp953 = *$tmp952;
frost$core$Bit $tmp954 = (frost$core$Bit) {$tmp953 != NULL};
bool $tmp955 = $tmp954.value;
if ($tmp955) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp956 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s957, $tmp956);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp958 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp959 = *$tmp958;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$core$Int64 $tmp960 = (frost$core$Int64) {0u};
frost$core$Object* $tmp961 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp959, $tmp960);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp961)));
frost$core$Frost$unref$frost$core$Object$Q($tmp961);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp961);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp961)));
goto block32;
block32:;
org$frostlang$frostc$Type* $tmp962 = *(&local9);
org$frostlang$frostc$Type** $tmp963 = &param0->CHAR32_TYPE;
org$frostlang$frostc$Type* $tmp964 = *$tmp963;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:312:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp965 = &((org$frostlang$frostc$Symbol*) $tmp962)->name;
frost$core$String* $tmp966 = *$tmp965;
frost$core$String** $tmp967 = &((org$frostlang$frostc$Symbol*) $tmp964)->name;
frost$core$String* $tmp968 = *$tmp967;
frost$core$Bit $tmp969 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp966, $tmp968);
bool $tmp970 = $tmp969.value;
if ($tmp970) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Type$Kind* $tmp971 = &$tmp962->typeKind;
org$frostlang$frostc$Type$Kind $tmp972 = *$tmp971;
org$frostlang$frostc$Type$Kind$wrapper* $tmp973;
$tmp973 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp973->value = $tmp972;
org$frostlang$frostc$Type$Kind* $tmp974 = &$tmp964->typeKind;
org$frostlang$frostc$Type$Kind $tmp975 = *$tmp974;
org$frostlang$frostc$Type$Kind$wrapper* $tmp976;
$tmp976 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp976->value = $tmp975;
ITable* $tmp977 = ((frost$core$Equatable*) $tmp973)->$class->itable;
while ($tmp977->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp977 = $tmp977->next;
}
$fn979 $tmp978 = $tmp977->methods[0];
frost$core$Bit $tmp980 = $tmp978(((frost$core$Equatable*) $tmp973), ((frost$core$Equatable*) $tmp976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp976)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp973)));
*(&local12) = $tmp980;
goto block42;
block41:;
*(&local12) = $tmp969;
goto block42;
block42:;
frost$core$Bit $tmp981 = *(&local12);
bool $tmp982 = $tmp981.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
if ($tmp982) goto block29; else goto block31;
block29:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:313
frost$collections$Array* $tmp983 = *(&local0);
org$frostlang$frostc$Type** $tmp984 = &param0->INT32_TYPE;
org$frostlang$frostc$Type* $tmp985 = *$tmp984;
frost$collections$Array$add$frost$collections$Array$T($tmp983, ((frost$core$Object*) $tmp985));
goto block30;
block31:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:316
frost$collections$Array* $tmp986 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:316:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp987 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp988 = *$tmp987;
org$frostlang$frostc$Type$Kind$wrapper* $tmp989;
$tmp989 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp989->value = $tmp988;
frost$core$Int64 $tmp990 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp991 = &(&local15)->$rawValue;
*$tmp991 = $tmp990;
org$frostlang$frostc$Type$Kind $tmp992 = *(&local15);
*(&local14) = $tmp992;
org$frostlang$frostc$Type$Kind $tmp993 = *(&local14);
org$frostlang$frostc$Type$Kind$wrapper* $tmp994;
$tmp994 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp994->value = $tmp993;
ITable* $tmp995 = ((frost$core$Equatable*) $tmp989)->$class->itable;
while ($tmp995->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp995 = $tmp995->next;
}
$fn997 $tmp996 = $tmp995->methods[1];
frost$core$Bit $tmp998 = $tmp996(((frost$core$Equatable*) $tmp989), ((frost$core$Equatable*) $tmp994));
bool $tmp999 = $tmp998.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp994)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp989)));
if ($tmp999) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
*(&local13) = param1;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
goto block43;
block45:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1000 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1001 = *$tmp1000;
frost$core$Bit $tmp1002 = (frost$core$Bit) {$tmp1001 != NULL};
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp1004 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1005, $tmp1004);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1006 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1007 = *$tmp1006;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
frost$core$Int64 $tmp1008 = (frost$core$Int64) {0u};
frost$core$Object* $tmp1009 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1007, $tmp1008);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1009)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1009);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
*(&local13) = ((org$frostlang$frostc$Type*) $tmp1009);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1009)));
goto block43;
block43:;
org$frostlang$frostc$Type* $tmp1010 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp986, ((frost$core$Object*) $tmp1010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
org$frostlang$frostc$Type* $tmp1011 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block30;
block30:;
goto block16;
block16:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:318
org$frostlang$frostc$Type** $tmp1012 = &param0->STEPPED_RANGE_TYPE;
org$frostlang$frostc$Type* $tmp1013 = *$tmp1012;
frost$collections$Array* $tmp1014 = *(&local0);
org$frostlang$frostc$Type* $tmp1015 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1013, ((frost$collections$ListView*) $tmp1014));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
org$frostlang$frostc$Type* $tmp1016 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1017 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1018 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1019 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1015;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$Type* param2) {

frost$collections$Array* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:323
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1020 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1020);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$collections$Array* $tmp1021 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
*(&local0) = $tmp1020;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:324
frost$collections$Array* $tmp1022 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1022, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:325
frost$collections$Array* $tmp1023 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1023, ((frost$core$Object*) param2));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:326
org$frostlang$frostc$Type** $tmp1024 = &param0->STEPPED_RANGE_TYPE;
org$frostlang$frostc$Type* $tmp1025 = *$tmp1024;
frost$collections$Array* $tmp1026 = *(&local0);
org$frostlang$frostc$Type* $tmp1027 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1025, ((frost$collections$ListView*) $tmp1026));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
frost$collections$Array* $tmp1028 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1027;

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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:330
frost$core$String** $tmp1029 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1030 = *$tmp1029;
frost$core$Bit $tmp1031 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1030, &$s1032);
bool $tmp1033 = $tmp1031.value;
if ($tmp1033) goto block1; else goto block2;
block1:;
*(&local3) = $tmp1031;
goto block3;
block2:;
frost$core$String** $tmp1034 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1035 = *$tmp1034;
frost$core$Bit $tmp1036 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1035, &$s1037);
*(&local3) = $tmp1036;
goto block3;
block3:;
frost$core$Bit $tmp1038 = *(&local3);
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block4; else goto block5;
block4:;
*(&local2) = $tmp1038;
goto block6;
block5:;
frost$core$String** $tmp1040 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1041 = *$tmp1040;
frost$core$Bit $tmp1042 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1041, &$s1043);
*(&local2) = $tmp1042;
goto block6;
block6:;
frost$core$Bit $tmp1044 = *(&local2);
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block7; else goto block8;
block7:;
*(&local1) = $tmp1044;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1046 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1047 = *$tmp1046;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1048;
$tmp1048 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1048->value = $tmp1047;
frost$core$Int64 $tmp1049 = (frost$core$Int64) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:331:69
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1050 = &(&local5)->$rawValue;
*$tmp1050 = $tmp1049;
org$frostlang$frostc$Type$Kind $tmp1051 = *(&local5);
*(&local4) = $tmp1051;
org$frostlang$frostc$Type$Kind $tmp1052 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1053;
$tmp1053 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1053->value = $tmp1052;
ITable* $tmp1054 = ((frost$core$Equatable*) $tmp1048)->$class->itable;
while ($tmp1054->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1054 = $tmp1054->next;
}
$fn1056 $tmp1055 = $tmp1054->methods[0];
frost$core$Bit $tmp1057 = $tmp1055(((frost$core$Equatable*) $tmp1048), ((frost$core$Equatable*) $tmp1053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1053)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1048)));
*(&local1) = $tmp1057;
goto block9;
block9:;
frost$core$Bit $tmp1058 = *(&local1);
bool $tmp1059 = $tmp1058.value;
if ($tmp1059) goto block11; else goto block12;
block11:;
*(&local0) = $tmp1058;
goto block13;
block12:;
org$frostlang$frostc$Type$Kind* $tmp1060 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1061 = *$tmp1060;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1062;
$tmp1062 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1062->value = $tmp1061;
frost$core$Int64 $tmp1063 = (frost$core$Int64) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:332:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1064 = &(&local7)->$rawValue;
*$tmp1064 = $tmp1063;
org$frostlang$frostc$Type$Kind $tmp1065 = *(&local7);
*(&local6) = $tmp1065;
org$frostlang$frostc$Type$Kind $tmp1066 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1067;
$tmp1067 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1067->value = $tmp1066;
ITable* $tmp1068 = ((frost$core$Equatable*) $tmp1062)->$class->itable;
while ($tmp1068->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1068 = $tmp1068->next;
}
$fn1070 $tmp1069 = $tmp1068->methods[0];
frost$core$Bit $tmp1071 = $tmp1069(((frost$core$Equatable*) $tmp1062), ((frost$core$Equatable*) $tmp1067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1067)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1062)));
*(&local0) = $tmp1071;
goto block13;
block13:;
frost$core$Bit $tmp1072 = *(&local0);
return $tmp1072;

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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:336
org$frostlang$frostc$Type$Kind* $tmp1073 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1074 = *$tmp1073;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1075;
$tmp1075 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1075->value = $tmp1074;
frost$core$Int64 $tmp1076 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:336:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1077 = &(&local4)->$rawValue;
*$tmp1077 = $tmp1076;
org$frostlang$frostc$Type$Kind $tmp1078 = *(&local4);
*(&local3) = $tmp1078;
org$frostlang$frostc$Type$Kind $tmp1079 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1080;
$tmp1080 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1080->value = $tmp1079;
ITable* $tmp1081 = ((frost$core$Equatable*) $tmp1075)->$class->itable;
while ($tmp1081->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1081 = $tmp1081->next;
}
$fn1083 $tmp1082 = $tmp1081->methods[0];
frost$core$Bit $tmp1084 = $tmp1082(((frost$core$Equatable*) $tmp1075), ((frost$core$Equatable*) $tmp1080));
bool $tmp1085 = $tmp1084.value;
if ($tmp1085) goto block2; else goto block3;
block2:;
*(&local2) = $tmp1084;
goto block4;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1086 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1087 = *$tmp1086;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1088;
$tmp1088 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1088->value = $tmp1087;
frost$core$Int64 $tmp1089 = (frost$core$Int64) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:336:61
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1090 = &(&local6)->$rawValue;
*$tmp1090 = $tmp1089;
org$frostlang$frostc$Type$Kind $tmp1091 = *(&local6);
*(&local5) = $tmp1091;
org$frostlang$frostc$Type$Kind $tmp1092 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1093;
$tmp1093 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1093->value = $tmp1092;
ITable* $tmp1094 = ((frost$core$Equatable*) $tmp1088)->$class->itable;
while ($tmp1094->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1094 = $tmp1094->next;
}
$fn1096 $tmp1095 = $tmp1094->methods[0];
frost$core$Bit $tmp1097 = $tmp1095(((frost$core$Equatable*) $tmp1088), ((frost$core$Equatable*) $tmp1093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1093)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1088)));
*(&local2) = $tmp1097;
goto block4;
block4:;
frost$core$Bit $tmp1098 = *(&local2);
bool $tmp1099 = $tmp1098.value;
if ($tmp1099) goto block6; else goto block7;
block6:;
*(&local1) = $tmp1098;
goto block8;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1100 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1101 = *$tmp1100;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1102;
$tmp1102 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1102->value = $tmp1101;
frost$core$Int64 $tmp1103 = (frost$core$Int64) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:337:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1104 = &(&local8)->$rawValue;
*$tmp1104 = $tmp1103;
org$frostlang$frostc$Type$Kind $tmp1105 = *(&local8);
*(&local7) = $tmp1105;
org$frostlang$frostc$Type$Kind $tmp1106 = *(&local7);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1107;
$tmp1107 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1107->value = $tmp1106;
ITable* $tmp1108 = ((frost$core$Equatable*) $tmp1102)->$class->itable;
while ($tmp1108->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1108 = $tmp1108->next;
}
$fn1110 $tmp1109 = $tmp1108->methods[0];
frost$core$Bit $tmp1111 = $tmp1109(((frost$core$Equatable*) $tmp1102), ((frost$core$Equatable*) $tmp1107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1107)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1102)));
*(&local1) = $tmp1111;
goto block8;
block8:;
frost$core$Bit $tmp1112 = *(&local1);
bool $tmp1113 = $tmp1112.value;
if ($tmp1113) goto block10; else goto block11;
block10:;
*(&local0) = $tmp1112;
goto block12;
block11:;
org$frostlang$frostc$Type$Kind* $tmp1114 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1115 = *$tmp1114;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1116;
$tmp1116 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1116->value = $tmp1115;
frost$core$Int64 $tmp1117 = (frost$core$Int64) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:337:64
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1118 = &(&local10)->$rawValue;
*$tmp1118 = $tmp1117;
org$frostlang$frostc$Type$Kind $tmp1119 = *(&local10);
*(&local9) = $tmp1119;
org$frostlang$frostc$Type$Kind $tmp1120 = *(&local9);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1121;
$tmp1121 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1121->value = $tmp1120;
ITable* $tmp1122 = ((frost$core$Equatable*) $tmp1116)->$class->itable;
while ($tmp1122->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1122 = $tmp1122->next;
}
$fn1124 $tmp1123 = $tmp1122->methods[0];
frost$core$Bit $tmp1125 = $tmp1123(((frost$core$Equatable*) $tmp1116), ((frost$core$Equatable*) $tmp1121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1121)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1116)));
*(&local0) = $tmp1125;
goto block12;
block12:;
frost$core$Bit $tmp1126 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1080)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1075)));
return $tmp1126;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:341
frost$core$String** $tmp1127 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1128 = *$tmp1127;
frost$core$Bit $tmp1129 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1128, &$s1130);
return $tmp1129;

}
frost$core$Bit org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:345
org$frostlang$frostc$Type$Kind* $tmp1131 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1132 = *$tmp1131;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1133;
$tmp1133 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1133->value = $tmp1132;
frost$core$Int64 $tmp1134 = (frost$core$Int64) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:345:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1135 = &(&local2)->$rawValue;
*$tmp1135 = $tmp1134;
org$frostlang$frostc$Type$Kind $tmp1136 = *(&local2);
*(&local1) = $tmp1136;
org$frostlang$frostc$Type$Kind $tmp1137 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1138;
$tmp1138 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1138->value = $tmp1137;
ITable* $tmp1139 = ((frost$core$Equatable*) $tmp1133)->$class->itable;
while ($tmp1139->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1139 = $tmp1139->next;
}
$fn1141 $tmp1140 = $tmp1139->methods[0];
frost$core$Bit $tmp1142 = $tmp1140(((frost$core$Equatable*) $tmp1133), ((frost$core$Equatable*) $tmp1138));
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block2; else goto block3;
block2:;
*(&local0) = $tmp1142;
goto block4;
block3:;
frost$core$String** $tmp1144 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1145 = *$tmp1144;
frost$core$Bit $tmp1146 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1145, &$s1147);
*(&local0) = $tmp1146;
goto block4;
block4:;
frost$core$Bit $tmp1148 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1138)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1133)));
return $tmp1148;

}
frost$core$Bit org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:349
frost$core$String** $tmp1149 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1150 = *$tmp1149;
frost$core$Bit $tmp1151 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1150, &$s1152);
return $tmp1151;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:353
frost$core$Bit $tmp1153 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1154 = $tmp1153.value;
if ($tmp1154) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1153;
goto block3;
block2:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:353:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:349
frost$core$String** $tmp1155 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1156 = *$tmp1155;
frost$core$Bit $tmp1157 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1156, &$s1158);
*(&local0) = $tmp1157;
goto block3;
block3:;
frost$core$Bit $tmp1159 = *(&local0);
return $tmp1159;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:357
org$frostlang$frostc$Type$Kind* $tmp1160 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1161 = *$tmp1160;
frost$core$Int64 $tmp1162 = $tmp1161.$rawValue;
frost$core$Int64 $tmp1163 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:358:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1164 = $tmp1162.value;
int64_t $tmp1165 = $tmp1163.value;
bool $tmp1166 = $tmp1164 == $tmp1165;
frost$core$Bit $tmp1167 = (frost$core$Bit) {$tmp1166};
bool $tmp1168 = $tmp1167.value;
if ($tmp1168) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1169 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:358:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1170 = $tmp1162.value;
int64_t $tmp1171 = $tmp1169.value;
bool $tmp1172 = $tmp1170 == $tmp1171;
frost$core$Bit $tmp1173 = (frost$core$Bit) {$tmp1172};
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1175 = (frost$core$Int64) {11u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:358:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1176 = $tmp1162.value;
int64_t $tmp1177 = $tmp1175.value;
bool $tmp1178 = $tmp1176 == $tmp1177;
frost$core$Bit $tmp1179 = (frost$core$Bit) {$tmp1178};
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp1181 = (frost$core$Int64) {12u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:358:63
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1182 = $tmp1162.value;
int64_t $tmp1183 = $tmp1181.value;
bool $tmp1184 = $tmp1182 == $tmp1183;
frost$core$Bit $tmp1185 = (frost$core$Bit) {$tmp1184};
bool $tmp1186 = $tmp1185.value;
if ($tmp1186) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp1187 = (frost$core$Int64) {13u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:359:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1188 = $tmp1162.value;
int64_t $tmp1189 = $tmp1187.value;
bool $tmp1190 = $tmp1188 == $tmp1189;
frost$core$Bit $tmp1191 = (frost$core$Bit) {$tmp1190};
bool $tmp1192 = $tmp1191.value;
if ($tmp1192) goto block2; else goto block11;
block11:;
frost$core$Int64 $tmp1193 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:359:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1194 = $tmp1162.value;
int64_t $tmp1195 = $tmp1193.value;
bool $tmp1196 = $tmp1194 == $tmp1195;
frost$core$Bit $tmp1197 = (frost$core$Bit) {$tmp1196};
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block2; else goto block13;
block13:;
frost$core$Int64 $tmp1199 = (frost$core$Int64) {15u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:359:69
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1200 = $tmp1162.value;
int64_t $tmp1201 = $tmp1199.value;
bool $tmp1202 = $tmp1200 == $tmp1201;
frost$core$Bit $tmp1203 = (frost$core$Bit) {$tmp1202};
bool $tmp1204 = $tmp1203.value;
if ($tmp1204) goto block2; else goto block15;
block15:;
frost$core$Int64 $tmp1205 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:360:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1206 = $tmp1162.value;
int64_t $tmp1207 = $tmp1205.value;
bool $tmp1208 = $tmp1206 == $tmp1207;
frost$core$Bit $tmp1209 = (frost$core$Bit) {$tmp1208};
bool $tmp1210 = $tmp1209.value;
if ($tmp1210) goto block2; else goto block17;
block17:;
frost$core$Int64 $tmp1211 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:360:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1212 = $tmp1162.value;
int64_t $tmp1213 = $tmp1211.value;
bool $tmp1214 = $tmp1212 == $tmp1213;
frost$core$Bit $tmp1215 = (frost$core$Bit) {$tmp1214};
bool $tmp1216 = $tmp1215.value;
if ($tmp1216) goto block2; else goto block19;
block19:;
frost$core$Int64 $tmp1217 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:360:73
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1218 = $tmp1162.value;
int64_t $tmp1219 = $tmp1217.value;
bool $tmp1220 = $tmp1218 == $tmp1219;
frost$core$Bit $tmp1221 = (frost$core$Bit) {$tmp1220};
bool $tmp1222 = $tmp1221.value;
if ($tmp1222) goto block2; else goto block21;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:361
frost$core$Bit $tmp1223 = (frost$core$Bit) {true};
return $tmp1223;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:364
frost$core$Bit $tmp1224 = (frost$core$Bit) {false};
return $tmp1224;
block1:;
goto block23;
block23:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:370
org$frostlang$frostc$Type$Kind* $tmp1225 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1226 = *$tmp1225;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1227;
$tmp1227 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1227->value = $tmp1226;
frost$core$Int64 $tmp1228 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:370:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1229 = &(&local2)->$rawValue;
*$tmp1229 = $tmp1228;
org$frostlang$frostc$Type$Kind $tmp1230 = *(&local2);
*(&local1) = $tmp1230;
org$frostlang$frostc$Type$Kind $tmp1231 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1232;
$tmp1232 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1232->value = $tmp1231;
ITable* $tmp1233 = ((frost$core$Equatable*) $tmp1227)->$class->itable;
while ($tmp1233->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1233 = $tmp1233->next;
}
$fn1235 $tmp1234 = $tmp1233->methods[0];
frost$core$Bit $tmp1236 = $tmp1234(((frost$core$Equatable*) $tmp1227), ((frost$core$Equatable*) $tmp1232));
bool $tmp1237 = $tmp1236.value;
if ($tmp1237) goto block2; else goto block3;
block2:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:370:42
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1238 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1239 = *$tmp1238;
frost$core$Bit $tmp1240 = (frost$core$Bit) {$tmp1239 != NULL};
bool $tmp1241 = $tmp1240.value;
if ($tmp1241) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp1242 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1243, $tmp1242);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1244 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1245 = *$tmp1244;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
frost$core$Int64 $tmp1246 = (frost$core$Int64) {0u};
frost$core$Object* $tmp1247 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1245, $tmp1246);
frost$core$String** $tmp1248 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp1247))->name;
frost$core$String* $tmp1249 = *$tmp1248;
frost$core$Bit $tmp1250 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1249, &$s1251);
frost$core$Frost$unref$frost$core$Object$Q($tmp1247);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
*(&local0) = $tmp1250;
goto block4;
block3:;
*(&local0) = $tmp1236;
goto block4;
block4:;
frost$core$Bit $tmp1252 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1232)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1227)));
return $tmp1252;

}
frost$core$Bit org$frostlang$frostc$Type$get_isTuple$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:374
org$frostlang$frostc$Type$Kind* $tmp1253 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1254 = *$tmp1253;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1255;
$tmp1255 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1255->value = $tmp1254;
frost$core$Int64 $tmp1256 = (frost$core$Int64) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:374:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1257 = &(&local1)->$rawValue;
*$tmp1257 = $tmp1256;
org$frostlang$frostc$Type$Kind $tmp1258 = *(&local1);
*(&local0) = $tmp1258;
org$frostlang$frostc$Type$Kind $tmp1259 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1260;
$tmp1260 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1260->value = $tmp1259;
ITable* $tmp1261 = ((frost$core$Equatable*) $tmp1255)->$class->itable;
while ($tmp1261->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1261 = $tmp1261->next;
}
$fn1263 $tmp1262 = $tmp1261->methods[0];
frost$core$Bit $tmp1264 = $tmp1262(((frost$core$Equatable*) $tmp1255), ((frost$core$Equatable*) $tmp1260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1260)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1255)));
return $tmp1264;

}
frost$core$Bit org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:378
org$frostlang$frostc$Type$Kind* $tmp1265 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1266 = *$tmp1265;
frost$core$Int64 $tmp1267 = $tmp1266.$rawValue;
frost$core$Int64 $tmp1268 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1269 = $tmp1267.value;
int64_t $tmp1270 = $tmp1268.value;
bool $tmp1271 = $tmp1269 == $tmp1270;
frost$core$Bit $tmp1272 = (frost$core$Bit) {$tmp1271};
bool $tmp1273 = $tmp1272.value;
if ($tmp1273) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1274 = (frost$core$Int64) {15u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1275 = $tmp1267.value;
int64_t $tmp1276 = $tmp1274.value;
bool $tmp1277 = $tmp1275 == $tmp1276;
frost$core$Bit $tmp1278 = (frost$core$Bit) {$tmp1277};
bool $tmp1279 = $tmp1278.value;
if ($tmp1279) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1280 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:50
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1281 = $tmp1267.value;
int64_t $tmp1282 = $tmp1280.value;
bool $tmp1283 = $tmp1281 == $tmp1282;
frost$core$Bit $tmp1284 = (frost$core$Bit) {$tmp1283};
bool $tmp1285 = $tmp1284.value;
if ($tmp1285) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp1286 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:379:73
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp1287 = $tmp1267.value;
int64_t $tmp1288 = $tmp1286.value;
bool $tmp1289 = $tmp1287 == $tmp1288;
frost$core$Bit $tmp1290 = (frost$core$Bit) {$tmp1289};
bool $tmp1291 = $tmp1290.value;
if ($tmp1291) goto block2; else goto block9;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:380
frost$core$Bit $tmp1292 = (frost$core$Bit) {true};
return $tmp1292;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:383
frost$core$Bit $tmp1293 = (frost$core$Bit) {false};
return $tmp1293;
block1:;
goto block11;
block11:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:389
frost$core$String** $tmp1294 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1295 = *$tmp1294;
frost$core$Bit $tmp1296 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1295, &$s1297);
return $tmp1296;

}
frost$core$Bit org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:393
frost$core$String** $tmp1298 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1299 = *$tmp1298;
frost$core$Bit $tmp1300 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1299, &$s1301);
return $tmp1300;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:397
frost$core$String** $tmp1302 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1303 = *$tmp1302;
frost$core$Bit $tmp1304 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1303, &$s1305);
return $tmp1304;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:401
org$frostlang$frostc$Type$Kind* $tmp1306 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1307 = *$tmp1306;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1308;
$tmp1308 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1308->value = $tmp1307;
frost$core$Int64 $tmp1309 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:401:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1310 = &(&local1)->$rawValue;
*$tmp1310 = $tmp1309;
org$frostlang$frostc$Type$Kind $tmp1311 = *(&local1);
*(&local0) = $tmp1311;
org$frostlang$frostc$Type$Kind $tmp1312 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1313;
$tmp1313 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1313->value = $tmp1312;
ITable* $tmp1314 = ((frost$core$Equatable*) $tmp1308)->$class->itable;
while ($tmp1314->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1314 = $tmp1314->next;
}
$fn1316 $tmp1315 = $tmp1314->methods[0];
frost$core$Bit $tmp1317 = $tmp1315(((frost$core$Equatable*) $tmp1308), ((frost$core$Equatable*) $tmp1313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1313)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1308)));
return $tmp1317;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:405
org$frostlang$frostc$Type$Kind* $tmp1318 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1319 = *$tmp1318;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1320;
$tmp1320 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1320->value = $tmp1319;
frost$core$Int64 $tmp1321 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:405:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1322 = &(&local1)->$rawValue;
*$tmp1322 = $tmp1321;
org$frostlang$frostc$Type$Kind $tmp1323 = *(&local1);
*(&local0) = $tmp1323;
org$frostlang$frostc$Type$Kind $tmp1324 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1325;
$tmp1325 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1325->value = $tmp1324;
ITable* $tmp1326 = ((frost$core$Equatable*) $tmp1320)->$class->itable;
while ($tmp1326->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1326 = $tmp1326->next;
}
$fn1328 $tmp1327 = $tmp1326->methods[0];
frost$core$Bit $tmp1329 = $tmp1327(((frost$core$Equatable*) $tmp1320), ((frost$core$Equatable*) $tmp1325));
bool $tmp1330 = $tmp1329.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1325)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1320)));
if ($tmp1330) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:406
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:408
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1331 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1331);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
frost$collections$Array* $tmp1332 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
*(&local2) = $tmp1331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:409
frost$collections$Array* $tmp1333 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp1333, ((frost$core$Object*) param0));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:410
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1334 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String** $tmp1335 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1336 = *$tmp1335;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:410:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$core$String* $tmp1337 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1336, &$s1338);
frost$core$Int64 $tmp1339 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:410:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1340 = &(&local4)->$rawValue;
*$tmp1340 = $tmp1339;
org$frostlang$frostc$Type$Kind $tmp1341 = *(&local4);
*(&local3) = $tmp1341;
org$frostlang$frostc$Type$Kind $tmp1342 = *(&local3);
org$frostlang$frostc$Position $tmp1343 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp1344 = *(&local2);
frost$core$Bit $tmp1345 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp1334, $tmp1337, $tmp1342, $tmp1343, ((frost$collections$ListView*) $tmp1344), $tmp1345);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
frost$collections$Array* $tmp1346 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
*(&local2) = ((frost$collections$Array*) NULL);
return $tmp1334;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:414
org$frostlang$frostc$Type$Kind* $tmp1347 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1348 = *$tmp1347;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1349;
$tmp1349 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1349->value = $tmp1348;
frost$core$Int64 $tmp1350 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:414:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1351 = &(&local1)->$rawValue;
*$tmp1351 = $tmp1350;
org$frostlang$frostc$Type$Kind $tmp1352 = *(&local1);
*(&local0) = $tmp1352;
org$frostlang$frostc$Type$Kind $tmp1353 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1354;
$tmp1354 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1354->value = $tmp1353;
ITable* $tmp1355 = ((frost$core$Equatable*) $tmp1349)->$class->itable;
while ($tmp1355->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1355 = $tmp1355->next;
}
$fn1357 $tmp1356 = $tmp1355->methods[1];
frost$core$Bit $tmp1358 = $tmp1356(((frost$core$Equatable*) $tmp1349), ((frost$core$Equatable*) $tmp1354));
bool $tmp1359 = $tmp1358.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1354)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1349)));
if ($tmp1359) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:415
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:417
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:417:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1360 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1361 = *$tmp1360;
frost$core$Bit $tmp1362 = (frost$core$Bit) {$tmp1361 != NULL};
bool $tmp1363 = $tmp1362.value;
if ($tmp1363) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp1364 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1365, $tmp1364);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1366 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1367 = *$tmp1366;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
frost$core$Int64 $tmp1368 = (frost$core$Int64) {0u};
frost$core$Object* $tmp1369 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1367, $tmp1368);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1369)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1369);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
return ((org$frostlang$frostc$Type*) $tmp1369);

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
org$frostlang$frostc$Type$Kind* $tmp1370 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1371 = *$tmp1370;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1372;
$tmp1372 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1372->value = $tmp1371;
frost$core$Int64 $tmp1373 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:420:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1374 = &(&local1)->$rawValue;
*$tmp1374 = $tmp1373;
org$frostlang$frostc$Type$Kind $tmp1375 = *(&local1);
*(&local0) = $tmp1375;
org$frostlang$frostc$Type$Kind $tmp1376 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1377;
$tmp1377 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1377->value = $tmp1376;
ITable* $tmp1378 = ((frost$core$Equatable*) $tmp1372)->$class->itable;
while ($tmp1378->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1378 = $tmp1378->next;
}
$fn1380 $tmp1379 = $tmp1378->methods[0];
frost$core$Bit $tmp1381 = $tmp1379(((frost$core$Equatable*) $tmp1372), ((frost$core$Equatable*) $tmp1377));
bool $tmp1382 = $tmp1381.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1377)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1372)));
if ($tmp1382) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1383 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1384 = *$tmp1383;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1385;
$tmp1385 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1385->value = $tmp1384;
frost$core$Int64 $tmp1386 = (frost$core$Int64) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:420:52
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1387 = &(&local3)->$rawValue;
*$tmp1387 = $tmp1386;
org$frostlang$frostc$Type$Kind $tmp1388 = *(&local3);
*(&local2) = $tmp1388;
org$frostlang$frostc$Type$Kind $tmp1389 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1390;
$tmp1390 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1390->value = $tmp1389;
ITable* $tmp1391 = ((frost$core$Equatable*) $tmp1385)->$class->itable;
while ($tmp1391->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1391 = $tmp1391->next;
}
$fn1393 $tmp1392 = $tmp1391->methods[0];
frost$core$Bit $tmp1394 = $tmp1392(((frost$core$Equatable*) $tmp1385), ((frost$core$Equatable*) $tmp1390));
bool $tmp1395 = $tmp1394.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1390)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1385)));
if ($tmp1395) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1396 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1397 = *$tmp1396;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1398;
$tmp1398 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1398->value = $tmp1397;
frost$core$Int64 $tmp1399 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:420:77
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1400 = &(&local5)->$rawValue;
*$tmp1400 = $tmp1399;
org$frostlang$frostc$Type$Kind $tmp1401 = *(&local5);
*(&local4) = $tmp1401;
org$frostlang$frostc$Type$Kind $tmp1402 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1403;
$tmp1403 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1403->value = $tmp1402;
ITable* $tmp1404 = ((frost$core$Equatable*) $tmp1398)->$class->itable;
while ($tmp1404->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1404 = $tmp1404->next;
}
$fn1406 $tmp1405 = $tmp1404->methods[0];
frost$core$Bit $tmp1407 = $tmp1405(((frost$core$Equatable*) $tmp1398), ((frost$core$Equatable*) $tmp1403));
bool $tmp1408 = $tmp1407.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1403)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1398)));
if ($tmp1408) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1409 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1410 = *$tmp1409;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1411;
$tmp1411 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1411->value = $tmp1410;
frost$core$Int64 $tmp1412 = (frost$core$Int64) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:421:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1413 = &(&local7)->$rawValue;
*$tmp1413 = $tmp1412;
org$frostlang$frostc$Type$Kind $tmp1414 = *(&local7);
*(&local6) = $tmp1414;
org$frostlang$frostc$Type$Kind $tmp1415 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1416;
$tmp1416 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1416->value = $tmp1415;
ITable* $tmp1417 = ((frost$core$Equatable*) $tmp1411)->$class->itable;
while ($tmp1417->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1417 = $tmp1417->next;
}
$fn1419 $tmp1418 = $tmp1417->methods[0];
frost$core$Bit $tmp1420 = $tmp1418(((frost$core$Equatable*) $tmp1411), ((frost$core$Equatable*) $tmp1416));
bool $tmp1421 = $tmp1420.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1416)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1411)));
if ($tmp1421) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1422 = (frost$core$Int64) {422u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1423, $tmp1422, &$s1424);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:423
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:423:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1425 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1426 = *$tmp1425;
frost$core$Bit $tmp1427 = (frost$core$Bit) {$tmp1426 != NULL};
bool $tmp1428 = $tmp1427.value;
if ($tmp1428) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1429 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1430, $tmp1429);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1431 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1432 = *$tmp1431;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
ITable* $tmp1433 = ((frost$collections$CollectionView*) $tmp1432)->$class->itable;
while ($tmp1433->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1433 = $tmp1433->next;
}
$fn1435 $tmp1434 = $tmp1433->methods[0];
frost$core$Int64 $tmp1436 = $tmp1434(((frost$collections$CollectionView*) $tmp1432));
frost$core$Int64 $tmp1437 = (frost$core$Int64) {1u};
int64_t $tmp1438 = $tmp1436.value;
int64_t $tmp1439 = $tmp1437.value;
int64_t $tmp1440 = $tmp1438 - $tmp1439;
frost$core$Int64 $tmp1441 = (frost$core$Int64) {$tmp1440};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
return $tmp1441;

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
org$frostlang$frostc$Type$Kind* $tmp1442 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1443 = *$tmp1442;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1444;
$tmp1444 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1444->value = $tmp1443;
frost$core$Int64 $tmp1445 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:426:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1446 = &(&local1)->$rawValue;
*$tmp1446 = $tmp1445;
org$frostlang$frostc$Type$Kind $tmp1447 = *(&local1);
*(&local0) = $tmp1447;
org$frostlang$frostc$Type$Kind $tmp1448 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1449;
$tmp1449 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1449->value = $tmp1448;
ITable* $tmp1450 = ((frost$core$Equatable*) $tmp1444)->$class->itable;
while ($tmp1450->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1450 = $tmp1450->next;
}
$fn1452 $tmp1451 = $tmp1450->methods[0];
frost$core$Bit $tmp1453 = $tmp1451(((frost$core$Equatable*) $tmp1444), ((frost$core$Equatable*) $tmp1449));
bool $tmp1454 = $tmp1453.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1449)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1444)));
if ($tmp1454) goto block4; else goto block7;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1455 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1456 = *$tmp1455;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1457;
$tmp1457 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1457->value = $tmp1456;
frost$core$Int64 $tmp1458 = (frost$core$Int64) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:426:53
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1459 = &(&local3)->$rawValue;
*$tmp1459 = $tmp1458;
org$frostlang$frostc$Type$Kind $tmp1460 = *(&local3);
*(&local2) = $tmp1460;
org$frostlang$frostc$Type$Kind $tmp1461 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1462;
$tmp1462 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1462->value = $tmp1461;
ITable* $tmp1463 = ((frost$core$Equatable*) $tmp1457)->$class->itable;
while ($tmp1463->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1463 = $tmp1463->next;
}
$fn1465 $tmp1464 = $tmp1463->methods[0];
frost$core$Bit $tmp1466 = $tmp1464(((frost$core$Equatable*) $tmp1457), ((frost$core$Equatable*) $tmp1462));
bool $tmp1467 = $tmp1466.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1462)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1457)));
if ($tmp1467) goto block4; else goto block6;
block6:;
org$frostlang$frostc$Type$Kind* $tmp1468 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1469 = *$tmp1468;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1470;
$tmp1470 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1470->value = $tmp1469;
frost$core$Int64 $tmp1471 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:426:78
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1472 = &(&local5)->$rawValue;
*$tmp1472 = $tmp1471;
org$frostlang$frostc$Type$Kind $tmp1473 = *(&local5);
*(&local4) = $tmp1473;
org$frostlang$frostc$Type$Kind $tmp1474 = *(&local4);
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
if ($tmp1480) goto block4; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1481 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1482 = *$tmp1481;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1483;
$tmp1483 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1483->value = $tmp1482;
frost$core$Int64 $tmp1484 = (frost$core$Int64) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:427:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1485 = &(&local7)->$rawValue;
*$tmp1485 = $tmp1484;
org$frostlang$frostc$Type$Kind $tmp1486 = *(&local7);
*(&local6) = $tmp1486;
org$frostlang$frostc$Type$Kind $tmp1487 = *(&local6);
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
if ($tmp1493) goto block4; else goto block2;
block4:;
frost$core$Int64 $tmp1494 = (frost$core$Int64) {0u};
int64_t $tmp1495 = param1.value;
int64_t $tmp1496 = $tmp1494.value;
bool $tmp1497 = $tmp1495 >= $tmp1496;
frost$core$Bit $tmp1498 = (frost$core$Bit) {$tmp1497};
bool $tmp1499 = $tmp1498.value;
if ($tmp1499) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:427:62
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1500 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1501 = *$tmp1500;
frost$core$Bit $tmp1502 = (frost$core$Bit) {$tmp1501 != NULL};
bool $tmp1503 = $tmp1502.value;
if ($tmp1503) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1504 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1505, $tmp1504);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1506 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1507 = *$tmp1506;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
ITable* $tmp1508 = ((frost$collections$CollectionView*) $tmp1507)->$class->itable;
while ($tmp1508->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1508 = $tmp1508->next;
}
$fn1510 $tmp1509 = $tmp1508->methods[0];
frost$core$Int64 $tmp1511 = $tmp1509(((frost$collections$CollectionView*) $tmp1507));
frost$core$Int64 $tmp1512 = (frost$core$Int64) {1u};
int64_t $tmp1513 = $tmp1511.value;
int64_t $tmp1514 = $tmp1512.value;
int64_t $tmp1515 = $tmp1513 - $tmp1514;
frost$core$Int64 $tmp1516 = (frost$core$Int64) {$tmp1515};
int64_t $tmp1517 = param1.value;
int64_t $tmp1518 = $tmp1516.value;
bool $tmp1519 = $tmp1517 < $tmp1518;
frost$core$Bit $tmp1520 = (frost$core$Bit) {$tmp1519};
bool $tmp1521 = $tmp1520.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
if ($tmp1521) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1522 = (frost$core$Int64) {428u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1523, $tmp1522, &$s1524);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:429
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:429:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1525 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1526 = *$tmp1525;
frost$core$Bit $tmp1527 = (frost$core$Bit) {$tmp1526 != NULL};
bool $tmp1528 = $tmp1527.value;
if ($tmp1528) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp1529 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1530, $tmp1529);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1531 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1532 = *$tmp1531;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
frost$core$Object* $tmp1533 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1532, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1533)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1533);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
return ((org$frostlang$frostc$Type*) $tmp1533);

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
org$frostlang$frostc$Type$Kind* $tmp1534 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1535 = *$tmp1534;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1536;
$tmp1536 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1536->value = $tmp1535;
frost$core$Int64 $tmp1537 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1538 = &(&local1)->$rawValue;
*$tmp1538 = $tmp1537;
org$frostlang$frostc$Type$Kind $tmp1539 = *(&local1);
*(&local0) = $tmp1539;
org$frostlang$frostc$Type$Kind $tmp1540 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1541;
$tmp1541 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1541->value = $tmp1540;
ITable* $tmp1542 = ((frost$core$Equatable*) $tmp1536)->$class->itable;
while ($tmp1542->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1542 = $tmp1542->next;
}
$fn1544 $tmp1543 = $tmp1542->methods[0];
frost$core$Bit $tmp1545 = $tmp1543(((frost$core$Equatable*) $tmp1536), ((frost$core$Equatable*) $tmp1541));
bool $tmp1546 = $tmp1545.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1541)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1536)));
if ($tmp1546) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1547 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1548 = *$tmp1547;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1549;
$tmp1549 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1549->value = $tmp1548;
frost$core$Int64 $tmp1550 = (frost$core$Int64) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:52
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1551 = &(&local3)->$rawValue;
*$tmp1551 = $tmp1550;
org$frostlang$frostc$Type$Kind $tmp1552 = *(&local3);
*(&local2) = $tmp1552;
org$frostlang$frostc$Type$Kind $tmp1553 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1554;
$tmp1554 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1554->value = $tmp1553;
ITable* $tmp1555 = ((frost$core$Equatable*) $tmp1549)->$class->itable;
while ($tmp1555->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1555 = $tmp1555->next;
}
$fn1557 $tmp1556 = $tmp1555->methods[0];
frost$core$Bit $tmp1558 = $tmp1556(((frost$core$Equatable*) $tmp1549), ((frost$core$Equatable*) $tmp1554));
bool $tmp1559 = $tmp1558.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1554)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1549)));
if ($tmp1559) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1560 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1561 = *$tmp1560;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1562;
$tmp1562 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1562->value = $tmp1561;
frost$core$Int64 $tmp1563 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:432:77
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1564 = &(&local5)->$rawValue;
*$tmp1564 = $tmp1563;
org$frostlang$frostc$Type$Kind $tmp1565 = *(&local5);
*(&local4) = $tmp1565;
org$frostlang$frostc$Type$Kind $tmp1566 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1567;
$tmp1567 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1567->value = $tmp1566;
ITable* $tmp1568 = ((frost$core$Equatable*) $tmp1562)->$class->itable;
while ($tmp1568->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1568 = $tmp1568->next;
}
$fn1570 $tmp1569 = $tmp1568->methods[0];
frost$core$Bit $tmp1571 = $tmp1569(((frost$core$Equatable*) $tmp1562), ((frost$core$Equatable*) $tmp1567));
bool $tmp1572 = $tmp1571.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1567)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1562)));
if ($tmp1572) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1573 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1574 = *$tmp1573;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1575;
$tmp1575 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1575->value = $tmp1574;
frost$core$Int64 $tmp1576 = (frost$core$Int64) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:433:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1577 = &(&local7)->$rawValue;
*$tmp1577 = $tmp1576;
org$frostlang$frostc$Type$Kind $tmp1578 = *(&local7);
*(&local6) = $tmp1578;
org$frostlang$frostc$Type$Kind $tmp1579 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1580;
$tmp1580 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1580->value = $tmp1579;
ITable* $tmp1581 = ((frost$core$Equatable*) $tmp1575)->$class->itable;
while ($tmp1581->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1581 = $tmp1581->next;
}
$fn1583 $tmp1582 = $tmp1581->methods[0];
frost$core$Bit $tmp1584 = $tmp1582(((frost$core$Equatable*) $tmp1575), ((frost$core$Equatable*) $tmp1580));
bool $tmp1585 = $tmp1584.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1580)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1575)));
if ($tmp1585) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1586 = (frost$core$Int64) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1587, $tmp1586, &$s1588);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:435
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1589 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1590 = *$tmp1589;
frost$core$Bit $tmp1591 = (frost$core$Bit) {$tmp1590 != NULL};
bool $tmp1592 = $tmp1591.value;
if ($tmp1592) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1593 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1594, $tmp1593);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1595 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1596 = *$tmp1595;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1597 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1598 = *$tmp1597;
frost$core$Bit $tmp1599 = (frost$core$Bit) {$tmp1598 != NULL};
bool $tmp1600 = $tmp1599.value;
if ($tmp1600) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp1601 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1602, $tmp1601);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1603 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1604 = *$tmp1603;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
ITable* $tmp1605 = ((frost$collections$CollectionView*) $tmp1604)->$class->itable;
while ($tmp1605->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1605 = $tmp1605->next;
}
$fn1607 $tmp1606 = $tmp1605->methods[0];
frost$core$Int64 $tmp1608 = $tmp1606(((frost$collections$CollectionView*) $tmp1604));
frost$core$Int64 $tmp1609 = (frost$core$Int64) {1u};
int64_t $tmp1610 = $tmp1608.value;
int64_t $tmp1611 = $tmp1609.value;
int64_t $tmp1612 = $tmp1610 - $tmp1611;
frost$core$Int64 $tmp1613 = (frost$core$Int64) {$tmp1612};
frost$core$Object* $tmp1614 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1596, $tmp1613);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1614)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1614);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
return ((org$frostlang$frostc$Type*) $tmp1614);

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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:442
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:442:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1615 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1616 = *$tmp1615;
frost$core$String** $tmp1617 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1618 = *$tmp1617;
frost$core$Bit $tmp1619 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1616, $tmp1618);
bool $tmp1620 = $tmp1619.value;
if ($tmp1620) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1621 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1622 = *$tmp1621;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1623;
$tmp1623 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1623->value = $tmp1622;
org$frostlang$frostc$Type$Kind* $tmp1624 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1625 = *$tmp1624;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1626;
$tmp1626 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1626->value = $tmp1625;
ITable* $tmp1627 = ((frost$core$Equatable*) $tmp1623)->$class->itable;
while ($tmp1627->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1627 = $tmp1627->next;
}
$fn1629 $tmp1628 = $tmp1627->methods[0];
frost$core$Bit $tmp1630 = $tmp1628(((frost$core$Equatable*) $tmp1623), ((frost$core$Equatable*) $tmp1626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1626)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1623)));
*(&local0) = $tmp1630;
goto block6;
block5:;
*(&local0) = $tmp1619;
goto block6;
block6:;
frost$core$Bit $tmp1631 = *(&local0);
bool $tmp1632 = $tmp1631.value;
if ($tmp1632) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:443
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:445
org$frostlang$frostc$Type** $tmp1633 = &param1->NULL_TYPE;
org$frostlang$frostc$Type* $tmp1634 = *$tmp1633;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:445:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1635 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1636 = *$tmp1635;
frost$core$String** $tmp1637 = &((org$frostlang$frostc$Symbol*) $tmp1634)->name;
frost$core$String* $tmp1638 = *$tmp1637;
frost$core$Bit $tmp1639 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1636, $tmp1638);
bool $tmp1640 = $tmp1639.value;
if ($tmp1640) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Type$Kind* $tmp1641 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1642 = *$tmp1641;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1643;
$tmp1643 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1643->value = $tmp1642;
org$frostlang$frostc$Type$Kind* $tmp1644 = &$tmp1634->typeKind;
org$frostlang$frostc$Type$Kind $tmp1645 = *$tmp1644;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1646;
$tmp1646 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1646->value = $tmp1645;
ITable* $tmp1647 = ((frost$core$Equatable*) $tmp1643)->$class->itable;
while ($tmp1647->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1647 = $tmp1647->next;
}
$fn1649 $tmp1648 = $tmp1647->methods[0];
frost$core$Bit $tmp1650 = $tmp1648(((frost$core$Equatable*) $tmp1643), ((frost$core$Equatable*) $tmp1646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1646)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1643)));
*(&local1) = $tmp1650;
goto block12;
block11:;
*(&local1) = $tmp1639;
goto block12;
block12:;
frost$core$Bit $tmp1651 = *(&local1);
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:446
org$frostlang$frostc$Type$Kind* $tmp1653 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1654 = *$tmp1653;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1655;
$tmp1655 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1655->value = $tmp1654;
frost$core$Int64 $tmp1656 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:446:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1657 = &(&local3)->$rawValue;
*$tmp1657 = $tmp1656;
org$frostlang$frostc$Type$Kind $tmp1658 = *(&local3);
*(&local2) = $tmp1658;
org$frostlang$frostc$Type$Kind $tmp1659 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1660;
$tmp1660 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1660->value = $tmp1659;
ITable* $tmp1661 = ((frost$core$Equatable*) $tmp1655)->$class->itable;
while ($tmp1661->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1661 = $tmp1661->next;
}
$fn1663 $tmp1662 = $tmp1661->methods[0];
frost$core$Bit $tmp1664 = $tmp1662(((frost$core$Equatable*) $tmp1655), ((frost$core$Equatable*) $tmp1660));
bool $tmp1665 = $tmp1664.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1660)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1655)));
if ($tmp1665) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:447
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:449
org$frostlang$frostc$Type* $tmp1666 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
return $tmp1666;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:451
org$frostlang$frostc$Type** $tmp1667 = &param1->NULL_TYPE;
org$frostlang$frostc$Type* $tmp1668 = *$tmp1667;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:451:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1669 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1670 = *$tmp1669;
frost$core$String** $tmp1671 = &((org$frostlang$frostc$Symbol*) $tmp1668)->name;
frost$core$String* $tmp1672 = *$tmp1671;
frost$core$Bit $tmp1673 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1670, $tmp1672);
bool $tmp1674 = $tmp1673.value;
if ($tmp1674) goto block19; else goto block20;
block19:;
org$frostlang$frostc$Type$Kind* $tmp1675 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1676 = *$tmp1675;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1677;
$tmp1677 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1677->value = $tmp1676;
org$frostlang$frostc$Type$Kind* $tmp1678 = &$tmp1668->typeKind;
org$frostlang$frostc$Type$Kind $tmp1679 = *$tmp1678;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1680;
$tmp1680 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1680->value = $tmp1679;
ITable* $tmp1681 = ((frost$core$Equatable*) $tmp1677)->$class->itable;
while ($tmp1681->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1681 = $tmp1681->next;
}
$fn1683 $tmp1682 = $tmp1681->methods[0];
frost$core$Bit $tmp1684 = $tmp1682(((frost$core$Equatable*) $tmp1677), ((frost$core$Equatable*) $tmp1680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1680)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1677)));
*(&local4) = $tmp1684;
goto block21;
block20:;
*(&local4) = $tmp1673;
goto block21;
block21:;
frost$core$Bit $tmp1685 = *(&local4);
bool $tmp1686 = $tmp1685.value;
if ($tmp1686) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:452
org$frostlang$frostc$Type$Kind* $tmp1687 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1688 = *$tmp1687;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1689;
$tmp1689 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1689->value = $tmp1688;
frost$core$Int64 $tmp1690 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:452:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1691 = &(&local6)->$rawValue;
*$tmp1691 = $tmp1690;
org$frostlang$frostc$Type$Kind $tmp1692 = *(&local6);
*(&local5) = $tmp1692;
org$frostlang$frostc$Type$Kind $tmp1693 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1694;
$tmp1694 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1694->value = $tmp1693;
ITable* $tmp1695 = ((frost$core$Equatable*) $tmp1689)->$class->itable;
while ($tmp1695->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1695 = $tmp1695->next;
}
$fn1697 $tmp1696 = $tmp1695->methods[0];
frost$core$Bit $tmp1698 = $tmp1696(((frost$core$Equatable*) $tmp1689), ((frost$core$Equatable*) $tmp1694));
bool $tmp1699 = $tmp1698.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1694)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1689)));
if ($tmp1699) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:453
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:455
org$frostlang$frostc$Type* $tmp1700 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
return $tmp1700;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:457
org$frostlang$frostc$Type** $tmp1701 = &param1->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp1702 = *$tmp1701;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:457:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1703 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1704 = *$tmp1703;
frost$core$String** $tmp1705 = &((org$frostlang$frostc$Symbol*) $tmp1702)->name;
frost$core$String* $tmp1706 = *$tmp1705;
frost$core$Bit $tmp1707 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1704, $tmp1706);
bool $tmp1708 = $tmp1707.value;
if ($tmp1708) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Type$Kind* $tmp1709 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1710 = *$tmp1709;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1711;
$tmp1711 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1711->value = $tmp1710;
org$frostlang$frostc$Type$Kind* $tmp1712 = &$tmp1702->typeKind;
org$frostlang$frostc$Type$Kind $tmp1713 = *$tmp1712;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1714;
$tmp1714 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1714->value = $tmp1713;
ITable* $tmp1715 = ((frost$core$Equatable*) $tmp1711)->$class->itable;
while ($tmp1715->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1715 = $tmp1715->next;
}
$fn1717 $tmp1716 = $tmp1715->methods[0];
frost$core$Bit $tmp1718 = $tmp1716(((frost$core$Equatable*) $tmp1711), ((frost$core$Equatable*) $tmp1714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1714)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1711)));
*(&local7) = $tmp1718;
goto block30;
block29:;
*(&local7) = $tmp1707;
goto block30;
block30:;
frost$core$Bit $tmp1719 = *(&local7);
bool $tmp1720 = $tmp1719.value;
if ($tmp1720) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:458
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:460
org$frostlang$frostc$Type** $tmp1721 = &param1->INVALID_TYPE;
org$frostlang$frostc$Type* $tmp1722 = *$tmp1721;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:460:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp1723 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1724 = *$tmp1723;
frost$core$String** $tmp1725 = &((org$frostlang$frostc$Symbol*) $tmp1722)->name;
frost$core$String* $tmp1726 = *$tmp1725;
frost$core$Bit $tmp1727 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1724, $tmp1726);
bool $tmp1728 = $tmp1727.value;
if ($tmp1728) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Type$Kind* $tmp1729 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1730 = *$tmp1729;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1731;
$tmp1731 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1731->value = $tmp1730;
org$frostlang$frostc$Type$Kind* $tmp1732 = &$tmp1722->typeKind;
org$frostlang$frostc$Type$Kind $tmp1733 = *$tmp1732;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1734;
$tmp1734 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1734->value = $tmp1733;
ITable* $tmp1735 = ((frost$core$Equatable*) $tmp1731)->$class->itable;
while ($tmp1735->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1735 = $tmp1735->next;
}
$fn1737 $tmp1736 = $tmp1735->methods[0];
frost$core$Bit $tmp1738 = $tmp1736(((frost$core$Equatable*) $tmp1731), ((frost$core$Equatable*) $tmp1734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1734)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1731)));
*(&local8) = $tmp1738;
goto block36;
block35:;
*(&local8) = $tmp1727;
goto block36;
block36:;
frost$core$Bit $tmp1739 = *(&local8);
bool $tmp1740 = $tmp1739.value;
if ($tmp1740) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:461
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:463
org$frostlang$frostc$Type$Kind* $tmp1741 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1742 = *$tmp1741;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1743;
$tmp1743 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1743->value = $tmp1742;
frost$core$Int64 $tmp1744 = (frost$core$Int64) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:463:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1745 = &(&local10)->$rawValue;
*$tmp1745 = $tmp1744;
org$frostlang$frostc$Type$Kind $tmp1746 = *(&local10);
*(&local9) = $tmp1746;
org$frostlang$frostc$Type$Kind $tmp1747 = *(&local9);
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1748)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1743)));
if ($tmp1753) goto block39; else goto block38;
block39:;
frost$core$Bit $tmp1754 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1755 = $tmp1754.value;
if ($tmp1755) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:464
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block38:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:466
frost$core$Bit $tmp1756 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1757 = $tmp1756.value;
if ($tmp1757) goto block43; else goto block42;
block43:;
org$frostlang$frostc$Type$Kind* $tmp1758 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1759 = *$tmp1758;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1760;
$tmp1760 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1760->value = $tmp1759;
frost$core$Int64 $tmp1761 = (frost$core$Int64) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:466:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1762 = &(&local12)->$rawValue;
*$tmp1762 = $tmp1761;
org$frostlang$frostc$Type$Kind $tmp1763 = *(&local12);
*(&local11) = $tmp1763;
org$frostlang$frostc$Type$Kind $tmp1764 = *(&local11);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1765;
$tmp1765 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1765->value = $tmp1764;
ITable* $tmp1766 = ((frost$core$Equatable*) $tmp1760)->$class->itable;
while ($tmp1766->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1766 = $tmp1766->next;
}
$fn1768 $tmp1767 = $tmp1766->methods[0];
frost$core$Bit $tmp1769 = $tmp1767(((frost$core$Equatable*) $tmp1760), ((frost$core$Equatable*) $tmp1765));
bool $tmp1770 = $tmp1769.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1765)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1760)));
if ($tmp1770) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:467
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block42:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:469
// begin inline call to function org.frostlang.frostc.Type.get_isReal():frost.core.Bit from Type.frost:469:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:345
org$frostlang$frostc$Type$Kind* $tmp1771 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1772 = *$tmp1771;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1773;
$tmp1773 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1773->value = $tmp1772;
frost$core$Int64 $tmp1774 = (frost$core$Int64) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:345:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1775 = &(&local15)->$rawValue;
*$tmp1775 = $tmp1774;
org$frostlang$frostc$Type$Kind $tmp1776 = *(&local15);
*(&local14) = $tmp1776;
org$frostlang$frostc$Type$Kind $tmp1777 = *(&local14);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1778;
$tmp1778 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1778->value = $tmp1777;
ITable* $tmp1779 = ((frost$core$Equatable*) $tmp1773)->$class->itable;
while ($tmp1779->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1779 = $tmp1779->next;
}
$fn1781 $tmp1780 = $tmp1779->methods[0];
frost$core$Bit $tmp1782 = $tmp1780(((frost$core$Equatable*) $tmp1773), ((frost$core$Equatable*) $tmp1778));
bool $tmp1783 = $tmp1782.value;
if ($tmp1783) goto block49; else goto block50;
block49:;
*(&local13) = $tmp1782;
goto block51;
block50:;
frost$core$String** $tmp1784 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1785 = *$tmp1784;
frost$core$Bit $tmp1786 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1785, &$s1787);
*(&local13) = $tmp1786;
goto block51;
block51:;
frost$core$Bit $tmp1788 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1778)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1773)));
bool $tmp1789 = $tmp1788.value;
if ($tmp1789) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:470
org$frostlang$frostc$Type$Kind* $tmp1790 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1791 = *$tmp1790;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1792;
$tmp1792 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1792->value = $tmp1791;
frost$core$Int64 $tmp1793 = (frost$core$Int64) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:470:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1794 = &(&local17)->$rawValue;
*$tmp1794 = $tmp1793;
org$frostlang$frostc$Type$Kind $tmp1795 = *(&local17);
*(&local16) = $tmp1795;
org$frostlang$frostc$Type$Kind $tmp1796 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1797;
$tmp1797 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1797->value = $tmp1796;
ITable* $tmp1798 = ((frost$core$Equatable*) $tmp1792)->$class->itable;
while ($tmp1798->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1798 = $tmp1798->next;
}
$fn1800 $tmp1799 = $tmp1798->methods[0];
frost$core$Bit $tmp1801 = $tmp1799(((frost$core$Equatable*) $tmp1792), ((frost$core$Equatable*) $tmp1797));
bool $tmp1802 = $tmp1801.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1797)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1792)));
if ($tmp1802) goto block52; else goto block54;
block54:;
org$frostlang$frostc$Type$Kind* $tmp1803 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1804 = *$tmp1803;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1805;
$tmp1805 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1805->value = $tmp1804;
frost$core$Int64 $tmp1806 = (frost$core$Int64) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:470:73
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1807 = &(&local19)->$rawValue;
*$tmp1807 = $tmp1806;
org$frostlang$frostc$Type$Kind $tmp1808 = *(&local19);
*(&local18) = $tmp1808;
org$frostlang$frostc$Type$Kind $tmp1809 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1810;
$tmp1810 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1810->value = $tmp1809;
ITable* $tmp1811 = ((frost$core$Equatable*) $tmp1805)->$class->itable;
while ($tmp1811->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1811 = $tmp1811->next;
}
$fn1813 $tmp1812 = $tmp1811->methods[0];
frost$core$Bit $tmp1814 = $tmp1812(((frost$core$Equatable*) $tmp1805), ((frost$core$Equatable*) $tmp1810));
bool $tmp1815 = $tmp1814.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1810)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1805)));
if ($tmp1815) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:471
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block53:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:473
frost$core$Bit $tmp1816 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1817 = $tmp1816.value;
if ($tmp1817) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:474
frost$core$String** $tmp1818 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1819 = *$tmp1818;
frost$core$Bit $tmp1820 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1819, &$s1821);
bool $tmp1822 = $tmp1820.value;
if ($tmp1822) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:475
org$frostlang$frostc$Type** $tmp1823 = &param1->REAL64_TYPE;
org$frostlang$frostc$Type* $tmp1824 = *$tmp1823;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
return $tmp1824;
block60:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:477
org$frostlang$frostc$Type** $tmp1825 = &param1->REAL32_TYPE;
org$frostlang$frostc$Type* $tmp1826 = *$tmp1825;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
return $tmp1826;
block58:;
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:480
// begin inline call to function org.frostlang.frostc.Type.get_isReal():frost.core.Bit from Type.frost:480:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:345
org$frostlang$frostc$Type$Kind* $tmp1827 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1828 = *$tmp1827;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1829;
$tmp1829 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1829->value = $tmp1828;
frost$core$Int64 $tmp1830 = (frost$core$Int64) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:345:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1831 = &(&local22)->$rawValue;
*$tmp1831 = $tmp1830;
org$frostlang$frostc$Type$Kind $tmp1832 = *(&local22);
*(&local21) = $tmp1832;
org$frostlang$frostc$Type$Kind $tmp1833 = *(&local21);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1834;
$tmp1834 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1834->value = $tmp1833;
ITable* $tmp1835 = ((frost$core$Equatable*) $tmp1829)->$class->itable;
while ($tmp1835->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1835 = $tmp1835->next;
}
$fn1837 $tmp1836 = $tmp1835->methods[0];
frost$core$Bit $tmp1838 = $tmp1836(((frost$core$Equatable*) $tmp1829), ((frost$core$Equatable*) $tmp1834));
bool $tmp1839 = $tmp1838.value;
if ($tmp1839) goto block65; else goto block66;
block65:;
*(&local20) = $tmp1838;
goto block67;
block66:;
frost$core$String** $tmp1840 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1841 = *$tmp1840;
frost$core$Bit $tmp1842 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1841, &$s1843);
*(&local20) = $tmp1842;
goto block67;
block67:;
frost$core$Bit $tmp1844 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1834)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1829)));
bool $tmp1845 = $tmp1844.value;
if ($tmp1845) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:481
org$frostlang$frostc$Type$Kind* $tmp1846 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1847 = *$tmp1846;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1848;
$tmp1848 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1848->value = $tmp1847;
frost$core$Int64 $tmp1849 = (frost$core$Int64) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:481:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1850 = &(&local24)->$rawValue;
*$tmp1850 = $tmp1849;
org$frostlang$frostc$Type$Kind $tmp1851 = *(&local24);
*(&local23) = $tmp1851;
org$frostlang$frostc$Type$Kind $tmp1852 = *(&local23);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1853;
$tmp1853 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1853->value = $tmp1852;
ITable* $tmp1854 = ((frost$core$Equatable*) $tmp1848)->$class->itable;
while ($tmp1854->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1854 = $tmp1854->next;
}
$fn1856 $tmp1855 = $tmp1854->methods[0];
frost$core$Bit $tmp1857 = $tmp1855(((frost$core$Equatable*) $tmp1848), ((frost$core$Equatable*) $tmp1853));
bool $tmp1858 = $tmp1857.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1853)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1848)));
if ($tmp1858) goto block68; else goto block70;
block70:;
org$frostlang$frostc$Type$Kind* $tmp1859 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1860 = *$tmp1859;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1861;
$tmp1861 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1861->value = $tmp1860;
frost$core$Int64 $tmp1862 = (frost$core$Int64) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:481:61
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1863 = &(&local26)->$rawValue;
*$tmp1863 = $tmp1862;
org$frostlang$frostc$Type$Kind $tmp1864 = *(&local26);
*(&local25) = $tmp1864;
org$frostlang$frostc$Type$Kind $tmp1865 = *(&local25);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1866;
$tmp1866 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1866->value = $tmp1865;
ITable* $tmp1867 = ((frost$core$Equatable*) $tmp1861)->$class->itable;
while ($tmp1867->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1867 = $tmp1867->next;
}
$fn1869 $tmp1868 = $tmp1867->methods[0];
frost$core$Bit $tmp1870 = $tmp1868(((frost$core$Equatable*) $tmp1861), ((frost$core$Equatable*) $tmp1866));
bool $tmp1871 = $tmp1870.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1866)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1861)));
if ($tmp1871) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:482
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block69:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:484
frost$core$Bit $tmp1872 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1873 = $tmp1872.value;
if ($tmp1873) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:485
frost$core$String** $tmp1874 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1875 = *$tmp1874;
frost$core$Bit $tmp1876 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1875, &$s1877);
bool $tmp1878 = $tmp1876.value;
if ($tmp1878) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:486
org$frostlang$frostc$Type** $tmp1879 = &param1->REAL64_TYPE;
org$frostlang$frostc$Type* $tmp1880 = *$tmp1879;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
return $tmp1880;
block76:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:488
org$frostlang$frostc$Type** $tmp1881 = &param1->REAL32_TYPE;
org$frostlang$frostc$Type* $tmp1882 = *$tmp1881;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
return $tmp1882;
block74:;
goto block62;
block62:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:491
org$frostlang$frostc$Type$Kind* $tmp1883 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1884 = *$tmp1883;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1885;
$tmp1885 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1885->value = $tmp1884;
frost$core$Int64 $tmp1886 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:491:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1887 = &(&local28)->$rawValue;
*$tmp1887 = $tmp1886;
org$frostlang$frostc$Type$Kind $tmp1888 = *(&local28);
*(&local27) = $tmp1888;
org$frostlang$frostc$Type$Kind $tmp1889 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1890;
$tmp1890 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1890->value = $tmp1889;
ITable* $tmp1891 = ((frost$core$Equatable*) $tmp1885)->$class->itable;
while ($tmp1891->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1891 = $tmp1891->next;
}
$fn1893 $tmp1892 = $tmp1891->methods[0];
frost$core$Bit $tmp1894 = $tmp1892(((frost$core$Equatable*) $tmp1885), ((frost$core$Equatable*) $tmp1890));
bool $tmp1895 = $tmp1894.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1890)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1885)));
if ($tmp1895) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:492
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:492:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1896 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1897 = *$tmp1896;
frost$core$Bit $tmp1898 = (frost$core$Bit) {$tmp1897 != NULL};
bool $tmp1899 = $tmp1898.value;
if ($tmp1899) goto block81; else goto block82;
block82:;
frost$core$Int64 $tmp1900 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1901, $tmp1900);
abort(); // unreachable
block81:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1902 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1903 = *$tmp1902;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
frost$core$Int64 $tmp1904 = (frost$core$Int64) {0u};
frost$core$Object* $tmp1905 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1903, $tmp1904);
org$frostlang$frostc$Type* $tmp1906 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1905), param1, param2);
org$frostlang$frostc$Type* $tmp1907 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1906);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
frost$core$Frost$unref$frost$core$Object$Q($tmp1905);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
return $tmp1907;
block78:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:494
org$frostlang$frostc$Type$Kind* $tmp1908 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1909 = *$tmp1908;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1910;
$tmp1910 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1910->value = $tmp1909;
frost$core$Int64 $tmp1911 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:494:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1912 = &(&local30)->$rawValue;
*$tmp1912 = $tmp1911;
org$frostlang$frostc$Type$Kind $tmp1913 = *(&local30);
*(&local29) = $tmp1913;
org$frostlang$frostc$Type$Kind $tmp1914 = *(&local29);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1915;
$tmp1915 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1915->value = $tmp1914;
ITable* $tmp1916 = ((frost$core$Equatable*) $tmp1910)->$class->itable;
while ($tmp1916->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1916 = $tmp1916->next;
}
$fn1918 $tmp1917 = $tmp1916->methods[0];
frost$core$Bit $tmp1919 = $tmp1917(((frost$core$Equatable*) $tmp1910), ((frost$core$Equatable*) $tmp1915));
bool $tmp1920 = $tmp1919.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1915)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1910)));
if ($tmp1920) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:495
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:495:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1921 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1922 = *$tmp1921;
frost$core$Bit $tmp1923 = (frost$core$Bit) {$tmp1922 != NULL};
bool $tmp1924 = $tmp1923.value;
if ($tmp1924) goto block87; else goto block88;
block88:;
frost$core$Int64 $tmp1925 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1926, $tmp1925);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1927 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1928 = *$tmp1927;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
frost$core$Int64 $tmp1929 = (frost$core$Int64) {0u};
frost$core$Object* $tmp1930 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1928, $tmp1929);
org$frostlang$frostc$Type* $tmp1931 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, param1, ((org$frostlang$frostc$Type*) $tmp1930));
org$frostlang$frostc$Type* $tmp1932 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1931);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
frost$core$Frost$unref$frost$core$Object$Q($tmp1930);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
return $tmp1932;
block84:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:497
org$frostlang$frostc$Type* $tmp1933 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param0);
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
org$frostlang$frostc$Type* $tmp1934 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
*(&local31) = $tmp1933;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:498
org$frostlang$frostc$Type* $tmp1935 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param2);
*(&local32) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
org$frostlang$frostc$Type* $tmp1936 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
*(&local32) = $tmp1935;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:499
org$frostlang$frostc$Type* $tmp1937 = *(&local31);
frost$core$Bit $tmp1938 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1937);
bool $tmp1939 = $tmp1938.value;
if ($tmp1939) goto block91; else goto block90;
block91:;
org$frostlang$frostc$Type* $tmp1940 = *(&local32);
frost$core$Bit $tmp1941 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1940);
bool $tmp1942 = $tmp1941.value;
if ($tmp1942) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:500
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
frost$collections$HashSet* $tmp1943 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp1943);
*(&local33) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
frost$collections$HashSet* $tmp1944 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
*(&local33) = $tmp1943;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:501
*(&local34) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1945 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
*(&local34) = param0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:502
org$frostlang$frostc$Type* $tmp1946 = *(&local31);
org$frostlang$frostc$ClassDecl* $tmp1947 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1946);
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
org$frostlang$frostc$ClassDecl* $tmp1948 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
*(&local35) = $tmp1947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:503
goto block92;
block92:;
org$frostlang$frostc$ClassDecl* $tmp1949 = *(&local35);
frost$core$Bit $tmp1950 = (frost$core$Bit) {$tmp1949 != NULL};
bool $tmp1951 = $tmp1950.value;
if ($tmp1951) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:504
frost$collections$HashSet* $tmp1952 = *(&local33);
org$frostlang$frostc$Type* $tmp1953 = *(&local34);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Type.frost:504:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:19
frost$collections$HashMap** $tmp1954 = &$tmp1952->contents;
frost$collections$HashMap* $tmp1955 = *$tmp1954;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1955, ((frost$collections$Key*) $tmp1953), ((frost$core$Object*) ((frost$collections$Key*) $tmp1953)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:505
org$frostlang$frostc$ClassDecl* $tmp1956 = *(&local35);
org$frostlang$frostc$Type** $tmp1957 = &$tmp1956->rawSuper;
org$frostlang$frostc$Type* $tmp1958 = *$tmp1957;
frost$core$Bit $tmp1959 = (frost$core$Bit) {$tmp1958 != NULL};
bool $tmp1960 = $tmp1959.value;
if ($tmp1960) goto block96; else goto block98;
block96:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:506
org$frostlang$frostc$Type* $tmp1961 = *(&local34);
org$frostlang$frostc$ClassDecl* $tmp1962 = *(&local35);
org$frostlang$frostc$Type** $tmp1963 = &$tmp1962->rawSuper;
org$frostlang$frostc$Type* $tmp1964 = *$tmp1963;
org$frostlang$frostc$Type* $tmp1965 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1961, $tmp1964);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
org$frostlang$frostc$Type* $tmp1966 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
*(&local34) = $tmp1965;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:507
org$frostlang$frostc$Type* $tmp1967 = *(&local34);
org$frostlang$frostc$ClassDecl* $tmp1968 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1967);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
org$frostlang$frostc$ClassDecl* $tmp1969 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
*(&local35) = $tmp1968;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
goto block97;
block98:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:510
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1970 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block97;
block97:;
goto block92;
block94:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:513
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp1971 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
*(&local34) = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:514
org$frostlang$frostc$Type* $tmp1972 = *(&local32);
org$frostlang$frostc$ClassDecl* $tmp1973 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1972);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
org$frostlang$frostc$ClassDecl* $tmp1974 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
*(&local35) = $tmp1973;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:515
goto block99;
block99:;
org$frostlang$frostc$ClassDecl* $tmp1975 = *(&local35);
frost$core$Bit $tmp1976 = (frost$core$Bit) {$tmp1975 != NULL};
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block100; else goto block101;
block100:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:516
frost$collections$HashSet* $tmp1978 = *(&local33);
org$frostlang$frostc$Type* $tmp1979 = *(&local34);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from Type.frost:516:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/HashSet.frost:49
frost$collections$HashMap** $tmp1980 = &$tmp1978->contents;
frost$collections$HashMap* $tmp1981 = *$tmp1980;
frost$core$Bit $tmp1982 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit($tmp1981, ((frost$collections$Key*) $tmp1979));
bool $tmp1983 = $tmp1982.value;
if ($tmp1983) goto block102; else goto block103;
block102:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:517
org$frostlang$frostc$Type* $tmp1984 = *(&local34);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
org$frostlang$frostc$ClassDecl* $tmp1985 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1986 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
*(&local34) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1987 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
*(&local33) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$Type* $tmp1988 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
*(&local32) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1989 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1984;
block103:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:519
org$frostlang$frostc$ClassDecl* $tmp1990 = *(&local35);
org$frostlang$frostc$Type** $tmp1991 = &$tmp1990->rawSuper;
org$frostlang$frostc$Type* $tmp1992 = *$tmp1991;
frost$core$Bit $tmp1993 = (frost$core$Bit) {$tmp1992 != NULL};
bool $tmp1994 = $tmp1993.value;
if ($tmp1994) goto block105; else goto block107;
block105:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:520
org$frostlang$frostc$Type* $tmp1995 = *(&local34);
org$frostlang$frostc$ClassDecl* $tmp1996 = *(&local35);
org$frostlang$frostc$Type** $tmp1997 = &$tmp1996->rawSuper;
org$frostlang$frostc$Type* $tmp1998 = *$tmp1997;
org$frostlang$frostc$Type* $tmp1999 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1995, $tmp1998);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
org$frostlang$frostc$Type* $tmp2000 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
*(&local34) = $tmp1999;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:521
org$frostlang$frostc$Type* $tmp2001 = *(&local34);
org$frostlang$frostc$ClassDecl* $tmp2002 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp2001);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
org$frostlang$frostc$ClassDecl* $tmp2003 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
*(&local35) = $tmp2002;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
goto block106;
block107:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:524
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2004 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2004));
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block106;
block106:;
goto block99;
block101:;
org$frostlang$frostc$ClassDecl* $tmp2005 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2006 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
*(&local34) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp2007 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
*(&local33) = ((frost$collections$HashSet*) NULL);
goto block90;
block90:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:528
org$frostlang$frostc$Type** $tmp2008 = &param1->OBJECT_TYPE;
org$frostlang$frostc$Type* $tmp2009 = *$tmp2008;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
org$frostlang$frostc$Type* $tmp2010 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
*(&local32) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2011 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2009;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:535
org$frostlang$frostc$Pair* $tmp2012 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param1, param0, param2);
frost$core$Bit $tmp2013 = (frost$core$Bit) {$tmp2012 != NULL};
bool $tmp2014 = $tmp2013.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
if ($tmp2014) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:536
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:538
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, frost$collections$HashMap* param2) {

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
org$frostlang$frostc$Type$Kind* $tmp2015 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2016 = *$tmp2015;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2017;
$tmp2017 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2017->value = $tmp2016;
frost$core$Int64 $tmp2018 = (frost$core$Int64) {6u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:541:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2019 = &(&local1)->$rawValue;
*$tmp2019 = $tmp2018;
org$frostlang$frostc$Type$Kind $tmp2020 = *(&local1);
*(&local0) = $tmp2020;
org$frostlang$frostc$Type$Kind $tmp2021 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2022;
$tmp2022 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2022->value = $tmp2021;
ITable* $tmp2023 = ((frost$core$Equatable*) $tmp2017)->$class->itable;
while ($tmp2023->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2023 = $tmp2023->next;
}
$fn2025 $tmp2024 = $tmp2023->methods[1];
frost$core$Bit $tmp2026 = $tmp2024(((frost$core$Equatable*) $tmp2017), ((frost$core$Equatable*) $tmp2022));
bool $tmp2027 = $tmp2026.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2022)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2017)));
if ($tmp2027) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2028 = (frost$core$Int64) {543u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2029, $tmp2028, &$s2030);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:544
ITable* $tmp2031 = ((frost$collections$MapView*) param2)->$class->itable;
while ($tmp2031->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp2031 = $tmp2031->next;
}
$fn2033 $tmp2032 = $tmp2031->methods[0];
frost$core$Int64 $tmp2034 = $tmp2032(((frost$collections$MapView*) param2));
frost$core$Int64 $tmp2035 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:544:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp2036 = $tmp2034.value;
int64_t $tmp2037 = $tmp2035.value;
bool $tmp2038 = $tmp2036 == $tmp2037;
frost$core$Bit $tmp2039 = (frost$core$Bit) {$tmp2038};
bool $tmp2040 = $tmp2039.value;
if ($tmp2040) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:545
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:547
org$frostlang$frostc$Type$Kind* $tmp2041 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2042 = *$tmp2041;
frost$core$Int64 $tmp2043 = $tmp2042.$rawValue;
frost$core$Int64 $tmp2044 = (frost$core$Int64) {12u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:548:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp2045 = $tmp2043.value;
int64_t $tmp2046 = $tmp2044.value;
bool $tmp2047 = $tmp2045 == $tmp2046;
frost$core$Bit $tmp2048 = (frost$core$Bit) {$tmp2047};
bool $tmp2049 = $tmp2048.value;
if ($tmp2049) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp2050 = (frost$core$Int64) {13u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:548:52
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp2051 = $tmp2043.value;
int64_t $tmp2052 = $tmp2050.value;
bool $tmp2053 = $tmp2051 == $tmp2052;
frost$core$Bit $tmp2054 = (frost$core$Bit) {$tmp2053};
bool $tmp2055 = $tmp2054.value;
if ($tmp2055) goto block8; else goto block11;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:549
frost$core$String** $tmp2056 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2057 = *$tmp2056;
frost$core$Object* $tmp2058 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param2, ((frost$collections$Key*) $tmp2057));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2058)));
org$frostlang$frostc$Type* $tmp2059 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp2058);
frost$core$Frost$unref$frost$core$Object$Q($tmp2058);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:550
org$frostlang$frostc$Type* $tmp2060 = *(&local2);
frost$core$Bit $tmp2061 = (frost$core$Bit) {$tmp2060 != NULL};
bool $tmp2062 = $tmp2061.value;
if ($tmp2062) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:551
org$frostlang$frostc$Type* $tmp2063 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
org$frostlang$frostc$Type* $tmp2064 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2063;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:553
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp2065 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return param0;
block11:;
frost$core$Int64 $tmp2066 = (frost$core$Int64) {11u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:555:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp2067 = $tmp2043.value;
int64_t $tmp2068 = $tmp2066.value;
bool $tmp2069 = $tmp2067 == $tmp2068;
frost$core$Bit $tmp2070 = (frost$core$Bit) {$tmp2069};
bool $tmp2071 = $tmp2070.value;
if ($tmp2071) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:556
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:556:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2072 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2073 = *$tmp2072;
frost$core$Bit $tmp2074 = (frost$core$Bit) {$tmp2073 != NULL};
bool $tmp2075 = $tmp2074.value;
if ($tmp2075) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp2076 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2077, $tmp2076);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2078 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2079 = *$tmp2078;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
frost$core$Int64 $tmp2080 = (frost$core$Int64) {0u};
frost$core$Object* $tmp2081 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2079, $tmp2080);
org$frostlang$frostc$Type* $tmp2082 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2081), param1, param2);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
org$frostlang$frostc$Type* $tmp2083 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
*(&local3) = $tmp2082;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
frost$core$Frost$unref$frost$core$Object$Q($tmp2081);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:557
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2084 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2084);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
frost$collections$Array* $tmp2085 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
*(&local4) = $tmp2084;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:558
frost$core$Int64 $tmp2086 = (frost$core$Int64) {1u};
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:558:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2087 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2088 = *$tmp2087;
frost$core$Bit $tmp2089 = (frost$core$Bit) {$tmp2088 != NULL};
bool $tmp2090 = $tmp2089.value;
if ($tmp2090) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2091 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2092, $tmp2091);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2093 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2094 = *$tmp2093;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
ITable* $tmp2095 = ((frost$collections$CollectionView*) $tmp2094)->$class->itable;
while ($tmp2095->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2095 = $tmp2095->next;
}
$fn2097 $tmp2096 = $tmp2095->methods[0];
frost$core$Int64 $tmp2098 = $tmp2096(((frost$collections$CollectionView*) $tmp2094));
frost$core$Bit $tmp2099 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2100 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2086, $tmp2098, $tmp2099);
frost$core$Int64 $tmp2101 = $tmp2100.min;
*(&local5) = $tmp2101;
frost$core$Int64 $tmp2102 = $tmp2100.max;
frost$core$Bit $tmp2103 = $tmp2100.inclusive;
bool $tmp2104 = $tmp2103.value;
frost$core$Int64 $tmp2105 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2106 = $tmp2105.value;
frost$core$UInt64 $tmp2107 = (frost$core$UInt64) {((uint64_t) $tmp2106)};
if ($tmp2104) goto block28; else goto block29;
block28:;
int64_t $tmp2108 = $tmp2101.value;
int64_t $tmp2109 = $tmp2102.value;
bool $tmp2110 = $tmp2108 <= $tmp2109;
frost$core$Bit $tmp2111 = (frost$core$Bit) {$tmp2110};
bool $tmp2112 = $tmp2111.value;
if ($tmp2112) goto block25; else goto block26;
block29:;
int64_t $tmp2113 = $tmp2101.value;
int64_t $tmp2114 = $tmp2102.value;
bool $tmp2115 = $tmp2113 < $tmp2114;
frost$core$Bit $tmp2116 = (frost$core$Bit) {$tmp2115};
bool $tmp2117 = $tmp2116.value;
if ($tmp2117) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:559
frost$collections$Array* $tmp2118 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:559:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2119 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2120 = *$tmp2119;
frost$core$Bit $tmp2121 = (frost$core$Bit) {$tmp2120 != NULL};
bool $tmp2122 = $tmp2121.value;
if ($tmp2122) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp2123 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2124, $tmp2123);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2125 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2126 = *$tmp2125;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
frost$core$Int64 $tmp2127 = *(&local5);
frost$core$Object* $tmp2128 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2126, $tmp2127);
org$frostlang$frostc$Type* $tmp2129 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2128), param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp2118, ((frost$core$Object*) $tmp2129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
frost$core$Frost$unref$frost$core$Object$Q($tmp2128);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
frost$core$Int64 $tmp2130 = *(&local5);
int64_t $tmp2131 = $tmp2102.value;
int64_t $tmp2132 = $tmp2130.value;
int64_t $tmp2133 = $tmp2131 - $tmp2132;
frost$core$Int64 $tmp2134 = (frost$core$Int64) {$tmp2133};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2135 = $tmp2134.value;
frost$core$UInt64 $tmp2136 = (frost$core$UInt64) {((uint64_t) $tmp2135)};
if ($tmp2104) goto block35; else goto block36;
block35:;
uint64_t $tmp2137 = $tmp2136.value;
uint64_t $tmp2138 = $tmp2107.value;
bool $tmp2139 = $tmp2137 >= $tmp2138;
frost$core$Bit $tmp2140 = (frost$core$Bit) {$tmp2139};
bool $tmp2141 = $tmp2140.value;
if ($tmp2141) goto block33; else goto block26;
block36:;
uint64_t $tmp2142 = $tmp2136.value;
uint64_t $tmp2143 = $tmp2107.value;
bool $tmp2144 = $tmp2142 > $tmp2143;
frost$core$Bit $tmp2145 = (frost$core$Bit) {$tmp2144};
bool $tmp2146 = $tmp2145.value;
if ($tmp2146) goto block33; else goto block26;
block33:;
int64_t $tmp2147 = $tmp2130.value;
int64_t $tmp2148 = $tmp2105.value;
int64_t $tmp2149 = $tmp2147 + $tmp2148;
frost$core$Int64 $tmp2150 = (frost$core$Int64) {$tmp2149};
*(&local5) = $tmp2150;
goto block25;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:561
org$frostlang$frostc$Type* $tmp2151 = *(&local3);
frost$collections$Array* $tmp2152 = *(&local4);
org$frostlang$frostc$Type* $tmp2153 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2151, ((frost$collections$ListView*) $tmp2152));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
frost$collections$Array* $tmp2154 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2155 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp2153;
block16:;
frost$core$Int64 $tmp2156 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:563:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp2157 = $tmp2043.value;
int64_t $tmp2158 = $tmp2156.value;
bool $tmp2159 = $tmp2157 == $tmp2158;
frost$core$Bit $tmp2160 = (frost$core$Bit) {$tmp2159};
bool $tmp2161 = $tmp2160.value;
if ($tmp2161) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:564
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:564:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2162 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2163 = *$tmp2162;
frost$core$Bit $tmp2164 = (frost$core$Bit) {$tmp2163 != NULL};
bool $tmp2165 = $tmp2164.value;
if ($tmp2165) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp2166 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2167, $tmp2166);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2168 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2169 = *$tmp2168;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
frost$core$Int64 $tmp2170 = (frost$core$Int64) {0u};
frost$core$Object* $tmp2171 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2169, $tmp2170);
org$frostlang$frostc$Type* $tmp2172 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2171), param1, param2);
org$frostlang$frostc$Type* $tmp2173 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp2172);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
frost$core$Frost$unref$frost$core$Object$Q($tmp2171);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
return $tmp2173;
block38:;
frost$core$Int64 $tmp2174 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:566:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp2175 = $tmp2043.value;
int64_t $tmp2176 = $tmp2174.value;
bool $tmp2177 = $tmp2175 == $tmp2176;
frost$core$Bit $tmp2178 = (frost$core$Bit) {$tmp2177};
bool $tmp2179 = $tmp2178.value;
if ($tmp2179) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp2180 = (frost$core$Int64) {15u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:566:35
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp2181 = $tmp2043.value;
int64_t $tmp2182 = $tmp2180.value;
bool $tmp2183 = $tmp2181 == $tmp2182;
frost$core$Bit $tmp2184 = (frost$core$Bit) {$tmp2183};
bool $tmp2185 = $tmp2184.value;
if ($tmp2185) goto block43; else goto block46;
block46:;
frost$core$Int64 $tmp2186 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:566:50
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp2187 = $tmp2043.value;
int64_t $tmp2188 = $tmp2186.value;
bool $tmp2189 = $tmp2187 == $tmp2188;
frost$core$Bit $tmp2190 = (frost$core$Bit) {$tmp2189};
bool $tmp2191 = $tmp2190.value;
if ($tmp2191) goto block43; else goto block48;
block48:;
frost$core$Int64 $tmp2192 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:566:73
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp2193 = $tmp2043.value;
int64_t $tmp2194 = $tmp2192.value;
bool $tmp2195 = $tmp2193 == $tmp2194;
frost$core$Bit $tmp2196 = (frost$core$Bit) {$tmp2195};
bool $tmp2197 = $tmp2196.value;
if ($tmp2197) goto block43; else goto block50;
block43:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:567
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2198 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2198);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
frost$collections$Array* $tmp2199 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
*(&local6) = $tmp2198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:568
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:568:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2200 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2201 = *$tmp2200;
frost$core$Bit $tmp2202 = (frost$core$Bit) {$tmp2201 != NULL};
bool $tmp2203 = $tmp2202.value;
if ($tmp2203) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp2204 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2205, $tmp2204);
abort(); // unreachable
block53:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2206 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2207 = *$tmp2206;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
ITable* $tmp2208 = ((frost$collections$CollectionView*) $tmp2207)->$class->itable;
while ($tmp2208->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2208 = $tmp2208->next;
}
$fn2210 $tmp2209 = $tmp2208->methods[0];
frost$core$Int64 $tmp2211 = $tmp2209(((frost$collections$CollectionView*) $tmp2207));
frost$core$Int64 $tmp2212 = (frost$core$Int64) {1u};
int64_t $tmp2213 = $tmp2211.value;
int64_t $tmp2214 = $tmp2212.value;
bool $tmp2215 = $tmp2213 >= $tmp2214;
frost$core$Bit $tmp2216 = (frost$core$Bit) {$tmp2215};
bool $tmp2217 = $tmp2216.value;
if ($tmp2217) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp2218 = (frost$core$Int64) {568u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2219, $tmp2218);
abort(); // unreachable
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:569
frost$core$Int64 $tmp2220 = (frost$core$Int64) {0u};
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:569:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2221 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2222 = *$tmp2221;
frost$core$Bit $tmp2223 = (frost$core$Bit) {$tmp2222 != NULL};
bool $tmp2224 = $tmp2223.value;
if ($tmp2224) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp2225 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2226, $tmp2225);
abort(); // unreachable
block58:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2227 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2228 = *$tmp2227;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
ITable* $tmp2229 = ((frost$collections$CollectionView*) $tmp2228)->$class->itable;
while ($tmp2229->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2229 = $tmp2229->next;
}
$fn2231 $tmp2230 = $tmp2229->methods[0];
frost$core$Int64 $tmp2232 = $tmp2230(((frost$collections$CollectionView*) $tmp2228));
frost$core$Int64 $tmp2233 = (frost$core$Int64) {1u};
int64_t $tmp2234 = $tmp2232.value;
int64_t $tmp2235 = $tmp2233.value;
int64_t $tmp2236 = $tmp2234 - $tmp2235;
frost$core$Int64 $tmp2237 = (frost$core$Int64) {$tmp2236};
frost$core$Bit $tmp2238 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp2239 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2220, $tmp2237, $tmp2238);
frost$core$Int64 $tmp2240 = $tmp2239.min;
*(&local7) = $tmp2240;
frost$core$Int64 $tmp2241 = $tmp2239.max;
frost$core$Bit $tmp2242 = $tmp2239.inclusive;
bool $tmp2243 = $tmp2242.value;
frost$core$Int64 $tmp2244 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2245 = $tmp2244.value;
frost$core$UInt64 $tmp2246 = (frost$core$UInt64) {((uint64_t) $tmp2245)};
if ($tmp2243) goto block64; else goto block65;
block64:;
int64_t $tmp2247 = $tmp2240.value;
int64_t $tmp2248 = $tmp2241.value;
bool $tmp2249 = $tmp2247 <= $tmp2248;
frost$core$Bit $tmp2250 = (frost$core$Bit) {$tmp2249};
bool $tmp2251 = $tmp2250.value;
if ($tmp2251) goto block61; else goto block62;
block65:;
int64_t $tmp2252 = $tmp2240.value;
int64_t $tmp2253 = $tmp2241.value;
bool $tmp2254 = $tmp2252 < $tmp2253;
frost$core$Bit $tmp2255 = (frost$core$Bit) {$tmp2254};
bool $tmp2256 = $tmp2255.value;
if ($tmp2256) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:570
frost$collections$Array* $tmp2257 = *(&local6);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:570:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2258 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2259 = *$tmp2258;
frost$core$Bit $tmp2260 = (frost$core$Bit) {$tmp2259 != NULL};
bool $tmp2261 = $tmp2260.value;
if ($tmp2261) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp2262 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2263, $tmp2262);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2264 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2265 = *$tmp2264;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
frost$core$Int64 $tmp2266 = *(&local7);
frost$core$Object* $tmp2267 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2265, $tmp2266);
org$frostlang$frostc$Type* $tmp2268 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2267), param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp2257, ((frost$core$Object*) $tmp2268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
frost$core$Frost$unref$frost$core$Object$Q($tmp2267);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
frost$core$Int64 $tmp2269 = *(&local7);
int64_t $tmp2270 = $tmp2241.value;
int64_t $tmp2271 = $tmp2269.value;
int64_t $tmp2272 = $tmp2270 - $tmp2271;
frost$core$Int64 $tmp2273 = (frost$core$Int64) {$tmp2272};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp2274 = $tmp2273.value;
frost$core$UInt64 $tmp2275 = (frost$core$UInt64) {((uint64_t) $tmp2274)};
if ($tmp2243) goto block71; else goto block72;
block71:;
uint64_t $tmp2276 = $tmp2275.value;
uint64_t $tmp2277 = $tmp2246.value;
bool $tmp2278 = $tmp2276 >= $tmp2277;
frost$core$Bit $tmp2279 = (frost$core$Bit) {$tmp2278};
bool $tmp2280 = $tmp2279.value;
if ($tmp2280) goto block69; else goto block62;
block72:;
uint64_t $tmp2281 = $tmp2275.value;
uint64_t $tmp2282 = $tmp2246.value;
bool $tmp2283 = $tmp2281 > $tmp2282;
frost$core$Bit $tmp2284 = (frost$core$Bit) {$tmp2283};
bool $tmp2285 = $tmp2284.value;
if ($tmp2285) goto block69; else goto block62;
block69:;
int64_t $tmp2286 = $tmp2269.value;
int64_t $tmp2287 = $tmp2244.value;
int64_t $tmp2288 = $tmp2286 + $tmp2287;
frost$core$Int64 $tmp2289 = (frost$core$Int64) {$tmp2288};
*(&local7) = $tmp2289;
goto block61;
block62:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:572
org$frostlang$frostc$Position* $tmp2290 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp2291 = *$tmp2290;
org$frostlang$frostc$Type$Kind* $tmp2292 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2293 = *$tmp2292;
frost$collections$Array* $tmp2294 = *(&local6);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:573:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2295 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2296 = *$tmp2295;
frost$core$Bit $tmp2297 = (frost$core$Bit) {$tmp2296 != NULL};
bool $tmp2298 = $tmp2297.value;
if ($tmp2298) goto block74; else goto block75;
block75:;
frost$core$Int64 $tmp2299 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2300, $tmp2299);
abort(); // unreachable
block74:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2301 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2302 = *$tmp2301;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:573:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2303 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2304 = *$tmp2303;
frost$core$Bit $tmp2305 = (frost$core$Bit) {$tmp2304 != NULL};
bool $tmp2306 = $tmp2305.value;
if ($tmp2306) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp2307 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2308, $tmp2307);
abort(); // unreachable
block77:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2309 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2310 = *$tmp2309;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
ITable* $tmp2311 = ((frost$collections$CollectionView*) $tmp2310)->$class->itable;
while ($tmp2311->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2311 = $tmp2311->next;
}
$fn2313 $tmp2312 = $tmp2311->methods[0];
frost$core$Int64 $tmp2314 = $tmp2312(((frost$collections$CollectionView*) $tmp2310));
frost$core$Int64 $tmp2315 = (frost$core$Int64) {1u};
int64_t $tmp2316 = $tmp2314.value;
int64_t $tmp2317 = $tmp2315.value;
int64_t $tmp2318 = $tmp2316 - $tmp2317;
frost$core$Int64 $tmp2319 = (frost$core$Int64) {$tmp2318};
frost$core$Object* $tmp2320 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2302, $tmp2319);
org$frostlang$frostc$Type* $tmp2321 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2320), param1, param2);
frost$core$Int64* $tmp2322 = &param0->priority;
frost$core$Int64 $tmp2323 = *$tmp2322;
org$frostlang$frostc$Type* $tmp2324 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(param1, $tmp2291, $tmp2293, ((frost$collections$ListView*) $tmp2294), $tmp2321, $tmp2323);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
frost$core$Frost$unref$frost$core$Object$Q($tmp2320);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
frost$collections$Array* $tmp2325 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
*(&local6) = ((frost$collections$Array*) NULL);
return $tmp2324;
block50:;
frost$core$Int64 $tmp2326 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Type.frost:575:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp2327 = $tmp2043.value;
int64_t $tmp2328 = $tmp2326.value;
bool $tmp2329 = $tmp2327 == $tmp2328;
frost$core$Bit $tmp2330 = (frost$core$Bit) {$tmp2329};
bool $tmp2331 = $tmp2330.value;
if ($tmp2331) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:576
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2332 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2332);
*(&local8) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
frost$collections$Array* $tmp2333 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
*(&local8) = $tmp2332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:577
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:577:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp2334 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2335 = *$tmp2334;
frost$core$Bit $tmp2336 = (frost$core$Bit) {$tmp2335 != NULL};
bool $tmp2337 = $tmp2336.value;
if ($tmp2337) goto block83; else goto block84;
block84:;
frost$core$Int64 $tmp2338 = (frost$core$Int64) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2339, $tmp2338);
abort(); // unreachable
block83:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp2340 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2341 = *$tmp2340;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
ITable* $tmp2342 = ((frost$collections$Iterable*) $tmp2341)->$class->itable;
while ($tmp2342->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2342 = $tmp2342->next;
}
$fn2344 $tmp2343 = $tmp2342->methods[0];
frost$collections$Iterator* $tmp2345 = $tmp2343(((frost$collections$Iterable*) $tmp2341));
goto block85;
block85:;
ITable* $tmp2346 = $tmp2345->$class->itable;
while ($tmp2346->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2346 = $tmp2346->next;
}
$fn2348 $tmp2347 = $tmp2346->methods[0];
frost$core$Bit $tmp2349 = $tmp2347($tmp2345);
bool $tmp2350 = $tmp2349.value;
if ($tmp2350) goto block87; else goto block86;
block86:;
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp2351 = $tmp2345->$class->itable;
while ($tmp2351->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2351 = $tmp2351->next;
}
$fn2353 $tmp2352 = $tmp2351->methods[1];
frost$core$Object* $tmp2354 = $tmp2352($tmp2345);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2354)));
org$frostlang$frostc$Type* $tmp2355 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2355));
*(&local9) = ((org$frostlang$frostc$Type*) $tmp2354);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:578
frost$collections$Array* $tmp2356 = *(&local8);
org$frostlang$frostc$Type* $tmp2357 = *(&local9);
org$frostlang$frostc$Type* $tmp2358 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp2357, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp2356, ((frost$core$Object*) $tmp2358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2358));
frost$core$Frost$unref$frost$core$Object$Q($tmp2354);
org$frostlang$frostc$Type* $tmp2359 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
goto block85;
block87:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:580
frost$collections$Array* $tmp2360 = *(&local8);
org$frostlang$frostc$Type* $tmp2361 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp2360));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
frost$collections$Array* $tmp2362 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
*(&local8) = ((frost$collections$Array*) NULL);
return $tmp2361;
block80:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:583
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block7:;
goto block88;
block88:;

}
frost$core$Int64 org$frostlang$frostc$Type$get_hash$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:590
frost$core$String** $tmp2363 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2364 = *$tmp2363;
ITable* $tmp2365 = ((frost$collections$Key*) $tmp2364)->$class->itable;
while ($tmp2365->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp2365 = $tmp2365->next;
}
$fn2367 $tmp2366 = $tmp2365->methods[0];
frost$core$Int64 $tmp2368 = $tmp2366(((frost$collections$Key*) $tmp2364));
return $tmp2368;

}
frost$core$String* org$frostlang$frostc$Type$get_asString$R$frost$core$String(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:595
frost$core$String** $tmp2369 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2370 = *$tmp2369;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
return $tmp2370;

}
void org$frostlang$frostc$Type$cleanup(org$frostlang$frostc$Type* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$FixedArray** $tmp2371 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp2372 = *$tmp2371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
frost$core$Weak** $tmp2373 = &param0->genericClassParameter;
frost$core$Weak* $tmp2374 = *$tmp2373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
frost$core$Weak** $tmp2375 = &param0->genericMethodParameter;
frost$core$Weak* $tmp2376 = *$tmp2375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
org$frostlang$frostc$MethodRef** $tmp2377 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp2378 = *$tmp2377;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2378));
return;

}

