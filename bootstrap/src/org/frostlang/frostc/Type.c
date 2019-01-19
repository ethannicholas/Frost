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
#include "frost/core/MutableString.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/collections/Array.h"
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
typedef frost$collections$Iterator* (*$fn295)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn299)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn304)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn453)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn457)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn462)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn511)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn515)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn520)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn570)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn595)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn606)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn618)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn645)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1083)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1095)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1106)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1117)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1129)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1141)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1156)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1217)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1274)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1284)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1310)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1330)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1341)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1353)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1365)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1381)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1396)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1407)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1419)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1431)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1451)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1483)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1494)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1506)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1518)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1541)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1562)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1577)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1589)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1605)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1619)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1630)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1653)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1664)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1685)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1707)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1834)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1842)(frost$collections$MapView*);
typedef frost$core$Int64 (*$fn1897)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1990)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2010)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2087)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2109)(frost$collections$Key*);

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
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s506 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static frost$core$String $s556 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static frost$core$String $s565 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s624 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s659 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, 1146821029976304283, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 5148459585349422950, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 1492063599391574064, NULL };
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -3824106974697578343, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 16, -3824106976449029430, NULL };
static frost$core$String $s713 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5545501573009681362, NULL };
static frost$core$String $s718 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static frost$core$String $s723 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static frost$core$String $s728 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static frost$core$String $s748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static frost$core$String $s753 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static frost$core$String $s758 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static frost$core$String $s763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static frost$core$String $s769 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s775 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s781 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s793 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s817 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, 1146821061809580773, NULL };
static frost$core$String $s823 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, 1146821061809581078, NULL };
static frost$core$String $s829 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3824106976667626414, NULL };
static frost$core$String $s835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, 1146820904470315469, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, 1146820904470315667, NULL };
static frost$core$String $s847 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s871 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s883 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s902 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s908 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 4906885815162678826, NULL };
static frost$core$String $s914 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s920 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, 1146821009278619293, NULL };
static frost$core$String $s926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -7013691227705711665, NULL };
static frost$core$String $s935 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s939 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s941 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s944 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s961 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s973 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 3644790808526678741, NULL };
static frost$core$String $s997 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -3824106975113800959, NULL };
static frost$core$String $s1029 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s1042 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s1051 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static frost$core$String $s1057 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static frost$core$String $s1061 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1066 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -3508042023517899272, NULL };
static frost$core$String $s1072 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, -3508042023536129774, NULL };
static frost$core$String $s1207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x69\x73\x43\x6c\x61\x73\x73\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 88, -6198224920300563291, NULL };
static frost$core$String $s1225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x69\x73\x4d\x65\x74\x68\x6f\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 89, 55190418378938616, NULL };
static frost$core$String $s1257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, 1146821061406687137, NULL };
static frost$core$String $s1265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -4916982935192335398, NULL };
static frost$core$String $s1295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 97, -2976789655376824909, NULL };
static frost$core$String $s1377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s1447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s1465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 119, 5693748891149284325, NULL };
static frost$core$String $s1472 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1523 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1524 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1530 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1537 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1538 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s1639 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1673 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1693 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1694 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1715 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1716 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s1758 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1759 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s1765 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1794 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1795 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s1805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s1812 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1813 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1838 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1839 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 168, 1028753922056655266, NULL };
static frost$core$String $s1867 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1868 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1879 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1880 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1893 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s1923 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1924 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1961 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1986 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1987 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s1999 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2006 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2007 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s2041 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2042 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s2076 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2077 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s2083 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2084 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s2103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 168, 5014262021098371418, NULL };

