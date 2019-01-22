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
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real64.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/ClassDecl.h"
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
org$frostlang$frostc$Type$class_type org$frostlang$frostc$Type$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, (ITable*) &org$frostlang$frostc$Type$_frost$core$Equatable, { org$frostlang$frostc$Type$get_asString$R$frost$core$String, org$frostlang$frostc$Type$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit, org$frostlang$frostc$Type$get_size$R$frost$core$Int64, org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim, org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit, org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit, org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit, org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit, org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit, org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit, org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64, org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_hash$R$frost$core$Int64} };

typedef frost$core$Bit (*$fn17)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn26)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn36)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn46)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn56)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn66)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn95)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn104)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn114)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn124)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn134)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn144)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn184)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn193)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn206)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn223)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn236)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn253)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn390)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn394)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn399)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn448)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn452)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn457)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn507)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn532)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn543)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn555)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn582)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1020)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1032)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1043)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1054)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1066)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1078)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1093)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1149)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1196)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1206)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1232)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1247)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1258)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1270)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1282)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1293)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1308)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1319)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1331)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1343)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1358)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1385)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1396)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1408)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1420)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1433)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1454)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1469)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1487)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1503)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1517)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1528)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1551)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1562)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1583)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1600)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1692)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1700)(frost$collections$MapView*);
typedef frost$core$Int64 (*$fn1740)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1818)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1833)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1895)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1917)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1928)(frost$collections$Key*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 25, -2845835638813086730, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 185, 5306997962041257421, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x73\x69\x7a\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 143, 4609069516402830651, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x73\x75\x62\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x70\x72\x69\x6f\x72\x69\x74\x79\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 276, -2402595066239149707, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3d", 11, 4555205210328637565, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x3d", 10, -7078666603951044273, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s564 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s596 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, 1146821029976304283, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 5148459585349422950, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 1492063599391574064, NULL };
static frost$core$String $s632 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -3824106974697578343, NULL };
static frost$core$String $s638 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 16, -3824106976449029430, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5545501573009681362, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static frost$core$String $s660 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static frost$core$String $s670 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static frost$core$String $s680 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static frost$core$String $s685 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static frost$core$String $s700 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s712 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s718 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s724 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s736 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s742 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, 1146821061809580773, NULL };
static frost$core$String $s760 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, 1146821061809581078, NULL };
static frost$core$String $s766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3824106976667626414, NULL };
static frost$core$String $s772 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, 1146820904470315469, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, 1146820904470315667, NULL };
static frost$core$String $s784 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s788 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static frost$core$String $s790 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s798 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s808 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s820 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s839 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 4906885815162678826, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, 1146821009278619293, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -7013691227705711665, NULL };
static frost$core$String $s872 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s876 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s878 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s910 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s922 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 3644790808526678741, NULL };
static frost$core$String $s934 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -3824106975113800959, NULL };
static frost$core$String $s966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s988 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static frost$core$String $s994 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static frost$core$String $s998 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1003 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -3508042023517899272, NULL };
static frost$core$String $s1009 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1084 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1099 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, -3508042023536129774, NULL };
static frost$core$String $s1179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, 1146821061406687137, NULL };
static frost$core$String $s1187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -4916982935192335398, NULL };
static frost$core$String $s1217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 97, -2976789655376824909, NULL };
static frost$core$String $s1372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 119, 5693748891149284325, NULL };
static frost$core$String $s1425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1537 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1696 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 168, 1028753922056655266, NULL };
static frost$core$String $s1827 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1922 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1923 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 169, -7857031125004373715, NULL };

