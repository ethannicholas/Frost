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
typedef frost$core$Bit (*$fn505)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn530)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn541)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn553)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn580)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1018)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1030)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1041)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1052)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1064)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1076)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1091)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1147)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1194)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1204)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1230)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1245)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1256)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1268)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1280)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1291)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1306)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1317)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1329)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1341)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1356)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1383)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1394)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1406)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1418)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1431)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1452)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1467)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1485)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1500)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1513)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1524)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1546)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1557)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1577)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1594)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1685)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1693)(frost$collections$MapView*);
typedef frost$core$Int64 (*$fn1733)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1811)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1826)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1888)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1910)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1921)(frost$collections$Key*);

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
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s512 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s562 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s588 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, 1146821029976304283, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 5148459585349422950, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s624 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 1492063599391574064, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -3824106974697578343, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 16, -3824106976449029430, NULL };
static frost$core$String $s648 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5545501573009681362, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static frost$core$String $s658 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static frost$core$String $s663 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static frost$core$String $s668 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static frost$core$String $s673 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static frost$core$String $s678 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static frost$core$String $s688 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static frost$core$String $s693 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s710 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s716 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s728 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s740 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s752 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, 1146821061809580773, NULL };
static frost$core$String $s758 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, 1146821061809581078, NULL };
static frost$core$String $s764 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3824106976667626414, NULL };
static frost$core$String $s770 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, 1146820904470315469, NULL };
static frost$core$String $s776 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, 1146820904470315667, NULL };
static frost$core$String $s782 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s786 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static frost$core$String $s788 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s796 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static frost$core$String $s798 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static frost$core$String $s808 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s818 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 4906885815162678826, NULL };
static frost$core$String $s849 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, 1146821009278619293, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -7013691227705711665, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s876 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s879 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s908 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s920 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 3644790808526678741, NULL };
static frost$core$String $s932 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -3824106975113800959, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s977 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s986 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static frost$core$String $s992 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static frost$core$String $s996 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1001 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -3508042023517899272, NULL };
static frost$core$String $s1007 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1082 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1097 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, -3508042023536129774, NULL };
static frost$core$String $s1177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, 1146821061406687137, NULL };
static frost$core$String $s1185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -4916982935192335398, NULL };
static frost$core$String $s1215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1285 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1286 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 97, -2976789655376824909, NULL };
static frost$core$String $s1370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 119, 5693748891149284325, NULL };
static frost$core$String $s1423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1565 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1690 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 168, 1028753922056655266, NULL };
static frost$core$String $s1820 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1915 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1916 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 169, -7857031125004373715, NULL };

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
frost$core$Int64 $tmp499 = (frost$core$Int64) {194};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s500, $tmp499);
abort(); // unreachable
block7:;
// line 197
frost$collections$Array* $tmp501 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp501, ((frost$core$Object*) param3));
// line 198
org$frostlang$frostc$Type* $tmp502 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp503 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp503->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp503 = $tmp503->next;
}
$fn505 $tmp504 = $tmp503->methods[1];
frost$core$Bit $tmp506 = $tmp504(((frost$core$Equatable*) param3), ((frost$core$Equatable*) $tmp502));
bool $tmp507 = $tmp506.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
if ($tmp507) goto block16; else goto block17;
block16:;
// line 199
frost$core$MutableString* $tmp508 = *(&local1);
frost$core$String** $tmp509 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp510 = *$tmp509;
frost$core$MutableString$append$frost$core$String($tmp508, $tmp510);
goto block17;
block17:;
// line 201
frost$core$MutableString* $tmp511 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp511, &$s512);
// line 202
org$frostlang$frostc$Type* $tmp513 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp514 = *(&local1);
frost$core$String* $tmp515 = frost$core$MutableString$finish$R$frost$core$String($tmp514);
frost$collections$Array* $tmp516 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp517 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp516);
frost$core$Bit $tmp518 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64($tmp513, $tmp515, param1, param0, ((frost$collections$ListView*) $tmp517), $tmp518, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
frost$core$String* $tmp519 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp520 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$MutableString* $tmp521 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp513;

}
frost$core$Int64 org$frostlang$frostc$Type$get_size$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
// line 207
org$frostlang$frostc$Type$Kind* $tmp522 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp523 = *$tmp522;
org$frostlang$frostc$Type$Kind$wrapper* $tmp524;
$tmp524 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp524->value = $tmp523;
frost$core$Int64 $tmp525 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp526 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp525);
org$frostlang$frostc$Type$Kind$wrapper* $tmp527;
$tmp527 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp527->value = $tmp526;
ITable* $tmp528 = ((frost$core$Equatable*) $tmp524)->$class->itable;
while ($tmp528->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp528 = $tmp528->next;
}
$fn530 $tmp529 = $tmp528->methods[0];
frost$core$Bit $tmp531 = $tmp529(((frost$core$Equatable*) $tmp524), ((frost$core$Equatable*) $tmp527));
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block1; else goto block2;
block1:;
*(&local1) = $tmp531;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp533 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp534 = *$tmp533;
org$frostlang$frostc$Type$Kind$wrapper* $tmp535;
$tmp535 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp535->value = $tmp534;
frost$core$Int64 $tmp536 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp537 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp536);
org$frostlang$frostc$Type$Kind$wrapper* $tmp538;
$tmp538 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp538->value = $tmp537;
ITable* $tmp539 = ((frost$core$Equatable*) $tmp535)->$class->itable;
while ($tmp539->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp539 = $tmp539->next;
}
$fn541 $tmp540 = $tmp539->methods[0];
frost$core$Bit $tmp542 = $tmp540(((frost$core$Equatable*) $tmp535), ((frost$core$Equatable*) $tmp538));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp538)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp535)));
*(&local1) = $tmp542;
goto block3;
block3:;
frost$core$Bit $tmp543 = *(&local1);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block4; else goto block5;
block4:;
*(&local0) = $tmp543;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp545 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp546 = *$tmp545;
org$frostlang$frostc$Type$Kind$wrapper* $tmp547;
$tmp547 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp547->value = $tmp546;
frost$core$Int64 $tmp548 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp549 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp548);
org$frostlang$frostc$Type$Kind$wrapper* $tmp550;
$tmp550 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp550->value = $tmp549;
ITable* $tmp551 = ((frost$core$Equatable*) $tmp547)->$class->itable;
while ($tmp551->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp551 = $tmp551->next;
}
$fn553 $tmp552 = $tmp551->methods[0];
frost$core$Bit $tmp554 = $tmp552(((frost$core$Equatable*) $tmp547), ((frost$core$Equatable*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp550)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp547)));
*(&local0) = $tmp554;
goto block6;
block6:;
frost$core$Bit $tmp555 = *(&local0);
bool $tmp556 = $tmp555.value;
if ($tmp556) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp557 = (frost$core$Int64) {207};
frost$core$String* $tmp558 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s559, ((frost$core$Object*) param0));
frost$core$String* $tmp560 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp558, &$s561);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s562, $tmp557, $tmp560);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
abort(); // unreachable
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp527)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp524)));
// line 209
org$frostlang$frostc$Position* $tmp563 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp564 = *$tmp563;
frost$core$Int64 $tmp565 = $tmp564.line;
return $tmp565;

}
frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$core$Bit local0;
// line 219
frost$core$String** $tmp566 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp567 = *$tmp566;
frost$core$String** $tmp568 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp569 = *$tmp568;
frost$core$Bit $tmp570 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp567, $tmp569);
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Type$Kind* $tmp572 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp573 = *$tmp572;
org$frostlang$frostc$Type$Kind$wrapper* $tmp574;
$tmp574 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp574->value = $tmp573;
org$frostlang$frostc$Type$Kind* $tmp575 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp576 = *$tmp575;
org$frostlang$frostc$Type$Kind$wrapper* $tmp577;
$tmp577 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp577->value = $tmp576;
ITable* $tmp578 = ((frost$core$Equatable*) $tmp574)->$class->itable;
while ($tmp578->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp578 = $tmp578->next;
}
$fn580 $tmp579 = $tmp578->methods[0];
frost$core$Bit $tmp581 = $tmp579(((frost$core$Equatable*) $tmp574), ((frost$core$Equatable*) $tmp577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp577)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp574)));
*(&local0) = $tmp581;
goto block3;
block2:;
*(&local0) = $tmp570;
goto block3;
block3:;
frost$core$Bit $tmp582 = *(&local0);
return $tmp582;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type() {

// line 224
org$frostlang$frostc$Type* $tmp583 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp584 = (frost$core$Int64) {4};
org$frostlang$frostc$Type$Kind $tmp585 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp584);
org$frostlang$frostc$Position $tmp586 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp587 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp583, &$s588, $tmp585, $tmp586, $tmp587);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
return $tmp583;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type() {

// line 229
org$frostlang$frostc$Type* $tmp589 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp590 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp591 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp590);
org$frostlang$frostc$Position $tmp592 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp593 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp589, &$s594, $tmp591, $tmp592, $tmp593);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
return $tmp589;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type() {

// line 234
org$frostlang$frostc$Type* $tmp595 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp596 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp597 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp596);
org$frostlang$frostc$Position $tmp598 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp599 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp595, &$s600, $tmp597, $tmp598, $tmp599);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
return $tmp595;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type() {

frost$collections$Array* local0 = NULL;
// line 239
frost$collections$Array* $tmp601 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp601);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$collections$Array* $tmp602 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local0) = $tmp601;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
// line 240
frost$collections$Array* $tmp603 = *(&local0);
org$frostlang$frostc$Type* $tmp604 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp603, ((frost$core$Object*) $tmp604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// line 241
org$frostlang$frostc$Type* $tmp605 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp606 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp607 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp606);
org$frostlang$frostc$Position $tmp608 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp609 = *(&local0);
frost$core$Bit $tmp610 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp605, &$s611, $tmp607, $tmp608, ((frost$collections$ListView*) $tmp609), $tmp610);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
frost$collections$Array* $tmp612 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp605;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type() {

// line 246
org$frostlang$frostc$Type* $tmp613 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp614 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp615 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp614);
org$frostlang$frostc$Position $tmp616 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp617 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp613, &$s618, $tmp615, $tmp616, $tmp617);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
return $tmp613;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Immutable$R$org$frostlang$frostc$Type() {

// line 251
org$frostlang$frostc$Type* $tmp619 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp620 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp621 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp620);
org$frostlang$frostc$Position $tmp622 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp623 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp619, &$s624, $tmp621, $tmp622, $tmp623);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
return $tmp619;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type() {

// line 256
org$frostlang$frostc$Type* $tmp625 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp626 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp627 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp626);
org$frostlang$frostc$Position $tmp628 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp629 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp625, &$s630, $tmp627, $tmp628, $tmp629);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
return $tmp625;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type() {

// line 261
org$frostlang$frostc$Type* $tmp631 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp632 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp633 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp632);
org$frostlang$frostc$Position $tmp634 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp635 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp631, &$s636, $tmp633, $tmp634, $tmp635);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
return $tmp631;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type() {

// line 266
org$frostlang$frostc$Type* $tmp637 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp638 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp639 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp638);
org$frostlang$frostc$Position $tmp640 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp641 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp637, &$s642, $tmp639, $tmp640, $tmp641);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
return $tmp637;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RegularExpression$R$org$frostlang$frostc$Type() {

// line 271
org$frostlang$frostc$Type* $tmp643 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp644 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp645 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp644);
org$frostlang$frostc$Position $tmp646 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp647 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp643, &$s648, $tmp645, $tmp646, $tmp647);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
return $tmp643;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt8$R$org$frostlang$frostc$Type() {

// line 276
org$frostlang$frostc$Type* $tmp649 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp650 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp651 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp650);
frost$core$Int64 $tmp652 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp649, &$s653, $tmp651, $tmp652);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
return $tmp649;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt16$R$org$frostlang$frostc$Type() {

// line 281
org$frostlang$frostc$Type* $tmp654 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp655 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp656 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp655);
frost$core$Int64 $tmp657 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp654, &$s658, $tmp656, $tmp657);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
return $tmp654;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt32$R$org$frostlang$frostc$Type() {

// line 286
org$frostlang$frostc$Type* $tmp659 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp660 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp661 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp660);
frost$core$Int64 $tmp662 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp659, &$s663, $tmp661, $tmp662);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
return $tmp659;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt64$R$org$frostlang$frostc$Type() {

// line 291
org$frostlang$frostc$Type* $tmp664 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp665 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp666 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp665);
frost$core$Int64 $tmp667 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp664, &$s668, $tmp666, $tmp667);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
return $tmp664;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt8$R$org$frostlang$frostc$Type() {

// line 296
org$frostlang$frostc$Type* $tmp669 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp670 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp671 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp670);
frost$core$Int64 $tmp672 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp669, &$s673, $tmp671, $tmp672);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
return $tmp669;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt16$R$org$frostlang$frostc$Type() {

// line 301
org$frostlang$frostc$Type* $tmp674 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp675 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp676 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp675);
frost$core$Int64 $tmp677 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp674, &$s678, $tmp676, $tmp677);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
return $tmp674;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt32$R$org$frostlang$frostc$Type() {

// line 306
org$frostlang$frostc$Type* $tmp679 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp680 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp681 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp680);
frost$core$Int64 $tmp682 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp679, &$s683, $tmp681, $tmp682);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
return $tmp679;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt64$R$org$frostlang$frostc$Type() {

// line 311
org$frostlang$frostc$Type* $tmp684 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp685 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp686 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp685);
frost$core$Int64 $tmp687 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp684, &$s688, $tmp686, $tmp687);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
return $tmp684;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat32$R$org$frostlang$frostc$Type() {

// line 316
org$frostlang$frostc$Type* $tmp689 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp690 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp691 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp690);
frost$core$Int64 $tmp692 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp689, &$s693, $tmp691, $tmp692);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
return $tmp689;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat64$R$org$frostlang$frostc$Type() {

// line 321
org$frostlang$frostc$Type* $tmp694 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp695 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp696 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp695);
frost$core$Int64 $tmp697 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp694, &$s698, $tmp696, $tmp697);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
return $tmp694;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type() {

// line 326
org$frostlang$frostc$Type* $tmp699 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp700 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp701 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp700);
org$frostlang$frostc$Position $tmp702 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp703 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp699, &$s704, $tmp701, $tmp702, $tmp703);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
return $tmp699;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type() {

// line 331
org$frostlang$frostc$Type* $tmp705 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp706 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp707 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp706);
org$frostlang$frostc$Position $tmp708 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp709 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp705, &$s710, $tmp707, $tmp708, $tmp709);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
return $tmp705;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type() {

// line 336
org$frostlang$frostc$Type* $tmp711 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp712 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp713 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp712);
org$frostlang$frostc$Position $tmp714 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp715 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp711, &$s716, $tmp713, $tmp714, $tmp715);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
return $tmp711;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type() {

// line 341
org$frostlang$frostc$Type* $tmp717 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp718 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp719 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp718);
org$frostlang$frostc$Position $tmp720 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp721 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp717, &$s722, $tmp719, $tmp720, $tmp721);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
return $tmp717;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type() {

// line 346
org$frostlang$frostc$Type* $tmp723 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp724 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp725 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp724);
org$frostlang$frostc$Position $tmp726 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp727 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp723, &$s728, $tmp725, $tmp726, $tmp727);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
return $tmp723;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type() {

// line 351
org$frostlang$frostc$Type* $tmp729 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp730 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp731 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp730);
org$frostlang$frostc$Position $tmp732 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp733 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp729, &$s734, $tmp731, $tmp732, $tmp733);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
return $tmp729;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type() {

// line 356
org$frostlang$frostc$Type* $tmp735 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp736 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp737 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp736);
org$frostlang$frostc$Position $tmp738 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp739 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp735, &$s740, $tmp737, $tmp738, $tmp739);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
return $tmp735;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type() {

// line 361
org$frostlang$frostc$Type* $tmp741 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp742 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp743 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp742);
org$frostlang$frostc$Position $tmp744 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp745 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp741, &$s746, $tmp743, $tmp744, $tmp745);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
return $tmp741;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type() {

// line 366
org$frostlang$frostc$Type* $tmp747 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp748 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp749 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp748);
org$frostlang$frostc$Position $tmp750 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp751 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp747, &$s752, $tmp749, $tmp750, $tmp751);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
return $tmp747;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type() {

// line 371
org$frostlang$frostc$Type* $tmp753 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp754 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp755 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp754);
org$frostlang$frostc$Position $tmp756 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp757 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp753, &$s758, $tmp755, $tmp756, $tmp757);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
return $tmp753;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type() {

// line 376
org$frostlang$frostc$Type* $tmp759 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp760 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp761 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp760);
org$frostlang$frostc$Position $tmp762 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp763 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp759, &$s764, $tmp761, $tmp762, $tmp763);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
return $tmp759;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type() {

// line 381
org$frostlang$frostc$Type* $tmp765 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp766 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp767 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp766);
org$frostlang$frostc$Position $tmp768 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp769 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp765, &$s770, $tmp767, $tmp768, $tmp769);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
return $tmp765;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type() {

// line 386
org$frostlang$frostc$Type* $tmp771 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp772 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp773 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp772);
org$frostlang$frostc$Position $tmp774 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp775 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp771, &$s776, $tmp773, $tmp774, $tmp775);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
return $tmp771;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type() {

// line 391
org$frostlang$frostc$Type* $tmp777 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp778 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp779 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp778);
org$frostlang$frostc$Position $tmp780 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp781 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp777, &$s782, $tmp779, $tmp780, $tmp781);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
return $tmp777;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$IntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