void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3) {

// line 78
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
// line 38
frost$core$Weak* $tmp3 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp3, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$Weak** $tmp4 = &param0->genericClassParameter;
frost$core$Weak* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$Weak** $tmp6 = &param0->genericClassParameter;
*$tmp6 = $tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
// unreffing REF($1:frost.core.Weak<org.frostlang.frostc.ClassDecl.GenericParameter?>)
// line 41
frost$core$Weak* $tmp7 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp7, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$Weak** $tmp8 = &param0->genericMethodParameter;
frost$core$Weak* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Weak** $tmp10 = &param0->genericMethodParameter;
*$tmp10 = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// unreffing REF($17:frost.core.Weak<org.frostlang.frostc.MethodDecl.GenericParameter?>)
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
if ($tmp19) goto block1; else goto block2;
block1:;
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp23)));
// unreffing REF($45:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp20)));
// unreffing REF($41:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
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
frost$core$Int64 $tmp31 = (frost$core$Int64) {16};
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
// unreffing REF($65:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp30)));
// unreffing REF($61:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
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
frost$core$Int64 $tmp41 = (frost$core$Int64) {15};
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
// unreffing REF($85:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp40)));
// unreffing REF($81:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
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
frost$core$Int64 $tmp51 = (frost$core$Int64) {18};
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
// unreffing REF($105:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp50)));
// unreffing REF($101:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
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
frost$core$Int64 $tmp61 = (frost$core$Int64) {17};
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
// unreffing REF($125:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp60)));
// unreffing REF($121:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local0) = $tmp67;
goto block15;
block14:;
*(&local0) = $tmp58;
goto block15;
block15:;
frost$core$Bit $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp14)));
// unreffing REF($36:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp11)));
// unreffing REF($32:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp70 = (frost$core$Int64) {84};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block16:;
// line 85
org$frostlang$frostc$Type$Kind* $tmp73 = &param0->typeKind;
*$tmp73 = param2;
// line 86
org$frostlang$frostc$Position* $tmp74 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp74 = param3;
// line 87
frost$core$Bit* $tmp75 = &param0->resolved;
*$tmp75 = param4;
// line 88
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp76 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp77 = *$tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
org$frostlang$frostc$FixedArray** $tmp78 = &param0->subtypes;
*$tmp78 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 89
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
// line 38
frost$core$Weak* $tmp81 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp81, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Weak** $tmp82 = &param0->genericClassParameter;
frost$core$Weak* $tmp83 = *$tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Weak** $tmp84 = &param0->genericClassParameter;
*$tmp84 = $tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing REF($1:frost.core.Weak<org.frostlang.frostc.ClassDecl.GenericParameter?>)
// line 41
frost$core$Weak* $tmp85 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp85, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Weak** $tmp86 = &param0->genericMethodParameter;
frost$core$Weak* $tmp87 = *$tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Weak** $tmp88 = &param0->genericMethodParameter;
*$tmp88 = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing REF($17:frost.core.Weak<org.frostlang.frostc.MethodDecl.GenericParameter?>)
org$frostlang$frostc$Type$Kind$wrapper* $tmp89;
$tmp89 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp89->value = param2;
frost$core$Int64 $tmp90 = (frost$core$Int64) {12};
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
frost$core$Int64 $tmp99 = (frost$core$Int64) {13};
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
// unreffing REF($45:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp98)));
// unreffing REF($41:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
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
frost$core$Int64 $tmp109 = (frost$core$Int64) {16};
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
// unreffing REF($65:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp108)));
// unreffing REF($61:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
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
frost$core$Int64 $tmp119 = (frost$core$Int64) {15};
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
// unreffing REF($85:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp118)));
// unreffing REF($81:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
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
frost$core$Int64 $tmp129 = (frost$core$Int64) {18};
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
// unreffing REF($105:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp128)));
// unreffing REF($101:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
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
frost$core$Int64 $tmp139 = (frost$core$Int64) {17};
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
// unreffing REF($125:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp138)));
// unreffing REF($121:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local0) = $tmp145;
goto block15;
block14:;
*(&local0) = $tmp136;
goto block15;
block15:;
frost$core$Bit $tmp146 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp92)));
// unreffing REF($36:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp89)));
// unreffing REF($32:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp148 = (frost$core$Int64) {95};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s149, $tmp148, &$s150);
abort(); // unreachable
block16:;
// line 96
frost$core$Bit $tmp151 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s152);
frost$core$Bit $tmp153 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp151);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp155 = (frost$core$Int64) {96};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s156, $tmp155);
abort(); // unreachable
block18:;
// line 97
org$frostlang$frostc$Type$Kind* $tmp157 = &param0->typeKind;
*$tmp157 = param2;
// line 98
org$frostlang$frostc$Position $tmp158 = org$frostlang$frostc$Position$init$frost$core$Int64$frost$core$Int64(param3, param3);
org$frostlang$frostc$Position* $tmp159 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp159 = $tmp158;
// line 99
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp161 = &param0->resolved;
*$tmp161 = $tmp160;
// line 100
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp162 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp163 = *$tmp162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
org$frostlang$frostc$FixedArray** $tmp164 = &param0->subtypes;
*$tmp164 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 101
frost$core$Int64 $tmp165 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp166 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp165);
org$frostlang$frostc$Position* $tmp167 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp168 = *$tmp167;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp166, $tmp168, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5) {

// line 105
frost$core$Int64 $tmp169 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64(param0, param1, param2, param3, param4, param5, $tmp169);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5, frost$core$Int64 param6) {

frost$core$Bit local0;
// line 38
frost$core$Weak* $tmp170 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp170, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$Weak** $tmp171 = &param0->genericClassParameter;
frost$core$Weak* $tmp172 = *$tmp171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Weak** $tmp173 = &param0->genericClassParameter;
*$tmp173 = $tmp170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
// unreffing REF($1:frost.core.Weak<org.frostlang.frostc.ClassDecl.GenericParameter?>)
// line 41
frost$core$Weak* $tmp174 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp174, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Weak** $tmp175 = &param0->genericMethodParameter;
frost$core$Weak* $tmp176 = *$tmp175;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Weak** $tmp177 = &param0->genericMethodParameter;
*$tmp177 = $tmp174;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
// unreffing REF($17:frost.core.Weak<org.frostlang.frostc.MethodDecl.GenericParameter?>)
org$frostlang$frostc$Type$Kind$wrapper* $tmp178;
$tmp178 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp178->value = param2;
frost$core$Int64 $tmp179 = (frost$core$Int64) {12};
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
frost$core$Int64 $tmp188 = (frost$core$Int64) {13};
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
// unreffing REF($45:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp187)));
// unreffing REF($41:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local0) = $tmp194;
goto block3;
block2:;
*(&local0) = $tmp185;
goto block3;
block3:;
frost$core$Bit $tmp195 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp181)));
// unreffing REF($36:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp178)));
// unreffing REF($32:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp197 = (frost$core$Int64) {109};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s198, $tmp197, &$s199);
abort(); // unreachable
block4:;
// line 111
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
frost$core$Int64 $tmp212 = (frost$core$Int64) {111};
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
// unreffing REF($94:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// unreffing REF($93:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing REF($92:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp220)));
// unreffing REF($89:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp217)));
// unreffing REF($85:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// unreffing REF($84:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
// unreffing REF($83:frost.core.String)
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp203)));
// unreffing REF($75:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp200)));
// unreffing REF($71:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
// line 113
org$frostlang$frostc$Type$Kind$wrapper* $tmp230;
$tmp230 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp230->value = param2;
frost$core$Int64 $tmp231 = (frost$core$Int64) {11};
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
frost$core$Int64 $tmp242 = (frost$core$Int64) {113};
frost$core$String* $tmp243 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s244, param1);
frost$core$String* $tmp245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp243, &$s246);
org$frostlang$frostc$Type$Kind$wrapper* $tmp247;
$tmp247 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp247->value = param2;
frost$core$Int64 $tmp248 = (frost$core$Int64) {11};
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
// unreffing REF($148:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing REF($147:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// unreffing REF($146:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp250)));
// unreffing REF($143:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp247)));
// unreffing REF($139:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing REF($138:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing REF($137:frost.core.String)
abort(); // unreachable
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp233)));
// unreffing REF($129:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp230)));
// unreffing REF($125:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
// line 115
org$frostlang$frostc$Type$Kind* $tmp260 = &param0->typeKind;
*$tmp260 = param2;
// line 116
org$frostlang$frostc$Position* $tmp261 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp261 = param3;
// line 117
frost$core$Bit* $tmp262 = &param0->resolved;
*$tmp262 = param5;
// line 118
frost$core$Int64* $tmp263 = &param0->priority;
*$tmp263 = param6;
// line 119
org$frostlang$frostc$FixedArray* $tmp264 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp264, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
org$frostlang$frostc$FixedArray** $tmp265 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp266 = *$tmp265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
org$frostlang$frostc$FixedArray** $tmp267 = &param0->subtypes;
*$tmp267 = $tmp264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// unreffing REF($192:org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type>)
// line 120
frost$core$Int64 $tmp268 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp269 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp268);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp269, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$Type* param0, frost$collections$ListView* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$Bit local3;
// line 38
frost$core$Weak* $tmp270 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp270, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Weak** $tmp271 = &param0->genericClassParameter;
frost$core$Weak* $tmp272 = *$tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Weak** $tmp273 = &param0->genericClassParameter;
*$tmp273 = $tmp270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing REF($1:frost.core.Weak<org.frostlang.frostc.ClassDecl.GenericParameter?>)
// line 41
frost$core$Weak* $tmp274 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp274, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
frost$core$Weak** $tmp275 = &param0->genericMethodParameter;
frost$core$Weak* $tmp276 = *$tmp275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
frost$core$Weak** $tmp277 = &param0->genericMethodParameter;
*$tmp277 = $tmp274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// unreffing REF($17:frost.core.Weak<org.frostlang.frostc.MethodDecl.GenericParameter?>)
// line 124
frost$core$Int64 $tmp278 = (frost$core$Int64) {7};
org$frostlang$frostc$Type$Kind $tmp279 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp278);
org$frostlang$frostc$Type$Kind* $tmp280 = &param0->typeKind;
*$tmp280 = $tmp279;
// line 125
org$frostlang$frostc$FixedArray* $tmp281 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp281, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
org$frostlang$frostc$FixedArray** $tmp282 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp283 = *$tmp282;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
org$frostlang$frostc$FixedArray** $tmp284 = &param0->subtypes;
*$tmp284 = $tmp281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// unreffing REF($38:org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type>)
// line 126
frost$core$MutableString* $tmp285 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp285, &$s286);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
frost$core$MutableString* $tmp287 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local0) = $tmp285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing REF($55:frost.core.MutableString)
// line 127
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s288));
frost$core$String* $tmp289 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
*(&local1) = &$s290;
// line 128
frost$core$Bit $tmp291 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp292 = &param0->resolved;
*$tmp292 = $tmp291;
// line 129
ITable* $tmp293 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp293->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp293 = $tmp293->next;
}
$fn295 $tmp294 = $tmp293->methods[0];
frost$collections$Iterator* $tmp296 = $tmp294(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp297 = $tmp296->$class->itable;
while ($tmp297->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp297 = $tmp297->next;
}
$fn299 $tmp298 = $tmp297->methods[0];
frost$core$Bit $tmp300 = $tmp298($tmp296);
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp302 = $tmp296->$class->itable;
while ($tmp302->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp302 = $tmp302->next;
}
$fn304 $tmp303 = $tmp302->methods[1];
frost$core$Object* $tmp305 = $tmp303($tmp296);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp305)));
org$frostlang$frostc$Type* $tmp306 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp305);
// line 130
frost$core$MutableString* $tmp307 = *(&local0);
frost$core$String* $tmp308 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp307, $tmp308);
// line 131
frost$core$MutableString* $tmp309 = *(&local0);
org$frostlang$frostc$Type* $tmp310 = *(&local2);
frost$core$MutableString$append$frost$core$Object($tmp309, ((frost$core$Object*) $tmp310));
// line 132
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s311));
frost$core$String* $tmp312 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
*(&local1) = &$s313;
// line 133
frost$core$Bit* $tmp314 = &param0->resolved;
frost$core$Bit $tmp315 = *$tmp314;
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp317 = *(&local2);
frost$core$Bit* $tmp318 = &$tmp317->resolved;
frost$core$Bit $tmp319 = *$tmp318;
*(&local3) = $tmp319;
goto block6;
block5:;
*(&local3) = $tmp315;
goto block6;
block6:;
frost$core$Bit $tmp320 = *(&local3);
frost$core$Bit* $tmp321 = &param0->resolved;
*$tmp321 = $tmp320;
frost$core$Frost$unref$frost$core$Object$Q($tmp305);
// unreffing REF($94:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp322 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// unreffing t
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing REF($83:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 135
frost$core$MutableString* $tmp323 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp323, &$s324);
// line 136
frost$core$Int64 $tmp325 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp326 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp325);
org$frostlang$frostc$Position* $tmp327 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp328 = *$tmp327;
frost$core$MutableString* $tmp329 = *(&local0);
frost$core$String* $tmp330 = frost$core$MutableString$finish$R$frost$core$String($tmp329);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp326, $tmp328, $tmp330);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// unreffing REF($156:frost.core.String)
frost$core$String* $tmp331 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp332 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
// unreffing name
*(&local0) = ((frost$core$MutableString*) NULL);
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter(org$frostlang$frostc$Type* param0, org$frostlang$frostc$ClassDecl$GenericParameter* param1) {

// line 38
frost$core$Weak* $tmp333 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp333, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Weak** $tmp334 = &param0->genericClassParameter;
frost$core$Weak* $tmp335 = *$tmp334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Weak** $tmp336 = &param0->genericClassParameter;
*$tmp336 = $tmp333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
// unreffing REF($1:frost.core.Weak<org.frostlang.frostc.ClassDecl.GenericParameter?>)
// line 41
frost$core$Weak* $tmp337 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp337, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$Weak** $tmp338 = &param0->genericMethodParameter;
frost$core$Weak* $tmp339 = *$tmp338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Weak** $tmp340 = &param0->genericMethodParameter;
*$tmp340 = $tmp337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing REF($17:frost.core.Weak<org.frostlang.frostc.MethodDecl.GenericParameter?>)
// line 140
frost$core$Int64 $tmp341 = (frost$core$Int64) {12};
org$frostlang$frostc$Type$Kind $tmp342 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp341);
org$frostlang$frostc$Type$Kind* $tmp343 = &param0->typeKind;
*$tmp343 = $tmp342;
// line 141
frost$core$Weak* $tmp344 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp344, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Weak** $tmp345 = &param0->genericClassParameter;
frost$core$Weak* $tmp346 = *$tmp345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Weak** $tmp347 = &param0->genericClassParameter;
*$tmp347 = $tmp344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing REF($39:frost.core.Weak<org.frostlang.frostc.ClassDecl.GenericParameter?>)
// line 142
frost$core$Bit $tmp348 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp349 = &param0->resolved;
*$tmp349 = $tmp348;
// line 143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp350 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp351 = *$tmp350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
org$frostlang$frostc$FixedArray** $tmp352 = &param0->subtypes;
*$tmp352 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 144
frost$core$Int64 $tmp353 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp354 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp353);
org$frostlang$frostc$Position* $tmp355 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp356 = *$tmp355;
frost$core$String** $tmp357 = &param1->owner;
frost$core$String* $tmp358 = *$tmp357;
frost$core$String* $tmp359 = frost$core$String$get_asString$R$frost$core$String($tmp358);
frost$core$String* $tmp360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp359, &$s361);
frost$core$String** $tmp362 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp363 = *$tmp362;
frost$core$String* $tmp364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp360, $tmp363);
frost$core$String* $tmp365 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp364, &$s366);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp354, $tmp356, $tmp365);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// unreffing REF($82:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// unreffing REF($81:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
// unreffing REF($77:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
// unreffing REF($76:frost.core.String)
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodDecl$GenericParameter(org$frostlang$frostc$Type* param0, org$frostlang$frostc$MethodDecl$GenericParameter* param1) {

// line 38
frost$core$Weak* $tmp367 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp367, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$core$Weak** $tmp368 = &param0->genericClassParameter;
frost$core$Weak* $tmp369 = *$tmp368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$Weak** $tmp370 = &param0->genericClassParameter;
*$tmp370 = $tmp367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
// unreffing REF($1:frost.core.Weak<org.frostlang.frostc.ClassDecl.GenericParameter?>)
// line 41
frost$core$Weak* $tmp371 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp371, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$core$Weak** $tmp372 = &param0->genericMethodParameter;
frost$core$Weak* $tmp373 = *$tmp372;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Weak** $tmp374 = &param0->genericMethodParameter;
*$tmp374 = $tmp371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
// unreffing REF($17:frost.core.Weak<org.frostlang.frostc.MethodDecl.GenericParameter?>)
// line 148
frost$core$Int64 $tmp375 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp376 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp375);
org$frostlang$frostc$Type$Kind* $tmp377 = &param0->typeKind;
*$tmp377 = $tmp376;
// line 149
frost$core$Weak* $tmp378 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp378, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$Weak** $tmp379 = &param0->genericMethodParameter;
frost$core$Weak* $tmp380 = *$tmp379;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Weak** $tmp381 = &param0->genericMethodParameter;
*$tmp381 = $tmp378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// unreffing REF($39:frost.core.Weak<org.frostlang.frostc.MethodDecl.GenericParameter?>)
// line 150
frost$core$Bit $tmp382 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp383 = &param0->resolved;
*$tmp383 = $tmp382;
// line 151
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp384 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp385 = *$tmp384;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
org$frostlang$frostc$FixedArray** $tmp386 = &param0->subtypes;
*$tmp386 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 152
frost$core$Int64 $tmp387 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp388 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp387);
org$frostlang$frostc$Position* $tmp389 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp390 = *$tmp389;
frost$core$String** $tmp391 = &param1->owner;
frost$core$String* $tmp392 = *$tmp391;
frost$core$String* $tmp393 = frost$core$String$get_asString$R$frost$core$String($tmp392);
frost$core$String* $tmp394 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp393, &$s395);
frost$core$String** $tmp396 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp397 = *$tmp396;
frost$core$String* $tmp398 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp394, $tmp397);
frost$core$String* $tmp399 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp398, &$s400);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp388, $tmp390, $tmp399);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
// unreffing REF($82:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
// unreffing REF($81:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
// unreffing REF($77:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
// unreffing REF($76:frost.core.String)
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodRef(org$frostlang$frostc$Type* param0, org$frostlang$frostc$MethodRef* param1) {

// line 38
frost$core$Weak* $tmp401 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp401, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Weak** $tmp402 = &param0->genericClassParameter;
frost$core$Weak* $tmp403 = *$tmp402;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Weak** $tmp404 = &param0->genericClassParameter;
*$tmp404 = $tmp401;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
// unreffing REF($1:frost.core.Weak<org.frostlang.frostc.ClassDecl.GenericParameter?>)
// line 41
frost$core$Weak* $tmp405 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp405, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$Weak** $tmp406 = &param0->genericMethodParameter;
frost$core$Weak* $tmp407 = *$tmp406;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$Weak** $tmp408 = &param0->genericMethodParameter;
*$tmp408 = $tmp405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
// unreffing REF($17:frost.core.Weak<org.frostlang.frostc.MethodDecl.GenericParameter?>)
// line 156
org$frostlang$frostc$Type** $tmp409 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp410 = *$tmp409;
org$frostlang$frostc$Type$Kind* $tmp411 = &$tmp410->typeKind;
org$frostlang$frostc$Type$Kind $tmp412 = *$tmp411;
org$frostlang$frostc$Type$Kind* $tmp413 = &param0->typeKind;
*$tmp413 = $tmp412;
// line 157
org$frostlang$frostc$Type** $tmp414 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp415 = *$tmp414;
org$frostlang$frostc$FixedArray** $tmp416 = &$tmp415->subtypes;
org$frostlang$frostc$FixedArray* $tmp417 = *$tmp416;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
org$frostlang$frostc$FixedArray** $tmp418 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp419 = *$tmp418;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
org$frostlang$frostc$FixedArray** $tmp420 = &param0->subtypes;
*$tmp420 = $tmp417;
// line 158
org$frostlang$frostc$Type** $tmp421 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp422 = *$tmp421;
frost$core$Bit* $tmp423 = &$tmp422->resolved;
frost$core$Bit $tmp424 = *$tmp423;
frost$core$Bit* $tmp425 = &param0->resolved;
*$tmp425 = $tmp424;
// line 159
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodRef** $tmp426 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp427 = *$tmp426;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
org$frostlang$frostc$MethodRef** $tmp428 = &param0->methodRef;
*$tmp428 = param1;
// line 160
frost$core$Int64 $tmp429 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp430 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp429);
org$frostlang$frostc$Type** $tmp431 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp432 = *$tmp431;
org$frostlang$frostc$Position* $tmp433 = &((org$frostlang$frostc$Symbol*) $tmp432)->position;
org$frostlang$frostc$Position $tmp434 = *$tmp433;
org$frostlang$frostc$Type** $tmp435 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp436 = *$tmp435;
frost$core$String** $tmp437 = &((org$frostlang$frostc$Symbol*) $tmp436)->name;
frost$core$String* $tmp438 = *$tmp437;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp430, $tmp434, $tmp438);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$collections$ListView* param1) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
frost$core$Bit local4;
frost$collections$Array* local5 = NULL;
// line 165
frost$core$Bit* $tmp439 = &param0->resolved;
frost$core$Bit $tmp440 = *$tmp439;
*(&local0) = $tmp440;
// line 166
frost$core$MutableString* $tmp441 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp441);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$MutableString* $tmp442 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
*(&local1) = $tmp441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
// unreffing REF($5:frost.core.MutableString)
// line 167
frost$core$MutableString* $tmp443 = *(&local1);
frost$core$String** $tmp444 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp445 = *$tmp444;
frost$core$MutableString$append$frost$core$String($tmp443, $tmp445);
// line 168
frost$core$MutableString* $tmp446 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp446, &$s447);
// line 169
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s448));
frost$core$String* $tmp449 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local2) = &$s450;
// line 170
ITable* $tmp451 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp451->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp451 = $tmp451->next;
}
$fn453 $tmp452 = $tmp451->methods[0];
frost$collections$Iterator* $tmp454 = $tmp452(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp455 = $tmp454->$class->itable;
while ($tmp455->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp455 = $tmp455->next;
}
$fn457 $tmp456 = $tmp455->methods[0];
frost$core$Bit $tmp458 = $tmp456($tmp454);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block3; else goto block2;
block2:;
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
// line 171
frost$core$Bit $tmp465 = *(&local0);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp467 = *(&local3);
frost$core$Bit* $tmp468 = &$tmp467->resolved;
frost$core$Bit $tmp469 = *$tmp468;
*(&local4) = $tmp469;
goto block6;
block5:;
*(&local4) = $tmp465;
goto block6;
block6:;
frost$core$Bit $tmp470 = *(&local4);
*(&local0) = $tmp470;
// line 172
frost$core$MutableString* $tmp471 = *(&local1);
frost$core$String* $tmp472 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp471, $tmp472);
// line 173
frost$core$MutableString* $tmp473 = *(&local1);
org$frostlang$frostc$Type* $tmp474 = *(&local3);
frost$core$String** $tmp475 = &((org$frostlang$frostc$Symbol*) $tmp474)->name;
frost$core$String* $tmp476 = *$tmp475;
frost$core$MutableString$append$frost$core$String($tmp473, $tmp476);
// line 174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s477));
frost$core$String* $tmp478 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local2) = &$s479;
frost$core$Frost$unref$frost$core$Object$Q($tmp463);
// unreffing REF($49:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp480 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// unreffing a
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// unreffing REF($38:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 176
frost$core$MutableString* $tmp481 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp481, &$s482);
// line 177
frost$collections$Array* $tmp483 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp483);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
frost$collections$Array* $tmp484 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local5) = $tmp483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
// unreffing REF($104:frost.collections.Array<org.frostlang.frostc.Type>)
// line 178
frost$collections$Array* $tmp485 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp485, ((frost$core$Object*) param0));
// line 179
frost$collections$Array* $tmp486 = *(&local5);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp486, ((frost$collections$CollectionView*) param1));
// line 180
org$frostlang$frostc$Type* $tmp487 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp488 = *(&local1);
frost$core$String* $tmp489 = frost$core$MutableString$finish$R$frost$core$String($tmp488);
frost$core$Int64 $tmp490 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp491 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp490);
org$frostlang$frostc$Position* $tmp492 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp493 = *$tmp492;
frost$collections$Array* $tmp494 = *(&local5);
frost$core$Bit $tmp495 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp487, $tmp489, $tmp491, $tmp493, ((frost$collections$ListView*) $tmp494), $tmp495);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
// unreffing REF($131:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// unreffing REF($129:org.frostlang.frostc.Type)
frost$collections$Array* $tmp496 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
// unreffing subtypes
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp497 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
// unreffing separator
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp498 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
// unreffing name
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp487;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Position param0, org$frostlang$frostc$Type$Kind param1, frost$collections$ListView* param2, org$frostlang$frostc$Type* param3, frost$core$Int64 param4) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Bit local5;
// line 186
frost$core$Bit* $tmp499 = &param3->resolved;
frost$core$Bit $tmp500 = *$tmp499;
*(&local0) = $tmp500;
// line 187
frost$core$MutableString* $tmp501 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp501, &$s502);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$MutableString* $tmp503 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local1) = $tmp501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// unreffing REF($5:frost.core.MutableString)
// line 188
frost$collections$Array* $tmp504 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp504);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$collections$Array* $tmp505 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local2) = $tmp504;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
// unreffing REF($18:frost.collections.Array<org.frostlang.frostc.Type>)
// line 189
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s506));
frost$core$String* $tmp507 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local3) = &$s508;
// line 190
ITable* $tmp509 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp509->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp509 = $tmp509->next;
}
$fn511 $tmp510 = $tmp509->methods[0];
frost$collections$Iterator* $tmp512 = $tmp510(((frost$collections$Iterable*) param2));
goto block1;
block1:;
ITable* $tmp513 = $tmp512->$class->itable;
while ($tmp513->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp513 = $tmp513->next;
}
$fn515 $tmp514 = $tmp513->methods[0];
frost$core$Bit $tmp516 = $tmp514($tmp512);
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block3; else goto block2;
block2:;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp518 = $tmp512->$class->itable;
while ($tmp518->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp518 = $tmp518->next;
}
$fn520 $tmp519 = $tmp518->methods[1];
frost$core$Object* $tmp521 = $tmp519($tmp512);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp521)));
org$frostlang$frostc$Type* $tmp522 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp521);
// line 191
frost$collections$Array* $tmp523 = *(&local2);
org$frostlang$frostc$Type* $tmp524 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp523, ((frost$core$Object*) $tmp524));
// line 192
frost$core$Bit $tmp525 = *(&local0);
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp527 = *(&local4);
frost$core$Bit* $tmp528 = &$tmp527->resolved;
frost$core$Bit $tmp529 = *$tmp528;
*(&local5) = $tmp529;
goto block6;
block5:;
*(&local5) = $tmp525;
goto block6;
block6:;
frost$core$Bit $tmp530 = *(&local5);
*(&local0) = $tmp530;
// line 193
frost$core$MutableString* $tmp531 = *(&local1);
frost$core$String* $tmp532 = *(&local3);
frost$core$MutableString$append$frost$core$String($tmp531, $tmp532);
// line 194
frost$core$MutableString* $tmp533 = *(&local1);
org$frostlang$frostc$Type* $tmp534 = *(&local4);
frost$core$String** $tmp535 = &((org$frostlang$frostc$Symbol*) $tmp534)->name;
frost$core$String* $tmp536 = *$tmp535;
frost$core$MutableString$append$frost$core$String($tmp533, $tmp536);
// line 195
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s537));
frost$core$String* $tmp538 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local3) = &$s539;
frost$core$Frost$unref$frost$core$Object$Q($tmp521);
// unreffing REF($54:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp540 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
// unreffing p
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
// unreffing REF($43:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 197
frost$core$Int64 $tmp541 = param1.$rawValue;
frost$core$Int64 $tmp542 = (frost$core$Int64) {15};
frost$core$Bit $tmp543 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp541, $tmp542);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block8; else goto block9;
block8:;
// line 199
frost$core$MutableString* $tmp545 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp545, &$s546);
goto block7;
block9:;
frost$core$Int64 $tmp547 = (frost$core$Int64) {16};
frost$core$Bit $tmp548 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp541, $tmp547);
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block10; else goto block11;
block10:;
// line 202
frost$core$MutableString* $tmp550 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp550, &$s551);
goto block7;
block11:;
frost$core$Int64 $tmp552 = (frost$core$Int64) {17};
frost$core$Bit $tmp553 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp541, $tmp552);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block12; else goto block13;
block12:;
// line 205
frost$core$MutableString* $tmp555 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp555, &$s556);
goto block7;
block13:;
frost$core$Int64 $tmp557 = (frost$core$Int64) {18};
frost$core$Bit $tmp558 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp541, $tmp557);
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block14; else goto block15;
block14:;
// line 208
frost$core$MutableString* $tmp560 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp560, &$s561);
goto block7;
block15:;
// line 211
frost$core$Bit $tmp562 = frost$core$Bit$init$builtin_bit(false);
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp564 = (frost$core$Int64) {211};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s565, $tmp564);
abort(); // unreachable
block16:;
goto block7;
block7:;
// line 214
frost$collections$Array* $tmp566 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp566, ((frost$core$Object*) param3));
// line 215
org$frostlang$frostc$Type* $tmp567 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp568 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp568->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp568 = $tmp568->next;
}
$fn570 $tmp569 = $tmp568->methods[1];
frost$core$Bit $tmp571 = $tmp569(((frost$core$Equatable*) param3), ((frost$core$Equatable*) $tmp567));
bool $tmp572 = $tmp571.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
// unreffing REF($161:org.frostlang.frostc.Type)
if ($tmp572) goto block18; else goto block19;
block18:;
// line 216
frost$core$MutableString* $tmp573 = *(&local1);
frost$core$String** $tmp574 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp575 = *$tmp574;
frost$core$MutableString$append$frost$core$String($tmp573, $tmp575);
goto block19;
block19:;
// line 218
frost$core$MutableString* $tmp576 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp576, &$s577);
// line 219
org$frostlang$frostc$Type* $tmp578 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp579 = *(&local1);
frost$core$String* $tmp580 = frost$core$MutableString$finish$R$frost$core$String($tmp579);
frost$collections$Array* $tmp581 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp582 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp581);
frost$core$Bit $tmp583 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64($tmp578, $tmp580, param1, param0, ((frost$collections$ListView*) $tmp582), $tmp583, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
// unreffing REF($186:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
// unreffing REF($183:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
// unreffing REF($181:org.frostlang.frostc.Type)
frost$core$String* $tmp584 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
// unreffing separator
*(&local3) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp585 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
// unreffing subtypes
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$MutableString* $tmp586 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
// unreffing name
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp578;

}
frost$core$Int64 org$frostlang$frostc$Type$get_size$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
// line 224
org$frostlang$frostc$Type$Kind* $tmp587 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp588 = *$tmp587;
org$frostlang$frostc$Type$Kind$wrapper* $tmp589;
$tmp589 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp589->value = $tmp588;
frost$core$Int64 $tmp590 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp591 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp590);
org$frostlang$frostc$Type$Kind$wrapper* $tmp592;
$tmp592 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp592->value = $tmp591;
ITable* $tmp593 = ((frost$core$Equatable*) $tmp589)->$class->itable;
while ($tmp593->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp593 = $tmp593->next;
}
$fn595 $tmp594 = $tmp593->methods[0];
frost$core$Bit $tmp596 = $tmp594(((frost$core$Equatable*) $tmp589), ((frost$core$Equatable*) $tmp592));
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block1; else goto block2;
block1:;
*(&local1) = $tmp596;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp598 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp599 = *$tmp598;
org$frostlang$frostc$Type$Kind$wrapper* $tmp600;
$tmp600 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp600->value = $tmp599;
frost$core$Int64 $tmp601 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp602 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp601);
org$frostlang$frostc$Type$Kind$wrapper* $tmp603;
$tmp603 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp603->value = $tmp602;
ITable* $tmp604 = ((frost$core$Equatable*) $tmp600)->$class->itable;
while ($tmp604->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp604 = $tmp604->next;
}
$fn606 $tmp605 = $tmp604->methods[0];
frost$core$Bit $tmp607 = $tmp605(((frost$core$Equatable*) $tmp600), ((frost$core$Equatable*) $tmp603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp603)));
// unreffing REF($20:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp600)));
// unreffing REF($16:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local1) = $tmp607;
goto block3;
block3:;
frost$core$Bit $tmp608 = *(&local1);
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block4; else goto block5;
block4:;
*(&local0) = $tmp608;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp610 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp611 = *$tmp610;
org$frostlang$frostc$Type$Kind$wrapper* $tmp612;
$tmp612 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp612->value = $tmp611;
frost$core$Int64 $tmp613 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp614 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp613);
org$frostlang$frostc$Type$Kind$wrapper* $tmp615;
$tmp615 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp615->value = $tmp614;
ITable* $tmp616 = ((frost$core$Equatable*) $tmp612)->$class->itable;
while ($tmp616->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp616 = $tmp616->next;
}
$fn618 $tmp617 = $tmp616->methods[0];
frost$core$Bit $tmp619 = $tmp617(((frost$core$Equatable*) $tmp612), ((frost$core$Equatable*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp615)));
// unreffing REF($42:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp612)));
// unreffing REF($38:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local0) = $tmp619;
goto block6;
block6:;
frost$core$Bit $tmp620 = *(&local0);
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp622 = (frost$core$Int64) {224};
frost$core$String* $tmp623 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s624, ((frost$core$Object*) param0));
frost$core$String* $tmp625 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp623, &$s626);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s627, $tmp622, $tmp625);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
// unreffing REF($59:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
// unreffing REF($58:frost.core.String)
abort(); // unreachable
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp592)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp589)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
// line 226
org$frostlang$frostc$Position* $tmp628 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp629 = *$tmp628;
frost$core$Int64 $tmp630 = $tmp629.line;
return $tmp630;

}
frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$core$Bit local0;
// line 236
frost$core$String** $tmp631 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp632 = *$tmp631;
frost$core$String** $tmp633 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp634 = *$tmp633;
frost$core$Bit $tmp635 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp632, $tmp634);
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Type$Kind* $tmp637 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp638 = *$tmp637;
org$frostlang$frostc$Type$Kind$wrapper* $tmp639;
$tmp639 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp639->value = $tmp638;
org$frostlang$frostc$Type$Kind* $tmp640 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp641 = *$tmp640;
org$frostlang$frostc$Type$Kind$wrapper* $tmp642;
$tmp642 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp642->value = $tmp641;
ITable* $tmp643 = ((frost$core$Equatable*) $tmp639)->$class->itable;
while ($tmp643->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp643 = $tmp643->next;
}
$fn645 $tmp644 = $tmp643->methods[0];
frost$core$Bit $tmp646 = $tmp644(((frost$core$Equatable*) $tmp639), ((frost$core$Equatable*) $tmp642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp642)));
// unreffing REF($16:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp639)));
// unreffing REF($12:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local0) = $tmp646;
goto block3;
block2:;
*(&local0) = $tmp635;
goto block3;
block3:;
frost$core$Bit $tmp647 = *(&local0);
return $tmp647;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type() {

// line 241
org$frostlang$frostc$Type* $tmp648 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp649 = (frost$core$Int64) {4};
org$frostlang$frostc$Type$Kind $tmp650 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp649);
org$frostlang$frostc$Position $tmp651 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp652 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp648, &$s653, $tmp650, $tmp651, $tmp652);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp648;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type() {

// line 246
org$frostlang$frostc$Type* $tmp654 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp655 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp656 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp655);
org$frostlang$frostc$Position $tmp657 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp658 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp654, &$s659, $tmp656, $tmp657, $tmp658);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp654;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type() {

// line 251
org$frostlang$frostc$Type* $tmp660 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp661 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp662 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp661);
org$frostlang$frostc$Position $tmp663 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp664 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp660, &$s665, $tmp662, $tmp663, $tmp664);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp660;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type() {

frost$collections$Array* local0 = NULL;
// line 256
frost$collections$Array* $tmp666 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp666);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$collections$Array* $tmp667 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local0) = $tmp666;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 257
frost$collections$Array* $tmp668 = *(&local0);
org$frostlang$frostc$Type* $tmp669 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp668, ((frost$core$Object*) $tmp669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
// unreffing REF($17:org.frostlang.frostc.Type)
// line 258
org$frostlang$frostc$Type* $tmp670 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp671 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp672 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp671);
org$frostlang$frostc$Position $tmp673 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp674 = *(&local0);
frost$core$Bit $tmp675 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp670, &$s676, $tmp672, $tmp673, ((frost$collections$ListView*) $tmp674), $tmp675);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
// unreffing REF($24:org.frostlang.frostc.Type)
frost$collections$Array* $tmp677 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
// unreffing subtypes
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp670;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type() {

// line 263
org$frostlang$frostc$Type* $tmp678 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp679 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp680 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp679);
org$frostlang$frostc$Position $tmp681 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp682 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp678, &$s683, $tmp680, $tmp681, $tmp682);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp678;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Immutable$R$org$frostlang$frostc$Type() {

// line 268
org$frostlang$frostc$Type* $tmp684 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp685 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp686 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp685);
org$frostlang$frostc$Position $tmp687 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp688 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp684, &$s689, $tmp686, $tmp687, $tmp688);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp684;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type() {

// line 273
org$frostlang$frostc$Type* $tmp690 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp691 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp692 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp691);
org$frostlang$frostc$Position $tmp693 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp694 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp690, &$s695, $tmp692, $tmp693, $tmp694);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp690;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type() {

// line 278
org$frostlang$frostc$Type* $tmp696 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp697 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp698 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp697);
org$frostlang$frostc$Position $tmp699 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp700 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp696, &$s701, $tmp698, $tmp699, $tmp700);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp696;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type() {

// line 283
org$frostlang$frostc$Type* $tmp702 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp703 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp704 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp703);
org$frostlang$frostc$Position $tmp705 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp706 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp702, &$s707, $tmp704, $tmp705, $tmp706);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp702;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RegularExpression$R$org$frostlang$frostc$Type() {

// line 288
org$frostlang$frostc$Type* $tmp708 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp709 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp710 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp709);
org$frostlang$frostc$Position $tmp711 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp712 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp708, &$s713, $tmp710, $tmp711, $tmp712);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp708;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt8$R$org$frostlang$frostc$Type() {

// line 293
org$frostlang$frostc$Type* $tmp714 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp715 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp716 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp715);
frost$core$Int64 $tmp717 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp714, &$s718, $tmp716, $tmp717);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp714;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt16$R$org$frostlang$frostc$Type() {

// line 298
org$frostlang$frostc$Type* $tmp719 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp720 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp721 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp720);
frost$core$Int64 $tmp722 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp719, &$s723, $tmp721, $tmp722);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp719;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt32$R$org$frostlang$frostc$Type() {

// line 303
org$frostlang$frostc$Type* $tmp724 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp725 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp726 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp725);
frost$core$Int64 $tmp727 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp724, &$s728, $tmp726, $tmp727);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp724;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt64$R$org$frostlang$frostc$Type() {

// line 308
org$frostlang$frostc$Type* $tmp729 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp730 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp731 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp730);
frost$core$Int64 $tmp732 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp729, &$s733, $tmp731, $tmp732);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp729;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt8$R$org$frostlang$frostc$Type() {

// line 313
org$frostlang$frostc$Type* $tmp734 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp735 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp736 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp735);
frost$core$Int64 $tmp737 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp734, &$s738, $tmp736, $tmp737);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp734;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt16$R$org$frostlang$frostc$Type() {

// line 318
org$frostlang$frostc$Type* $tmp739 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp740 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp741 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp740);
frost$core$Int64 $tmp742 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp739, &$s743, $tmp741, $tmp742);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp739;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt32$R$org$frostlang$frostc$Type() {

// line 323
org$frostlang$frostc$Type* $tmp744 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp745 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp746 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp745);
frost$core$Int64 $tmp747 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp744, &$s748, $tmp746, $tmp747);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp744;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt64$R$org$frostlang$frostc$Type() {

// line 328
org$frostlang$frostc$Type* $tmp749 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp750 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp751 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp750);
frost$core$Int64 $tmp752 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp749, &$s753, $tmp751, $tmp752);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp749;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat32$R$org$frostlang$frostc$Type() {

// line 333
org$frostlang$frostc$Type* $tmp754 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp755 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp756 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp755);
frost$core$Int64 $tmp757 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp754, &$s758, $tmp756, $tmp757);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp754;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat64$R$org$frostlang$frostc$Type() {

// line 338
org$frostlang$frostc$Type* $tmp759 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp760 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp761 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp760);
frost$core$Int64 $tmp762 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp759, &$s763, $tmp761, $tmp762);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp759;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type() {

// line 343
org$frostlang$frostc$Type* $tmp764 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp765 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp766 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp765);
org$frostlang$frostc$Position $tmp767 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp768 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp764, &$s769, $tmp766, $tmp767, $tmp768);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp764;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type() {

// line 348
org$frostlang$frostc$Type* $tmp770 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp771 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp772 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp771);
org$frostlang$frostc$Position $tmp773 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp774 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp770, &$s775, $tmp772, $tmp773, $tmp774);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp770;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type() {

// line 353
org$frostlang$frostc$Type* $tmp776 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp777 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp778 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp777);
org$frostlang$frostc$Position $tmp779 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp780 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp776, &$s781, $tmp778, $tmp779, $tmp780);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp776;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type() {

// line 358
org$frostlang$frostc$Type* $tmp782 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp783 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp784 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp783);
org$frostlang$frostc$Position $tmp785 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp786 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp782, &$s787, $tmp784, $tmp785, $tmp786);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp782;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type() {

// line 363
org$frostlang$frostc$Type* $tmp788 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp789 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp790 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp789);
org$frostlang$frostc$Position $tmp791 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp792 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp788, &$s793, $tmp790, $tmp791, $tmp792);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp788;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type() {

// line 368
org$frostlang$frostc$Type* $tmp794 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp795 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp796 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp795);
org$frostlang$frostc$Position $tmp797 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp798 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp794, &$s799, $tmp796, $tmp797, $tmp798);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp794;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type() {

// line 373
org$frostlang$frostc$Type* $tmp800 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp801 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp802 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp801);
org$frostlang$frostc$Position $tmp803 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp804 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp800, &$s805, $tmp802, $tmp803, $tmp804);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp800;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type() {

// line 378
org$frostlang$frostc$Type* $tmp806 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp807 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp808 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp807);
org$frostlang$frostc$Position $tmp809 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp810 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp806, &$s811, $tmp808, $tmp809, $tmp810);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp806;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type() {

// line 383
org$frostlang$frostc$Type* $tmp812 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp813 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp814 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp813);
org$frostlang$frostc$Position $tmp815 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp816 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp812, &$s817, $tmp814, $tmp815, $tmp816);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp812;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type() {

// line 388
org$frostlang$frostc$Type* $tmp818 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp819 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp820 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp819);
org$frostlang$frostc$Position $tmp821 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp822 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp818, &$s823, $tmp820, $tmp821, $tmp822);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp818;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type() {

// line 393
org$frostlang$frostc$Type* $tmp824 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp825 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp826 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp825);
org$frostlang$frostc$Position $tmp827 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp828 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp824, &$s829, $tmp826, $tmp827, $tmp828);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp824;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type() {

// line 398
org$frostlang$frostc$Type* $tmp830 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp831 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp832 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp831);
org$frostlang$frostc$Position $tmp833 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp834 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp830, &$s835, $tmp832, $tmp833, $tmp834);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp830;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type() {

// line 403
org$frostlang$frostc$Type* $tmp836 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp837 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp838 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp837);
org$frostlang$frostc$Position $tmp839 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp840 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp836, &$s841, $tmp838, $tmp839, $tmp840);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp836;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type() {

// line 408
org$frostlang$frostc$Type* $tmp842 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp843 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp844 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp843);
org$frostlang$frostc$Position $tmp845 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp846 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp842, &$s847, $tmp844, $tmp845, $tmp846);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp842;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$IntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