void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3) {

// line 77
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(param0, param1, param2, param3, $tmp2);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$core$Bit param4) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
// line 37
frost$core$Weak* $tmp3 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp3, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$Weak** $tmp4 = &param0->genericClassParameter;
frost$core$Weak* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$Weak** $tmp6 = &param0->genericClassParameter;
*$tmp6 = $tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
// line 40
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
frost$core$Int64 $tmp12 = (frost$core$Int64) {11};
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
if ($tmp19) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp20;
$tmp20 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp20->value = param2;
frost$core$Int64 $tmp21 = (frost$core$Int64) {12};
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp23)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp20)));
*(&local4) = $tmp27;
goto block3;
block2:;
*(&local4) = $tmp18;
goto block3;
block3:;
frost$core$Bit $tmp28 = *(&local4);
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp30;
$tmp30 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp30->value = param2;
frost$core$Int64 $tmp31 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp32 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp31);
org$frostlang$frostc$Type$Kind$wrapper* $tmp33;
$tmp33 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp33->value = $tmp32;
ITable* $tmp34 = ((frost$core$Equatable*) $tmp30)->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[1];
frost$core$Bit $tmp37 = $tmp35(((frost$core$Equatable*) $tmp30), ((frost$core$Equatable*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp33)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp30)));
*(&local3) = $tmp37;
goto block6;
block5:;
*(&local3) = $tmp28;
goto block6;
block6:;
frost$core$Bit $tmp38 = *(&local3);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp40;
$tmp40 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp40->value = param2;
frost$core$Int64 $tmp41 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp42 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp41);
org$frostlang$frostc$Type$Kind$wrapper* $tmp43;
$tmp43 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp43->value = $tmp42;
ITable* $tmp44 = ((frost$core$Equatable*) $tmp40)->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[1];
frost$core$Bit $tmp47 = $tmp45(((frost$core$Equatable*) $tmp40), ((frost$core$Equatable*) $tmp43));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp43)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp40)));
*(&local2) = $tmp47;
goto block9;
block8:;
*(&local2) = $tmp38;
goto block9;
block9:;
frost$core$Bit $tmp48 = *(&local2);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp50;
$tmp50 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp50->value = param2;
frost$core$Int64 $tmp51 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp52 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp51);
org$frostlang$frostc$Type$Kind$wrapper* $tmp53;
$tmp53 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp53->value = $tmp52;
ITable* $tmp54 = ((frost$core$Equatable*) $tmp50)->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[1];
frost$core$Bit $tmp57 = $tmp55(((frost$core$Equatable*) $tmp50), ((frost$core$Equatable*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp53)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp50)));
*(&local1) = $tmp57;
goto block12;
block11:;
*(&local1) = $tmp48;
goto block12;
block12:;
frost$core$Bit $tmp58 = *(&local1);
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp60;
$tmp60 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp60->value = param2;
frost$core$Int64 $tmp61 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp62 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp61);
org$frostlang$frostc$Type$Kind$wrapper* $tmp63;
$tmp63 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp63->value = $tmp62;
ITable* $tmp64 = ((frost$core$Equatable*) $tmp60)->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp64 = $tmp64->next;
}
$fn66 $tmp65 = $tmp64->methods[1];
frost$core$Bit $tmp67 = $tmp65(((frost$core$Equatable*) $tmp60), ((frost$core$Equatable*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp63)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp60)));
*(&local0) = $tmp67;
goto block15;
block14:;
*(&local0) = $tmp58;
goto block15;
block15:;
frost$core$Bit $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp14)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp11)));
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp70 = (frost$core$Int64) {83};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block16:;
// line 84
org$frostlang$frostc$Type$Kind* $tmp73 = &param0->typeKind;
*$tmp73 = param2;
// line 85
org$frostlang$frostc$Position* $tmp74 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp74 = param3;
// line 86
frost$core$Bit* $tmp75 = &param0->resolved;
*$tmp75 = param4;
// line 87
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp76 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp77 = *$tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
org$frostlang$frostc$FixedArray** $tmp78 = &param0->subtypes;
*$tmp78 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 88
frost$core$Int64 $tmp79 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp80 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp79);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp80, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, frost$core$Int64 param3) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
// line 37
frost$core$Weak* $tmp81 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp81, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Weak** $tmp82 = &param0->genericClassParameter;
frost$core$Weak* $tmp83 = *$tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Weak** $tmp84 = &param0->genericClassParameter;
*$tmp84 = $tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// line 40
frost$core$Weak* $tmp85 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp85, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Weak** $tmp86 = &param0->genericMethodParameter;
frost$core$Weak* $tmp87 = *$tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Weak** $tmp88 = &param0->genericMethodParameter;
*$tmp88 = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
org$frostlang$frostc$Type$Kind$wrapper* $tmp89;
$tmp89 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp89->value = param2;
frost$core$Int64 $tmp90 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp91 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp90);
org$frostlang$frostc$Type$Kind$wrapper* $tmp92;
$tmp92 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp92->value = $tmp91;
ITable* $tmp93 = ((frost$core$Equatable*) $tmp89)->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[1];
frost$core$Bit $tmp96 = $tmp94(((frost$core$Equatable*) $tmp89), ((frost$core$Equatable*) $tmp92));
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp98;
$tmp98 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp98->value = param2;
frost$core$Int64 $tmp99 = (frost$core$Int64) {12};
org$frostlang$frostc$Type$Kind $tmp100 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp99);
org$frostlang$frostc$Type$Kind$wrapper* $tmp101;
$tmp101 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp101->value = $tmp100;
ITable* $tmp102 = ((frost$core$Equatable*) $tmp98)->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[1];
frost$core$Bit $tmp105 = $tmp103(((frost$core$Equatable*) $tmp98), ((frost$core$Equatable*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp101)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp98)));
*(&local4) = $tmp105;
goto block3;
block2:;
*(&local4) = $tmp96;
goto block3;
block3:;
frost$core$Bit $tmp106 = *(&local4);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp108;
$tmp108 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp108->value = param2;
frost$core$Int64 $tmp109 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp110 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp109);
org$frostlang$frostc$Type$Kind$wrapper* $tmp111;
$tmp111 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp111->value = $tmp110;
ITable* $tmp112 = ((frost$core$Equatable*) $tmp108)->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[1];
frost$core$Bit $tmp115 = $tmp113(((frost$core$Equatable*) $tmp108), ((frost$core$Equatable*) $tmp111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp111)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp108)));
*(&local3) = $tmp115;
goto block6;
block5:;
*(&local3) = $tmp106;
goto block6;
block6:;
frost$core$Bit $tmp116 = *(&local3);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp118;
$tmp118 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp118->value = param2;
frost$core$Int64 $tmp119 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp120 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp119);
org$frostlang$frostc$Type$Kind$wrapper* $tmp121;
$tmp121 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp121->value = $tmp120;
ITable* $tmp122 = ((frost$core$Equatable*) $tmp118)->$class->itable;
while ($tmp122->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[1];
frost$core$Bit $tmp125 = $tmp123(((frost$core$Equatable*) $tmp118), ((frost$core$Equatable*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp121)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp118)));
*(&local2) = $tmp125;
goto block9;
block8:;
*(&local2) = $tmp116;
goto block9;
block9:;
frost$core$Bit $tmp126 = *(&local2);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp128;
$tmp128 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp128->value = param2;
frost$core$Int64 $tmp129 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp130 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp129);
org$frostlang$frostc$Type$Kind$wrapper* $tmp131;
$tmp131 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp131->value = $tmp130;
ITable* $tmp132 = ((frost$core$Equatable*) $tmp128)->$class->itable;
while ($tmp132->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp132 = $tmp132->next;
}
$fn134 $tmp133 = $tmp132->methods[1];
frost$core$Bit $tmp135 = $tmp133(((frost$core$Equatable*) $tmp128), ((frost$core$Equatable*) $tmp131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp131)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp128)));
*(&local1) = $tmp135;
goto block12;
block11:;
*(&local1) = $tmp126;
goto block12;
block12:;
frost$core$Bit $tmp136 = *(&local1);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp138;
$tmp138 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp138->value = param2;
frost$core$Int64 $tmp139 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp140 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp139);
org$frostlang$frostc$Type$Kind$wrapper* $tmp141;
$tmp141 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp141->value = $tmp140;
ITable* $tmp142 = ((frost$core$Equatable*) $tmp138)->$class->itable;
while ($tmp142->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp142 = $tmp142->next;
}
$fn144 $tmp143 = $tmp142->methods[1];
frost$core$Bit $tmp145 = $tmp143(((frost$core$Equatable*) $tmp138), ((frost$core$Equatable*) $tmp141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp141)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp138)));
*(&local0) = $tmp145;
goto block15;
block14:;
*(&local0) = $tmp136;
goto block15;
block15:;
frost$core$Bit $tmp146 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp92)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp89)));
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp148 = (frost$core$Int64) {94};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s149, $tmp148, &$s150);
abort(); // unreachable
block16:;
// line 95
frost$core$Bit $tmp151 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s152);
frost$core$Bit $tmp153 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp151);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp155 = (frost$core$Int64) {95};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s156, $tmp155);
abort(); // unreachable
block18:;
// line 96
org$frostlang$frostc$Type$Kind* $tmp157 = &param0->typeKind;
*$tmp157 = param2;
// line 97
org$frostlang$frostc$Position $tmp158 = org$frostlang$frostc$Position$init$frost$core$Int64$frost$core$Int64(param3, param3);
org$frostlang$frostc$Position* $tmp159 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp159 = $tmp158;
// line 98
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp161 = &param0->resolved;
*$tmp161 = $tmp160;
// line 99
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp162 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp163 = *$tmp162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
org$frostlang$frostc$FixedArray** $tmp164 = &param0->subtypes;
*$tmp164 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 100
frost$core$Int64 $tmp165 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp166 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp165);
org$frostlang$frostc$Position* $tmp167 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp168 = *$tmp167;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp166, $tmp168, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5) {

// line 104
frost$core$Int64 $tmp169 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64(param0, param1, param2, param3, param4, param5, $tmp169);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5, frost$core$Int64 param6) {

frost$core$Bit local0;
// line 37
frost$core$Weak* $tmp170 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp170, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$Weak** $tmp171 = &param0->genericClassParameter;
frost$core$Weak* $tmp172 = *$tmp171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Weak** $tmp173 = &param0->genericClassParameter;
*$tmp173 = $tmp170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
// line 40
frost$core$Weak* $tmp174 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp174, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Weak** $tmp175 = &param0->genericMethodParameter;
frost$core$Weak* $tmp176 = *$tmp175;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Weak** $tmp177 = &param0->genericMethodParameter;
*$tmp177 = $tmp174;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$Type$Kind$wrapper* $tmp178;
$tmp178 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp178->value = param2;
frost$core$Int64 $tmp179 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp180 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp179);
org$frostlang$frostc$Type$Kind$wrapper* $tmp181;
$tmp181 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp181->value = $tmp180;
ITable* $tmp182 = ((frost$core$Equatable*) $tmp178)->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[1];
frost$core$Bit $tmp185 = $tmp183(((frost$core$Equatable*) $tmp178), ((frost$core$Equatable*) $tmp181));
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp187;
$tmp187 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp187->value = param2;
frost$core$Int64 $tmp188 = (frost$core$Int64) {12};
org$frostlang$frostc$Type$Kind $tmp189 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp188);
org$frostlang$frostc$Type$Kind$wrapper* $tmp190;
$tmp190 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp190->value = $tmp189;
ITable* $tmp191 = ((frost$core$Equatable*) $tmp187)->$class->itable;
while ($tmp191->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[1];
frost$core$Bit $tmp194 = $tmp192(((frost$core$Equatable*) $tmp187), ((frost$core$Equatable*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp190)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp187)));
*(&local0) = $tmp194;
goto block3;
block2:;
*(&local0) = $tmp185;
goto block3;
block3:;
frost$core$Bit $tmp195 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp181)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp178)));
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp197 = (frost$core$Int64) {108};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s198, $tmp197, &$s199);
abort(); // unreachable
block4:;
// line 110
org$frostlang$frostc$Type$Kind$wrapper* $tmp200;
$tmp200 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp200->value = param2;
frost$core$Int64 $tmp201 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp202 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp201);
org$frostlang$frostc$Type$Kind$wrapper* $tmp203;
$tmp203 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp203->value = $tmp202;
ITable* $tmp204 = ((frost$core$Equatable*) $tmp200)->$class->itable;
while ($tmp204->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp204 = $tmp204->next;
}
$fn206 $tmp205 = $tmp204->methods[0];
frost$core$Bit $tmp207 = $tmp205(((frost$core$Equatable*) $tmp200), ((frost$core$Equatable*) $tmp203));
frost$core$Bit $tmp208 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s209);
frost$core$Bit $tmp210 = frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit($tmp207, $tmp208);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp212 = (frost$core$Int64) {110};
frost$core$String* $tmp213 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s214, param1);
frost$core$String* $tmp215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp213, &$s216);
org$frostlang$frostc$Type$Kind$wrapper* $tmp217;
$tmp217 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp217->value = param2;
frost$core$Int64 $tmp218 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp219 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp218);
org$frostlang$frostc$Type$Kind$wrapper* $tmp220;
$tmp220 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp220->value = $tmp219;
ITable* $tmp221 = ((frost$core$Equatable*) $tmp217)->$class->itable;
while ($tmp221->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp221 = $tmp221->next;
}
$fn223 $tmp222 = $tmp221->methods[0];
frost$core$Bit $tmp224 = $tmp222(((frost$core$Equatable*) $tmp217), ((frost$core$Equatable*) $tmp220));
frost$core$Bit$wrapper* $tmp225;
$tmp225 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp225->value = $tmp224;
frost$core$String* $tmp226 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp215, ((frost$core$Object*) $tmp225));
frost$core$String* $tmp227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp226, &$s228);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s229, $tmp212, $tmp227);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp220)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp217)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp203)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp200)));
// line 112
org$frostlang$frostc$Type$Kind$wrapper* $tmp230;
$tmp230 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp230->value = param2;
frost$core$Int64 $tmp231 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp232 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp231);
org$frostlang$frostc$Type$Kind$wrapper* $tmp233;
$tmp233 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp233->value = $tmp232;
ITable* $tmp234 = ((frost$core$Equatable*) $tmp230)->$class->itable;
while ($tmp234->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp234 = $tmp234->next;
}
$fn236 $tmp235 = $tmp234->methods[0];
frost$core$Bit $tmp237 = $tmp235(((frost$core$Equatable*) $tmp230), ((frost$core$Equatable*) $tmp233));
frost$core$Bit $tmp238 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s239);
frost$core$Bit $tmp240 = frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit($tmp237, $tmp238);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp242 = (frost$core$Int64) {112};
frost$core$String* $tmp243 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s244, param1);
frost$core$String* $tmp245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp243, &$s246);
org$frostlang$frostc$Type$Kind$wrapper* $tmp247;
$tmp247 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp247->value = param2;
frost$core$Int64 $tmp248 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp249 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp248);
org$frostlang$frostc$Type$Kind$wrapper* $tmp250;
$tmp250 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp250->value = $tmp249;
ITable* $tmp251 = ((frost$core$Equatable*) $tmp247)->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
frost$core$Bit $tmp254 = $tmp252(((frost$core$Equatable*) $tmp247), ((frost$core$Equatable*) $tmp250));
frost$core$Bit$wrapper* $tmp255;
$tmp255 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp255->value = $tmp254;
frost$core$String* $tmp256 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp245, ((frost$core$Object*) $tmp255));
frost$core$String* $tmp257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp256, &$s258);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s259, $tmp242, $tmp257);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp250)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp247)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
abort(); // unreachable
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp233)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp230)));
// line 114
org$frostlang$frostc$Type$Kind* $tmp260 = &param0->typeKind;
*$tmp260 = param2;
// line 115
org$frostlang$frostc$Position* $tmp261 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp261 = param3;
// line 116
frost$core$Bit* $tmp262 = &param0->resolved;
*$tmp262 = param5;
// line 117
frost$core$Int64* $tmp263 = &param0->priority;
*$tmp263 = param6;
// line 118
org$frostlang$frostc$FixedArray* $tmp264 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp264, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
org$frostlang$frostc$FixedArray** $tmp265 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp266 = *$tmp265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
org$frostlang$frostc$FixedArray** $tmp267 = &param0->subtypes;
*$tmp267 = $tmp264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// line 119
frost$core$Int64 $tmp268 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp269 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp268);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp269, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter(org$frostlang$frostc$Type* param0, org$frostlang$frostc$ClassDecl$GenericParameter* param1) {

// line 37
frost$core$Weak* $tmp270 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp270, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Weak** $tmp271 = &param0->genericClassParameter;
frost$core$Weak* $tmp272 = *$tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Weak** $tmp273 = &param0->genericClassParameter;
*$tmp273 = $tmp270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// line 40
frost$core$Weak* $tmp274 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp274, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
frost$core$Weak** $tmp275 = &param0->genericMethodParameter;
frost$core$Weak* $tmp276 = *$tmp275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
frost$core$Weak** $tmp277 = &param0->genericMethodParameter;
*$tmp277 = $tmp274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// line 123
frost$core$Int64 $tmp278 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp279 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp278);
org$frostlang$frostc$Type$Kind* $tmp280 = &param0->typeKind;
*$tmp280 = $tmp279;
// line 124
frost$core$Weak* $tmp281 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp281, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Weak** $tmp282 = &param0->genericClassParameter;
frost$core$Weak* $tmp283 = *$tmp282;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Weak** $tmp284 = &param0->genericClassParameter;
*$tmp284 = $tmp281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// line 125
frost$core$Bit $tmp285 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp286 = &param0->resolved;
*$tmp286 = $tmp285;
// line 126
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp287 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp288 = *$tmp287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
org$frostlang$frostc$FixedArray** $tmp289 = &param0->subtypes;
*$tmp289 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 127
frost$core$Int64 $tmp290 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp291 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp290);
org$frostlang$frostc$Position* $tmp292 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp293 = *$tmp292;
frost$core$String** $tmp294 = &param1->owner;
frost$core$String* $tmp295 = *$tmp294;
frost$core$String* $tmp296 = frost$core$String$get_asString$R$frost$core$String($tmp295);
frost$core$String* $tmp297 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp296, &$s298);
frost$core$String** $tmp299 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp300 = *$tmp299;
frost$core$String* $tmp301 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp297, $tmp300);
frost$core$String* $tmp302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp301, &$s303);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp291, $tmp293, $tmp302);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodDecl$GenericParameter(org$frostlang$frostc$Type* param0, org$frostlang$frostc$MethodDecl$GenericParameter* param1) {

// line 37
frost$core$Weak* $tmp304 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp304, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Weak** $tmp305 = &param0->genericClassParameter;
frost$core$Weak* $tmp306 = *$tmp305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Weak** $tmp307 = &param0->genericClassParameter;
*$tmp307 = $tmp304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// line 40
frost$core$Weak* $tmp308 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp308, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$core$Weak** $tmp309 = &param0->genericMethodParameter;
frost$core$Weak* $tmp310 = *$tmp309;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
frost$core$Weak** $tmp311 = &param0->genericMethodParameter;
*$tmp311 = $tmp308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// line 131
frost$core$Int64 $tmp312 = (frost$core$Int64) {12};
org$frostlang$frostc$Type$Kind $tmp313 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp312);
org$frostlang$frostc$Type$Kind* $tmp314 = &param0->typeKind;
*$tmp314 = $tmp313;
// line 132
frost$core$Weak* $tmp315 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp315, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Weak** $tmp316 = &param0->genericMethodParameter;
frost$core$Weak* $tmp317 = *$tmp316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Weak** $tmp318 = &param0->genericMethodParameter;
*$tmp318 = $tmp315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
// line 133
frost$core$Bit $tmp319 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp320 = &param0->resolved;
*$tmp320 = $tmp319;
// line 134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp321 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp322 = *$tmp321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
org$frostlang$frostc$FixedArray** $tmp323 = &param0->subtypes;
*$tmp323 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 135
frost$core$Int64 $tmp324 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp325 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp324);
org$frostlang$frostc$Position* $tmp326 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp327 = *$tmp326;
frost$core$String** $tmp328 = &param1->owner;
frost$core$String* $tmp329 = *$tmp328;
frost$core$String* $tmp330 = frost$core$String$get_asString$R$frost$core$String($tmp329);
frost$core$String* $tmp331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp330, &$s332);
frost$core$String** $tmp333 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp334 = *$tmp333;
frost$core$String* $tmp335 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp331, $tmp334);
frost$core$String* $tmp336 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp335, &$s337);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp325, $tmp327, $tmp336);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodRef(org$frostlang$frostc$Type* param0, org$frostlang$frostc$MethodRef* param1) {

// line 37
frost$core$Weak* $tmp338 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp338, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Weak** $tmp339 = &param0->genericClassParameter;
frost$core$Weak* $tmp340 = *$tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Weak** $tmp341 = &param0->genericClassParameter;
*$tmp341 = $tmp338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// line 40
frost$core$Weak* $tmp342 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp342, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Weak** $tmp343 = &param0->genericMethodParameter;
frost$core$Weak* $tmp344 = *$tmp343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Weak** $tmp345 = &param0->genericMethodParameter;
*$tmp345 = $tmp342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// line 139
org$frostlang$frostc$Type** $tmp346 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp347 = *$tmp346;
org$frostlang$frostc$Type$Kind* $tmp348 = &$tmp347->typeKind;
org$frostlang$frostc$Type$Kind $tmp349 = *$tmp348;
org$frostlang$frostc$Type$Kind* $tmp350 = &param0->typeKind;
*$tmp350 = $tmp349;
// line 140
org$frostlang$frostc$Type** $tmp351 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp352 = *$tmp351;
org$frostlang$frostc$FixedArray** $tmp353 = &$tmp352->subtypes;
org$frostlang$frostc$FixedArray* $tmp354 = *$tmp353;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
org$frostlang$frostc$FixedArray** $tmp355 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp356 = *$tmp355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
org$frostlang$frostc$FixedArray** $tmp357 = &param0->subtypes;
*$tmp357 = $tmp354;
// line 141
org$frostlang$frostc$Type** $tmp358 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp359 = *$tmp358;
frost$core$Bit* $tmp360 = &$tmp359->resolved;
frost$core$Bit $tmp361 = *$tmp360;
frost$core$Bit* $tmp362 = &param0->resolved;
*$tmp362 = $tmp361;
// line 142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodRef** $tmp363 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp364 = *$tmp363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
org$frostlang$frostc$MethodRef** $tmp365 = &param0->methodRef;
*$tmp365 = param1;
// line 143
frost$core$Int64 $tmp366 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp367 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp366);
org$frostlang$frostc$Type** $tmp368 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp369 = *$tmp368;
org$frostlang$frostc$Position* $tmp370 = &((org$frostlang$frostc$Symbol*) $tmp369)->position;
org$frostlang$frostc$Position $tmp371 = *$tmp370;
org$frostlang$frostc$Type** $tmp372 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp373 = *$tmp372;
frost$core$String** $tmp374 = &((org$frostlang$frostc$Symbol*) $tmp373)->name;
frost$core$String* $tmp375 = *$tmp374;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp367, $tmp371, $tmp375);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$collections$ListView* param1) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
frost$core$Bit local4;
frost$collections$Array* local5 = NULL;
// line 148
frost$core$Bit* $tmp376 = &param0->resolved;
frost$core$Bit $tmp377 = *$tmp376;
*(&local0) = $tmp377;
// line 149
frost$core$MutableString* $tmp378 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp378);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$MutableString* $tmp379 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local1) = $tmp378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// line 150
frost$core$MutableString* $tmp380 = *(&local1);
frost$core$String** $tmp381 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp382 = *$tmp381;
frost$core$MutableString$append$frost$core$String($tmp380, $tmp382);
// line 151
frost$core$MutableString* $tmp383 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp383, &$s384);
// line 152
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s385));
frost$core$String* $tmp386 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local2) = &$s387;
// line 153
ITable* $tmp388 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp388->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp388 = $tmp388->next;
}
$fn390 $tmp389 = $tmp388->methods[0];
frost$collections$Iterator* $tmp391 = $tmp389(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp392 = $tmp391->$class->itable;
while ($tmp392->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp392 = $tmp392->next;
}
$fn394 $tmp393 = $tmp392->methods[0];
frost$core$Bit $tmp395 = $tmp393($tmp391);
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block3; else goto block2;
block2:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp397 = $tmp391->$class->itable;
while ($tmp397->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp397 = $tmp397->next;
}
$fn399 $tmp398 = $tmp397->methods[1];
frost$core$Object* $tmp400 = $tmp398($tmp391);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp400)));
org$frostlang$frostc$Type* $tmp401 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp400);
// line 154
frost$core$Bit $tmp402 = *(&local0);
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp404 = *(&local3);
frost$core$Bit* $tmp405 = &$tmp404->resolved;
frost$core$Bit $tmp406 = *$tmp405;
*(&local4) = $tmp406;
goto block6;
block5:;
*(&local4) = $tmp402;
goto block6;
block6:;
frost$core$Bit $tmp407 = *(&local4);
*(&local0) = $tmp407;
// line 155
frost$core$MutableString* $tmp408 = *(&local1);
frost$core$String* $tmp409 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp408, $tmp409);
// line 156
frost$core$MutableString* $tmp410 = *(&local1);
org$frostlang$frostc$Type* $tmp411 = *(&local3);
frost$core$String** $tmp412 = &((org$frostlang$frostc$Symbol*) $tmp411)->name;
frost$core$String* $tmp413 = *$tmp412;
frost$core$MutableString$append$frost$core$String($tmp410, $tmp413);
// line 157
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s414));
frost$core$String* $tmp415 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local2) = &$s416;
frost$core$Frost$unref$frost$core$Object$Q($tmp400);
org$frostlang$frostc$Type* $tmp417 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
// line 159
frost$core$MutableString* $tmp418 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp418, &$s419);
// line 160
frost$collections$Array* $tmp420 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp420);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$collections$Array* $tmp421 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local5) = $tmp420;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
// line 161
frost$collections$Array* $tmp422 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp422, ((frost$core$Object*) param0));
// line 162
frost$collections$Array* $tmp423 = *(&local5);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp423, ((frost$collections$CollectionView*) param1));
// line 163
org$frostlang$frostc$Type* $tmp424 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp425 = *(&local1);
frost$core$String* $tmp426 = frost$core$MutableString$finish$R$frost$core$String($tmp425);
frost$core$Int64 $tmp427 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp428 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp427);
org$frostlang$frostc$Position* $tmp429 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp430 = *$tmp429;
frost$collections$Array* $tmp431 = *(&local5);
frost$core$Bit $tmp432 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp424, $tmp426, $tmp428, $tmp430, ((frost$collections$ListView*) $tmp431), $tmp432);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$collections$Array* $tmp433 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp434 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp435 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp424;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Position param0, org$frostlang$frostc$Type$Kind param1, frost$collections$ListView* param2, org$frostlang$frostc$Type* param3, frost$core$Int64 param4) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Bit local5;
// line 169
frost$core$Bit* $tmp436 = &param3->resolved;
frost$core$Bit $tmp437 = *$tmp436;
*(&local0) = $tmp437;
// line 170
frost$core$MutableString* $tmp438 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp438, &$s439);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$MutableString* $tmp440 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
*(&local1) = $tmp438;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
// line 171
frost$collections$Array* $tmp441 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp441);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$collections$Array* $tmp442 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
*(&local2) = $tmp441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
// line 172
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s443));
frost$core$String* $tmp444 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
*(&local3) = &$s445;
// line 173
ITable* $tmp446 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp446->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp446 = $tmp446->next;
}
$fn448 $tmp447 = $tmp446->methods[0];
frost$collections$Iterator* $tmp449 = $tmp447(((frost$collections$Iterable*) param2));
goto block1;
block1:;
ITable* $tmp450 = $tmp449->$class->itable;
while ($tmp450->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp450 = $tmp450->next;
}
$fn452 $tmp451 = $tmp450->methods[0];
frost$core$Bit $tmp453 = $tmp451($tmp449);
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block3; else goto block2;
block2:;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp455 = $tmp449->$class->itable;
while ($tmp455->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp455 = $tmp455->next;
}
$fn457 $tmp456 = $tmp455->methods[1];
frost$core$Object* $tmp458 = $tmp456($tmp449);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp458)));
org$frostlang$frostc$Type* $tmp459 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp458);
// line 174
frost$collections$Array* $tmp460 = *(&local2);
org$frostlang$frostc$Type* $tmp461 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp460, ((frost$core$Object*) $tmp461));
// line 175
frost$core$Bit $tmp462 = *(&local0);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp464 = *(&local4);
frost$core$Bit* $tmp465 = &$tmp464->resolved;
frost$core$Bit $tmp466 = *$tmp465;
*(&local5) = $tmp466;
goto block6;
block5:;
*(&local5) = $tmp462;
goto block6;
block6:;
frost$core$Bit $tmp467 = *(&local5);
*(&local0) = $tmp467;
// line 176
frost$core$MutableString* $tmp468 = *(&local1);
frost$core$String* $tmp469 = *(&local3);
frost$core$MutableString$append$frost$core$String($tmp468, $tmp469);
// line 177
frost$core$MutableString* $tmp470 = *(&local1);
org$frostlang$frostc$Type* $tmp471 = *(&local4);
frost$core$String** $tmp472 = &((org$frostlang$frostc$Symbol*) $tmp471)->name;
frost$core$String* $tmp473 = *$tmp472;
frost$core$MutableString$append$frost$core$String($tmp470, $tmp473);
// line 178
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s474));
frost$core$String* $tmp475 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local3) = &$s476;
frost$core$Frost$unref$frost$core$Object$Q($tmp458);
org$frostlang$frostc$Type* $tmp477 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// line 180
frost$core$Int64 $tmp478 = param1.$rawValue;
frost$core$Int64 $tmp479 = (frost$core$Int64) {14};
frost$core$Bit $tmp480 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp478, $tmp479);
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block8; else goto block9;
block8:;
// line 182
frost$core$MutableString* $tmp482 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp482, &$s483);
goto block7;
block9:;
frost$core$Int64 $tmp484 = (frost$core$Int64) {15};
frost$core$Bit $tmp485 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp478, $tmp484);
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block10; else goto block11;
block10:;
// line 185
frost$core$MutableString* $tmp487 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp487, &$s488);
goto block7;
block11:;
frost$core$Int64 $tmp489 = (frost$core$Int64) {16};
frost$core$Bit $tmp490 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp478, $tmp489);
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block12; else goto block13;
block12:;
// line 188
frost$core$MutableString* $tmp492 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp492, &$s493);
goto block7;
block13:;
frost$core$Int64 $tmp494 = (frost$core$Int64) {17};
frost$core$Bit $tmp495 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp478, $tmp494);
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block14; else goto block15;
block14:;
// line 191
frost$core$MutableString* $tmp497 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp497, &$s498);
goto block7;
block15:;
// line 194
frost$core$Bit $tmp499 = frost$core$Bit$init$builtin_bit(false);
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp501 = (frost$core$Int64) {194};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s502, $tmp501);
abort(); // unreachable
block16:;
goto block7;
block7:;
// line 197
frost$collections$Array* $tmp503 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp503, ((frost$core$Object*) param3));
// line 198
org$frostlang$frostc$Type* $tmp504 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp505 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp505->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp505 = $tmp505->next;
}
$fn507 $tmp506 = $tmp505->methods[1];
frost$core$Bit $tmp508 = $tmp506(((frost$core$Equatable*) param3), ((frost$core$Equatable*) $tmp504));
bool $tmp509 = $tmp508.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
if ($tmp509) goto block18; else goto block19;
block18:;
// line 199
frost$core$MutableString* $tmp510 = *(&local1);
frost$core$String** $tmp511 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp512 = *$tmp511;
frost$core$MutableString$append$frost$core$String($tmp510, $tmp512);
goto block19;
block19:;
// line 201
frost$core$MutableString* $tmp513 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp513, &$s514);
// line 202
org$frostlang$frostc$Type* $tmp515 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp516 = *(&local1);
frost$core$String* $tmp517 = frost$core$MutableString$finish$R$frost$core$String($tmp516);
frost$collections$Array* $tmp518 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp519 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp518);
frost$core$Bit $tmp520 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64($tmp515, $tmp517, param1, param0, ((frost$collections$ListView*) $tmp519), $tmp520, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$String* $tmp521 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp522 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$MutableString* $tmp523 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp515;

}
frost$core$Int64 org$frostlang$frostc$Type$get_size$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
// line 207
org$frostlang$frostc$Type$Kind* $tmp524 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp525 = *$tmp524;
org$frostlang$frostc$Type$Kind$wrapper* $tmp526;
$tmp526 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp526->value = $tmp525;
frost$core$Int64 $tmp527 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp528 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp527);
org$frostlang$frostc$Type$Kind$wrapper* $tmp529;
$tmp529 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp529->value = $tmp528;
ITable* $tmp530 = ((frost$core$Equatable*) $tmp526)->$class->itable;
while ($tmp530->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp530 = $tmp530->next;
}
$fn532 $tmp531 = $tmp530->methods[0];
frost$core$Bit $tmp533 = $tmp531(((frost$core$Equatable*) $tmp526), ((frost$core$Equatable*) $tmp529));
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block1; else goto block2;
block1:;
*(&local1) = $tmp533;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp535 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp536 = *$tmp535;
org$frostlang$frostc$Type$Kind$wrapper* $tmp537;
$tmp537 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp537->value = $tmp536;
frost$core$Int64 $tmp538 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp539 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp538);
org$frostlang$frostc$Type$Kind$wrapper* $tmp540;
$tmp540 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp540->value = $tmp539;
ITable* $tmp541 = ((frost$core$Equatable*) $tmp537)->$class->itable;
while ($tmp541->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp541 = $tmp541->next;
}
$fn543 $tmp542 = $tmp541->methods[0];
frost$core$Bit $tmp544 = $tmp542(((frost$core$Equatable*) $tmp537), ((frost$core$Equatable*) $tmp540));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp540)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp537)));
*(&local1) = $tmp544;
goto block3;
block3:;
frost$core$Bit $tmp545 = *(&local1);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block4; else goto block5;
block4:;
*(&local0) = $tmp545;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp547 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp548 = *$tmp547;
org$frostlang$frostc$Type$Kind$wrapper* $tmp549;
$tmp549 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp549->value = $tmp548;
frost$core$Int64 $tmp550 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp551 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp550);
org$frostlang$frostc$Type$Kind$wrapper* $tmp552;
$tmp552 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp552->value = $tmp551;
ITable* $tmp553 = ((frost$core$Equatable*) $tmp549)->$class->itable;
while ($tmp553->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp553 = $tmp553->next;
}
$fn555 $tmp554 = $tmp553->methods[0];
frost$core$Bit $tmp556 = $tmp554(((frost$core$Equatable*) $tmp549), ((frost$core$Equatable*) $tmp552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp552)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp549)));
*(&local0) = $tmp556;
goto block6;
block6:;
frost$core$Bit $tmp557 = *(&local0);
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp559 = (frost$core$Int64) {207};
frost$core$String* $tmp560 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s561, ((frost$core$Object*) param0));
frost$core$String* $tmp562 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp560, &$s563);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s564, $tmp559, $tmp562);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
abort(); // unreachable
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp529)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp526)));
// line 209
org$frostlang$frostc$Position* $tmp565 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp566 = *$tmp565;
frost$core$Int64 $tmp567 = $tmp566.line;
return $tmp567;

}
frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$core$Bit local0;
// line 219
frost$core$String** $tmp568 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp569 = *$tmp568;
frost$core$String** $tmp570 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp571 = *$tmp570;
frost$core$Bit $tmp572 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp569, $tmp571);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Type$Kind* $tmp574 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp575 = *$tmp574;
org$frostlang$frostc$Type$Kind$wrapper* $tmp576;
$tmp576 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp576->value = $tmp575;
org$frostlang$frostc$Type$Kind* $tmp577 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp578 = *$tmp577;
org$frostlang$frostc$Type$Kind$wrapper* $tmp579;
$tmp579 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp579->value = $tmp578;
ITable* $tmp580 = ((frost$core$Equatable*) $tmp576)->$class->itable;
while ($tmp580->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp580 = $tmp580->next;
}
$fn582 $tmp581 = $tmp580->methods[0];
frost$core$Bit $tmp583 = $tmp581(((frost$core$Equatable*) $tmp576), ((frost$core$Equatable*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp579)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp576)));
*(&local0) = $tmp583;
goto block3;
block2:;
*(&local0) = $tmp572;
goto block3;
block3:;
frost$core$Bit $tmp584 = *(&local0);
return $tmp584;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type() {

// line 224
org$frostlang$frostc$Type* $tmp585 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp586 = (frost$core$Int64) {4};
org$frostlang$frostc$Type$Kind $tmp587 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp586);
org$frostlang$frostc$Position $tmp588 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp589 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp585, &$s590, $tmp587, $tmp588, $tmp589);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
return $tmp585;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type() {

// line 229
org$frostlang$frostc$Type* $tmp591 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp592 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp593 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp592);
org$frostlang$frostc$Position $tmp594 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp595 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp591, &$s596, $tmp593, $tmp594, $tmp595);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
return $tmp591;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type() {

// line 234
org$frostlang$frostc$Type* $tmp597 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp598 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp599 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp598);
org$frostlang$frostc$Position $tmp600 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp601 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp597, &$s602, $tmp599, $tmp600, $tmp601);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
return $tmp597;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type() {

frost$collections$Array* local0 = NULL;
// line 239
frost$collections$Array* $tmp603 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp603);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
frost$collections$Array* $tmp604 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local0) = $tmp603;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
// line 240
frost$collections$Array* $tmp605 = *(&local0);
org$frostlang$frostc$Type* $tmp606 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp605, ((frost$core$Object*) $tmp606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// line 241
org$frostlang$frostc$Type* $tmp607 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp608 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp609 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp608);
org$frostlang$frostc$Position $tmp610 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp611 = *(&local0);
frost$core$Bit $tmp612 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp607, &$s613, $tmp609, $tmp610, ((frost$collections$ListView*) $tmp611), $tmp612);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$collections$Array* $tmp614 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp607;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type() {

// line 246
org$frostlang$frostc$Type* $tmp615 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp616 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp617 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp616);
org$frostlang$frostc$Position $tmp618 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp619 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp615, &$s620, $tmp617, $tmp618, $tmp619);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
return $tmp615;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Immutable$R$org$frostlang$frostc$Type() {

// line 251
org$frostlang$frostc$Type* $tmp621 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp622 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp623 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp622);
org$frostlang$frostc$Position $tmp624 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp625 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp621, &$s626, $tmp623, $tmp624, $tmp625);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
return $tmp621;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type() {

// line 256
org$frostlang$frostc$Type* $tmp627 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp628 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp629 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp628);
org$frostlang$frostc$Position $tmp630 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp631 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp627, &$s632, $tmp629, $tmp630, $tmp631);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
return $tmp627;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type() {

// line 261
org$frostlang$frostc$Type* $tmp633 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp634 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp635 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp634);
org$frostlang$frostc$Position $tmp636 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp637 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp633, &$s638, $tmp635, $tmp636, $tmp637);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
return $tmp633;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type() {

// line 266
org$frostlang$frostc$Type* $tmp639 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp640 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp641 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp640);
org$frostlang$frostc$Position $tmp642 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp643 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp639, &$s644, $tmp641, $tmp642, $tmp643);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
return $tmp639;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RegularExpression$R$org$frostlang$frostc$Type() {

// line 271
org$frostlang$frostc$Type* $tmp645 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp646 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp647 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp646);
org$frostlang$frostc$Position $tmp648 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp649 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp645, &$s650, $tmp647, $tmp648, $tmp649);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
return $tmp645;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt8$R$org$frostlang$frostc$Type() {

// line 276
org$frostlang$frostc$Type* $tmp651 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp652 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp653 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp652);
frost$core$Int64 $tmp654 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp651, &$s655, $tmp653, $tmp654);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
return $tmp651;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt16$R$org$frostlang$frostc$Type() {

// line 281
org$frostlang$frostc$Type* $tmp656 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp657 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp658 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp657);
frost$core$Int64 $tmp659 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp656, &$s660, $tmp658, $tmp659);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
return $tmp656;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt32$R$org$frostlang$frostc$Type() {

// line 286
org$frostlang$frostc$Type* $tmp661 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp662 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp663 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp662);
frost$core$Int64 $tmp664 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp661, &$s665, $tmp663, $tmp664);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
return $tmp661;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt64$R$org$frostlang$frostc$Type() {

// line 291
org$frostlang$frostc$Type* $tmp666 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp667 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp668 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp667);
frost$core$Int64 $tmp669 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp666, &$s670, $tmp668, $tmp669);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
return $tmp666;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt8$R$org$frostlang$frostc$Type() {

// line 296
org$frostlang$frostc$Type* $tmp671 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp672 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp673 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp672);
frost$core$Int64 $tmp674 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp671, &$s675, $tmp673, $tmp674);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
return $tmp671;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt16$R$org$frostlang$frostc$Type() {

// line 301
org$frostlang$frostc$Type* $tmp676 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp677 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp678 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp677);
frost$core$Int64 $tmp679 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp676, &$s680, $tmp678, $tmp679);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
return $tmp676;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt32$R$org$frostlang$frostc$Type() {

// line 306
org$frostlang$frostc$Type* $tmp681 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp682 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp683 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp682);
frost$core$Int64 $tmp684 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp681, &$s685, $tmp683, $tmp684);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
return $tmp681;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt64$R$org$frostlang$frostc$Type() {

// line 311
org$frostlang$frostc$Type* $tmp686 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp687 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp688 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp687);
frost$core$Int64 $tmp689 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp686, &$s690, $tmp688, $tmp689);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
return $tmp686;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat32$R$org$frostlang$frostc$Type() {

// line 316
org$frostlang$frostc$Type* $tmp691 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp692 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp693 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp692);
frost$core$Int64 $tmp694 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp691, &$s695, $tmp693, $tmp694);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
return $tmp691;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat64$R$org$frostlang$frostc$Type() {

// line 321
org$frostlang$frostc$Type* $tmp696 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp697 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp698 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp697);
frost$core$Int64 $tmp699 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp696, &$s700, $tmp698, $tmp699);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
return $tmp696;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type() {

// line 326
org$frostlang$frostc$Type* $tmp701 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp702 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp703 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp702);
org$frostlang$frostc$Position $tmp704 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp705 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp701, &$s706, $tmp703, $tmp704, $tmp705);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
return $tmp701;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type() {

// line 331
org$frostlang$frostc$Type* $tmp707 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp708 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp709 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp708);
org$frostlang$frostc$Position $tmp710 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp711 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp707, &$s712, $tmp709, $tmp710, $tmp711);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
return $tmp707;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type() {

// line 336
org$frostlang$frostc$Type* $tmp713 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp714 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp715 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp714);
org$frostlang$frostc$Position $tmp716 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp717 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp713, &$s718, $tmp715, $tmp716, $tmp717);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
return $tmp713;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type() {

// line 341
org$frostlang$frostc$Type* $tmp719 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp720 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp721 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp720);
org$frostlang$frostc$Position $tmp722 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp723 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp719, &$s724, $tmp721, $tmp722, $tmp723);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
return $tmp719;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type() {

// line 346
org$frostlang$frostc$Type* $tmp725 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp726 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp727 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp726);
org$frostlang$frostc$Position $tmp728 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp729 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp725, &$s730, $tmp727, $tmp728, $tmp729);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
return $tmp725;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type() {

// line 351
org$frostlang$frostc$Type* $tmp731 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp732 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp733 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp732);
org$frostlang$frostc$Position $tmp734 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp735 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp731, &$s736, $tmp733, $tmp734, $tmp735);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
return $tmp731;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type() {

// line 356
org$frostlang$frostc$Type* $tmp737 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp738 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp739 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp738);
org$frostlang$frostc$Position $tmp740 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp741 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp737, &$s742, $tmp739, $tmp740, $tmp741);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
return $tmp737;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type() {

// line 361
org$frostlang$frostc$Type* $tmp743 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp744 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp745 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp744);
org$frostlang$frostc$Position $tmp746 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp747 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp743, &$s748, $tmp745, $tmp746, $tmp747);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
return $tmp743;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type() {

// line 366
org$frostlang$frostc$Type* $tmp749 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp750 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp751 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp750);
org$frostlang$frostc$Position $tmp752 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp753 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp749, &$s754, $tmp751, $tmp752, $tmp753);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
return $tmp749;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type() {

// line 371
org$frostlang$frostc$Type* $tmp755 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp756 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp757 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp756);
org$frostlang$frostc$Position $tmp758 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp759 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp755, &$s760, $tmp757, $tmp758, $tmp759);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
return $tmp755;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type() {

// line 376
org$frostlang$frostc$Type* $tmp761 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp762 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp763 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp762);
org$frostlang$frostc$Position $tmp764 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp765 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp761, &$s766, $tmp763, $tmp764, $tmp765);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
return $tmp761;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type() {

// line 381
org$frostlang$frostc$Type* $tmp767 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp768 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp769 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp768);
org$frostlang$frostc$Position $tmp770 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp771 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp767, &$s772, $tmp769, $tmp770, $tmp771);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
return $tmp767;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type() {

// line 386
org$frostlang$frostc$Type* $tmp773 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp774 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp775 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp774);
org$frostlang$frostc$Position $tmp776 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp777 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp773, &$s778, $tmp775, $tmp776, $tmp777);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
return $tmp773;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type() {

// line 391
org$frostlang$frostc$Type* $tmp779 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp780 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp781 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp780);
org$frostlang$frostc$Position $tmp782 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp783 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp779, &$s784, $tmp781, $tmp782, $tmp783);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
return $tmp779;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$IntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

