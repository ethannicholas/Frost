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
org$frostlang$frostc$Type$class_type org$frostlang$frostc$Type$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, (ITable*) &org$frostlang$frostc$Type$_frost$core$Equatable, { org$frostlang$frostc$Type$convert$R$frost$core$String, org$frostlang$frostc$Type$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit, org$frostlang$frostc$Type$get_size$R$frost$core$Int64, org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim, org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit, org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit, org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit, org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit, org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit, org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit, org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64, org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_hash$R$frost$core$Int64} };

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
typedef frost$core$Bit (*$fn1077)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1089)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1100)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1111)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1123)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1135)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1150)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1211)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1263)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1273)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1299)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1314)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1325)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1337)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1349)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1360)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1375)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1386)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1398)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1410)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1425)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1452)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1463)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1475)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1487)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1500)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1521)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1536)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1548)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1564)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1578)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1589)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1612)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1623)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1644)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1661)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1753)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1761)(frost$collections$MapView*);
typedef frost$core$Int64 (*$fn1801)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1879)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1894)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1956)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1978)(frost$collections$Key*);

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
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5545501573009681362, NULL };
static frost$core$String $s712 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static frost$core$String $s717 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static frost$core$String $s727 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static frost$core$String $s737 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static frost$core$String $s742 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static frost$core$String $s752 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static frost$core$String $s757 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static frost$core$String $s763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s769 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s775 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s781 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s793 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, 1146821061809580773, NULL };
static frost$core$String $s817 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, 1146821061809581078, NULL };
static frost$core$String $s823 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3824106976667626414, NULL };
static frost$core$String $s829 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, 1146820904470315469, NULL };
static frost$core$String $s835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, 1146820904470315667, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static frost$core$String $s847 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static frost$core$String $s867 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s877 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s902 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 4906885815162678826, NULL };
static frost$core$String $s908 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s914 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, 1146821009278619293, NULL };
static frost$core$String $s920 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -7013691227705711665, NULL };
static frost$core$String $s929 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s933 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s935 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s938 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s955 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s967 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 3644790808526678741, NULL };
static frost$core$String $s991 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -3824106975113800959, NULL };
static frost$core$String $s1023 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s1036 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s1045 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static frost$core$String $s1051 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static frost$core$String $s1055 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1060 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -3508042023517899272, NULL };
static frost$core$String $s1066 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, -3508042023536129774, NULL };
static frost$core$String $s1201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x69\x73\x43\x6c\x61\x73\x73\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 88, -6198224920300563291, NULL };
static frost$core$String $s1241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x69\x73\x4d\x65\x74\x68\x6f\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 89, 55190418378938616, NULL };
static frost$core$String $s1246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, 1146821061406687137, NULL };
static frost$core$String $s1254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -4916982935192335398, NULL };
static frost$core$String $s1284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 97, -2976789655376824909, NULL };
static frost$core$String $s1439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 119, 5693748891149284325, NULL };
static frost$core$String $s1492 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1493 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1598 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1632 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1757 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1758 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 168, 1028753922056655266, NULL };
static frost$core$String $s1888 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1972 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1973 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 168, 5014262021098371418, NULL };

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
frost$core$String* $tmp359 = frost$core$String$convert$R$frost$core$String($tmp358);
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
frost$core$String* $tmp393 = frost$core$String$convert$R$frost$core$String($tmp392);
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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RegularExpression$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt8$R$org$frostlang$frostc$Type() {

// line 288
org$frostlang$frostc$Type* $tmp708 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp709 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp710 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp709);
frost$core$Int64 $tmp711 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp708, &$s712, $tmp710, $tmp711);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp708;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt16$R$org$frostlang$frostc$Type() {

// line 293
org$frostlang$frostc$Type* $tmp713 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp714 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp715 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp714);
frost$core$Int64 $tmp716 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp713, &$s717, $tmp715, $tmp716);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp713;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt32$R$org$frostlang$frostc$Type() {

// line 298
org$frostlang$frostc$Type* $tmp718 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp719 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp720 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp719);
frost$core$Int64 $tmp721 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp718, &$s722, $tmp720, $tmp721);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp718;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt64$R$org$frostlang$frostc$Type() {

// line 303
org$frostlang$frostc$Type* $tmp723 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp724 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp725 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp724);
frost$core$Int64 $tmp726 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp723, &$s727, $tmp725, $tmp726);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp723;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt8$R$org$frostlang$frostc$Type() {

// line 308
org$frostlang$frostc$Type* $tmp728 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp729 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp730 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp729);
frost$core$Int64 $tmp731 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp728, &$s732, $tmp730, $tmp731);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp728;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt16$R$org$frostlang$frostc$Type() {

// line 313
org$frostlang$frostc$Type* $tmp733 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp734 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp735 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp734);
frost$core$Int64 $tmp736 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp733, &$s737, $tmp735, $tmp736);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp733;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt32$R$org$frostlang$frostc$Type() {

// line 318
org$frostlang$frostc$Type* $tmp738 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp739 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp740 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp739);
frost$core$Int64 $tmp741 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp738, &$s742, $tmp740, $tmp741);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp738;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt64$R$org$frostlang$frostc$Type() {

// line 323
org$frostlang$frostc$Type* $tmp743 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp744 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp745 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp744);
frost$core$Int64 $tmp746 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp743, &$s747, $tmp745, $tmp746);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp743;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat32$R$org$frostlang$frostc$Type() {

// line 328
org$frostlang$frostc$Type* $tmp748 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp749 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp750 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp749);
frost$core$Int64 $tmp751 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp748, &$s752, $tmp750, $tmp751);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp748;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat64$R$org$frostlang$frostc$Type() {

// line 333
org$frostlang$frostc$Type* $tmp753 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp754 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp755 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp754);
frost$core$Int64 $tmp756 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp753, &$s757, $tmp755, $tmp756);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp753;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type() {

// line 338
org$frostlang$frostc$Type* $tmp758 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp759 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp760 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp759);
org$frostlang$frostc$Position $tmp761 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp762 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp758, &$s763, $tmp760, $tmp761, $tmp762);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp758;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$IntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

// line 408
org$frostlang$frostc$Type* $tmp842 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp843;
$tmp843 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp843->value = param0;
frost$core$String* $tmp844 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s845, ((frost$core$Object*) $tmp843));
frost$core$String* $tmp846 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp844, &$s847);
frost$core$Int64 $tmp848 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp849 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp848);
org$frostlang$frostc$Position $tmp850 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp851 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp842, $tmp846, $tmp849, $tmp850, $tmp851);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
// unreffing REF($2:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp842;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$NegatedIntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

// line 413
org$frostlang$frostc$Type* $tmp852 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp853 = frost$core$UInt64$convert$R$frost$core$String(param0);
frost$core$String* $tmp854 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s855, $tmp853);
frost$core$String* $tmp856 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp854, &$s857);
frost$core$Int64 $tmp858 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp859 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp858);
org$frostlang$frostc$Position $tmp860 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp861 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp852, $tmp856, $tmp859, $tmp860, $tmp861);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp852;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RealLiteral$frost$core$Real64$R$org$frostlang$frostc$Type(frost$core$Real64 param0) {

// line 418
org$frostlang$frostc$Type* $tmp862 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp863 = frost$core$Real64$convert$R$frost$core$String(param0);
frost$core$String* $tmp864 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s865, $tmp863);
frost$core$String* $tmp866 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp864, &$s867);
frost$core$Int64 $tmp868 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp869 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp868);
org$frostlang$frostc$Position $tmp870 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp871 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp862, $tmp866, $tmp869, $tmp870, $tmp871);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
// unreffing REF($2:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp862;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BitLiteral$R$org$frostlang$frostc$Type() {