// line 413
org$frostlang$frostc$Type* $tmp848 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp849;
$tmp849 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp849->value = param0;
frost$core$String* $tmp850 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s851, ((frost$core$Object*) $tmp849));
frost$core$String* $tmp852 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp850, &$s853);
frost$core$Int64 $tmp854 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp855 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp854);
org$frostlang$frostc$Position $tmp856 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp857 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp848, $tmp852, $tmp855, $tmp856, $tmp857);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
// unreffing REF($2:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp848;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$NegatedIntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

// line 418
org$frostlang$frostc$Type* $tmp858 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp859;
$tmp859 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp859->value = param0;
frost$core$String* $tmp860 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s861, ((frost$core$Object*) $tmp859));
frost$core$String* $tmp862 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp860, &$s863);
frost$core$Int64 $tmp864 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp865 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp864);
org$frostlang$frostc$Position $tmp866 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp867 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp858, $tmp862, $tmp865, $tmp866, $tmp867);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// unreffing REF($2:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp858;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RealLiteral$frost$core$Real64$R$org$frostlang$frostc$Type(frost$core$Real64 param0) {

// line 423
org$frostlang$frostc$Type* $tmp868 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Real64$wrapper* $tmp869;
$tmp869 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp869->value = param0;
frost$core$String* $tmp870 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s871, ((frost$core$Object*) $tmp869));
frost$core$String* $tmp872 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp870, &$s873);
frost$core$Int64 $tmp874 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp875 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp874);
org$frostlang$frostc$Position $tmp876 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp877 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp868, $tmp872, $tmp875, $tmp876, $tmp877);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// unreffing REF($2:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp868;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BitLiteral$R$org$frostlang$frostc$Type() {