// line 396
org$frostlang$frostc$Type* $tmp785 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp786;
$tmp786 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp786->value = param0;
frost$core$String* $tmp787 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s788, ((frost$core$Object*) $tmp786));
frost$core$String* $tmp789 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp787, &$s790);
frost$core$Int64 $tmp791 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp792 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp791);
org$frostlang$frostc$Position $tmp793 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp794 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp785, $tmp789, $tmp792, $tmp793, $tmp794);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
return $tmp785;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$NegatedIntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

// line 401
org$frostlang$frostc$Type* $tmp795 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp796;
$tmp796 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp796->value = param0;
frost$core$String* $tmp797 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s798, ((frost$core$Object*) $tmp796));
frost$core$String* $tmp799 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp797, &$s800);
frost$core$Int64 $tmp801 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp802 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp801);
org$frostlang$frostc$Position $tmp803 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp804 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp795, $tmp799, $tmp802, $tmp803, $tmp804);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
return $tmp795;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RealLiteral$frost$core$Real64$R$org$frostlang$frostc$Type(frost$core$Real64 param0) {

// line 406
org$frostlang$frostc$Type* $tmp805 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Real64$wrapper* $tmp806;
$tmp806 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp806->value = param0;
frost$core$String* $tmp807 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s808, ((frost$core$Object*) $tmp806));
frost$core$String* $tmp809 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp807, &$s810);
frost$core$Int64 $tmp811 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp812 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp811);
org$frostlang$frostc$Position $tmp813 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp814 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp805, $tmp809, $tmp812, $tmp813, $tmp814);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
return $tmp805;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BitLiteral$R$org$frostlang$frostc$Type() {

// line 411
org$frostlang$frostc$Type* $tmp815 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp816 = (frost$core$Int64) {7};
org$frostlang$frostc$Type$Kind $tmp817 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp816);
org$frostlang$frostc$Position $tmp818 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp819 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp815, &$s820, $tmp817, $tmp818, $tmp819);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
return $tmp815;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ClassLiteral$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 416
frost$collections$Array* $tmp821 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp821);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
frost$collections$Array* $tmp822 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
*(&local0) = $tmp821;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
// line 417
frost$collections$Array* $tmp823 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp823, ((frost$core$Object*) param0));
// line 418
org$frostlang$frostc$Type* $tmp824 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$collections$Array* $tmp825 = *(&local0);
org$frostlang$frostc$Type* $tmp826 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp824, ((frost$collections$ListView*) $tmp825));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$collections$Array* $tmp827 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp826;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type() {

// line 423
org$frostlang$frostc$Type* $tmp828 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp829 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$Kind $tmp830 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp829);
org$frostlang$frostc$Position $tmp831 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp832 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp828, &$s833, $tmp830, $tmp831, $tmp832);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
return $tmp828;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type() {

// line 428
org$frostlang$frostc$Type* $tmp834 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp835 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp836 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp835);
org$frostlang$frostc$Position $tmp837 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp838 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp834, &$s839, $tmp836, $tmp837, $tmp838);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
return $tmp834;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterable$R$org$frostlang$frostc$Type() {

// line 433
org$frostlang$frostc$Type* $tmp840 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp841 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp842 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp841);
org$frostlang$frostc$Position $tmp843 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp844 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp840, &$s845, $tmp842, $tmp843, $tmp844);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
return $tmp840;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Frost$R$org$frostlang$frostc$Type() {

// line 438
org$frostlang$frostc$Type* $tmp846 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp847 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp848 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp847);
org$frostlang$frostc$Position $tmp849 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp850 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp846, &$s851, $tmp848, $tmp849, $tmp850);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
return $tmp846;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type() {

// line 443
org$frostlang$frostc$Type* $tmp852 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp853 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp854 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp853);
org$frostlang$frostc$Position $tmp855 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp856 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp852, &$s857, $tmp854, $tmp855, $tmp856);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
return $tmp852;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type() {

// line 448
org$frostlang$frostc$Type* $tmp858 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp859 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp860 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp859);
org$frostlang$frostc$Position $tmp861 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp862 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp858, &$s863, $tmp860, $tmp861, $tmp862);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
return $tmp858;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 453
frost$collections$Array* $tmp864 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp864);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$collections$Array* $tmp865 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local0) = $tmp864;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
// line 454
frost$collections$Array* $tmp866 = *(&local0);
org$frostlang$frostc$Type* $tmp867 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp868 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp869 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp868);
org$frostlang$frostc$Position $tmp870 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp871 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp867, &$s872, $tmp869, $tmp870, $tmp871);
frost$collections$Array$add$frost$collections$Array$T($tmp866, ((frost$core$Object*) $tmp867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
// line 455
frost$collections$Array* $tmp873 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp873, ((frost$core$Object*) param0));
// line 456
org$frostlang$frostc$Type* $tmp874 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp875 = frost$core$String$get_asString$R$frost$core$String(&$s876);
frost$core$String* $tmp877 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp875, &$s878);
frost$core$String* $tmp879 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp877, ((frost$core$Object*) param0));
frost$core$String* $tmp880 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp879, &$s881);
frost$core$Int64 $tmp882 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp883 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp882);
org$frostlang$frostc$Position* $tmp884 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp885 = *$tmp884;
frost$collections$Array* $tmp886 = *(&local0);
frost$core$Bit* $tmp887 = &param0->resolved;
frost$core$Bit $tmp888 = *$tmp887;
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp874, $tmp880, $tmp883, $tmp885, ((frost$collections$ListView*) $tmp886), $tmp888);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
frost$collections$Array* $tmp889 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp874;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 461
frost$collections$Array* $tmp890 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp890);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$collections$Array* $tmp891 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
*(&local0) = $tmp890;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
// line 462
frost$collections$Array* $tmp892 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp892, ((frost$core$Object*) param0));
// line 463
org$frostlang$frostc$Type* $tmp893 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp894 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp895 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp894);
org$frostlang$frostc$Position $tmp896 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp897 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp893, &$s898, $tmp895, $tmp896, $tmp897);
frost$collections$Array* $tmp899 = *(&local0);
org$frostlang$frostc$Type* $tmp900 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp893, ((frost$collections$ListView*) $tmp899));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
frost$collections$Array* $tmp901 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp900;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 468
frost$collections$Array* $tmp902 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp902);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
frost$collections$Array* $tmp903 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
*(&local0) = $tmp902;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
// line 469
frost$collections$Array* $tmp904 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp904, ((frost$core$Object*) param0));
// line 470
org$frostlang$frostc$Type* $tmp905 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp906 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp907 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp906);
org$frostlang$frostc$Position $tmp908 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp909 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp905, &$s910, $tmp907, $tmp908, $tmp909);
frost$collections$Array* $tmp911 = *(&local0);
org$frostlang$frostc$Type* $tmp912 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp905, ((frost$collections$ListView*) $tmp911));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
frost$collections$Array* $tmp913 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp912;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ImmutableArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 475
frost$collections$Array* $tmp914 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp914);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$collections$Array* $tmp915 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
*(&local0) = $tmp914;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// line 476
frost$collections$Array* $tmp916 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp916, ((frost$core$Object*) param0));
// line 477
org$frostlang$frostc$Type* $tmp917 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp918 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp919 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp918);
org$frostlang$frostc$Position $tmp920 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp921 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp917, &$s922, $tmp919, $tmp920, $tmp921);
frost$collections$Array* $tmp923 = *(&local0);
org$frostlang$frostc$Type* $tmp924 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp917, ((frost$collections$ListView*) $tmp923));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$collections$Array* $tmp925 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp924;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 482
frost$collections$Array* $tmp926 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp926);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
frost$collections$Array* $tmp927 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
*(&local0) = $tmp926;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
// line 483
frost$collections$Array* $tmp928 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp928, ((frost$core$Object*) param0));
// line 484
org$frostlang$frostc$Type* $tmp929 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp930 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp931 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp930);
org$frostlang$frostc$Position $tmp932 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp933 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp929, &$s934, $tmp931, $tmp932, $tmp933);
frost$collections$Array* $tmp935 = *(&local0);
org$frostlang$frostc$Type* $tmp936 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp929, ((frost$collections$ListView*) $tmp935));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$collections$Array* $tmp937 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp936;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 489
frost$collections$Array* $tmp938 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp938);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
frost$collections$Array* $tmp939 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
*(&local0) = $tmp938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
// line 490
frost$collections$Array* $tmp940 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp940, ((frost$core$Object*) param0));
// line 491
org$frostlang$frostc$Type* $tmp941 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp942 = org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp943 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp941, $tmp942);
bool $tmp944 = $tmp943.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
if ($tmp944) goto block1; else goto block3;
block1:;
// line 492
frost$collections$Array* $tmp945 = *(&local0);
org$frostlang$frostc$Type* $tmp946 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp945, ((frost$core$Object*) $tmp946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
goto block2;
block3:;
// line 494
org$frostlang$frostc$Type* $tmp947 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp948 = org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp949 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp947, $tmp948);
bool $tmp950 = $tmp949.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
if ($tmp950) goto block4; else goto block6;
block4:;
// line 495
frost$collections$Array* $tmp951 = *(&local0);
org$frostlang$frostc$Type* $tmp952 = org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp951, ((frost$core$Object*) $tmp952));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
goto block5;
block6:;
// line 497
org$frostlang$frostc$Type* $tmp953 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp954 = org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp955 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp953, $tmp954);
bool $tmp956 = $tmp955.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
if ($tmp956) goto block7; else goto block9;
block7:;
// line 498
frost$collections$Array* $tmp957 = *(&local0);
org$frostlang$frostc$Type* $tmp958 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp957, ((frost$core$Object*) $tmp958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
goto block8;
block9:;
// line 1
// line 501
frost$collections$Array* $tmp959 = *(&local0);
org$frostlang$frostc$Type* $tmp960 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
frost$collections$Array$add$frost$collections$Array$T($tmp959, ((frost$core$Object*) $tmp960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
// line 503
org$frostlang$frostc$Type* $tmp961 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp962 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp963 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp962);
org$frostlang$frostc$Position $tmp964 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp965 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp961, &$s966, $tmp963, $tmp964, $tmp965);
frost$collections$Array* $tmp967 = *(&local0);
org$frostlang$frostc$Type* $tmp968 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp961, ((frost$collections$ListView*) $tmp967));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
frost$collections$Array* $tmp969 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp968;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$collections$Array* local0 = NULL;
// line 508
frost$collections$Array* $tmp970 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp970);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
frost$collections$Array* $tmp971 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
*(&local0) = $tmp970;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
// line 509
frost$collections$Array* $tmp972 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp972, ((frost$core$Object*) param0));
// line 510
frost$collections$Array* $tmp973 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp973, ((frost$core$Object*) param1));
// line 511
org$frostlang$frostc$Type* $tmp974 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp975 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp976 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp975);
org$frostlang$frostc$Position $tmp977 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp978 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp974, &$s979, $tmp976, $tmp977, $tmp978);
frost$collections$Array* $tmp980 = *(&local0);
org$frostlang$frostc$Type* $tmp981 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp974, ((frost$collections$ListView*) $tmp980));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
frost$collections$Array* $tmp982 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp981;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type() {

// line 516
org$frostlang$frostc$Type* $tmp983 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp984 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp985 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp984);
org$frostlang$frostc$Position $tmp986 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp987 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp983, &$s988, $tmp985, $tmp986, $tmp987);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
return $tmp983;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type() {

// line 521
org$frostlang$frostc$Type* $tmp989 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp990 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp991 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp990);
org$frostlang$frostc$Position $tmp992 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp993 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp989, &$s994, $tmp991, $tmp992, $tmp993);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
return $tmp989;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
// line 525
frost$core$String** $tmp995 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp996 = *$tmp995;
frost$core$Bit $tmp997 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp996, &$s998);
bool $tmp999 = $tmp997.value;
if ($tmp999) goto block1; else goto block2;
block1:;
*(&local3) = $tmp997;
goto block3;
block2:;
frost$core$String** $tmp1000 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1001 = *$tmp1000;
frost$core$Bit $tmp1002 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1001, &$s1003);
*(&local3) = $tmp1002;
goto block3;
block3:;
frost$core$Bit $tmp1004 = *(&local3);
bool $tmp1005 = $tmp1004.value;
if ($tmp1005) goto block4; else goto block5;
block4:;
*(&local2) = $tmp1004;
goto block6;
block5:;
frost$core$String** $tmp1006 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1007 = *$tmp1006;
frost$core$Bit $tmp1008 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1007, &$s1009);
*(&local2) = $tmp1008;
goto block6;
block6:;
frost$core$Bit $tmp1010 = *(&local2);
bool $tmp1011 = $tmp1010.value;
if ($tmp1011) goto block7; else goto block8;
block7:;
*(&local1) = $tmp1010;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1012 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1013 = *$tmp1012;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1014;
$tmp1014 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1014->value = $tmp1013;
frost$core$Int64 $tmp1015 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1016 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1015);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1017;
$tmp1017 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1017->value = $tmp1016;
ITable* $tmp1018 = ((frost$core$Equatable*) $tmp1014)->$class->itable;
while ($tmp1018->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1018 = $tmp1018->next;
}
$fn1020 $tmp1019 = $tmp1018->methods[0];
frost$core$Bit $tmp1021 = $tmp1019(((frost$core$Equatable*) $tmp1014), ((frost$core$Equatable*) $tmp1017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1017)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1014)));
*(&local1) = $tmp1021;
goto block9;
block9:;
frost$core$Bit $tmp1022 = *(&local1);
bool $tmp1023 = $tmp1022.value;
if ($tmp1023) goto block10; else goto block11;
block10:;
*(&local0) = $tmp1022;
goto block12;
block11:;
org$frostlang$frostc$Type$Kind* $tmp1024 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1025 = *$tmp1024;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1026;
$tmp1026 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1026->value = $tmp1025;
frost$core$Int64 $tmp1027 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1028 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1027);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1029;
$tmp1029 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1029->value = $tmp1028;
ITable* $tmp1030 = ((frost$core$Equatable*) $tmp1026)->$class->itable;
while ($tmp1030->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1030 = $tmp1030->next;
}
$fn1032 $tmp1031 = $tmp1030->methods[0];
frost$core$Bit $tmp1033 = $tmp1031(((frost$core$Equatable*) $tmp1026), ((frost$core$Equatable*) $tmp1029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1029)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1026)));
*(&local0) = $tmp1033;
goto block12;
block12:;
frost$core$Bit $tmp1034 = *(&local0);
return $tmp1034;

}
frost$core$Bit org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
// line 531
org$frostlang$frostc$Type$Kind* $tmp1035 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1036 = *$tmp1035;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1037;
$tmp1037 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1037->value = $tmp1036;
frost$core$Int64 $tmp1038 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp1039 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1038);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1040;
$tmp1040 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1040->value = $tmp1039;
ITable* $tmp1041 = ((frost$core$Equatable*) $tmp1037)->$class->itable;
while ($tmp1041->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1041 = $tmp1041->next;
}
$fn1043 $tmp1042 = $tmp1041->methods[0];
frost$core$Bit $tmp1044 = $tmp1042(((frost$core$Equatable*) $tmp1037), ((frost$core$Equatable*) $tmp1040));
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1044;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1046 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1047 = *$tmp1046;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1048;
$tmp1048 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1048->value = $tmp1047;
frost$core$Int64 $tmp1049 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp1050 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1049);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1051;
$tmp1051 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1051->value = $tmp1050;
ITable* $tmp1052 = ((frost$core$Equatable*) $tmp1048)->$class->itable;
while ($tmp1052->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1052 = $tmp1052->next;
}
$fn1054 $tmp1053 = $tmp1052->methods[0];
frost$core$Bit $tmp1055 = $tmp1053(((frost$core$Equatable*) $tmp1048), ((frost$core$Equatable*) $tmp1051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1051)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1048)));
*(&local2) = $tmp1055;
goto block3;
block3:;
frost$core$Bit $tmp1056 = *(&local2);
bool $tmp1057 = $tmp1056.value;
if ($tmp1057) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1056;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1058 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1059 = *$tmp1058;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1060;
$tmp1060 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1060->value = $tmp1059;
frost$core$Int64 $tmp1061 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp1062 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1061);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1063;
$tmp1063 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1063->value = $tmp1062;
ITable* $tmp1064 = ((frost$core$Equatable*) $tmp1060)->$class->itable;
while ($tmp1064->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1064 = $tmp1064->next;
}
$fn1066 $tmp1065 = $tmp1064->methods[0];
frost$core$Bit $tmp1067 = $tmp1065(((frost$core$Equatable*) $tmp1060), ((frost$core$Equatable*) $tmp1063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1063)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1060)));
*(&local1) = $tmp1067;
goto block6;
block6:;
frost$core$Bit $tmp1068 = *(&local1);
bool $tmp1069 = $tmp1068.value;
if ($tmp1069) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1068;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1070 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1071 = *$tmp1070;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1072;
$tmp1072 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1072->value = $tmp1071;
frost$core$Int64 $tmp1073 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1074 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1073);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1075;
$tmp1075 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1075->value = $tmp1074;
ITable* $tmp1076 = ((frost$core$Equatable*) $tmp1072)->$class->itable;
while ($tmp1076->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1076 = $tmp1076->next;
}
$fn1078 $tmp1077 = $tmp1076->methods[0];
frost$core$Bit $tmp1079 = $tmp1077(((frost$core$Equatable*) $tmp1072), ((frost$core$Equatable*) $tmp1075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1075)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1072)));
*(&local0) = $tmp1079;
goto block9;
block9:;
frost$core$Bit $tmp1080 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1040)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1037)));
return $tmp1080;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 536
frost$core$String** $tmp1081 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1082 = *$tmp1081;
frost$core$Bit $tmp1083 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1082, &$s1084);
return $tmp1083;

}
frost$core$Bit org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 540
org$frostlang$frostc$Type$Kind* $tmp1085 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1086 = *$tmp1085;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1087;
$tmp1087 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1087->value = $tmp1086;
frost$core$Int64 $tmp1088 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1089 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1088);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1090;
$tmp1090 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1090->value = $tmp1089;
ITable* $tmp1091 = ((frost$core$Equatable*) $tmp1087)->$class->itable;
while ($tmp1091->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1091 = $tmp1091->next;
}
$fn1093 $tmp1092 = $tmp1091->methods[0];
frost$core$Bit $tmp1094 = $tmp1092(((frost$core$Equatable*) $tmp1087), ((frost$core$Equatable*) $tmp1090));
bool $tmp1095 = $tmp1094.value;
if ($tmp1095) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1094;
goto block3;
block2:;
frost$core$String** $tmp1096 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1097 = *$tmp1096;
frost$core$Bit $tmp1098 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1097, &$s1099);
*(&local0) = $tmp1098;
goto block3;
block3:;
frost$core$Bit $tmp1100 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1090)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1087)));
return $tmp1100;

}
frost$core$Bit org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 544
frost$core$String** $tmp1101 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1102 = *$tmp1101;
frost$core$Bit $tmp1103 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1102, &$s1104);
return $tmp1103;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 548
frost$core$Bit $tmp1105 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1106 = $tmp1105.value;
if ($tmp1106) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1105;
goto block3;
block2:;
frost$core$Bit $tmp1107 = org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(param0);
*(&local0) = $tmp1107;
goto block3;
block3:;
frost$core$Bit $tmp1108 = *(&local0);
return $tmp1108;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 552
org$frostlang$frostc$Type$Kind* $tmp1109 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1110 = *$tmp1109;
frost$core$Int64 $tmp1111 = $tmp1110.$rawValue;
frost$core$Int64 $tmp1112 = (frost$core$Int64) {0};
frost$core$Bit $tmp1113 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1111, $tmp1112);
bool $tmp1114 = $tmp1113.value;
if ($tmp1114) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1115 = (frost$core$Int64) {1};
frost$core$Bit $tmp1116 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1111, $tmp1115);
bool $tmp1117 = $tmp1116.value;
if ($tmp1117) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp1118 = (frost$core$Int64) {10};
frost$core$Bit $tmp1119 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1111, $tmp1118);
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1121 = (frost$core$Int64) {11};
frost$core$Bit $tmp1122 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1111, $tmp1121);
bool $tmp1123 = $tmp1122.value;
if ($tmp1123) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp1124 = (frost$core$Int64) {12};
frost$core$Bit $tmp1125 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1111, $tmp1124);
bool $tmp1126 = $tmp1125.value;
if ($tmp1126) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp1127 = (frost$core$Int64) {15};
frost$core$Bit $tmp1128 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1111, $tmp1127);
bool $tmp1129 = $tmp1128.value;
if ($tmp1129) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp1130 = (frost$core$Int64) {14};
frost$core$Bit $tmp1131 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1111, $tmp1130);
bool $tmp1132 = $tmp1131.value;
if ($tmp1132) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp1133 = (frost$core$Int64) {17};
frost$core$Bit $tmp1134 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1111, $tmp1133);
bool $tmp1135 = $tmp1134.value;
if ($tmp1135) goto block2; else goto block10;
block10:;
frost$core$Int64 $tmp1136 = (frost$core$Int64) {16};
frost$core$Bit $tmp1137 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1111, $tmp1136);
bool $tmp1138 = $tmp1137.value;
if ($tmp1138) goto block2; else goto block11;
block2:;
// line 556
frost$core$Bit $tmp1139 = frost$core$Bit$init$builtin_bit(true);
return $tmp1139;
block11:;
// line 559
frost$core$Bit $tmp1140 = frost$core$Bit$init$builtin_bit(false);
return $tmp1140;
block1:;
goto block12;
block12:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 565
org$frostlang$frostc$Type$Kind* $tmp1141 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1142 = *$tmp1141;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1143;
$tmp1143 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1143->value = $tmp1142;
frost$core$Int64 $tmp1144 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1145 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1144);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1146;
$tmp1146 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1146->value = $tmp1145;
ITable* $tmp1147 = ((frost$core$Equatable*) $tmp1143)->$class->itable;
while ($tmp1147->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1147 = $tmp1147->next;
}
$fn1149 $tmp1148 = $tmp1147->methods[0];
frost$core$Bit $tmp1150 = $tmp1148(((frost$core$Equatable*) $tmp1143), ((frost$core$Equatable*) $tmp1146));
bool $tmp1151 = $tmp1150.value;
if ($tmp1151) goto block1; else goto block2;
block1:;
org$frostlang$frostc$FixedArray** $tmp1152 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1153 = *$tmp1152;
frost$core$Int64 $tmp1154 = (frost$core$Int64) {0};
frost$core$Object* $tmp1155 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1153, $tmp1154);
org$frostlang$frostc$Type* $tmp1156 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1157 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1155), $tmp1156);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
frost$core$Frost$unref$frost$core$Object$Q($tmp1155);
*(&local0) = $tmp1157;
goto block3;
block2:;
*(&local0) = $tmp1150;
goto block3;
block3:;
frost$core$Bit $tmp1158 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1146)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1143)));
return $tmp1158;

}
frost$core$Bit org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 569
org$frostlang$frostc$Type$Kind* $tmp1159 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1160 = *$tmp1159;
frost$core$Int64 $tmp1161 = $tmp1160.$rawValue;
frost$core$Int64 $tmp1162 = (frost$core$Int64) {15};
frost$core$Bit $tmp1163 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1161, $tmp1162);
bool $tmp1164 = $tmp1163.value;
if ($tmp1164) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1165 = (frost$core$Int64) {14};
frost$core$Bit $tmp1166 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1161, $tmp1165);
bool $tmp1167 = $tmp1166.value;
if ($tmp1167) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp1168 = (frost$core$Int64) {17};
frost$core$Bit $tmp1169 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1161, $tmp1168);
bool $tmp1170 = $tmp1169.value;
if ($tmp1170) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1171 = (frost$core$Int64) {16};
frost$core$Bit $tmp1172 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1161, $tmp1171);
bool $tmp1173 = $tmp1172.value;
if ($tmp1173) goto block2; else goto block6;
block2:;
// line 571
frost$core$Bit $tmp1174 = frost$core$Bit$init$builtin_bit(true);
return $tmp1174;
block6:;
// line 574
frost$core$Bit $tmp1175 = frost$core$Bit$init$builtin_bit(false);
return $tmp1175;
block1:;
goto block7;
block7:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 580
frost$core$String** $tmp1176 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1177 = *$tmp1176;
frost$core$Bit $tmp1178 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1177, &$s1179);
return $tmp1178;

}
frost$core$Bit org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 584
frost$core$String** $tmp1180 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1181 = *$tmp1180;
frost$core$Bit $tmp1182 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1181, &$s1183);
return $tmp1182;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 588
frost$core$String** $tmp1184 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1185 = *$tmp1184;
frost$core$Bit $tmp1186 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1185, &$s1187);
return $tmp1186;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 592
org$frostlang$frostc$Type$Kind* $tmp1188 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1189 = *$tmp1188;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1190;
$tmp1190 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1190->value = $tmp1189;
frost$core$Int64 $tmp1191 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1192 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1191);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1193;
$tmp1193 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1193->value = $tmp1192;
ITable* $tmp1194 = ((frost$core$Equatable*) $tmp1190)->$class->itable;
while ($tmp1194->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1194 = $tmp1194->next;
}
$fn1196 $tmp1195 = $tmp1194->methods[0];
frost$core$Bit $tmp1197 = $tmp1195(((frost$core$Equatable*) $tmp1190), ((frost$core$Equatable*) $tmp1193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1193)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1190)));
return $tmp1197;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 596
org$frostlang$frostc$Type$Kind* $tmp1198 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1199 = *$tmp1198;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1200;
$tmp1200 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1200->value = $tmp1199;
frost$core$Int64 $tmp1201 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1202 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1201);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1203;
$tmp1203 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1203->value = $tmp1202;
ITable* $tmp1204 = ((frost$core$Equatable*) $tmp1200)->$class->itable;
while ($tmp1204->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1204 = $tmp1204->next;
}
$fn1206 $tmp1205 = $tmp1204->methods[0];
frost$core$Bit $tmp1207 = $tmp1205(((frost$core$Equatable*) $tmp1200), ((frost$core$Equatable*) $tmp1203));
bool $tmp1208 = $tmp1207.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1203)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1200)));
if ($tmp1208) goto block1; else goto block2;
block1:;
// line 597
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 599
frost$collections$Array* $tmp1209 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1209);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$collections$Array* $tmp1210 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
*(&local0) = $tmp1209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
// line 600
frost$collections$Array* $tmp1211 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1211, ((frost$core$Object*) param0));
// line 601
org$frostlang$frostc$Type* $tmp1212 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String** $tmp1213 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1214 = *$tmp1213;
frost$core$String* $tmp1215 = frost$core$String$get_asString$R$frost$core$String($tmp1214);
frost$core$String* $tmp1216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1215, &$s1217);
frost$core$Int64 $tmp1218 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1219 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1218);
org$frostlang$frostc$Position $tmp1220 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp1221 = *(&local0);
frost$core$Bit $tmp1222 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp1212, $tmp1216, $tmp1219, $tmp1220, ((frost$collections$ListView*) $tmp1221), $tmp1222);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$collections$Array* $tmp1223 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1212;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 605
org$frostlang$frostc$Type$Kind* $tmp1224 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1225 = *$tmp1224;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1226;
$tmp1226 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1226->value = $tmp1225;
frost$core$Int64 $tmp1227 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1228 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1227);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1229;
$tmp1229 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1229->value = $tmp1228;
ITable* $tmp1230 = ((frost$core$Equatable*) $tmp1226)->$class->itable;
while ($tmp1230->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1230 = $tmp1230->next;
}
$fn1232 $tmp1231 = $tmp1230->methods[1];
frost$core$Bit $tmp1233 = $tmp1231(((frost$core$Equatable*) $tmp1226), ((frost$core$Equatable*) $tmp1229));
bool $tmp1234 = $tmp1233.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1229)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1226)));
if ($tmp1234) goto block1; else goto block2;
block1:;
// line 606
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 608
org$frostlang$frostc$FixedArray** $tmp1235 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1236 = *$tmp1235;
frost$core$Int64 $tmp1237 = (frost$core$Int64) {0};
frost$core$Object* $tmp1238 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1236, $tmp1237);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1238)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1238);
return ((org$frostlang$frostc$Type*) $tmp1238);

}
frost$core$Int64 org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind* $tmp1239 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1240 = *$tmp1239;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1241;
$tmp1241 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1241->value = $tmp1240;
frost$core$Int64 $tmp1242 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp1243 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1242);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1244;
$tmp1244 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1244->value = $tmp1243;
ITable* $tmp1245 = ((frost$core$Equatable*) $tmp1241)->$class->itable;
while ($tmp1245->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1245 = $tmp1245->next;
}
$fn1247 $tmp1246 = $tmp1245->methods[0];
frost$core$Bit $tmp1248 = $tmp1246(((frost$core$Equatable*) $tmp1241), ((frost$core$Equatable*) $tmp1244));
bool $tmp1249 = $tmp1248.value;
if ($tmp1249) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1248;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1250 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1251 = *$tmp1250;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1252;
$tmp1252 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1252->value = $tmp1251;
frost$core$Int64 $tmp1253 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1254 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1253);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1255;
$tmp1255 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1255->value = $tmp1254;
ITable* $tmp1256 = ((frost$core$Equatable*) $tmp1252)->$class->itable;
while ($tmp1256->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1256 = $tmp1256->next;
}
$fn1258 $tmp1257 = $tmp1256->methods[0];
frost$core$Bit $tmp1259 = $tmp1257(((frost$core$Equatable*) $tmp1252), ((frost$core$Equatable*) $tmp1255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1255)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1252)));
*(&local2) = $tmp1259;
goto block3;
block3:;
frost$core$Bit $tmp1260 = *(&local2);
bool $tmp1261 = $tmp1260.value;
if ($tmp1261) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1260;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1262 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1263 = *$tmp1262;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1264;
$tmp1264 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1264->value = $tmp1263;
frost$core$Int64 $tmp1265 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1266 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1265);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1267;
$tmp1267 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1267->value = $tmp1266;
ITable* $tmp1268 = ((frost$core$Equatable*) $tmp1264)->$class->itable;
while ($tmp1268->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1268 = $tmp1268->next;
}
$fn1270 $tmp1269 = $tmp1268->methods[0];
frost$core$Bit $tmp1271 = $tmp1269(((frost$core$Equatable*) $tmp1264), ((frost$core$Equatable*) $tmp1267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1267)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1264)));
*(&local1) = $tmp1271;
goto block6;
block6:;
frost$core$Bit $tmp1272 = *(&local1);
bool $tmp1273 = $tmp1272.value;
if ($tmp1273) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1272;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1274 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1275 = *$tmp1274;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1276;
$tmp1276 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1276->value = $tmp1275;
frost$core$Int64 $tmp1277 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1278 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1277);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1279;
$tmp1279 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1279->value = $tmp1278;
ITable* $tmp1280 = ((frost$core$Equatable*) $tmp1276)->$class->itable;
while ($tmp1280->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1280 = $tmp1280->next;
}
$fn1282 $tmp1281 = $tmp1280->methods[0];
frost$core$Bit $tmp1283 = $tmp1281(((frost$core$Equatable*) $tmp1276), ((frost$core$Equatable*) $tmp1279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1279)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1276)));
*(&local0) = $tmp1283;
goto block9;
block9:;
frost$core$Bit $tmp1284 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1244)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1241)));
bool $tmp1285 = $tmp1284.value;
if ($tmp1285) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1286 = (frost$core$Int64) {613};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1287, $tmp1286, &$s1288);
abort(); // unreachable
block10:;
// line 614
org$frostlang$frostc$FixedArray** $tmp1289 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1290 = *$tmp1289;
ITable* $tmp1291 = ((frost$collections$CollectionView*) $tmp1290)->$class->itable;
while ($tmp1291->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1291 = $tmp1291->next;
}
$fn1293 $tmp1292 = $tmp1291->methods[0];
frost$core$Int64 $tmp1294 = $tmp1292(((frost$collections$CollectionView*) $tmp1290));
frost$core$Int64 $tmp1295 = (frost$core$Int64) {1};
int64_t $tmp1296 = $tmp1294.value;
int64_t $tmp1297 = $tmp1295.value;
int64_t $tmp1298 = $tmp1296 - $tmp1297;
frost$core$Int64 $tmp1299 = (frost$core$Int64) {$tmp1298};
return $tmp1299;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
org$frostlang$frostc$Type$Kind* $tmp1300 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1301 = *$tmp1300;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1302;
$tmp1302 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1302->value = $tmp1301;
frost$core$Int64 $tmp1303 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp1304 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1303);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1305;
$tmp1305 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1305->value = $tmp1304;
ITable* $tmp1306 = ((frost$core$Equatable*) $tmp1302)->$class->itable;
while ($tmp1306->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1306 = $tmp1306->next;
}
$fn1308 $tmp1307 = $tmp1306->methods[0];
frost$core$Bit $tmp1309 = $tmp1307(((frost$core$Equatable*) $tmp1302), ((frost$core$Equatable*) $tmp1305));
bool $tmp1310 = $tmp1309.value;
if ($tmp1310) goto block1; else goto block2;
block1:;
*(&local4) = $tmp1309;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1311 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1312 = *$tmp1311;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1313;
$tmp1313 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1313->value = $tmp1312;
frost$core$Int64 $tmp1314 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1315 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1314);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1316;
$tmp1316 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1316->value = $tmp1315;
ITable* $tmp1317 = ((frost$core$Equatable*) $tmp1313)->$class->itable;
while ($tmp1317->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1317 = $tmp1317->next;
}
$fn1319 $tmp1318 = $tmp1317->methods[0];
frost$core$Bit $tmp1320 = $tmp1318(((frost$core$Equatable*) $tmp1313), ((frost$core$Equatable*) $tmp1316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1316)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1313)));
*(&local4) = $tmp1320;
goto block3;
block3:;
frost$core$Bit $tmp1321 = *(&local4);
bool $tmp1322 = $tmp1321.value;
if ($tmp1322) goto block4; else goto block5;
block4:;
*(&local3) = $tmp1321;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1323 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1324 = *$tmp1323;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1325;
$tmp1325 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1325->value = $tmp1324;
frost$core$Int64 $tmp1326 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1327 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1326);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1328;
$tmp1328 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1328->value = $tmp1327;
ITable* $tmp1329 = ((frost$core$Equatable*) $tmp1325)->$class->itable;
while ($tmp1329->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1329 = $tmp1329->next;
}
$fn1331 $tmp1330 = $tmp1329->methods[0];
frost$core$Bit $tmp1332 = $tmp1330(((frost$core$Equatable*) $tmp1325), ((frost$core$Equatable*) $tmp1328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1328)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1325)));
*(&local3) = $tmp1332;
goto block6;
block6:;
frost$core$Bit $tmp1333 = *(&local3);
bool $tmp1334 = $tmp1333.value;
if ($tmp1334) goto block7; else goto block8;
block7:;
*(&local2) = $tmp1333;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1335 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1336 = *$tmp1335;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1337;
$tmp1337 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1337->value = $tmp1336;
frost$core$Int64 $tmp1338 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1339 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1338);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1340;
$tmp1340 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1340->value = $tmp1339;
ITable* $tmp1341 = ((frost$core$Equatable*) $tmp1337)->$class->itable;
while ($tmp1341->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1341 = $tmp1341->next;
}
$fn1343 $tmp1342 = $tmp1341->methods[0];
frost$core$Bit $tmp1344 = $tmp1342(((frost$core$Equatable*) $tmp1337), ((frost$core$Equatable*) $tmp1340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1340)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1337)));
*(&local2) = $tmp1344;
goto block9;
block9:;
frost$core$Bit $tmp1345 = *(&local2);
bool $tmp1346 = $tmp1345.value;
if ($tmp1346) goto block10; else goto block11;
block10:;
frost$core$Int64 $tmp1347 = (frost$core$Int64) {0};
int64_t $tmp1348 = param1.value;
int64_t $tmp1349 = $tmp1347.value;
bool $tmp1350 = $tmp1348 >= $tmp1349;
frost$core$Bit $tmp1351 = (frost$core$Bit) {$tmp1350};
*(&local1) = $tmp1351;
goto block12;
block11:;
*(&local1) = $tmp1345;
goto block12;
block12:;
frost$core$Bit $tmp1352 = *(&local1);
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block13; else goto block14;
block13:;
org$frostlang$frostc$FixedArray** $tmp1354 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1355 = *$tmp1354;
ITable* $tmp1356 = ((frost$collections$CollectionView*) $tmp1355)->$class->itable;
while ($tmp1356->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1356 = $tmp1356->next;
}
$fn1358 $tmp1357 = $tmp1356->methods[0];
frost$core$Int64 $tmp1359 = $tmp1357(((frost$collections$CollectionView*) $tmp1355));
frost$core$Int64 $tmp1360 = (frost$core$Int64) {1};
int64_t $tmp1361 = $tmp1359.value;
int64_t $tmp1362 = $tmp1360.value;
int64_t $tmp1363 = $tmp1361 - $tmp1362;
frost$core$Int64 $tmp1364 = (frost$core$Int64) {$tmp1363};
int64_t $tmp1365 = param1.value;
int64_t $tmp1366 = $tmp1364.value;
bool $tmp1367 = $tmp1365 < $tmp1366;
frost$core$Bit $tmp1368 = (frost$core$Bit) {$tmp1367};
*(&local0) = $tmp1368;
goto block15;
block14:;
*(&local0) = $tmp1352;
goto block15;
block15:;
frost$core$Bit $tmp1369 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1305)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1302)));
bool $tmp1370 = $tmp1369.value;
if ($tmp1370) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp1371 = (frost$core$Int64) {619};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1372, $tmp1371, &$s1373);
abort(); // unreachable
block16:;
// line 620
org$frostlang$frostc$FixedArray** $tmp1374 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1375 = *$tmp1374;
frost$core$Object* $tmp1376 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1375, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1376)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1376);
return ((org$frostlang$frostc$Type*) $tmp1376);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind* $tmp1377 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1378 = *$tmp1377;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1379;
$tmp1379 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1379->value = $tmp1378;
frost$core$Int64 $tmp1380 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp1381 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1380);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1382;
$tmp1382 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1382->value = $tmp1381;
ITable* $tmp1383 = ((frost$core$Equatable*) $tmp1379)->$class->itable;
while ($tmp1383->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1383 = $tmp1383->next;
}
$fn1385 $tmp1384 = $tmp1383->methods[0];
frost$core$Bit $tmp1386 = $tmp1384(((frost$core$Equatable*) $tmp1379), ((frost$core$Equatable*) $tmp1382));
bool $tmp1387 = $tmp1386.value;
if ($tmp1387) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1386;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1388 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1389 = *$tmp1388;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1390;
$tmp1390 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1390->value = $tmp1389;
frost$core$Int64 $tmp1391 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1392 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1391);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1393;
$tmp1393 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1393->value = $tmp1392;
ITable* $tmp1394 = ((frost$core$Equatable*) $tmp1390)->$class->itable;
while ($tmp1394->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1394 = $tmp1394->next;
}
$fn1396 $tmp1395 = $tmp1394->methods[0];
frost$core$Bit $tmp1397 = $tmp1395(((frost$core$Equatable*) $tmp1390), ((frost$core$Equatable*) $tmp1393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1393)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1390)));
*(&local2) = $tmp1397;
goto block3;
block3:;
frost$core$Bit $tmp1398 = *(&local2);
bool $tmp1399 = $tmp1398.value;
if ($tmp1399) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1398;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1400 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1401 = *$tmp1400;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1402;
$tmp1402 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1402->value = $tmp1401;
frost$core$Int64 $tmp1403 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1404 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1403);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1405;
$tmp1405 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1405->value = $tmp1404;
ITable* $tmp1406 = ((frost$core$Equatable*) $tmp1402)->$class->itable;
while ($tmp1406->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1406 = $tmp1406->next;
}
$fn1408 $tmp1407 = $tmp1406->methods[0];
frost$core$Bit $tmp1409 = $tmp1407(((frost$core$Equatable*) $tmp1402), ((frost$core$Equatable*) $tmp1405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1405)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1402)));
*(&local1) = $tmp1409;
goto block6;
block6:;
frost$core$Bit $tmp1410 = *(&local1);
bool $tmp1411 = $tmp1410.value;
if ($tmp1411) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1410;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1412 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1413 = *$tmp1412;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1414;
$tmp1414 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1414->value = $tmp1413;
frost$core$Int64 $tmp1415 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1416 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1415);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1417;
$tmp1417 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1417->value = $tmp1416;
ITable* $tmp1418 = ((frost$core$Equatable*) $tmp1414)->$class->itable;
while ($tmp1418->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1418 = $tmp1418->next;
}
$fn1420 $tmp1419 = $tmp1418->methods[0];
frost$core$Bit $tmp1421 = $tmp1419(((frost$core$Equatable*) $tmp1414), ((frost$core$Equatable*) $tmp1417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1417)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1414)));
*(&local0) = $tmp1421;
goto block9;
block9:;
frost$core$Bit $tmp1422 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1382)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1379)));
bool $tmp1423 = $tmp1422.value;
if ($tmp1423) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1424 = (frost$core$Int64) {625};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1425, $tmp1424, &$s1426);
abort(); // unreachable
block10:;
// line 626
org$frostlang$frostc$FixedArray** $tmp1427 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1428 = *$tmp1427;
org$frostlang$frostc$FixedArray** $tmp1429 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1430 = *$tmp1429;
ITable* $tmp1431 = ((frost$collections$CollectionView*) $tmp1430)->$class->itable;
while ($tmp1431->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1431 = $tmp1431->next;
}
$fn1433 $tmp1432 = $tmp1431->methods[0];
frost$core$Int64 $tmp1434 = $tmp1432(((frost$collections$CollectionView*) $tmp1430));
frost$core$Int64 $tmp1435 = (frost$core$Int64) {1};
int64_t $tmp1436 = $tmp1434.value;
int64_t $tmp1437 = $tmp1435.value;
int64_t $tmp1438 = $tmp1436 - $tmp1437;
frost$core$Int64 $tmp1439 = (frost$core$Int64) {$tmp1438};
frost$core$Object* $tmp1440 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1428, $tmp1439);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1440)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1440);
return ((org$frostlang$frostc$Type*) $tmp1440);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
frost$core$Bit local6;
frost$collections$HashSet* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
org$frostlang$frostc$ClassDecl* local9 = NULL;
// line 633
frost$core$Bit $tmp1441 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param2);
bool $tmp1442 = $tmp1441.value;
if ($tmp1442) goto block1; else goto block2;
block1:;
// line 634
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 636
org$frostlang$frostc$Type* $tmp1443 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1444 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1443);
bool $tmp1445 = $tmp1444.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
if ($tmp1445) goto block3; else goto block4;
block3:;
// line 637
org$frostlang$frostc$Type$Kind* $tmp1446 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1447 = *$tmp1446;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1448;
$tmp1448 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1448->value = $tmp1447;
frost$core$Int64 $tmp1449 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1450 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1449);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1451;
$tmp1451 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1451->value = $tmp1450;
ITable* $tmp1452 = ((frost$core$Equatable*) $tmp1448)->$class->itable;
while ($tmp1452->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1452 = $tmp1452->next;
}
$fn1454 $tmp1453 = $tmp1452->methods[0];
frost$core$Bit $tmp1455 = $tmp1453(((frost$core$Equatable*) $tmp1448), ((frost$core$Equatable*) $tmp1451));
bool $tmp1456 = $tmp1455.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1451)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1448)));
if ($tmp1456) goto block5; else goto block6;
block5:;
// line 638
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block6:;
// line 640
org$frostlang$frostc$Type* $tmp1457 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
return $tmp1457;
block4:;
// line 642
org$frostlang$frostc$Type* $tmp1458 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1459 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param2, $tmp1458);
bool $tmp1460 = $tmp1459.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
if ($tmp1460) goto block7; else goto block8;
block7:;
// line 643
org$frostlang$frostc$Type$Kind* $tmp1461 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1462 = *$tmp1461;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1463;
$tmp1463 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1463->value = $tmp1462;
frost$core$Int64 $tmp1464 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1465 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1464);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1466;
$tmp1466 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1466->value = $tmp1465;
ITable* $tmp1467 = ((frost$core$Equatable*) $tmp1463)->$class->itable;
while ($tmp1467->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1467 = $tmp1467->next;
}
$fn1469 $tmp1468 = $tmp1467->methods[0];
frost$core$Bit $tmp1470 = $tmp1468(((frost$core$Equatable*) $tmp1463), ((frost$core$Equatable*) $tmp1466));
bool $tmp1471 = $tmp1470.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1466)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1463)));
if ($tmp1471) goto block9; else goto block10;
block9:;
// line 644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block10:;
// line 646
org$frostlang$frostc$Type* $tmp1472 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
return $tmp1472;
block8:;
// line 648
org$frostlang$frostc$Type* $tmp1473 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1474 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1473);
bool $tmp1475 = $tmp1474.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
if ($tmp1475) goto block11; else goto block12;
block11:;
// line 649
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block12:;
// line 651
org$frostlang$frostc$Type* $tmp1476 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1477 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param2, $tmp1476);
bool $tmp1478 = $tmp1477.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
if ($tmp1478) goto block13; else goto block14;
block13:;
// line 652
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block14:;
// line 654
org$frostlang$frostc$Type$Kind* $tmp1479 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1480 = *$tmp1479;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1481;
$tmp1481 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1481->value = $tmp1480;
frost$core$Int64 $tmp1482 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1483 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1482);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1484;
$tmp1484 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1484->value = $tmp1483;
ITable* $tmp1485 = ((frost$core$Equatable*) $tmp1481)->$class->itable;
while ($tmp1485->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1485 = $tmp1485->next;
}
$fn1487 $tmp1486 = $tmp1485->methods[0];
frost$core$Bit $tmp1488 = $tmp1486(((frost$core$Equatable*) $tmp1481), ((frost$core$Equatable*) $tmp1484));
bool $tmp1489 = $tmp1488.value;
if ($tmp1489) goto block17; else goto block18;
block17:;
frost$core$Bit $tmp1490 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
*(&local0) = $tmp1490;
goto block19;
block18:;
*(&local0) = $tmp1488;
goto block19;
block19:;
frost$core$Bit $tmp1491 = *(&local0);
bool $tmp1492 = $tmp1491.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1484)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1481)));
if ($tmp1492) goto block15; else goto block16;
block15:;
// line 655
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block16:;
// line 657
frost$core$Bit $tmp1493 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1494 = $tmp1493.value;
if ($tmp1494) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Type$Kind* $tmp1495 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1496 = *$tmp1495;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1497;
$tmp1497 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1497->value = $tmp1496;
frost$core$Int64 $tmp1498 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1499 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1498);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1500;
$tmp1500 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1500->value = $tmp1499;
ITable* $tmp1501 = ((frost$core$Equatable*) $tmp1497)->$class->itable;
while ($tmp1501->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1501 = $tmp1501->next;
}
$fn1503 $tmp1502 = $tmp1501->methods[0];
frost$core$Bit $tmp1504 = $tmp1502(((frost$core$Equatable*) $tmp1497), ((frost$core$Equatable*) $tmp1500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1500)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1497)));
*(&local1) = $tmp1504;
goto block24;
block23:;
*(&local1) = $tmp1493;
goto block24;
block24:;
frost$core$Bit $tmp1505 = *(&local1);
bool $tmp1506 = $tmp1505.value;
if ($tmp1506) goto block20; else goto block21;
block20:;
// line 658
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block21:;
// line 660
frost$core$Bit $tmp1507 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param0);
bool $tmp1508 = $tmp1507.value;
if ($tmp1508) goto block25; else goto block26;
block25:;
// line 661
org$frostlang$frostc$Type$Kind* $tmp1509 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1510 = *$tmp1509;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1511;
$tmp1511 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1511->value = $tmp1510;
frost$core$Int64 $tmp1512 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1513 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1512);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1514;
$tmp1514 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1514->value = $tmp1513;
ITable* $tmp1515 = ((frost$core$Equatable*) $tmp1511)->$class->itable;
while ($tmp1515->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1515 = $tmp1515->next;
}
$fn1517 $tmp1516 = $tmp1515->methods[0];
frost$core$Bit $tmp1518 = $tmp1516(((frost$core$Equatable*) $tmp1511), ((frost$core$Equatable*) $tmp1514));
bool $tmp1519 = $tmp1518.value;
if ($tmp1519) goto block29; else goto block30;
block29:;
*(&local2) = $tmp1518;
goto block31;
block30:;
org$frostlang$frostc$Type$Kind* $tmp1520 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1521 = *$tmp1520;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1522;
$tmp1522 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1522->value = $tmp1521;
frost$core$Int64 $tmp1523 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1524 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1523);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1525;
$tmp1525 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1525->value = $tmp1524;
ITable* $tmp1526 = ((frost$core$Equatable*) $tmp1522)->$class->itable;
while ($tmp1526->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1526 = $tmp1526->next;
}
$fn1528 $tmp1527 = $tmp1526->methods[0];
frost$core$Bit $tmp1529 = $tmp1527(((frost$core$Equatable*) $tmp1522), ((frost$core$Equatable*) $tmp1525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1525)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1522)));
*(&local2) = $tmp1529;
goto block31;
block31:;
frost$core$Bit $tmp1530 = *(&local2);
bool $tmp1531 = $tmp1530.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1514)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1511)));
if ($tmp1531) goto block27; else goto block28;
block27:;
// line 662
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block28:;
// line 664
frost$core$Bit $tmp1532 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1533 = $tmp1532.value;
if ($tmp1533) goto block32; else goto block33;
block32:;
// line 665
frost$core$String** $tmp1534 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1535 = *$tmp1534;
frost$core$Bit $tmp1536 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1535, &$s1537);
bool $tmp1538 = $tmp1536.value;
if ($tmp1538) goto block34; else goto block35;
block34:;
// line 666
org$frostlang$frostc$Type* $tmp1539 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
return $tmp1539;
block35:;
// line 668
org$frostlang$frostc$Type* $tmp1540 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
return $tmp1540;
block33:;
goto block26;
block26:;
// line 671
frost$core$Bit $tmp1541 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param2);
bool $tmp1542 = $tmp1541.value;
if ($tmp1542) goto block36; else goto block37;
block36:;
// line 672
org$frostlang$frostc$Type$Kind* $tmp1543 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1544 = *$tmp1543;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1545;
$tmp1545 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1545->value = $tmp1544;
frost$core$Int64 $tmp1546 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1547 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1546);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1548;
$tmp1548 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1548->value = $tmp1547;
ITable* $tmp1549 = ((frost$core$Equatable*) $tmp1545)->$class->itable;
while ($tmp1549->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1549 = $tmp1549->next;
}
$fn1551 $tmp1550 = $tmp1549->methods[0];
frost$core$Bit $tmp1552 = $tmp1550(((frost$core$Equatable*) $tmp1545), ((frost$core$Equatable*) $tmp1548));
bool $tmp1553 = $tmp1552.value;
if ($tmp1553) goto block40; else goto block41;
block40:;
*(&local3) = $tmp1552;
goto block42;
block41:;
org$frostlang$frostc$Type$Kind* $tmp1554 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1555 = *$tmp1554;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1556;
$tmp1556 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1556->value = $tmp1555;
frost$core$Int64 $tmp1557 = (frost$core$Int64) {18};
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1559)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1556)));
*(&local3) = $tmp1563;
goto block42;
block42:;
frost$core$Bit $tmp1564 = *(&local3);
bool $tmp1565 = $tmp1564.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1548)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1545)));
if ($tmp1565) goto block38; else goto block39;
block38:;
// line 673
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block39:;
// line 675
frost$core$Bit $tmp1566 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1567 = $tmp1566.value;
if ($tmp1567) goto block43; else goto block44;
block43:;
// line 676
frost$core$String** $tmp1568 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1569 = *$tmp1568;
frost$core$Bit $tmp1570 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1569, &$s1571);
bool $tmp1572 = $tmp1570.value;
if ($tmp1572) goto block45; else goto block46;
block45:;
// line 677
org$frostlang$frostc$Type* $tmp1573 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
return $tmp1573;
block46:;
// line 679
org$frostlang$frostc$Type* $tmp1574 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
return $tmp1574;
block44:;
goto block37;
block37:;
// line 682
org$frostlang$frostc$Type$Kind* $tmp1575 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1576 = *$tmp1575;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1577;
$tmp1577 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1577->value = $tmp1576;
frost$core$Int64 $tmp1578 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1579 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1578);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1580;
$tmp1580 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1580->value = $tmp1579;
ITable* $tmp1581 = ((frost$core$Equatable*) $tmp1577)->$class->itable;
while ($tmp1581->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1581 = $tmp1581->next;
}
$fn1583 $tmp1582 = $tmp1581->methods[0];
frost$core$Bit $tmp1584 = $tmp1582(((frost$core$Equatable*) $tmp1577), ((frost$core$Equatable*) $tmp1580));
bool $tmp1585 = $tmp1584.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1580)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1577)));
if ($tmp1585) goto block47; else goto block48;
block47:;
// line 683
org$frostlang$frostc$FixedArray** $tmp1586 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1587 = *$tmp1586;
frost$core$Int64 $tmp1588 = (frost$core$Int64) {0};
frost$core$Object* $tmp1589 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1587, $tmp1588);
org$frostlang$frostc$Type* $tmp1590 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1589), param1, param2);
org$frostlang$frostc$Type* $tmp1591 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1590);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1590));
frost$core$Frost$unref$frost$core$Object$Q($tmp1589);
return $tmp1591;
block48:;
// line 685
org$frostlang$frostc$Type$Kind* $tmp1592 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1593 = *$tmp1592;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1594;
$tmp1594 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1594->value = $tmp1593;
frost$core$Int64 $tmp1595 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1596 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1595);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1597;
$tmp1597 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1597->value = $tmp1596;
ITable* $tmp1598 = ((frost$core$Equatable*) $tmp1594)->$class->itable;
while ($tmp1598->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1598 = $tmp1598->next;
}
$fn1600 $tmp1599 = $tmp1598->methods[0];
frost$core$Bit $tmp1601 = $tmp1599(((frost$core$Equatable*) $tmp1594), ((frost$core$Equatable*) $tmp1597));
bool $tmp1602 = $tmp1601.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1597)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1594)));
if ($tmp1602) goto block49; else goto block50;
block49:;
// line 686
org$frostlang$frostc$FixedArray** $tmp1603 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1604 = *$tmp1603;
frost$core$Int64 $tmp1605 = (frost$core$Int64) {0};
frost$core$Object* $tmp1606 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1604, $tmp1605);
org$frostlang$frostc$Type* $tmp1607 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, param1, ((org$frostlang$frostc$Type*) $tmp1606));
org$frostlang$frostc$Type* $tmp1608 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1607);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
frost$core$Frost$unref$frost$core$Object$Q($tmp1606);
return $tmp1608;
block50:;
// line 688
org$frostlang$frostc$Type* $tmp1609 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param0);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1609));
org$frostlang$frostc$Type* $tmp1610 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1610));
*(&local4) = $tmp1609;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1609));
// line 689
org$frostlang$frostc$Type* $tmp1611 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param2);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
org$frostlang$frostc$Type* $tmp1612 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
*(&local5) = $tmp1611;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
// line 690
org$frostlang$frostc$Type* $tmp1613 = *(&local4);
frost$core$Bit $tmp1614 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1613);
bool $tmp1615 = $tmp1614.value;
if ($tmp1615) goto block53; else goto block54;
block53:;
org$frostlang$frostc$Type* $tmp1616 = *(&local5);
frost$core$Bit $tmp1617 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1616);
*(&local6) = $tmp1617;
goto block55;
block54:;
*(&local6) = $tmp1614;
goto block55;
block55:;
frost$core$Bit $tmp1618 = *(&local6);
bool $tmp1619 = $tmp1618.value;
if ($tmp1619) goto block51; else goto block52;
block51:;
// line 691
frost$collections$HashSet* $tmp1620 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp1620);
*(&local7) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
frost$collections$HashSet* $tmp1621 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
*(&local7) = $tmp1620;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
// line 692
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1622 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1622));
*(&local8) = param0;
// line 693
org$frostlang$frostc$Type* $tmp1623 = *(&local4);
org$frostlang$frostc$ClassDecl* $tmp1624 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1623);
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
org$frostlang$frostc$ClassDecl* $tmp1625 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
*(&local9) = $tmp1624;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
// line 694
goto block56;
block56:;
org$frostlang$frostc$ClassDecl* $tmp1626 = *(&local9);
frost$core$Bit $tmp1627 = frost$core$Bit$init$builtin_bit($tmp1626 != NULL);
bool $tmp1628 = $tmp1627.value;
if ($tmp1628) goto block57; else goto block58;
block57:;
// line 695
frost$collections$HashSet* $tmp1629 = *(&local7);
org$frostlang$frostc$Type* $tmp1630 = *(&local8);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp1629, ((frost$collections$Key*) $tmp1630));
// line 696
org$frostlang$frostc$ClassDecl* $tmp1631 = *(&local9);
org$frostlang$frostc$Type** $tmp1632 = &$tmp1631->rawSuper;
org$frostlang$frostc$Type* $tmp1633 = *$tmp1632;
frost$core$Bit $tmp1634 = frost$core$Bit$init$builtin_bit($tmp1633 != NULL);
bool $tmp1635 = $tmp1634.value;
if ($tmp1635) goto block59; else goto block61;
block59:;
// line 697
org$frostlang$frostc$Type* $tmp1636 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1637 = *(&local9);
org$frostlang$frostc$Type** $tmp1638 = &$tmp1637->rawSuper;
org$frostlang$frostc$Type* $tmp1639 = *$tmp1638;
org$frostlang$frostc$Type* $tmp1640 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1636, $tmp1639);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
org$frostlang$frostc$Type* $tmp1641 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
*(&local8) = $tmp1640;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
// line 698
org$frostlang$frostc$Type* $tmp1642 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1643 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1642);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
org$frostlang$frostc$ClassDecl* $tmp1644 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1644));
*(&local9) = $tmp1643;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
goto block60;
block61:;
// line 1
// line 701
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1645 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block60;
block60:;
goto block56;
block58:;
// line 704
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp1646 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
*(&local8) = param2;
// line 705
org$frostlang$frostc$Type* $tmp1647 = *(&local5);
org$frostlang$frostc$ClassDecl* $tmp1648 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1647);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
org$frostlang$frostc$ClassDecl* $tmp1649 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
*(&local9) = $tmp1648;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
// line 706
goto block62;
block62:;
org$frostlang$frostc$ClassDecl* $tmp1650 = *(&local9);
frost$core$Bit $tmp1651 = frost$core$Bit$init$builtin_bit($tmp1650 != NULL);
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block63; else goto block64;
block63:;
// line 707
frost$collections$HashSet* $tmp1653 = *(&local7);
org$frostlang$frostc$Type* $tmp1654 = *(&local8);
frost$core$Bit $tmp1655 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp1653, ((frost$collections$Key*) $tmp1654));
bool $tmp1656 = $tmp1655.value;
if ($tmp1656) goto block65; else goto block66;
block65:;
// line 708
org$frostlang$frostc$Type* $tmp1657 = *(&local8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
org$frostlang$frostc$ClassDecl* $tmp1658 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1659 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1660 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
*(&local7) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$Type* $tmp1661 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1662 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1657;
block66:;
// line 710
org$frostlang$frostc$ClassDecl* $tmp1663 = *(&local9);
org$frostlang$frostc$Type** $tmp1664 = &$tmp1663->rawSuper;
org$frostlang$frostc$Type* $tmp1665 = *$tmp1664;
frost$core$Bit $tmp1666 = frost$core$Bit$init$builtin_bit($tmp1665 != NULL);
bool $tmp1667 = $tmp1666.value;
if ($tmp1667) goto block67; else goto block69;
block67:;
// line 711
org$frostlang$frostc$Type* $tmp1668 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1669 = *(&local9);
org$frostlang$frostc$Type** $tmp1670 = &$tmp1669->rawSuper;
org$frostlang$frostc$Type* $tmp1671 = *$tmp1670;
org$frostlang$frostc$Type* $tmp1672 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1668, $tmp1671);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
org$frostlang$frostc$Type* $tmp1673 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
*(&local8) = $tmp1672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
// line 712
org$frostlang$frostc$Type* $tmp1674 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1675 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1674);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
org$frostlang$frostc$ClassDecl* $tmp1676 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
*(&local9) = $tmp1675;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
goto block68;
block69:;
// line 1
// line 715
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1677 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block68;
block68:;
goto block62;
block64:;
org$frostlang$frostc$ClassDecl* $tmp1678 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1679 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1680 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
*(&local7) = ((frost$collections$HashSet*) NULL);
goto block52;
block52:;
// line 719
org$frostlang$frostc$Type* $tmp1681 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
org$frostlang$frostc$Type* $tmp1682 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1683 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1681;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

