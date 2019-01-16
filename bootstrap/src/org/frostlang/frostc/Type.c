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
typedef frost$core$Bit (*$fn1268)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1278)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1304)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1324)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1335)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1347)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1359)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1375)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1390)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1401)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1413)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1425)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1445)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1477)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1488)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1500)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1512)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1535)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1556)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1571)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1583)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1599)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1613)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1624)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1647)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1658)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1679)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1701)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1828)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1836)(frost$collections$MapView*);
typedef frost$core$Int64 (*$fn1891)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1984)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2004)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2081)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2103)(frost$collections$Key*);

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
static frost$core$String $s1219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x69\x73\x4d\x65\x74\x68\x6f\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 89, 55190418378938616, NULL };
static frost$core$String $s1251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, 1146821061406687137, NULL };
static frost$core$String $s1259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -4916982935192335398, NULL };
static frost$core$String $s1289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1364 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 97, -2976789655376824909, NULL };
static frost$core$String $s1371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s1441 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s1459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 119, 5693748891149284325, NULL };
static frost$core$String $s1466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1524 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1525 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s1633 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1688 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1710 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1741 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1742 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s1752 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1753 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s1759 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1760 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1788 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1789 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s1799 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s1806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1807 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1832 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 168, 1028753922056655266, NULL };
static frost$core$String $s1861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1873 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1874 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1887 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1888 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s1917 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1918 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1955 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1956 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1980 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s1993 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2000 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2001 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s2035 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2036 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s2070 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2071 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s2077 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2078 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s2097 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s2098 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 168, 5014262021098371418, NULL };

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
frost$core$Bit $tmp1216 = frost$core$Bit$init$builtin_bit($tmp1215 != NULL);
bool $tmp1217 = $tmp1216.value;
if ($tmp1217) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1218 = (frost$core$Int64) {577};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1219, $tmp1218, &$s1220);
abort(); // unreachable
block4:;
frost$core$Int64 $tmp1221 = (frost$core$Int64) {0};
frost$core$Object* $tmp1222 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1215, $tmp1221);
org$frostlang$frostc$Type* $tmp1223 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1224 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1222), $tmp1223);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
// unreffing REF($26:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1222);
// unreffing REF($24:org.frostlang.frostc.FixedArray.T)
*(&local0) = $tmp1224;
goto block3;
block2:;
*(&local0) = $tmp1212;
goto block3;
block3:;
frost$core$Bit $tmp1225 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1208)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1205)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
return $tmp1225;

}
frost$core$Bit org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 581
org$frostlang$frostc$Type$Kind* $tmp1226 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1227 = *$tmp1226;
frost$core$Int64 $tmp1228 = $tmp1227.$rawValue;
frost$core$Int64 $tmp1229 = (frost$core$Int64) {16};
frost$core$Bit $tmp1230 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1228, $tmp1229);
bool $tmp1231 = $tmp1230.value;
if ($tmp1231) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1232 = (frost$core$Int64) {15};
frost$core$Bit $tmp1233 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1228, $tmp1232);
bool $tmp1234 = $tmp1233.value;
if ($tmp1234) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp1235 = (frost$core$Int64) {18};
frost$core$Bit $tmp1236 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1228, $tmp1235);
bool $tmp1237 = $tmp1236.value;
if ($tmp1237) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1238 = (frost$core$Int64) {17};
frost$core$Bit $tmp1239 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1228, $tmp1238);
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block2; else goto block6;
block2:;
// line 583
frost$core$Bit $tmp1241 = frost$core$Bit$init$builtin_bit(true);
return $tmp1241;
block6:;
// line 586
frost$core$Bit $tmp1242 = frost$core$Bit$init$builtin_bit(false);
return $tmp1242;
block1:;
frost$core$Bit $tmp1243 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1244 = $tmp1243.value;
if ($tmp1244) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp1245 = (frost$core$Int64) {580};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1246, $tmp1245, &$s1247);
abort(); // unreachable
block7:;
abort(); // unreachable

}
frost$core$Bit org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 592
frost$core$String** $tmp1248 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1249 = *$tmp1248;
frost$core$Bit $tmp1250 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1249, &$s1251);
return $tmp1250;

}
frost$core$Bit org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 596
frost$core$String** $tmp1252 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1253 = *$tmp1252;
frost$core$Bit $tmp1254 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1253, &$s1255);
return $tmp1254;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 600
frost$core$String** $tmp1256 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1257 = *$tmp1256;
frost$core$Bit $tmp1258 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1257, &$s1259);
return $tmp1258;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 604
org$frostlang$frostc$Type$Kind* $tmp1260 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1261 = *$tmp1260;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1262;
$tmp1262 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1262->value = $tmp1261;
frost$core$Int64 $tmp1263 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1264 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1263);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1265;
$tmp1265 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1265->value = $tmp1264;
ITable* $tmp1266 = ((frost$core$Equatable*) $tmp1262)->$class->itable;
while ($tmp1266->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1266 = $tmp1266->next;
}
$fn1268 $tmp1267 = $tmp1266->methods[0];
frost$core$Bit $tmp1269 = $tmp1267(((frost$core$Equatable*) $tmp1262), ((frost$core$Equatable*) $tmp1265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1265)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1262)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
return $tmp1269;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 608
org$frostlang$frostc$Type$Kind* $tmp1270 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1271 = *$tmp1270;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1272;
$tmp1272 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1272->value = $tmp1271;
frost$core$Int64 $tmp1273 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1274 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1273);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1275;
$tmp1275 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1275->value = $tmp1274;
ITable* $tmp1276 = ((frost$core$Equatable*) $tmp1272)->$class->itable;
while ($tmp1276->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1276 = $tmp1276->next;
}
$fn1278 $tmp1277 = $tmp1276->methods[0];
frost$core$Bit $tmp1279 = $tmp1277(((frost$core$Equatable*) $tmp1272), ((frost$core$Equatable*) $tmp1275));
bool $tmp1280 = $tmp1279.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1275)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1272)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1280) goto block1; else goto block2;
block1:;
// line 609
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 611
frost$collections$Array* $tmp1281 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1281);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$collections$Array* $tmp1282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
*(&local0) = $tmp1281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
// unreffing REF($23:frost.collections.Array<org.frostlang.frostc.Type>)
// line 612
frost$collections$Array* $tmp1283 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1283, ((frost$core$Object*) param0));
// line 613
org$frostlang$frostc$Type* $tmp1284 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String** $tmp1285 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1286 = *$tmp1285;
frost$core$String* $tmp1287 = frost$core$String$convert$R$frost$core$String($tmp1286);
frost$core$String* $tmp1288 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1287, &$s1289);
frost$core$Int64 $tmp1290 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1291 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1290);
org$frostlang$frostc$Position $tmp1292 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp1293 = *(&local0);
frost$core$Bit $tmp1294 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp1284, $tmp1288, $tmp1291, $tmp1292, ((frost$collections$ListView*) $tmp1293), $tmp1294);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
// unreffing REF($47:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
// unreffing REF($46:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
// unreffing REF($42:org.frostlang.frostc.Type)
frost$collections$Array* $tmp1295 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
// unreffing subtypes
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1284;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 617
org$frostlang$frostc$Type$Kind* $tmp1296 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1297 = *$tmp1296;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1298;
$tmp1298 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1298->value = $tmp1297;
frost$core$Int64 $tmp1299 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1300 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1299);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1301;
$tmp1301 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1301->value = $tmp1300;
ITable* $tmp1302 = ((frost$core$Equatable*) $tmp1298)->$class->itable;
while ($tmp1302->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1302 = $tmp1302->next;
}
$fn1304 $tmp1303 = $tmp1302->methods[1];
frost$core$Bit $tmp1305 = $tmp1303(((frost$core$Equatable*) $tmp1298), ((frost$core$Equatable*) $tmp1301));
bool $tmp1306 = $tmp1305.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1301)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1298)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1306) goto block1; else goto block2;
block1:;
// line 618
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 620
org$frostlang$frostc$FixedArray** $tmp1307 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1308 = *$tmp1307;
frost$core$Bit $tmp1309 = frost$core$Bit$init$builtin_bit($tmp1308 != NULL);
bool $tmp1310 = $tmp1309.value;
if ($tmp1310) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp1311 = (frost$core$Int64) {620};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1312, $tmp1311, &$s1313);
abort(); // unreachable
block3:;
frost$core$Int64 $tmp1314 = (frost$core$Int64) {0};
frost$core$Object* $tmp1315 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1308, $tmp1314);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1315)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1315);
// unreffing REF($35:org.frostlang.frostc.FixedArray.T)
return ((org$frostlang$frostc$Type*) $tmp1315);

}
frost$core$Int64 org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind* $tmp1316 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1317 = *$tmp1316;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1318;
$tmp1318 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1318->value = $tmp1317;
frost$core$Int64 $tmp1319 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1320 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1319);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1321;
$tmp1321 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1321->value = $tmp1320;
ITable* $tmp1322 = ((frost$core$Equatable*) $tmp1318)->$class->itable;
while ($tmp1322->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1322 = $tmp1322->next;
}
$fn1324 $tmp1323 = $tmp1322->methods[0];
frost$core$Bit $tmp1325 = $tmp1323(((frost$core$Equatable*) $tmp1318), ((frost$core$Equatable*) $tmp1321));
bool $tmp1326 = $tmp1325.value;
if ($tmp1326) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1325;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1327 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1328 = *$tmp1327;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1329;
$tmp1329 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1329->value = $tmp1328;
frost$core$Int64 $tmp1330 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1331 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1330);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1332;
$tmp1332 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1332->value = $tmp1331;
ITable* $tmp1333 = ((frost$core$Equatable*) $tmp1329)->$class->itable;
while ($tmp1333->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1333 = $tmp1333->next;
}
$fn1335 $tmp1334 = $tmp1333->methods[0];
frost$core$Bit $tmp1336 = $tmp1334(((frost$core$Equatable*) $tmp1329), ((frost$core$Equatable*) $tmp1332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1332)));
// unreffing REF($19:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1329)));
// unreffing REF($15:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local2) = $tmp1336;
goto block3;
block3:;
frost$core$Bit $tmp1337 = *(&local2);
bool $tmp1338 = $tmp1337.value;
if ($tmp1338) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1337;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1339 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1340 = *$tmp1339;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1341;
$tmp1341 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1341->value = $tmp1340;
frost$core$Int64 $tmp1342 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1343 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1342);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1344;
$tmp1344 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1344->value = $tmp1343;
ITable* $tmp1345 = ((frost$core$Equatable*) $tmp1341)->$class->itable;
while ($tmp1345->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1345 = $tmp1345->next;
}
$fn1347 $tmp1346 = $tmp1345->methods[0];
frost$core$Bit $tmp1348 = $tmp1346(((frost$core$Equatable*) $tmp1341), ((frost$core$Equatable*) $tmp1344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1344)));
// unreffing REF($41:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1341)));
// unreffing REF($37:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local1) = $tmp1348;
goto block6;
block6:;
frost$core$Bit $tmp1349 = *(&local1);
bool $tmp1350 = $tmp1349.value;
if ($tmp1350) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1349;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1351 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1352 = *$tmp1351;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1353;
$tmp1353 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1353->value = $tmp1352;
frost$core$Int64 $tmp1354 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1355 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1354);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1356;
$tmp1356 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1356->value = $tmp1355;
ITable* $tmp1357 = ((frost$core$Equatable*) $tmp1353)->$class->itable;
while ($tmp1357->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1357 = $tmp1357->next;
}
$fn1359 $tmp1358 = $tmp1357->methods[0];
frost$core$Bit $tmp1360 = $tmp1358(((frost$core$Equatable*) $tmp1353), ((frost$core$Equatable*) $tmp1356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1356)));
// unreffing REF($63:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1353)));
// unreffing REF($59:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local0) = $tmp1360;
goto block9;
block9:;
frost$core$Bit $tmp1361 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1321)));
// unreffing REF($6:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1318)));
// unreffing REF($2:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
bool $tmp1362 = $tmp1361.value;
if ($tmp1362) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1363 = (frost$core$Int64) {625};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1364, $tmp1363, &$s1365);
abort(); // unreachable
block10:;
// line 626
org$frostlang$frostc$FixedArray** $tmp1366 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1367 = *$tmp1366;
frost$core$Bit $tmp1368 = frost$core$Bit$init$builtin_bit($tmp1367 != NULL);
bool $tmp1369 = $tmp1368.value;
if ($tmp1369) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1370 = (frost$core$Int64) {626};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1371, $tmp1370, &$s1372);
abort(); // unreachable
block12:;
ITable* $tmp1373 = ((frost$collections$CollectionView*) $tmp1367)->$class->itable;
while ($tmp1373->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1373 = $tmp1373->next;
}
$fn1375 $tmp1374 = $tmp1373->methods[0];
frost$core$Int64 $tmp1376 = $tmp1374(((frost$collections$CollectionView*) $tmp1367));
frost$core$Int64 $tmp1377 = (frost$core$Int64) {1};
int64_t $tmp1378 = $tmp1376.value;
int64_t $tmp1379 = $tmp1377.value;
int64_t $tmp1380 = $tmp1378 - $tmp1379;
frost$core$Int64 $tmp1381 = (frost$core$Int64) {$tmp1380};
return $tmp1381;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
org$frostlang$frostc$Type$Kind* $tmp1382 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1383 = *$tmp1382;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1384;
$tmp1384 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1384->value = $tmp1383;
frost$core$Int64 $tmp1385 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1386 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1385);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1387;
$tmp1387 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1387->value = $tmp1386;
ITable* $tmp1388 = ((frost$core$Equatable*) $tmp1384)->$class->itable;
while ($tmp1388->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1388 = $tmp1388->next;
}
$fn1390 $tmp1389 = $tmp1388->methods[0];
frost$core$Bit $tmp1391 = $tmp1389(((frost$core$Equatable*) $tmp1384), ((frost$core$Equatable*) $tmp1387));
bool $tmp1392 = $tmp1391.value;
if ($tmp1392) goto block1; else goto block2;
block1:;
*(&local4) = $tmp1391;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1393 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1394 = *$tmp1393;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1395;
$tmp1395 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1395->value = $tmp1394;
frost$core$Int64 $tmp1396 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1397 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1396);
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
// unreffing REF($19:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1395)));
// unreffing REF($15:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local4) = $tmp1402;
goto block3;
block3:;
frost$core$Bit $tmp1403 = *(&local4);
bool $tmp1404 = $tmp1403.value;
if ($tmp1404) goto block4; else goto block5;
block4:;
*(&local3) = $tmp1403;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1405 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1406 = *$tmp1405;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1407;
$tmp1407 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1407->value = $tmp1406;
frost$core$Int64 $tmp1408 = (frost$core$Int64) {17};
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1410)));
// unreffing REF($41:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1407)));
// unreffing REF($37:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local3) = $tmp1414;
goto block6;
block6:;
frost$core$Bit $tmp1415 = *(&local3);
bool $tmp1416 = $tmp1415.value;
if ($tmp1416) goto block7; else goto block8;
block7:;
*(&local2) = $tmp1415;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1417 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1418 = *$tmp1417;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1419;
$tmp1419 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1419->value = $tmp1418;
frost$core$Int64 $tmp1420 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1421 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1420);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1422;
$tmp1422 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1422->value = $tmp1421;
ITable* $tmp1423 = ((frost$core$Equatable*) $tmp1419)->$class->itable;
while ($tmp1423->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1423 = $tmp1423->next;
}
$fn1425 $tmp1424 = $tmp1423->methods[0];
frost$core$Bit $tmp1426 = $tmp1424(((frost$core$Equatable*) $tmp1419), ((frost$core$Equatable*) $tmp1422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1422)));
// unreffing REF($63:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1419)));
// unreffing REF($59:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local2) = $tmp1426;
goto block9;
block9:;
frost$core$Bit $tmp1427 = *(&local2);
bool $tmp1428 = $tmp1427.value;
if ($tmp1428) goto block10; else goto block11;
block10:;
frost$core$Int64 $tmp1429 = (frost$core$Int64) {0};
int64_t $tmp1430 = param1.value;
int64_t $tmp1431 = $tmp1429.value;
bool $tmp1432 = $tmp1430 >= $tmp1431;
frost$core$Bit $tmp1433 = (frost$core$Bit) {$tmp1432};
*(&local1) = $tmp1433;
goto block12;
block11:;
*(&local1) = $tmp1427;
goto block12;
block12:;
frost$core$Bit $tmp1434 = *(&local1);
bool $tmp1435 = $tmp1434.value;
if ($tmp1435) goto block13; else goto block14;
block13:;
org$frostlang$frostc$FixedArray** $tmp1436 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1437 = *$tmp1436;
frost$core$Bit $tmp1438 = frost$core$Bit$init$builtin_bit($tmp1437 != NULL);
bool $tmp1439 = $tmp1438.value;
if ($tmp1439) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp1440 = (frost$core$Int64) {630};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1441, $tmp1440, &$s1442);
abort(); // unreachable
block16:;
ITable* $tmp1443 = ((frost$collections$CollectionView*) $tmp1437)->$class->itable;
while ($tmp1443->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1443 = $tmp1443->next;
}
$fn1445 $tmp1444 = $tmp1443->methods[0];
frost$core$Int64 $tmp1446 = $tmp1444(((frost$collections$CollectionView*) $tmp1437));
frost$core$Int64 $tmp1447 = (frost$core$Int64) {1};
int64_t $tmp1448 = $tmp1446.value;
int64_t $tmp1449 = $tmp1447.value;
int64_t $tmp1450 = $tmp1448 - $tmp1449;
frost$core$Int64 $tmp1451 = (frost$core$Int64) {$tmp1450};
int64_t $tmp1452 = param1.value;
int64_t $tmp1453 = $tmp1451.value;
bool $tmp1454 = $tmp1452 < $tmp1453;
frost$core$Bit $tmp1455 = (frost$core$Bit) {$tmp1454};
*(&local0) = $tmp1455;
goto block15;
block14:;
*(&local0) = $tmp1434;
goto block15;
block15:;
frost$core$Bit $tmp1456 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1387)));
// unreffing REF($6:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1384)));
// unreffing REF($2:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
bool $tmp1457 = $tmp1456.value;
if ($tmp1457) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp1458 = (frost$core$Int64) {631};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1459, $tmp1458, &$s1460);
abort(); // unreachable
block18:;
// line 632
org$frostlang$frostc$FixedArray** $tmp1461 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1462 = *$tmp1461;
frost$core$Bit $tmp1463 = frost$core$Bit$init$builtin_bit($tmp1462 != NULL);
bool $tmp1464 = $tmp1463.value;
if ($tmp1464) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp1465 = (frost$core$Int64) {632};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1466, $tmp1465, &$s1467);
abort(); // unreachable
block20:;
frost$core$Object* $tmp1468 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1462, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1468)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1468);
// unreffing REF($138:org.frostlang.frostc.FixedArray.T)
return ((org$frostlang$frostc$Type*) $tmp1468);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind* $tmp1469 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1470 = *$tmp1469;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1471;
$tmp1471 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1471->value = $tmp1470;
frost$core$Int64 $tmp1472 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1473 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1472);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1474;
$tmp1474 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1474->value = $tmp1473;
ITable* $tmp1475 = ((frost$core$Equatable*) $tmp1471)->$class->itable;
while ($tmp1475->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1475 = $tmp1475->next;
}
$fn1477 $tmp1476 = $tmp1475->methods[0];
frost$core$Bit $tmp1478 = $tmp1476(((frost$core$Equatable*) $tmp1471), ((frost$core$Equatable*) $tmp1474));
bool $tmp1479 = $tmp1478.value;
if ($tmp1479) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1478;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1480 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1481 = *$tmp1480;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1482;
$tmp1482 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1482->value = $tmp1481;
frost$core$Int64 $tmp1483 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1484 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1483);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1485;
$tmp1485 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1485->value = $tmp1484;
ITable* $tmp1486 = ((frost$core$Equatable*) $tmp1482)->$class->itable;
while ($tmp1486->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1486 = $tmp1486->next;
}
$fn1488 $tmp1487 = $tmp1486->methods[0];
frost$core$Bit $tmp1489 = $tmp1487(((frost$core$Equatable*) $tmp1482), ((frost$core$Equatable*) $tmp1485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1485)));
// unreffing REF($19:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1482)));
// unreffing REF($15:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local2) = $tmp1489;
goto block3;
block3:;
frost$core$Bit $tmp1490 = *(&local2);
bool $tmp1491 = $tmp1490.value;
if ($tmp1491) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1490;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1492 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1493 = *$tmp1492;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1494;
$tmp1494 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1494->value = $tmp1493;
frost$core$Int64 $tmp1495 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1496 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1495);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1497;
$tmp1497 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1497->value = $tmp1496;
ITable* $tmp1498 = ((frost$core$Equatable*) $tmp1494)->$class->itable;
while ($tmp1498->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1498 = $tmp1498->next;
}
$fn1500 $tmp1499 = $tmp1498->methods[0];
frost$core$Bit $tmp1501 = $tmp1499(((frost$core$Equatable*) $tmp1494), ((frost$core$Equatable*) $tmp1497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1497)));
// unreffing REF($41:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1494)));
// unreffing REF($37:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local1) = $tmp1501;
goto block6;
block6:;
frost$core$Bit $tmp1502 = *(&local1);
bool $tmp1503 = $tmp1502.value;
if ($tmp1503) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1502;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1504 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1505 = *$tmp1504;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1506;
$tmp1506 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1506->value = $tmp1505;
frost$core$Int64 $tmp1507 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1508 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1507);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1509;
$tmp1509 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1509->value = $tmp1508;
ITable* $tmp1510 = ((frost$core$Equatable*) $tmp1506)->$class->itable;
while ($tmp1510->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1510 = $tmp1510->next;
}
$fn1512 $tmp1511 = $tmp1510->methods[0];
frost$core$Bit $tmp1513 = $tmp1511(((frost$core$Equatable*) $tmp1506), ((frost$core$Equatable*) $tmp1509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1509)));
// unreffing REF($63:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1506)));
// unreffing REF($59:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local0) = $tmp1513;
goto block9;
block9:;
frost$core$Bit $tmp1514 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1474)));
// unreffing REF($6:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1471)));
// unreffing REF($2:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
bool $tmp1515 = $tmp1514.value;
if ($tmp1515) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1516 = (frost$core$Int64) {637};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1517, $tmp1516, &$s1518);
abort(); // unreachable
block10:;
// line 638
org$frostlang$frostc$FixedArray** $tmp1519 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1520 = *$tmp1519;
frost$core$Bit $tmp1521 = frost$core$Bit$init$builtin_bit($tmp1520 != NULL);
bool $tmp1522 = $tmp1521.value;
if ($tmp1522) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1523 = (frost$core$Int64) {638};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1524, $tmp1523, &$s1525);
abort(); // unreachable
block12:;
org$frostlang$frostc$FixedArray** $tmp1526 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1527 = *$tmp1526;
frost$core$Bit $tmp1528 = frost$core$Bit$init$builtin_bit($tmp1527 != NULL);
bool $tmp1529 = $tmp1528.value;
if ($tmp1529) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp1530 = (frost$core$Int64) {638};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1531, $tmp1530, &$s1532);
abort(); // unreachable
block14:;
ITable* $tmp1533 = ((frost$collections$CollectionView*) $tmp1527)->$class->itable;
while ($tmp1533->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1533 = $tmp1533->next;
}
$fn1535 $tmp1534 = $tmp1533->methods[0];
frost$core$Int64 $tmp1536 = $tmp1534(((frost$collections$CollectionView*) $tmp1527));
frost$core$Int64 $tmp1537 = (frost$core$Int64) {1};
int64_t $tmp1538 = $tmp1536.value;
int64_t $tmp1539 = $tmp1537.value;
int64_t $tmp1540 = $tmp1538 - $tmp1539;
frost$core$Int64 $tmp1541 = (frost$core$Int64) {$tmp1540};
frost$core$Object* $tmp1542 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1520, $tmp1541);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1542)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1542);
// unreffing REF($115:org.frostlang.frostc.FixedArray.T)
return ((org$frostlang$frostc$Type*) $tmp1542);

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
frost$core$Bit $tmp1543 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param2);
bool $tmp1544 = $tmp1543.value;
if ($tmp1544) goto block1; else goto block2;
block1:;
// line 646
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 648
org$frostlang$frostc$Type* $tmp1545 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1546 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1545);
bool $tmp1547 = $tmp1546.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
// unreffing REF($9:org.frostlang.frostc.Type)
if ($tmp1547) goto block3; else goto block4;
block3:;
// line 649
org$frostlang$frostc$Type$Kind* $tmp1548 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1549 = *$tmp1548;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1550;
$tmp1550 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1550->value = $tmp1549;
frost$core$Int64 $tmp1551 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1552 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1551);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1553;
$tmp1553 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1553->value = $tmp1552;
ITable* $tmp1554 = ((frost$core$Equatable*) $tmp1550)->$class->itable;
while ($tmp1554->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1554 = $tmp1554->next;
}
$fn1556 $tmp1555 = $tmp1554->methods[0];
frost$core$Bit $tmp1557 = $tmp1555(((frost$core$Equatable*) $tmp1550), ((frost$core$Equatable*) $tmp1553));
bool $tmp1558 = $tmp1557.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1553)));
// unreffing REF($23:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1550)));
// unreffing REF($19:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1558) goto block5; else goto block6;
block5:;
// line 650
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block6:;
// line 652
org$frostlang$frostc$Type* $tmp1559 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
// unreffing REF($39:org.frostlang.frostc.Type)
return $tmp1559;
block4:;
// line 654
org$frostlang$frostc$Type* $tmp1560 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1561 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param2, $tmp1560);
bool $tmp1562 = $tmp1561.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
// unreffing REF($47:org.frostlang.frostc.Type)
if ($tmp1562) goto block7; else goto block8;
block7:;
// line 655
org$frostlang$frostc$Type$Kind* $tmp1563 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1564 = *$tmp1563;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1565;
$tmp1565 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1565->value = $tmp1564;
frost$core$Int64 $tmp1566 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1567 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1566);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1568;
$tmp1568 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1568->value = $tmp1567;
ITable* $tmp1569 = ((frost$core$Equatable*) $tmp1565)->$class->itable;
while ($tmp1569->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1569 = $tmp1569->next;
}
$fn1571 $tmp1570 = $tmp1569->methods[0];
frost$core$Bit $tmp1572 = $tmp1570(((frost$core$Equatable*) $tmp1565), ((frost$core$Equatable*) $tmp1568));
bool $tmp1573 = $tmp1572.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1568)));
// unreffing REF($61:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1565)));
// unreffing REF($57:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1573) goto block9; else goto block10;
block9:;
// line 656
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block10:;
// line 658
org$frostlang$frostc$Type* $tmp1574 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
// unreffing REF($77:org.frostlang.frostc.Type)
return $tmp1574;
block8:;
// line 660
org$frostlang$frostc$Type$Kind* $tmp1575 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1576 = *$tmp1575;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1577;
$tmp1577 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1577->value = $tmp1576;
frost$core$Int64 $tmp1578 = (frost$core$Int64) {5};
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
if ($tmp1585) goto block13; else goto block14;
block13:;
frost$core$Bit $tmp1586 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
*(&local0) = $tmp1586;
goto block15;
block14:;
*(&local0) = $tmp1584;
goto block15;
block15:;
frost$core$Bit $tmp1587 = *(&local0);
bool $tmp1588 = $tmp1587.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1580)));
// unreffing REF($91:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1577)));
// unreffing REF($87:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1588) goto block11; else goto block12;
block11:;
// line 661
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block12:;
// line 663
frost$core$Bit $tmp1589 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1590 = $tmp1589.value;
if ($tmp1590) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Type$Kind* $tmp1591 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1592 = *$tmp1591;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1593;
$tmp1593 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1593->value = $tmp1592;
frost$core$Int64 $tmp1594 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1595 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1594);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1596;
$tmp1596 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1596->value = $tmp1595;
ITable* $tmp1597 = ((frost$core$Equatable*) $tmp1593)->$class->itable;
while ($tmp1597->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1597 = $tmp1597->next;
}
$fn1599 $tmp1598 = $tmp1597->methods[0];
frost$core$Bit $tmp1600 = $tmp1598(((frost$core$Equatable*) $tmp1593), ((frost$core$Equatable*) $tmp1596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1596)));
// unreffing REF($124:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1593)));
// unreffing REF($120:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local1) = $tmp1600;
goto block20;
block19:;
*(&local1) = $tmp1589;
goto block20;
block20:;
frost$core$Bit $tmp1601 = *(&local1);
bool $tmp1602 = $tmp1601.value;
if ($tmp1602) goto block16; else goto block17;
block16:;
// line 664
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block17:;
// line 666
frost$core$Bit $tmp1603 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param0);
bool $tmp1604 = $tmp1603.value;
if ($tmp1604) goto block21; else goto block22;
block21:;
// line 667
org$frostlang$frostc$Type$Kind* $tmp1605 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1606 = *$tmp1605;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1607;
$tmp1607 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1607->value = $tmp1606;
frost$core$Int64 $tmp1608 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1609 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1608);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1610;
$tmp1610 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1610->value = $tmp1609;
ITable* $tmp1611 = ((frost$core$Equatable*) $tmp1607)->$class->itable;
while ($tmp1611->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1611 = $tmp1611->next;
}
$fn1613 $tmp1612 = $tmp1611->methods[0];
frost$core$Bit $tmp1614 = $tmp1612(((frost$core$Equatable*) $tmp1607), ((frost$core$Equatable*) $tmp1610));
bool $tmp1615 = $tmp1614.value;
if ($tmp1615) goto block25; else goto block26;
block25:;
*(&local2) = $tmp1614;
goto block27;
block26:;
org$frostlang$frostc$Type$Kind* $tmp1616 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1617 = *$tmp1616;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1618;
$tmp1618 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1618->value = $tmp1617;
frost$core$Int64 $tmp1619 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp1620 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1619);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1621;
$tmp1621 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1621->value = $tmp1620;
ITable* $tmp1622 = ((frost$core$Equatable*) $tmp1618)->$class->itable;
while ($tmp1622->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1622 = $tmp1622->next;
}
$fn1624 $tmp1623 = $tmp1622->methods[0];
frost$core$Bit $tmp1625 = $tmp1623(((frost$core$Equatable*) $tmp1618), ((frost$core$Equatable*) $tmp1621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1621)));
// unreffing REF($168:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1618)));
// unreffing REF($164:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local2) = $tmp1625;
goto block27;
block27:;
frost$core$Bit $tmp1626 = *(&local2);
bool $tmp1627 = $tmp1626.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1610)));
// unreffing REF($155:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1607)));
// unreffing REF($151:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1627) goto block23; else goto block24;
block23:;
// line 668
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block24:;
// line 670
frost$core$Bit $tmp1628 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1629 = $tmp1628.value;
if ($tmp1629) goto block28; else goto block29;
block28:;
// line 671
frost$core$String** $tmp1630 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1631 = *$tmp1630;
frost$core$Bit $tmp1632 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1631, &$s1633);
bool $tmp1634 = $tmp1632.value;
if ($tmp1634) goto block30; else goto block31;
block30:;
// line 672
org$frostlang$frostc$Type* $tmp1635 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
// unreffing REF($204:org.frostlang.frostc.Type)
return $tmp1635;
block31:;
// line 674
org$frostlang$frostc$Type* $tmp1636 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
// unreffing REF($212:org.frostlang.frostc.Type)
return $tmp1636;
block29:;
goto block22;
block22:;
// line 677
frost$core$Bit $tmp1637 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param2);
bool $tmp1638 = $tmp1637.value;
if ($tmp1638) goto block32; else goto block33;
block32:;
// line 678
org$frostlang$frostc$Type$Kind* $tmp1639 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1640 = *$tmp1639;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1641;
$tmp1641 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1641->value = $tmp1640;
frost$core$Int64 $tmp1642 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1643 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1642);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1644;
$tmp1644 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1644->value = $tmp1643;
ITable* $tmp1645 = ((frost$core$Equatable*) $tmp1641)->$class->itable;
while ($tmp1645->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1645 = $tmp1645->next;
}
$fn1647 $tmp1646 = $tmp1645->methods[0];
frost$core$Bit $tmp1648 = $tmp1646(((frost$core$Equatable*) $tmp1641), ((frost$core$Equatable*) $tmp1644));
bool $tmp1649 = $tmp1648.value;
if ($tmp1649) goto block36; else goto block37;
block36:;
*(&local3) = $tmp1648;
goto block38;
block37:;
org$frostlang$frostc$Type$Kind* $tmp1650 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1651 = *$tmp1650;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1652;
$tmp1652 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1652->value = $tmp1651;
frost$core$Int64 $tmp1653 = (frost$core$Int64) {19};
org$frostlang$frostc$Type$Kind $tmp1654 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1653);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1655;
$tmp1655 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1655->value = $tmp1654;
ITable* $tmp1656 = ((frost$core$Equatable*) $tmp1652)->$class->itable;
while ($tmp1656->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1656 = $tmp1656->next;
}
$fn1658 $tmp1657 = $tmp1656->methods[0];
frost$core$Bit $tmp1659 = $tmp1657(((frost$core$Equatable*) $tmp1652), ((frost$core$Equatable*) $tmp1655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1655)));
// unreffing REF($244:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1652)));
// unreffing REF($240:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local3) = $tmp1659;
goto block38;
block38:;
frost$core$Bit $tmp1660 = *(&local3);
bool $tmp1661 = $tmp1660.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1644)));
// unreffing REF($231:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1641)));
// unreffing REF($227:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1661) goto block34; else goto block35;
block34:;
// line 679
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block35:;
// line 681
frost$core$Bit $tmp1662 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1663 = $tmp1662.value;
if ($tmp1663) goto block39; else goto block40;
block39:;
// line 682
frost$core$String** $tmp1664 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1665 = *$tmp1664;
frost$core$Bit $tmp1666 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1665, &$s1667);
bool $tmp1668 = $tmp1666.value;
if ($tmp1668) goto block41; else goto block42;
block41:;
// line 683
org$frostlang$frostc$Type* $tmp1669 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
// unreffing REF($280:org.frostlang.frostc.Type)
return $tmp1669;
block42:;
// line 685
org$frostlang$frostc$Type* $tmp1670 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
// unreffing REF($288:org.frostlang.frostc.Type)
return $tmp1670;
block40:;
goto block33;
block33:;
// line 688
org$frostlang$frostc$Type$Kind* $tmp1671 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1672 = *$tmp1671;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1673;
$tmp1673 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1673->value = $tmp1672;
frost$core$Int64 $tmp1674 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1675 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1674);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1676;
$tmp1676 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1676->value = $tmp1675;
ITable* $tmp1677 = ((frost$core$Equatable*) $tmp1673)->$class->itable;
while ($tmp1677->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1677 = $tmp1677->next;
}
$fn1679 $tmp1678 = $tmp1677->methods[0];
frost$core$Bit $tmp1680 = $tmp1678(((frost$core$Equatable*) $tmp1673), ((frost$core$Equatable*) $tmp1676));
bool $tmp1681 = $tmp1680.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1676)));
// unreffing REF($303:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1673)));
// unreffing REF($299:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1681) goto block43; else goto block44;
block43:;
// line 689
org$frostlang$frostc$FixedArray** $tmp1682 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1683 = *$tmp1682;
frost$core$Bit $tmp1684 = frost$core$Bit$init$builtin_bit($tmp1683 != NULL);
bool $tmp1685 = $tmp1684.value;
if ($tmp1685) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp1686 = (frost$core$Int64) {689};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1687, $tmp1686, &$s1688);
abort(); // unreachable
block45:;
frost$core$Int64 $tmp1689 = (frost$core$Int64) {0};
frost$core$Object* $tmp1690 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1683, $tmp1689);
org$frostlang$frostc$Type* $tmp1691 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1690), param1, param2);
org$frostlang$frostc$Type* $tmp1692 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1691);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
// unreffing REF($330:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
// unreffing REF($329:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1690);
// unreffing REF($327:org.frostlang.frostc.FixedArray.T)
return $tmp1692;
block44:;
// line 691
org$frostlang$frostc$Type$Kind* $tmp1693 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1694 = *$tmp1693;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1695;
$tmp1695 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1695->value = $tmp1694;
frost$core$Int64 $tmp1696 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1697 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1696);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1698;
$tmp1698 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1698->value = $tmp1697;
ITable* $tmp1699 = ((frost$core$Equatable*) $tmp1695)->$class->itable;
while ($tmp1699->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1699 = $tmp1699->next;
}
$fn1701 $tmp1700 = $tmp1699->methods[0];
frost$core$Bit $tmp1702 = $tmp1700(((frost$core$Equatable*) $tmp1695), ((frost$core$Equatable*) $tmp1698));
bool $tmp1703 = $tmp1702.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1698)));
// unreffing REF($350:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1695)));
// unreffing REF($346:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1703) goto block47; else goto block48;
block47:;
// line 692
org$frostlang$frostc$FixedArray** $tmp1704 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1705 = *$tmp1704;
frost$core$Bit $tmp1706 = frost$core$Bit$init$builtin_bit($tmp1705 != NULL);
bool $tmp1707 = $tmp1706.value;
if ($tmp1707) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp1708 = (frost$core$Int64) {692};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1709, $tmp1708, &$s1710);
abort(); // unreachable
block49:;
frost$core$Int64 $tmp1711 = (frost$core$Int64) {0};
frost$core$Object* $tmp1712 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1705, $tmp1711);
org$frostlang$frostc$Type* $tmp1713 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, param1, ((org$frostlang$frostc$Type*) $tmp1712));
org$frostlang$frostc$Type* $tmp1714 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1713);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
// unreffing REF($377:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
// unreffing REF($376:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1712);
// unreffing REF($374:org.frostlang.frostc.FixedArray.T)
return $tmp1714;
block48:;
// line 694
org$frostlang$frostc$Type* $tmp1715 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param0);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
org$frostlang$frostc$Type* $tmp1716 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
*(&local4) = $tmp1715;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
// unreffing REF($391:org.frostlang.frostc.Type)
// line 695
org$frostlang$frostc$Type* $tmp1717 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param2);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
org$frostlang$frostc$Type* $tmp1718 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
*(&local5) = $tmp1717;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
// unreffing REF($403:org.frostlang.frostc.Type)
// line 696
org$frostlang$frostc$Type* $tmp1719 = *(&local4);
frost$core$Bit $tmp1720 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1719);
bool $tmp1721 = $tmp1720.value;
if ($tmp1721) goto block53; else goto block54;
block53:;
org$frostlang$frostc$Type* $tmp1722 = *(&local5);
frost$core$Bit $tmp1723 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1722);
*(&local6) = $tmp1723;
goto block55;
block54:;
*(&local6) = $tmp1720;
goto block55;
block55:;
frost$core$Bit $tmp1724 = *(&local6);
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block51; else goto block52;
block51:;
// line 697
frost$collections$HashSet* $tmp1726 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp1726);
*(&local7) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
frost$collections$HashSet* $tmp1727 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
*(&local7) = $tmp1726;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
// unreffing REF($429:frost.collections.HashSet<org.frostlang.frostc.Type>)
// line 698
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1728 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
*(&local8) = param0;
// line 699
org$frostlang$frostc$Type* $tmp1729 = *(&local4);
org$frostlang$frostc$ClassDecl* $tmp1730 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1729);
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
org$frostlang$frostc$ClassDecl* $tmp1731 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local9) = $tmp1730;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
// unreffing REF($452:org.frostlang.frostc.ClassDecl?)
// line 700
goto block56;
block56:;
org$frostlang$frostc$ClassDecl* $tmp1732 = *(&local9);
frost$core$Bit $tmp1733 = frost$core$Bit$init$builtin_bit($tmp1732 != NULL);
bool $tmp1734 = $tmp1733.value;
if ($tmp1734) goto block57; else goto block58;
block57:;
// line 701
frost$collections$HashSet* $tmp1735 = *(&local7);
org$frostlang$frostc$Type* $tmp1736 = *(&local8);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp1735, ((frost$collections$Key*) $tmp1736));
// line 702
org$frostlang$frostc$ClassDecl* $tmp1737 = *(&local9);
frost$core$Bit $tmp1738 = frost$core$Bit$init$builtin_bit($tmp1737 != NULL);
bool $tmp1739 = $tmp1738.value;
if ($tmp1739) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp1740 = (frost$core$Int64) {702};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1741, $tmp1740, &$s1742);
abort(); // unreachable
block61:;
org$frostlang$frostc$Type** $tmp1743 = &$tmp1737->rawSuper;
org$frostlang$frostc$Type* $tmp1744 = *$tmp1743;
frost$core$Bit $tmp1745 = frost$core$Bit$init$builtin_bit($tmp1744 != NULL);
bool $tmp1746 = $tmp1745.value;
if ($tmp1746) goto block59; else goto block63;
block59:;
// line 703
org$frostlang$frostc$Type* $tmp1747 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1748 = *(&local9);
frost$core$Bit $tmp1749 = frost$core$Bit$init$builtin_bit($tmp1748 != NULL);
bool $tmp1750 = $tmp1749.value;
if ($tmp1750) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp1751 = (frost$core$Int64) {703};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1752, $tmp1751, &$s1753);
abort(); // unreachable
block64:;
org$frostlang$frostc$Type** $tmp1754 = &$tmp1748->rawSuper;
org$frostlang$frostc$Type* $tmp1755 = *$tmp1754;
frost$core$Bit $tmp1756 = frost$core$Bit$init$builtin_bit($tmp1755 != NULL);
bool $tmp1757 = $tmp1756.value;
if ($tmp1757) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp1758 = (frost$core$Int64) {703};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1759, $tmp1758, &$s1760);
abort(); // unreachable
block66:;
org$frostlang$frostc$Type* $tmp1761 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1747, $tmp1755);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
org$frostlang$frostc$Type* $tmp1762 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
*(&local8) = $tmp1761;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
// unreffing REF($513:org.frostlang.frostc.Type)
// line 704
org$frostlang$frostc$Type* $tmp1763 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1764 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1763);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
org$frostlang$frostc$ClassDecl* $tmp1765 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
*(&local9) = $tmp1764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
// unreffing REF($525:org.frostlang.frostc.ClassDecl?)
goto block60;
block63:;
// line 1
// line 707
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1766 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block60;
block60:;
goto block56;
block58:;
// line 710
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp1767 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
*(&local8) = param2;
// line 711
org$frostlang$frostc$Type* $tmp1768 = *(&local5);
org$frostlang$frostc$ClassDecl* $tmp1769 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1768);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
org$frostlang$frostc$ClassDecl* $tmp1770 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
*(&local9) = $tmp1769;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
// unreffing REF($555:org.frostlang.frostc.ClassDecl?)
// line 712
goto block68;
block68:;
org$frostlang$frostc$ClassDecl* $tmp1771 = *(&local9);
frost$core$Bit $tmp1772 = frost$core$Bit$init$builtin_bit($tmp1771 != NULL);
bool $tmp1773 = $tmp1772.value;
if ($tmp1773) goto block69; else goto block70;
block69:;
// line 713
frost$collections$HashSet* $tmp1774 = *(&local7);
org$frostlang$frostc$Type* $tmp1775 = *(&local8);
frost$core$Bit $tmp1776 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp1774, ((frost$collections$Key*) $tmp1775));
bool $tmp1777 = $tmp1776.value;
if ($tmp1777) goto block71; else goto block72;
block71:;
// line 714
org$frostlang$frostc$Type* $tmp1778 = *(&local8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
org$frostlang$frostc$ClassDecl* $tmp1779 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
// unreffing cl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1780 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1780));
// unreffing t
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1781 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1781));
// unreffing ancestors
*(&local7) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$Type* $tmp1782 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
// unreffing t2
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1783 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
// unreffing t1
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1778;
block72:;
// line 716
org$frostlang$frostc$ClassDecl* $tmp1784 = *(&local9);
frost$core$Bit $tmp1785 = frost$core$Bit$init$builtin_bit($tmp1784 != NULL);
bool $tmp1786 = $tmp1785.value;
if ($tmp1786) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp1787 = (frost$core$Int64) {716};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1788, $tmp1787, &$s1789);
abort(); // unreachable
block75:;
org$frostlang$frostc$Type** $tmp1790 = &$tmp1784->rawSuper;
org$frostlang$frostc$Type* $tmp1791 = *$tmp1790;
frost$core$Bit $tmp1792 = frost$core$Bit$init$builtin_bit($tmp1791 != NULL);
bool $tmp1793 = $tmp1792.value;
if ($tmp1793) goto block73; else goto block77;
block73:;
// line 717
org$frostlang$frostc$Type* $tmp1794 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1795 = *(&local9);
frost$core$Bit $tmp1796 = frost$core$Bit$init$builtin_bit($tmp1795 != NULL);
bool $tmp1797 = $tmp1796.value;
if ($tmp1797) goto block78; else goto block79;
block79:;
frost$core$Int64 $tmp1798 = (frost$core$Int64) {717};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1799, $tmp1798, &$s1800);
abort(); // unreachable
block78:;
org$frostlang$frostc$Type** $tmp1801 = &$tmp1795->rawSuper;
org$frostlang$frostc$Type* $tmp1802 = *$tmp1801;
frost$core$Bit $tmp1803 = frost$core$Bit$init$builtin_bit($tmp1802 != NULL);
bool $tmp1804 = $tmp1803.value;
if ($tmp1804) goto block80; else goto block81;
block81:;
frost$core$Int64 $tmp1805 = (frost$core$Int64) {717};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1806, $tmp1805, &$s1807);
abort(); // unreachable
block80:;
org$frostlang$frostc$Type* $tmp1808 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1794, $tmp1802);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
org$frostlang$frostc$Type* $tmp1809 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
*(&local8) = $tmp1808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
// unreffing REF($647:org.frostlang.frostc.Type)
// line 718
org$frostlang$frostc$Type* $tmp1810 = *(&local8);
org$frostlang$frostc$ClassDecl* $tmp1811 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1810);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
org$frostlang$frostc$ClassDecl* $tmp1812 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
*(&local9) = $tmp1811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
// unreffing REF($659:org.frostlang.frostc.ClassDecl?)
goto block74;
block77:;
// line 1
// line 721
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1813 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block74;
block74:;
goto block68;
block70:;
org$frostlang$frostc$ClassDecl* $tmp1814 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
// unreffing cl
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1815 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
// unreffing t
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1816 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
// unreffing ancestors
*(&local7) = ((frost$collections$HashSet*) NULL);
goto block52;
block52:;
// line 725
org$frostlang$frostc$Type* $tmp1817 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
// unreffing REF($697:org.frostlang.frostc.Type)
org$frostlang$frostc$Type* $tmp1818 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
// unreffing t2
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1819 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
// unreffing t1
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1817;

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
org$frostlang$frostc$Type$Kind* $tmp1820 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1821 = *$tmp1820;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1822;
$tmp1822 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1822->value = $tmp1821;
frost$core$Int64 $tmp1823 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1824 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1823);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1825;
$tmp1825 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1825->value = $tmp1824;
ITable* $tmp1826 = ((frost$core$Equatable*) $tmp1822)->$class->itable;
while ($tmp1826->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1826 = $tmp1826->next;
}
$fn1828 $tmp1827 = $tmp1826->methods[1];
frost$core$Bit $tmp1829 = $tmp1827(((frost$core$Equatable*) $tmp1822), ((frost$core$Equatable*) $tmp1825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1825)));
// unreffing REF($6:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1822)));
// unreffing REF($2:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
bool $tmp1830 = $tmp1829.value;
if ($tmp1830) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1831 = (frost$core$Int64) {738};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1832, $tmp1831, &$s1833);
abort(); // unreachable
block1:;
// line 739
ITable* $tmp1834 = ((frost$collections$MapView*) param1)->$class->itable;
while ($tmp1834->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1834 = $tmp1834->next;
}
$fn1836 $tmp1835 = $tmp1834->methods[0];
frost$core$Int64 $tmp1837 = $tmp1835(((frost$collections$MapView*) param1));
frost$core$Int64 $tmp1838 = (frost$core$Int64) {0};
frost$core$Bit $tmp1839 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1837, $tmp1838);
bool $tmp1840 = $tmp1839.value;
if ($tmp1840) goto block3; else goto block4;
block3:;
// line 740
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block4:;
// line 742
org$frostlang$frostc$Type$Kind* $tmp1841 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1842 = *$tmp1841;
frost$core$Int64 $tmp1843 = $tmp1842.$rawValue;
frost$core$Int64 $tmp1844 = (frost$core$Int64) {12};
frost$core$Bit $tmp1845 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1843, $tmp1844);
bool $tmp1846 = $tmp1845.value;
if ($tmp1846) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp1847 = (frost$core$Int64) {13};
frost$core$Bit $tmp1848 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1843, $tmp1847);
bool $tmp1849 = $tmp1848.value;
if ($tmp1849) goto block6; else goto block8;
block6:;
// line 744
frost$core$String** $tmp1850 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1851 = *$tmp1850;
frost$core$Object* $tmp1852 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param1, ((frost$collections$Key*) $tmp1851));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1852)));
org$frostlang$frostc$Type* $tmp1853 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1852);
frost$core$Frost$unref$frost$core$Object$Q($tmp1852);
// unreffing REF($50:frost.collections.HashMap.V?)
// line 745
org$frostlang$frostc$Type* $tmp1854 = *(&local0);
frost$core$Bit $tmp1855 = frost$core$Bit$init$builtin_bit($tmp1854 != NULL);
bool $tmp1856 = $tmp1855.value;
if ($tmp1856) goto block9; else goto block10;
block9:;
// line 746
org$frostlang$frostc$Type* $tmp1857 = *(&local0);
frost$core$Bit $tmp1858 = frost$core$Bit$init$builtin_bit($tmp1857 != NULL);
bool $tmp1859 = $tmp1858.value;
if ($tmp1859) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1860 = (frost$core$Int64) {746};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1861, $tmp1860, &$s1862);
abort(); // unreachable
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
org$frostlang$frostc$Type* $tmp1863 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
// unreffing found
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1857;
block10:;
// line 748
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1864 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
// unreffing found
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return param0;
block8:;
frost$core$Int64 $tmp1865 = (frost$core$Int64) {11};
frost$core$Bit $tmp1866 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1843, $tmp1865);
bool $tmp1867 = $tmp1866.value;
if ($tmp1867) goto block13; else goto block14;
block13:;
// line 751
org$frostlang$frostc$FixedArray** $tmp1868 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1869 = *$tmp1868;
frost$core$Bit $tmp1870 = frost$core$Bit$init$builtin_bit($tmp1869 != NULL);
bool $tmp1871 = $tmp1870.value;
if ($tmp1871) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp1872 = (frost$core$Int64) {751};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1873, $tmp1872, &$s1874);
abort(); // unreachable
block15:;
frost$core$Int64 $tmp1875 = (frost$core$Int64) {0};
frost$core$Object* $tmp1876 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1869, $tmp1875);
org$frostlang$frostc$Type* $tmp1877 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1876), param1);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
org$frostlang$frostc$Type* $tmp1878 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
*(&local1) = $tmp1877;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
// unreffing REF($114:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1876);
// unreffing REF($112:org.frostlang.frostc.FixedArray.T)
// line 752
frost$collections$Array* $tmp1879 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1879);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
frost$collections$Array* $tmp1880 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
*(&local2) = $tmp1879;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
// unreffing REF($129:frost.collections.Array<org.frostlang.frostc.Type>)
// line 753
frost$core$Int64 $tmp1881 = (frost$core$Int64) {1};
org$frostlang$frostc$FixedArray** $tmp1882 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1883 = *$tmp1882;
frost$core$Bit $tmp1884 = frost$core$Bit$init$builtin_bit($tmp1883 != NULL);
bool $tmp1885 = $tmp1884.value;
if ($tmp1885) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp1886 = (frost$core$Int64) {753};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1887, $tmp1886, &$s1888);
abort(); // unreachable
block17:;
ITable* $tmp1889 = ((frost$collections$CollectionView*) $tmp1883)->$class->itable;
while ($tmp1889->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1889 = $tmp1889->next;
}
$fn1891 $tmp1890 = $tmp1889->methods[0];
frost$core$Int64 $tmp1892 = $tmp1890(((frost$collections$CollectionView*) $tmp1883));
frost$core$Bit $tmp1893 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1894 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1881, $tmp1892, $tmp1893);
frost$core$Int64 $tmp1895 = $tmp1894.min;
*(&local3) = $tmp1895;
frost$core$Int64 $tmp1896 = $tmp1894.max;
frost$core$Bit $tmp1897 = $tmp1894.inclusive;
bool $tmp1898 = $tmp1897.value;
frost$core$Int64 $tmp1899 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1900 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1899);
if ($tmp1898) goto block22; else goto block23;
block22:;
int64_t $tmp1901 = $tmp1895.value;
int64_t $tmp1902 = $tmp1896.value;
bool $tmp1903 = $tmp1901 <= $tmp1902;
frost$core$Bit $tmp1904 = (frost$core$Bit) {$tmp1903};
bool $tmp1905 = $tmp1904.value;
if ($tmp1905) goto block19; else goto block20;
block23:;
int64_t $tmp1906 = $tmp1895.value;
int64_t $tmp1907 = $tmp1896.value;
bool $tmp1908 = $tmp1906 < $tmp1907;
frost$core$Bit $tmp1909 = (frost$core$Bit) {$tmp1908};
bool $tmp1910 = $tmp1909.value;
if ($tmp1910) goto block19; else goto block20;
block19:;
// line 754
frost$collections$Array* $tmp1911 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp1912 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1913 = *$tmp1912;
frost$core$Bit $tmp1914 = frost$core$Bit$init$builtin_bit($tmp1913 != NULL);
bool $tmp1915 = $tmp1914.value;
if ($tmp1915) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp1916 = (frost$core$Int64) {754};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1917, $tmp1916, &$s1918);
abort(); // unreachable
block24:;
frost$core$Int64 $tmp1919 = *(&local3);
frost$core$Object* $tmp1920 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1913, $tmp1919);
org$frostlang$frostc$Type* $tmp1921 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1920), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1911, ((frost$core$Object*) $tmp1921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
// unreffing REF($195:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1920);
// unreffing REF($193:org.frostlang.frostc.FixedArray.T)
goto block21;
block21:;
frost$core$Int64 $tmp1922 = *(&local3);
int64_t $tmp1923 = $tmp1896.value;
int64_t $tmp1924 = $tmp1922.value;
int64_t $tmp1925 = $tmp1923 - $tmp1924;
frost$core$Int64 $tmp1926 = (frost$core$Int64) {$tmp1925};
frost$core$UInt64 $tmp1927 = frost$core$Int64$convert$R$frost$core$UInt64($tmp1926);
if ($tmp1898) goto block27; else goto block28;
block27:;
uint64_t $tmp1928 = $tmp1927.value;
uint64_t $tmp1929 = $tmp1900.value;
bool $tmp1930 = $tmp1928 >= $tmp1929;
frost$core$Bit $tmp1931 = (frost$core$Bit) {$tmp1930};
bool $tmp1932 = $tmp1931.value;
if ($tmp1932) goto block26; else goto block20;
block28:;
uint64_t $tmp1933 = $tmp1927.value;
uint64_t $tmp1934 = $tmp1900.value;
bool $tmp1935 = $tmp1933 > $tmp1934;
frost$core$Bit $tmp1936 = (frost$core$Bit) {$tmp1935};
bool $tmp1937 = $tmp1936.value;
if ($tmp1937) goto block26; else goto block20;
block26:;
int64_t $tmp1938 = $tmp1922.value;
int64_t $tmp1939 = $tmp1899.value;
int64_t $tmp1940 = $tmp1938 + $tmp1939;
frost$core$Int64 $tmp1941 = (frost$core$Int64) {$tmp1940};
*(&local3) = $tmp1941;
goto block19;
block20:;
// line 756
org$frostlang$frostc$Type* $tmp1942 = *(&local1);
frost$collections$Array* $tmp1943 = *(&local2);
org$frostlang$frostc$Type* $tmp1944 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1942, ((frost$collections$ListView*) $tmp1943));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
// unreffing REF($234:org.frostlang.frostc.Type)
frost$collections$Array* $tmp1945 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
// unreffing remappedArgs
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1946 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
// unreffing base
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1944;
block14:;
frost$core$Int64 $tmp1947 = (frost$core$Int64) {1};
frost$core$Bit $tmp1948 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1843, $tmp1947);
bool $tmp1949 = $tmp1948.value;
if ($tmp1949) goto block29; else goto block30;
block29:;
// line 759
org$frostlang$frostc$FixedArray** $tmp1950 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1951 = *$tmp1950;
frost$core$Bit $tmp1952 = frost$core$Bit$init$builtin_bit($tmp1951 != NULL);
bool $tmp1953 = $tmp1952.value;
if ($tmp1953) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp1954 = (frost$core$Int64) {759};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1955, $tmp1954, &$s1956);
abort(); // unreachable
block31:;
frost$core$Int64 $tmp1957 = (frost$core$Int64) {0};
frost$core$Object* $tmp1958 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1951, $tmp1957);
org$frostlang$frostc$Type* $tmp1959 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1958), param1);
org$frostlang$frostc$Type* $tmp1960 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1959);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
// unreffing REF($271:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
// unreffing REF($270:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1958);
// unreffing REF($268:org.frostlang.frostc.FixedArray.T)
return $tmp1960;
block30:;
frost$core$Int64 $tmp1961 = (frost$core$Int64) {16};
frost$core$Bit $tmp1962 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1843, $tmp1961);
bool $tmp1963 = $tmp1962.value;
if ($tmp1963) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp1964 = (frost$core$Int64) {15};
frost$core$Bit $tmp1965 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1843, $tmp1964);
bool $tmp1966 = $tmp1965.value;
if ($tmp1966) goto block33; else goto block35;
block35:;
frost$core$Int64 $tmp1967 = (frost$core$Int64) {18};
frost$core$Bit $tmp1968 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1843, $tmp1967);
bool $tmp1969 = $tmp1968.value;
if ($tmp1969) goto block33; else goto block36;
block36:;
frost$core$Int64 $tmp1970 = (frost$core$Int64) {17};
frost$core$Bit $tmp1971 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1843, $tmp1970);
bool $tmp1972 = $tmp1971.value;
if ($tmp1972) goto block33; else goto block37;
block33:;
// line 762
frost$collections$Array* $tmp1973 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1973);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
frost$collections$Array* $tmp1974 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
*(&local4) = $tmp1973;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
// unreffing REF($301:frost.collections.Array<org.frostlang.frostc.Type>)
// line 763
org$frostlang$frostc$FixedArray** $tmp1975 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1976 = *$tmp1975;
frost$core$Bit $tmp1977 = frost$core$Bit$init$builtin_bit($tmp1976 != NULL);
bool $tmp1978 = $tmp1977.value;
if ($tmp1978) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp1979 = (frost$core$Int64) {763};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1980, $tmp1979, &$s1981);
abort(); // unreachable
block38:;
ITable* $tmp1982 = ((frost$collections$CollectionView*) $tmp1976)->$class->itable;
while ($tmp1982->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1982 = $tmp1982->next;
}
$fn1984 $tmp1983 = $tmp1982->methods[0];
frost$core$Int64 $tmp1985 = $tmp1983(((frost$collections$CollectionView*) $tmp1976));
frost$core$Int64 $tmp1986 = (frost$core$Int64) {1};
int64_t $tmp1987 = $tmp1985.value;
int64_t $tmp1988 = $tmp1986.value;
bool $tmp1989 = $tmp1987 >= $tmp1988;
frost$core$Bit $tmp1990 = (frost$core$Bit) {$tmp1989};
bool $tmp1991 = $tmp1990.value;
if ($tmp1991) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp1992 = (frost$core$Int64) {763};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1993, $tmp1992);
abort(); // unreachable
block40:;
// line 764
frost$core$Int64 $tmp1994 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1995 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1996 = *$tmp1995;
frost$core$Bit $tmp1997 = frost$core$Bit$init$builtin_bit($tmp1996 != NULL);
bool $tmp1998 = $tmp1997.value;
if ($tmp1998) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp1999 = (frost$core$Int64) {764};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2000, $tmp1999, &$s2001);
abort(); // unreachable
block42:;
ITable* $tmp2002 = ((frost$collections$CollectionView*) $tmp1996)->$class->itable;
while ($tmp2002->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2002 = $tmp2002->next;
}
$fn2004 $tmp2003 = $tmp2002->methods[0];
frost$core$Int64 $tmp2005 = $tmp2003(((frost$collections$CollectionView*) $tmp1996));
frost$core$Int64 $tmp2006 = (frost$core$Int64) {1};
int64_t $tmp2007 = $tmp2005.value;
int64_t $tmp2008 = $tmp2006.value;
int64_t $tmp2009 = $tmp2007 - $tmp2008;
frost$core$Int64 $tmp2010 = (frost$core$Int64) {$tmp2009};
frost$core$Bit $tmp2011 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2012 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1994, $tmp2010, $tmp2011);
frost$core$Int64 $tmp2013 = $tmp2012.min;
*(&local5) = $tmp2013;
frost$core$Int64 $tmp2014 = $tmp2012.max;
frost$core$Bit $tmp2015 = $tmp2012.inclusive;
bool $tmp2016 = $tmp2015.value;
frost$core$Int64 $tmp2017 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2018 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2017);
if ($tmp2016) goto block47; else goto block48;
block47:;
int64_t $tmp2019 = $tmp2013.value;
int64_t $tmp2020 = $tmp2014.value;
bool $tmp2021 = $tmp2019 <= $tmp2020;
frost$core$Bit $tmp2022 = (frost$core$Bit) {$tmp2021};
bool $tmp2023 = $tmp2022.value;
if ($tmp2023) goto block44; else goto block45;
block48:;
int64_t $tmp2024 = $tmp2013.value;
int64_t $tmp2025 = $tmp2014.value;
bool $tmp2026 = $tmp2024 < $tmp2025;
frost$core$Bit $tmp2027 = (frost$core$Bit) {$tmp2026};
bool $tmp2028 = $tmp2027.value;
if ($tmp2028) goto block44; else goto block45;
block44:;
// line 765
frost$collections$Array* $tmp2029 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp2030 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp2031 = *$tmp2030;
frost$core$Bit $tmp2032 = frost$core$Bit$init$builtin_bit($tmp2031 != NULL);
bool $tmp2033 = $tmp2032.value;
if ($tmp2033) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp2034 = (frost$core$Int64) {765};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2035, $tmp2034, &$s2036);
abort(); // unreachable
block49:;
frost$core$Int64 $tmp2037 = *(&local5);
frost$core$Object* $tmp2038 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2031, $tmp2037);
org$frostlang$frostc$Type* $tmp2039 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2038), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp2029, ((frost$core$Object*) $tmp2039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
// unreffing REF($395:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2038);
// unreffing REF($393:org.frostlang.frostc.FixedArray.T)
goto block46;
block46:;
frost$core$Int64 $tmp2040 = *(&local5);
int64_t $tmp2041 = $tmp2014.value;
int64_t $tmp2042 = $tmp2040.value;
int64_t $tmp2043 = $tmp2041 - $tmp2042;
frost$core$Int64 $tmp2044 = (frost$core$Int64) {$tmp2043};
frost$core$UInt64 $tmp2045 = frost$core$Int64$convert$R$frost$core$UInt64($tmp2044);
if ($tmp2016) goto block52; else goto block53;
block52:;
uint64_t $tmp2046 = $tmp2045.value;
uint64_t $tmp2047 = $tmp2018.value;
bool $tmp2048 = $tmp2046 >= $tmp2047;
frost$core$Bit $tmp2049 = (frost$core$Bit) {$tmp2048};
bool $tmp2050 = $tmp2049.value;
if ($tmp2050) goto block51; else goto block45;
block53:;
uint64_t $tmp2051 = $tmp2045.value;
uint64_t $tmp2052 = $tmp2018.value;
bool $tmp2053 = $tmp2051 > $tmp2052;
frost$core$Bit $tmp2054 = (frost$core$Bit) {$tmp2053};
bool $tmp2055 = $tmp2054.value;
if ($tmp2055) goto block51; else goto block45;
block51:;
int64_t $tmp2056 = $tmp2040.value;
int64_t $tmp2057 = $tmp2017.value;
int64_t $tmp2058 = $tmp2056 + $tmp2057;
frost$core$Int64 $tmp2059 = (frost$core$Int64) {$tmp2058};
*(&local5) = $tmp2059;
goto block44;
block45:;
// line 767
org$frostlang$frostc$Position* $tmp2060 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp2061 = *$tmp2060;
org$frostlang$frostc$Type$Kind* $tmp2062 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp2063 = *$tmp2062;
frost$collections$Array* $tmp2064 = *(&local4);
org$frostlang$frostc$FixedArray** $tmp2065 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp2066 = *$tmp2065;
frost$core$Bit $tmp2067 = frost$core$Bit$init$builtin_bit($tmp2066 != NULL);
bool $tmp2068 = $tmp2067.value;
if ($tmp2068) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp2069 = (frost$core$Int64) {768};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2070, $tmp2069, &$s2071);
abort(); // unreachable
block54:;
org$frostlang$frostc$FixedArray** $tmp2072 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp2073 = *$tmp2072;
frost$core$Bit $tmp2074 = frost$core$Bit$init$builtin_bit($tmp2073 != NULL);
bool $tmp2075 = $tmp2074.value;
if ($tmp2075) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp2076 = (frost$core$Int64) {768};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2077, $tmp2076, &$s2078);
abort(); // unreachable
block56:;
ITable* $tmp2079 = ((frost$collections$CollectionView*) $tmp2073)->$class->itable;
while ($tmp2079->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2079 = $tmp2079->next;
}
$fn2081 $tmp2080 = $tmp2079->methods[0];
frost$core$Int64 $tmp2082 = $tmp2080(((frost$collections$CollectionView*) $tmp2073));
frost$core$Int64 $tmp2083 = (frost$core$Int64) {1};
int64_t $tmp2084 = $tmp2082.value;
int64_t $tmp2085 = $tmp2083.value;
int64_t $tmp2086 = $tmp2084 - $tmp2085;
frost$core$Int64 $tmp2087 = (frost$core$Int64) {$tmp2086};
frost$core$Object* $tmp2088 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2066, $tmp2087);
org$frostlang$frostc$Type* $tmp2089 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp2088), param1);
frost$core$Int64* $tmp2090 = &param0->priority;
frost$core$Int64 $tmp2091 = *$tmp2090;
org$frostlang$frostc$Type* $tmp2092 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp2061, $tmp2063, ((frost$collections$ListView*) $tmp2064), $tmp2089, $tmp2091);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
// unreffing REF($471:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2089));
// unreffing REF($468:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2088);
// unreffing REF($466:org.frostlang.frostc.FixedArray.T)
frost$collections$Array* $tmp2093 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
// unreffing parameters
*(&local4) = ((frost$collections$Array*) NULL);
return $tmp2092;
block37:;
// line 771
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block5:;
frost$core$Bit $tmp2094 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2095 = $tmp2094.value;
if ($tmp2095) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp2096 = (frost$core$Int64) {738};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2097, $tmp2096, &$s2098);
abort(); // unreachable
block58:;
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frostc$Type$get_hash$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

// line 778
frost$core$String** $tmp2099 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2100 = *$tmp2099;
ITable* $tmp2101 = ((frost$collections$Key*) $tmp2100)->$class->itable;
while ($tmp2101->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp2101 = $tmp2101->next;
}
$fn2103 $tmp2102 = $tmp2101->methods[0];
frost$core$Int64 $tmp2104 = $tmp2102(((frost$collections$Key*) $tmp2100));
return $tmp2104;

}
frost$core$String* org$frostlang$frostc$Type$convert$R$frost$core$String(org$frostlang$frostc$Type* param0) {

// line 783
frost$core$String** $tmp2105 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp2106 = *$tmp2105;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
return $tmp2106;

}
void org$frostlang$frostc$Type$cleanup(org$frostlang$frostc$Type* param0) {

// line 4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$FixedArray** $tmp2107 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp2108 = *$tmp2107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
frost$core$Weak** $tmp2109 = &param0->genericClassParameter;
frost$core$Weak* $tmp2110 = *$tmp2109;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
frost$core$Weak** $tmp2111 = &param0->genericMethodParameter;
frost$core$Weak* $tmp2112 = *$tmp2111;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
org$frostlang$frostc$MethodRef** $tmp2113 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp2114 = *$tmp2113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
return;

}