// line 428
org$frostlang$frostc$Type* $tmp878 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp879 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$Kind $tmp880 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp879);
org$frostlang$frostc$Position $tmp881 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp882 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp878, &$s883, $tmp880, $tmp881, $tmp882);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp878;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ClassLiteral$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 433
frost$collections$Array* $tmp884 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp884);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$collections$Array* $tmp885 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local0) = $tmp884;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 434
frost$collections$Array* $tmp886 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp886, ((frost$core$Object*) param0));
// line 435
org$frostlang$frostc$Type* $tmp887 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$collections$Array* $tmp888 = *(&local0);
org$frostlang$frostc$Type* $tmp889 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp887, ((frost$collections$ListView*) $tmp888));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
// unreffing REF($23:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
// unreffing REF($20:org.frostlang.frostc.Type)
frost$collections$Array* $tmp890 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp889;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type() {

// line 440
org$frostlang$frostc$Type* $tmp891 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp892 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp893 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp892);
org$frostlang$frostc$Position $tmp894 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp895 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp891, &$s896, $tmp893, $tmp894, $tmp895);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp891;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type() {

// line 445
org$frostlang$frostc$Type* $tmp897 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp898 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp899 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp898);
org$frostlang$frostc$Position $tmp900 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp901 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp897, &$s902, $tmp899, $tmp900, $tmp901);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp897;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterable$R$org$frostlang$frostc$Type() {

// line 450
org$frostlang$frostc$Type* $tmp903 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp904 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp905 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp904);
org$frostlang$frostc$Position $tmp906 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp907 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp903, &$s908, $tmp905, $tmp906, $tmp907);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp903;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Frost$R$org$frostlang$frostc$Type() {

// line 455
org$frostlang$frostc$Type* $tmp909 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp910 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp911 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp910);
org$frostlang$frostc$Position $tmp912 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp913 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp909, &$s914, $tmp911, $tmp912, $tmp913);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp909;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type() {

// line 460
org$frostlang$frostc$Type* $tmp915 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp916 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp917 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp916);
org$frostlang$frostc$Position $tmp918 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp919 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp915, &$s920, $tmp917, $tmp918, $tmp919);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp915;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type() {

// line 465
org$frostlang$frostc$Type* $tmp921 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp922 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp923 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp922);
org$frostlang$frostc$Position $tmp924 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp925 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp921, &$s926, $tmp923, $tmp924, $tmp925);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp921;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 470
frost$collections$Array* $tmp927 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp927);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$collections$Array* $tmp928 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
*(&local0) = $tmp927;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 471
frost$collections$Array* $tmp929 = *(&local0);
org$frostlang$frostc$Type* $tmp930 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp931 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp932 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp931);
org$frostlang$frostc$Position $tmp933 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp934 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp930, &$s935, $tmp932, $tmp933, $tmp934);
frost$collections$Array$add$frost$collections$Array$T($tmp929, ((frost$core$Object*) $tmp930));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
// unreffing REF($17:org.frostlang.frostc.Type)
// line 472
frost$collections$Array* $tmp936 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp936, ((frost$core$Object*) param0));
// line 473
org$frostlang$frostc$Type* $tmp937 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp938 = frost$core$String$get_asString$R$frost$core$String(&$s939);
frost$core$String* $tmp940 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp938, &$s941);
frost$core$String* $tmp942 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp940, ((frost$core$Object*) param0));
frost$core$String* $tmp943 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp942, &$s944);
frost$core$Int64 $tmp945 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp946 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp945);
org$frostlang$frostc$Position* $tmp947 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp948 = *$tmp947;
frost$collections$Array* $tmp949 = *(&local0);
frost$core$Bit* $tmp950 = &param0->resolved;
frost$core$Bit $tmp951 = *$tmp950;
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp937, $tmp943, $tmp946, $tmp948, ((frost$collections$ListView*) $tmp949), $tmp951);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
// unreffing REF($39:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// unreffing REF($38:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// unreffing REF($36:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
// unreffing REF($35:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
// unreffing REF($34:org.frostlang.frostc.Type)
frost$collections$Array* $tmp952 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp937;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 478
frost$collections$Array* $tmp953 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp953);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
frost$collections$Array* $tmp954 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local0) = $tmp953;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 479
frost$collections$Array* $tmp955 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp955, ((frost$core$Object*) param0));
// line 480
org$frostlang$frostc$Type* $tmp956 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp957 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp958 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp957);
org$frostlang$frostc$Position $tmp959 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp960 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp956, &$s961, $tmp958, $tmp959, $tmp960);
frost$collections$Array* $tmp962 = *(&local0);
org$frostlang$frostc$Type* $tmp963 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp956, ((frost$collections$ListView*) $tmp962));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
// unreffing REF($28:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
// unreffing REF($20:org.frostlang.frostc.Type)
frost$collections$Array* $tmp964 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp963;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 485
frost$collections$Array* $tmp965 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp965);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
frost$collections$Array* $tmp966 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
*(&local0) = $tmp965;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 486
frost$collections$Array* $tmp967 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp967, ((frost$core$Object*) param0));
// line 487
org$frostlang$frostc$Type* $tmp968 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp969 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp970 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp969);
org$frostlang$frostc$Position $tmp971 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp972 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp968, &$s973, $tmp970, $tmp971, $tmp972);
frost$collections$Array* $tmp974 = *(&local0);
org$frostlang$frostc$Type* $tmp975 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp968, ((frost$collections$ListView*) $tmp974));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
// unreffing REF($28:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
// unreffing REF($20:org.frostlang.frostc.Type)
frost$collections$Array* $tmp976 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp975;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ImmutableArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 492
frost$collections$Array* $tmp977 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp977);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
frost$collections$Array* $tmp978 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
*(&local0) = $tmp977;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 493
frost$collections$Array* $tmp979 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp979, ((frost$core$Object*) param0));
// line 494
org$frostlang$frostc$Type* $tmp980 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp981 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp982 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp981);
org$frostlang$frostc$Position $tmp983 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp984 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp980, &$s985, $tmp982, $tmp983, $tmp984);
frost$collections$Array* $tmp986 = *(&local0);
org$frostlang$frostc$Type* $tmp987 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp980, ((frost$collections$ListView*) $tmp986));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
// unreffing REF($28:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
// unreffing REF($20:org.frostlang.frostc.Type)
frost$collections$Array* $tmp988 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp987;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 499
frost$collections$Array* $tmp989 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp989);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$collections$Array* $tmp990 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
*(&local0) = $tmp989;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 500
frost$collections$Array* $tmp991 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp991, ((frost$core$Object*) param0));
// line 501
org$frostlang$frostc$Type* $tmp992 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp993 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp994 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp993);
org$frostlang$frostc$Position $tmp995 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp996 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp992, &$s997, $tmp994, $tmp995, $tmp996);
frost$collections$Array* $tmp998 = *(&local0);
org$frostlang$frostc$Type* $tmp999 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp992, ((frost$collections$ListView*) $tmp998));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
// unreffing REF($28:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
// unreffing REF($20:org.frostlang.frostc.Type)
frost$collections$Array* $tmp1000 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp999;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 506
frost$collections$Array* $tmp1001 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1001);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
frost$collections$Array* $tmp1002 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local0) = $tmp1001;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 507
frost$collections$Array* $tmp1003 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1003, ((frost$core$Object*) param0));
// line 508
org$frostlang$frostc$Type* $tmp1004 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp1005 = org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1006 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1004, $tmp1005);
bool $tmp1007 = $tmp1006.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
// unreffing REF($21:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
// unreffing REF($20:org.frostlang.frostc.Type)
if ($tmp1007) goto block1; else goto block3;
block1:;
// line 509
frost$collections$Array* $tmp1008 = *(&local0);
org$frostlang$frostc$Type* $tmp1009 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp1008, ((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
// unreffing REF($34:org.frostlang.frostc.Type)
goto block2;
block3:;
// line 511
org$frostlang$frostc$Type* $tmp1010 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp1011 = org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1012 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1010, $tmp1011);
bool $tmp1013 = $tmp1012.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
// unreffing REF($43:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
// unreffing REF($42:org.frostlang.frostc.Type)
if ($tmp1013) goto block4; else goto block6;
block4:;
// line 512
frost$collections$Array* $tmp1014 = *(&local0);
org$frostlang$frostc$Type* $tmp1015 = org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp1014, ((frost$core$Object*) $tmp1015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
// unreffing REF($56:org.frostlang.frostc.Type)
goto block5;
block6:;
// line 514
org$frostlang$frostc$Type* $tmp1016 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp1017 = org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1018 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1016, $tmp1017);
bool $tmp1019 = $tmp1018.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
// unreffing REF($65:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
// unreffing REF($64:org.frostlang.frostc.Type)
if ($tmp1019) goto block7; else goto block9;
block7:;
// line 515
frost$collections$Array* $tmp1020 = *(&local0);
org$frostlang$frostc$Type* $tmp1021 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp1020, ((frost$core$Object*) $tmp1021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
// unreffing REF($78:org.frostlang.frostc.Type)
goto block8;
block9:;
// line 1
// line 518
frost$collections$Array* $tmp1022 = *(&local0);
org$frostlang$frostc$Type* $tmp1023 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
frost$collections$Array$add$frost$collections$Array$T($tmp1022, ((frost$core$Object*) $tmp1023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
// unreffing REF($89:org.frostlang.frostc.Type)
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
// line 520
org$frostlang$frostc$Type* $tmp1024 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1025 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1026 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1025);
org$frostlang$frostc$Position $tmp1027 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1028 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1024, &$s1029, $tmp1026, $tmp1027, $tmp1028);
frost$collections$Array* $tmp1030 = *(&local0);
org$frostlang$frostc$Type* $tmp1031 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1024, ((frost$collections$ListView*) $tmp1030));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
// unreffing REF($107:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
// unreffing REF($99:org.frostlang.frostc.Type)
frost$collections$Array* $tmp1032 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1031;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$collections$Array* local0 = NULL;
// line 525
frost$collections$Array* $tmp1033 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1033);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$collections$Array* $tmp1034 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
*(&local0) = $tmp1033;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 526
frost$collections$Array* $tmp1035 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1035, ((frost$core$Object*) param0));
// line 527
frost$collections$Array* $tmp1036 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1036, ((frost$core$Object*) param1));
// line 528
org$frostlang$frostc$Type* $tmp1037 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1038 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1039 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1038);
org$frostlang$frostc$Position $tmp1040 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1041 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1037, &$s1042, $tmp1039, $tmp1040, $tmp1041);
frost$collections$Array* $tmp1043 = *(&local0);
org$frostlang$frostc$Type* $tmp1044 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1037, ((frost$collections$ListView*) $tmp1043));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
// unreffing REF($33:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
// unreffing REF($25:org.frostlang.frostc.Type)
frost$collections$Array* $tmp1045 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1044;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type() {

// line 533
org$frostlang$frostc$Type* $tmp1046 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1047 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1048 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1047);
org$frostlang$frostc$Position $tmp1049 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1050 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1046, &$s1051, $tmp1048, $tmp1049, $tmp1050);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp1046;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type() {

// line 538
org$frostlang$frostc$Type* $tmp1052 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1053 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1054 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1053);
org$frostlang$frostc$Position $tmp1055 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1056 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1052, &$s1057, $tmp1054, $tmp1055, $tmp1056);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp1052;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
// line 542
frost$core$String** $tmp1058 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1059 = *$tmp1058;
frost$core$Bit $tmp1060 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1059, &$s1061);
bool $tmp1062 = $tmp1060.value;
if ($tmp1062) goto block1; else goto block2;
block1:;
*(&local3) = $tmp1060;
goto block3;
block2:;
frost$core$String** $tmp1063 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1064 = *$tmp1063;
frost$core$Bit $tmp1065 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1064, &$s1066);
*(&local3) = $tmp1065;
goto block3;
block3:;
frost$core$Bit $tmp1067 = *(&local3);
bool $tmp1068 = $tmp1067.value;
if ($tmp1068) goto block4; else goto block5;
block4:;
*(&local2) = $tmp1067;
goto block6;
block5:;
frost$core$String** $tmp1069 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1070 = *$tmp1069;
frost$core$Bit $tmp1071 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1070, &$s1072);
*(&local2) = $tmp1071;
goto block6;
block6:;
frost$core$Bit $tmp1073 = *(&local2);
bool $tmp1074 = $tmp1073.value;
if ($tmp1074) goto block7; else goto block8;
block7:;
*(&local1) = $tmp1073;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1075 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1076 = *$tmp1075;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1077;
$tmp1077 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1077->value = $tmp1076;
frost$core$Int64 $tmp1078 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1079 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1078);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1080;
$tmp1080 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1080->value = $tmp1079;
ITable* $tmp1081 = ((frost$core$Equatable*) $tmp1077)->$class->itable;
while ($tmp1081->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1081 = $tmp1081->next;
}
$fn1083 $tmp1082 = $tmp1081->methods[0];
frost$core$Bit $tmp1084 = $tmp1082(((frost$core$Equatable*) $tmp1077), ((frost$core$Equatable*) $tmp1080));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1080)));
// unreffing REF($37:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1077)));
// unreffing REF($33:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local1) = $tmp1084;
goto block9;
block9:;
frost$core$Bit $tmp1085 = *(&local1);
bool $tmp1086 = $tmp1085.value;
if ($tmp1086) goto block10; else goto block11;
block10:;
*(&local0) = $tmp1085;
goto block12;
block11:;
org$frostlang$frostc$Type$Kind* $tmp1087 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1088 = *$tmp1087;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1089;
$tmp1089 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1089->value = $tmp1088;
frost$core$Int64 $tmp1090 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp1091 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1090);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1092;
$tmp1092 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1092->value = $tmp1091;
ITable* $tmp1093 = ((frost$core$Equatable*) $tmp1089)->$class->itable;
while ($tmp1093->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1093 = $tmp1093->next;
}
$fn1095 $tmp1094 = $tmp1093->methods[0];
frost$core$Bit $tmp1096 = $tmp1094(((frost$core$Equatable*) $tmp1089), ((frost$core$Equatable*) $tmp1092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1092)));
// unreffing REF($59:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1089)));
// unreffing REF($55:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local0) = $tmp1096;
goto block12;
block12:;
frost$core$Bit $tmp1097 = *(&local0);
return $tmp1097;

}
frost$core$Bit org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
// line 548
org$frostlang$frostc$Type$Kind* $tmp1098 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1099 = *$tmp1098;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1100;
$tmp1100 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1100->value = $tmp1099;
frost$core$Int64 $tmp1101 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp1102 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1101);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1103;
$tmp1103 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1103->value = $tmp1102;
ITable* $tmp1104 = ((frost$core$Equatable*) $tmp1100)->$class->itable;
while ($tmp1104->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1104 = $tmp1104->next;
}
$fn1106 $tmp1105 = $tmp1104->methods[0];
frost$core$Bit $tmp1107 = $tmp1105(((frost$core$Equatable*) $tmp1100), ((frost$core$Equatable*) $tmp1103));
bool $tmp1108 = $tmp1107.value;
if ($tmp1108) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1107;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1109 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1110 = *$tmp1109;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1111;
$tmp1111 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1111->value = $tmp1110;
frost$core$Int64 $tmp1112 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp1113 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1112);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1114;
$tmp1114 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1114->value = $tmp1113;
ITable* $tmp1115 = ((frost$core$Equatable*) $tmp1111)->$class->itable;
while ($tmp1115->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1115 = $tmp1115->next;
}
$fn1117 $tmp1116 = $tmp1115->methods[0];
frost$core$Bit $tmp1118 = $tmp1116(((frost$core$Equatable*) $tmp1111), ((frost$core$Equatable*) $tmp1114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1114)));
// unreffing REF($20:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1111)));
// unreffing REF($16:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local2) = $tmp1118;
goto block3;
block3:;
frost$core$Bit $tmp1119 = *(&local2);
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1119;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1121 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1122 = *$tmp1121;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1123;
$tmp1123 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1123->value = $tmp1122;
frost$core$Int64 $tmp1124 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1125 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1124);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1126;
$tmp1126 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1126->value = $tmp1125;
ITable* $tmp1127 = ((frost$core$Equatable*) $tmp1123)->$class->itable;
while ($tmp1127->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1127 = $tmp1127->next;
}
$fn1129 $tmp1128 = $tmp1127->methods[0];
frost$core$Bit $tmp1130 = $tmp1128(((frost$core$Equatable*) $tmp1123), ((frost$core$Equatable*) $tmp1126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1126)));
// unreffing REF($42:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1123)));
// unreffing REF($38:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local1) = $tmp1130;
goto block6;
block6:;
frost$core$Bit $tmp1131 = *(&local1);
bool $tmp1132 = $tmp1131.value;
if ($tmp1132) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1131;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1133 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1134 = *$tmp1133;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1135;
$tmp1135 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1135->value = $tmp1134;
frost$core$Int64 $tmp1136 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1137 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1136);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1138;
$tmp1138 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1138->value = $tmp1137;
ITable* $tmp1139 = ((frost$core$Equatable*) $tmp1135)->$class->itable;
while ($tmp1139->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1139 = $tmp1139->next;
}
$fn1141 $tmp1140 = $tmp1139->methods[0];
frost$core$Bit $tmp1142 = $tmp1140(((frost$core$Equatable*) $tmp1135), ((frost$core$Equatable*) $tmp1138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1138)));
// unreffing REF($64:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1135)));
// unreffing REF($60:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local0) = $tmp1142;
goto block9;
block9:;
frost$core$Bit $tmp1143 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1103)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1100)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
return $tmp1143;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 553
frost$core$String** $tmp1144 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1145 = *$tmp1144;
frost$core$Bit $tmp1146 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1145, &$s1147);
return $tmp1146;

}
frost$core$Bit org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 557
org$frostlang$frostc$Type$Kind* $tmp1148 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1149 = *$tmp1148;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1150;
$tmp1150 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1150->value = $tmp1149;
frost$core$Int64 $tmp1151 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp1152 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1151);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1153;
$tmp1153 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1153->value = $tmp1152;
ITable* $tmp1154 = ((frost$core$Equatable*) $tmp1150)->$class->itable;
while ($tmp1154->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1154 = $tmp1154->next;
}
$fn1156 $tmp1155 = $tmp1154->methods[0];
frost$core$Bit $tmp1157 = $tmp1155(((frost$core$Equatable*) $tmp1150), ((frost$core$Equatable*) $tmp1153));
bool $tmp1158 = $tmp1157.value;
if ($tmp1158) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1157;
goto block3;
block2:;
frost$core$String** $tmp1159 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1160 = *$tmp1159;
frost$core$Bit $tmp1161 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1160, &$s1162);
*(&local0) = $tmp1161;
goto block3;
block3:;
frost$core$Bit $tmp1163 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1153)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1150)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
return $tmp1163;

}
frost$core$Bit org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 561
frost$core$String** $tmp1164 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1165 = *$tmp1164;
frost$core$Bit $tmp1166 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1165, &$s1167);
return $tmp1166;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 565
frost$core$Bit $tmp1168 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1169 = $tmp1168.value;
if ($tmp1169) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1168;
goto block3;
block2:;
frost$core$Bit $tmp1170 = org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(param0);
*(&local0) = $tmp1170;
goto block3;
block3:;
frost$core$Bit $tmp1171 = *(&local0);
return $tmp1171;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 569
org$frostlang$frostc$Type$Kind* $tmp1172 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1173 = *$tmp1172;
frost$core$Int64 $tmp1174 = $tmp1173.$rawValue;
frost$core$Int64 $tmp1175 = (frost$core$Int64) {0};
frost$core$Bit $tmp1176 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1174, $tmp1175);
bool $tmp1177 = $tmp1176.value;
if ($tmp1177) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1178 = (frost$core$Int64) {1};
frost$core$Bit $tmp1179 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1174, $tmp1178);
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp1181 = (frost$core$Int64) {11};
frost$core$Bit $tmp1182 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1174, $tmp1181);
bool $tmp1183 = $tmp1182.value;
if ($tmp1183) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1184 = (frost$core$Int64) {12};
frost$core$Bit $tmp1185 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1174, $tmp1184);
bool $tmp1186 = $tmp1185.value;
if ($tmp1186) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp1187 = (frost$core$Int64) {13};
frost$core$Bit $tmp1188 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1174, $tmp1187);
bool $tmp1189 = $tmp1188.value;
if ($tmp1189) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp1190 = (frost$core$Int64) {16};
frost$core$Bit $tmp1191 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1174, $tmp1190);
bool $tmp1192 = $tmp1191.value;
if ($tmp1192) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp1193 = (frost$core$Int64) {15};
frost$core$Bit $tmp1194 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1174, $tmp1193);
bool $tmp1195 = $tmp1194.value;
if ($tmp1195) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp1196 = (frost$core$Int64) {18};
frost$core$Bit $tmp1197 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1174, $tmp1196);
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block2; else goto block10;
block10:;
frost$core$Int64 $tmp1199 = (frost$core$Int64) {17};
frost$core$Bit $tmp1200 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1174, $tmp1199);
bool $tmp1201 = $tmp1200.value;
if ($tmp1201) goto block2; else goto block11;
block2:;
// line 573
frost$core$Bit $tmp1202 = frost$core$Bit$init$builtin_bit(true);
return $tmp1202;
block11:;
// line 576
frost$core$Bit $tmp1203 = frost$core$Bit$init$builtin_bit(false);
return $tmp1203;
block1:;
frost$core$Bit $tmp1204 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1205 = $tmp1204.value;
if ($tmp1205) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1206 = (frost$core$Int64) {568};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1207, $tmp1206, &$s1208);
abort(); // unreachable
block12:;
abort(); // unreachable

}
frost$core$Bit org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 582
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
org$frostlang$frostc$FixedArray** $tmp1220 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1221 = *$tmp1220;
frost$core$Bit $tmp1222 = frost$core$Bit$init$builtin_bit($tmp1221 != NULL);
bool $tmp1223 = $tmp1222.value;
if ($tmp1223) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1224 = (frost$core$Int64) {582};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1225, $tmp1224, &$s1226);
abort(); // unreachable
block4:;
frost$core$Int64 $tmp1227 = (frost$core$Int64) {0};
frost$core$Object* $tmp1228 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1221, $tmp1227);
org$frostlang$frostc$Type* $tmp1229 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1230 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1228), $tmp1229);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
// unreffing REF($26:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1228);
// unreffing REF($24:org.frostlang.frostc.FixedArray.T)
*(&local0) = $tmp1230;
goto block3;
block2:;
*(&local0) = $tmp1218;
goto block3;
block3:;
frost$core$Bit $tmp1231 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1214)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1211)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
return $tmp1231;

}
frost$core$Bit org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 586
org$frostlang$frostc$Type$Kind* $tmp1232 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1233 = *$tmp1232;
frost$core$Int64 $tmp1234 = $tmp1233.$rawValue;
frost$core$Int64 $tmp1235 = (frost$core$Int64) {16};
frost$core$Bit $tmp1236 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1234, $tmp1235);
bool $tmp1237 = $tmp1236.value;
if ($tmp1237) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1238 = (frost$core$Int64) {15};
frost$core$Bit $tmp1239 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1234, $tmp1238);
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp1241 = (frost$core$Int64) {18};
frost$core$Bit $tmp1242 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1234, $tmp1241);
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1244 = (frost$core$Int64) {17};
frost$core$Bit $tmp1245 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1234, $tmp1244);
bool $tmp1246 = $tmp1245.value;
if ($tmp1246) goto block2; else goto block6;
block2:;
// line 588
frost$core$Bit $tmp1247 = frost$core$Bit$init$builtin_bit(true);
return $tmp1247;
block6:;
// line 591
frost$core$Bit $tmp1248 = frost$core$Bit$init$builtin_bit(false);
return $tmp1248;
block1:;
frost$core$Bit $tmp1249 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1250 = $tmp1249.value;
if ($tmp1250) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp1251 = (frost$core$Int64) {585};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1252, $tmp1251, &$s1253);
abort(); // unreachable
block7:;
abort(); // unreachable

}
frost$core$Bit org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 597
frost$core$String** $tmp1254 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1255 = *$tmp1254;
frost$core$Bit $tmp1256 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1255, &$s1257);
return $tmp1256;

}
frost$core$Bit org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 601
frost$core$String** $tmp1258 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1259 = *$tmp1258;
frost$core$Bit $tmp1260 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1259, &$s1261);
return $tmp1260;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 605
frost$core$String** $tmp1262 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1263 = *$tmp1262;
frost$core$Bit $tmp1264 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1263, &$s1265);
return $tmp1264;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 609
org$frostlang$frostc$Type$Kind* $tmp1266 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1267 = *$tmp1266;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1268;
$tmp1268 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1268->value = $tmp1267;
frost$core$Int64 $tmp1269 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1270 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1269);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1271;
$tmp1271 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1271->value = $tmp1270;
ITable* $tmp1272 = ((frost$core$Equatable*) $tmp1268)->$class->itable;
while ($tmp1272->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1272 = $tmp1272->next;
}
$fn1274 $tmp1273 = $tmp1272->methods[0];
frost$core$Bit $tmp1275 = $tmp1273(((frost$core$Equatable*) $tmp1268), ((frost$core$Equatable*) $tmp1271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1271)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1268)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
return $tmp1275;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 613
org$frostlang$frostc$Type$Kind* $tmp1276 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1277 = *$tmp1276;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1278;
$tmp1278 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1278->value = $tmp1277;
frost$core$Int64 $tmp1279 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1280 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1279);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1281;
$tmp1281 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1281->value = $tmp1280;
ITable* $tmp1282 = ((frost$core$Equatable*) $tmp1278)->$class->itable;
while ($tmp1282->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1282 = $tmp1282->next;
}
$fn1284 $tmp1283 = $tmp1282->methods[0];
frost$core$Bit $tmp1285 = $tmp1283(((frost$core$Equatable*) $tmp1278), ((frost$core$Equatable*) $tmp1281));
bool $tmp1286 = $tmp1285.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1281)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1278)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1286) goto block1; else goto block2;
block1:;
// line 614
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 616
frost$collections$Array* $tmp1287 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1287);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$collections$Array* $tmp1288 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local0) = $tmp1287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
// unreffing REF($23:frost.collections.Array<org.frostlang.frostc.Type>)
// line 617
frost$collections$Array* $tmp1289 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1289, ((frost$core$Object*) param0));
// line 618
org$frostlang$frostc$Type* $tmp1290 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String** $tmp1291 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1292 = *$tmp1291;
frost$core$String* $tmp1293 = frost$core$String$get_asString$R$frost$core$String($tmp1292);
frost$core$String* $tmp1294 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1293, &$s1295);
frost$core$Int64 $tmp1296 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1297 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1296);
org$frostlang$frostc$Position $tmp1298 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp1299 = *(&local0);
frost$core$Bit $tmp1300 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp1290, $tmp1294, $tmp1297, $tmp1298, ((frost$collections$ListView*) $tmp1299), $tmp1300);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
// unreffing REF($42:org.frostlang.frostc.Type)
frost$collections$Array* $tmp1301 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
// unreffing subtypes
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1290;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 622
org$frostlang$frostc$Type$Kind* $tmp1302 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1303 = *$tmp1302;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1304;
$tmp1304 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1304->value = $tmp1303;
frost$core$Int64 $tmp1305 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1306 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1305);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1307;
$tmp1307 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1307->value = $tmp1306;
ITable* $tmp1308 = ((frost$core$Equatable*) $tmp1304)->$class->itable;
while ($tmp1308->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1308 = $tmp1308->next;
}
$fn1310 $tmp1309 = $tmp1308->methods[1];
frost$core$Bit $tmp1311 = $tmp1309(((frost$core$Equatable*) $tmp1304), ((frost$core$Equatable*) $tmp1307));
bool $tmp1312 = $tmp1311.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1307)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1304)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1312) goto block1; else goto block2;
block1:;
// line 623
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 625
org$frostlang$frostc$FixedArray** $tmp1313 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1314 = *$tmp1313;
frost$core$Bit $tmp1315 = frost$core$Bit$init$builtin_bit($tmp1314 != NULL);
bool $tmp1316 = $tmp1315.value;
if ($tmp1316) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp1317 = (frost$core$Int64) {625};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1318, $tmp1317, &$s1319);
abort(); // unreachable
block3:;
frost$core$Int64 $tmp1320 = (frost$core$Int64) {0};
frost$core$Object* $tmp1321 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1314, $tmp1320);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1321)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1321);
// unreffing REF($35:org.frostlang.frostc.FixedArray.T)
return ((org$frostlang$frostc$Type*) $tmp1321);

}
frost$core$Int64 org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind* $tmp1322 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1323 = *$tmp1322;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1324;
$tmp1324 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1324->value = $tmp1323;
frost$core$Int64 $tmp1325 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1326 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1325);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1327;
$tmp1327 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1327->value = $tmp1326;
ITable* $tmp1328 = ((frost$core$Equatable*) $tmp1324)->$class->itable;
while ($tmp1328->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1328 = $tmp1328->next;
}
$fn1330 $tmp1329 = $tmp1328->methods[0];
frost$core$Bit $tmp1331 = $tmp1329(((frost$core$Equatable*) $tmp1324), ((frost$core$Equatable*) $tmp1327));
bool $tmp1332 = $tmp1331.value;
if ($tmp1332) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1331;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1333 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1334 = *$tmp1333;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1335;
$tmp1335 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1335->value = $tmp1334;
frost$core$Int64 $tmp1336 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1337 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1336);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1338;
$tmp1338 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1338->value = $tmp1337;
ITable* $tmp1339 = ((frost$core$Equatable*) $tmp1335)->$class->itable;
while ($tmp1339->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1339 = $tmp1339->next;
}
$fn1341 $tmp1340 = $tmp1339->methods[0];
frost$core$Bit $tmp1342 = $tmp1340(((frost$core$Equatable*) $tmp1335), ((frost$core$Equatable*) $tmp1338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1338)));
// unreffing REF($19:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1335)));
// unreffing REF($15:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local2) = $tmp1342;
goto block3;
block3:;
frost$core$Bit $tmp1343 = *(&local2);
bool $tmp1344 = $tmp1343.value;
if ($tmp1344) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1343;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1345 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1346 = *$tmp1345;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1347;
$tmp1347 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1347->value = $tmp1346;
frost$core$Int64 $tmp1348 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1349 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1348);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1350;
$tmp1350 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1350->value = $tmp1349;
ITable* $tmp1351 = ((frost$core$Equatable*) $tmp1347)->$class->itable;
while ($tmp1351->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1351 = $tmp1351->next;
}
$fn1353 $tmp1352 = $tmp1351->methods[0];
frost$core$Bit $tmp1354 = $tmp1352(((frost$core$Equatable*) $tmp1347), ((frost$core$Equatable*) $tmp1350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1350)));
// unreffing REF($41:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1347)));
// unreffing REF($37:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local1) = $tmp1354;
goto block6;
block6:;
frost$core$Bit $tmp1355 = *(&local1);
bool $tmp1356 = $tmp1355.value;
if ($tmp1356) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1355;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1357 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1358 = *$tmp1357;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1359;
$tmp1359 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1359->value = $tmp1358;
frost$core$Int64 $tmp1360 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1361 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1360);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1362;
$tmp1362 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1362->value = $tmp1361;
ITable* $tmp1363 = ((frost$core$Equatable*) $tmp1359)->$class->itable;
while ($tmp1363->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1363 = $tmp1363->next;
}
$fn1365 $tmp1364 = $tmp1363->methods[0];
frost$core$Bit $tmp1366 = $tmp1364(((frost$core$Equatable*) $tmp1359), ((frost$core$Equatable*) $tmp1362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1362)));
// unreffing REF($63:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1359)));
// unreffing REF($59:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local0) = $tmp1366;
goto block9;
block9:;
frost$core$Bit $tmp1367 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1327)));
// unreffing REF($6:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1324)));
// unreffing REF($2:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
bool $tmp1368 = $tmp1367.value;
if ($tmp1368) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1369 = (frost$core$Int64) {630};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1370, $tmp1369, &$s1371);
abort(); // unreachable
block10:;
// line 631
org$frostlang$frostc$FixedArray** $tmp1372 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1373 = *$tmp1372;
frost$core$Bit $tmp1374 = frost$core$Bit$init$builtin_bit($tmp1373 != NULL);
bool $tmp1375 = $tmp1374.value;
if ($tmp1375) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1376 = (frost$core$Int64) {631};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1377, $tmp1376, &$s1378);
abort(); // unreachable
block12:;
ITable* $tmp1379 = ((frost$collections$CollectionView*) $tmp1373)->$class->itable;
while ($tmp1379->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1379 = $tmp1379->next;
}
$fn1381 $tmp1380 = $tmp1379->methods[0];
frost$core$Int64 $tmp1382 = $tmp1380(((frost$collections$CollectionView*) $tmp1373));
frost$core$Int64 $tmp1383 = (frost$core$Int64) {1};
int64_t $tmp1384 = $tmp1382.value;
int64_t $tmp1385 = $tmp1383.value;
int64_t $tmp1386 = $tmp1384 - $tmp1385;
frost$core$Int64 $tmp1387 = (frost$core$Int64) {$tmp1386};
return $tmp1387;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
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
bool $tmp1398 = $tmp1397.value;
if ($tmp1398) goto block1; else goto block2;
block1:;
*(&local4) = $tmp1397;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1399 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1400 = *$tmp1399;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1401;
$tmp1401 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1401->value = $tmp1400;
frost$core$Int64 $tmp1402 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1403 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1402);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1404;
$tmp1404 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1404->value = $tmp1403;
ITable* $tmp1405 = ((frost$core$Equatable*) $tmp1401)->$class->itable;
while ($tmp1405->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1405 = $tmp1405->next;
}
$fn1407 $tmp1406 = $tmp1405->methods[0];
frost$core$Bit $tmp1408 = $tmp1406(((frost$core$Equatable*) $tmp1401), ((frost$core$Equatable*) $tmp1404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1404)));
// unreffing REF($19:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1401)));
// unreffing REF($15:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local4) = $tmp1408;
goto block3;
block3:;
frost$core$Bit $tmp1409 = *(&local4);
bool $tmp1410 = $tmp1409.value;
if ($tmp1410) goto block4; else goto block5;
block4:;
*(&local3) = $tmp1409;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1411 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1412 = *$tmp1411;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1413;
$tmp1413 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1413->value = $tmp1412;
frost$core$Int64 $tmp1414 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1415 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1414);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1416;
$tmp1416 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1416->value = $tmp1415;
ITable* $tmp1417 = ((frost$core$Equatable*) $tmp1413)->$class->itable;
while ($tmp1417->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1417 = $tmp1417->next;
}
$fn1419 $tmp1418 = $tmp1417->methods[0];
frost$core$Bit $tmp1420 = $tmp1418(((frost$core$Equatable*) $tmp1413), ((frost$core$Equatable*) $tmp1416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1416)));
// unreffing REF($41:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1413)));
// unreffing REF($37:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local3) = $tmp1420;
goto block6;
block6:;
frost$core$Bit $tmp1421 = *(&local3);
bool $tmp1422 = $tmp1421.value;
if ($tmp1422) goto block7; else goto block8;
block7:;
*(&local2) = $tmp1421;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1423 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1424 = *$tmp1423;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1425;
$tmp1425 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1425->value = $tmp1424;
frost$core$Int64 $tmp1426 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1427 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1426);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1428;
$tmp1428 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1428->value = $tmp1427;
ITable* $tmp1429 = ((frost$core$Equatable*) $tmp1425)->$class->itable;
while ($tmp1429->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1429 = $tmp1429->next;
}
$fn1431 $tmp1430 = $tmp1429->methods[0];
frost$core$Bit $tmp1432 = $tmp1430(((frost$core$Equatable*) $tmp1425), ((frost$core$Equatable*) $tmp1428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1428)));
// unreffing REF($63:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1425)));
// unreffing REF($59:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local2) = $tmp1432;
goto block9;
block9:;
frost$core$Bit $tmp1433 = *(&local2);
bool $tmp1434 = $tmp1433.value;
if ($tmp1434) goto block10; else goto block11;
block10:;
frost$core$Int64 $tmp1435 = (frost$core$Int64) {0};
int64_t $tmp1436 = param1.value;
int64_t $tmp1437 = $tmp1435.value;
bool $tmp1438 = $tmp1436 >= $tmp1437;
frost$core$Bit $tmp1439 = (frost$core$Bit) {$tmp1438};
*(&local1) = $tmp1439;
goto block12;
block11:;
*(&local1) = $tmp1433;
goto block12;
block12:;
frost$core$Bit $tmp1440 = *(&local1);
bool $tmp1441 = $tmp1440.value;
if ($tmp1441) goto block13; else goto block14;
block13:;
org$frostlang$frostc$FixedArray** $tmp1442 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1443 = *$tmp1442;
frost$core$Bit $tmp1444 = frost$core$Bit$init$builtin_bit($tmp1443 != NULL);
bool $tmp1445 = $tmp1444.value;
if ($tmp1445) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp1446 = (frost$core$Int64) {635};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1447, $tmp1446, &$s1448);
abort(); // unreachable
block16:;
ITable* $tmp1449 = ((frost$collections$CollectionView*) $tmp1443)->$class->itable;
while ($tmp1449->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1449 = $tmp1449->next;
}
$fn1451 $tmp1450 = $tmp1449->methods[0];
frost$core$Int64 $tmp1452 = $tmp1450(((frost$collections$CollectionView*) $tmp1443));
frost$core$Int64 $tmp1453 = (frost$core$Int64) {1};
int64_t $tmp1454 = $tmp1452.value;
int64_t $tmp1455 = $tmp1453.value;
int64_t $tmp1456 = $tmp1454 - $tmp1455;
frost$core$Int64 $tmp1457 = (frost$core$Int64) {$tmp1456};
int64_t $tmp1458 = param1.value;
int64_t $tmp1459 = $tmp1457.value;
bool $tmp1460 = $tmp1458 < $tmp1459;
frost$core$Bit $tmp1461 = (frost$core$Bit) {$tmp1460};
*(&local0) = $tmp1461;
goto block15;
block14:;
*(&local0) = $tmp1440;
goto block15;
block15:;
frost$core$Bit $tmp1462 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1393)));
// unreffing REF($6:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1390)));
// unreffing REF($2:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
bool $tmp1463 = $tmp1462.value;
if ($tmp1463) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1464 = (frost$core$Int64) {636};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1465, $tmp1464, &$s1466);
abort(); // unreachable
block18:;
// line 637
org$frostlang$frostc$FixedArray** $tmp1467 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1468 = *$tmp1467;
frost$core$Bit $tmp1469 = frost$core$Bit$init$builtin_bit($tmp1468 != NULL);
bool $tmp1470 = $tmp1469.value;
if ($tmp1470) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp1471 = (frost$core$Int64) {637};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1472, $tmp1471, &$s1473);
abort(); // unreachable
block20:;
frost$core$Object* $tmp1474 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1468, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1474)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1474);
// unreffing REF($138:org.frostlang.frostc.FixedArray.T)
return ((org$frostlang$frostc$Type*) $tmp1474);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind* $tmp1475 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1476 = *$tmp1475;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1477;
$tmp1477 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1477->value = $tmp1476;
frost$core$Int64 $tmp1478 = (frost$core$Int64) {15};
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
if ($tmp1485) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1484;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1486 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1487 = *$tmp1486;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1488;
$tmp1488 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1488->value = $tmp1487;
frost$core$Int64 $tmp1489 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1490 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1489);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1491;
$tmp1491 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1491->value = $tmp1490;
ITable* $tmp1492 = ((frost$core$Equatable*) $tmp1488)->$class->itable;
while ($tmp1492->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1492 = $tmp1492->next;
}
$fn1494 $tmp1493 = $tmp1492->methods[0];
frost$core$Bit $tmp1495 = $tmp1493(((frost$core$Equatable*) $tmp1488), ((frost$core$Equatable*) $tmp1491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1491)));
// unreffing REF($19:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1488)));
// unreffing REF($15:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local2) = $tmp1495;
goto block3;
block3:;
frost$core$Bit $tmp1496 = *(&local2);
bool $tmp1497 = $tmp1496.value;
if ($tmp1497) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1496;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1498 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1499 = *$tmp1498;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1500;
$tmp1500 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1500->value = $tmp1499;
frost$core$Int64 $tmp1501 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1502 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1501);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1503;
$tmp1503 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1503->value = $tmp1502;
ITable* $tmp1504 = ((frost$core$Equatable*) $tmp1500)->$class->itable;
while ($tmp1504->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1504 = $tmp1504->next;
}
$fn1506 $tmp1505 = $tmp1504->methods[0];
frost$core$Bit $tmp1507 = $tmp1505(((frost$core$Equatable*) $tmp1500), ((frost$core$Equatable*) $tmp1503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1503)));
// unreffing REF($41:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1500)));
// unreffing REF($37:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local1) = $tmp1507;
goto block6;
block6:;
frost$core$Bit $tmp1508 = *(&local1);
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1508;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1510 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1511 = *$tmp1510;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1512;
$tmp1512 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1512->value = $tmp1511;
frost$core$Int64 $tmp1513 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1514 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1513);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1515;
$tmp1515 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1515->value = $tmp1514;
ITable* $tmp1516 = ((frost$core$Equatable*) $tmp1512)->$class->itable;
while ($tmp1516->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1516 = $tmp1516->next;
}
$fn1518 $tmp1517 = $tmp1516->methods[0];
frost$core$Bit $tmp1519 = $tmp1517(((frost$core$Equatable*) $tmp1512), ((frost$core$Equatable*) $tmp1515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1515)));
// unreffing REF($63:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1512)));
// unreffing REF($59:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local0) = $tmp1519;
goto block9;
block9:;
frost$core$Bit $tmp1520 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1480)));
// unreffing REF($6:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1477)));
// unreffing REF($2:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
bool $tmp1521 = $tmp1520.value;
if ($tmp1521) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1522 = (frost$core$Int64) {642};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1523, $tmp1522, &$s1524);
abort(); // unreachable
block10:;
// line 643
org$frostlang$frostc$FixedArray** $tmp1525 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1526 = *$tmp1525;
frost$core$Bit $tmp1527 = frost$core$Bit$init$builtin_bit($tmp1526 != NULL);
bool $tmp1528 = $tmp1527.value;
if ($tmp1528) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1529 = (frost$core$Int64) {643};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1530, $tmp1529, &$s1531);
abort(); // unreachable
block12:;
org$frostlang$frostc$FixedArray** $tmp1532 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1533 = *$tmp1532;
frost$core$Bit $tmp1534 = frost$core$Bit$init$builtin_bit($tmp1533 != NULL);
bool $tmp1535 = $tmp1534.value;
if ($tmp1535) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp1536 = (frost$core$Int64) {643};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1537, $tmp1536, &$s1538);
abort(); // unreachable
block14:;
ITable* $tmp1539 = ((frost$collections$CollectionView*) $tmp1533)->$class->itable;
while ($tmp1539->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1539 = $tmp1539->next;
}
$fn1541 $tmp1540 = $tmp1539->methods[0];
frost$core$Int64 $tmp1542 = $tmp1540(((frost$collections$CollectionView*) $tmp1533));
frost$core$Int64 $tmp1543 = (frost$core$Int64) {1};
int64_t $tmp1544 = $tmp1542.value;
int64_t $tmp1545 = $tmp1543.value;
int64_t $tmp1546 = $tmp1544 - $tmp1545;
frost$core$Int64 $tmp1547 = (frost$core$Int64) {$tmp1546};
frost$core$Object* $tmp1548 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1526, $tmp1547);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1548)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1548);
// unreffing REF($115:org.frostlang.frostc.FixedArray.T)
return ((org$frostlang$frostc$Type*) $tmp1548);

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
// line 650
frost$core$Bit $tmp1549 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param2);
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block1; else goto block2;
block1:;
// line 651
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 653
org$frostlang$frostc$Type* $tmp1551 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1552 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1551);
bool $tmp1553 = $tmp1552.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
// unreffing REF($9:org.frostlang.frostc.Type)
if ($tmp1553) goto block3; else goto block4;
block3:;
// line 654
org$frostlang$frostc$Type$Kind* $tmp1554 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1555 = *$tmp1554;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1556;
$tmp1556 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1556->value = $tmp1555;
frost$core$Int64 $tmp1557 = (frost$core$Int64) {1};
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
// unreffing REF($23:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1556)));
// unreffing REF($19:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1564) goto block5; else goto block6;
block5:;
// line 655
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block6:;
// line 657
org$frostlang$frostc$Type* $tmp1565 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
// unreffing REF($39:org.frostlang.frostc.Type)
return $tmp1565;
block4:;
// line 659
org$frostlang$frostc$Type* $tmp1566 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1567 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param2, $tmp1566);
bool $tmp1568 = $tmp1567.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
// unreffing REF($47:org.frostlang.frostc.Type)
if ($tmp1568) goto block7; else goto block8;
block7:;
// line 660
org$frostlang$frostc$Type$Kind* $tmp1569 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1570 = *$tmp1569;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1571;
$tmp1571 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1571->value = $tmp1570;
frost$core$Int64 $tmp1572 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1573 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1572);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1574;
$tmp1574 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1574->value = $tmp1573;
ITable* $tmp1575 = ((frost$core$Equatable*) $tmp1571)->$class->itable;
while ($tmp1575->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1575 = $tmp1575->next;
}
$fn1577 $tmp1576 = $tmp1575->methods[0];
frost$core$Bit $tmp1578 = $tmp1576(((frost$core$Equatable*) $tmp1571), ((frost$core$Equatable*) $tmp1574));
bool $tmp1579 = $tmp1578.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1574)));
// unreffing REF($61:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1571)));
// unreffing REF($57:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1579) goto block9; else goto block10;
block9:;
// line 661
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block10:;
// line 663
org$frostlang$frostc$Type* $tmp1580 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
// unreffing REF($77:org.frostlang.frostc.Type)
return $tmp1580;
block8:;
// line 665
org$frostlang$frostc$Type$Kind* $tmp1581 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1582 = *$tmp1581;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1583;
$tmp1583 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1583->value = $tmp1582;
frost$core$Int64 $tmp1584 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1585 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1584);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1586;
$tmp1586 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1586->value = $tmp1585;
ITable* $tmp1587 = ((frost$core$Equatable*) $tmp1583)->$class->itable;
while ($tmp1587->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1587 = $tmp1587->next;
}
$fn1589 $tmp1588 = $tmp1587->methods[0];
frost$core$Bit $tmp1590 = $tmp1588(((frost$core$Equatable*) $tmp1583), ((frost$core$Equatable*) $tmp1586));
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block13; else goto block14;
block13:;
frost$core$Bit $tmp1592 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
*(&local0) = $tmp1592;
goto block15;
block14:;
*(&local0) = $tmp1590;
goto block15;
block15:;
frost$core$Bit $tmp1593 = *(&local0);
bool $tmp1594 = $tmp1593.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1586)));
// unreffing REF($91:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1583)));
// unreffing REF($87:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1594) goto block11; else goto block12;
block11:;
// line 666
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block12:;
// line 668
frost$core$Bit $tmp1595 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1596 = $tmp1595.value;
if ($tmp1596) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Type$Kind* $tmp1597 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1598 = *$tmp1597;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1599;
$tmp1599 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1599->value = $tmp1598;
frost$core$Int64 $tmp1600 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1601 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1600);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1602;
$tmp1602 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1602->value = $tmp1601;
ITable* $tmp1603 = ((frost$core$Equatable*) $tmp1599)->$class->itable;
while ($tmp1603->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1603 = $tmp1603->next;
}
$fn1605 $tmp1604 = $tmp1603->methods[0];
frost$core$Bit $tmp1606 = $tmp1604(((frost$core$Equatable*) $tmp1599), ((frost$core$Equatable*) $tmp1602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1602)));
// unreffing REF($124:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1599)));
// unreffing REF($120:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local1) = $tmp1606;
goto block20;
block19:;
*(&local1) = $tmp1595;
goto block20;
block20:;
frost$core$Bit $tmp1607 = *(&local1);
bool $tmp1608 = $tmp1607.value;
if ($tmp1608) goto block16; else goto block17;
block16:;
// line 669
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block17:;
// line 671
frost$core$Bit $tmp1609 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param0);
bool $tmp1610 = $tmp1609.value;
if ($tmp1610) goto block21; else goto block22;
block21:;
// line 672
org$frostlang$frostc$Type$Kind* $tmp1611 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1612 = *$tmp1611;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1613;
$tmp1613 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1613->value = $tmp1612;
frost$core$Int64 $tmp1614 = (frost$core$Int64) {5};
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
if ($tmp1621) goto block25; else goto block26;
block25:;
*(&local2) = $tmp1620;
goto block27;
block26:;
org$frostlang$frostc$Type$Kind* $tmp1622 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1623 = *$tmp1622;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1624;
$tmp1624 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1624->value = $tmp1623;
frost$core$Int64 $tmp1625 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp1626 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1625);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1627;
$tmp1627 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1627->value = $tmp1626;
ITable* $tmp1628 = ((frost$core$Equatable*) $tmp1624)->$class->itable;
while ($tmp1628->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1628 = $tmp1628->next;
}
$fn1630 $tmp1629 = $tmp1628->methods[0];
frost$core$Bit $tmp1631 = $tmp1629(((frost$core$Equatable*) $tmp1624), ((frost$core$Equatable*) $tmp1627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1627)));
// unreffing REF($168:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1624)));
// unreffing REF($164:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local2) = $tmp1631;
goto block27;
block27:;
frost$core$Bit $tmp1632 = *(&local2);
bool $tmp1633 = $tmp1632.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1616)));
// unreffing REF($155:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1613)));
// unreffing REF($151:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1633) goto block23; else goto block24;
block23:;
// line 673
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block24:;
// line 675
frost$core$Bit $tmp1634 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1635 = $tmp1634.value;
if ($tmp1635) goto block28; else goto block29;
block28:;
// line 676
frost$core$String** $tmp1636 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1637 = *$tmp1636;
frost$core$Bit $tmp1638 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1637, &$s1639);
bool $tmp1640 = $tmp1638.value;
if ($tmp1640) goto block30; else goto block31;
block30:;
// line 677
org$frostlang$frostc$Type* $tmp1641 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
// unreffing REF($204:org.frostlang.frostc.Type)
return $tmp1641;
block31:;
// line 679
org$frostlang$frostc$Type* $tmp1642 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
// unreffing REF($212:org.frostlang.frostc.Type)
return $tmp1642;
block29:;
goto block22;
block22:;
// line 682
frost$core$Bit $tmp1643 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param2);
bool $tmp1644 = $tmp1643.value;
if ($tmp1644) goto block32; else goto block33;
block32:;
// line 683
org$frostlang$frostc$Type$Kind* $tmp1645 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1646 = *$tmp1645;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1647;
$tmp1647 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1647->value = $tmp1646;
frost$core$Int64 $tmp1648 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1649 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1648);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1650;
$tmp1650 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1650->value = $tmp1649;
ITable* $tmp1651 = ((frost$core$Equatable*) $tmp1647)->$class->itable;
while ($tmp1651->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1651 = $tmp1651->next;
}
$fn1653 $tmp1652 = $tmp1651->methods[0];
frost$core$Bit $tmp1654 = $tmp1652(((frost$core$Equatable*) $tmp1647), ((frost$core$Equatable*) $tmp1650));
bool $tmp1655 = $tmp1654.value;
if ($tmp1655) goto block36; else goto block37;
block36:;
*(&local3) = $tmp1654;
goto block38;
block37:;
org$frostlang$frostc$Type$Kind* $tmp1656 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1657 = *$tmp1656;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1658;
$tmp1658 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1658->value = $tmp1657;
frost$core$Int64 $tmp1659 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp1660 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1659);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1661;
$tmp1661 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1661->value = $tmp1660;
ITable* $tmp1662 = ((frost$core$Equatable*) $tmp1658)->$class->itable;
while ($tmp1662->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1662 = $tmp1662->next;
}
$fn1664 $tmp1663 = $tmp1662->methods[0];
frost$core$Bit $tmp1665 = $tmp1663(((frost$core$Equatable*) $tmp1658), ((frost$core$Equatable*) $tmp1661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1661)));
// unreffing REF($244:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1658)));
// unreffing REF($240:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local3) = $tmp1665;
goto block38;
block38:;
frost$core$Bit $tmp1666 = *(&local3);
bool $tmp1667 = $tmp1666.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1650)));
// unreffing REF($231:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1647)));
// unreffing REF($227:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1667) goto block34; else goto block35;
block34:;
// line 684
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block35:;
// line 686
frost$core$Bit $tmp1668 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1669 = $tmp1668.value;
if ($tmp1669) goto block39; else goto block40;
block39:;
// line 687
frost$core$String** $tmp1670 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1671 = *$tmp1670;
frost$core$Bit $tmp1672 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1671, &$s1673);
bool $tmp1674 = $tmp1672.value;
if ($tmp1674) goto block41; else goto block42;
block41:;
// line 688
org$frostlang$frostc$Type* $tmp1675 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
// unreffing REF($280:org.frostlang.frostc.Type)
return $tmp1675;
block42:;
// line 690
org$frostlang$frostc$Type* $tmp1676 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
// unreffing REF($288:org.frostlang.frostc.Type)
return $tmp1676;
block40:;
goto block33;
block33:;
// line 693
org$frostlang$frostc$Type$Kind* $tmp1677 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1678 = *$tmp1677;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1679;
$tmp1679 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1679->value = $tmp1678;
frost$core$Int64 $tmp1680 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1681 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1680);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1682;
$tmp1682 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1682->value = $tmp1681;
ITable* $tmp1683 = ((frost$core$Equatable*) $tmp1679)->$class->itable;
while ($tmp1683->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1683 = $tmp1683->next;
}
$fn1685 $tmp1684 = $tmp1683->methods[0];
frost$core$Bit $tmp1686 = $tmp1684(((frost$core$Equatable*) $tmp1679), ((frost$core$Equatable*) $tmp1682));
bool $tmp1687 = $tmp1686.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1682)));
// unreffing REF($303:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1679)));
// unreffing REF($299:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1687) goto block43; else goto block44;
block43:;
// line 694
org$frostlang$frostc$FixedArray** $tmp1688 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1689 = *$tmp1688;
frost$core$Bit $tmp1690 = frost$core$Bit$init$builtin_bit($tmp1689 != NULL);
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp1692 = (frost$core$Int64) {694};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1693, $tmp1692, &$s1694);
abort(); // unreachable
block45:;
frost$core$Int64 $tmp1695 = (frost$core$Int64) {0};
frost$core$Object* $tmp1696 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1689, $tmp1695);
org$frostlang$frostc$Type* $tmp1697 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1696), param1, param2);
org$frostlang$frostc$Type* $tmp1698 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1697);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
// unreffing REF($330:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
// unreffing REF($329:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1696);
// unreffing REF($327:org.frostlang.frostc.FixedArray.T)
return $tmp1698;
block44:;
// line 696
org$frostlang$frostc$Type$Kind* $tmp1699 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1700 = *$tmp1699;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1701;
$tmp1701 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1701->value = $tmp1700;
frost$core$Int64 $tmp1702 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1703 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1702);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1704;
$tmp1704 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1704->value = $tmp1703;
ITable* $tmp1705 = ((frost$core$Equatable*) $tmp1701)->$class->itable;
while ($tmp1705->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1705 = $tmp1705->next;
}
$fn1707 $tmp1706 = $tmp1705->methods[0];
frost$core$Bit $tmp1708 = $tmp1706(((frost$core$Equatable*) $tmp1701), ((frost$core$Equatable*) $tmp1704));
bool $tmp1709 = $tmp1708.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1704)));
// unreffing REF($350:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1701)));
// unreffing REF($346:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1709) goto block47; else goto block48;
block47:;
// line 697
org$frostlang$frostc$FixedArray** $tmp1710 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1711 = *$tmp1710;
frost$core$Bit $tmp1712 = frost$core$Bit$init$builtin_bit($tmp1711 != NULL);
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp1714 = (frost$core$Int64) {697};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1715, $tmp1714, &$s1716);
abort(); // unreachable
block49:;
frost$core$Int64 $tmp1717 = (frost$core$Int64) {0};
frost$core$Object* $tmp1718 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1711, $tmp1717);
org$frostlang$frostc$Type* $tmp1719 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, param1, ((org$frostlang$frostc$Type*) $tmp1718));
org$frostlang$frostc$Type* $tmp1720 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1719);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
// unreffing REF($377:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
// unreffing REF($376:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1718);
// unreffing REF($374:org.frostlang.frostc.FixedArray.T)
return $tmp1720;
block48:;
// line 699
org$frostlang$frostc$Type* $tmp1721 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param0);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
org$frostlang$frostc$Type* $tmp1722 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
*(&local4) = $tmp1721;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
// unreffing REF($391:org.frostlang.frostc.Type)
// line 700
org$frostlang$frostc$Type* $tmp1723 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param2);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
org$frostlang$frostc$Type* $tmp1724 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
*(&local5) = $tmp1723;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
// unreffing REF($403:org.frostlang.frostc.Type)
// line 701
org$frostlang$frostc$Type* $tmp1725 = *(&local4);
frost$core$Bit $tmp1726 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1725);
bool $tmp1727 = $tmp1726.value;
if ($tmp1727) goto block53; else goto block54;
block53:;
org$frostlang$frostc$Type* $tmp1728 = *(&local5);
frost$core$Bit $tmp1729 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1728);
*(&local6) = $tmp1729;
goto block55;
block54:;
*(&local6) = $tmp1726;
goto block55;
block55:;
frost$core$Bit $tmp1730 = *(&local6);
bool $tmp1731 = $tmp1730.value;
if ($tmp1731) goto block51; else goto block52;
block51:;
// line 702
frost$collections$HashSet* $tmp1732 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp1732);
*(&local7) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
frost$collections$HashSet* $tmp1733 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
*(&local7) = $tmp1732;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
// unreffing REF($429:frost.collections.HashSet<org.frostlang.frostc.Type>)
// line 703
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1734 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
*(&local8) = param0;
// line 704
org$frostlang$frostc$Type* $tmp1735 = *(&local4);
org$frostlang$frostc$ClassDecl* $tmp1736 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1735);
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
org$frostlang$frostc$ClassDecl* $tmp1737 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
*(&local9) = $tmp1736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
// unreffing REF($452:org.frostlang.frostc.ClassDecl?)
// line 705
goto block56;
block56:;
org$frostlang$frostc$ClassDecl* $tmp1738 = *(&local9);
frost$core$Bit $tmp1739 = frost$core$Bit$init$builtin_bit($tmp1738 != NULL);
bool $tmp1740 = $tmp1739.value;
if ($tmp1740) goto block57; else goto block58;
block57:;
// line 706
frost$collections$HashSet* $tmp1741 = *(&local7);
org$frostlang$frostc$Type* $tmp1742 = *(&local8);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp1741, ((frost$collections$Key*) $tmp1742));
// line 707
org$frostlang$frostc$ClassDecl* $tmp1743 = *(&local9);
frost$core$Bit $tmp1744 = frost$core$Bit$init$builtin_bit($tmp1743 != NULL);
bool $tmp1745 = $tmp1744.value;
if ($tmp1745) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp1746 = (frost$core$Int64) {707};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1747, $tmp1746, &$s1748);
abort(); // unreachable
block61:;
org$frostlang$frostc$Type** $tmp1749 = &$tmp1743->rawSuper;
org$frostlang$frostc$Type* $tmp1750 = *$tmp1749;
frost$core$Bit $tmp1751 = frost$core$Bit$init$builtin_bit($tmp1750 != NULL);
bool $tmp1752 = $tmp1751.value;
if ($tmp1752) goto block59; else goto block63;
block59:;
// line 708
org$frostlang$frostc$Type* $tmp1753 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1754 = *(&local9);
frost$core$Bit $tmp1755 = frost$core$Bit$init$builtin_bit($tmp1754 != NULL);
bool $tmp1756 = $tmp1755.value;
if ($tmp1756) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp1757 = (frost$core$Int64) {708};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1758, $tmp1757, &$s1759);
abort(); // unreachable
block64:;
org$frostlang$frostc$Type** $tmp1760 = &$tmp1754->rawSuper;
org$frostlang$frostc$Type* $tmp1761 = *$tmp1760;
frost$core$Bit $tmp1762 = frost$core$Bit$init$builtin_bit($tmp1761 != NULL);
bool $tmp1763 = $tmp1762.value;
if ($tmp1763) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp1764 = (frost$core$Int64) {708};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1765, $tmp1764, &$s1766);
abort(); // unreachable
block66:;
org$frostlang$frostc$Type* $tmp1767 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1753, $tmp1761);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
org$frostlang$frostc$Type* $tmp1768 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
*(&local8) = $tmp1767;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
// unreffing REF($513:org.frostlang.frostc.Type)
// line 709
org$frostlang$frostc$Type* $tmp1769 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1770 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1769);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
org$frostlang$frostc$ClassDecl* $tmp1771 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
*(&local9) = $tmp1770;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
// unreffing REF($525:org.frostlang.frostc.ClassDecl?)
goto block60;
block63:;
// line 1
// line 712
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1772 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block60;
block60:;
goto block56;
block58:;
// line 715
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp1773 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
*(&local8) = param2;
// line 716
org$frostlang$frostc$Type* $tmp1774 = *(&local5);
org$frostlang$frostc$ClassDecl* $tmp1775 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1774);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
org$frostlang$frostc$ClassDecl* $tmp1776 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
*(&local9) = $tmp1775;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
// unreffing REF($555:org.frostlang.frostc.ClassDecl?)
// line 717
goto block68;
block68:;
org$frostlang$frostc$ClassDecl* $tmp1777 = *(&local9);
frost$core$Bit $tmp1778 = frost$core$Bit$init$builtin_bit($tmp1777 != NULL);
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block69; else goto block70;
block69:;
// line 718
frost$collections$HashSet* $tmp1780 = *(&local7);
org$frostlang$frostc$Type* $tmp1781 = *(&local8);
frost$core$Bit $tmp1782 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp1780, ((frost$collections$Key*) $tmp1781));
bool $tmp1783 = $tmp1782.value;
if ($tmp1783) goto block71; else goto block72;
block71:;
// line 719
org$frostlang$frostc$Type* $tmp1784 = *(&local8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
org$frostlang$frostc$ClassDecl* $tmp1785 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1785));
// unreffing cl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1786 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1786));
// unreffing t
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1787 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1787));
// unreffing ancestors
*(&local7) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$Type* $tmp1788 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
// unreffing t2
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1789 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
// unreffing t1
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1784;
block72:;
// line 721
org$frostlang$frostc$ClassDecl* $tmp1790 = *(&local9);
frost$core$Bit $tmp1791 = frost$core$Bit$init$builtin_bit($tmp1790 != NULL);
bool $tmp1792 = $tmp1791.value;
if ($tmp1792) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp1793 = (frost$core$Int64) {721};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1794, $tmp1793, &$s1795);
abort(); // unreachable
block75:;
org$frostlang$frostc$Type** $tmp1796 = &$tmp1790->rawSuper;
org$frostlang$frostc$Type* $tmp1797 = *$tmp1796;
frost$core$Bit $tmp1798 = frost$core$Bit$init$builtin_bit($tmp1797 != NULL);
bool $tmp1799 = $tmp1798.value;
if ($tmp1799) goto block73; else goto block77;
block73:;
// line 722
org$frostlang$frostc$Type* $tmp1800 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1801 = *(&local9);
frost$core$Bit $tmp1802 = frost$core$Bit$init$builtin_bit($tmp1801 != NULL);
bool $tmp1803 = $tmp1802.value;
if ($tmp1803) goto block78; else goto block79;
block79:;
frost$core$Int64 $tmp1804 = (frost$core$Int64) {722};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1805, $tmp1804, &$s1806);
abort(); // unreachable
block78:;
org$frostlang$frostc$Type** $tmp1807 = &$tmp1801->rawSuper;
org$frostlang$frostc$Type* $tmp1808 = *$tmp1807;
frost$core$Bit $tmp1809 = frost$core$Bit$init$builtin_bit($tmp1808 != NULL);
bool $tmp1810 = $tmp1809.value;
if ($tmp1810) goto block80; else goto block81;
block81:;
frost$core$Int64 $tmp1811 = (frost$core$Int64) {722};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1812, $tmp1811, &$s1813);
abort(); // unreachable
block80:;
org$frostlang$frostc$Type* $tmp1814 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1800, $tmp1808);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
org$frostlang$frostc$Type* $tmp1815 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
*(&local8) = $tmp1814;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
// unreffing REF($647:org.frostlang.frostc.Type)
// line 723
org$frostlang$frostc$Type* $tmp1816 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1817 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1816);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
org$frostlang$frostc$ClassDecl* $tmp1818 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
*(&local9) = $tmp1817;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
// unreffing REF($659:org.frostlang.frostc.ClassDecl?)
goto block74;
block77:;
// line 1
// line 726
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1819 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block74;
block74:;
goto block68;
block70:;
org$frostlang$frostc$ClassDecl* $tmp1820 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1820));
// unreffing cl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1821 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
// unreffing t
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1822 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
// unreffing ancestors
*(&local7) = ((frost$collections$HashSet*) NULL);
goto block52;
block52:;
// line 730
org$frostlang$frostc$Type* $tmp1823 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
// unreffing REF($697:org.frostlang.frostc.Type)
org$frostlang$frostc$Type* $tmp1824 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
// unreffing t2
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1825 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
// unreffing t1
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1823;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