// line 423
org$frostlang$frostc$Type* $tmp872 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp873 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$Kind $tmp874 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp873);
org$frostlang$frostc$Position $tmp875 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp876 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp872, &$s877, $tmp874, $tmp875, $tmp876);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp872;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ClassLiteral$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 428
frost$collections$Array* $tmp878 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp878);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$collections$Array* $tmp879 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local0) = $tmp878;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 429
frost$collections$Array* $tmp880 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp880, ((frost$core$Object*) param0));
// line 430
org$frostlang$frostc$Type* $tmp881 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$collections$Array* $tmp882 = *(&local0);
org$frostlang$frostc$Type* $tmp883 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp881, ((frost$collections$ListView*) $tmp882));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// unreffing REF($23:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
// unreffing REF($20:org.frostlang.frostc.Type)
frost$collections$Array* $tmp884 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp883;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type() {

// line 435
org$frostlang$frostc$Type* $tmp885 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp886 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp887 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp886);
org$frostlang$frostc$Position $tmp888 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp889 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp885, &$s890, $tmp887, $tmp888, $tmp889);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp885;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type() {

// line 440
org$frostlang$frostc$Type* $tmp891 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp892 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp893 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp892);
org$frostlang$frostc$Position $tmp894 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp895 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp891, &$s896, $tmp893, $tmp894, $tmp895);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp891;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterable$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Frost$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type() {

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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 465
frost$collections$Array* $tmp921 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp921);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
frost$collections$Array* $tmp922 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
*(&local0) = $tmp921;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 466
frost$collections$Array* $tmp923 = *(&local0);
org$frostlang$frostc$Type* $tmp924 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp925 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp926 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp925);
org$frostlang$frostc$Position $tmp927 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp928 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp924, &$s929, $tmp926, $tmp927, $tmp928);
frost$collections$Array$add$frost$collections$Array$T($tmp923, ((frost$core$Object*) $tmp924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
// unreffing REF($17:org.frostlang.frostc.Type)
// line 467
frost$collections$Array* $tmp930 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp930, ((frost$core$Object*) param0));
// line 468
org$frostlang$frostc$Type* $tmp931 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp932 = frost$core$String$convert$R$frost$core$String(&$s933);
frost$core$String* $tmp934 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp932, &$s935);
frost$core$String* $tmp936 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp934, ((frost$core$Object*) param0));
frost$core$String* $tmp937 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp936, &$s938);
frost$core$Int64 $tmp939 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp940 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp939);
org$frostlang$frostc$Position* $tmp941 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp942 = *$tmp941;
frost$collections$Array* $tmp943 = *(&local0);
frost$core$Bit* $tmp944 = &param0->resolved;
frost$core$Bit $tmp945 = *$tmp944;
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp931, $tmp937, $tmp940, $tmp942, ((frost$collections$ListView*) $tmp943), $tmp945);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
// unreffing REF($39:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
// unreffing REF($38:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
// unreffing REF($36:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// unreffing REF($35:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
// unreffing REF($34:org.frostlang.frostc.Type)
frost$collections$Array* $tmp946 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp931;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 473
frost$collections$Array* $tmp947 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp947);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
frost$collections$Array* $tmp948 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
*(&local0) = $tmp947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 474
frost$collections$Array* $tmp949 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp949, ((frost$core$Object*) param0));
// line 475
org$frostlang$frostc$Type* $tmp950 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp951 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp952 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp951);
org$frostlang$frostc$Position $tmp953 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp954 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp950, &$s955, $tmp952, $tmp953, $tmp954);
frost$collections$Array* $tmp956 = *(&local0);
org$frostlang$frostc$Type* $tmp957 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp950, ((frost$collections$ListView*) $tmp956));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// unreffing REF($28:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
// unreffing REF($20:org.frostlang.frostc.Type)
frost$collections$Array* $tmp958 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp957;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 480
frost$collections$Array* $tmp959 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp959);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$collections$Array* $tmp960 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
*(&local0) = $tmp959;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 481
frost$collections$Array* $tmp961 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp961, ((frost$core$Object*) param0));
// line 482
org$frostlang$frostc$Type* $tmp962 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp963 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp964 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp963);
org$frostlang$frostc$Position $tmp965 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp966 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp962, &$s967, $tmp964, $tmp965, $tmp966);
frost$collections$Array* $tmp968 = *(&local0);
org$frostlang$frostc$Type* $tmp969 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp962, ((frost$collections$ListView*) $tmp968));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
// unreffing REF($28:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
// unreffing REF($20:org.frostlang.frostc.Type)
frost$collections$Array* $tmp970 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp969;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ImmutableArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 487
frost$collections$Array* $tmp971 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp971);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
frost$collections$Array* $tmp972 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
*(&local0) = $tmp971;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 488
frost$collections$Array* $tmp973 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp973, ((frost$core$Object*) param0));
// line 489
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
// unreffing REF($28:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
// unreffing REF($20:org.frostlang.frostc.Type)
frost$collections$Array* $tmp982 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp981;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 494
frost$collections$Array* $tmp983 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp983);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
frost$collections$Array* $tmp984 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
*(&local0) = $tmp983;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 495
frost$collections$Array* $tmp985 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp985, ((frost$core$Object*) param0));
// line 496
org$frostlang$frostc$Type* $tmp986 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp987 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp988 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp987);
org$frostlang$frostc$Position $tmp989 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp990 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp986, &$s991, $tmp988, $tmp989, $tmp990);
frost$collections$Array* $tmp992 = *(&local0);
org$frostlang$frostc$Type* $tmp993 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp986, ((frost$collections$ListView*) $tmp992));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
// unreffing REF($28:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
// unreffing REF($20:org.frostlang.frostc.Type)
frost$collections$Array* $tmp994 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp993;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 501
frost$collections$Array* $tmp995 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp995);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$collections$Array* $tmp996 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local0) = $tmp995;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 502
frost$collections$Array* $tmp997 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp997, ((frost$core$Object*) param0));
// line 503
org$frostlang$frostc$Type* $tmp998 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp999 = org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1000 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp998, $tmp999);
bool $tmp1001 = $tmp1000.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
// unreffing REF($21:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
// unreffing REF($20:org.frostlang.frostc.Type)
if ($tmp1001) goto block1; else goto block3;
block1:;
// line 504
frost$collections$Array* $tmp1002 = *(&local0);
org$frostlang$frostc$Type* $tmp1003 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp1002, ((frost$core$Object*) $tmp1003));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// unreffing REF($34:org.frostlang.frostc.Type)
goto block2;
block3:;
// line 506
org$frostlang$frostc$Type* $tmp1004 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp1005 = org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1006 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1004, $tmp1005);
bool $tmp1007 = $tmp1006.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
// unreffing REF($43:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
// unreffing REF($42:org.frostlang.frostc.Type)
if ($tmp1007) goto block4; else goto block6;
block4:;
// line 507
frost$collections$Array* $tmp1008 = *(&local0);
org$frostlang$frostc$Type* $tmp1009 = org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp1008, ((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
// unreffing REF($56:org.frostlang.frostc.Type)
goto block5;
block6:;
// line 509
org$frostlang$frostc$Type* $tmp1010 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp1011 = org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1012 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1010, $tmp1011);
bool $tmp1013 = $tmp1012.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
// unreffing REF($65:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
// unreffing REF($64:org.frostlang.frostc.Type)
if ($tmp1013) goto block7; else goto block9;
block7:;
// line 510
frost$collections$Array* $tmp1014 = *(&local0);
org$frostlang$frostc$Type* $tmp1015 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp1014, ((frost$core$Object*) $tmp1015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
// unreffing REF($78:org.frostlang.frostc.Type)
goto block8;
block9:;
// line 1
// line 513
frost$collections$Array* $tmp1016 = *(&local0);
org$frostlang$frostc$Type* $tmp1017 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
frost$collections$Array$add$frost$collections$Array$T($tmp1016, ((frost$core$Object*) $tmp1017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
// unreffing REF($89:org.frostlang.frostc.Type)
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
// line 515
org$frostlang$frostc$Type* $tmp1018 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1019 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1020 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1019);
org$frostlang$frostc$Position $tmp1021 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1022 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1018, &$s1023, $tmp1020, $tmp1021, $tmp1022);
frost$collections$Array* $tmp1024 = *(&local0);
org$frostlang$frostc$Type* $tmp1025 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1018, ((frost$collections$ListView*) $tmp1024));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
// unreffing REF($107:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// unreffing REF($99:org.frostlang.frostc.Type)
frost$collections$Array* $tmp1026 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1025;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$collections$Array* local0 = NULL;
// line 520
frost$collections$Array* $tmp1027 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1027);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
frost$collections$Array* $tmp1028 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
*(&local0) = $tmp1027;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.Type>)
// line 521
frost$collections$Array* $tmp1029 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1029, ((frost$core$Object*) param0));
// line 522
frost$collections$Array* $tmp1030 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1030, ((frost$core$Object*) param1));
// line 523
org$frostlang$frostc$Type* $tmp1031 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1032 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp1033 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1032);
org$frostlang$frostc$Position $tmp1034 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1035 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1031, &$s1036, $tmp1033, $tmp1034, $tmp1035);
frost$collections$Array* $tmp1037 = *(&local0);
org$frostlang$frostc$Type* $tmp1038 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1031, ((frost$collections$ListView*) $tmp1037));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
// unreffing REF($33:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
// unreffing REF($25:org.frostlang.frostc.Type)
frost$collections$Array* $tmp1039 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
// unreffing children
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1038;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type() {

// line 528
org$frostlang$frostc$Type* $tmp1040 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1041 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1042 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1041);
org$frostlang$frostc$Position $tmp1043 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1044 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1040, &$s1045, $tmp1042, $tmp1043, $tmp1044);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp1040;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type() {

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
frost$core$Bit org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
// line 537
frost$core$String** $tmp1052 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1053 = *$tmp1052;
frost$core$Bit $tmp1054 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1053, &$s1055);
bool $tmp1056 = $tmp1054.value;
if ($tmp1056) goto block1; else goto block2;
block1:;
*(&local3) = $tmp1054;
goto block3;
block2:;
frost$core$String** $tmp1057 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1058 = *$tmp1057;
frost$core$Bit $tmp1059 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1058, &$s1060);
*(&local3) = $tmp1059;
goto block3;
block3:;
frost$core$Bit $tmp1061 = *(&local3);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block4; else goto block5;
block4:;
*(&local2) = $tmp1061;
goto block6;
block5:;
frost$core$String** $tmp1063 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1064 = *$tmp1063;
frost$core$Bit $tmp1065 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1064, &$s1066);
*(&local2) = $tmp1065;
goto block6;
block6:;
frost$core$Bit $tmp1067 = *(&local2);
bool $tmp1068 = $tmp1067.value;
if ($tmp1068) goto block7; else goto block8;
block7:;
*(&local1) = $tmp1067;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1069 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1070 = *$tmp1069;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1071;
$tmp1071 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1071->value = $tmp1070;
frost$core$Int64 $tmp1072 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1073 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1072);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1074;
$tmp1074 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1074->value = $tmp1073;
ITable* $tmp1075 = ((frost$core$Equatable*) $tmp1071)->$class->itable;
while ($tmp1075->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1075 = $tmp1075->next;
}
$fn1077 $tmp1076 = $tmp1075->methods[0];
frost$core$Bit $tmp1078 = $tmp1076(((frost$core$Equatable*) $tmp1071), ((frost$core$Equatable*) $tmp1074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1074)));
// unreffing REF($37:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1071)));
// unreffing REF($33:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local1) = $tmp1078;
goto block9;
block9:;
frost$core$Bit $tmp1079 = *(&local1);
bool $tmp1080 = $tmp1079.value;
if ($tmp1080) goto block10; else goto block11;
block10:;
*(&local0) = $tmp1079;
goto block12;
block11:;
org$frostlang$frostc$Type$Kind* $tmp1081 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1082 = *$tmp1081;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1083;
$tmp1083 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1083->value = $tmp1082;
frost$core$Int64 $tmp1084 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp1085 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1084);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1086;
$tmp1086 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1086->value = $tmp1085;
ITable* $tmp1087 = ((frost$core$Equatable*) $tmp1083)->$class->itable;
while ($tmp1087->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1087 = $tmp1087->next;
}
$fn1089 $tmp1088 = $tmp1087->methods[0];
frost$core$Bit $tmp1090 = $tmp1088(((frost$core$Equatable*) $tmp1083), ((frost$core$Equatable*) $tmp1086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1086)));
// unreffing REF($59:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1083)));
// unreffing REF($55:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local0) = $tmp1090;
goto block12;
block12:;
frost$core$Bit $tmp1091 = *(&local0);
return $tmp1091;

}
frost$core$Bit org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
// line 543
org$frostlang$frostc$Type$Kind* $tmp1092 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1093 = *$tmp1092;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1094;
$tmp1094 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1094->value = $tmp1093;
frost$core$Int64 $tmp1095 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp1096 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1095);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1097;
$tmp1097 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1097->value = $tmp1096;
ITable* $tmp1098 = ((frost$core$Equatable*) $tmp1094)->$class->itable;
while ($tmp1098->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1098 = $tmp1098->next;
}
$fn1100 $tmp1099 = $tmp1098->methods[0];
frost$core$Bit $tmp1101 = $tmp1099(((frost$core$Equatable*) $tmp1094), ((frost$core$Equatable*) $tmp1097));
bool $tmp1102 = $tmp1101.value;
if ($tmp1102) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1101;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1103 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1104 = *$tmp1103;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1105;
$tmp1105 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1105->value = $tmp1104;
frost$core$Int64 $tmp1106 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp1107 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1106);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1108;
$tmp1108 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1108->value = $tmp1107;
ITable* $tmp1109 = ((frost$core$Equatable*) $tmp1105)->$class->itable;
while ($tmp1109->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1109 = $tmp1109->next;
}
$fn1111 $tmp1110 = $tmp1109->methods[0];
frost$core$Bit $tmp1112 = $tmp1110(((frost$core$Equatable*) $tmp1105), ((frost$core$Equatable*) $tmp1108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1108)));
// unreffing REF($20:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1105)));
// unreffing REF($16:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local2) = $tmp1112;
goto block3;
block3:;
frost$core$Bit $tmp1113 = *(&local2);
bool $tmp1114 = $tmp1113.value;
if ($tmp1114) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1113;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1115 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1116 = *$tmp1115;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1117;
$tmp1117 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1117->value = $tmp1116;
frost$core$Int64 $tmp1118 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1119 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1118);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1120;
$tmp1120 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1120->value = $tmp1119;
ITable* $tmp1121 = ((frost$core$Equatable*) $tmp1117)->$class->itable;
while ($tmp1121->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1121 = $tmp1121->next;
}
$fn1123 $tmp1122 = $tmp1121->methods[0];
frost$core$Bit $tmp1124 = $tmp1122(((frost$core$Equatable*) $tmp1117), ((frost$core$Equatable*) $tmp1120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1120)));
// unreffing REF($42:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1117)));
// unreffing REF($38:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local1) = $tmp1124;
goto block6;
block6:;
frost$core$Bit $tmp1125 = *(&local1);
bool $tmp1126 = $tmp1125.value;
if ($tmp1126) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1125;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1127 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1128 = *$tmp1127;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1129;
$tmp1129 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1129->value = $tmp1128;
frost$core$Int64 $tmp1130 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1131 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1130);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1132;
$tmp1132 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1132->value = $tmp1131;
ITable* $tmp1133 = ((frost$core$Equatable*) $tmp1129)->$class->itable;
while ($tmp1133->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1133 = $tmp1133->next;
}
$fn1135 $tmp1134 = $tmp1133->methods[0];
frost$core$Bit $tmp1136 = $tmp1134(((frost$core$Equatable*) $tmp1129), ((frost$core$Equatable*) $tmp1132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1132)));
// unreffing REF($64:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1129)));
// unreffing REF($60:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local0) = $tmp1136;
goto block9;
block9:;
frost$core$Bit $tmp1137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1097)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1094)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
return $tmp1137;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 548
frost$core$String** $tmp1138 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1139 = *$tmp1138;
frost$core$Bit $tmp1140 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1139, &$s1141);
return $tmp1140;

}
frost$core$Bit org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 552
org$frostlang$frostc$Type$Kind* $tmp1142 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1143 = *$tmp1142;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1144;
$tmp1144 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1144->value = $tmp1143;
frost$core$Int64 $tmp1145 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp1146 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1145);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1147;
$tmp1147 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1147->value = $tmp1146;
ITable* $tmp1148 = ((frost$core$Equatable*) $tmp1144)->$class->itable;
while ($tmp1148->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1148 = $tmp1148->next;
}
$fn1150 $tmp1149 = $tmp1148->methods[0];
frost$core$Bit $tmp1151 = $tmp1149(((frost$core$Equatable*) $tmp1144), ((frost$core$Equatable*) $tmp1147));
bool $tmp1152 = $tmp1151.value;
if ($tmp1152) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1151;
goto block3;
block2:;
frost$core$String** $tmp1153 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1154 = *$tmp1153;
frost$core$Bit $tmp1155 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1154, &$s1156);
*(&local0) = $tmp1155;
goto block3;
block3:;
frost$core$Bit $tmp1157 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1147)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1144)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
return $tmp1157;

}
frost$core$Bit org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 556
frost$core$String** $tmp1158 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1159 = *$tmp1158;
frost$core$Bit $tmp1160 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1159, &$s1161);
return $tmp1160;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 560
frost$core$Bit $tmp1162 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1163 = $tmp1162.value;
if ($tmp1163) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1162;
goto block3;
block2:;
frost$core$Bit $tmp1164 = org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(param0);
*(&local0) = $tmp1164;
goto block3;
block3:;
frost$core$Bit $tmp1165 = *(&local0);
return $tmp1165;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 564
org$frostlang$frostc$Type$Kind* $tmp1166 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1167 = *$tmp1166;
frost$core$Int64 $tmp1168 = $tmp1167.$rawValue;
frost$core$Int64 $tmp1169 = (frost$core$Int64) {0};
frost$core$Bit $tmp1170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1168, $tmp1169);
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1172 = (frost$core$Int64) {1};
frost$core$Bit $tmp1173 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1168, $tmp1172);
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp1175 = (frost$core$Int64) {11};
frost$core$Bit $tmp1176 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1168, $tmp1175);
bool $tmp1177 = $tmp1176.value;
if ($tmp1177) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1178 = (frost$core$Int64) {12};
frost$core$Bit $tmp1179 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1168, $tmp1178);
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp1181 = (frost$core$Int64) {13};
frost$core$Bit $tmp1182 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1168, $tmp1181);
bool $tmp1183 = $tmp1182.value;
if ($tmp1183) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp1184 = (frost$core$Int64) {16};
frost$core$Bit $tmp1185 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1168, $tmp1184);
bool $tmp1186 = $tmp1185.value;
if ($tmp1186) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp1187 = (frost$core$Int64) {15};
frost$core$Bit $tmp1188 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1168, $tmp1187);
bool $tmp1189 = $tmp1188.value;
if ($tmp1189) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp1190 = (frost$core$Int64) {18};
frost$core$Bit $tmp1191 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1168, $tmp1190);
bool $tmp1192 = $tmp1191.value;
if ($tmp1192) goto block2; else goto block10;
block10:;
frost$core$Int64 $tmp1193 = (frost$core$Int64) {17};
frost$core$Bit $tmp1194 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1168, $tmp1193);
bool $tmp1195 = $tmp1194.value;
if ($tmp1195) goto block2; else goto block11;
block2:;
// line 568
frost$core$Bit $tmp1196 = frost$core$Bit$init$builtin_bit(true);
return $tmp1196;
block11:;
// line 571
frost$core$Bit $tmp1197 = frost$core$Bit$init$builtin_bit(false);
return $tmp1197;
block1:;
frost$core$Bit $tmp1198 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1199 = $tmp1198.value;
if ($tmp1199) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1200 = (frost$core$Int64) {563};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1201, $tmp1200, &$s1202);
abort(); // unreachable
block12:;
abort(); // unreachable

}
frost$core$Bit org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 577
org$frostlang$frostc$Type$Kind* $tmp1203 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1204 = *$tmp1203;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1205;
$tmp1205 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1205->value = $tmp1204;
frost$core$Int64 $tmp1206 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp1207 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1206);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1208;
$tmp1208 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1208->value = $tmp1207;
ITable* $tmp1209 = ((frost$core$Equatable*) $tmp1205)->$class->itable;
while ($tmp1209->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1209 = $tmp1209->next;
}
$fn1211 $tmp1210 = $tmp1209->methods[0];
frost$core$Bit $tmp1212 = $tmp1210(((frost$core$Equatable*) $tmp1205), ((frost$core$Equatable*) $tmp1208));
bool $tmp1213 = $tmp1212.value;
if ($tmp1213) goto block1; else goto block2;
block1:;
org$frostlang$frostc$FixedArray** $tmp1214 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1215 = *$tmp1214;
frost$core$Int64 $tmp1216 = (frost$core$Int64) {0};
frost$core$Object* $tmp1217 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1215, $tmp1216);
org$frostlang$frostc$Type* $tmp1218 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1219 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1217), $tmp1218);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
// unreffing REF($19:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1217);
// unreffing REF($17:org.frostlang.frostc.FixedArray.T)
*(&local0) = $tmp1219;
goto block3;
block2:;
*(&local0) = $tmp1212;
goto block3;
block3:;
frost$core$Bit $tmp1220 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1208)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1205)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
return $tmp1220;

}
frost$core$Bit org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 581
org$frostlang$frostc$Type$Kind* $tmp1221 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1222 = *$tmp1221;
frost$core$Int64 $tmp1223 = $tmp1222.$rawValue;
frost$core$Int64 $tmp1224 = (frost$core$Int64) {16};
frost$core$Bit $tmp1225 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1223, $tmp1224);
bool $tmp1226 = $tmp1225.value;
if ($tmp1226) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1227 = (frost$core$Int64) {15};
frost$core$Bit $tmp1228 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1223, $tmp1227);
bool $tmp1229 = $tmp1228.value;
if ($tmp1229) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp1230 = (frost$core$Int64) {18};
frost$core$Bit $tmp1231 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1223, $tmp1230);
bool $tmp1232 = $tmp1231.value;
if ($tmp1232) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1233 = (frost$core$Int64) {17};
frost$core$Bit $tmp1234 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1223, $tmp1233);
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block2; else goto block6;
block2:;
// line 583
frost$core$Bit $tmp1236 = frost$core$Bit$init$builtin_bit(true);
return $tmp1236;
block6:;
// line 586
frost$core$Bit $tmp1237 = frost$core$Bit$init$builtin_bit(false);
return $tmp1237;
block1:;
frost$core$Bit $tmp1238 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1239 = $tmp1238.value;
if ($tmp1239) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp1240 = (frost$core$Int64) {580};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1241, $tmp1240, &$s1242);
abort(); // unreachable
block7:;
abort(); // unreachable

}
frost$core$Bit org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 592
frost$core$String** $tmp1243 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1244 = *$tmp1243;
frost$core$Bit $tmp1245 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1244, &$s1246);
return $tmp1245;

}
frost$core$Bit org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 596
frost$core$String** $tmp1247 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1248 = *$tmp1247;
frost$core$Bit $tmp1249 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1248, &$s1250);
return $tmp1249;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 600
frost$core$String** $tmp1251 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1252 = *$tmp1251;
frost$core$Bit $tmp1253 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1252, &$s1254);
return $tmp1253;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 604
org$frostlang$frostc$Type$Kind* $tmp1255 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1256 = *$tmp1255;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1257;
$tmp1257 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1257->value = $tmp1256;
frost$core$Int64 $tmp1258 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1259 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1258);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1260;
$tmp1260 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1260->value = $tmp1259;
ITable* $tmp1261 = ((frost$core$Equatable*) $tmp1257)->$class->itable;
while ($tmp1261->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1261 = $tmp1261->next;
}
$fn1263 $tmp1262 = $tmp1261->methods[0];
frost$core$Bit $tmp1264 = $tmp1262(((frost$core$Equatable*) $tmp1257), ((frost$core$Equatable*) $tmp1260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1260)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1257)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
return $tmp1264;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 608
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
bool $tmp1275 = $tmp1274.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1270)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1267)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1275) goto block1; else goto block2;
block1:;
// line 609
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 611
frost$collections$Array* $tmp1276 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1276);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
frost$collections$Array* $tmp1277 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
*(&local0) = $tmp1276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
// unreffing REF($23:frost.collections.Array<org.frostlang.frostc.Type>)
// line 612
frost$collections$Array* $tmp1278 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1278, ((frost$core$Object*) param0));
// line 613
org$frostlang$frostc$Type* $tmp1279 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String** $tmp1280 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1281 = *$tmp1280;
frost$core$String* $tmp1282 = frost$core$String$convert$R$frost$core$String($tmp1281);
frost$core$String* $tmp1283 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1282, &$s1284);
frost$core$Int64 $tmp1285 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1286 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1285);
org$frostlang$frostc$Position $tmp1287 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp1288 = *(&local0);
frost$core$Bit $tmp1289 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp1279, $tmp1283, $tmp1286, $tmp1287, ((frost$collections$ListView*) $tmp1288), $tmp1289);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
// unreffing REF($42:org.frostlang.frostc.Type)
frost$collections$Array* $tmp1290 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
// unreffing subtypes
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1279;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 617
org$frostlang$frostc$Type$Kind* $tmp1291 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1292 = *$tmp1291;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1293;
$tmp1293 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1293->value = $tmp1292;
frost$core$Int64 $tmp1294 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1295 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1294);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1296;
$tmp1296 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1296->value = $tmp1295;
ITable* $tmp1297 = ((frost$core$Equatable*) $tmp1293)->$class->itable;
while ($tmp1297->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1297 = $tmp1297->next;
}
$fn1299 $tmp1298 = $tmp1297->methods[1];
frost$core$Bit $tmp1300 = $tmp1298(((frost$core$Equatable*) $tmp1293), ((frost$core$Equatable*) $tmp1296));
bool $tmp1301 = $tmp1300.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1296)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1293)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1301) goto block1; else goto block2;
block1:;
// line 618
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 620
org$frostlang$frostc$FixedArray** $tmp1302 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1303 = *$tmp1302;
frost$core$Int64 $tmp1304 = (frost$core$Int64) {0};
frost$core$Object* $tmp1305 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1303, $tmp1304);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1305)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1305);
// unreffing REF($28:org.frostlang.frostc.FixedArray.T)
return ((org$frostlang$frostc$Type*) $tmp1305);

}
frost$core$Int64 org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind* $tmp1306 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1307 = *$tmp1306;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1308;
$tmp1308 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1308->value = $tmp1307;
frost$core$Int64 $tmp1309 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1310 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1309);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1311;
$tmp1311 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1311->value = $tmp1310;
ITable* $tmp1312 = ((frost$core$Equatable*) $tmp1308)->$class->itable;
while ($tmp1312->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1312 = $tmp1312->next;
}
$fn1314 $tmp1313 = $tmp1312->methods[0];
frost$core$Bit $tmp1315 = $tmp1313(((frost$core$Equatable*) $tmp1308), ((frost$core$Equatable*) $tmp1311));
bool $tmp1316 = $tmp1315.value;
if ($tmp1316) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1315;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1317 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1318 = *$tmp1317;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1319;
$tmp1319 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1319->value = $tmp1318;
frost$core$Int64 $tmp1320 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1321 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1320);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1322;
$tmp1322 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1322->value = $tmp1321;
ITable* $tmp1323 = ((frost$core$Equatable*) $tmp1319)->$class->itable;
while ($tmp1323->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1323 = $tmp1323->next;
}
$fn1325 $tmp1324 = $tmp1323->methods[0];
frost$core$Bit $tmp1326 = $tmp1324(((frost$core$Equatable*) $tmp1319), ((frost$core$Equatable*) $tmp1322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1322)));
// unreffing REF($19:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1319)));
// unreffing REF($15:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local2) = $tmp1326;
goto block3;
block3:;
frost$core$Bit $tmp1327 = *(&local2);
bool $tmp1328 = $tmp1327.value;
if ($tmp1328) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1327;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1329 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1330 = *$tmp1329;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1331;
$tmp1331 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1331->value = $tmp1330;
frost$core$Int64 $tmp1332 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1333 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1332);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1334;
$tmp1334 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1334->value = $tmp1333;
ITable* $tmp1335 = ((frost$core$Equatable*) $tmp1331)->$class->itable;
while ($tmp1335->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1335 = $tmp1335->next;
}
$fn1337 $tmp1336 = $tmp1335->methods[0];
frost$core$Bit $tmp1338 = $tmp1336(((frost$core$Equatable*) $tmp1331), ((frost$core$Equatable*) $tmp1334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1334)));
// unreffing REF($41:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1331)));
// unreffing REF($37:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local1) = $tmp1338;
goto block6;
block6:;
frost$core$Bit $tmp1339 = *(&local1);
bool $tmp1340 = $tmp1339.value;
if ($tmp1340) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1339;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1341 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1342 = *$tmp1341;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1343;
$tmp1343 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1343->value = $tmp1342;
frost$core$Int64 $tmp1344 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1345 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1344);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1346;
$tmp1346 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1346->value = $tmp1345;
ITable* $tmp1347 = ((frost$core$Equatable*) $tmp1343)->$class->itable;
while ($tmp1347->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1347 = $tmp1347->next;
}
$fn1349 $tmp1348 = $tmp1347->methods[0];
frost$core$Bit $tmp1350 = $tmp1348(((frost$core$Equatable*) $tmp1343), ((frost$core$Equatable*) $tmp1346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1346)));
// unreffing REF($63:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1343)));
// unreffing REF($59:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local0) = $tmp1350;
goto block9;
block9:;
frost$core$Bit $tmp1351 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1311)));
// unreffing REF($6:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1308)));
// unreffing REF($2:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1353 = (frost$core$Int64) {625};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1354, $tmp1353, &$s1355);
abort(); // unreachable
block10:;
// line 626
org$frostlang$frostc$FixedArray** $tmp1356 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1357 = *$tmp1356;
ITable* $tmp1358 = ((frost$collections$CollectionView*) $tmp1357)->$class->itable;
while ($tmp1358->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1358 = $tmp1358->next;
}
$fn1360 $tmp1359 = $tmp1358->methods[0];
frost$core$Int64 $tmp1361 = $tmp1359(((frost$collections$CollectionView*) $tmp1357));
frost$core$Int64 $tmp1362 = (frost$core$Int64) {1};
int64_t $tmp1363 = $tmp1361.value;
int64_t $tmp1364 = $tmp1362.value;
int64_t $tmp1365 = $tmp1363 - $tmp1364;
frost$core$Int64 $tmp1366 = (frost$core$Int64) {$tmp1365};
return $tmp1366;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
org$frostlang$frostc$Type$Kind* $tmp1367 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1368 = *$tmp1367;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1369;
$tmp1369 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1369->value = $tmp1368;
frost$core$Int64 $tmp1370 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1371 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1370);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1372;
$tmp1372 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1372->value = $tmp1371;
ITable* $tmp1373 = ((frost$core$Equatable*) $tmp1369)->$class->itable;
while ($tmp1373->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1373 = $tmp1373->next;
}
$fn1375 $tmp1374 = $tmp1373->methods[0];
frost$core$Bit $tmp1376 = $tmp1374(((frost$core$Equatable*) $tmp1369), ((frost$core$Equatable*) $tmp1372));
bool $tmp1377 = $tmp1376.value;
if ($tmp1377) goto block1; else goto block2;
block1:;
*(&local4) = $tmp1376;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1378 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1379 = *$tmp1378;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1380;
$tmp1380 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1380->value = $tmp1379;
frost$core$Int64 $tmp1381 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1382 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1381);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1383;
$tmp1383 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1383->value = $tmp1382;
ITable* $tmp1384 = ((frost$core$Equatable*) $tmp1380)->$class->itable;
while ($tmp1384->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1384 = $tmp1384->next;
}
$fn1386 $tmp1385 = $tmp1384->methods[0];
frost$core$Bit $tmp1387 = $tmp1385(((frost$core$Equatable*) $tmp1380), ((frost$core$Equatable*) $tmp1383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1383)));
// unreffing REF($19:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1380)));
// unreffing REF($15:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local4) = $tmp1387;
goto block3;
block3:;
frost$core$Bit $tmp1388 = *(&local4);
bool $tmp1389 = $tmp1388.value;
if ($tmp1389) goto block4; else goto block5;
block4:;
*(&local3) = $tmp1388;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1390 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1391 = *$tmp1390;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1392;
$tmp1392 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1392->value = $tmp1391;
frost$core$Int64 $tmp1393 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1394 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1393);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1395;
$tmp1395 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1395->value = $tmp1394;
ITable* $tmp1396 = ((frost$core$Equatable*) $tmp1392)->$class->itable;
while ($tmp1396->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1396 = $tmp1396->next;
}
$fn1398 $tmp1397 = $tmp1396->methods[0];
frost$core$Bit $tmp1399 = $tmp1397(((frost$core$Equatable*) $tmp1392), ((frost$core$Equatable*) $tmp1395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1395)));
// unreffing REF($41:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1392)));
// unreffing REF($37:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local3) = $tmp1399;
goto block6;
block6:;
frost$core$Bit $tmp1400 = *(&local3);
bool $tmp1401 = $tmp1400.value;
if ($tmp1401) goto block7; else goto block8;
block7:;
*(&local2) = $tmp1400;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1402 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1403 = *$tmp1402;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1404;
$tmp1404 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1404->value = $tmp1403;
frost$core$Int64 $tmp1405 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1406 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1405);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1407;
$tmp1407 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1407->value = $tmp1406;
ITable* $tmp1408 = ((frost$core$Equatable*) $tmp1404)->$class->itable;
while ($tmp1408->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1408 = $tmp1408->next;
}
$fn1410 $tmp1409 = $tmp1408->methods[0];
frost$core$Bit $tmp1411 = $tmp1409(((frost$core$Equatable*) $tmp1404), ((frost$core$Equatable*) $tmp1407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1407)));
// unreffing REF($63:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1404)));
// unreffing REF($59:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local2) = $tmp1411;
goto block9;
block9:;
frost$core$Bit $tmp1412 = *(&local2);
bool $tmp1413 = $tmp1412.value;
if ($tmp1413) goto block10; else goto block11;
block10:;
frost$core$Int64 $tmp1414 = (frost$core$Int64) {0};
int64_t $tmp1415 = param1.value;
int64_t $tmp1416 = $tmp1414.value;
bool $tmp1417 = $tmp1415 >= $tmp1416;
frost$core$Bit $tmp1418 = (frost$core$Bit) {$tmp1417};
*(&local1) = $tmp1418;
goto block12;
block11:;
*(&local1) = $tmp1412;
goto block12;
block12:;
frost$core$Bit $tmp1419 = *(&local1);
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block13; else goto block14;
block13:;
org$frostlang$frostc$FixedArray** $tmp1421 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1422 = *$tmp1421;
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
*(&local0) = $tmp1435;
goto block15;
block14:;
*(&local0) = $tmp1419;
goto block15;
block15:;
frost$core$Bit $tmp1436 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1372)));
// unreffing REF($6:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1369)));
// unreffing REF($2:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
bool $tmp1437 = $tmp1436.value;
if ($tmp1437) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp1438 = (frost$core$Int64) {631};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1439, $tmp1438, &$s1440);
abort(); // unreachable
block16:;
// line 632
org$frostlang$frostc$FixedArray** $tmp1441 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1442 = *$tmp1441;
frost$core$Object* $tmp1443 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1442, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1443)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1443);
// unreffing REF($124:org.frostlang.frostc.FixedArray.T)
return ((org$frostlang$frostc$Type*) $tmp1443);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind* $tmp1444 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1445 = *$tmp1444;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1446;
$tmp1446 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1446->value = $tmp1445;
frost$core$Int64 $tmp1447 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1448 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1447);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1449;
$tmp1449 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1449->value = $tmp1448;
ITable* $tmp1450 = ((frost$core$Equatable*) $tmp1446)->$class->itable;
while ($tmp1450->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1450 = $tmp1450->next;
}
$fn1452 $tmp1451 = $tmp1450->methods[0];
frost$core$Bit $tmp1453 = $tmp1451(((frost$core$Equatable*) $tmp1446), ((frost$core$Equatable*) $tmp1449));
bool $tmp1454 = $tmp1453.value;
if ($tmp1454) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1453;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1455 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1456 = *$tmp1455;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1457;
$tmp1457 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1457->value = $tmp1456;
frost$core$Int64 $tmp1458 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1459 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1458);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1460;
$tmp1460 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1460->value = $tmp1459;
ITable* $tmp1461 = ((frost$core$Equatable*) $tmp1457)->$class->itable;
while ($tmp1461->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1461 = $tmp1461->next;
}
$fn1463 $tmp1462 = $tmp1461->methods[0];
frost$core$Bit $tmp1464 = $tmp1462(((frost$core$Equatable*) $tmp1457), ((frost$core$Equatable*) $tmp1460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1460)));
// unreffing REF($19:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1457)));
// unreffing REF($15:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local2) = $tmp1464;
goto block3;
block3:;
frost$core$Bit $tmp1465 = *(&local2);
bool $tmp1466 = $tmp1465.value;
if ($tmp1466) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1465;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1467 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1468 = *$tmp1467;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1469;
$tmp1469 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1469->value = $tmp1468;
frost$core$Int64 $tmp1470 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1471 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1470);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1472;
$tmp1472 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1472->value = $tmp1471;
ITable* $tmp1473 = ((frost$core$Equatable*) $tmp1469)->$class->itable;
while ($tmp1473->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1473 = $tmp1473->next;
}
$fn1475 $tmp1474 = $tmp1473->methods[0];
frost$core$Bit $tmp1476 = $tmp1474(((frost$core$Equatable*) $tmp1469), ((frost$core$Equatable*) $tmp1472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1472)));
// unreffing REF($41:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1469)));
// unreffing REF($37:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local1) = $tmp1476;
goto block6;
block6:;
frost$core$Bit $tmp1477 = *(&local1);
bool $tmp1478 = $tmp1477.value;
if ($tmp1478) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1477;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1479 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1480 = *$tmp1479;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1481;
$tmp1481 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1481->value = $tmp1480;
frost$core$Int64 $tmp1482 = (frost$core$Int64) {18};
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1484)));
// unreffing REF($63:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1481)));
// unreffing REF($59:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local0) = $tmp1488;
goto block9;
block9:;
frost$core$Bit $tmp1489 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1449)));
// unreffing REF($6:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1446)));
// unreffing REF($2:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1491 = (frost$core$Int64) {637};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1492, $tmp1491, &$s1493);
abort(); // unreachable
block10:;
// line 638
org$frostlang$frostc$FixedArray** $tmp1494 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1495 = *$tmp1494;
org$frostlang$frostc$FixedArray** $tmp1496 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1497 = *$tmp1496;
ITable* $tmp1498 = ((frost$collections$CollectionView*) $tmp1497)->$class->itable;
while ($tmp1498->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1498 = $tmp1498->next;
}
$fn1500 $tmp1499 = $tmp1498->methods[0];
frost$core$Int64 $tmp1501 = $tmp1499(((frost$collections$CollectionView*) $tmp1497));
frost$core$Int64 $tmp1502 = (frost$core$Int64) {1};
int64_t $tmp1503 = $tmp1501.value;
int64_t $tmp1504 = $tmp1502.value;
int64_t $tmp1505 = $tmp1503 - $tmp1504;
frost$core$Int64 $tmp1506 = (frost$core$Int64) {$tmp1505};
frost$core$Object* $tmp1507 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1495, $tmp1506);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1507)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1507);
// unreffing REF($101:org.frostlang.frostc.FixedArray.T)
return ((org$frostlang$frostc$Type*) $tmp1507);

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
// line 645
frost$core$Bit $tmp1508 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param2);
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block1; else goto block2;
block1:;
// line 646
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 648
org$frostlang$frostc$Type* $tmp1510 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1511 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1510);
bool $tmp1512 = $tmp1511.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1510));
// unreffing REF($9:org.frostlang.frostc.Type)
if ($tmp1512) goto block3; else goto block4;
block3:;
// line 649
org$frostlang$frostc$Type$Kind* $tmp1513 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1514 = *$tmp1513;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1515;
$tmp1515 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1515->value = $tmp1514;
frost$core$Int64 $tmp1516 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1517 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1516);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1518;
$tmp1518 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1518->value = $tmp1517;
ITable* $tmp1519 = ((frost$core$Equatable*) $tmp1515)->$class->itable;
while ($tmp1519->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1519 = $tmp1519->next;
}
$fn1521 $tmp1520 = $tmp1519->methods[0];
frost$core$Bit $tmp1522 = $tmp1520(((frost$core$Equatable*) $tmp1515), ((frost$core$Equatable*) $tmp1518));
bool $tmp1523 = $tmp1522.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1518)));
// unreffing REF($23:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1515)));
// unreffing REF($19:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1523) goto block5; else goto block6;
block5:;
// line 650
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block6:;
// line 652
org$frostlang$frostc$Type* $tmp1524 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
// unreffing REF($39:org.frostlang.frostc.Type)
return $tmp1524;
block4:;
// line 654
org$frostlang$frostc$Type* $tmp1525 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1526 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param2, $tmp1525);
bool $tmp1527 = $tmp1526.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
// unreffing REF($47:org.frostlang.frostc.Type)
if ($tmp1527) goto block7; else goto block8;
block7:;
// line 655
org$frostlang$frostc$Type$Kind* $tmp1528 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1529 = *$tmp1528;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1530;
$tmp1530 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1530->value = $tmp1529;
frost$core$Int64 $tmp1531 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1532 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1531);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1533;
$tmp1533 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1533->value = $tmp1532;
ITable* $tmp1534 = ((frost$core$Equatable*) $tmp1530)->$class->itable;
while ($tmp1534->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1534 = $tmp1534->next;
}
$fn1536 $tmp1535 = $tmp1534->methods[0];
frost$core$Bit $tmp1537 = $tmp1535(((frost$core$Equatable*) $tmp1530), ((frost$core$Equatable*) $tmp1533));
bool $tmp1538 = $tmp1537.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1533)));
// unreffing REF($61:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1530)));
// unreffing REF($57:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1538) goto block9; else goto block10;
block9:;
// line 656
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block10:;
// line 658
org$frostlang$frostc$Type* $tmp1539 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
// unreffing REF($77:org.frostlang.frostc.Type)
return $tmp1539;
block8:;
// line 660
org$frostlang$frostc$Type$Kind* $tmp1540 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1541 = *$tmp1540;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1542;
$tmp1542 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1542->value = $tmp1541;
frost$core$Int64 $tmp1543 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1544 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1543);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1545;
$tmp1545 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1545->value = $tmp1544;
ITable* $tmp1546 = ((frost$core$Equatable*) $tmp1542)->$class->itable;
while ($tmp1546->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1546 = $tmp1546->next;
}
$fn1548 $tmp1547 = $tmp1546->methods[0];
frost$core$Bit $tmp1549 = $tmp1547(((frost$core$Equatable*) $tmp1542), ((frost$core$Equatable*) $tmp1545));
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block13; else goto block14;
block13:;
frost$core$Bit $tmp1551 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
*(&local0) = $tmp1551;
goto block15;
block14:;
*(&local0) = $tmp1549;
goto block15;
block15:;
frost$core$Bit $tmp1552 = *(&local0);
bool $tmp1553 = $tmp1552.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1545)));
// unreffing REF($91:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1542)));
// unreffing REF($87:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1553) goto block11; else goto block12;
block11:;
// line 661
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block12:;
// line 663
frost$core$Bit $tmp1554 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1555 = $tmp1554.value;
if ($tmp1555) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Type$Kind* $tmp1556 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1557 = *$tmp1556;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1558;
$tmp1558 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1558->value = $tmp1557;
frost$core$Int64 $tmp1559 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1560 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1559);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1561;
$tmp1561 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1561->value = $tmp1560;
ITable* $tmp1562 = ((frost$core$Equatable*) $tmp1558)->$class->itable;
while ($tmp1562->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1562 = $tmp1562->next;
}
$fn1564 $tmp1563 = $tmp1562->methods[0];
frost$core$Bit $tmp1565 = $tmp1563(((frost$core$Equatable*) $tmp1558), ((frost$core$Equatable*) $tmp1561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1561)));
// unreffing REF($124:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1558)));
// unreffing REF($120:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local1) = $tmp1565;
goto block20;
block19:;
*(&local1) = $tmp1554;
goto block20;
block20:;
frost$core$Bit $tmp1566 = *(&local1);
bool $tmp1567 = $tmp1566.value;
if ($tmp1567) goto block16; else goto block17;
block16:;
// line 664
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block17:;
// line 666
frost$core$Bit $tmp1568 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param0);
bool $tmp1569 = $tmp1568.value;
if ($tmp1569) goto block21; else goto block22;
block21:;
// line 667
org$frostlang$frostc$Type$Kind* $tmp1570 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1571 = *$tmp1570;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1572;
$tmp1572 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1572->value = $tmp1571;
frost$core$Int64 $tmp1573 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1574 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1573);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1575;
$tmp1575 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1575->value = $tmp1574;
ITable* $tmp1576 = ((frost$core$Equatable*) $tmp1572)->$class->itable;
while ($tmp1576->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1576 = $tmp1576->next;
}
$fn1578 $tmp1577 = $tmp1576->methods[0];
frost$core$Bit $tmp1579 = $tmp1577(((frost$core$Equatable*) $tmp1572), ((frost$core$Equatable*) $tmp1575));
bool $tmp1580 = $tmp1579.value;
if ($tmp1580) goto block25; else goto block26;
block25:;
*(&local2) = $tmp1579;
goto block27;
block26:;
org$frostlang$frostc$Type$Kind* $tmp1581 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1582 = *$tmp1581;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1583;
$tmp1583 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1583->value = $tmp1582;
frost$core$Int64 $tmp1584 = (frost$core$Int64) {19};
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1586)));
// unreffing REF($168:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1583)));
// unreffing REF($164:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local2) = $tmp1590;
goto block27;
block27:;
frost$core$Bit $tmp1591 = *(&local2);
bool $tmp1592 = $tmp1591.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1575)));
// unreffing REF($155:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1572)));
// unreffing REF($151:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1592) goto block23; else goto block24;
block23:;
// line 668
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block24:;
// line 670
frost$core$Bit $tmp1593 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1594 = $tmp1593.value;
if ($tmp1594) goto block28; else goto block29;
block28:;
// line 671
frost$core$String** $tmp1595 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1596 = *$tmp1595;
frost$core$Bit $tmp1597 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1596, &$s1598);
bool $tmp1599 = $tmp1597.value;
if ($tmp1599) goto block30; else goto block31;
block30:;
// line 672
org$frostlang$frostc$Type* $tmp1600 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
// unreffing REF($204:org.frostlang.frostc.Type)
return $tmp1600;
block31:;
// line 674
org$frostlang$frostc$Type* $tmp1601 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
// unreffing REF($212:org.frostlang.frostc.Type)
return $tmp1601;
block29:;
goto block22;
block22:;
// line 677
frost$core$Bit $tmp1602 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param2);
bool $tmp1603 = $tmp1602.value;
if ($tmp1603) goto block32; else goto block33;
block32:;
// line 678
org$frostlang$frostc$Type$Kind* $tmp1604 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1605 = *$tmp1604;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1606;
$tmp1606 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1606->value = $tmp1605;
frost$core$Int64 $tmp1607 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1608 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1607);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1609;
$tmp1609 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1609->value = $tmp1608;
ITable* $tmp1610 = ((frost$core$Equatable*) $tmp1606)->$class->itable;
while ($tmp1610->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1610 = $tmp1610->next;
}
$fn1612 $tmp1611 = $tmp1610->methods[0];
frost$core$Bit $tmp1613 = $tmp1611(((frost$core$Equatable*) $tmp1606), ((frost$core$Equatable*) $tmp1609));
bool $tmp1614 = $tmp1613.value;
if ($tmp1614) goto block36; else goto block37;
block36:;
*(&local3) = $tmp1613;
goto block38;
block37:;
org$frostlang$frostc$Type$Kind* $tmp1615 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1616 = *$tmp1615;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1617;
$tmp1617 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1617->value = $tmp1616;
frost$core$Int64 $tmp1618 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp1619 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1618);
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
// unreffing REF($244:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1617)));
// unreffing REF($240:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local3) = $tmp1624;
goto block38;
block38:;
frost$core$Bit $tmp1625 = *(&local3);
bool $tmp1626 = $tmp1625.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1609)));
// unreffing REF($231:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1606)));
// unreffing REF($227:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1626) goto block34; else goto block35;
block34:;
// line 679
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block35:;
// line 681
frost$core$Bit $tmp1627 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1628 = $tmp1627.value;
if ($tmp1628) goto block39; else goto block40;
block39:;
// line 682
frost$core$String** $tmp1629 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1630 = *$tmp1629;
frost$core$Bit $tmp1631 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1630, &$s1632);
bool $tmp1633 = $tmp1631.value;
if ($tmp1633) goto block41; else goto block42;
block41:;
// line 683
org$frostlang$frostc$Type* $tmp1634 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
// unreffing REF($280:org.frostlang.frostc.Type)
return $tmp1634;
block42:;
// line 685
org$frostlang$frostc$Type* $tmp1635 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
// unreffing REF($288:org.frostlang.frostc.Type)
return $tmp1635;
block40:;
goto block33;
block33:;
// line 688
org$frostlang$frostc$Type$Kind* $tmp1636 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1637 = *$tmp1636;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1638;
$tmp1638 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1638->value = $tmp1637;
frost$core$Int64 $tmp1639 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1640 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1639);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1641;
$tmp1641 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1641->value = $tmp1640;
ITable* $tmp1642 = ((frost$core$Equatable*) $tmp1638)->$class->itable;
while ($tmp1642->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1642 = $tmp1642->next;
}
$fn1644 $tmp1643 = $tmp1642->methods[0];
frost$core$Bit $tmp1645 = $tmp1643(((frost$core$Equatable*) $tmp1638), ((frost$core$Equatable*) $tmp1641));
bool $tmp1646 = $tmp1645.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1641)));
// unreffing REF($303:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1638)));
// unreffing REF($299:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1646) goto block43; else goto block44;
block43:;
// line 689
org$frostlang$frostc$FixedArray** $tmp1647 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1648 = *$tmp1647;
frost$core$Int64 $tmp1649 = (frost$core$Int64) {0};
frost$core$Object* $tmp1650 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1648, $tmp1649);
org$frostlang$frostc$Type* $tmp1651 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1650), param1, param2);
org$frostlang$frostc$Type* $tmp1652 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1651);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
// unreffing REF($323:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
// unreffing REF($322:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1650);
// unreffing REF($320:org.frostlang.frostc.FixedArray.T)
return $tmp1652;
block44:;
// line 691
org$frostlang$frostc$Type$Kind* $tmp1653 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1654 = *$tmp1653;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1655;
$tmp1655 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1655->value = $tmp1654;
frost$core$Int64 $tmp1656 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1657 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1656);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1658;
$tmp1658 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1658->value = $tmp1657;
ITable* $tmp1659 = ((frost$core$Equatable*) $tmp1655)->$class->itable;
while ($tmp1659->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1659 = $tmp1659->next;
}
$fn1661 $tmp1660 = $tmp1659->methods[0];
frost$core$Bit $tmp1662 = $tmp1660(((frost$core$Equatable*) $tmp1655), ((frost$core$Equatable*) $tmp1658));
bool $tmp1663 = $tmp1662.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1658)));
// unreffing REF($343:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1655)));
// unreffing REF($339:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1663) goto block45; else goto block46;
block45:;
// line 692
org$frostlang$frostc$FixedArray** $tmp1664 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1665 = *$tmp1664;
frost$core$Int64 $tmp1666 = (frost$core$Int64) {0};
frost$core$Object* $tmp1667 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1665, $tmp1666);
org$frostlang$frostc$Type* $tmp1668 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, param1, ((org$frostlang$frostc$Type*) $tmp1667));
org$frostlang$frostc$Type* $tmp1669 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1668);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
// unreffing REF($363:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
// unreffing REF($362:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1667);
// unreffing REF($360:org.frostlang.frostc.FixedArray.T)
return $tmp1669;
block46:;
// line 694
org$frostlang$frostc$Type* $tmp1670 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param0);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
org$frostlang$frostc$Type* $tmp1671 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
*(&local4) = $tmp1670;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
// unreffing REF($377:org.frostlang.frostc.Type)
// line 695
org$frostlang$frostc$Type* $tmp1672 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param2);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
org$frostlang$frostc$Type* $tmp1673 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
*(&local5) = $tmp1672;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
// unreffing REF($389:org.frostlang.frostc.Type)
// line 696
org$frostlang$frostc$Type* $tmp1674 = *(&local4);
frost$core$Bit $tmp1675 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1674);
bool $tmp1676 = $tmp1675.value;
if ($tmp1676) goto block49; else goto block50;
block49:;
org$frostlang$frostc$Type* $tmp1677 = *(&local5);
frost$core$Bit $tmp1678 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1677);
*(&local6) = $tmp1678;
goto block51;
block50:;
*(&local6) = $tmp1675;
goto block51;
block51:;
frost$core$Bit $tmp1679 = *(&local6);
bool $tmp1680 = $tmp1679.value;
if ($tmp1680) goto block47; else goto block48;
block47:;
// line 697
frost$collections$HashSet* $tmp1681 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp1681);
*(&local7) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
frost$collections$HashSet* $tmp1682 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
*(&local7) = $tmp1681;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
// unreffing REF($415:frost.collections.HashSet<org.frostlang.frostc.Type>)
// line 698
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1683 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
*(&local8) = param0;
// line 699
org$frostlang$frostc$Type* $tmp1684 = *(&local4);
org$frostlang$frostc$ClassDecl* $tmp1685 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1684);
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
org$frostlang$frostc$ClassDecl* $tmp1686 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1686));
*(&local9) = $tmp1685;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
// unreffing REF($438:org.frostlang.frostc.ClassDecl?)
// line 700
goto block52;
block52:;
org$frostlang$frostc$ClassDecl* $tmp1687 = *(&local9);
frost$core$Bit $tmp1688 = frost$core$Bit$init$builtin_bit($tmp1687 != NULL);
bool $tmp1689 = $tmp1688.value;
if ($tmp1689) goto block53; else goto block54;
block53:;
// line 701
frost$collections$HashSet* $tmp1690 = *(&local7);
org$frostlang$frostc$Type* $tmp1691 = *(&local8);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp1690, ((frost$collections$Key*) $tmp1691));
// line 702
org$frostlang$frostc$ClassDecl* $tmp1692 = *(&local9);
org$frostlang$frostc$Type** $tmp1693 = &$tmp1692->rawSuper;
org$frostlang$frostc$Type* $tmp1694 = *$tmp1693;
frost$core$Bit $tmp1695 = frost$core$Bit$init$builtin_bit($tmp1694 != NULL);
bool $tmp1696 = $tmp1695.value;
if ($tmp1696) goto block55; else goto block57;
block55:;
// line 703
org$frostlang$frostc$Type* $tmp1697 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1698 = *(&local9);
org$frostlang$frostc$Type** $tmp1699 = &$tmp1698->rawSuper;
org$frostlang$frostc$Type* $tmp1700 = *$tmp1699;
org$frostlang$frostc$Type* $tmp1701 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1697, $tmp1700);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
org$frostlang$frostc$Type* $tmp1702 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
*(&local8) = $tmp1701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
// unreffing REF($478:org.frostlang.frostc.Type)
// line 704
org$frostlang$frostc$Type* $tmp1703 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1704 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1703);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
org$frostlang$frostc$ClassDecl* $tmp1705 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
*(&local9) = $tmp1704;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
// unreffing REF($490:org.frostlang.frostc.ClassDecl?)
goto block56;
block57:;
// line 1
// line 707
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1706 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block56;
block56:;
goto block52;
block54:;
// line 710
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp1707 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
*(&local8) = param2;
// line 711
org$frostlang$frostc$Type* $tmp1708 = *(&local5);
org$frostlang$frostc$ClassDecl* $tmp1709 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1708);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
org$frostlang$frostc$ClassDecl* $tmp1710 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local9) = $tmp1709;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
// unreffing REF($520:org.frostlang.frostc.ClassDecl?)
// line 712
goto block58;
block58:;
org$frostlang$frostc$ClassDecl* $tmp1711 = *(&local9);
frost$core$Bit $tmp1712 = frost$core$Bit$init$builtin_bit($tmp1711 != NULL);
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block59; else goto block60;
block59:;
// line 713
frost$collections$HashSet* $tmp1714 = *(&local7);
org$frostlang$frostc$Type* $tmp1715 = *(&local8);
frost$core$Bit $tmp1716 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp1714, ((frost$collections$Key*) $tmp1715));
bool $tmp1717 = $tmp1716.value;
if ($tmp1717) goto block61; else goto block62;
block61:;
// line 714
org$frostlang$frostc$Type* $tmp1718 = *(&local8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
org$frostlang$frostc$ClassDecl* $tmp1719 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
// unreffing cl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1720 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
// unreffing t
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1721 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
// unreffing ancestors
*(&local7) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$Type* $tmp1722 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
// unreffing t2
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1723 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
// unreffing t1
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1718;
block62:;
// line 716
org$frostlang$frostc$ClassDecl* $tmp1724 = *(&local9);
org$frostlang$frostc$Type** $tmp1725 = &$tmp1724->rawSuper;
org$frostlang$frostc$Type* $tmp1726 = *$tmp1725;
frost$core$Bit $tmp1727 = frost$core$Bit$init$builtin_bit($tmp1726 != NULL);
bool $tmp1728 = $tmp1727.value;
if ($tmp1728) goto block63; else goto block65;
block63:;
// line 717
org$frostlang$frostc$Type* $tmp1729 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1730 = *(&local9);
org$frostlang$frostc$Type** $tmp1731 = &$tmp1730->rawSuper;
org$frostlang$frostc$Type* $tmp1732 = *$tmp1731;
org$frostlang$frostc$Type* $tmp1733 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1729, $tmp1732);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
org$frostlang$frostc$Type* $tmp1734 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
*(&local8) = $tmp1733;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
// unreffing REF($591:org.frostlang.frostc.Type)
// line 718
org$frostlang$frostc$Type* $tmp1735 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1736 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1735);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
org$frostlang$frostc$ClassDecl* $tmp1737 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
*(&local9) = $tmp1736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
// unreffing REF($603:org.frostlang.frostc.ClassDecl?)
goto block64;
block65:;
// line 1
// line 721
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1738 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block64;
block64:;
goto block58;
block60:;
org$frostlang$frostc$ClassDecl* $tmp1739 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
// unreffing cl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1740 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1740));
// unreffing t
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1741 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
// unreffing ancestors
*(&local7) = ((frost$collections$HashSet*) NULL);
goto block48;
block48:;
// line 725
org$frostlang$frostc$Type* $tmp1742 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
// unreffing REF($641:org.frostlang.frostc.Type)
org$frostlang$frostc$Type* $tmp1743 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
// unreffing t2
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1744 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
// unreffing t1
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1742;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