// line 396
org$frostlang$frostc$Type* $tmp783 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp784;
$tmp784 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp784->value = param0;
frost$core$String* $tmp785 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s786, ((frost$core$Object*) $tmp784));
frost$core$String* $tmp787 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp785, &$s788);
frost$core$Int64 $tmp789 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp790 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp789);
org$frostlang$frostc$Position $tmp791 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp792 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp783, $tmp787, $tmp790, $tmp791, $tmp792);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
return $tmp783;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$NegatedIntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

// line 401
org$frostlang$frostc$Type* $tmp793 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp794;
$tmp794 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp794->value = param0;
frost$core$String* $tmp795 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s796, ((frost$core$Object*) $tmp794));
frost$core$String* $tmp797 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp795, &$s798);
frost$core$Int64 $tmp799 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp800 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp799);
org$frostlang$frostc$Position $tmp801 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp802 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp793, $tmp797, $tmp800, $tmp801, $tmp802);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
return $tmp793;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RealLiteral$frost$core$Real64$R$org$frostlang$frostc$Type(frost$core$Real64 param0) {

// line 406
org$frostlang$frostc$Type* $tmp803 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Real64$wrapper* $tmp804;
$tmp804 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp804->value = param0;
frost$core$String* $tmp805 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s806, ((frost$core$Object*) $tmp804));
frost$core$String* $tmp807 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp805, &$s808);
frost$core$Int64 $tmp809 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp810 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp809);
org$frostlang$frostc$Position $tmp811 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp812 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp803, $tmp807, $tmp810, $tmp811, $tmp812);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
return $tmp803;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BitLiteral$R$org$frostlang$frostc$Type() {

// line 411
org$frostlang$frostc$Type* $tmp813 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp814 = (frost$core$Int64) {7};
org$frostlang$frostc$Type$Kind $tmp815 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp814);
org$frostlang$frostc$Position $tmp816 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp817 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp813, &$s818, $tmp815, $tmp816, $tmp817);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
return $tmp813;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ClassLiteral$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 416
frost$collections$Array* $tmp819 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp819);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
frost$collections$Array* $tmp820 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
*(&local0) = $tmp819;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
// line 417
frost$collections$Array* $tmp821 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp821, ((frost$core$Object*) param0));
// line 418
org$frostlang$frostc$Type* $tmp822 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$collections$Array* $tmp823 = *(&local0);
org$frostlang$frostc$Type* $tmp824 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp822, ((frost$collections$ListView*) $tmp823));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
frost$collections$Array* $tmp825 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp824;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type() {

// line 423
org$frostlang$frostc$Type* $tmp826 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp827 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$Kind $tmp828 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp827);
org$frostlang$frostc$Position $tmp829 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp830 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp826, &$s831, $tmp828, $tmp829, $tmp830);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
return $tmp826;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type() {

// line 428
org$frostlang$frostc$Type* $tmp832 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp833 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp834 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp833);
org$frostlang$frostc$Position $tmp835 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp836 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp832, &$s837, $tmp834, $tmp835, $tmp836);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
return $tmp832;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterable$R$org$frostlang$frostc$Type() {

// line 433
org$frostlang$frostc$Type* $tmp838 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp839 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp840 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp839);
org$frostlang$frostc$Position $tmp841 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp842 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp838, &$s843, $tmp840, $tmp841, $tmp842);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
return $tmp838;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Frost$R$org$frostlang$frostc$Type() {

// line 438
org$frostlang$frostc$Type* $tmp844 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp845 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp846 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp845);
org$frostlang$frostc$Position $tmp847 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp848 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp844, &$s849, $tmp846, $tmp847, $tmp848);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
return $tmp844;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type() {

// line 443
org$frostlang$frostc$Type* $tmp850 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp851 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp852 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp851);
org$frostlang$frostc$Position $tmp853 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp854 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp850, &$s855, $tmp852, $tmp853, $tmp854);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
return $tmp850;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type() {

// line 448
org$frostlang$frostc$Type* $tmp856 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp857 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp858 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp857);
org$frostlang$frostc$Position $tmp859 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp860 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp856, &$s861, $tmp858, $tmp859, $tmp860);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
return $tmp856;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 453
frost$collections$Array* $tmp862 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp862);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$collections$Array* $tmp863 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
*(&local0) = $tmp862;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
// line 454
frost$collections$Array* $tmp864 = *(&local0);
org$frostlang$frostc$Type* $tmp865 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp866 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp867 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp866);
org$frostlang$frostc$Position $tmp868 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp869 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp865, &$s870, $tmp867, $tmp868, $tmp869);
frost$collections$Array$add$frost$collections$Array$T($tmp864, ((frost$core$Object*) $tmp865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
// line 455
frost$collections$Array* $tmp871 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp871, ((frost$core$Object*) param0));
// line 456
org$frostlang$frostc$Type* $tmp872 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp873 = frost$core$String$get_asString$R$frost$core$String(&$s874);
frost$core$String* $tmp875 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp873, &$s876);
frost$core$String* $tmp877 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp875, ((frost$core$Object*) param0));
frost$core$String* $tmp878 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp877, &$s879);
frost$core$Int64 $tmp880 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp881 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp880);
org$frostlang$frostc$Position* $tmp882 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp883 = *$tmp882;
frost$collections$Array* $tmp884 = *(&local0);
frost$core$Bit* $tmp885 = &param0->resolved;
frost$core$Bit $tmp886 = *$tmp885;
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp872, $tmp878, $tmp881, $tmp883, ((frost$collections$ListView*) $tmp884), $tmp886);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
frost$collections$Array* $tmp887 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp872;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 461
frost$collections$Array* $tmp888 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp888);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
frost$collections$Array* $tmp889 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
*(&local0) = $tmp888;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// line 462
frost$collections$Array* $tmp890 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp890, ((frost$core$Object*) param0));
// line 463
org$frostlang$frostc$Type* $tmp891 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp892 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp893 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp892);
org$frostlang$frostc$Position $tmp894 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp895 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp891, &$s896, $tmp893, $tmp894, $tmp895);
frost$collections$Array* $tmp897 = *(&local0);
org$frostlang$frostc$Type* $tmp898 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp891, ((frost$collections$ListView*) $tmp897));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
frost$collections$Array* $tmp899 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp898;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 468
frost$collections$Array* $tmp900 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp900);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$collections$Array* $tmp901 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
*(&local0) = $tmp900;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
// line 469
frost$collections$Array* $tmp902 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp902, ((frost$core$Object*) param0));
// line 470
org$frostlang$frostc$Type* $tmp903 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp904 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp905 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp904);
org$frostlang$frostc$Position $tmp906 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp907 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp903, &$s908, $tmp905, $tmp906, $tmp907);
frost$collections$Array* $tmp909 = *(&local0);
org$frostlang$frostc$Type* $tmp910 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp903, ((frost$collections$ListView*) $tmp909));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
frost$collections$Array* $tmp911 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp910;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ImmutableArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 475
frost$collections$Array* $tmp912 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp912);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
frost$collections$Array* $tmp913 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
*(&local0) = $tmp912;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
// line 476
frost$collections$Array* $tmp914 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp914, ((frost$core$Object*) param0));
// line 477
org$frostlang$frostc$Type* $tmp915 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp916 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp917 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp916);
org$frostlang$frostc$Position $tmp918 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp919 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp915, &$s920, $tmp917, $tmp918, $tmp919);
frost$collections$Array* $tmp921 = *(&local0);
org$frostlang$frostc$Type* $tmp922 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp915, ((frost$collections$ListView*) $tmp921));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$collections$Array* $tmp923 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp922;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 482
frost$collections$Array* $tmp924 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp924);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
frost$collections$Array* $tmp925 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
*(&local0) = $tmp924;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
// line 483
frost$collections$Array* $tmp926 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp926, ((frost$core$Object*) param0));
// line 484
org$frostlang$frostc$Type* $tmp927 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp928 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp929 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp928);
org$frostlang$frostc$Position $tmp930 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp931 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp927, &$s932, $tmp929, $tmp930, $tmp931);
frost$collections$Array* $tmp933 = *(&local0);
org$frostlang$frostc$Type* $tmp934 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp927, ((frost$collections$ListView*) $tmp933));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$collections$Array* $tmp935 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp934;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 489
frost$collections$Array* $tmp936 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp936);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
frost$collections$Array* $tmp937 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
*(&local0) = $tmp936;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
// line 490
frost$collections$Array* $tmp938 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp938, ((frost$core$Object*) param0));
// line 491
org$frostlang$frostc$Type* $tmp939 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp940 = org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp941 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp939, $tmp940);
bool $tmp942 = $tmp941.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
if ($tmp942) goto block1; else goto block3;
block1:;
// line 492
frost$collections$Array* $tmp943 = *(&local0);
org$frostlang$frostc$Type* $tmp944 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp943, ((frost$core$Object*) $tmp944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
goto block2;
block3:;
// line 494
org$frostlang$frostc$Type* $tmp945 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp946 = org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp947 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp945, $tmp946);
bool $tmp948 = $tmp947.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
if ($tmp948) goto block4; else goto block6;
block4:;
// line 495
frost$collections$Array* $tmp949 = *(&local0);
org$frostlang$frostc$Type* $tmp950 = org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp949, ((frost$core$Object*) $tmp950));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
goto block5;
block6:;
// line 497
org$frostlang$frostc$Type* $tmp951 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp952 = org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp953 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp951, $tmp952);
bool $tmp954 = $tmp953.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
if ($tmp954) goto block7; else goto block9;
block7:;
// line 498
frost$collections$Array* $tmp955 = *(&local0);
org$frostlang$frostc$Type* $tmp956 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp955, ((frost$core$Object*) $tmp956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
goto block8;
block9:;
// line 1
// line 501
frost$collections$Array* $tmp957 = *(&local0);
org$frostlang$frostc$Type* $tmp958 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
frost$collections$Array$add$frost$collections$Array$T($tmp957, ((frost$core$Object*) $tmp958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
// line 503
org$frostlang$frostc$Type* $tmp959 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp960 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp961 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp960);
org$frostlang$frostc$Position $tmp962 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp963 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp959, &$s964, $tmp961, $tmp962, $tmp963);
frost$collections$Array* $tmp965 = *(&local0);
org$frostlang$frostc$Type* $tmp966 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp959, ((frost$collections$ListView*) $tmp965));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$collections$Array* $tmp967 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp966;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$collections$Array* local0 = NULL;
// line 508
frost$collections$Array* $tmp968 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp968);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$collections$Array* $tmp969 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
*(&local0) = $tmp968;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
// line 509
frost$collections$Array* $tmp970 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp970, ((frost$core$Object*) param0));
// line 510
frost$collections$Array* $tmp971 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp971, ((frost$core$Object*) param1));
// line 511
org$frostlang$frostc$Type* $tmp972 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp973 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp974 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp973);
org$frostlang$frostc$Position $tmp975 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp976 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp972, &$s977, $tmp974, $tmp975, $tmp976);
frost$collections$Array* $tmp978 = *(&local0);
org$frostlang$frostc$Type* $tmp979 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp972, ((frost$collections$ListView*) $tmp978));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
frost$collections$Array* $tmp980 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp979;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type() {

// line 516
org$frostlang$frostc$Type* $tmp981 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp982 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp983 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp982);
org$frostlang$frostc$Position $tmp984 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp985 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp981, &$s986, $tmp983, $tmp984, $tmp985);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
return $tmp981;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type() {

// line 521
org$frostlang$frostc$Type* $tmp987 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp988 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp989 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp988);
org$frostlang$frostc$Position $tmp990 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp991 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp987, &$s992, $tmp989, $tmp990, $tmp991);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
return $tmp987;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
// line 525
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
frost$core$Int64 $tmp1013 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1014 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1013);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1015;
$tmp1015 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1015->value = $tmp1014;
ITable* $tmp1016 = ((frost$core$Equatable*) $tmp1012)->$class->itable;
while ($tmp1016->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1016 = $tmp1016->next;
}
$fn1018 $tmp1017 = $tmp1016->methods[0];
frost$core$Bit $tmp1019 = $tmp1017(((frost$core$Equatable*) $tmp1012), ((frost$core$Equatable*) $tmp1015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1015)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1012)));
*(&local1) = $tmp1019;
goto block9;
block9:;
frost$core$Bit $tmp1020 = *(&local1);
bool $tmp1021 = $tmp1020.value;
if ($tmp1021) goto block10; else goto block11;
block10:;
*(&local0) = $tmp1020;
goto block12;
block11:;
org$frostlang$frostc$Type$Kind* $tmp1022 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1023 = *$tmp1022;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1024;
$tmp1024 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1024->value = $tmp1023;
frost$core$Int64 $tmp1025 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1026 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1025);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1027;
$tmp1027 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1027->value = $tmp1026;
ITable* $tmp1028 = ((frost$core$Equatable*) $tmp1024)->$class->itable;
while ($tmp1028->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1028 = $tmp1028->next;
}
$fn1030 $tmp1029 = $tmp1028->methods[0];
frost$core$Bit $tmp1031 = $tmp1029(((frost$core$Equatable*) $tmp1024), ((frost$core$Equatable*) $tmp1027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1027)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1024)));
*(&local0) = $tmp1031;
goto block12;
block12:;
frost$core$Bit $tmp1032 = *(&local0);
return $tmp1032;

}
frost$core$Bit org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
// line 531
org$frostlang$frostc$Type$Kind* $tmp1033 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1034 = *$tmp1033;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1035;
$tmp1035 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1035->value = $tmp1034;
frost$core$Int64 $tmp1036 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp1037 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1036);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1038;
$tmp1038 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1038->value = $tmp1037;
ITable* $tmp1039 = ((frost$core$Equatable*) $tmp1035)->$class->itable;
while ($tmp1039->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1039 = $tmp1039->next;
}
$fn1041 $tmp1040 = $tmp1039->methods[0];
frost$core$Bit $tmp1042 = $tmp1040(((frost$core$Equatable*) $tmp1035), ((frost$core$Equatable*) $tmp1038));
bool $tmp1043 = $tmp1042.value;
if ($tmp1043) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1042;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1044 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1045 = *$tmp1044;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1046;
$tmp1046 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1046->value = $tmp1045;
frost$core$Int64 $tmp1047 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp1048 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1047);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1049;
$tmp1049 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1049->value = $tmp1048;
ITable* $tmp1050 = ((frost$core$Equatable*) $tmp1046)->$class->itable;
while ($tmp1050->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1050 = $tmp1050->next;
}
$fn1052 $tmp1051 = $tmp1050->methods[0];
frost$core$Bit $tmp1053 = $tmp1051(((frost$core$Equatable*) $tmp1046), ((frost$core$Equatable*) $tmp1049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1049)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1046)));
*(&local2) = $tmp1053;
goto block3;
block3:;
frost$core$Bit $tmp1054 = *(&local2);
bool $tmp1055 = $tmp1054.value;
if ($tmp1055) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1054;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1056 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1057 = *$tmp1056;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1058;
$tmp1058 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1058->value = $tmp1057;
frost$core$Int64 $tmp1059 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp1060 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1059);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1061;
$tmp1061 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1061->value = $tmp1060;
ITable* $tmp1062 = ((frost$core$Equatable*) $tmp1058)->$class->itable;
while ($tmp1062->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1062 = $tmp1062->next;
}
$fn1064 $tmp1063 = $tmp1062->methods[0];
frost$core$Bit $tmp1065 = $tmp1063(((frost$core$Equatable*) $tmp1058), ((frost$core$Equatable*) $tmp1061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1061)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1058)));
*(&local1) = $tmp1065;
goto block6;
block6:;
frost$core$Bit $tmp1066 = *(&local1);
bool $tmp1067 = $tmp1066.value;
if ($tmp1067) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1066;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1068 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1069 = *$tmp1068;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1070;
$tmp1070 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1070->value = $tmp1069;
frost$core$Int64 $tmp1071 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1072 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1071);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1073;
$tmp1073 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1073->value = $tmp1072;
ITable* $tmp1074 = ((frost$core$Equatable*) $tmp1070)->$class->itable;
while ($tmp1074->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1074 = $tmp1074->next;
}
$fn1076 $tmp1075 = $tmp1074->methods[0];
frost$core$Bit $tmp1077 = $tmp1075(((frost$core$Equatable*) $tmp1070), ((frost$core$Equatable*) $tmp1073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1073)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1070)));
*(&local0) = $tmp1077;
goto block9;
block9:;
frost$core$Bit $tmp1078 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1038)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1035)));
return $tmp1078;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 536
frost$core$String** $tmp1079 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1080 = *$tmp1079;
frost$core$Bit $tmp1081 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1080, &$s1082);
return $tmp1081;

}
frost$core$Bit org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 540
org$frostlang$frostc$Type$Kind* $tmp1083 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1084 = *$tmp1083;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1085;
$tmp1085 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1085->value = $tmp1084;
frost$core$Int64 $tmp1086 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1087 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1086);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1088;
$tmp1088 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1088->value = $tmp1087;
ITable* $tmp1089 = ((frost$core$Equatable*) $tmp1085)->$class->itable;
while ($tmp1089->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1089 = $tmp1089->next;
}
$fn1091 $tmp1090 = $tmp1089->methods[0];
frost$core$Bit $tmp1092 = $tmp1090(((frost$core$Equatable*) $tmp1085), ((frost$core$Equatable*) $tmp1088));
bool $tmp1093 = $tmp1092.value;
if ($tmp1093) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1092;
goto block3;
block2:;
frost$core$String** $tmp1094 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1095 = *$tmp1094;
frost$core$Bit $tmp1096 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1095, &$s1097);
*(&local0) = $tmp1096;
goto block3;
block3:;
frost$core$Bit $tmp1098 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1088)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1085)));
return $tmp1098;

}
frost$core$Bit org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 544
frost$core$String** $tmp1099 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1100 = *$tmp1099;
frost$core$Bit $tmp1101 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1100, &$s1102);
return $tmp1101;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 548
frost$core$Bit $tmp1103 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1104 = $tmp1103.value;
if ($tmp1104) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1103;
goto block3;
block2:;
frost$core$Bit $tmp1105 = org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(param0);
*(&local0) = $tmp1105;
goto block3;
block3:;
frost$core$Bit $tmp1106 = *(&local0);
return $tmp1106;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 552
org$frostlang$frostc$Type$Kind* $tmp1107 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1108 = *$tmp1107;
frost$core$Int64 $tmp1109 = $tmp1108.$rawValue;
frost$core$Int64 $tmp1110 = (frost$core$Int64) {0};
frost$core$Bit $tmp1111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1109, $tmp1110);
bool $tmp1112 = $tmp1111.value;
if ($tmp1112) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1113 = (frost$core$Int64) {1};
frost$core$Bit $tmp1114 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1109, $tmp1113);
bool $tmp1115 = $tmp1114.value;
if ($tmp1115) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp1116 = (frost$core$Int64) {10};
frost$core$Bit $tmp1117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1109, $tmp1116);
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1119 = (frost$core$Int64) {11};
frost$core$Bit $tmp1120 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1109, $tmp1119);
bool $tmp1121 = $tmp1120.value;
if ($tmp1121) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp1122 = (frost$core$Int64) {12};
frost$core$Bit $tmp1123 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1109, $tmp1122);
bool $tmp1124 = $tmp1123.value;
if ($tmp1124) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp1125 = (frost$core$Int64) {15};
frost$core$Bit $tmp1126 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1109, $tmp1125);
bool $tmp1127 = $tmp1126.value;
if ($tmp1127) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp1128 = (frost$core$Int64) {14};
frost$core$Bit $tmp1129 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1109, $tmp1128);
bool $tmp1130 = $tmp1129.value;
if ($tmp1130) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp1131 = (frost$core$Int64) {17};
frost$core$Bit $tmp1132 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1109, $tmp1131);
bool $tmp1133 = $tmp1132.value;
if ($tmp1133) goto block2; else goto block10;
block10:;
frost$core$Int64 $tmp1134 = (frost$core$Int64) {16};
frost$core$Bit $tmp1135 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1109, $tmp1134);
bool $tmp1136 = $tmp1135.value;
if ($tmp1136) goto block2; else goto block11;
block2:;
// line 556
frost$core$Bit $tmp1137 = frost$core$Bit$init$builtin_bit(true);
return $tmp1137;
block11:;
// line 559
frost$core$Bit $tmp1138 = frost$core$Bit$init$builtin_bit(false);
return $tmp1138;
block1:;
goto block12;
block12:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 565
org$frostlang$frostc$Type$Kind* $tmp1139 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1140 = *$tmp1139;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1141;
$tmp1141 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1141->value = $tmp1140;
frost$core$Int64 $tmp1142 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1143 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1142);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1144;
$tmp1144 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1144->value = $tmp1143;
ITable* $tmp1145 = ((frost$core$Equatable*) $tmp1141)->$class->itable;
while ($tmp1145->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1145 = $tmp1145->next;
}
$fn1147 $tmp1146 = $tmp1145->methods[0];
frost$core$Bit $tmp1148 = $tmp1146(((frost$core$Equatable*) $tmp1141), ((frost$core$Equatable*) $tmp1144));
bool $tmp1149 = $tmp1148.value;
if ($tmp1149) goto block1; else goto block2;
block1:;
org$frostlang$frostc$FixedArray** $tmp1150 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1151 = *$tmp1150;
frost$core$Int64 $tmp1152 = (frost$core$Int64) {0};
frost$core$Object* $tmp1153 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1151, $tmp1152);
org$frostlang$frostc$Type* $tmp1154 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1155 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1153), $tmp1154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
frost$core$Frost$unref$frost$core$Object$Q($tmp1153);
*(&local0) = $tmp1155;
goto block3;
block2:;
*(&local0) = $tmp1148;
goto block3;
block3:;
frost$core$Bit $tmp1156 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1144)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1141)));
return $tmp1156;

}
frost$core$Bit org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 569
org$frostlang$frostc$Type$Kind* $tmp1157 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1158 = *$tmp1157;
frost$core$Int64 $tmp1159 = $tmp1158.$rawValue;
frost$core$Int64 $tmp1160 = (frost$core$Int64) {15};
frost$core$Bit $tmp1161 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1159, $tmp1160);
bool $tmp1162 = $tmp1161.value;
if ($tmp1162) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1163 = (frost$core$Int64) {14};
frost$core$Bit $tmp1164 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1159, $tmp1163);
bool $tmp1165 = $tmp1164.value;
if ($tmp1165) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp1166 = (frost$core$Int64) {17};
frost$core$Bit $tmp1167 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1159, $tmp1166);
bool $tmp1168 = $tmp1167.value;
if ($tmp1168) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1169 = (frost$core$Int64) {16};
frost$core$Bit $tmp1170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1159, $tmp1169);
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block2; else goto block6;
block2:;
// line 571
frost$core$Bit $tmp1172 = frost$core$Bit$init$builtin_bit(true);
return $tmp1172;
block6:;
// line 574
frost$core$Bit $tmp1173 = frost$core$Bit$init$builtin_bit(false);
return $tmp1173;
block1:;
goto block7;
block7:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 580
frost$core$String** $tmp1174 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1175 = *$tmp1174;
frost$core$Bit $tmp1176 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1175, &$s1177);
return $tmp1176;

}
frost$core$Bit org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 584
frost$core$String** $tmp1178 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1179 = *$tmp1178;
frost$core$Bit $tmp1180 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1179, &$s1181);
return $tmp1180;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 588
frost$core$String** $tmp1182 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1183 = *$tmp1182;
frost$core$Bit $tmp1184 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1183, &$s1185);
return $tmp1184;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 592
org$frostlang$frostc$Type$Kind* $tmp1186 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1187 = *$tmp1186;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1188;
$tmp1188 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1188->value = $tmp1187;
frost$core$Int64 $tmp1189 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1190 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1189);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1191;
$tmp1191 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1191->value = $tmp1190;
ITable* $tmp1192 = ((frost$core$Equatable*) $tmp1188)->$class->itable;
while ($tmp1192->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1192 = $tmp1192->next;
}
$fn1194 $tmp1193 = $tmp1192->methods[0];
frost$core$Bit $tmp1195 = $tmp1193(((frost$core$Equatable*) $tmp1188), ((frost$core$Equatable*) $tmp1191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1191)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1188)));
return $tmp1195;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 596
org$frostlang$frostc$Type$Kind* $tmp1196 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1197 = *$tmp1196;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1198;
$tmp1198 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1198->value = $tmp1197;
frost$core$Int64 $tmp1199 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1200 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1199);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1201;
$tmp1201 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1201->value = $tmp1200;
ITable* $tmp1202 = ((frost$core$Equatable*) $tmp1198)->$class->itable;
while ($tmp1202->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1202 = $tmp1202->next;
}
$fn1204 $tmp1203 = $tmp1202->methods[0];
frost$core$Bit $tmp1205 = $tmp1203(((frost$core$Equatable*) $tmp1198), ((frost$core$Equatable*) $tmp1201));
bool $tmp1206 = $tmp1205.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1201)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1198)));
if ($tmp1206) goto block1; else goto block2;
block1:;
// line 597
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 599
frost$collections$Array* $tmp1207 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1207);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$collections$Array* $tmp1208 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
*(&local0) = $tmp1207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
// line 600
frost$collections$Array* $tmp1209 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1209, ((frost$core$Object*) param0));
// line 601
org$frostlang$frostc$Type* $tmp1210 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String** $tmp1211 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1212 = *$tmp1211;
frost$core$String* $tmp1213 = frost$core$String$get_asString$R$frost$core$String($tmp1212);
frost$core$String* $tmp1214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1213, &$s1215);
frost$core$Int64 $tmp1216 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1217 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1216);
org$frostlang$frostc$Position $tmp1218 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp1219 = *(&local0);
frost$core$Bit $tmp1220 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp1210, $tmp1214, $tmp1217, $tmp1218, ((frost$collections$ListView*) $tmp1219), $tmp1220);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
frost$collections$Array* $tmp1221 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1210;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 605
org$frostlang$frostc$Type$Kind* $tmp1222 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1223 = *$tmp1222;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1224;
$tmp1224 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1224->value = $tmp1223;
frost$core$Int64 $tmp1225 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1226 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1225);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1227;
$tmp1227 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1227->value = $tmp1226;
ITable* $tmp1228 = ((frost$core$Equatable*) $tmp1224)->$class->itable;
while ($tmp1228->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1228 = $tmp1228->next;
}
$fn1230 $tmp1229 = $tmp1228->methods[1];
frost$core$Bit $tmp1231 = $tmp1229(((frost$core$Equatable*) $tmp1224), ((frost$core$Equatable*) $tmp1227));
bool $tmp1232 = $tmp1231.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1227)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1224)));
if ($tmp1232) goto block1; else goto block2;
block1:;
// line 606
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 608
org$frostlang$frostc$FixedArray** $tmp1233 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1234 = *$tmp1233;
frost$core$Int64 $tmp1235 = (frost$core$Int64) {0};
frost$core$Object* $tmp1236 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1234, $tmp1235);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1236)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1236);
return ((org$frostlang$frostc$Type*) $tmp1236);

}
frost$core$Int64 org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind* $tmp1237 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1238 = *$tmp1237;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1239;
$tmp1239 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1239->value = $tmp1238;
frost$core$Int64 $tmp1240 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp1241 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1240);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1242;
$tmp1242 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1242->value = $tmp1241;
ITable* $tmp1243 = ((frost$core$Equatable*) $tmp1239)->$class->itable;
while ($tmp1243->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1243 = $tmp1243->next;
}
$fn1245 $tmp1244 = $tmp1243->methods[0];
frost$core$Bit $tmp1246 = $tmp1244(((frost$core$Equatable*) $tmp1239), ((frost$core$Equatable*) $tmp1242));
bool $tmp1247 = $tmp1246.value;
if ($tmp1247) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1246;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1248 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1249 = *$tmp1248;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1250;
$tmp1250 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1250->value = $tmp1249;
frost$core$Int64 $tmp1251 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1252 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1251);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1253;
$tmp1253 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1253->value = $tmp1252;
ITable* $tmp1254 = ((frost$core$Equatable*) $tmp1250)->$class->itable;
while ($tmp1254->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1254 = $tmp1254->next;
}
$fn1256 $tmp1255 = $tmp1254->methods[0];
frost$core$Bit $tmp1257 = $tmp1255(((frost$core$Equatable*) $tmp1250), ((frost$core$Equatable*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1253)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1250)));
*(&local2) = $tmp1257;
goto block3;
block3:;
frost$core$Bit $tmp1258 = *(&local2);
bool $tmp1259 = $tmp1258.value;
if ($tmp1259) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1258;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1260 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1261 = *$tmp1260;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1262;
$tmp1262 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1262->value = $tmp1261;
frost$core$Int64 $tmp1263 = (frost$core$Int64) {16};
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1262)));
*(&local1) = $tmp1269;
goto block6;
block6:;
frost$core$Bit $tmp1270 = *(&local1);
bool $tmp1271 = $tmp1270.value;
if ($tmp1271) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1270;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1272 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1273 = *$tmp1272;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1274;
$tmp1274 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1274->value = $tmp1273;
frost$core$Int64 $tmp1275 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1276 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1275);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1277;
$tmp1277 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1277->value = $tmp1276;
ITable* $tmp1278 = ((frost$core$Equatable*) $tmp1274)->$class->itable;
while ($tmp1278->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1278 = $tmp1278->next;
}
$fn1280 $tmp1279 = $tmp1278->methods[0];
frost$core$Bit $tmp1281 = $tmp1279(((frost$core$Equatable*) $tmp1274), ((frost$core$Equatable*) $tmp1277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1277)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1274)));
*(&local0) = $tmp1281;
goto block9;
block9:;
frost$core$Bit $tmp1282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1242)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1239)));
bool $tmp1283 = $tmp1282.value;
if ($tmp1283) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1284 = (frost$core$Int64) {613};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1285, $tmp1284, &$s1286);
abort(); // unreachable
block10:;
// line 614
org$frostlang$frostc$FixedArray** $tmp1287 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1288 = *$tmp1287;
ITable* $tmp1289 = ((frost$collections$CollectionView*) $tmp1288)->$class->itable;
while ($tmp1289->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1289 = $tmp1289->next;
}
$fn1291 $tmp1290 = $tmp1289->methods[0];
frost$core$Int64 $tmp1292 = $tmp1290(((frost$collections$CollectionView*) $tmp1288));
frost$core$Int64 $tmp1293 = (frost$core$Int64) {1};
int64_t $tmp1294 = $tmp1292.value;
int64_t $tmp1295 = $tmp1293.value;
int64_t $tmp1296 = $tmp1294 - $tmp1295;
frost$core$Int64 $tmp1297 = (frost$core$Int64) {$tmp1296};
return $tmp1297;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
org$frostlang$frostc$Type$Kind* $tmp1298 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1299 = *$tmp1298;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1300;
$tmp1300 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1300->value = $tmp1299;
frost$core$Int64 $tmp1301 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp1302 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1301);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1303;
$tmp1303 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1303->value = $tmp1302;
ITable* $tmp1304 = ((frost$core$Equatable*) $tmp1300)->$class->itable;
while ($tmp1304->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1304 = $tmp1304->next;
}
$fn1306 $tmp1305 = $tmp1304->methods[0];
frost$core$Bit $tmp1307 = $tmp1305(((frost$core$Equatable*) $tmp1300), ((frost$core$Equatable*) $tmp1303));
bool $tmp1308 = $tmp1307.value;
if ($tmp1308) goto block1; else goto block2;
block1:;
*(&local4) = $tmp1307;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1309 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1310 = *$tmp1309;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1311;
$tmp1311 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1311->value = $tmp1310;
frost$core$Int64 $tmp1312 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1313 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1312);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1314;
$tmp1314 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1314->value = $tmp1313;
ITable* $tmp1315 = ((frost$core$Equatable*) $tmp1311)->$class->itable;
while ($tmp1315->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1315 = $tmp1315->next;
}
$fn1317 $tmp1316 = $tmp1315->methods[0];
frost$core$Bit $tmp1318 = $tmp1316(((frost$core$Equatable*) $tmp1311), ((frost$core$Equatable*) $tmp1314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1314)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1311)));
*(&local4) = $tmp1318;
goto block3;
block3:;
frost$core$Bit $tmp1319 = *(&local4);
bool $tmp1320 = $tmp1319.value;
if ($tmp1320) goto block4; else goto block5;
block4:;
*(&local3) = $tmp1319;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1321 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1322 = *$tmp1321;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1323;
$tmp1323 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1323->value = $tmp1322;
frost$core$Int64 $tmp1324 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1325 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1324);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1326;
$tmp1326 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1326->value = $tmp1325;
ITable* $tmp1327 = ((frost$core$Equatable*) $tmp1323)->$class->itable;
while ($tmp1327->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1327 = $tmp1327->next;
}
$fn1329 $tmp1328 = $tmp1327->methods[0];
frost$core$Bit $tmp1330 = $tmp1328(((frost$core$Equatable*) $tmp1323), ((frost$core$Equatable*) $tmp1326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1326)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1323)));
*(&local3) = $tmp1330;
goto block6;
block6:;
frost$core$Bit $tmp1331 = *(&local3);
bool $tmp1332 = $tmp1331.value;
if ($tmp1332) goto block7; else goto block8;
block7:;
*(&local2) = $tmp1331;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1333 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1334 = *$tmp1333;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1335;
$tmp1335 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1335->value = $tmp1334;
frost$core$Int64 $tmp1336 = (frost$core$Int64) {17};
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1335)));
*(&local2) = $tmp1342;
goto block9;
block9:;
frost$core$Bit $tmp1343 = *(&local2);
bool $tmp1344 = $tmp1343.value;
if ($tmp1344) goto block10; else goto block11;
block10:;
frost$core$Int64 $tmp1345 = (frost$core$Int64) {0};
int64_t $tmp1346 = param1.value;
int64_t $tmp1347 = $tmp1345.value;
bool $tmp1348 = $tmp1346 >= $tmp1347;
frost$core$Bit $tmp1349 = (frost$core$Bit) {$tmp1348};
*(&local1) = $tmp1349;
goto block12;
block11:;
*(&local1) = $tmp1343;
goto block12;
block12:;
frost$core$Bit $tmp1350 = *(&local1);
bool $tmp1351 = $tmp1350.value;
if ($tmp1351) goto block13; else goto block14;
block13:;
org$frostlang$frostc$FixedArray** $tmp1352 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1353 = *$tmp1352;
ITable* $tmp1354 = ((frost$collections$CollectionView*) $tmp1353)->$class->itable;
while ($tmp1354->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1354 = $tmp1354->next;
}
$fn1356 $tmp1355 = $tmp1354->methods[0];
frost$core$Int64 $tmp1357 = $tmp1355(((frost$collections$CollectionView*) $tmp1353));
frost$core$Int64 $tmp1358 = (frost$core$Int64) {1};
int64_t $tmp1359 = $tmp1357.value;
int64_t $tmp1360 = $tmp1358.value;
int64_t $tmp1361 = $tmp1359 - $tmp1360;
frost$core$Int64 $tmp1362 = (frost$core$Int64) {$tmp1361};
int64_t $tmp1363 = param1.value;
int64_t $tmp1364 = $tmp1362.value;
bool $tmp1365 = $tmp1363 < $tmp1364;
frost$core$Bit $tmp1366 = (frost$core$Bit) {$tmp1365};
*(&local0) = $tmp1366;
goto block15;
block14:;
*(&local0) = $tmp1350;
goto block15;
block15:;
frost$core$Bit $tmp1367 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1303)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1300)));
bool $tmp1368 = $tmp1367.value;
if ($tmp1368) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp1369 = (frost$core$Int64) {619};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1370, $tmp1369, &$s1371);
abort(); // unreachable
block16:;
// line 620
org$frostlang$frostc$FixedArray** $tmp1372 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1373 = *$tmp1372;
frost$core$Object* $tmp1374 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1373, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1374)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1374);
return ((org$frostlang$frostc$Type*) $tmp1374);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind* $tmp1375 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1376 = *$tmp1375;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1377;
$tmp1377 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1377->value = $tmp1376;
frost$core$Int64 $tmp1378 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp1379 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1378);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1380;
$tmp1380 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1380->value = $tmp1379;
ITable* $tmp1381 = ((frost$core$Equatable*) $tmp1377)->$class->itable;
while ($tmp1381->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1381 = $tmp1381->next;
}
$fn1383 $tmp1382 = $tmp1381->methods[0];
frost$core$Bit $tmp1384 = $tmp1382(((frost$core$Equatable*) $tmp1377), ((frost$core$Equatable*) $tmp1380));
bool $tmp1385 = $tmp1384.value;
if ($tmp1385) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1384;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1386 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1387 = *$tmp1386;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1388;
$tmp1388 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1388->value = $tmp1387;
frost$core$Int64 $tmp1389 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1390 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1389);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1391;
$tmp1391 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1391->value = $tmp1390;
ITable* $tmp1392 = ((frost$core$Equatable*) $tmp1388)->$class->itable;
while ($tmp1392->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1392 = $tmp1392->next;
}
$fn1394 $tmp1393 = $tmp1392->methods[0];
frost$core$Bit $tmp1395 = $tmp1393(((frost$core$Equatable*) $tmp1388), ((frost$core$Equatable*) $tmp1391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1391)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1388)));
*(&local2) = $tmp1395;
goto block3;
block3:;
frost$core$Bit $tmp1396 = *(&local2);
bool $tmp1397 = $tmp1396.value;
if ($tmp1397) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1396;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1398 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1399 = *$tmp1398;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1400;
$tmp1400 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1400->value = $tmp1399;
frost$core$Int64 $tmp1401 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1402 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1401);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1403;
$tmp1403 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1403->value = $tmp1402;
ITable* $tmp1404 = ((frost$core$Equatable*) $tmp1400)->$class->itable;
while ($tmp1404->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1404 = $tmp1404->next;
}
$fn1406 $tmp1405 = $tmp1404->methods[0];
frost$core$Bit $tmp1407 = $tmp1405(((frost$core$Equatable*) $tmp1400), ((frost$core$Equatable*) $tmp1403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1403)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1400)));
*(&local1) = $tmp1407;
goto block6;
block6:;
frost$core$Bit $tmp1408 = *(&local1);
bool $tmp1409 = $tmp1408.value;
if ($tmp1409) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1408;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1410 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1411 = *$tmp1410;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1412;
$tmp1412 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1412->value = $tmp1411;
frost$core$Int64 $tmp1413 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1414 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1413);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1415;
$tmp1415 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1415->value = $tmp1414;
ITable* $tmp1416 = ((frost$core$Equatable*) $tmp1412)->$class->itable;
while ($tmp1416->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1416 = $tmp1416->next;
}
$fn1418 $tmp1417 = $tmp1416->methods[0];
frost$core$Bit $tmp1419 = $tmp1417(((frost$core$Equatable*) $tmp1412), ((frost$core$Equatable*) $tmp1415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1415)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1412)));
*(&local0) = $tmp1419;
goto block9;
block9:;
frost$core$Bit $tmp1420 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1380)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1377)));
bool $tmp1421 = $tmp1420.value;
if ($tmp1421) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1422 = (frost$core$Int64) {625};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1423, $tmp1422, &$s1424);
abort(); // unreachable
block10:;
// line 626
org$frostlang$frostc$FixedArray** $tmp1425 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1426 = *$tmp1425;
org$frostlang$frostc$FixedArray** $tmp1427 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1428 = *$tmp1427;
ITable* $tmp1429 = ((frost$collections$CollectionView*) $tmp1428)->$class->itable;
while ($tmp1429->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1429 = $tmp1429->next;
}
$fn1431 $tmp1430 = $tmp1429->methods[0];
frost$core$Int64 $tmp1432 = $tmp1430(((frost$collections$CollectionView*) $tmp1428));
frost$core$Int64 $tmp1433 = (frost$core$Int64) {1};
int64_t $tmp1434 = $tmp1432.value;
int64_t $tmp1435 = $tmp1433.value;
int64_t $tmp1436 = $tmp1434 - $tmp1435;
frost$core$Int64 $tmp1437 = (frost$core$Int64) {$tmp1436};
frost$core$Object* $tmp1438 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1426, $tmp1437);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1438)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1438);
return ((org$frostlang$frostc$Type*) $tmp1438);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
frost$collections$HashSet* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
// line 633
frost$core$Bit $tmp1439 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param2);
bool $tmp1440 = $tmp1439.value;
if ($tmp1440) goto block1; else goto block2;
block1:;
// line 634
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 636
org$frostlang$frostc$Type* $tmp1441 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1442 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1441);
bool $tmp1443 = $tmp1442.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
if ($tmp1443) goto block3; else goto block4;
block3:;
// line 637
org$frostlang$frostc$Type$Kind* $tmp1444 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1445 = *$tmp1444;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1446;
$tmp1446 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1446->value = $tmp1445;
frost$core$Int64 $tmp1447 = (frost$core$Int64) {1};
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1449)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1446)));
if ($tmp1454) goto block5; else goto block6;
block5:;
// line 638
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block6:;
// line 640
org$frostlang$frostc$Type* $tmp1455 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
return $tmp1455;
block4:;
// line 642
org$frostlang$frostc$Type* $tmp1456 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1457 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param2, $tmp1456);
bool $tmp1458 = $tmp1457.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
if ($tmp1458) goto block7; else goto block8;
block7:;
// line 643
org$frostlang$frostc$Type$Kind* $tmp1459 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1460 = *$tmp1459;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1461;
$tmp1461 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1461->value = $tmp1460;
frost$core$Int64 $tmp1462 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1463 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1462);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1464;
$tmp1464 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1464->value = $tmp1463;
ITable* $tmp1465 = ((frost$core$Equatable*) $tmp1461)->$class->itable;
while ($tmp1465->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1465 = $tmp1465->next;
}
$fn1467 $tmp1466 = $tmp1465->methods[0];
frost$core$Bit $tmp1468 = $tmp1466(((frost$core$Equatable*) $tmp1461), ((frost$core$Equatable*) $tmp1464));
bool $tmp1469 = $tmp1468.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1464)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1461)));
if ($tmp1469) goto block9; else goto block10;
block9:;
// line 644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block10:;
// line 646
org$frostlang$frostc$Type* $tmp1470 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
return $tmp1470;
block8:;
// line 648
org$frostlang$frostc$Type* $tmp1471 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1472 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1471);
bool $tmp1473 = $tmp1472.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
if ($tmp1473) goto block11; else goto block12;
block11:;
// line 649
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block12:;
// line 651
org$frostlang$frostc$Type* $tmp1474 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1475 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param2, $tmp1474);
bool $tmp1476 = $tmp1475.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
if ($tmp1476) goto block13; else goto block14;
block13:;
// line 652
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block14:;
// line 654
org$frostlang$frostc$Type$Kind* $tmp1477 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1478 = *$tmp1477;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1479;
$tmp1479 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1479->value = $tmp1478;
frost$core$Int64 $tmp1480 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1481 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1480);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1482;
$tmp1482 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1482->value = $tmp1481;
ITable* $tmp1483 = ((frost$core$Equatable*) $tmp1479)->$class->itable;
while ($tmp1483->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1483 = $tmp1483->next;
}
$fn1485 $tmp1484 = $tmp1483->methods[0];
frost$core$Bit $tmp1486 = $tmp1484(((frost$core$Equatable*) $tmp1479), ((frost$core$Equatable*) $tmp1482));
bool $tmp1487 = $tmp1486.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1482)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1479)));
if ($tmp1487) goto block17; else goto block16;
block17:;
frost$core$Bit $tmp1488 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1489 = $tmp1488.value;
if ($tmp1489) goto block15; else goto block16;
block15:;
// line 655
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block16:;
// line 657
frost$core$Bit $tmp1490 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1491 = $tmp1490.value;
if ($tmp1491) goto block20; else goto block19;
block20:;
org$frostlang$frostc$Type$Kind* $tmp1492 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1493 = *$tmp1492;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1494;
$tmp1494 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1494->value = $tmp1493;
frost$core$Int64 $tmp1495 = (frost$core$Int64) {5};
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
bool $tmp1502 = $tmp1501.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1497)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1494)));
if ($tmp1502) goto block18; else goto block19;
block18:;
// line 658
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block19:;
// line 660
frost$core$Bit $tmp1503 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param0);
bool $tmp1504 = $tmp1503.value;
if ($tmp1504) goto block21; else goto block22;
block21:;
// line 661
org$frostlang$frostc$Type$Kind* $tmp1505 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1506 = *$tmp1505;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1507;
$tmp1507 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1507->value = $tmp1506;
frost$core$Int64 $tmp1508 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1509 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1508);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1510;
$tmp1510 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1510->value = $tmp1509;
ITable* $tmp1511 = ((frost$core$Equatable*) $tmp1507)->$class->itable;
while ($tmp1511->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1511 = $tmp1511->next;
}
$fn1513 $tmp1512 = $tmp1511->methods[0];
frost$core$Bit $tmp1514 = $tmp1512(((frost$core$Equatable*) $tmp1507), ((frost$core$Equatable*) $tmp1510));
bool $tmp1515 = $tmp1514.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1510)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1507)));
if ($tmp1515) goto block23; else goto block25;
block25:;
org$frostlang$frostc$Type$Kind* $tmp1516 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1517 = *$tmp1516;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1518;
$tmp1518 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1518->value = $tmp1517;
frost$core$Int64 $tmp1519 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1520 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1519);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1521;
$tmp1521 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1521->value = $tmp1520;
ITable* $tmp1522 = ((frost$core$Equatable*) $tmp1518)->$class->itable;
while ($tmp1522->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1522 = $tmp1522->next;
}
$fn1524 $tmp1523 = $tmp1522->methods[0];
frost$core$Bit $tmp1525 = $tmp1523(((frost$core$Equatable*) $tmp1518), ((frost$core$Equatable*) $tmp1521));
bool $tmp1526 = $tmp1525.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1521)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1518)));
if ($tmp1526) goto block23; else goto block24;
block23:;
// line 662
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block24:;
// line 664
frost$core$Bit $tmp1527 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1528 = $tmp1527.value;
if ($tmp1528) goto block26; else goto block27;
block26:;
// line 665
frost$core$String** $tmp1529 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1530 = *$tmp1529;
frost$core$Bit $tmp1531 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1530, &$s1532);
bool $tmp1533 = $tmp1531.value;
if ($tmp1533) goto block28; else goto block29;
block28:;
// line 666
org$frostlang$frostc$Type* $tmp1534 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
return $tmp1534;
block29:;
// line 668
org$frostlang$frostc$Type* $tmp1535 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
return $tmp1535;
block27:;
goto block22;
block22:;
// line 671
frost$core$Bit $tmp1536 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param2);
bool $tmp1537 = $tmp1536.value;
if ($tmp1537) goto block30; else goto block31;
block30:;
// line 672
org$frostlang$frostc$Type$Kind* $tmp1538 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1539 = *$tmp1538;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1540;
$tmp1540 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1540->value = $tmp1539;
frost$core$Int64 $tmp1541 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1542 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1541);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1543;
$tmp1543 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1543->value = $tmp1542;
ITable* $tmp1544 = ((frost$core$Equatable*) $tmp1540)->$class->itable;
while ($tmp1544->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1544 = $tmp1544->next;
}
$fn1546 $tmp1545 = $tmp1544->methods[0];
frost$core$Bit $tmp1547 = $tmp1545(((frost$core$Equatable*) $tmp1540), ((frost$core$Equatable*) $tmp1543));
bool $tmp1548 = $tmp1547.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1543)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1540)));
if ($tmp1548) goto block32; else goto block34;
block34:;
org$frostlang$frostc$Type$Kind* $tmp1549 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1550 = *$tmp1549;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1551;
$tmp1551 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1551->value = $tmp1550;
frost$core$Int64 $tmp1552 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1553 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1552);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1554;
$tmp1554 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1554->value = $tmp1553;
ITable* $tmp1555 = ((frost$core$Equatable*) $tmp1551)->$class->itable;
while ($tmp1555->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1555 = $tmp1555->next;
}
$fn1557 $tmp1556 = $tmp1555->methods[0];
frost$core$Bit $tmp1558 = $tmp1556(((frost$core$Equatable*) $tmp1551), ((frost$core$Equatable*) $tmp1554));
bool $tmp1559 = $tmp1558.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1554)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1551)));
if ($tmp1559) goto block32; else goto block33;
block32:;
// line 673
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block33:;
// line 675
frost$core$Bit $tmp1560 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1561 = $tmp1560.value;
if ($tmp1561) goto block35; else goto block36;
block35:;
// line 676
frost$core$String** $tmp1562 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1563 = *$tmp1562;
frost$core$Bit $tmp1564 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1563, &$s1565);
bool $tmp1566 = $tmp1564.value;
if ($tmp1566) goto block37; else goto block38;
block37:;
// line 677
org$frostlang$frostc$Type* $tmp1567 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
return $tmp1567;
block38:;
// line 679
org$frostlang$frostc$Type* $tmp1568 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
return $tmp1568;
block36:;
goto block31;
block31:;
// line 682
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1571)));
if ($tmp1579) goto block39; else goto block40;
block39:;
// line 683
org$frostlang$frostc$FixedArray** $tmp1580 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1581 = *$tmp1580;
frost$core$Int64 $tmp1582 = (frost$core$Int64) {0};
frost$core$Object* $tmp1583 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1581, $tmp1582);
org$frostlang$frostc$Type* $tmp1584 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1583), param1, param2);
org$frostlang$frostc$Type* $tmp1585 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1584);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
frost$core$Frost$unref$frost$core$Object$Q($tmp1583);
return $tmp1585;
block40:;
// line 685
org$frostlang$frostc$Type$Kind* $tmp1586 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1587 = *$tmp1586;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1588;
$tmp1588 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1588->value = $tmp1587;
frost$core$Int64 $tmp1589 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1590 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1589);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1591;
$tmp1591 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1591->value = $tmp1590;
ITable* $tmp1592 = ((frost$core$Equatable*) $tmp1588)->$class->itable;
while ($tmp1592->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1592 = $tmp1592->next;
}
$fn1594 $tmp1593 = $tmp1592->methods[0];
frost$core$Bit $tmp1595 = $tmp1593(((frost$core$Equatable*) $tmp1588), ((frost$core$Equatable*) $tmp1591));
bool $tmp1596 = $tmp1595.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1591)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1588)));
if ($tmp1596) goto block41; else goto block42;
block41:;
// line 686
org$frostlang$frostc$FixedArray** $tmp1597 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1598 = *$tmp1597;
frost$core$Int64 $tmp1599 = (frost$core$Int64) {0};
frost$core$Object* $tmp1600 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1598, $tmp1599);
org$frostlang$frostc$Type* $tmp1601 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, param1, ((org$frostlang$frostc$Type*) $tmp1600));
org$frostlang$frostc$Type* $tmp1602 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1601);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$Frost$unref$frost$core$Object$Q($tmp1600);
return $tmp1602;
block42:;
// line 688
org$frostlang$frostc$Type* $tmp1603 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param0);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
org$frostlang$frostc$Type* $tmp1604 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
*(&local0) = $tmp1603;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
// line 689
org$frostlang$frostc$Type* $tmp1605 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param2);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
org$frostlang$frostc$Type* $tmp1606 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
*(&local1) = $tmp1605;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
// line 690
org$frostlang$frostc$Type* $tmp1607 = *(&local0);
frost$core$Bit $tmp1608 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1607);
bool $tmp1609 = $tmp1608.value;
if ($tmp1609) goto block45; else goto block44;
block45:;
org$frostlang$frostc$Type* $tmp1610 = *(&local1);
frost$core$Bit $tmp1611 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1610);
bool $tmp1612 = $tmp1611.value;
if ($tmp1612) goto block43; else goto block44;
block43:;
// line 691
frost$collections$HashSet* $tmp1613 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp1613);
*(&local2) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
frost$collections$HashSet* $tmp1614 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
*(&local2) = $tmp1613;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
// line 692
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1615 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1615));
*(&local3) = param0;
// line 693
org$frostlang$frostc$Type* $tmp1616 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp1617 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1616);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
org$frostlang$frostc$ClassDecl* $tmp1618 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
*(&local4) = $tmp1617;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
// line 694
goto block46;
block46:;
org$frostlang$frostc$ClassDecl* $tmp1619 = *(&local4);
frost$core$Bit $tmp1620 = frost$core$Bit$init$builtin_bit($tmp1619 != NULL);
bool $tmp1621 = $tmp1620.value;
if ($tmp1621) goto block47; else goto block48;
block47:;
// line 695
frost$collections$HashSet* $tmp1622 = *(&local2);
org$frostlang$frostc$Type* $tmp1623 = *(&local3);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp1622, ((frost$collections$Key*) $tmp1623));
// line 696
org$frostlang$frostc$ClassDecl* $tmp1624 = *(&local4);
org$frostlang$frostc$Type** $tmp1625 = &$tmp1624->rawSuper;
org$frostlang$frostc$Type* $tmp1626 = *$tmp1625;
frost$core$Bit $tmp1627 = frost$core$Bit$init$builtin_bit($tmp1626 != NULL);
bool $tmp1628 = $tmp1627.value;
if ($tmp1628) goto block49; else goto block51;
block49:;
// line 697
org$frostlang$frostc$Type* $tmp1629 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1630 = *(&local4);
org$frostlang$frostc$Type** $tmp1631 = &$tmp1630->rawSuper;
org$frostlang$frostc$Type* $tmp1632 = *$tmp1631;
org$frostlang$frostc$Type* $tmp1633 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1629, $tmp1632);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
org$frostlang$frostc$Type* $tmp1634 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
*(&local3) = $tmp1633;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
// line 698
org$frostlang$frostc$Type* $tmp1635 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1636 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1635);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
org$frostlang$frostc$ClassDecl* $tmp1637 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
*(&local4) = $tmp1636;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
goto block50;
block51:;
// line 1
// line 701
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1638 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block50;
block50:;
goto block46;
block48:;
// line 704
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp1639 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
*(&local3) = param2;
// line 705
org$frostlang$frostc$Type* $tmp1640 = *(&local1);
org$frostlang$frostc$ClassDecl* $tmp1641 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1640);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
org$frostlang$frostc$ClassDecl* $tmp1642 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
*(&local4) = $tmp1641;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
// line 706
goto block52;
block52:;
org$frostlang$frostc$ClassDecl* $tmp1643 = *(&local4);
frost$core$Bit $tmp1644 = frost$core$Bit$init$builtin_bit($tmp1643 != NULL);
bool $tmp1645 = $tmp1644.value;
if ($tmp1645) goto block53; else goto block54;
block53:;
// line 707
frost$collections$HashSet* $tmp1646 = *(&local2);
org$frostlang$frostc$Type* $tmp1647 = *(&local3);
frost$core$Bit $tmp1648 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp1646, ((frost$collections$Key*) $tmp1647));
bool $tmp1649 = $tmp1648.value;
if ($tmp1649) goto block55; else goto block56;
block55:;
// line 708
org$frostlang$frostc$Type* $tmp1650 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
org$frostlang$frostc$ClassDecl* $tmp1651 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1652 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1653 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
*(&local2) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$Type* $tmp1654 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1655 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1650;
block56:;
// line 710
org$frostlang$frostc$ClassDecl* $tmp1656 = *(&local4);
org$frostlang$frostc$Type** $tmp1657 = &$tmp1656->rawSuper;
org$frostlang$frostc$Type* $tmp1658 = *$tmp1657;
frost$core$Bit $tmp1659 = frost$core$Bit$init$builtin_bit($tmp1658 != NULL);
bool $tmp1660 = $tmp1659.value;
if ($tmp1660) goto block57; else goto block59;
block57:;
// line 711
org$frostlang$frostc$Type* $tmp1661 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1662 = *(&local4);
org$frostlang$frostc$Type** $tmp1663 = &$tmp1662->rawSuper;
org$frostlang$frostc$Type* $tmp1664 = *$tmp1663;
org$frostlang$frostc$Type* $tmp1665 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1661, $tmp1664);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
org$frostlang$frostc$Type* $tmp1666 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
*(&local3) = $tmp1665;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
// line 712
org$frostlang$frostc$Type* $tmp1667 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1668 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1667);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
org$frostlang$frostc$ClassDecl* $tmp1669 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
*(&local4) = $tmp1668;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
goto block58;
block59:;
// line 1
// line 715
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1670 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block58;
block58:;
goto block52;
block54:;
org$frostlang$frostc$ClassDecl* $tmp1671 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1672 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1673 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
*(&local2) = ((frost$collections$HashSet*) NULL);
goto block44;
block44:;
// line 719
org$frostlang$frostc$Type* $tmp1674 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
org$frostlang$frostc$Type* $tmp1675 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1676 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1674;

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
org$frostlang$frostc$Type$Kind* $tmp1677 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1678 = *$tmp1677;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1679;
$tmp1679 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1679->value = $tmp1678;
frost$core$Int64 $tmp1680 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1681 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1680);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1682;
$tmp1682 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1682->value = $tmp1681;
ITable* $tmp1683 = ((frost$core$Equatable*) $tmp1679)->$class->itable;
while ($tmp1683->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1683 = $tmp1683->next;
}
$fn1685 $tmp1684 = $tmp1683->methods[1];
frost$core$Bit $tmp1686 = $tmp1684(((frost$core$Equatable*) $tmp1679), ((frost$core$Equatable*) $tmp1682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1682)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1679)));
bool $tmp1687 = $tmp1686.value;
if ($tmp1687) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1688 = (frost$core$Int64) {732};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1689, $tmp1688, &$s1690);
abort(); // unreachable
block1:;
// line 733
ITable* $tmp1691 = ((frost$collections$MapView*) param1)->$class->itable;
while ($tmp1691->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1691 = $tmp1691->next;
}
$fn1693 $tmp1692 = $tmp1691->methods[0];
frost$core$Int64 $tmp1694 = $tmp1692(((frost$collections$MapView*) param1));
frost$core$Int64 $tmp1695 = (frost$core$Int64) {0};
frost$core$Bit $tmp1696 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1694, $tmp1695);
bool $tmp1697 = $tmp1696.value;
if ($tmp1697) goto block6; else goto block7;
block6:;
// line 734
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local0) = param0;
goto block3;
block7:;
// line 736
org$frostlang$frostc$Type$Kind* $tmp1698 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1699 = *$tmp1698;
frost$core$Int64 $tmp1700 = $tmp1699.$rawValue;
frost$core$Int64 $tmp1701 = (frost$core$Int64) {11};
frost$core$Bit $tmp1702 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1700, $tmp1701);
bool $tmp1703 = $tmp1702.value;
if ($tmp1703) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1704 = (frost$core$Int64) {12};
frost$core$Bit $tmp1705 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1700, $tmp1704);
bool $tmp1706 = $tmp1705.value;
if ($tmp1706) goto block9; else goto block11;
block9:;
// line 738
frost$core$String** $tmp1707 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1708 = *$tmp1707;
frost$core$Object* $tmp1709 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param1, ((frost$collections$Key*) $tmp1708));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1709)));
org$frostlang$frostc$Type* $tmp1710 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp1709);
frost$core$Frost$unref$frost$core$Object$Q($tmp1709);
// line 739
org$frostlang$frostc$Type* $tmp1711 = *(&local1);
frost$core$Bit $tmp1712 = frost$core$Bit$init$builtin_bit($tmp1711 != NULL);
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block12; else goto block13;
block12:;
// line 740
org$frostlang$frostc$Type* $tmp1714 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
org$frostlang$frostc$Type* $tmp1715 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp1714;
goto block3;
block13:;
// line 742
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1716 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = param0;
goto block3;
block11:;
frost$core$Int64 $tmp1717 = (frost$core$Int64) {10};
frost$core$Bit $tmp1718 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1700, $tmp1717);
bool $tmp1719 = $tmp1718.value;
if ($tmp1719) goto block14; else goto block15;
block14:;
// line 745
org$frostlang$frostc$FixedArray** $tmp1720 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1721 = *$tmp1720;
frost$core$Int64 $tmp1722 = (frost$core$Int64) {0};
frost$core$Object* $tmp1723 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1721, $tmp1722);
org$frostlang$frostc$Type* $tmp1724 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1723), param1);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
org$frostlang$frostc$Type* $tmp1725 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
*(&local2) = $tmp1724;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
frost$core$Frost$unref$frost$core$Object$Q($tmp1723);
// line 746
frost$collections$Array* $tmp1726 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1726);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
frost$collections$Array* $tmp1727 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
*(&local3) = $tmp1726;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
// line 747
frost$core$Int64 $tmp1728 = (frost$core$Int64) {1};
org$frostlang$frostc$FixedArray** $tmp1729 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1730 = *$tmp1729;
ITable* $tmp1731 = ((frost$collections$CollectionView*) $tmp1730)->$class->itable;
while ($tmp1731->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1731 = $tmp1731->next;
}
$fn1733 $tmp1732 = $tmp1731->methods[0];
frost$core$Int64 $tmp1734 = $tmp1732(((frost$collections$CollectionView*) $tmp1730));
frost$core$Bit $tmp1735 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1736 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1728, $tmp1734, $tmp1735);
frost$core$Int64 $tmp1737 = $tmp1736.min;
*(&local4) = $tmp1737;
frost$core$Int64 $tmp1738 = $tmp1736.max;
frost$core$Bit $tmp1739 = $tmp1736.inclusive;
bool $tmp1740 = $tmp1739.value;
frost$core$Int64 $tmp1741 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1742 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1741);
if ($tmp1740) goto block19; else goto block20;
block19:;
int64_t $tmp1743 = $tmp1737.value;
int64_t $tmp1744 = $tmp1738.value;
bool $tmp1745 = $tmp1743 <= $tmp1744;
frost$core$Bit $tmp1746 = (frost$core$Bit) {$tmp1745};
bool $tmp1747 = $tmp1746.value;
if ($tmp1747) goto block16; else goto block17;
block20:;
int64_t $tmp1748 = $tmp1737.value;
int64_t $tmp1749 = $tmp1738.value;
bool $tmp1750 = $tmp1748 < $tmp1749;
frost$core$Bit $tmp1751 = (frost$core$Bit) {$tmp1750};
bool $tmp1752 = $tmp1751.value;
if ($tmp1752) goto block16; else goto block17;
block16:;
// line 748
frost$collections$Array* $tmp1753 = *(&local3);
org$frostlang$frostc$FixedArray** $tmp1754 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1755 = *$tmp1754;
frost$core$Int64 $tmp1756 = *(&local4);
frost$core$Object* $tmp1757 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1755, $tmp1756);
org$frostlang$frostc$Type* $tmp1758 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1757), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1753, ((frost$core$Object*) $tmp1758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
frost$core$Frost$unref$frost$core$Object$Q($tmp1757);
goto block18;
block18:;
frost$core$Int64 $tmp1759 = *(&local4);
int64_t $tmp1760 = $tmp1738.value;
int64_t $tmp1761 = $tmp1759.value;
int64_t $tmp1762 = $tmp1760 - $tmp1761;
frost$core$Int64 $tmp1763 = (frost$core$Int64) {$tmp1762};
frost$core$UInt64 $tmp1764 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1763);
if ($tmp1740) goto block22; else goto block23;
block22:;
uint64_t $tmp1765 = $tmp1764.value;
uint64_t $tmp1766 = $tmp1742.value;
bool $tmp1767 = $tmp1765 >= $tmp1766;
frost$core$Bit $tmp1768 = (frost$core$Bit) {$tmp1767};
bool $tmp1769 = $tmp1768.value;
if ($tmp1769) goto block21; else goto block17;
block23:;
uint64_t $tmp1770 = $tmp1764.value;
uint64_t $tmp1771 = $tmp1742.value;
bool $tmp1772 = $tmp1770 > $tmp1771;
frost$core$Bit $tmp1773 = (frost$core$Bit) {$tmp1772};
bool $tmp1774 = $tmp1773.value;
if ($tmp1774) goto block21; else goto block17;
block21:;
int64_t $tmp1775 = $tmp1759.value;
int64_t $tmp1776 = $tmp1741.value;
int64_t $tmp1777 = $tmp1775 + $tmp1776;
frost$core$Int64 $tmp1778 = (frost$core$Int64) {$tmp1777};
*(&local4) = $tmp1778;
goto block16;
block17:;
// line 750
org$frostlang$frostc$Type* $tmp1779 = *(&local2);
frost$collections$Array* $tmp1780 = *(&local3);
org$frostlang$frostc$Type* $tmp1781 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1779, ((frost$collections$ListView*) $tmp1780));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1781));
frost$collections$Array* $tmp1782 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1783 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp1781;
goto block3;
block15:;
frost$core$Int64 $tmp1784 = (frost$core$Int64) {1};
frost$core$Bit $tmp1785 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1700, $tmp1784);
bool $tmp1786 = $tmp1785.value;
if ($tmp1786) goto block24; else goto block25;
block24:;
// line 753
org$frostlang$frostc$FixedArray** $tmp1787 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1788 = *$tmp1787;
frost$core$Int64 $tmp1789 = (frost$core$Int64) {0};
frost$core$Object* $tmp1790 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1788, $tmp1789);
org$frostlang$frostc$Type* $tmp1791 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1790), param1);
org$frostlang$frostc$Type* $tmp1792 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1791);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
frost$core$Frost$unref$frost$core$Object$Q($tmp1790);
*(&local0) = $tmp1792;
goto block3;
block25:;
frost$core$Int64 $tmp1793 = (frost$core$Int64) {15};
frost$core$Bit $tmp1794 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1700, $tmp1793);
bool $tmp1795 = $tmp1794.value;
if ($tmp1795) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp1796 = (frost$core$Int64) {14};
frost$core$Bit $tmp1797 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1700, $tmp1796);
bool $tmp1798 = $tmp1797.value;
if ($tmp1798) goto block26; else goto block28;
block28:;
frost$core$Int64 $tmp1799 = (frost$core$Int64) {17};
frost$core$Bit $tmp1800 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1700, $tmp1799);
bool $tmp1801 = $tmp1800.value;
if ($tmp1801) goto block26; else goto block29;
block29:;
frost$core$Int64 $tmp1802 = (frost$core$Int64) {16};
frost$core$Bit $tmp1803 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1700, $tmp1802);
bool $tmp1804 = $tmp1803.value;
if ($tmp1804) goto block26; else goto block30;
block26:;
// line 756
frost$collections$Array* $tmp1805 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1805);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
frost$collections$Array* $tmp1806 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
*(&local5) = $tmp1805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
// line 757
org$frostlang$frostc$FixedArray** $tmp1807 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1808 = *$tmp1807;
ITable* $tmp1809 = ((frost$collections$CollectionView*) $tmp1808)->$class->itable;
while ($tmp1809->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1809 = $tmp1809->next;
}
$fn1811 $tmp1810 = $tmp1809->methods[0];
frost$core$Int64 $tmp1812 = $tmp1810(((frost$collections$CollectionView*) $tmp1808));
frost$core$Int64 $tmp1813 = (frost$core$Int64) {1};
int64_t $tmp1814 = $tmp1812.value;
int64_t $tmp1815 = $tmp1813.value;
bool $tmp1816 = $tmp1814 >= $tmp1815;
frost$core$Bit $tmp1817 = (frost$core$Bit) {$tmp1816};
bool $tmp1818 = $tmp1817.value;
if ($tmp1818) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp1819 = (frost$core$Int64) {757};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1820, $tmp1819);
abort(); // unreachable
block31:;
// line 758
frost$core$Int64 $tmp1821 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1822 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1823 = *$tmp1822;
ITable* $tmp1824 = ((frost$collections$CollectionView*) $tmp1823)->$class->itable;
while ($tmp1824->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1824 = $tmp1824->next;
}
$fn1826 $tmp1825 = $tmp1824->methods[0];
frost$core$Int64 $tmp1827 = $tmp1825(((frost$collections$CollectionView*) $tmp1823));
frost$core$Int64 $tmp1828 = (frost$core$Int64) {1};
int64_t $tmp1829 = $tmp1827.value;
int64_t $tmp1830 = $tmp1828.value;
int64_t $tmp1831 = $tmp1829 - $tmp1830;
frost$core$Int64 $tmp1832 = (frost$core$Int64) {$tmp1831};
frost$core$Bit $tmp1833 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1834 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1821, $tmp1832, $tmp1833);
frost$core$Int64 $tmp1835 = $tmp1834.min;
*(&local6) = $tmp1835;
frost$core$Int64 $tmp1836 = $tmp1834.max;
frost$core$Bit $tmp1837 = $tmp1834.inclusive;
bool $tmp1838 = $tmp1837.value;
frost$core$Int64 $tmp1839 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1840 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1839);
if ($tmp1838) goto block36; else goto block37;
block36:;
int64_t $tmp1841 = $tmp1835.value;
int64_t $tmp1842 = $tmp1836.value;
bool $tmp1843 = $tmp1841 <= $tmp1842;
frost$core$Bit $tmp1844 = (frost$core$Bit) {$tmp1843};
bool $tmp1845 = $tmp1844.value;
if ($tmp1845) goto block33; else goto block34;
block37:;
int64_t $tmp1846 = $tmp1835.value;
int64_t $tmp1847 = $tmp1836.value;
bool $tmp1848 = $tmp1846 < $tmp1847;
frost$core$Bit $tmp1849 = (frost$core$Bit) {$tmp1848};
bool $tmp1850 = $tmp1849.value;
if ($tmp1850) goto block33; else goto block34;
block33:;
// line 759
frost$collections$Array* $tmp1851 = *(&local5);
org$frostlang$frostc$FixedArray** $tmp1852 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1853 = *$tmp1852;
frost$core$Int64 $tmp1854 = *(&local6);
frost$core$Object* $tmp1855 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1853, $tmp1854);
org$frostlang$frostc$Type* $tmp1856 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1855), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1851, ((frost$core$Object*) $tmp1856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
frost$core$Frost$unref$frost$core$Object$Q($tmp1855);
goto block35;
block35:;
frost$core$Int64 $tmp1857 = *(&local6);
int64_t $tmp1858 = $tmp1836.value;
int64_t $tmp1859 = $tmp1857.value;
int64_t $tmp1860 = $tmp1858 - $tmp1859;
frost$core$Int64 $tmp1861 = (frost$core$Int64) {$tmp1860};
frost$core$UInt64 $tmp1862 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1861);
if ($tmp1838) goto block39; else goto block40;
block39:;
uint64_t $tmp1863 = $tmp1862.value;
uint64_t $tmp1864 = $tmp1840.value;
bool $tmp1865 = $tmp1863 >= $tmp1864;
frost$core$Bit $tmp1866 = (frost$core$Bit) {$tmp1865};
bool $tmp1867 = $tmp1866.value;
if ($tmp1867) goto block38; else goto block34;
block40:;
uint64_t $tmp1868 = $tmp1862.value;
uint64_t $tmp1869 = $tmp1840.value;
bool $tmp1870 = $tmp1868 > $tmp1869;
frost$core$Bit $tmp1871 = (frost$core$Bit) {$tmp1870};
bool $tmp1872 = $tmp1871.value;
if ($tmp1872) goto block38; else goto block34;
block38:;
int64_t $tmp1873 = $tmp1857.value;
int64_t $tmp1874 = $tmp1839.value;
int64_t $tmp1875 = $tmp1873 + $tmp1874;
frost$core$Int64 $tmp1876 = (frost$core$Int64) {$tmp1875};
*(&local6) = $tmp1876;
goto block33;
block34:;
// line 761
org$frostlang$frostc$Position* $tmp1877 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp1878 = *$tmp1877;
org$frostlang$frostc$Type$Kind* $tmp1879 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1880 = *$tmp1879;
frost$collections$Array* $tmp1881 = *(&local5);
org$frostlang$frostc$FixedArray** $tmp1882 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1883 = *$tmp1882;
org$frostlang$frostc$FixedArray** $tmp1884 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1885 = *$tmp1884;
ITable* $tmp1886 = ((frost$collections$CollectionView*) $tmp1885)->$class->itable;
while ($tmp1886->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1886 = $tmp1886->next;
}
$fn1888 $tmp1887 = $tmp1886->methods[0];
frost$core$Int64 $tmp1889 = $tmp1887(((frost$collections$CollectionView*) $tmp1885));
frost$core$Int64 $tmp1890 = (frost$core$Int64) {1};
int64_t $tmp1891 = $tmp1889.value;
int64_t $tmp1892 = $tmp1890.value;
int64_t $tmp1893 = $tmp1891 - $tmp1892;
frost$core$Int64 $tmp1894 = (frost$core$Int64) {$tmp1893};
frost$core$Object* $tmp1895 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1883, $tmp1894);
org$frostlang$frostc$Type* $tmp1896 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1895), param1);
frost$core$Int64* $tmp1897 = &param0->priority;
frost$core$Int64 $tmp1898 = *$tmp1897;
org$frostlang$frostc$Type* $tmp1899 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1878, $tmp1880, ((frost$collections$ListView*) $tmp1881), $tmp1896, $tmp1898);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
frost$core$Frost$unref$frost$core$Object$Q($tmp1895);
frost$collections$Array* $tmp1900 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
*(&local5) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp1899;
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
org$frostlang$frostc$Type* $tmp1901 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp1902 = &$tmp1901->typeKind;
org$frostlang$frostc$Type$Kind $tmp1903 = *$tmp1902;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1904;
$tmp1904 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1904->value = $tmp1903;
frost$core$Int64 $tmp1905 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1906 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1905);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1907;
$tmp1907 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1907->value = $tmp1906;
ITable* $tmp1908 = ((frost$core$Equatable*) $tmp1904)->$class->itable;
while ($tmp1908->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1908 = $tmp1908->next;
}
$fn1910 $tmp1909 = $tmp1908->methods[1];
frost$core$Bit $tmp1911 = $tmp1909(((frost$core$Equatable*) $tmp1904), ((frost$core$Equatable*) $tmp1907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1907)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1904)));
bool $tmp1912 = $tmp1911.value;
if ($tmp1912) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp1913 = *(&local0);
return $tmp1913;
block5:;
frost$core$Int64 $tmp1914 = (frost$core$Int64) {732};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1915, $tmp1914, &$s1916);
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frostc$Type$get_hash$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

// line 772
frost$core$String** $tmp1917 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1918 = *$tmp1917;
ITable* $tmp1919 = ((frost$collections$Key*) $tmp1918)->$class->itable;
while ($tmp1919->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp1919 = $tmp1919->next;
}
$fn1921 $tmp1920 = $tmp1919->methods[0];
frost$core$Int64 $tmp1922 = $tmp1920(((frost$collections$Key*) $tmp1918));
return $tmp1922;

}
frost$core$String* org$frostlang$frostc$Type$get_asString$R$frost$core$String(org$frostlang$frostc$Type* param0) {

// line 777
frost$core$String** $tmp1923 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1924 = *$tmp1923;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
return $tmp1924;

}
void org$frostlang$frostc$Type$cleanup(org$frostlang$frostc$Type* param0) {

// line 4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$FixedArray** $tmp1925 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1926 = *$tmp1925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
frost$core$Weak** $tmp1927 = &param0->genericClassParameter;
frost$core$Weak* $tmp1928 = *$tmp1927;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
frost$core$Weak** $tmp1929 = &param0->genericMethodParameter;
frost$core$Weak* $tmp1930 = *$tmp1929;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
org$frostlang$frostc$MethodRef** $tmp1931 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp1932 = *$tmp1931;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
return;

}