// line 738
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$collections$HashMap* param1) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
frost$collections$Array* local4 = NULL;
frost$core$Int64 local5;
org$frostlang$frostc$Type$Kind* $tmp1826 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1827 = *$tmp1826;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1828;
$tmp1828 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1828->value = $tmp1827;
frost$core$Int64 $tmp1829 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1830 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1829);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1831;
$tmp1831 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1831->value = $tmp1830;
ITable* $tmp1832 = ((frost$core$Equatable*) $tmp1828)->$class->itable;
while ($tmp1832->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1832 = $tmp1832->next;
}
$fn1834 $tmp1833 = $tmp1832->methods[1];
frost$core$Bit $tmp1835 = $tmp1833(((frost$core$Equatable*) $tmp1828), ((frost$core$Equatable*) $tmp1831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1831)));
// unreffing REF($6:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1828)));
// unreffing REF($2:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
bool $tmp1836 = $tmp1835.value;
if ($tmp1836) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1837 = (frost$core$Int64) {743};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1838, $tmp1837, &$s1839);
abort(); // unreachable
block1:;
// line 744
ITable* $tmp1840 = ((frost$collections$MapView*) param1)->$class->itable;
while ($tmp1840->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1840 = $tmp1840->next;
}
$fn1842 $tmp1841 = $tmp1840->methods[0];
frost$core$Int64 $tmp1843 = $tmp1841(((frost$collections$MapView*) param1));
frost$core$Int64 $tmp1844 = (frost$core$Int64) {0};
frost$core$Bit $tmp1845 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1843, $tmp1844);
bool $tmp1846 = $tmp1845.value;
if ($tmp1846) goto block3; else goto block4;
block3:;
// line 745
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block4:;
// line 747
org$frostlang$frostc$Type$Kind* $tmp1847 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1848 = *$tmp1847;
frost$core$Int64 $tmp1849 = $tmp1848.$rawValue;
frost$core$Int64 $tmp1850 = (frost$core$Int64) {12};
frost$core$Bit $tmp1851 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1849, $tmp1850);
bool $tmp1852 = $tmp1851.value;
if ($tmp1852) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp1853 = (frost$core$Int64) {13};
frost$core$Bit $tmp1854 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1849, $tmp1853);
bool $tmp1855 = $tmp1854.value;
if ($tmp1855) goto block6; else goto block8;
block6:;
// line 749
frost$core$String** $tmp1856 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1857 = *$tmp1856;
frost$core$Object* $tmp1858 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param1, ((frost$collections$Key*) $tmp1857));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1858)));
org$frostlang$frostc$Type* $tmp1859 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1858);
frost$core$Frost$unref$frost$core$Object$Q($tmp1858);
// unreffing REF($50:frost.collections.HashMap.V?)
// line 750
org$frostlang$frostc$Type* $tmp1860 = *(&local0);
frost$core$Bit $tmp1861 = frost$core$Bit$init$builtin_bit($tmp1860 != NULL);
bool $tmp1862 = $tmp1861.value;
if ($tmp1862) goto block9; else goto block10;
block9:;
// line 751
org$frostlang$frostc$Type* $tmp1863 = *(&local0);
frost$core$Bit $tmp1864 = frost$core$Bit$init$builtin_bit($tmp1863 != NULL);
bool $tmp1865 = $tmp1864.value;
if ($tmp1865) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1866 = (frost$core$Int64) {751};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1867, $tmp1866, &$s1868);
abort(); // unreachable
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
org$frostlang$frostc$Type* $tmp1869 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
// unreffing found
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1863;
block10:;
// line 753
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1870 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
// unreffing found
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return param0;
block8:;
frost$core$Int64 $tmp1871 = (frost$core$Int64) {11};
frost$core$Bit $tmp1872 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1849, $tmp1871);
bool $tmp1873 = $tmp1872.value;
if ($tmp1873) goto block13; else goto block14;
block13:;
// line 756
org$frostlang$frostc$FixedArray** $tmp1874 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1875 = *$tmp1874;
frost$core$Bit $tmp1876 = frost$core$Bit$init$builtin_bit($tmp1875 != NULL);
bool $tmp1877 = $tmp1876.value;
if ($tmp1877) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp1878 = (frost$core$Int64) {756};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1879, $tmp1878, &$s1880);
abort(); // unreachable
block15:;
frost$core$Int64 $tmp1881 = (frost$core$Int64) {0};
frost$core$Object* $tmp1882 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1875, $tmp1881);
org$frostlang$frostc$Type* $tmp1883 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1882), param1);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
org$frostlang$frostc$Type* $tmp1884 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1884));
*(&local1) = $tmp1883;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
// unreffing REF($114:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1882);
// unreffing REF($112:org.frostlang.frostc.FixedArray.T)
// line 757
frost$collections$Array* $tmp1885 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1885);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
frost$collections$Array* $tmp1886 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
*(&local2) = $tmp1885;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
// unreffing REF($129:frost.collections.Array<org.frostlang.frostc.Type>)
// line 758
frost$core$Int64 $tmp1887 = (frost$core$Int64) {1};
org$frostlang$frostc$FixedArray** $tmp1888 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1889 = *$tmp1888;
frost$core$Bit $tmp1890 = frost$core$Bit$init$builtin_bit($tmp1889 != NULL);
bool $tmp1891 = $tmp1890.value;
if ($tmp1891) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp1892 = (frost$core$Int64) {758};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1893, $tmp1892, &$s1894);
abort(); // unreachable
block17:;
ITable* $tmp1895 = ((frost$collections$CollectionView*) $tmp1889)->$class->itable;
while ($tmp1895->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1895 = $tmp1895->next;
}
$fn1897 $tmp1896 = $tmp1895->methods[0];
frost$core$Int64 $tmp1898 = $tmp1896(((frost$collections$CollectionView*) $tmp1889));
frost$core$Bit $tmp1899 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1900 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1887, $tmp1898, $tmp1899);
frost$core$Int64 $tmp1901 = $tmp1900.min;
*(&local3) = $tmp1901;
frost$core$Int64 $tmp1902 = $tmp1900.max;
frost$core$Bit $tmp1903 = $tmp1900.inclusive;
bool $tmp1904 = $tmp1903.value;
frost$core$Int64 $tmp1905 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1906 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1905);
if ($tmp1904) goto block22; else goto block23;
block22:;
int64_t $tmp1907 = $tmp1901.value;
int64_t $tmp1908 = $tmp1902.value;
bool $tmp1909 = $tmp1907 <= $tmp1908;
frost$core$Bit $tmp1910 = (frost$core$Bit) {$tmp1909};
bool $tmp1911 = $tmp1910.value;
if ($tmp1911) goto block19; else goto block20;
block23:;
int64_t $tmp1912 = $tmp1901.value;
int64_t $tmp1913 = $tmp1902.value;
bool $tmp1914 = $tmp1912 < $tmp1913;
frost$core$Bit $tmp1915 = (frost$core$Bit) {$tmp1914};
bool $tmp1916 = $tmp1915.value;
if ($tmp1916) goto block19; else goto block20;
block19:;
// line 759
frost$collections$Array* $tmp1917 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp1918 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1919 = *$tmp1918;
frost$core$Bit $tmp1920 = frost$core$Bit$init$builtin_bit($tmp1919 != NULL);
bool $tmp1921 = $tmp1920.value;
if ($tmp1921) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp1922 = (frost$core$Int64) {759};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1923, $tmp1922, &$s1924);
abort(); // unreachable
block24:;
frost$core$Int64 $tmp1925 = *(&local3);
frost$core$Object* $tmp1926 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1919, $tmp1925);
org$frostlang$frostc$Type* $tmp1927 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1926), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1917, ((frost$core$Object*) $tmp1927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
// unreffing REF($195:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1926);
// unreffing REF($193:org.frostlang.frostc.FixedArray.T)
goto block21;
block21:;
frost$core$Int64 $tmp1928 = *(&local3);
int64_t $tmp1929 = $tmp1902.value;
int64_t $tmp1930 = $tmp1928.value;
int64_t $tmp1931 = $tmp1929 - $tmp1930;
frost$core$Int64 $tmp1932 = (frost$core$Int64) {$tmp1931};
frost$core$UInt64 $tmp1933 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1932);
if ($tmp1904) goto block27; else goto block28;
block27:;
uint64_t $tmp1934 = $tmp1933.value;
uint64_t $tmp1935 = $tmp1906.value;
bool $tmp1936 = $tmp1934 >= $tmp1935;
frost$core$Bit $tmp1937 = (frost$core$Bit) {$tmp1936};
bool $tmp1938 = $tmp1937.value;
if ($tmp1938) goto block26; else goto block20;
block28:;
uint64_t $tmp1939 = $tmp1933.value;
uint64_t $tmp1940 = $tmp1906.value;
bool $tmp1941 = $tmp1939 > $tmp1940;
frost$core$Bit $tmp1942 = (frost$core$Bit) {$tmp1941};
bool $tmp1943 = $tmp1942.value;
if ($tmp1943) goto block26; else goto block20;
block26:;
int64_t $tmp1944 = $tmp1928.value;
int64_t $tmp1945 = $tmp1905.value;
int64_t $tmp1946 = $tmp1944 + $tmp1945;
frost$core$Int64 $tmp1947 = (frost$core$Int64) {$tmp1946};
*(&local3) = $tmp1947;
goto block19;
block20:;
// line 761
org$frostlang$frostc$Type* $tmp1948 = *(&local1);
frost$collections$Array* $tmp1949 = *(&local2);
org$frostlang$frostc$Type* $tmp1950 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1948, ((frost$collections$ListView*) $tmp1949));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
// unreffing REF($234:org.frostlang.frostc.Type)
frost$collections$Array* $tmp1951 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1951));
// unreffing remappedArgs
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1952 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
// unreffing base
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1950;
block14:;
frost$core$Int64 $tmp1953 = (frost$core$Int64) {1};
frost$core$Bit $tmp1954 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1849, $tmp1953);
bool $tmp1955 = $tmp1954.value;
if ($tmp1955) goto block29; else goto block30;
block29:;
// line 764
org$frostlang$frostc$FixedArray** $tmp1956 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1957 = *$tmp1956;
frost$core$Bit $tmp1958 = frost$core$Bit$init$builtin_bit($tmp1957 != NULL);
bool $tmp1959 = $tmp1958.value;
if ($tmp1959) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp1960 = (frost$core$Int64) {764};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1961, $tmp1960, &$s1962);
abort(); // unreachable
block31:;
frost$core$Int64 $tmp1963 = (frost$core$Int64) {0};
frost$core$Object* $tmp1964 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1957, $tmp1963);
org$frostlang$frostc$Type* $tmp1965 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1964), param1);
org$frostlang$frostc$Type* $tmp1966 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1965);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
// unreffing REF($271:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
// unreffing REF($270:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1964);
// unreffing REF($268:org.frostlang.frostc.FixedArray.T)
return $tmp1966;
block30:;
frost$core$Int64 $tmp1967 = (frost$core$Int64) {16};
frost$core$Bit $tmp1968 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1849, $tmp1967);
bool $tmp1969 = $tmp1968.value;
if ($tmp1969) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp1970 = (frost$core$Int64) {15};
frost$core$Bit $tmp1971 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1849, $tmp1970);
bool $tmp1972 = $tmp1971.value;
if ($tmp1972) goto block33; else goto block35;
block35:;
frost$core$Int64 $tmp1973 = (frost$core$Int64) {18};
frost$core$Bit $tmp1974 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1849, $tmp1973);
bool $tmp1975 = $tmp1974.value;
if ($tmp1975) goto block33; else goto block36;
block36:;
frost$core$Int64 $tmp1976 = (frost$core$Int64) {17};
frost$core$Bit $tmp1977 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1849, $tmp1976);
bool $tmp1978 = $tmp1977.value;
if ($tmp1978) goto block33; else goto block37;
block33:;
// line 767
frost$collections$Array* $tmp1979 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1979);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
frost$collections$Array* $tmp1980 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
*(&local4) = $tmp1979;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
// unreffing REF($301:frost.collections.Array<org.frostlang.frostc.Type>)
// line 768
org$frostlang$frostc$FixedArray** $tmp1981 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1982 = *$tmp1981;
frost$core$Bit $tmp1983 = frost$core$Bit$init$builtin_bit($tmp1982 != NULL);
bool $tmp1984 = $tmp1983.value;
if ($tmp1984) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp1985 = (frost$core$Int64) {768};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1986, $tmp1985, &$s1987);
abort(); // unreachable
block38:;
ITable* $tmp1988 = ((frost$collections$CollectionView*) $tmp1982)->$class->itable;
while ($tmp1988->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1988 = $tmp1988->next;
}
$fn1990 $tmp1989 = $tmp1988->methods[0];
frost$core$Int64 $tmp1991 = $tmp1989(((frost$collections$CollectionView*) $tmp1982));
frost$core$Int64 $tmp1992 = (frost$core$Int64) {1};
int64_t $tmp1993 = $tmp1991.value;
int64_t $tmp1994 = $tmp1992.value;
bool $tmp1995 = $tmp1993 >= $tmp1994;
frost$core$Bit $tmp1996 = (frost$core$Bit) {$tmp1995};
bool $tmp1997 = $tmp1996.value;
if ($tmp1997) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp1998 = (frost$core$Int64) {768};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1999, $tmp1998);
abort(); // unreachable
block40:;
// line 769
frost$core$Int64 $tmp2000 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp2001 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp2002 = *$tmp2001;
frost$core$Bit $tmp2003 = frost$core$Bit$init$builtin_bit($tmp2002 != NULL);
bool $tmp2004 = $tmp2003.value;
if ($tmp2004) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp2005 = (frost$core$Int64) {769};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2006, $tmp2005, &$s2007);
abort(); // unreachable
block42:;
ITable* $tmp2008 = ((frost$collections$CollectionView*) $tmp2002)->$class->itable;
while ($tmp2008->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2008 = $tmp2008->next;
}
$fn2010 $tmp2009 = $tmp2008->methods[0];
frost$core$Int64 $tmp2011 = $tmp2009(((frost$collections$CollectionView*) $tmp2002));
frost$core$Int64 $tmp2012 = (frost$core$Int64) {1};
int64_t $tmp2013 = $tmp2011.value;
int64_t $tmp2014 = $tmp2012.value;
int64_t $tmp2015 = $tmp2013 - $tmp2014;
frost$core$Int64 $tmp2016 = (frost$core$Int64) {$tmp2015};
frost$core$Bit $tmp2017 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2018 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2000, $tmp2016, $tmp2017);
frost$core$Int64 $tmp2019 = $tmp2018.min;
*(&local5) = $tmp2019;
frost$core$Int64 $tmp2020 = $tmp2018.max;
frost$core$Bit $tmp2021 = $tmp2018.inclusive;
bool $tmp2022 = $tmp2021.value;
frost$core$Int64 $tmp2023 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2024 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2023);
if ($tmp2022) goto block47; else goto block48;
block47:;
int64_t $tmp2025 = $tmp2019.value;
int64_t $tmp2026 = $tmp2020.value;
bool $tmp2027 = $tmp2025 <= $tmp2026;
frost$core$Bit $tmp2028 = (frost$core$Bit) {$tmp2027};
bool $tmp2029 = $tmp2028.value;
if ($tmp2029) goto block44; else goto block45;
block48:;
int64_t $tmp2030 = $tmp2019.value;
int64_t $tmp2031 = $tmp2020.value;
bool $tmp2032 = $tmp2030 < $tmp2031;
frost$core$Bit $tmp2033 = (frost$core$Bit) {$tmp2032};
bool $tmp2034 = $tmp2033.value;
if ($tmp2034) goto block44; else goto block45;
block44:;
// line 770
frost$collections$Array* $tmp2035 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp2036 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp2037 = *$tmp2036;
frost$core$Bit $tmp2038 = frost$core$Bit$init$builtin_bit($tmp2037 != NULL);
bool $tmp2039 = $tmp2038.value;
if ($tmp2039) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp2040 = (frost$core$Int64) {770};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2041, $tmp2040, &$s2042);
abort(); // unreachable
block49:;
frost$core$Int64 $tmp2043 = *(&local5);
frost$core$Object* $tmp2044 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2037, $tmp2043);
org$frostlang$frostc$Type* $tmp2045 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2044), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp2035, ((frost$core$Object*) $tmp2045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
// unreffing REF($395:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2044);
// unreffing REF($393:org.frostlang.frostc.FixedArray.T)
goto block46;
block46:;
frost$core$Int64 $tmp2046 = *(&local5);
int64_t $tmp2047 = $tmp2020.value;
int64_t $tmp2048 = $tmp2046.value;
int64_t $tmp2049 = $tmp2047 - $tmp2048;
frost$core$Int64 $tmp2050 = (frost$core$Int64) {$tmp2049};
frost$core$UInt64 $tmp2051 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2050);
if ($tmp2022) goto block52; else goto block53;
block52:;
uint64_t $tmp2052 = $tmp2051.value;
uint64_t $tmp2053 = $tmp2024.value;
bool $tmp2054 = $tmp2052 >= $tmp2053;
frost$core$Bit $tmp2055 = (frost$core$Bit) {$tmp2054};
bool $tmp2056 = $tmp2055.value;
if ($tmp2056) goto block51; else goto block45;
block53:;
uint64_t $tmp2057 = $tmp2051.value;
uint64_t $tmp2058 = $tmp2024.value;
bool $tmp2059 = $tmp2057 > $tmp2058;
frost$core$Bit $tmp2060 = (frost$core$Bit) {$tmp2059};
bool $tmp2061 = $tmp2060.value;
if ($tmp2061) goto block51; else goto block45;
block51:;
int64_t $tmp2062 = $tmp2046.value;
int64_t $tmp2063 = $tmp2023.value;
int64_t $tmp2064 = $tmp2062 + $tmp2063;
frost$core$Int64 $tmp2065 = (frost$core$Int64) {$tmp2064};
*(&local5) = $tmp2065;
goto block44;
block45:;
// line 772
org$frostlang$frostc$Position* $tmp2066 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp2067 = *$tmp2066;
org$frostlang$frostc$Type$Kind* $tmp2068 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2069 = *$tmp2068;
frost$collections$Array* $tmp2070 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp2071 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp2072 = *$tmp2071;
frost$core$Bit $tmp2073 = frost$core$Bit$init$builtin_bit($tmp2072 != NULL);
bool $tmp2074 = $tmp2073.value;
if ($tmp2074) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp2075 = (frost$core$Int64) {773};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2076, $tmp2075, &$s2077);
abort(); // unreachable
block54:;
org$frostlang$frostc$FixedArray** $tmp2078 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp2079 = *$tmp2078;
frost$core$Bit $tmp2080 = frost$core$Bit$init$builtin_bit($tmp2079 != NULL);
bool $tmp2081 = $tmp2080.value;
if ($tmp2081) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp2082 = (frost$core$Int64) {773};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2083, $tmp2082, &$s2084);
abort(); // unreachable
block56:;
ITable* $tmp2085 = ((frost$collections$CollectionView*) $tmp2079)->$class->itable;
while ($tmp2085->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2085 = $tmp2085->next;
}
$fn2087 $tmp2086 = $tmp2085->methods[0];
frost$core$Int64 $tmp2088 = $tmp2086(((frost$collections$CollectionView*) $tmp2079));
frost$core$Int64 $tmp2089 = (frost$core$Int64) {1};
int64_t $tmp2090 = $tmp2088.value;
int64_t $tmp2091 = $tmp2089.value;
int64_t $tmp2092 = $tmp2090 - $tmp2091;
frost$core$Int64 $tmp2093 = (frost$core$Int64) {$tmp2092};
frost$core$Object* $tmp2094 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2072, $tmp2093);
org$frostlang$frostc$Type* $tmp2095 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2094), param1);
frost$core$Int64* $tmp2096 = &param0->priority;
frost$core$Int64 $tmp2097 = *$tmp2096;
org$frostlang$frostc$Type* $tmp2098 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp2067, $tmp2069, ((frost$collections$ListView*) $tmp2070), $tmp2095, $tmp2097);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
// unreffing REF($471:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
// unreffing REF($468:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2094);
// unreffing REF($466:org.frostlang.frostc.FixedArray.T)
frost$collections$Array* $tmp2099 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
// unreffing parameters
*(&local4) = ((frost$collections$Array*) NULL);
return $tmp2098;
block37:;
// line 776
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block5:;
frost$core$Bit $tmp2100 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2101 = $tmp2100.value;
if ($tmp2101) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp2102 = (frost$core$Int64) {743};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2103, $tmp2102, &$s2104);
abort(); // unreachable
block58:;
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frostc$Type$get_hash$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