// line 733
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
org$frostlang$frostc$Type$Kind* $tmp1745 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1746 = *$tmp1745;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1747;
$tmp1747 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1747->value = $tmp1746;
frost$core$Int64 $tmp1748 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1749 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1748);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1750;
$tmp1750 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1750->value = $tmp1749;
ITable* $tmp1751 = ((frost$core$Equatable*) $tmp1747)->$class->itable;
while ($tmp1751->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1751 = $tmp1751->next;
}
$fn1753 $tmp1752 = $tmp1751->methods[1];
frost$core$Bit $tmp1754 = $tmp1752(((frost$core$Equatable*) $tmp1747), ((frost$core$Equatable*) $tmp1750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1750)));
// unreffing REF($6:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1747)));
// unreffing REF($2:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
bool $tmp1755 = $tmp1754.value;
if ($tmp1755) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1756 = (frost$core$Int64) {738};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1757, $tmp1756, &$s1758);
abort(); // unreachable
block1:;
// line 739
ITable* $tmp1759 = ((frost$collections$MapView*) param1)->$class->itable;
while ($tmp1759->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1759 = $tmp1759->next;
}
$fn1761 $tmp1760 = $tmp1759->methods[0];
frost$core$Int64 $tmp1762 = $tmp1760(((frost$collections$MapView*) param1));
frost$core$Int64 $tmp1763 = (frost$core$Int64) {0};
frost$core$Bit $tmp1764 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1762, $tmp1763);
bool $tmp1765 = $tmp1764.value;
if ($tmp1765) goto block3; else goto block4;
block3:;
// line 740
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block4:;
// line 742
org$frostlang$frostc$Type$Kind* $tmp1766 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1767 = *$tmp1766;
frost$core$Int64 $tmp1768 = $tmp1767.$rawValue;
frost$core$Int64 $tmp1769 = (frost$core$Int64) {12};
frost$core$Bit $tmp1770 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1768, $tmp1769);
bool $tmp1771 = $tmp1770.value;
if ($tmp1771) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp1772 = (frost$core$Int64) {13};
frost$core$Bit $tmp1773 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1768, $tmp1772);
bool $tmp1774 = $tmp1773.value;
if ($tmp1774) goto block6; else goto block8;
block6:;
// line 744
frost$core$String** $tmp1775 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1776 = *$tmp1775;
frost$core$Object* $tmp1777 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param1, ((frost$collections$Key*) $tmp1776));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1777)));
org$frostlang$frostc$Type* $tmp1778 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1777);
frost$core$Frost$unref$frost$core$Object$Q($tmp1777);
// unreffing REF($50:frost.collections.HashMap.V?)
// line 745
org$frostlang$frostc$Type* $tmp1779 = *(&local0);
frost$core$Bit $tmp1780 = frost$core$Bit$init$builtin_bit($tmp1779 != NULL);
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block9; else goto block10;
block9:;
// line 746
org$frostlang$frostc$Type* $tmp1782 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
org$frostlang$frostc$Type* $tmp1783 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
// unreffing found
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1782;
block10:;
// line 748
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1784 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
// unreffing found
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return param0;
block8:;
frost$core$Int64 $tmp1785 = (frost$core$Int64) {11};
frost$core$Bit $tmp1786 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1768, $tmp1785);
bool $tmp1787 = $tmp1786.value;
if ($tmp1787) goto block11; else goto block12;
block11:;
// line 751
org$frostlang$frostc$FixedArray** $tmp1788 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1789 = *$tmp1788;
frost$core$Int64 $tmp1790 = (frost$core$Int64) {0};
frost$core$Object* $tmp1791 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1789, $tmp1790);
org$frostlang$frostc$Type* $tmp1792 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1791), param1);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
org$frostlang$frostc$Type* $tmp1793 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
*(&local1) = $tmp1792;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
// unreffing REF($100:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1791);
// unreffing REF($98:org.frostlang.frostc.FixedArray.T)
// line 752
frost$collections$Array* $tmp1794 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1794);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
frost$collections$Array* $tmp1795 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
*(&local2) = $tmp1794;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
// unreffing REF($115:frost.collections.Array<org.frostlang.frostc.Type>)
// line 753
frost$core$Int64 $tmp1796 = (frost$core$Int64) {1};
org$frostlang$frostc$FixedArray** $tmp1797 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1798 = *$tmp1797;
ITable* $tmp1799 = ((frost$collections$CollectionView*) $tmp1798)->$class->itable;
while ($tmp1799->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1799 = $tmp1799->next;
}
$fn1801 $tmp1800 = $tmp1799->methods[0];
frost$core$Int64 $tmp1802 = $tmp1800(((frost$collections$CollectionView*) $tmp1798));
frost$core$Bit $tmp1803 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1804 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1796, $tmp1802, $tmp1803);
frost$core$Int64 $tmp1805 = $tmp1804.min;
*(&local3) = $tmp1805;
frost$core$Int64 $tmp1806 = $tmp1804.max;
frost$core$Bit $tmp1807 = $tmp1804.inclusive;
bool $tmp1808 = $tmp1807.value;
frost$core$Int64 $tmp1809 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1810 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1809);
if ($tmp1808) goto block16; else goto block17;
block16:;
int64_t $tmp1811 = $tmp1805.value;
int64_t $tmp1812 = $tmp1806.value;
bool $tmp1813 = $tmp1811 <= $tmp1812;
frost$core$Bit $tmp1814 = (frost$core$Bit) {$tmp1813};
bool $tmp1815 = $tmp1814.value;
if ($tmp1815) goto block13; else goto block14;
block17:;
int64_t $tmp1816 = $tmp1805.value;
int64_t $tmp1817 = $tmp1806.value;
bool $tmp1818 = $tmp1816 < $tmp1817;
frost$core$Bit $tmp1819 = (frost$core$Bit) {$tmp1818};
bool $tmp1820 = $tmp1819.value;
if ($tmp1820) goto block13; else goto block14;
block13:;
// line 754
frost$collections$Array* $tmp1821 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp1822 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1823 = *$tmp1822;
frost$core$Int64 $tmp1824 = *(&local3);
frost$core$Object* $tmp1825 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1823, $tmp1824);
org$frostlang$frostc$Type* $tmp1826 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1825), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1821, ((frost$core$Object*) $tmp1826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
// unreffing REF($167:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1825);
// unreffing REF($165:org.frostlang.frostc.FixedArray.T)
goto block15;
block15:;
frost$core$Int64 $tmp1827 = *(&local3);
int64_t $tmp1828 = $tmp1806.value;
int64_t $tmp1829 = $tmp1827.value;
int64_t $tmp1830 = $tmp1828 - $tmp1829;
frost$core$Int64 $tmp1831 = (frost$core$Int64) {$tmp1830};
frost$core$UInt64 $tmp1832 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1831);
if ($tmp1808) goto block19; else goto block20;
block19:;
uint64_t $tmp1833 = $tmp1832.value;
uint64_t $tmp1834 = $tmp1810.value;
bool $tmp1835 = $tmp1833 >= $tmp1834;
frost$core$Bit $tmp1836 = (frost$core$Bit) {$tmp1835};
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block18; else goto block14;
block20:;
uint64_t $tmp1838 = $tmp1832.value;
uint64_t $tmp1839 = $tmp1810.value;
bool $tmp1840 = $tmp1838 > $tmp1839;
frost$core$Bit $tmp1841 = (frost$core$Bit) {$tmp1840};
bool $tmp1842 = $tmp1841.value;
if ($tmp1842) goto block18; else goto block14;
block18:;
int64_t $tmp1843 = $tmp1827.value;
int64_t $tmp1844 = $tmp1809.value;
int64_t $tmp1845 = $tmp1843 + $tmp1844;
frost$core$Int64 $tmp1846 = (frost$core$Int64) {$tmp1845};
*(&local3) = $tmp1846;
goto block13;
block14:;
// line 756
org$frostlang$frostc$Type* $tmp1847 = *(&local1);
frost$collections$Array* $tmp1848 = *(&local2);
org$frostlang$frostc$Type* $tmp1849 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1847, ((frost$collections$ListView*) $tmp1848));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
// unreffing REF($206:org.frostlang.frostc.Type)
frost$collections$Array* $tmp1850 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
// unreffing remappedArgs
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1851 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
// unreffing base
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1849;
block12:;
frost$core$Int64 $tmp1852 = (frost$core$Int64) {1};
frost$core$Bit $tmp1853 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1768, $tmp1852);
bool $tmp1854 = $tmp1853.value;
if ($tmp1854) goto block21; else goto block22;
block21:;
// line 759
org$frostlang$frostc$FixedArray** $tmp1855 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1856 = *$tmp1855;
frost$core$Int64 $tmp1857 = (frost$core$Int64) {0};
frost$core$Object* $tmp1858 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1856, $tmp1857);
org$frostlang$frostc$Type* $tmp1859 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1858), param1);
org$frostlang$frostc$Type* $tmp1860 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1859);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
// unreffing REF($236:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
// unreffing REF($235:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1858);
// unreffing REF($233:org.frostlang.frostc.FixedArray.T)
return $tmp1860;
block22:;
frost$core$Int64 $tmp1861 = (frost$core$Int64) {16};
frost$core$Bit $tmp1862 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1768, $tmp1861);
bool $tmp1863 = $tmp1862.value;
if ($tmp1863) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp1864 = (frost$core$Int64) {15};
frost$core$Bit $tmp1865 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1768, $tmp1864);
bool $tmp1866 = $tmp1865.value;
if ($tmp1866) goto block23; else goto block25;
block25:;
frost$core$Int64 $tmp1867 = (frost$core$Int64) {18};
frost$core$Bit $tmp1868 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1768, $tmp1867);
bool $tmp1869 = $tmp1868.value;
if ($tmp1869) goto block23; else goto block26;
block26:;
frost$core$Int64 $tmp1870 = (frost$core$Int64) {17};
frost$core$Bit $tmp1871 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1768, $tmp1870);
bool $tmp1872 = $tmp1871.value;
if ($tmp1872) goto block23; else goto block27;
block23:;
// line 762
frost$collections$Array* $tmp1873 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1873);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
frost$collections$Array* $tmp1874 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
*(&local4) = $tmp1873;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
// unreffing REF($266:frost.collections.Array<org.frostlang.frostc.Type>)
// line 763
org$frostlang$frostc$FixedArray** $tmp1875 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1876 = *$tmp1875;
ITable* $tmp1877 = ((frost$collections$CollectionView*) $tmp1876)->$class->itable;
while ($tmp1877->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1877 = $tmp1877->next;
}
$fn1879 $tmp1878 = $tmp1877->methods[0];
frost$core$Int64 $tmp1880 = $tmp1878(((frost$collections$CollectionView*) $tmp1876));
frost$core$Int64 $tmp1881 = (frost$core$Int64) {1};
int64_t $tmp1882 = $tmp1880.value;
int64_t $tmp1883 = $tmp1881.value;
bool $tmp1884 = $tmp1882 >= $tmp1883;
frost$core$Bit $tmp1885 = (frost$core$Bit) {$tmp1884};
bool $tmp1886 = $tmp1885.value;
if ($tmp1886) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp1887 = (frost$core$Int64) {763};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1888, $tmp1887);
abort(); // unreachable
block28:;
// line 764
frost$core$Int64 $tmp1889 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1890 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1891 = *$tmp1890;
ITable* $tmp1892 = ((frost$collections$CollectionView*) $tmp1891)->$class->itable;
while ($tmp1892->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1892 = $tmp1892->next;
}
$fn1894 $tmp1893 = $tmp1892->methods[0];
frost$core$Int64 $tmp1895 = $tmp1893(((frost$collections$CollectionView*) $tmp1891));
frost$core$Int64 $tmp1896 = (frost$core$Int64) {1};
int64_t $tmp1897 = $tmp1895.value;
int64_t $tmp1898 = $tmp1896.value;
int64_t $tmp1899 = $tmp1897 - $tmp1898;
frost$core$Int64 $tmp1900 = (frost$core$Int64) {$tmp1899};
frost$core$Bit $tmp1901 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1902 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1889, $tmp1900, $tmp1901);
frost$core$Int64 $tmp1903 = $tmp1902.min;
*(&local5) = $tmp1903;
frost$core$Int64 $tmp1904 = $tmp1902.max;
frost$core$Bit $tmp1905 = $tmp1902.inclusive;
bool $tmp1906 = $tmp1905.value;
frost$core$Int64 $tmp1907 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1908 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1907);
if ($tmp1906) goto block33; else goto block34;
block33:;
int64_t $tmp1909 = $tmp1903.value;
int64_t $tmp1910 = $tmp1904.value;
bool $tmp1911 = $tmp1909 <= $tmp1910;
frost$core$Bit $tmp1912 = (frost$core$Bit) {$tmp1911};
bool $tmp1913 = $tmp1912.value;
if ($tmp1913) goto block30; else goto block31;
block34:;
int64_t $tmp1914 = $tmp1903.value;
int64_t $tmp1915 = $tmp1904.value;
bool $tmp1916 = $tmp1914 < $tmp1915;
frost$core$Bit $tmp1917 = (frost$core$Bit) {$tmp1916};
bool $tmp1918 = $tmp1917.value;
if ($tmp1918) goto block30; else goto block31;
block30:;
// line 765
frost$collections$Array* $tmp1919 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp1920 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1921 = *$tmp1920;
frost$core$Int64 $tmp1922 = *(&local5);
frost$core$Object* $tmp1923 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1921, $tmp1922);
org$frostlang$frostc$Type* $tmp1924 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1923), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1919, ((frost$core$Object*) $tmp1924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
// unreffing REF($339:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1923);
// unreffing REF($337:org.frostlang.frostc.FixedArray.T)
goto block32;
block32:;
frost$core$Int64 $tmp1925 = *(&local5);
int64_t $tmp1926 = $tmp1904.value;
int64_t $tmp1927 = $tmp1925.value;
int64_t $tmp1928 = $tmp1926 - $tmp1927;
frost$core$Int64 $tmp1929 = (frost$core$Int64) {$tmp1928};
frost$core$UInt64 $tmp1930 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1929);
if ($tmp1906) goto block36; else goto block37;
block36:;
uint64_t $tmp1931 = $tmp1930.value;
uint64_t $tmp1932 = $tmp1908.value;
bool $tmp1933 = $tmp1931 >= $tmp1932;
frost$core$Bit $tmp1934 = (frost$core$Bit) {$tmp1933};
bool $tmp1935 = $tmp1934.value;
if ($tmp1935) goto block35; else goto block31;
block37:;
uint64_t $tmp1936 = $tmp1930.value;
uint64_t $tmp1937 = $tmp1908.value;
bool $tmp1938 = $tmp1936 > $tmp1937;
frost$core$Bit $tmp1939 = (frost$core$Bit) {$tmp1938};
bool $tmp1940 = $tmp1939.value;
if ($tmp1940) goto block35; else goto block31;
block35:;
int64_t $tmp1941 = $tmp1925.value;
int64_t $tmp1942 = $tmp1907.value;
int64_t $tmp1943 = $tmp1941 + $tmp1942;
frost$core$Int64 $tmp1944 = (frost$core$Int64) {$tmp1943};
*(&local5) = $tmp1944;
goto block30;
block31:;
// line 767
org$frostlang$frostc$Position* $tmp1945 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp1946 = *$tmp1945;
org$frostlang$frostc$Type$Kind* $tmp1947 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1948 = *$tmp1947;
frost$collections$Array* $tmp1949 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp1950 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1951 = *$tmp1950;
org$frostlang$frostc$FixedArray** $tmp1952 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1953 = *$tmp1952;
ITable* $tmp1954 = ((frost$collections$CollectionView*) $tmp1953)->$class->itable;
while ($tmp1954->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1954 = $tmp1954->next;
}
$fn1956 $tmp1955 = $tmp1954->methods[0];
frost$core$Int64 $tmp1957 = $tmp1955(((frost$collections$CollectionView*) $tmp1953));
frost$core$Int64 $tmp1958 = (frost$core$Int64) {1};
int64_t $tmp1959 = $tmp1957.value;
int64_t $tmp1960 = $tmp1958.value;
int64_t $tmp1961 = $tmp1959 - $tmp1960;
frost$core$Int64 $tmp1962 = (frost$core$Int64) {$tmp1961};
frost$core$Object* $tmp1963 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1951, $tmp1962);
org$frostlang$frostc$Type* $tmp1964 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1963), param1);
frost$core$Int64* $tmp1965 = &param0->priority;
frost$core$Int64 $tmp1966 = *$tmp1965;
org$frostlang$frostc$Type* $tmp1967 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1946, $tmp1948, ((frost$collections$ListView*) $tmp1949), $tmp1964, $tmp1966);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
// unreffing REF($401:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
// unreffing REF($398:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1963);
// unreffing REF($396:org.frostlang.frostc.FixedArray.T)
frost$collections$Array* $tmp1968 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
// unreffing parameters
*(&local4) = ((frost$collections$Array*) NULL);
return $tmp1967;
block27:;
// line 771
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block5:;
frost$core$Bit $tmp1969 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1970 = $tmp1969.value;
if ($tmp1970) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp1971 = (frost$core$Int64) {738};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1972, $tmp1971, &$s1973);
abort(); // unreachable
block38:;
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frostc$Type$get_hash$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

// line 778
frost$core$String** $tmp1974 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1975 = *$tmp1974;
ITable* $tmp1976 = ((frost$collections$Key*) $tmp1975)->$class->itable;
while ($tmp1976->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp1976 = $tmp1976->next;
}
$fn1978 $tmp1977 = $tmp1976->methods[0];
frost$core$Int64 $tmp1979 = $tmp1977(((frost$collections$Key*) $tmp1975));
return $tmp1979;

}
frost$core$String* org$frostlang$frostc$Type$convert$R$frost$core$String(org$frostlang$frostc$Type* param0) {

// line 783
frost$core$String** $tmp1980 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1981 = *$tmp1980;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
return $tmp1981;

}
void org$frostlang$frostc$Type$cleanup(org$frostlang$frostc$Type* param0) {

// line 4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$FixedArray** $tmp1982 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1983 = *$tmp1982;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
frost$core$Weak** $tmp1984 = &param0->genericClassParameter;
frost$core$Weak* $tmp1985 = *$tmp1984;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
frost$core$Weak** $tmp1986 = &param0->genericMethodParameter;
frost$core$Weak* $tmp1987 = *$tmp1986;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
org$frostlang$frostc$MethodRef** $tmp1988 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp1989 = *$tmp1988;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
return;

}