// line 727
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
org$frostlang$frostc$Type$Kind* $tmp1684 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1685 = *$tmp1684;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1686;
$tmp1686 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1686->value = $tmp1685;
frost$core$Int64 $tmp1687 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1688 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1687);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1689;
$tmp1689 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1689->value = $tmp1688;
ITable* $tmp1690 = ((frost$core$Equatable*) $tmp1686)->$class->itable;
while ($tmp1690->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1690 = $tmp1690->next;
}
$fn1692 $tmp1691 = $tmp1690->methods[1];
frost$core$Bit $tmp1693 = $tmp1691(((frost$core$Equatable*) $tmp1686), ((frost$core$Equatable*) $tmp1689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1689)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1686)));
bool $tmp1694 = $tmp1693.value;
if ($tmp1694) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1695 = (frost$core$Int64) {732};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1696, $tmp1695, &$s1697);
abort(); // unreachable
block1:;
// line 733
ITable* $tmp1698 = ((frost$collections$MapView*) param1)->$class->itable;
while ($tmp1698->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1698 = $tmp1698->next;
}
$fn1700 $tmp1699 = $tmp1698->methods[0];
frost$core$Int64 $tmp1701 = $tmp1699(((frost$collections$MapView*) param1));
frost$core$Int64 $tmp1702 = (frost$core$Int64) {0};
frost$core$Bit $tmp1703 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1701, $tmp1702);
bool $tmp1704 = $tmp1703.value;
if ($tmp1704) goto block6; else goto block7;
block6:;
// line 734
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local0) = param0;
goto block3;
block7:;
// line 736
org$frostlang$frostc$Type$Kind* $tmp1705 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1706 = *$tmp1705;
frost$core$Int64 $tmp1707 = $tmp1706.$rawValue;
frost$core$Int64 $tmp1708 = (frost$core$Int64) {11};
frost$core$Bit $tmp1709 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1707, $tmp1708);
bool $tmp1710 = $tmp1709.value;
if ($tmp1710) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1711 = (frost$core$Int64) {12};
frost$core$Bit $tmp1712 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1707, $tmp1711);
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block9; else goto block11;
block9:;
// line 738
frost$core$String** $tmp1714 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1715 = *$tmp1714;
frost$core$Object* $tmp1716 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param1, ((frost$collections$Key*) $tmp1715));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1716)));
org$frostlang$frostc$Type* $tmp1717 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp1716);
frost$core$Frost$unref$frost$core$Object$Q($tmp1716);
// line 739
org$frostlang$frostc$Type* $tmp1718 = *(&local1);
frost$core$Bit $tmp1719 = frost$core$Bit$init$builtin_bit($tmp1718 != NULL);
bool $tmp1720 = $tmp1719.value;
if ($tmp1720) goto block12; else goto block13;
block12:;
// line 740
org$frostlang$frostc$Type* $tmp1721 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
org$frostlang$frostc$Type* $tmp1722 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp1721;
goto block3;
block13:;
// line 742
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1723 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = param0;
goto block3;
block11:;
frost$core$Int64 $tmp1724 = (frost$core$Int64) {10};
frost$core$Bit $tmp1725 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1707, $tmp1724);
bool $tmp1726 = $tmp1725.value;
if ($tmp1726) goto block14; else goto block15;
block14:;
// line 745
org$frostlang$frostc$FixedArray** $tmp1727 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1728 = *$tmp1727;
frost$core$Int64 $tmp1729 = (frost$core$Int64) {0};
frost$core$Object* $tmp1730 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1728, $tmp1729);
org$frostlang$frostc$Type* $tmp1731 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1730), param1);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
org$frostlang$frostc$Type* $tmp1732 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
*(&local2) = $tmp1731;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$Frost$unref$frost$core$Object$Q($tmp1730);
// line 746
frost$collections$Array* $tmp1733 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1733);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
frost$collections$Array* $tmp1734 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
*(&local3) = $tmp1733;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
// line 747
frost$core$Int64 $tmp1735 = (frost$core$Int64) {1};
org$frostlang$frostc$FixedArray** $tmp1736 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1737 = *$tmp1736;
ITable* $tmp1738 = ((frost$collections$CollectionView*) $tmp1737)->$class->itable;
while ($tmp1738->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1738 = $tmp1738->next;
}
$fn1740 $tmp1739 = $tmp1738->methods[0];
frost$core$Int64 $tmp1741 = $tmp1739(((frost$collections$CollectionView*) $tmp1737));
frost$core$Bit $tmp1742 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1743 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1735, $tmp1741, $tmp1742);
frost$core$Int64 $tmp1744 = $tmp1743.min;
*(&local4) = $tmp1744;
frost$core$Int64 $tmp1745 = $tmp1743.max;
frost$core$Bit $tmp1746 = $tmp1743.inclusive;
bool $tmp1747 = $tmp1746.value;
frost$core$Int64 $tmp1748 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1749 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1748);
if ($tmp1747) goto block19; else goto block20;
block19:;
int64_t $tmp1750 = $tmp1744.value;
int64_t $tmp1751 = $tmp1745.value;
bool $tmp1752 = $tmp1750 <= $tmp1751;
frost$core$Bit $tmp1753 = (frost$core$Bit) {$tmp1752};
bool $tmp1754 = $tmp1753.value;
if ($tmp1754) goto block16; else goto block17;
block20:;
int64_t $tmp1755 = $tmp1744.value;
int64_t $tmp1756 = $tmp1745.value;
bool $tmp1757 = $tmp1755 < $tmp1756;
frost$core$Bit $tmp1758 = (frost$core$Bit) {$tmp1757};
bool $tmp1759 = $tmp1758.value;
if ($tmp1759) goto block16; else goto block17;
block16:;
// line 748
frost$collections$Array* $tmp1760 = *(&local3);
org$frostlang$frostc$FixedArray** $tmp1761 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1762 = *$tmp1761;
frost$core$Int64 $tmp1763 = *(&local4);
frost$core$Object* $tmp1764 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1762, $tmp1763);
org$frostlang$frostc$Type* $tmp1765 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1764), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1760, ((frost$core$Object*) $tmp1765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
frost$core$Frost$unref$frost$core$Object$Q($tmp1764);
goto block18;
block18:;
frost$core$Int64 $tmp1766 = *(&local4);
int64_t $tmp1767 = $tmp1745.value;
int64_t $tmp1768 = $tmp1766.value;
int64_t $tmp1769 = $tmp1767 - $tmp1768;
frost$core$Int64 $tmp1770 = (frost$core$Int64) {$tmp1769};
frost$core$UInt64 $tmp1771 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1770);
if ($tmp1747) goto block22; else goto block23;
block22:;
uint64_t $tmp1772 = $tmp1771.value;
uint64_t $tmp1773 = $tmp1749.value;
bool $tmp1774 = $tmp1772 >= $tmp1773;
frost$core$Bit $tmp1775 = (frost$core$Bit) {$tmp1774};
bool $tmp1776 = $tmp1775.value;
if ($tmp1776) goto block21; else goto block17;
block23:;
uint64_t $tmp1777 = $tmp1771.value;
uint64_t $tmp1778 = $tmp1749.value;
bool $tmp1779 = $tmp1777 > $tmp1778;
frost$core$Bit $tmp1780 = (frost$core$Bit) {$tmp1779};
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block21; else goto block17;
block21:;
int64_t $tmp1782 = $tmp1766.value;
int64_t $tmp1783 = $tmp1748.value;
int64_t $tmp1784 = $tmp1782 + $tmp1783;
frost$core$Int64 $tmp1785 = (frost$core$Int64) {$tmp1784};
*(&local4) = $tmp1785;
goto block16;
block17:;
// line 750
org$frostlang$frostc$Type* $tmp1786 = *(&local2);
frost$collections$Array* $tmp1787 = *(&local3);
org$frostlang$frostc$Type* $tmp1788 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1786, ((frost$collections$ListView*) $tmp1787));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
frost$collections$Array* $tmp1789 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1790 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp1788;
goto block3;
block15:;
frost$core$Int64 $tmp1791 = (frost$core$Int64) {1};
frost$core$Bit $tmp1792 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1707, $tmp1791);
bool $tmp1793 = $tmp1792.value;
if ($tmp1793) goto block24; else goto block25;
block24:;
// line 753
org$frostlang$frostc$FixedArray** $tmp1794 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1795 = *$tmp1794;
frost$core$Int64 $tmp1796 = (frost$core$Int64) {0};
frost$core$Object* $tmp1797 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1795, $tmp1796);
org$frostlang$frostc$Type* $tmp1798 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1797), param1);
org$frostlang$frostc$Type* $tmp1799 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1798);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
frost$core$Frost$unref$frost$core$Object$Q($tmp1797);
*(&local0) = $tmp1799;
goto block3;
block25:;
frost$core$Int64 $tmp1800 = (frost$core$Int64) {15};
frost$core$Bit $tmp1801 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1707, $tmp1800);
bool $tmp1802 = $tmp1801.value;
if ($tmp1802) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp1803 = (frost$core$Int64) {14};
frost$core$Bit $tmp1804 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1707, $tmp1803);
bool $tmp1805 = $tmp1804.value;
if ($tmp1805) goto block26; else goto block28;
block28:;
frost$core$Int64 $tmp1806 = (frost$core$Int64) {17};
frost$core$Bit $tmp1807 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1707, $tmp1806);
bool $tmp1808 = $tmp1807.value;
if ($tmp1808) goto block26; else goto block29;
block29:;
frost$core$Int64 $tmp1809 = (frost$core$Int64) {16};
frost$core$Bit $tmp1810 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1707, $tmp1809);
bool $tmp1811 = $tmp1810.value;
if ($tmp1811) goto block26; else goto block30;
block26:;
// line 756
frost$collections$Array* $tmp1812 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1812);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
frost$collections$Array* $tmp1813 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
*(&local5) = $tmp1812;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
// line 757
org$frostlang$frostc$FixedArray** $tmp1814 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1815 = *$tmp1814;
ITable* $tmp1816 = ((frost$collections$CollectionView*) $tmp1815)->$class->itable;
while ($tmp1816->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1816 = $tmp1816->next;
}
$fn1818 $tmp1817 = $tmp1816->methods[0];
frost$core$Int64 $tmp1819 = $tmp1817(((frost$collections$CollectionView*) $tmp1815));
frost$core$Int64 $tmp1820 = (frost$core$Int64) {1};
int64_t $tmp1821 = $tmp1819.value;
int64_t $tmp1822 = $tmp1820.value;
bool $tmp1823 = $tmp1821 >= $tmp1822;
frost$core$Bit $tmp1824 = (frost$core$Bit) {$tmp1823};
bool $tmp1825 = $tmp1824.value;
if ($tmp1825) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp1826 = (frost$core$Int64) {757};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1827, $tmp1826);
abort(); // unreachable
block31:;
// line 758
frost$core$Int64 $tmp1828 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1829 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1830 = *$tmp1829;
ITable* $tmp1831 = ((frost$collections$CollectionView*) $tmp1830)->$class->itable;
while ($tmp1831->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1831 = $tmp1831->next;
}
$fn1833 $tmp1832 = $tmp1831->methods[0];
frost$core$Int64 $tmp1834 = $tmp1832(((frost$collections$CollectionView*) $tmp1830));
frost$core$Int64 $tmp1835 = (frost$core$Int64) {1};
int64_t $tmp1836 = $tmp1834.value;
int64_t $tmp1837 = $tmp1835.value;
int64_t $tmp1838 = $tmp1836 - $tmp1837;
frost$core$Int64 $tmp1839 = (frost$core$Int64) {$tmp1838};
frost$core$Bit $tmp1840 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1841 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1828, $tmp1839, $tmp1840);
frost$core$Int64 $tmp1842 = $tmp1841.min;
*(&local6) = $tmp1842;
frost$core$Int64 $tmp1843 = $tmp1841.max;
frost$core$Bit $tmp1844 = $tmp1841.inclusive;
bool $tmp1845 = $tmp1844.value;
frost$core$Int64 $tmp1846 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1847 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1846);
if ($tmp1845) goto block36; else goto block37;
block36:;
int64_t $tmp1848 = $tmp1842.value;
int64_t $tmp1849 = $tmp1843.value;
bool $tmp1850 = $tmp1848 <= $tmp1849;
frost$core$Bit $tmp1851 = (frost$core$Bit) {$tmp1850};
bool $tmp1852 = $tmp1851.value;
if ($tmp1852) goto block33; else goto block34;
block37:;
int64_t $tmp1853 = $tmp1842.value;
int64_t $tmp1854 = $tmp1843.value;
bool $tmp1855 = $tmp1853 < $tmp1854;
frost$core$Bit $tmp1856 = (frost$core$Bit) {$tmp1855};
bool $tmp1857 = $tmp1856.value;
if ($tmp1857) goto block33; else goto block34;
block33:;
// line 759
frost$collections$Array* $tmp1858 = *(&local5);
org$frostlang$frostc$FixedArray** $tmp1859 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1860 = *$tmp1859;
frost$core$Int64 $tmp1861 = *(&local6);
frost$core$Object* $tmp1862 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1860, $tmp1861);
org$frostlang$frostc$Type* $tmp1863 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1862), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1858, ((frost$core$Object*) $tmp1863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
frost$core$Frost$unref$frost$core$Object$Q($tmp1862);
goto block35;
block35:;
frost$core$Int64 $tmp1864 = *(&local6);
int64_t $tmp1865 = $tmp1843.value;
int64_t $tmp1866 = $tmp1864.value;
int64_t $tmp1867 = $tmp1865 - $tmp1866;
frost$core$Int64 $tmp1868 = (frost$core$Int64) {$tmp1867};
frost$core$UInt64 $tmp1869 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1868);
if ($tmp1845) goto block39; else goto block40;
block39:;
uint64_t $tmp1870 = $tmp1869.value;
uint64_t $tmp1871 = $tmp1847.value;
bool $tmp1872 = $tmp1870 >= $tmp1871;
frost$core$Bit $tmp1873 = (frost$core$Bit) {$tmp1872};
bool $tmp1874 = $tmp1873.value;
if ($tmp1874) goto block38; else goto block34;
block40:;
uint64_t $tmp1875 = $tmp1869.value;
uint64_t $tmp1876 = $tmp1847.value;
bool $tmp1877 = $tmp1875 > $tmp1876;
frost$core$Bit $tmp1878 = (frost$core$Bit) {$tmp1877};
bool $tmp1879 = $tmp1878.value;
if ($tmp1879) goto block38; else goto block34;
block38:;
int64_t $tmp1880 = $tmp1864.value;
int64_t $tmp1881 = $tmp1846.value;
int64_t $tmp1882 = $tmp1880 + $tmp1881;
frost$core$Int64 $tmp1883 = (frost$core$Int64) {$tmp1882};
*(&local6) = $tmp1883;
goto block33;
block34:;
// line 761
org$frostlang$frostc$Position* $tmp1884 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp1885 = *$tmp1884;
org$frostlang$frostc$Type$Kind* $tmp1886 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1887 = *$tmp1886;
frost$collections$Array* $tmp1888 = *(&local5);
org$frostlang$frostc$FixedArray** $tmp1889 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1890 = *$tmp1889;
org$frostlang$frostc$FixedArray** $tmp1891 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1892 = *$tmp1891;
ITable* $tmp1893 = ((frost$collections$CollectionView*) $tmp1892)->$class->itable;
while ($tmp1893->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1893 = $tmp1893->next;
}
$fn1895 $tmp1894 = $tmp1893->methods[0];
frost$core$Int64 $tmp1896 = $tmp1894(((frost$collections$CollectionView*) $tmp1892));
frost$core$Int64 $tmp1897 = (frost$core$Int64) {1};
int64_t $tmp1898 = $tmp1896.value;
int64_t $tmp1899 = $tmp1897.value;
int64_t $tmp1900 = $tmp1898 - $tmp1899;
frost$core$Int64 $tmp1901 = (frost$core$Int64) {$tmp1900};
frost$core$Object* $tmp1902 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1890, $tmp1901);
org$frostlang$frostc$Type* $tmp1903 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1902), param1);
frost$core$Int64* $tmp1904 = &param0->priority;
frost$core$Int64 $tmp1905 = *$tmp1904;
org$frostlang$frostc$Type* $tmp1906 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1885, $tmp1887, ((frost$collections$ListView*) $tmp1888), $tmp1903, $tmp1905);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
frost$core$Frost$unref$frost$core$Object$Q($tmp1902);
frost$collections$Array* $tmp1907 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
*(&local5) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp1906;
goto block3;
block30:;
// line 765
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local0) = param0;
goto block3;
block8:;
goto block41;
block41:;
block3:;
org$frostlang$frostc$Type* $tmp1908 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp1909 = &$tmp1908->typeKind;
org$frostlang$frostc$Type$Kind $tmp1910 = *$tmp1909;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1911;
$tmp1911 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1911->value = $tmp1910;
frost$core$Int64 $tmp1912 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1913 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1912);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1914;
$tmp1914 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1914->value = $tmp1913;
ITable* $tmp1915 = ((frost$core$Equatable*) $tmp1911)->$class->itable;
while ($tmp1915->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1915 = $tmp1915->next;
}
$fn1917 $tmp1916 = $tmp1915->methods[1];
frost$core$Bit $tmp1918 = $tmp1916(((frost$core$Equatable*) $tmp1911), ((frost$core$Equatable*) $tmp1914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1914)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1911)));
bool $tmp1919 = $tmp1918.value;
if ($tmp1919) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp1920 = *(&local0);
return $tmp1920;
block5:;
frost$core$Int64 $tmp1921 = (frost$core$Int64) {732};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1922, $tmp1921, &$s1923);
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frostc$Type$get_hash$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

// line 772
frost$core$String** $tmp1924 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1925 = *$tmp1924;
ITable* $tmp1926 = ((frost$collections$Key*) $tmp1925)->$class->itable;
while ($tmp1926->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp1926 = $tmp1926->next;
}
$fn1928 $tmp1927 = $tmp1926->methods[0];
frost$core$Int64 $tmp1929 = $tmp1927(((frost$collections$Key*) $tmp1925));
return $tmp1929;

}
frost$core$String* org$frostlang$frostc$Type$get_asString$R$frost$core$String(org$frostlang$frostc$Type* param0) {

// line 777
frost$core$String** $tmp1930 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1931 = *$tmp1930;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
return $tmp1931;

}
void org$frostlang$frostc$Type$cleanup(org$frostlang$frostc$Type* param0) {

// line 4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$FixedArray** $tmp1932 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1933 = *$tmp1932;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
frost$core$Weak** $tmp1934 = &param0->genericClassParameter;
frost$core$Weak* $tmp1935 = *$tmp1934;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
frost$core$Weak** $tmp1936 = &param0->genericMethodParameter;
frost$core$Weak* $tmp1937 = *$tmp1936;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
org$frostlang$frostc$MethodRef** $tmp1938 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp1939 = *$tmp1938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
return;

}