// line 783
frost$core$String** $tmp2105 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2106 = *$tmp2105;
ITable* $tmp2107 = ((frost$collections$Key*) $tmp2106)->$class->itable;
while ($tmp2107->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp2107 = $tmp2107->next;
}
$fn2109 $tmp2108 = $tmp2107->methods[0];
frost$core$Int64 $tmp2110 = $tmp2108(((frost$collections$Key*) $tmp2106));
return $tmp2110;

}
frost$core$String* org$frostlang$frostc$Type$get_asString$R$frost$core$String(org$frostlang$frostc$Type* param0) {

// line 788
frost$core$String** $tmp2111 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2112 = *$tmp2111;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
return $tmp2112;

}
void org$frostlang$frostc$Type$cleanup(org$frostlang$frostc$Type* param0) {

// line 4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$FixedArray** $tmp2113 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp2114 = *$tmp2113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
frost$core$Weak** $tmp2115 = &param0->genericClassParameter;
frost$core$Weak* $tmp2116 = *$tmp2115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2116));
frost$core$Weak** $tmp2117 = &param0->genericMethodParameter;
frost$core$Weak* $tmp2118 = *$tmp2117;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
org$frostlang$frostc$MethodRef** $tmp2119 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp2120 = *$tmp2119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
return;

}

