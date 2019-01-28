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
org$frostlang$frostc$Type$class_type org$frostlang$frostc$Type$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, (ITable*) &org$frostlang$frostc$Type$_frost$core$Equatable, { org$frostlang$frostc$Type$get_asString$R$frost$core$String, org$frostlang$frostc$Type$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit, org$frostlang$frostc$Type$get_size$R$frost$core$Int64, org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit, org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT, org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim, org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit, org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit, org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit, org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit, org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit, org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit, org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64, org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_hash$R$frost$core$Int64} };

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
typedef frost$collections$Iterator* (*$fn378)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn382)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn387)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn436)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn440)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn445)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn493)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn518)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn529)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn541)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn579)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1017)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1029)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1040)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1051)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1063)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1075)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1090)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1146)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1192)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1202)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1228)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1242)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1253)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1264)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1275)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1284)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1299)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1310)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1321)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1332)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1344)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1369)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1380)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1391)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1402)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1412)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1433)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1448)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1466)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1481)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1494)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1505)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1527)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1538)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1558)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1574)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1667)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1675)(frost$collections$MapView*);
typedef frost$core$Int64 (*$fn1713)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1788)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1802)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1861)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1883)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1894)(frost$collections$Key*);

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
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s562 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s599 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, 1146821029976304283, NULL };
static frost$core$String $s610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 5148459585349422950, NULL };
static frost$core$String $s617 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s623 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 1492063599391574064, NULL };
static frost$core$String $s629 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -3824106974697578343, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 16, -3824106976449029430, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5545501573009681362, NULL };
static frost$core$String $s652 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static frost$core$String $s672 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static frost$core$String $s692 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static frost$core$String $s703 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s721 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s727 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s745 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, 1146821061809580773, NULL };
static frost$core$String $s757 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, 1146821061809581078, NULL };
static frost$core$String $s763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3824106976667626414, NULL };
static frost$core$String $s769 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, 1146820904470315469, NULL };
static frost$core$String $s775 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, 1146820904470315667, NULL };
static frost$core$String $s781 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s795 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static frost$core$String $s797 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s817 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static frost$core$String $s830 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s836 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s842 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 4906885815162678826, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s854 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, 1146821009278619293, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -7013691227705711665, NULL };
static frost$core$String $s869 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s878 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s895 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s919 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 3644790808526678741, NULL };
static frost$core$String $s931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -3824106975113800959, NULL };
static frost$core$String $s963 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s976 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static frost$core$String $s991 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static frost$core$String $s995 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1000 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -3508042023517899272, NULL };
static frost$core$String $s1006 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1081 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1096 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, -3508042023536129774, NULL };
static frost$core$String $s1175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, 1146821061406687137, NULL };
static frost$core$String $s1183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -4916982935192335398, NULL };
static frost$core$String $s1213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 97, -2976789655376824909, NULL };
static frost$core$String $s1357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 119, 5693748891149284325, NULL };
static frost$core$String $s1406 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1513 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1672 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 168, 1028753922056655266, NULL };
static frost$core$String $s1797 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1888 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1889 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 169, -7857031125004373715, NULL };

void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3) {

// line 82
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(param0, param1, param2, param3, $tmp2);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$core$Bit param4) {

// line 42
frost$core$Weak* $tmp3 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp3, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$Weak** $tmp4 = &param0->genericClassParameter;
frost$core$Weak* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$Weak** $tmp6 = &param0->genericClassParameter;
*$tmp6 = $tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
// line 45
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp14)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp11)));
if ($tmp19) goto block7; else goto block2;
block7:;
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
bool $tmp28 = $tmp27.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp23)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp20)));
if ($tmp28) goto block6; else goto block2;
block6:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp29;
$tmp29 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp29->value = param2;
frost$core$Int64 $tmp30 = (frost$core$Int64) {15};
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
frost$core$Int64 $tmp39 = (frost$core$Int64) {14};
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
frost$core$Int64 $tmp48 = (frost$core$Int64) {17};
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
frost$core$Int64 $tmp57 = (frost$core$Int64) {16};
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
frost$core$Int64 $tmp65 = (frost$core$Int64) {88};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s66, $tmp65, &$s67);
abort(); // unreachable
block1:;
// line 89
org$frostlang$frostc$Type$Kind* $tmp68 = &param0->typeKind;
*$tmp68 = param2;
// line 90
org$frostlang$frostc$Position* $tmp69 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp69 = param3;
// line 91
frost$core$Bit* $tmp70 = &param0->resolved;
*$tmp70 = param4;
// line 92
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp71 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp72 = *$tmp71;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlang$frostc$FixedArray** $tmp73 = &param0->_subtypes;
*$tmp73 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 93
frost$core$Int64 $tmp74 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp75 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp74);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp75, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, frost$core$Int64 param3) {

// line 42
frost$core$Weak* $tmp76 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp76, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Weak** $tmp77 = &param0->genericClassParameter;
frost$core$Weak* $tmp78 = *$tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$Weak** $tmp79 = &param0->genericClassParameter;
*$tmp79 = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// line 45
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
frost$core$Int64 $tmp85 = (frost$core$Int64) {11};
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
frost$core$Int64 $tmp94 = (frost$core$Int64) {12};
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
frost$core$Int64 $tmp103 = (frost$core$Int64) {15};
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
frost$core$Int64 $tmp112 = (frost$core$Int64) {14};
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
frost$core$Int64 $tmp121 = (frost$core$Int64) {17};
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
frost$core$Int64 $tmp130 = (frost$core$Int64) {16};
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
frost$core$Int64 $tmp138 = (frost$core$Int64) {99};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s139, $tmp138, &$s140);
abort(); // unreachable
block1:;
// line 100
frost$core$Bit $tmp141 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s142);
frost$core$Bit $tmp143 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp141);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp145 = (frost$core$Int64) {100};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s146, $tmp145);
abort(); // unreachable
block8:;
// line 101
org$frostlang$frostc$Type$Kind* $tmp147 = &param0->typeKind;
*$tmp147 = param2;
// line 102
org$frostlang$frostc$Position $tmp148 = org$frostlang$frostc$Position$init$frost$core$Int64$frost$core$Int64(param3, param3);
org$frostlang$frostc$Position* $tmp149 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp149 = $tmp148;
// line 103
frost$core$Bit $tmp150 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp151 = &param0->resolved;
*$tmp151 = $tmp150;
// line 104
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp152 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp153 = *$tmp152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
org$frostlang$frostc$FixedArray** $tmp154 = &param0->_subtypes;
*$tmp154 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 105
frost$core$Int64 $tmp155 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp156 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp155);
org$frostlang$frostc$Position* $tmp157 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp158 = *$tmp157;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp156, $tmp158, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5) {

// line 109
frost$core$Int64 $tmp159 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64(param0, param1, param2, param3, param4, param5, $tmp159);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5, frost$core$Int64 param6) {

// line 42
frost$core$Weak* $tmp160 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp160, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$core$Weak** $tmp161 = &param0->genericClassParameter;
frost$core$Weak* $tmp162 = *$tmp161;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Weak** $tmp163 = &param0->genericClassParameter;
*$tmp163 = $tmp160;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
// line 45
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
frost$core$Int64 $tmp169 = (frost$core$Int64) {11};
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
frost$core$Int64 $tmp178 = (frost$core$Int64) {12};
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
frost$core$Int64 $tmp186 = (frost$core$Int64) {113};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s187, $tmp186, &$s188);
abort(); // unreachable
block1:;
// line 115
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
frost$core$Int64 $tmp201 = (frost$core$Int64) {115};
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
$tmp214 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
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
// line 117
org$frostlang$frostc$Type$Kind$wrapper* $tmp219;
$tmp219 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp219->value = param2;
frost$core$Int64 $tmp220 = (frost$core$Int64) {10};
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
frost$core$Int64 $tmp231 = (frost$core$Int64) {117};
frost$core$String* $tmp232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s233, param1);
frost$core$String* $tmp234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp232, &$s235);
org$frostlang$frostc$Type$Kind$wrapper* $tmp236;
$tmp236 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp236->value = param2;
frost$core$Int64 $tmp237 = (frost$core$Int64) {10};
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
$tmp244 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
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
// line 119
org$frostlang$frostc$Type$Kind* $tmp249 = &param0->typeKind;
*$tmp249 = param2;
// line 120
org$frostlang$frostc$Position* $tmp250 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp250 = param3;
// line 121
frost$core$Bit* $tmp251 = &param0->resolved;
*$tmp251 = param5;
// line 122
frost$core$Int64* $tmp252 = &param0->priority;
*$tmp252 = param6;
// line 123
org$frostlang$frostc$FixedArray* $tmp253 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp253, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
org$frostlang$frostc$FixedArray** $tmp254 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp255 = *$tmp254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
org$frostlang$frostc$FixedArray** $tmp256 = &param0->_subtypes;
*$tmp256 = $tmp253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// line 124
frost$core$Int64 $tmp257 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp258 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp257);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp258, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter(org$frostlang$frostc$Type* param0, org$frostlang$frostc$ClassDecl$GenericParameter* param1) {

// line 42
frost$core$Weak* $tmp259 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp259, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Weak** $tmp260 = &param0->genericClassParameter;
frost$core$Weak* $tmp261 = *$tmp260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Weak** $tmp262 = &param0->genericClassParameter;
*$tmp262 = $tmp259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// line 45
frost$core$Weak* $tmp263 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp263, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Weak** $tmp264 = &param0->genericMethodParameter;
frost$core$Weak* $tmp265 = *$tmp264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$Weak** $tmp266 = &param0->genericMethodParameter;
*$tmp266 = $tmp263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// line 128
frost$core$Int64 $tmp267 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp268 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp267);
org$frostlang$frostc$Type$Kind* $tmp269 = &param0->typeKind;
*$tmp269 = $tmp268;
// line 129
frost$core$Weak* $tmp270 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp270, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Weak** $tmp271 = &param0->genericClassParameter;
frost$core$Weak* $tmp272 = *$tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Weak** $tmp273 = &param0->genericClassParameter;
*$tmp273 = $tmp270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// line 130
frost$core$Bit $tmp274 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp275 = &param0->resolved;
*$tmp275 = $tmp274;
// line 131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp276 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp277 = *$tmp276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
org$frostlang$frostc$FixedArray** $tmp278 = &param0->_subtypes;
*$tmp278 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 132
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

// line 42
frost$core$Weak* $tmp293 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp293, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Weak** $tmp294 = &param0->genericClassParameter;
frost$core$Weak* $tmp295 = *$tmp294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Weak** $tmp296 = &param0->genericClassParameter;
*$tmp296 = $tmp293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// line 45
frost$core$Weak* $tmp297 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp297, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Weak** $tmp298 = &param0->genericMethodParameter;
frost$core$Weak* $tmp299 = *$tmp298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Weak** $tmp300 = &param0->genericMethodParameter;
*$tmp300 = $tmp297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
// line 136
frost$core$Int64 $tmp301 = (frost$core$Int64) {12};
org$frostlang$frostc$Type$Kind $tmp302 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp301);
org$frostlang$frostc$Type$Kind* $tmp303 = &param0->typeKind;
*$tmp303 = $tmp302;
// line 137
frost$core$Weak* $tmp304 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp304, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Weak** $tmp305 = &param0->genericMethodParameter;
frost$core$Weak* $tmp306 = *$tmp305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Weak** $tmp307 = &param0->genericMethodParameter;
*$tmp307 = $tmp304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// line 138
frost$core$Bit $tmp308 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp309 = &param0->resolved;
*$tmp309 = $tmp308;
// line 139
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp310 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp311 = *$tmp310;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
org$frostlang$frostc$FixedArray** $tmp312 = &param0->_subtypes;
*$tmp312 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 140
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

// line 42
frost$core$Weak* $tmp327 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp327, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Weak** $tmp328 = &param0->genericClassParameter;
frost$core$Weak* $tmp329 = *$tmp328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Weak** $tmp330 = &param0->genericClassParameter;
*$tmp330 = $tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// line 45
frost$core$Weak* $tmp331 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp331, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Weak** $tmp332 = &param0->genericMethodParameter;
frost$core$Weak* $tmp333 = *$tmp332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Weak** $tmp334 = &param0->genericMethodParameter;
*$tmp334 = $tmp331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// line 144
org$frostlang$frostc$Type** $tmp335 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp336 = *$tmp335;
org$frostlang$frostc$Type$Kind* $tmp337 = &$tmp336->typeKind;
org$frostlang$frostc$Type$Kind $tmp338 = *$tmp337;
org$frostlang$frostc$Type$Kind* $tmp339 = &param0->typeKind;
*$tmp339 = $tmp338;
// line 145
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
// line 146
org$frostlang$frostc$Type** $tmp346 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp347 = *$tmp346;
frost$core$Bit* $tmp348 = &$tmp347->resolved;
frost$core$Bit $tmp349 = *$tmp348;
frost$core$Bit* $tmp350 = &param0->resolved;
*$tmp350 = $tmp349;
// line 147
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodRef** $tmp351 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp352 = *$tmp351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
org$frostlang$frostc$MethodRef** $tmp353 = &param0->methodRef;
*$tmp353 = param1;
// line 148
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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$collections$ListView* param1) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
frost$core$Bit local4;
frost$collections$Array* local5 = NULL;
// line 153
frost$core$Bit* $tmp364 = &param0->resolved;
frost$core$Bit $tmp365 = *$tmp364;
*(&local0) = $tmp365;
// line 154
frost$core$MutableString* $tmp366 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp366);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$MutableString* $tmp367 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local1) = $tmp366;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// line 155
frost$core$MutableString* $tmp368 = *(&local1);
frost$core$String** $tmp369 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp370 = *$tmp369;
frost$core$MutableString$append$frost$core$String($tmp368, $tmp370);
// line 156
frost$core$MutableString* $tmp371 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp371, &$s372);
// line 157
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s373));
frost$core$String* $tmp374 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local2) = &$s375;
// line 158
ITable* $tmp376 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp376->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp376 = $tmp376->next;
}
$fn378 $tmp377 = $tmp376->methods[0];
frost$collections$Iterator* $tmp379 = $tmp377(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp380 = $tmp379->$class->itable;
while ($tmp380->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp380 = $tmp380->next;
}
$fn382 $tmp381 = $tmp380->methods[0];
frost$core$Bit $tmp383 = $tmp381($tmp379);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block3; else goto block2;
block2:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp385 = $tmp379->$class->itable;
while ($tmp385->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp385 = $tmp385->next;
}
$fn387 $tmp386 = $tmp385->methods[1];
frost$core$Object* $tmp388 = $tmp386($tmp379);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp388)));
org$frostlang$frostc$Type* $tmp389 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp388);
// line 159
frost$core$Bit $tmp390 = *(&local0);
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp392 = *(&local3);
frost$core$Bit* $tmp393 = &$tmp392->resolved;
frost$core$Bit $tmp394 = *$tmp393;
*(&local4) = $tmp394;
goto block6;
block5:;
*(&local4) = $tmp390;
goto block6;
block6:;
frost$core$Bit $tmp395 = *(&local4);
*(&local0) = $tmp395;
// line 160
frost$core$MutableString* $tmp396 = *(&local1);
frost$core$String* $tmp397 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp396, $tmp397);
// line 161
frost$core$MutableString* $tmp398 = *(&local1);
org$frostlang$frostc$Type* $tmp399 = *(&local3);
frost$core$String** $tmp400 = &((org$frostlang$frostc$Symbol*) $tmp399)->name;
frost$core$String* $tmp401 = *$tmp400;
frost$core$MutableString$append$frost$core$String($tmp398, $tmp401);
// line 162
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s402));
frost$core$String* $tmp403 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local2) = &$s404;
frost$core$Frost$unref$frost$core$Object$Q($tmp388);
org$frostlang$frostc$Type* $tmp405 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// line 164
frost$core$MutableString* $tmp406 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp406, &$s407);
// line 165
frost$collections$Array* $tmp408 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp408);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$collections$Array* $tmp409 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local5) = $tmp408;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// line 166
frost$collections$Array* $tmp410 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp410, ((frost$core$Object*) param0));
// line 167
frost$collections$Array* $tmp411 = *(&local5);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp411, ((frost$collections$CollectionView*) param1));
// line 168
org$frostlang$frostc$Type* $tmp412 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp413 = *(&local1);
frost$core$String* $tmp414 = frost$core$MutableString$finish$R$frost$core$String($tmp413);
frost$core$Int64 $tmp415 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp416 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp415);
org$frostlang$frostc$Position* $tmp417 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp418 = *$tmp417;
frost$collections$Array* $tmp419 = *(&local5);
frost$core$Bit $tmp420 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp412, $tmp414, $tmp416, $tmp418, ((frost$collections$ListView*) $tmp419), $tmp420);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
frost$collections$Array* $tmp421 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp422 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp423 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp412;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Position param0, org$frostlang$frostc$Type$Kind param1, frost$collections$ListView* param2, org$frostlang$frostc$Type* param3, frost$core$Int64 param4) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Bit local5;
// line 174
frost$core$Bit* $tmp424 = &param3->resolved;
frost$core$Bit $tmp425 = *$tmp424;
*(&local0) = $tmp425;
// line 175
frost$core$MutableString* $tmp426 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp426, &$s427);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$MutableString* $tmp428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local1) = $tmp426;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
// line 176
frost$collections$Array* $tmp429 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp429);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$collections$Array* $tmp430 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local2) = $tmp429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
// line 177
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s431));
frost$core$String* $tmp432 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local3) = &$s433;
// line 178
ITable* $tmp434 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp434->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp434 = $tmp434->next;
}
$fn436 $tmp435 = $tmp434->methods[0];
frost$collections$Iterator* $tmp437 = $tmp435(((frost$collections$Iterable*) param2));
goto block1;
block1:;
ITable* $tmp438 = $tmp437->$class->itable;
while ($tmp438->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp438 = $tmp438->next;
}
$fn440 $tmp439 = $tmp438->methods[0];
frost$core$Bit $tmp441 = $tmp439($tmp437);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block3; else goto block2;
block2:;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp443 = $tmp437->$class->itable;
while ($tmp443->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp443 = $tmp443->next;
}
$fn445 $tmp444 = $tmp443->methods[1];
frost$core$Object* $tmp446 = $tmp444($tmp437);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp446)));
org$frostlang$frostc$Type* $tmp447 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp446);
// line 179
frost$collections$Array* $tmp448 = *(&local2);
org$frostlang$frostc$Type* $tmp449 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp448, ((frost$core$Object*) $tmp449));
// line 180
frost$core$Bit $tmp450 = *(&local0);
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp452 = *(&local4);
frost$core$Bit* $tmp453 = &$tmp452->resolved;
frost$core$Bit $tmp454 = *$tmp453;
*(&local5) = $tmp454;
goto block6;
block5:;
*(&local5) = $tmp450;
goto block6;
block6:;
frost$core$Bit $tmp455 = *(&local5);
*(&local0) = $tmp455;
// line 181
frost$core$MutableString* $tmp456 = *(&local1);
frost$core$String* $tmp457 = *(&local3);
frost$core$MutableString$append$frost$core$String($tmp456, $tmp457);
// line 182
frost$core$MutableString* $tmp458 = *(&local1);
org$frostlang$frostc$Type* $tmp459 = *(&local4);
frost$core$String** $tmp460 = &((org$frostlang$frostc$Symbol*) $tmp459)->name;
frost$core$String* $tmp461 = *$tmp460;
frost$core$MutableString$append$frost$core$String($tmp458, $tmp461);
// line 183
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s462));
frost$core$String* $tmp463 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local3) = &$s464;
frost$core$Frost$unref$frost$core$Object$Q($tmp446);
org$frostlang$frostc$Type* $tmp465 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
// line 185
frost$core$Int64 $tmp466 = param1.$rawValue;
frost$core$Int64 $tmp467 = (frost$core$Int64) {14};
frost$core$Bit $tmp468 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp466, $tmp467);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block8; else goto block9;
block8:;
// line 187
frost$core$MutableString* $tmp470 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp470, &$s471);
goto block7;
block9:;
frost$core$Int64 $tmp472 = (frost$core$Int64) {15};
frost$core$Bit $tmp473 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp466, $tmp472);
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block10; else goto block11;
block10:;
// line 190
frost$core$MutableString* $tmp475 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp475, &$s476);
goto block7;
block11:;
frost$core$Int64 $tmp477 = (frost$core$Int64) {16};
frost$core$Bit $tmp478 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp466, $tmp477);
bool $tmp479 = $tmp478.value;
if ($tmp479) goto block12; else goto block13;
block12:;
// line 193
frost$core$MutableString* $tmp480 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp480, &$s481);
goto block7;
block13:;
frost$core$Int64 $tmp482 = (frost$core$Int64) {17};
frost$core$Bit $tmp483 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp466, $tmp482);
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block14; else goto block15;
block14:;
// line 196
frost$core$MutableString* $tmp485 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp485, &$s486);
goto block7;
block15:;
// line 199
frost$core$Int64 $tmp487 = (frost$core$Int64) {199};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s488, $tmp487);
abort(); // unreachable
block7:;
// line 202
frost$collections$Array* $tmp489 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp489, ((frost$core$Object*) param3));
// line 203
org$frostlang$frostc$Type* $tmp490 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp491 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp491->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp491 = $tmp491->next;
}
$fn493 $tmp492 = $tmp491->methods[1];
frost$core$Bit $tmp494 = $tmp492(((frost$core$Equatable*) param3), ((frost$core$Equatable*) $tmp490));
bool $tmp495 = $tmp494.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
if ($tmp495) goto block16; else goto block17;
block16:;
// line 204
frost$core$MutableString* $tmp496 = *(&local1);
frost$core$String** $tmp497 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp498 = *$tmp497;
frost$core$MutableString$append$frost$core$String($tmp496, $tmp498);
goto block17;
block17:;
// line 206
frost$core$MutableString* $tmp499 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp499, &$s500);
// line 207
org$frostlang$frostc$Type* $tmp501 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp502 = *(&local1);
frost$core$String* $tmp503 = frost$core$MutableString$finish$R$frost$core$String($tmp502);
frost$collections$Array* $tmp504 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp505 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp504);
frost$core$Bit $tmp506 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64($tmp501, $tmp503, param1, param0, ((frost$collections$ListView*) $tmp505), $tmp506, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$String* $tmp507 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp508 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$MutableString* $tmp509 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp501;

}
frost$core$Int64 org$frostlang$frostc$Type$get_size$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
// line 212
org$frostlang$frostc$Type$Kind* $tmp510 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp511 = *$tmp510;
org$frostlang$frostc$Type$Kind$wrapper* $tmp512;
$tmp512 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp512->value = $tmp511;
frost$core$Int64 $tmp513 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp514 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp513);
org$frostlang$frostc$Type$Kind$wrapper* $tmp515;
$tmp515 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp515->value = $tmp514;
ITable* $tmp516 = ((frost$core$Equatable*) $tmp512)->$class->itable;
while ($tmp516->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp516 = $tmp516->next;
}
$fn518 $tmp517 = $tmp516->methods[0];
frost$core$Bit $tmp519 = $tmp517(((frost$core$Equatable*) $tmp512), ((frost$core$Equatable*) $tmp515));
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block1; else goto block2;
block1:;
*(&local1) = $tmp519;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp521 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp522 = *$tmp521;
org$frostlang$frostc$Type$Kind$wrapper* $tmp523;
$tmp523 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp523->value = $tmp522;
frost$core$Int64 $tmp524 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp525 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp524);
org$frostlang$frostc$Type$Kind$wrapper* $tmp526;
$tmp526 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp526->value = $tmp525;
ITable* $tmp527 = ((frost$core$Equatable*) $tmp523)->$class->itable;
while ($tmp527->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp527 = $tmp527->next;
}
$fn529 $tmp528 = $tmp527->methods[0];
frost$core$Bit $tmp530 = $tmp528(((frost$core$Equatable*) $tmp523), ((frost$core$Equatable*) $tmp526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp526)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp523)));
*(&local1) = $tmp530;
goto block3;
block3:;
frost$core$Bit $tmp531 = *(&local1);
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block4; else goto block5;
block4:;
*(&local0) = $tmp531;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp533 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp534 = *$tmp533;
org$frostlang$frostc$Type$Kind$wrapper* $tmp535;
$tmp535 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp535->value = $tmp534;
frost$core$Int64 $tmp536 = (frost$core$Int64) {9};
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
*(&local0) = $tmp542;
goto block6;
block6:;
frost$core$Bit $tmp543 = *(&local0);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp545 = (frost$core$Int64) {212};
frost$core$String* $tmp546 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s547, ((frost$core$Object*) param0));
frost$core$String* $tmp548 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp546, &$s549);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s550, $tmp545, $tmp548);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
abort(); // unreachable
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp515)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp512)));
// line 214
org$frostlang$frostc$Position* $tmp551 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp552 = *$tmp551;
frost$core$Int64 $tmp553 = $tmp552.line;
return $tmp553;

}
frost$core$Bit org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 218
org$frostlang$frostc$FixedArray** $tmp554 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp555 = *$tmp554;
frost$core$Bit $tmp556 = frost$core$Bit$init$builtin_bit($tmp555 != NULL);
return $tmp556;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$Type* param0) {

// line 222
org$frostlang$frostc$FixedArray** $tmp557 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp558 = *$tmp557;
frost$core$Bit $tmp559 = frost$core$Bit$init$builtin_bit($tmp558 != NULL);
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp561 = (frost$core$Int64) {222};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s562, $tmp561);
abort(); // unreachable
block1:;
// line 223
org$frostlang$frostc$FixedArray** $tmp563 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp564 = *$tmp563;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
return $tmp564;

}
frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$core$Bit local0;
// line 233
frost$core$String** $tmp565 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp566 = *$tmp565;
frost$core$String** $tmp567 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp568 = *$tmp567;
frost$core$Bit $tmp569 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp566, $tmp568);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Type$Kind* $tmp571 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp572 = *$tmp571;
org$frostlang$frostc$Type$Kind$wrapper* $tmp573;
$tmp573 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp573->value = $tmp572;
org$frostlang$frostc$Type$Kind* $tmp574 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp575 = *$tmp574;
org$frostlang$frostc$Type$Kind$wrapper* $tmp576;
$tmp576 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp576->value = $tmp575;
ITable* $tmp577 = ((frost$core$Equatable*) $tmp573)->$class->itable;
while ($tmp577->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp577 = $tmp577->next;
}
$fn579 $tmp578 = $tmp577->methods[0];
frost$core$Bit $tmp580 = $tmp578(((frost$core$Equatable*) $tmp573), ((frost$core$Equatable*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp576)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp573)));
*(&local0) = $tmp580;
goto block3;
block2:;
*(&local0) = $tmp569;
goto block3;
block3:;
frost$core$Bit $tmp581 = *(&local0);
return $tmp581;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type() {

// line 238
org$frostlang$frostc$Type* $tmp582 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp583 = (frost$core$Int64) {4};
org$frostlang$frostc$Type$Kind $tmp584 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp583);
org$frostlang$frostc$Position $tmp585 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp586 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp582, &$s587, $tmp584, $tmp585, $tmp586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
return $tmp582;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type() {

// line 243
org$frostlang$frostc$Type* $tmp588 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp589 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp590 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp589);
org$frostlang$frostc$Position $tmp591 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp592 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp588, &$s593, $tmp590, $tmp591, $tmp592);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
return $tmp588;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type() {

// line 248
org$frostlang$frostc$Type* $tmp594 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp595 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp596 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp595);
org$frostlang$frostc$Position $tmp597 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp598 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp594, &$s599, $tmp596, $tmp597, $tmp598);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
return $tmp594;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type() {

frost$collections$Array* local0 = NULL;
// line 253
frost$collections$Array* $tmp600 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp600);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
frost$collections$Array* $tmp601 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local0) = $tmp600;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
// line 254
frost$collections$Array* $tmp602 = *(&local0);
org$frostlang$frostc$Type* $tmp603 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp602, ((frost$core$Object*) $tmp603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
// line 255
org$frostlang$frostc$Type* $tmp604 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp605 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp606 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp605);
org$frostlang$frostc$Position $tmp607 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp608 = *(&local0);
frost$core$Bit $tmp609 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp604, &$s610, $tmp606, $tmp607, ((frost$collections$ListView*) $tmp608), $tmp609);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
frost$collections$Array* $tmp611 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp604;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type() {

// line 260
org$frostlang$frostc$Type* $tmp612 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp613 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp614 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp613);
org$frostlang$frostc$Position $tmp615 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp616 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp612, &$s617, $tmp614, $tmp615, $tmp616);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
return $tmp612;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Immutable$R$org$frostlang$frostc$Type() {

// line 265
org$frostlang$frostc$Type* $tmp618 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp619 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp620 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp619);
org$frostlang$frostc$Position $tmp621 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp622 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp618, &$s623, $tmp620, $tmp621, $tmp622);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
return $tmp618;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type() {

// line 270
org$frostlang$frostc$Type* $tmp624 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp625 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp626 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp625);
org$frostlang$frostc$Position $tmp627 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp628 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp624, &$s629, $tmp626, $tmp627, $tmp628);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
return $tmp624;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type() {

// line 275
org$frostlang$frostc$Type* $tmp630 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp631 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp632 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp631);
org$frostlang$frostc$Position $tmp633 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp634 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp630, &$s635, $tmp632, $tmp633, $tmp634);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
return $tmp630;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type() {

// line 280
org$frostlang$frostc$Type* $tmp636 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp637 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp638 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp637);
org$frostlang$frostc$Position $tmp639 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp640 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp636, &$s641, $tmp638, $tmp639, $tmp640);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
return $tmp636;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RegularExpression$R$org$frostlang$frostc$Type() {

// line 285
org$frostlang$frostc$Type* $tmp642 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp643 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp644 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp643);
org$frostlang$frostc$Position $tmp645 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp646 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp642, &$s647, $tmp644, $tmp645, $tmp646);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
return $tmp642;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt8$R$org$frostlang$frostc$Type() {

// line 290
org$frostlang$frostc$Type* $tmp648 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp649 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp650 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp649);
frost$core$Int64 $tmp651 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp648, &$s652, $tmp650, $tmp651);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
return $tmp648;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt16$R$org$frostlang$frostc$Type() {

// line 295
org$frostlang$frostc$Type* $tmp653 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp654 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp655 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp654);
frost$core$Int64 $tmp656 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp653, &$s657, $tmp655, $tmp656);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
return $tmp653;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt32$R$org$frostlang$frostc$Type() {

// line 300
org$frostlang$frostc$Type* $tmp658 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp659 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp660 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp659);
frost$core$Int64 $tmp661 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp658, &$s662, $tmp660, $tmp661);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
return $tmp658;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt64$R$org$frostlang$frostc$Type() {

// line 305
org$frostlang$frostc$Type* $tmp663 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp664 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp665 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp664);
frost$core$Int64 $tmp666 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp663, &$s667, $tmp665, $tmp666);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
return $tmp663;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt8$R$org$frostlang$frostc$Type() {

// line 310
org$frostlang$frostc$Type* $tmp668 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp669 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp670 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp669);
frost$core$Int64 $tmp671 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp668, &$s672, $tmp670, $tmp671);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
return $tmp668;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt16$R$org$frostlang$frostc$Type() {

// line 315
org$frostlang$frostc$Type* $tmp673 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp674 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp675 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp674);
frost$core$Int64 $tmp676 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp673, &$s677, $tmp675, $tmp676);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
return $tmp673;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt32$R$org$frostlang$frostc$Type() {

// line 320
org$frostlang$frostc$Type* $tmp678 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp679 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp680 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp679);
frost$core$Int64 $tmp681 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp678, &$s682, $tmp680, $tmp681);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
return $tmp678;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt64$R$org$frostlang$frostc$Type() {

// line 325
org$frostlang$frostc$Type* $tmp683 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp684 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp685 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp684);
frost$core$Int64 $tmp686 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp683, &$s687, $tmp685, $tmp686);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
return $tmp683;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat32$R$org$frostlang$frostc$Type() {

// line 330
org$frostlang$frostc$Type* $tmp688 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp689 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp690 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp689);
frost$core$Int64 $tmp691 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp688, &$s692, $tmp690, $tmp691);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
return $tmp688;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat64$R$org$frostlang$frostc$Type() {

// line 335
org$frostlang$frostc$Type* $tmp693 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp694 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp695 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp694);
frost$core$Int64 $tmp696 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp693, &$s697, $tmp695, $tmp696);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
return $tmp693;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type() {

// line 340
org$frostlang$frostc$Type* $tmp698 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp699 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp700 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp699);
org$frostlang$frostc$Position $tmp701 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp702 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp698, &$s703, $tmp700, $tmp701, $tmp702);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
return $tmp698;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type() {

// line 345
org$frostlang$frostc$Type* $tmp704 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp705 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp706 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp705);
org$frostlang$frostc$Position $tmp707 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp708 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp704, &$s709, $tmp706, $tmp707, $tmp708);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
return $tmp704;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type() {

// line 350
org$frostlang$frostc$Type* $tmp710 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp711 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp712 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp711);
org$frostlang$frostc$Position $tmp713 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp714 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp710, &$s715, $tmp712, $tmp713, $tmp714);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
return $tmp710;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type() {

// line 355
org$frostlang$frostc$Type* $tmp716 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp717 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp718 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp717);
org$frostlang$frostc$Position $tmp719 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp720 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp716, &$s721, $tmp718, $tmp719, $tmp720);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
return $tmp716;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type() {

// line 360
org$frostlang$frostc$Type* $tmp722 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp723 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp724 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp723);
org$frostlang$frostc$Position $tmp725 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp726 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp722, &$s727, $tmp724, $tmp725, $tmp726);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
return $tmp722;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type() {

// line 365
org$frostlang$frostc$Type* $tmp728 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp729 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp730 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp729);
org$frostlang$frostc$Position $tmp731 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp732 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp728, &$s733, $tmp730, $tmp731, $tmp732);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
return $tmp728;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type() {

// line 370
org$frostlang$frostc$Type* $tmp734 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp735 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp736 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp735);
org$frostlang$frostc$Position $tmp737 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp738 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp734, &$s739, $tmp736, $tmp737, $tmp738);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
return $tmp734;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type() {

// line 375
org$frostlang$frostc$Type* $tmp740 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp741 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp742 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp741);
org$frostlang$frostc$Position $tmp743 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp744 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp740, &$s745, $tmp742, $tmp743, $tmp744);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
return $tmp740;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type() {

// line 380
org$frostlang$frostc$Type* $tmp746 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp747 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp748 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp747);
org$frostlang$frostc$Position $tmp749 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp750 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp746, &$s751, $tmp748, $tmp749, $tmp750);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
return $tmp746;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type() {

// line 385
org$frostlang$frostc$Type* $tmp752 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp753 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp754 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp753);
org$frostlang$frostc$Position $tmp755 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp756 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp752, &$s757, $tmp754, $tmp755, $tmp756);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
return $tmp752;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type() {

// line 390
org$frostlang$frostc$Type* $tmp758 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp759 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp760 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp759);
org$frostlang$frostc$Position $tmp761 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp762 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp758, &$s763, $tmp760, $tmp761, $tmp762);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
return $tmp758;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type() {

// line 395
org$frostlang$frostc$Type* $tmp764 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp765 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp766 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp765);
org$frostlang$frostc$Position $tmp767 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp768 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp764, &$s769, $tmp766, $tmp767, $tmp768);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
return $tmp764;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type() {

// line 400
org$frostlang$frostc$Type* $tmp770 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp771 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp772 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp771);
org$frostlang$frostc$Position $tmp773 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp774 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp770, &$s775, $tmp772, $tmp773, $tmp774);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
return $tmp770;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type() {

// line 405
org$frostlang$frostc$Type* $tmp776 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp777 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp778 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp777);
org$frostlang$frostc$Position $tmp779 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp780 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp776, &$s781, $tmp778, $tmp779, $tmp780);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
return $tmp776;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$IntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

// line 410
org$frostlang$frostc$Type* $tmp782 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp783;
$tmp783 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp783->value = param0;
frost$core$String* $tmp784 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s785, ((frost$core$Object*) $tmp783));
frost$core$String* $tmp786 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp784, &$s787);
frost$core$Int64 $tmp788 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp789 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp788);
org$frostlang$frostc$Position $tmp790 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp791 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp782, $tmp786, $tmp789, $tmp790, $tmp791);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
return $tmp782;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$NegatedIntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

// line 415
org$frostlang$frostc$Type* $tmp792 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp793;
$tmp793 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp793->value = param0;
frost$core$String* $tmp794 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s795, ((frost$core$Object*) $tmp793));
frost$core$String* $tmp796 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp794, &$s797);
frost$core$Int64 $tmp798 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp799 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp798);
org$frostlang$frostc$Position $tmp800 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp801 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp792, $tmp796, $tmp799, $tmp800, $tmp801);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
return $tmp792;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RealLiteral$frost$core$Real64$R$org$frostlang$frostc$Type(frost$core$Real64 param0) {

// line 420
org$frostlang$frostc$Type* $tmp802 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Real64$wrapper* $tmp803;
$tmp803 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp803->value = param0;
frost$core$String* $tmp804 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s805, ((frost$core$Object*) $tmp803));
frost$core$String* $tmp806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp804, &$s807);
frost$core$Int64 $tmp808 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp809 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp808);
org$frostlang$frostc$Position $tmp810 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp811 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp802, $tmp806, $tmp809, $tmp810, $tmp811);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
return $tmp802;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BitLiteral$R$org$frostlang$frostc$Type() {

// line 425
org$frostlang$frostc$Type* $tmp812 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp813 = (frost$core$Int64) {7};
org$frostlang$frostc$Type$Kind $tmp814 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp813);
org$frostlang$frostc$Position $tmp815 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp816 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp812, &$s817, $tmp814, $tmp815, $tmp816);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
return $tmp812;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ClassLiteral$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 430
frost$collections$Array* $tmp818 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp818);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
frost$collections$Array* $tmp819 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
*(&local0) = $tmp818;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
// line 431
frost$collections$Array* $tmp820 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp820, ((frost$core$Object*) param0));
// line 432
org$frostlang$frostc$Type* $tmp821 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$collections$Array* $tmp822 = *(&local0);
org$frostlang$frostc$Type* $tmp823 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp821, ((frost$collections$ListView*) $tmp822));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
frost$collections$Array* $tmp824 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp823;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type() {

// line 437
org$frostlang$frostc$Type* $tmp825 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp826 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$Kind $tmp827 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp826);
org$frostlang$frostc$Position $tmp828 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp829 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp825, &$s830, $tmp827, $tmp828, $tmp829);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
return $tmp825;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type() {

// line 442
org$frostlang$frostc$Type* $tmp831 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp832 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp833 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp832);
org$frostlang$frostc$Position $tmp834 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp835 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp831, &$s836, $tmp833, $tmp834, $tmp835);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
return $tmp831;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterable$R$org$frostlang$frostc$Type() {

// line 447
org$frostlang$frostc$Type* $tmp837 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp838 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp839 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp838);
org$frostlang$frostc$Position $tmp840 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp841 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp837, &$s842, $tmp839, $tmp840, $tmp841);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
return $tmp837;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Frost$R$org$frostlang$frostc$Type() {

// line 452
org$frostlang$frostc$Type* $tmp843 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp844 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp845 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp844);
org$frostlang$frostc$Position $tmp846 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp847 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp843, &$s848, $tmp845, $tmp846, $tmp847);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
return $tmp843;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type() {

// line 457
org$frostlang$frostc$Type* $tmp849 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp850 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp851 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp850);
org$frostlang$frostc$Position $tmp852 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp853 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp849, &$s854, $tmp851, $tmp852, $tmp853);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
return $tmp849;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type() {

// line 462
org$frostlang$frostc$Type* $tmp855 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp856 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp857 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp856);
org$frostlang$frostc$Position $tmp858 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp859 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp855, &$s860, $tmp857, $tmp858, $tmp859);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
return $tmp855;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 467
frost$collections$Array* $tmp861 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp861);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
frost$collections$Array* $tmp862 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local0) = $tmp861;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
// line 468
frost$collections$Array* $tmp863 = *(&local0);
org$frostlang$frostc$Type* $tmp864 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp865 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp866 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp865);
org$frostlang$frostc$Position $tmp867 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp868 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp864, &$s869, $tmp866, $tmp867, $tmp868);
frost$collections$Array$add$frost$collections$Array$T($tmp863, ((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
// line 469
frost$collections$Array* $tmp870 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp870, ((frost$core$Object*) param0));
// line 470
org$frostlang$frostc$Type* $tmp871 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp872 = frost$core$String$get_asString$R$frost$core$String(&$s873);
frost$core$String* $tmp874 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp872, &$s875);
frost$core$String* $tmp876 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp874, ((frost$core$Object*) param0));
frost$core$String* $tmp877 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp876, &$s878);
frost$core$Int64 $tmp879 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp880 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp879);
org$frostlang$frostc$Position* $tmp881 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp882 = *$tmp881;
frost$collections$Array* $tmp883 = *(&local0);
frost$core$Bit* $tmp884 = &param0->resolved;
frost$core$Bit $tmp885 = *$tmp884;
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp871, $tmp877, $tmp880, $tmp882, ((frost$collections$ListView*) $tmp883), $tmp885);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
frost$collections$Array* $tmp886 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp871;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 475
frost$collections$Array* $tmp887 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp887);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
frost$collections$Array* $tmp888 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
*(&local0) = $tmp887;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
// line 476
frost$collections$Array* $tmp889 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp889, ((frost$core$Object*) param0));
// line 477
org$frostlang$frostc$Type* $tmp890 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp891 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp892 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp891);
org$frostlang$frostc$Position $tmp893 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp894 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp890, &$s895, $tmp892, $tmp893, $tmp894);
frost$collections$Array* $tmp896 = *(&local0);
org$frostlang$frostc$Type* $tmp897 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp890, ((frost$collections$ListView*) $tmp896));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$collections$Array* $tmp898 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp897;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 482
frost$collections$Array* $tmp899 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp899);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
frost$collections$Array* $tmp900 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local0) = $tmp899;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
// line 483
frost$collections$Array* $tmp901 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp901, ((frost$core$Object*) param0));
// line 484
org$frostlang$frostc$Type* $tmp902 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp903 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp904 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp903);
org$frostlang$frostc$Position $tmp905 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp906 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp902, &$s907, $tmp904, $tmp905, $tmp906);
frost$collections$Array* $tmp908 = *(&local0);
org$frostlang$frostc$Type* $tmp909 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp902, ((frost$collections$ListView*) $tmp908));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
frost$collections$Array* $tmp910 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp909;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ImmutableArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 489
frost$collections$Array* $tmp911 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp911);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
frost$collections$Array* $tmp912 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
*(&local0) = $tmp911;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
// line 490
frost$collections$Array* $tmp913 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp913, ((frost$core$Object*) param0));
// line 491
org$frostlang$frostc$Type* $tmp914 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp915 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp916 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp915);
org$frostlang$frostc$Position $tmp917 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp918 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp914, &$s919, $tmp916, $tmp917, $tmp918);
frost$collections$Array* $tmp920 = *(&local0);
org$frostlang$frostc$Type* $tmp921 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp914, ((frost$collections$ListView*) $tmp920));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$collections$Array* $tmp922 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp921;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 496
frost$collections$Array* $tmp923 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp923);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
frost$collections$Array* $tmp924 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
*(&local0) = $tmp923;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
// line 497
frost$collections$Array* $tmp925 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp925, ((frost$core$Object*) param0));
// line 498
org$frostlang$frostc$Type* $tmp926 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp927 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp928 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp927);
org$frostlang$frostc$Position $tmp929 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp930 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp926, &$s931, $tmp928, $tmp929, $tmp930);
frost$collections$Array* $tmp932 = *(&local0);
org$frostlang$frostc$Type* $tmp933 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp926, ((frost$collections$ListView*) $tmp932));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
frost$collections$Array* $tmp934 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp933;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 503
frost$collections$Array* $tmp935 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp935);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
frost$collections$Array* $tmp936 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
*(&local0) = $tmp935;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
// line 504
frost$collections$Array* $tmp937 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp937, ((frost$core$Object*) param0));
// line 505
org$frostlang$frostc$Type* $tmp938 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp939 = org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp940 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp938, $tmp939);
bool $tmp941 = $tmp940.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
if ($tmp941) goto block1; else goto block3;
block1:;
// line 506
frost$collections$Array* $tmp942 = *(&local0);
org$frostlang$frostc$Type* $tmp943 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp942, ((frost$core$Object*) $tmp943));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
goto block2;
block3:;
// line 508
org$frostlang$frostc$Type* $tmp944 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp945 = org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp946 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp944, $tmp945);
bool $tmp947 = $tmp946.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
if ($tmp947) goto block4; else goto block6;
block4:;
// line 509
frost$collections$Array* $tmp948 = *(&local0);
org$frostlang$frostc$Type* $tmp949 = org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp948, ((frost$core$Object*) $tmp949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
goto block5;
block6:;
// line 511
org$frostlang$frostc$Type* $tmp950 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp951 = org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp952 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp950, $tmp951);
bool $tmp953 = $tmp952.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
if ($tmp953) goto block7; else goto block9;
block7:;
// line 512
frost$collections$Array* $tmp954 = *(&local0);
org$frostlang$frostc$Type* $tmp955 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp954, ((frost$core$Object*) $tmp955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
goto block8;
block9:;
// line 1
// line 515
frost$collections$Array* $tmp956 = *(&local0);
org$frostlang$frostc$Type* $tmp957 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
frost$collections$Array$add$frost$collections$Array$T($tmp956, ((frost$core$Object*) $tmp957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
// line 517
org$frostlang$frostc$Type* $tmp958 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$collections$Array* local0 = NULL;
// line 522
frost$collections$Array* $tmp967 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp967);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
frost$collections$Array* $tmp968 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
*(&local0) = $tmp967;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
// line 523
frost$collections$Array* $tmp969 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp969, ((frost$core$Object*) param0));
// line 524
frost$collections$Array* $tmp970 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp970, ((frost$core$Object*) param1));
// line 525
org$frostlang$frostc$Type* $tmp971 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp972 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp973 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp972);
org$frostlang$frostc$Position $tmp974 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp975 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp971, &$s976, $tmp973, $tmp974, $tmp975);
frost$collections$Array* $tmp977 = *(&local0);
org$frostlang$frostc$Type* $tmp978 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp971, ((frost$collections$ListView*) $tmp977));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
frost$collections$Array* $tmp979 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp978;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type() {

// line 530
org$frostlang$frostc$Type* $tmp980 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp981 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp982 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp981);
org$frostlang$frostc$Position $tmp983 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp984 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp980, &$s985, $tmp982, $tmp983, $tmp984);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
return $tmp980;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type() {

// line 535
org$frostlang$frostc$Type* $tmp986 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp987 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp988 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp987);
org$frostlang$frostc$Position $tmp989 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp990 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp986, &$s991, $tmp988, $tmp989, $tmp990);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
return $tmp986;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
// line 539
frost$core$String** $tmp992 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp993 = *$tmp992;
frost$core$Bit $tmp994 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp993, &$s995);
bool $tmp996 = $tmp994.value;
if ($tmp996) goto block1; else goto block2;
block1:;
*(&local3) = $tmp994;
goto block3;
block2:;
frost$core$String** $tmp997 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp998 = *$tmp997;
frost$core$Bit $tmp999 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp998, &$s1000);
*(&local3) = $tmp999;
goto block3;
block3:;
frost$core$Bit $tmp1001 = *(&local3);
bool $tmp1002 = $tmp1001.value;
if ($tmp1002) goto block4; else goto block5;
block4:;
*(&local2) = $tmp1001;
goto block6;
block5:;
frost$core$String** $tmp1003 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1004 = *$tmp1003;
frost$core$Bit $tmp1005 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1004, &$s1006);
*(&local2) = $tmp1005;
goto block6;
block6:;
frost$core$Bit $tmp1007 = *(&local2);
bool $tmp1008 = $tmp1007.value;
if ($tmp1008) goto block7; else goto block8;
block7:;
*(&local1) = $tmp1007;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1009 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1010 = *$tmp1009;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1011;
$tmp1011 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1011->value = $tmp1010;
frost$core$Int64 $tmp1012 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1013 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1012);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1014;
$tmp1014 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1014->value = $tmp1013;
ITable* $tmp1015 = ((frost$core$Equatable*) $tmp1011)->$class->itable;
while ($tmp1015->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1015 = $tmp1015->next;
}
$fn1017 $tmp1016 = $tmp1015->methods[0];
frost$core$Bit $tmp1018 = $tmp1016(((frost$core$Equatable*) $tmp1011), ((frost$core$Equatable*) $tmp1014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1014)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1011)));
*(&local1) = $tmp1018;
goto block9;
block9:;
frost$core$Bit $tmp1019 = *(&local1);
bool $tmp1020 = $tmp1019.value;
if ($tmp1020) goto block10; else goto block11;
block10:;
*(&local0) = $tmp1019;
goto block12;
block11:;
org$frostlang$frostc$Type$Kind* $tmp1021 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1022 = *$tmp1021;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1023;
$tmp1023 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1023->value = $tmp1022;
frost$core$Int64 $tmp1024 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1025 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1024);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1026;
$tmp1026 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1026->value = $tmp1025;
ITable* $tmp1027 = ((frost$core$Equatable*) $tmp1023)->$class->itable;
while ($tmp1027->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1027 = $tmp1027->next;
}
$fn1029 $tmp1028 = $tmp1027->methods[0];
frost$core$Bit $tmp1030 = $tmp1028(((frost$core$Equatable*) $tmp1023), ((frost$core$Equatable*) $tmp1026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1026)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1023)));
*(&local0) = $tmp1030;
goto block12;
block12:;
frost$core$Bit $tmp1031 = *(&local0);
return $tmp1031;

}
frost$core$Bit org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
// line 545
org$frostlang$frostc$Type$Kind* $tmp1032 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1033 = *$tmp1032;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1034;
$tmp1034 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1034->value = $tmp1033;
frost$core$Int64 $tmp1035 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp1036 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1035);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1037;
$tmp1037 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1037->value = $tmp1036;
ITable* $tmp1038 = ((frost$core$Equatable*) $tmp1034)->$class->itable;
while ($tmp1038->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1038 = $tmp1038->next;
}
$fn1040 $tmp1039 = $tmp1038->methods[0];
frost$core$Bit $tmp1041 = $tmp1039(((frost$core$Equatable*) $tmp1034), ((frost$core$Equatable*) $tmp1037));
bool $tmp1042 = $tmp1041.value;
if ($tmp1042) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1041;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1043 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1044 = *$tmp1043;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1045;
$tmp1045 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1045->value = $tmp1044;
frost$core$Int64 $tmp1046 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp1047 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1046);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1048;
$tmp1048 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1048->value = $tmp1047;
ITable* $tmp1049 = ((frost$core$Equatable*) $tmp1045)->$class->itable;
while ($tmp1049->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1049 = $tmp1049->next;
}
$fn1051 $tmp1050 = $tmp1049->methods[0];
frost$core$Bit $tmp1052 = $tmp1050(((frost$core$Equatable*) $tmp1045), ((frost$core$Equatable*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1048)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1045)));
*(&local2) = $tmp1052;
goto block3;
block3:;
frost$core$Bit $tmp1053 = *(&local2);
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1053;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1055 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1056 = *$tmp1055;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1057;
$tmp1057 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1057->value = $tmp1056;
frost$core$Int64 $tmp1058 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp1059 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1058);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1060;
$tmp1060 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1060->value = $tmp1059;
ITable* $tmp1061 = ((frost$core$Equatable*) $tmp1057)->$class->itable;
while ($tmp1061->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1061 = $tmp1061->next;
}
$fn1063 $tmp1062 = $tmp1061->methods[0];
frost$core$Bit $tmp1064 = $tmp1062(((frost$core$Equatable*) $tmp1057), ((frost$core$Equatable*) $tmp1060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1060)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1057)));
*(&local1) = $tmp1064;
goto block6;
block6:;
frost$core$Bit $tmp1065 = *(&local1);
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1065;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1067 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1068 = *$tmp1067;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1069;
$tmp1069 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1069->value = $tmp1068;
frost$core$Int64 $tmp1070 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1071 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1070);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1072;
$tmp1072 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1072->value = $tmp1071;
ITable* $tmp1073 = ((frost$core$Equatable*) $tmp1069)->$class->itable;
while ($tmp1073->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1073 = $tmp1073->next;
}
$fn1075 $tmp1074 = $tmp1073->methods[0];
frost$core$Bit $tmp1076 = $tmp1074(((frost$core$Equatable*) $tmp1069), ((frost$core$Equatable*) $tmp1072));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1072)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1069)));
*(&local0) = $tmp1076;
goto block9;
block9:;
frost$core$Bit $tmp1077 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1037)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1034)));
return $tmp1077;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 550
frost$core$String** $tmp1078 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1079 = *$tmp1078;
frost$core$Bit $tmp1080 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1079, &$s1081);
return $tmp1080;

}
frost$core$Bit org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 554
org$frostlang$frostc$Type$Kind* $tmp1082 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1083 = *$tmp1082;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1084;
$tmp1084 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1084->value = $tmp1083;
frost$core$Int64 $tmp1085 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1086 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1085);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1087;
$tmp1087 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1087->value = $tmp1086;
ITable* $tmp1088 = ((frost$core$Equatable*) $tmp1084)->$class->itable;
while ($tmp1088->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1088 = $tmp1088->next;
}
$fn1090 $tmp1089 = $tmp1088->methods[0];
frost$core$Bit $tmp1091 = $tmp1089(((frost$core$Equatable*) $tmp1084), ((frost$core$Equatable*) $tmp1087));
bool $tmp1092 = $tmp1091.value;
if ($tmp1092) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1091;
goto block3;
block2:;
frost$core$String** $tmp1093 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1094 = *$tmp1093;
frost$core$Bit $tmp1095 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1094, &$s1096);
*(&local0) = $tmp1095;
goto block3;
block3:;
frost$core$Bit $tmp1097 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1087)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1084)));
return $tmp1097;

}
frost$core$Bit org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 558
frost$core$String** $tmp1098 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1099 = *$tmp1098;
frost$core$Bit $tmp1100 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1099, &$s1101);
return $tmp1100;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 562
frost$core$Bit $tmp1102 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1103 = $tmp1102.value;
if ($tmp1103) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1102;
goto block3;
block2:;
frost$core$Bit $tmp1104 = org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(param0);
*(&local0) = $tmp1104;
goto block3;
block3:;
frost$core$Bit $tmp1105 = *(&local0);
return $tmp1105;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 566
org$frostlang$frostc$Type$Kind* $tmp1106 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1107 = *$tmp1106;
frost$core$Int64 $tmp1108 = $tmp1107.$rawValue;
frost$core$Int64 $tmp1109 = (frost$core$Int64) {0};
frost$core$Bit $tmp1110 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1108, $tmp1109);
bool $tmp1111 = $tmp1110.value;
if ($tmp1111) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1112 = (frost$core$Int64) {1};
frost$core$Bit $tmp1113 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1108, $tmp1112);
bool $tmp1114 = $tmp1113.value;
if ($tmp1114) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp1115 = (frost$core$Int64) {10};
frost$core$Bit $tmp1116 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1108, $tmp1115);
bool $tmp1117 = $tmp1116.value;
if ($tmp1117) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1118 = (frost$core$Int64) {11};
frost$core$Bit $tmp1119 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1108, $tmp1118);
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp1121 = (frost$core$Int64) {12};
frost$core$Bit $tmp1122 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1108, $tmp1121);
bool $tmp1123 = $tmp1122.value;
if ($tmp1123) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp1124 = (frost$core$Int64) {15};
frost$core$Bit $tmp1125 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1108, $tmp1124);
bool $tmp1126 = $tmp1125.value;
if ($tmp1126) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp1127 = (frost$core$Int64) {14};
frost$core$Bit $tmp1128 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1108, $tmp1127);
bool $tmp1129 = $tmp1128.value;
if ($tmp1129) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp1130 = (frost$core$Int64) {17};
frost$core$Bit $tmp1131 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1108, $tmp1130);
bool $tmp1132 = $tmp1131.value;
if ($tmp1132) goto block2; else goto block10;
block10:;
frost$core$Int64 $tmp1133 = (frost$core$Int64) {16};
frost$core$Bit $tmp1134 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1108, $tmp1133);
bool $tmp1135 = $tmp1134.value;
if ($tmp1135) goto block2; else goto block11;
block2:;
// line 570
frost$core$Bit $tmp1136 = frost$core$Bit$init$builtin_bit(true);
return $tmp1136;
block11:;
// line 573
frost$core$Bit $tmp1137 = frost$core$Bit$init$builtin_bit(false);
return $tmp1137;
block1:;
goto block12;
block12:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 579
org$frostlang$frostc$Type$Kind* $tmp1138 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1139 = *$tmp1138;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1140;
$tmp1140 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1140->value = $tmp1139;
frost$core$Int64 $tmp1141 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1142 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1141);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1143;
$tmp1143 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1143->value = $tmp1142;
ITable* $tmp1144 = ((frost$core$Equatable*) $tmp1140)->$class->itable;
while ($tmp1144->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1144 = $tmp1144->next;
}
$fn1146 $tmp1145 = $tmp1144->methods[0];
frost$core$Bit $tmp1147 = $tmp1145(((frost$core$Equatable*) $tmp1140), ((frost$core$Equatable*) $tmp1143));
bool $tmp1148 = $tmp1147.value;
if ($tmp1148) goto block1; else goto block2;
block1:;
org$frostlang$frostc$FixedArray* $tmp1149 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int64 $tmp1150 = (frost$core$Int64) {0};
frost$core$Object* $tmp1151 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1149, $tmp1150);
org$frostlang$frostc$Type* $tmp1152 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1153 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1151), $tmp1152);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$core$Frost$unref$frost$core$Object$Q($tmp1151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local0) = $tmp1153;
goto block3;
block2:;
*(&local0) = $tmp1147;
goto block3;
block3:;
frost$core$Bit $tmp1154 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1143)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1140)));
return $tmp1154;

}
frost$core$Bit org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 583
org$frostlang$frostc$Type$Kind* $tmp1155 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1156 = *$tmp1155;
frost$core$Int64 $tmp1157 = $tmp1156.$rawValue;
frost$core$Int64 $tmp1158 = (frost$core$Int64) {15};
frost$core$Bit $tmp1159 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1157, $tmp1158);
bool $tmp1160 = $tmp1159.value;
if ($tmp1160) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1161 = (frost$core$Int64) {14};
frost$core$Bit $tmp1162 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1157, $tmp1161);
bool $tmp1163 = $tmp1162.value;
if ($tmp1163) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp1164 = (frost$core$Int64) {17};
frost$core$Bit $tmp1165 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1157, $tmp1164);
bool $tmp1166 = $tmp1165.value;
if ($tmp1166) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1167 = (frost$core$Int64) {16};
frost$core$Bit $tmp1168 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1157, $tmp1167);
bool $tmp1169 = $tmp1168.value;
if ($tmp1169) goto block2; else goto block6;
block2:;
// line 585
frost$core$Bit $tmp1170 = frost$core$Bit$init$builtin_bit(true);
return $tmp1170;
block6:;
// line 588
frost$core$Bit $tmp1171 = frost$core$Bit$init$builtin_bit(false);
return $tmp1171;
block1:;
goto block7;
block7:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 594
frost$core$String** $tmp1172 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1173 = *$tmp1172;
frost$core$Bit $tmp1174 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1173, &$s1175);
return $tmp1174;

}
frost$core$Bit org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 598
frost$core$String** $tmp1176 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1177 = *$tmp1176;
frost$core$Bit $tmp1178 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1177, &$s1179);
return $tmp1178;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 602
frost$core$String** $tmp1180 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1181 = *$tmp1180;
frost$core$Bit $tmp1182 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1181, &$s1183);
return $tmp1182;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 606
org$frostlang$frostc$Type$Kind* $tmp1184 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1185 = *$tmp1184;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1186;
$tmp1186 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1186->value = $tmp1185;
frost$core$Int64 $tmp1187 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1188 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1187);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1189;
$tmp1189 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1189->value = $tmp1188;
ITable* $tmp1190 = ((frost$core$Equatable*) $tmp1186)->$class->itable;
while ($tmp1190->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1190 = $tmp1190->next;
}
$fn1192 $tmp1191 = $tmp1190->methods[0];
frost$core$Bit $tmp1193 = $tmp1191(((frost$core$Equatable*) $tmp1186), ((frost$core$Equatable*) $tmp1189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1189)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1186)));
return $tmp1193;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 610
org$frostlang$frostc$Type$Kind* $tmp1194 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1195 = *$tmp1194;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1196;
$tmp1196 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1196->value = $tmp1195;
frost$core$Int64 $tmp1197 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1198 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1197);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1199;
$tmp1199 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1199->value = $tmp1198;
ITable* $tmp1200 = ((frost$core$Equatable*) $tmp1196)->$class->itable;
while ($tmp1200->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1200 = $tmp1200->next;
}
$fn1202 $tmp1201 = $tmp1200->methods[0];
frost$core$Bit $tmp1203 = $tmp1201(((frost$core$Equatable*) $tmp1196), ((frost$core$Equatable*) $tmp1199));
bool $tmp1204 = $tmp1203.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1199)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1196)));
if ($tmp1204) goto block1; else goto block2;
block1:;
// line 611
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 613
frost$collections$Array* $tmp1205 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1205);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
frost$collections$Array* $tmp1206 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
*(&local0) = $tmp1205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
// line 614
frost$collections$Array* $tmp1207 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1207, ((frost$core$Object*) param0));
// line 615
org$frostlang$frostc$Type* $tmp1208 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String** $tmp1209 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1210 = *$tmp1209;
frost$core$String* $tmp1211 = frost$core$String$get_asString$R$frost$core$String($tmp1210);
frost$core$String* $tmp1212 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1211, &$s1213);
frost$core$Int64 $tmp1214 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1215 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1214);
org$frostlang$frostc$Position $tmp1216 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp1217 = *(&local0);
frost$core$Bit $tmp1218 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp1208, $tmp1212, $tmp1215, $tmp1216, ((frost$collections$ListView*) $tmp1217), $tmp1218);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$collections$Array* $tmp1219 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1208;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 619
org$frostlang$frostc$Type$Kind* $tmp1220 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1221 = *$tmp1220;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1222;
$tmp1222 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1222->value = $tmp1221;
frost$core$Int64 $tmp1223 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1224 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1223);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1225;
$tmp1225 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1225->value = $tmp1224;
ITable* $tmp1226 = ((frost$core$Equatable*) $tmp1222)->$class->itable;
while ($tmp1226->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1226 = $tmp1226->next;
}
$fn1228 $tmp1227 = $tmp1226->methods[1];
frost$core$Bit $tmp1229 = $tmp1227(((frost$core$Equatable*) $tmp1222), ((frost$core$Equatable*) $tmp1225));
bool $tmp1230 = $tmp1229.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1225)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1222)));
if ($tmp1230) goto block1; else goto block2;
block1:;
// line 620
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 622
org$frostlang$frostc$FixedArray* $tmp1231 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int64 $tmp1232 = (frost$core$Int64) {0};
frost$core$Object* $tmp1233 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1231, $tmp1232);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1233)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1233);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
return ((org$frostlang$frostc$Type*) $tmp1233);

}
frost$core$Int64 org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind* $tmp1234 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1235 = *$tmp1234;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1236;
$tmp1236 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1236->value = $tmp1235;
frost$core$Int64 $tmp1237 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp1238 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1237);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1239;
$tmp1239 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1239->value = $tmp1238;
ITable* $tmp1240 = ((frost$core$Equatable*) $tmp1236)->$class->itable;
while ($tmp1240->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1240 = $tmp1240->next;
}
$fn1242 $tmp1241 = $tmp1240->methods[0];
frost$core$Bit $tmp1243 = $tmp1241(((frost$core$Equatable*) $tmp1236), ((frost$core$Equatable*) $tmp1239));
bool $tmp1244 = $tmp1243.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1239)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1236)));
if ($tmp1244) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1245 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1246 = *$tmp1245;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1247;
$tmp1247 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1247->value = $tmp1246;
frost$core$Int64 $tmp1248 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1249 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1248);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1250;
$tmp1250 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1250->value = $tmp1249;
ITable* $tmp1251 = ((frost$core$Equatable*) $tmp1247)->$class->itable;
while ($tmp1251->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1251 = $tmp1251->next;
}
$fn1253 $tmp1252 = $tmp1251->methods[0];
frost$core$Bit $tmp1254 = $tmp1252(((frost$core$Equatable*) $tmp1247), ((frost$core$Equatable*) $tmp1250));
bool $tmp1255 = $tmp1254.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1250)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1247)));
if ($tmp1255) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1256 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1257 = *$tmp1256;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1258;
$tmp1258 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1258->value = $tmp1257;
frost$core$Int64 $tmp1259 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1260 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1259);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1261;
$tmp1261 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1261->value = $tmp1260;
ITable* $tmp1262 = ((frost$core$Equatable*) $tmp1258)->$class->itable;
while ($tmp1262->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1262 = $tmp1262->next;
}
$fn1264 $tmp1263 = $tmp1262->methods[0];
frost$core$Bit $tmp1265 = $tmp1263(((frost$core$Equatable*) $tmp1258), ((frost$core$Equatable*) $tmp1261));
bool $tmp1266 = $tmp1265.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1261)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1258)));
if ($tmp1266) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1267 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1268 = *$tmp1267;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1269;
$tmp1269 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1269->value = $tmp1268;
frost$core$Int64 $tmp1270 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1271 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1270);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1272;
$tmp1272 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1272->value = $tmp1271;
ITable* $tmp1273 = ((frost$core$Equatable*) $tmp1269)->$class->itable;
while ($tmp1273->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1273 = $tmp1273->next;
}
$fn1275 $tmp1274 = $tmp1273->methods[0];
frost$core$Bit $tmp1276 = $tmp1274(((frost$core$Equatable*) $tmp1269), ((frost$core$Equatable*) $tmp1272));
bool $tmp1277 = $tmp1276.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1272)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1269)));
if ($tmp1277) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1278 = (frost$core$Int64) {627};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1279, $tmp1278, &$s1280);
abort(); // unreachable
block1:;
// line 628
org$frostlang$frostc$FixedArray* $tmp1281 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1282 = ((frost$collections$CollectionView*) $tmp1281)->$class->itable;
while ($tmp1282->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1282 = $tmp1282->next;
}
$fn1284 $tmp1283 = $tmp1282->methods[0];
frost$core$Int64 $tmp1285 = $tmp1283(((frost$collections$CollectionView*) $tmp1281));
frost$core$Int64 $tmp1286 = (frost$core$Int64) {1};
int64_t $tmp1287 = $tmp1285.value;
int64_t $tmp1288 = $tmp1286.value;
int64_t $tmp1289 = $tmp1287 - $tmp1288;
frost$core$Int64 $tmp1290 = (frost$core$Int64) {$tmp1289};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
return $tmp1290;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$core$Int64 param1) {

org$frostlang$frostc$Type$Kind* $tmp1291 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1292 = *$tmp1291;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1293;
$tmp1293 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1293->value = $tmp1292;
frost$core$Int64 $tmp1294 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp1295 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1294);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1296;
$tmp1296 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1296->value = $tmp1295;
ITable* $tmp1297 = ((frost$core$Equatable*) $tmp1293)->$class->itable;
while ($tmp1297->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1297 = $tmp1297->next;
}
$fn1299 $tmp1298 = $tmp1297->methods[0];
frost$core$Bit $tmp1300 = $tmp1298(((frost$core$Equatable*) $tmp1293), ((frost$core$Equatable*) $tmp1296));
bool $tmp1301 = $tmp1300.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1296)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1293)));
if ($tmp1301) goto block4; else goto block7;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1302 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1303 = *$tmp1302;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1304;
$tmp1304 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1304->value = $tmp1303;
frost$core$Int64 $tmp1305 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1306 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1305);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1307;
$tmp1307 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1307->value = $tmp1306;
ITable* $tmp1308 = ((frost$core$Equatable*) $tmp1304)->$class->itable;
while ($tmp1308->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1308 = $tmp1308->next;
}
$fn1310 $tmp1309 = $tmp1308->methods[0];
frost$core$Bit $tmp1311 = $tmp1309(((frost$core$Equatable*) $tmp1304), ((frost$core$Equatable*) $tmp1307));
bool $tmp1312 = $tmp1311.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1307)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1304)));
if ($tmp1312) goto block4; else goto block6;
block6:;
org$frostlang$frostc$Type$Kind* $tmp1313 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1314 = *$tmp1313;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1315;
$tmp1315 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1315->value = $tmp1314;
frost$core$Int64 $tmp1316 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp1317 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1316);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1318;
$tmp1318 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1318->value = $tmp1317;
ITable* $tmp1319 = ((frost$core$Equatable*) $tmp1315)->$class->itable;
while ($tmp1319->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1319 = $tmp1319->next;
}
$fn1321 $tmp1320 = $tmp1319->methods[0];
frost$core$Bit $tmp1322 = $tmp1320(((frost$core$Equatable*) $tmp1315), ((frost$core$Equatable*) $tmp1318));
bool $tmp1323 = $tmp1322.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1318)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1315)));
if ($tmp1323) goto block4; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1324 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1325 = *$tmp1324;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1326;
$tmp1326 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1326->value = $tmp1325;
frost$core$Int64 $tmp1327 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1328 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1327);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1329;
$tmp1329 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1329->value = $tmp1328;
ITable* $tmp1330 = ((frost$core$Equatable*) $tmp1326)->$class->itable;
while ($tmp1330->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1330 = $tmp1330->next;
}
$fn1332 $tmp1331 = $tmp1330->methods[0];
frost$core$Bit $tmp1333 = $tmp1331(((frost$core$Equatable*) $tmp1326), ((frost$core$Equatable*) $tmp1329));
bool $tmp1334 = $tmp1333.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1329)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1326)));
if ($tmp1334) goto block4; else goto block2;
block4:;
frost$core$Int64 $tmp1335 = (frost$core$Int64) {0};
int64_t $tmp1336 = param1.value;
int64_t $tmp1337 = $tmp1335.value;
bool $tmp1338 = $tmp1336 >= $tmp1337;
frost$core$Bit $tmp1339 = (frost$core$Bit) {$tmp1338};
bool $tmp1340 = $tmp1339.value;
if ($tmp1340) goto block3; else goto block2;
block3:;
org$frostlang$frostc$FixedArray* $tmp1341 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1342 = ((frost$collections$CollectionView*) $tmp1341)->$class->itable;
while ($tmp1342->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1342 = $tmp1342->next;
}
$fn1344 $tmp1343 = $tmp1342->methods[0];
frost$core$Int64 $tmp1345 = $tmp1343(((frost$collections$CollectionView*) $tmp1341));
frost$core$Int64 $tmp1346 = (frost$core$Int64) {1};
int64_t $tmp1347 = $tmp1345.value;
int64_t $tmp1348 = $tmp1346.value;
int64_t $tmp1349 = $tmp1347 - $tmp1348;
frost$core$Int64 $tmp1350 = (frost$core$Int64) {$tmp1349};
int64_t $tmp1351 = param1.value;
int64_t $tmp1352 = $tmp1350.value;
bool $tmp1353 = $tmp1351 < $tmp1352;
frost$core$Bit $tmp1354 = (frost$core$Bit) {$tmp1353};
bool $tmp1355 = $tmp1354.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
if ($tmp1355) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1356 = (frost$core$Int64) {633};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1357, $tmp1356, &$s1358);
abort(); // unreachable
block1:;
// line 634
org$frostlang$frostc$FixedArray* $tmp1359 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Object* $tmp1360 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1359, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1360)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1360);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
return ((org$frostlang$frostc$Type*) $tmp1360);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind* $tmp1361 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1362 = *$tmp1361;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1363;
$tmp1363 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1363->value = $tmp1362;
frost$core$Int64 $tmp1364 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp1365 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1364);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1366;
$tmp1366 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1366->value = $tmp1365;
ITable* $tmp1367 = ((frost$core$Equatable*) $tmp1363)->$class->itable;
while ($tmp1367->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1367 = $tmp1367->next;
}
$fn1369 $tmp1368 = $tmp1367->methods[0];
frost$core$Bit $tmp1370 = $tmp1368(((frost$core$Equatable*) $tmp1363), ((frost$core$Equatable*) $tmp1366));
bool $tmp1371 = $tmp1370.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1366)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1363)));
if ($tmp1371) goto block1; else goto block5;
block5:;
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
if ($tmp1382) goto block1; else goto block4;
block4:;
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
if ($tmp1393) goto block1; else goto block3;
block3:;
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
if ($tmp1404) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1405 = (frost$core$Int64) {639};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1406, $tmp1405, &$s1407);
abort(); // unreachable
block1:;
// line 640
org$frostlang$frostc$FixedArray* $tmp1408 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
org$frostlang$frostc$FixedArray* $tmp1409 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1410 = ((frost$collections$CollectionView*) $tmp1409)->$class->itable;
while ($tmp1410->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1410 = $tmp1410->next;
}
$fn1412 $tmp1411 = $tmp1410->methods[0];
frost$core$Int64 $tmp1413 = $tmp1411(((frost$collections$CollectionView*) $tmp1409));
frost$core$Int64 $tmp1414 = (frost$core$Int64) {1};
int64_t $tmp1415 = $tmp1413.value;
int64_t $tmp1416 = $tmp1414.value;
int64_t $tmp1417 = $tmp1415 - $tmp1416;
frost$core$Int64 $tmp1418 = (frost$core$Int64) {$tmp1417};
frost$core$Object* $tmp1419 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1408, $tmp1418);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1419)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1419);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
return ((org$frostlang$frostc$Type*) $tmp1419);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
frost$collections$HashSet* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
// line 647
frost$core$Bit $tmp1420 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param2);
bool $tmp1421 = $tmp1420.value;
if ($tmp1421) goto block1; else goto block2;
block1:;
// line 648
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 650
org$frostlang$frostc$Type* $tmp1422 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1423 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1422);
bool $tmp1424 = $tmp1423.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
if ($tmp1424) goto block3; else goto block4;
block3:;
// line 651
org$frostlang$frostc$Type$Kind* $tmp1425 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1426 = *$tmp1425;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1427;
$tmp1427 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1427->value = $tmp1426;
frost$core$Int64 $tmp1428 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1429 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1428);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1430;
$tmp1430 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1430->value = $tmp1429;
ITable* $tmp1431 = ((frost$core$Equatable*) $tmp1427)->$class->itable;
while ($tmp1431->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1431 = $tmp1431->next;
}
$fn1433 $tmp1432 = $tmp1431->methods[0];
frost$core$Bit $tmp1434 = $tmp1432(((frost$core$Equatable*) $tmp1427), ((frost$core$Equatable*) $tmp1430));
bool $tmp1435 = $tmp1434.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1430)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1427)));
if ($tmp1435) goto block5; else goto block6;
block5:;
// line 652
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block6:;
// line 654
org$frostlang$frostc$Type* $tmp1436 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
return $tmp1436;
block4:;
// line 656
org$frostlang$frostc$Type* $tmp1437 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1438 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param2, $tmp1437);
bool $tmp1439 = $tmp1438.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
if ($tmp1439) goto block7; else goto block8;
block7:;
// line 657
org$frostlang$frostc$Type$Kind* $tmp1440 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1441 = *$tmp1440;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1442;
$tmp1442 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1442->value = $tmp1441;
frost$core$Int64 $tmp1443 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1444 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1443);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1445;
$tmp1445 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1445->value = $tmp1444;
ITable* $tmp1446 = ((frost$core$Equatable*) $tmp1442)->$class->itable;
while ($tmp1446->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1446 = $tmp1446->next;
}
$fn1448 $tmp1447 = $tmp1446->methods[0];
frost$core$Bit $tmp1449 = $tmp1447(((frost$core$Equatable*) $tmp1442), ((frost$core$Equatable*) $tmp1445));
bool $tmp1450 = $tmp1449.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1445)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1442)));
if ($tmp1450) goto block9; else goto block10;
block9:;
// line 658
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block10:;
// line 660
org$frostlang$frostc$Type* $tmp1451 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
return $tmp1451;
block8:;
// line 662
org$frostlang$frostc$Type* $tmp1452 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1453 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1452);
bool $tmp1454 = $tmp1453.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
if ($tmp1454) goto block11; else goto block12;
block11:;
// line 663
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block12:;
// line 665
org$frostlang$frostc$Type* $tmp1455 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1456 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param2, $tmp1455);
bool $tmp1457 = $tmp1456.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
if ($tmp1457) goto block13; else goto block14;
block13:;
// line 666
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block14:;
// line 668
org$frostlang$frostc$Type$Kind* $tmp1458 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1459 = *$tmp1458;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1460;
$tmp1460 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1460->value = $tmp1459;
frost$core$Int64 $tmp1461 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1462 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1461);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1463;
$tmp1463 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1463->value = $tmp1462;
ITable* $tmp1464 = ((frost$core$Equatable*) $tmp1460)->$class->itable;
while ($tmp1464->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1464 = $tmp1464->next;
}
$fn1466 $tmp1465 = $tmp1464->methods[0];
frost$core$Bit $tmp1467 = $tmp1465(((frost$core$Equatable*) $tmp1460), ((frost$core$Equatable*) $tmp1463));
bool $tmp1468 = $tmp1467.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1463)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1460)));
if ($tmp1468) goto block17; else goto block16;
block17:;
frost$core$Bit $tmp1469 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1470 = $tmp1469.value;
if ($tmp1470) goto block15; else goto block16;
block15:;
// line 669
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block16:;
// line 671
frost$core$Bit $tmp1471 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1472 = $tmp1471.value;
if ($tmp1472) goto block20; else goto block19;
block20:;
org$frostlang$frostc$Type$Kind* $tmp1473 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1474 = *$tmp1473;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1475;
$tmp1475 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1475->value = $tmp1474;
frost$core$Int64 $tmp1476 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1477 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1476);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1478;
$tmp1478 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1478->value = $tmp1477;
ITable* $tmp1479 = ((frost$core$Equatable*) $tmp1475)->$class->itable;
while ($tmp1479->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1479 = $tmp1479->next;
}
$fn1481 $tmp1480 = $tmp1479->methods[0];
frost$core$Bit $tmp1482 = $tmp1480(((frost$core$Equatable*) $tmp1475), ((frost$core$Equatable*) $tmp1478));
bool $tmp1483 = $tmp1482.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1478)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1475)));
if ($tmp1483) goto block18; else goto block19;
block18:;
// line 672
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block19:;
// line 674
frost$core$Bit $tmp1484 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param0);
bool $tmp1485 = $tmp1484.value;
if ($tmp1485) goto block21; else goto block22;
block21:;
// line 675
org$frostlang$frostc$Type$Kind* $tmp1486 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1487 = *$tmp1486;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1488;
$tmp1488 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1488->value = $tmp1487;
frost$core$Int64 $tmp1489 = (frost$core$Int64) {5};
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
bool $tmp1496 = $tmp1495.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1491)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1488)));
if ($tmp1496) goto block23; else goto block25;
block25:;
org$frostlang$frostc$Type$Kind* $tmp1497 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1498 = *$tmp1497;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1499;
$tmp1499 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1499->value = $tmp1498;
frost$core$Int64 $tmp1500 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1501 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1500);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1502;
$tmp1502 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1502->value = $tmp1501;
ITable* $tmp1503 = ((frost$core$Equatable*) $tmp1499)->$class->itable;
while ($tmp1503->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1503 = $tmp1503->next;
}
$fn1505 $tmp1504 = $tmp1503->methods[0];
frost$core$Bit $tmp1506 = $tmp1504(((frost$core$Equatable*) $tmp1499), ((frost$core$Equatable*) $tmp1502));
bool $tmp1507 = $tmp1506.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1502)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1499)));
if ($tmp1507) goto block23; else goto block24;
block23:;
// line 676
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block24:;
// line 678
frost$core$Bit $tmp1508 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block26; else goto block27;
block26:;
// line 679
frost$core$String** $tmp1510 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1511 = *$tmp1510;
frost$core$Bit $tmp1512 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1511, &$s1513);
bool $tmp1514 = $tmp1512.value;
if ($tmp1514) goto block28; else goto block29;
block28:;
// line 680
org$frostlang$frostc$Type* $tmp1515 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
return $tmp1515;
block29:;
// line 682
org$frostlang$frostc$Type* $tmp1516 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
return $tmp1516;
block27:;
goto block22;
block22:;
// line 685
frost$core$Bit $tmp1517 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param2);
bool $tmp1518 = $tmp1517.value;
if ($tmp1518) goto block30; else goto block31;
block30:;
// line 686
org$frostlang$frostc$Type$Kind* $tmp1519 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1520 = *$tmp1519;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1521;
$tmp1521 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1521->value = $tmp1520;
frost$core$Int64 $tmp1522 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1523 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1522);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1524;
$tmp1524 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1524->value = $tmp1523;
ITable* $tmp1525 = ((frost$core$Equatable*) $tmp1521)->$class->itable;
while ($tmp1525->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1525 = $tmp1525->next;
}
$fn1527 $tmp1526 = $tmp1525->methods[0];
frost$core$Bit $tmp1528 = $tmp1526(((frost$core$Equatable*) $tmp1521), ((frost$core$Equatable*) $tmp1524));
bool $tmp1529 = $tmp1528.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1524)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1521)));
if ($tmp1529) goto block32; else goto block34;
block34:;
org$frostlang$frostc$Type$Kind* $tmp1530 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1531 = *$tmp1530;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1532;
$tmp1532 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1532->value = $tmp1531;
frost$core$Int64 $tmp1533 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1534 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1533);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1535;
$tmp1535 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1535->value = $tmp1534;
ITable* $tmp1536 = ((frost$core$Equatable*) $tmp1532)->$class->itable;
while ($tmp1536->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1536 = $tmp1536->next;
}
$fn1538 $tmp1537 = $tmp1536->methods[0];
frost$core$Bit $tmp1539 = $tmp1537(((frost$core$Equatable*) $tmp1532), ((frost$core$Equatable*) $tmp1535));
bool $tmp1540 = $tmp1539.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1535)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1532)));
if ($tmp1540) goto block32; else goto block33;
block32:;
// line 687
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block33:;
// line 689
frost$core$Bit $tmp1541 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1542 = $tmp1541.value;
if ($tmp1542) goto block35; else goto block36;
block35:;
// line 690
frost$core$String** $tmp1543 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1544 = *$tmp1543;
frost$core$Bit $tmp1545 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1544, &$s1546);
bool $tmp1547 = $tmp1545.value;
if ($tmp1547) goto block37; else goto block38;
block37:;
// line 691
org$frostlang$frostc$Type* $tmp1548 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
return $tmp1548;
block38:;
// line 693
org$frostlang$frostc$Type* $tmp1549 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1549));
return $tmp1549;
block36:;
goto block31;
block31:;
// line 696
org$frostlang$frostc$Type$Kind* $tmp1550 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1551 = *$tmp1550;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1552;
$tmp1552 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1552->value = $tmp1551;
frost$core$Int64 $tmp1553 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1554 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1553);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1555;
$tmp1555 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1555->value = $tmp1554;
ITable* $tmp1556 = ((frost$core$Equatable*) $tmp1552)->$class->itable;
while ($tmp1556->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1556 = $tmp1556->next;
}
$fn1558 $tmp1557 = $tmp1556->methods[0];
frost$core$Bit $tmp1559 = $tmp1557(((frost$core$Equatable*) $tmp1552), ((frost$core$Equatable*) $tmp1555));
bool $tmp1560 = $tmp1559.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1555)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1552)));
if ($tmp1560) goto block39; else goto block40;
block39:;
// line 697
org$frostlang$frostc$FixedArray* $tmp1561 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int64 $tmp1562 = (frost$core$Int64) {0};
frost$core$Object* $tmp1563 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1561, $tmp1562);
org$frostlang$frostc$Type* $tmp1564 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1563), param1, param2);
org$frostlang$frostc$Type* $tmp1565 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1564);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
frost$core$Frost$unref$frost$core$Object$Q($tmp1563);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
return $tmp1565;
block40:;
// line 699
org$frostlang$frostc$Type$Kind* $tmp1566 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1567 = *$tmp1566;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1568;
$tmp1568 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1568->value = $tmp1567;
frost$core$Int64 $tmp1569 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1570 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1569);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1571;
$tmp1571 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1571->value = $tmp1570;
ITable* $tmp1572 = ((frost$core$Equatable*) $tmp1568)->$class->itable;
while ($tmp1572->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1572 = $tmp1572->next;
}
$fn1574 $tmp1573 = $tmp1572->methods[0];
frost$core$Bit $tmp1575 = $tmp1573(((frost$core$Equatable*) $tmp1568), ((frost$core$Equatable*) $tmp1571));
bool $tmp1576 = $tmp1575.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1571)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1568)));
if ($tmp1576) goto block41; else goto block42;
block41:;
// line 700
org$frostlang$frostc$FixedArray* $tmp1577 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp1578 = (frost$core$Int64) {0};
frost$core$Object* $tmp1579 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1577, $tmp1578);
org$frostlang$frostc$Type* $tmp1580 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, param1, ((org$frostlang$frostc$Type*) $tmp1579));
org$frostlang$frostc$Type* $tmp1581 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1580);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
frost$core$Frost$unref$frost$core$Object$Q($tmp1579);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
return $tmp1581;
block42:;
// line 702
org$frostlang$frostc$Type* $tmp1582 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param0);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
org$frostlang$frostc$Type* $tmp1583 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
*(&local0) = $tmp1582;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
// line 703
org$frostlang$frostc$Type* $tmp1584 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param2);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
org$frostlang$frostc$Type* $tmp1585 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
*(&local1) = $tmp1584;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
// line 704
org$frostlang$frostc$Type* $tmp1586 = *(&local0);
frost$core$Bit $tmp1587 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1586);
bool $tmp1588 = $tmp1587.value;
if ($tmp1588) goto block45; else goto block44;
block45:;
org$frostlang$frostc$Type* $tmp1589 = *(&local1);
frost$core$Bit $tmp1590 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1589);
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block43; else goto block44;
block43:;
// line 705
frost$collections$HashSet* $tmp1592 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp1592);
*(&local2) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
frost$collections$HashSet* $tmp1593 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
*(&local2) = $tmp1592;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
// line 706
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1594 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
*(&local3) = param0;
// line 707
org$frostlang$frostc$Type* $tmp1595 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp1596 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1595);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
org$frostlang$frostc$ClassDecl* $tmp1597 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
*(&local4) = $tmp1596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
// line 708
goto block46;
block46:;
org$frostlang$frostc$ClassDecl* $tmp1598 = *(&local4);
frost$core$Bit $tmp1599 = frost$core$Bit$init$builtin_bit($tmp1598 != NULL);
bool $tmp1600 = $tmp1599.value;
if ($tmp1600) goto block47; else goto block48;
block47:;
// line 709
frost$collections$HashSet* $tmp1601 = *(&local2);
org$frostlang$frostc$Type* $tmp1602 = *(&local3);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp1601, ((frost$collections$Key*) $tmp1602));
// line 710
org$frostlang$frostc$ClassDecl* $tmp1603 = *(&local4);
org$frostlang$frostc$Type** $tmp1604 = &$tmp1603->rawSuper;
org$frostlang$frostc$Type* $tmp1605 = *$tmp1604;
frost$core$Bit $tmp1606 = frost$core$Bit$init$builtin_bit($tmp1605 != NULL);
bool $tmp1607 = $tmp1606.value;
if ($tmp1607) goto block49; else goto block51;
block49:;
// line 711
org$frostlang$frostc$Type* $tmp1608 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1609 = *(&local4);
org$frostlang$frostc$Type** $tmp1610 = &$tmp1609->rawSuper;
org$frostlang$frostc$Type* $tmp1611 = *$tmp1610;
org$frostlang$frostc$Type* $tmp1612 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1608, $tmp1611);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
org$frostlang$frostc$Type* $tmp1613 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
*(&local3) = $tmp1612;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
// line 712
org$frostlang$frostc$Type* $tmp1614 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1615 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1614);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1615));
org$frostlang$frostc$ClassDecl* $tmp1616 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
*(&local4) = $tmp1615;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1615));
goto block50;
block51:;
// line 1
// line 715
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1617 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block50;
block50:;
goto block46;
block48:;
// line 718
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp1618 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
*(&local3) = param2;
// line 719
org$frostlang$frostc$Type* $tmp1619 = *(&local1);
org$frostlang$frostc$ClassDecl* $tmp1620 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1619);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
org$frostlang$frostc$ClassDecl* $tmp1621 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
*(&local4) = $tmp1620;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
// line 720
goto block52;
block52:;
org$frostlang$frostc$ClassDecl* $tmp1622 = *(&local4);
frost$core$Bit $tmp1623 = frost$core$Bit$init$builtin_bit($tmp1622 != NULL);
bool $tmp1624 = $tmp1623.value;
if ($tmp1624) goto block53; else goto block54;
block53:;
// line 721
frost$collections$HashSet* $tmp1625 = *(&local2);
org$frostlang$frostc$Type* $tmp1626 = *(&local3);
frost$core$Bit $tmp1627 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp1625, ((frost$collections$Key*) $tmp1626));
bool $tmp1628 = $tmp1627.value;
if ($tmp1628) goto block55; else goto block56;
block55:;
// line 722
org$frostlang$frostc$Type* $tmp1629 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
org$frostlang$frostc$ClassDecl* $tmp1630 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1631 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1631));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1632 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
*(&local2) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$Type* $tmp1633 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1634 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1629;
block56:;
// line 724
org$frostlang$frostc$ClassDecl* $tmp1635 = *(&local4);
org$frostlang$frostc$Type** $tmp1636 = &$tmp1635->rawSuper;
org$frostlang$frostc$Type* $tmp1637 = *$tmp1636;
frost$core$Bit $tmp1638 = frost$core$Bit$init$builtin_bit($tmp1637 != NULL);
bool $tmp1639 = $tmp1638.value;
if ($tmp1639) goto block57; else goto block59;
block57:;
// line 725
org$frostlang$frostc$Type* $tmp1640 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1641 = *(&local4);
org$frostlang$frostc$Type** $tmp1642 = &$tmp1641->rawSuper;
org$frostlang$frostc$Type* $tmp1643 = *$tmp1642;
org$frostlang$frostc$Type* $tmp1644 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1640, $tmp1643);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1644));
org$frostlang$frostc$Type* $tmp1645 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
*(&local3) = $tmp1644;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1644));
// line 726
org$frostlang$frostc$Type* $tmp1646 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1647 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1646);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
org$frostlang$frostc$ClassDecl* $tmp1648 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
*(&local4) = $tmp1647;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
goto block58;
block59:;
// line 1
// line 729
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1649 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block58;
block58:;
goto block52;
block54:;
org$frostlang$frostc$ClassDecl* $tmp1650 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1651 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1652 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
*(&local2) = ((frost$collections$HashSet*) NULL);
goto block44;
block44:;
// line 733
org$frostlang$frostc$Type* $tmp1653 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
org$frostlang$frostc$Type* $tmp1654 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1655 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1653;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

// line 740
org$frostlang$frostc$Pair* $tmp1656 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param1, param0, param2);
frost$core$Bit $tmp1657 = frost$core$Bit$init$builtin_bit($tmp1656 != NULL);
bool $tmp1658 = $tmp1657.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
if ($tmp1658) goto block1; else goto block2;
block1:;
// line 741
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 743
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
org$frostlang$frostc$Type$Kind* $tmp1659 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1660 = *$tmp1659;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1661;
$tmp1661 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1661->value = $tmp1660;
frost$core$Int64 $tmp1662 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1663 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1662);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1664;
$tmp1664 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1664->value = $tmp1663;
ITable* $tmp1665 = ((frost$core$Equatable*) $tmp1661)->$class->itable;
while ($tmp1665->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1665 = $tmp1665->next;
}
$fn1667 $tmp1666 = $tmp1665->methods[1];
frost$core$Bit $tmp1668 = $tmp1666(((frost$core$Equatable*) $tmp1661), ((frost$core$Equatable*) $tmp1664));
bool $tmp1669 = $tmp1668.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1664)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1661)));
if ($tmp1669) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1670 = (frost$core$Int64) {748};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1671, $tmp1670, &$s1672);
abort(); // unreachable
block1:;
// line 749
ITable* $tmp1673 = ((frost$collections$MapView*) param1)->$class->itable;
while ($tmp1673->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1673 = $tmp1673->next;
}
$fn1675 $tmp1674 = $tmp1673->methods[0];
frost$core$Int64 $tmp1676 = $tmp1674(((frost$collections$MapView*) param1));
frost$core$Int64 $tmp1677 = (frost$core$Int64) {0};
frost$core$Bit $tmp1678 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1676, $tmp1677);
bool $tmp1679 = $tmp1678.value;
if ($tmp1679) goto block6; else goto block7;
block6:;
// line 750
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local0) = param0;
goto block3;
block7:;
// line 752
org$frostlang$frostc$Type$Kind* $tmp1680 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1681 = *$tmp1680;
frost$core$Int64 $tmp1682 = $tmp1681.$rawValue;
frost$core$Int64 $tmp1683 = (frost$core$Int64) {11};
frost$core$Bit $tmp1684 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1682, $tmp1683);
bool $tmp1685 = $tmp1684.value;
if ($tmp1685) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1686 = (frost$core$Int64) {12};
frost$core$Bit $tmp1687 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1682, $tmp1686);
bool $tmp1688 = $tmp1687.value;
if ($tmp1688) goto block9; else goto block11;
block9:;
// line 754
frost$core$String** $tmp1689 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1690 = *$tmp1689;
frost$core$Object* $tmp1691 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param1, ((frost$collections$Key*) $tmp1690));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1691)));
org$frostlang$frostc$Type* $tmp1692 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp1691);
frost$core$Frost$unref$frost$core$Object$Q($tmp1691);
// line 755
org$frostlang$frostc$Type* $tmp1693 = *(&local1);
frost$core$Bit $tmp1694 = frost$core$Bit$init$builtin_bit($tmp1693 != NULL);
bool $tmp1695 = $tmp1694.value;
if ($tmp1695) goto block12; else goto block13;
block12:;
// line 756
org$frostlang$frostc$Type* $tmp1696 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
org$frostlang$frostc$Type* $tmp1697 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp1696;
goto block3;
block13:;
// line 758
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1698 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = param0;
goto block3;
block11:;
frost$core$Int64 $tmp1699 = (frost$core$Int64) {10};
frost$core$Bit $tmp1700 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1682, $tmp1699);
bool $tmp1701 = $tmp1700.value;
if ($tmp1701) goto block14; else goto block15;
block14:;
// line 761
org$frostlang$frostc$FixedArray* $tmp1702 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int64 $tmp1703 = (frost$core$Int64) {0};
frost$core$Object* $tmp1704 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1702, $tmp1703);
org$frostlang$frostc$Type* $tmp1705 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1704), param1);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
org$frostlang$frostc$Type* $tmp1706 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
*(&local2) = $tmp1705;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
frost$core$Frost$unref$frost$core$Object$Q($tmp1704);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
// line 762
frost$collections$Array* $tmp1707 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1707);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
frost$collections$Array* $tmp1708 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
*(&local3) = $tmp1707;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
// line 763
frost$core$Int64 $tmp1709 = (frost$core$Int64) {1};
org$frostlang$frostc$FixedArray* $tmp1710 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1711 = ((frost$collections$CollectionView*) $tmp1710)->$class->itable;
while ($tmp1711->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1711 = $tmp1711->next;
}
$fn1713 $tmp1712 = $tmp1711->methods[0];
frost$core$Int64 $tmp1714 = $tmp1712(((frost$collections$CollectionView*) $tmp1710));
frost$core$Bit $tmp1715 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1716 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1709, $tmp1714, $tmp1715);
frost$core$Int64 $tmp1717 = $tmp1716.min;
*(&local4) = $tmp1717;
frost$core$Int64 $tmp1718 = $tmp1716.max;
frost$core$Bit $tmp1719 = $tmp1716.inclusive;
bool $tmp1720 = $tmp1719.value;
frost$core$Int64 $tmp1721 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1722 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1721);
if ($tmp1720) goto block19; else goto block20;
block19:;
int64_t $tmp1723 = $tmp1717.value;
int64_t $tmp1724 = $tmp1718.value;
bool $tmp1725 = $tmp1723 <= $tmp1724;
frost$core$Bit $tmp1726 = (frost$core$Bit) {$tmp1725};
bool $tmp1727 = $tmp1726.value;
if ($tmp1727) goto block16; else goto block17;
block20:;
int64_t $tmp1728 = $tmp1717.value;
int64_t $tmp1729 = $tmp1718.value;
bool $tmp1730 = $tmp1728 < $tmp1729;
frost$core$Bit $tmp1731 = (frost$core$Bit) {$tmp1730};
bool $tmp1732 = $tmp1731.value;
if ($tmp1732) goto block16; else goto block17;
block16:;
// line 764
frost$collections$Array* $tmp1733 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp1734 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int64 $tmp1735 = *(&local4);
frost$core$Object* $tmp1736 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1734, $tmp1735);
org$frostlang$frostc$Type* $tmp1737 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1736), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1733, ((frost$core$Object*) $tmp1737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
frost$core$Frost$unref$frost$core$Object$Q($tmp1736);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
goto block18;
block18:;
frost$core$Int64 $tmp1738 = *(&local4);
int64_t $tmp1739 = $tmp1718.value;
int64_t $tmp1740 = $tmp1738.value;
int64_t $tmp1741 = $tmp1739 - $tmp1740;
frost$core$Int64 $tmp1742 = (frost$core$Int64) {$tmp1741};
frost$core$UInt64 $tmp1743 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1742);
if ($tmp1720) goto block22; else goto block23;
block22:;
uint64_t $tmp1744 = $tmp1743.value;
uint64_t $tmp1745 = $tmp1722.value;
bool $tmp1746 = $tmp1744 >= $tmp1745;
frost$core$Bit $tmp1747 = (frost$core$Bit) {$tmp1746};
bool $tmp1748 = $tmp1747.value;
if ($tmp1748) goto block21; else goto block17;
block23:;
uint64_t $tmp1749 = $tmp1743.value;
uint64_t $tmp1750 = $tmp1722.value;
bool $tmp1751 = $tmp1749 > $tmp1750;
frost$core$Bit $tmp1752 = (frost$core$Bit) {$tmp1751};
bool $tmp1753 = $tmp1752.value;
if ($tmp1753) goto block21; else goto block17;
block21:;
int64_t $tmp1754 = $tmp1738.value;
int64_t $tmp1755 = $tmp1721.value;
int64_t $tmp1756 = $tmp1754 + $tmp1755;
frost$core$Int64 $tmp1757 = (frost$core$Int64) {$tmp1756};
*(&local4) = $tmp1757;
goto block16;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
// line 766
org$frostlang$frostc$Type* $tmp1758 = *(&local2);
frost$collections$Array* $tmp1759 = *(&local3);
org$frostlang$frostc$Type* $tmp1760 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1758, ((frost$collections$ListView*) $tmp1759));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
frost$collections$Array* $tmp1761 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1762 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp1760;
goto block3;
block15:;
frost$core$Int64 $tmp1763 = (frost$core$Int64) {1};
frost$core$Bit $tmp1764 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1682, $tmp1763);
bool $tmp1765 = $tmp1764.value;
if ($tmp1765) goto block24; else goto block25;
block24:;
// line 769
org$frostlang$frostc$FixedArray* $tmp1766 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int64 $tmp1767 = (frost$core$Int64) {0};
frost$core$Object* $tmp1768 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1766, $tmp1767);
org$frostlang$frostc$Type* $tmp1769 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1768), param1);
org$frostlang$frostc$Type* $tmp1770 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1769);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
frost$core$Frost$unref$frost$core$Object$Q($tmp1768);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
*(&local0) = $tmp1770;
goto block3;
block25:;
frost$core$Int64 $tmp1771 = (frost$core$Int64) {15};
frost$core$Bit $tmp1772 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1682, $tmp1771);
bool $tmp1773 = $tmp1772.value;
if ($tmp1773) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp1774 = (frost$core$Int64) {14};
frost$core$Bit $tmp1775 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1682, $tmp1774);
bool $tmp1776 = $tmp1775.value;
if ($tmp1776) goto block26; else goto block28;
block28:;
frost$core$Int64 $tmp1777 = (frost$core$Int64) {17};
frost$core$Bit $tmp1778 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1682, $tmp1777);
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block26; else goto block29;
block29:;
frost$core$Int64 $tmp1780 = (frost$core$Int64) {16};
frost$core$Bit $tmp1781 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1682, $tmp1780);
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block26; else goto block30;
block26:;
// line 772
frost$collections$Array* $tmp1783 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1783);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
frost$collections$Array* $tmp1784 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
*(&local5) = $tmp1783;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
// line 773
org$frostlang$frostc$FixedArray* $tmp1785 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1786 = ((frost$collections$CollectionView*) $tmp1785)->$class->itable;
while ($tmp1786->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1786 = $tmp1786->next;
}
$fn1788 $tmp1787 = $tmp1786->methods[0];
frost$core$Int64 $tmp1789 = $tmp1787(((frost$collections$CollectionView*) $tmp1785));
frost$core$Int64 $tmp1790 = (frost$core$Int64) {1};
int64_t $tmp1791 = $tmp1789.value;
int64_t $tmp1792 = $tmp1790.value;
bool $tmp1793 = $tmp1791 >= $tmp1792;
frost$core$Bit $tmp1794 = (frost$core$Bit) {$tmp1793};
bool $tmp1795 = $tmp1794.value;
if ($tmp1795) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp1796 = (frost$core$Int64) {773};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1797, $tmp1796);
abort(); // unreachable
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1785));
// line 774
frost$core$Int64 $tmp1798 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp1799 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1800 = ((frost$collections$CollectionView*) $tmp1799)->$class->itable;
while ($tmp1800->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1800 = $tmp1800->next;
}
$fn1802 $tmp1801 = $tmp1800->methods[0];
frost$core$Int64 $tmp1803 = $tmp1801(((frost$collections$CollectionView*) $tmp1799));
frost$core$Int64 $tmp1804 = (frost$core$Int64) {1};
int64_t $tmp1805 = $tmp1803.value;
int64_t $tmp1806 = $tmp1804.value;
int64_t $tmp1807 = $tmp1805 - $tmp1806;
frost$core$Int64 $tmp1808 = (frost$core$Int64) {$tmp1807};
frost$core$Bit $tmp1809 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1810 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1798, $tmp1808, $tmp1809);
frost$core$Int64 $tmp1811 = $tmp1810.min;
*(&local6) = $tmp1811;
frost$core$Int64 $tmp1812 = $tmp1810.max;
frost$core$Bit $tmp1813 = $tmp1810.inclusive;
bool $tmp1814 = $tmp1813.value;
frost$core$Int64 $tmp1815 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1816 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1815);
if ($tmp1814) goto block36; else goto block37;
block36:;
int64_t $tmp1817 = $tmp1811.value;
int64_t $tmp1818 = $tmp1812.value;
bool $tmp1819 = $tmp1817 <= $tmp1818;
frost$core$Bit $tmp1820 = (frost$core$Bit) {$tmp1819};
bool $tmp1821 = $tmp1820.value;
if ($tmp1821) goto block33; else goto block34;
block37:;
int64_t $tmp1822 = $tmp1811.value;
int64_t $tmp1823 = $tmp1812.value;
bool $tmp1824 = $tmp1822 < $tmp1823;
frost$core$Bit $tmp1825 = (frost$core$Bit) {$tmp1824};
bool $tmp1826 = $tmp1825.value;
if ($tmp1826) goto block33; else goto block34;
block33:;
// line 775
frost$collections$Array* $tmp1827 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp1828 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int64 $tmp1829 = *(&local6);
frost$core$Object* $tmp1830 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1828, $tmp1829);
org$frostlang$frostc$Type* $tmp1831 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1830), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1827, ((frost$core$Object*) $tmp1831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
frost$core$Frost$unref$frost$core$Object$Q($tmp1830);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
goto block35;
block35:;
frost$core$Int64 $tmp1832 = *(&local6);
int64_t $tmp1833 = $tmp1812.value;
int64_t $tmp1834 = $tmp1832.value;
int64_t $tmp1835 = $tmp1833 - $tmp1834;
frost$core$Int64 $tmp1836 = (frost$core$Int64) {$tmp1835};
frost$core$UInt64 $tmp1837 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1836);
if ($tmp1814) goto block39; else goto block40;
block39:;
uint64_t $tmp1838 = $tmp1837.value;
uint64_t $tmp1839 = $tmp1816.value;
bool $tmp1840 = $tmp1838 >= $tmp1839;
frost$core$Bit $tmp1841 = (frost$core$Bit) {$tmp1840};
bool $tmp1842 = $tmp1841.value;
if ($tmp1842) goto block38; else goto block34;
block40:;
uint64_t $tmp1843 = $tmp1837.value;
uint64_t $tmp1844 = $tmp1816.value;
bool $tmp1845 = $tmp1843 > $tmp1844;
frost$core$Bit $tmp1846 = (frost$core$Bit) {$tmp1845};
bool $tmp1847 = $tmp1846.value;
if ($tmp1847) goto block38; else goto block34;
block38:;
int64_t $tmp1848 = $tmp1832.value;
int64_t $tmp1849 = $tmp1815.value;
int64_t $tmp1850 = $tmp1848 + $tmp1849;
frost$core$Int64 $tmp1851 = (frost$core$Int64) {$tmp1850};
*(&local6) = $tmp1851;
goto block33;
block34:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
// line 777
org$frostlang$frostc$Position* $tmp1852 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp1853 = *$tmp1852;
org$frostlang$frostc$Type$Kind* $tmp1854 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1855 = *$tmp1854;
frost$collections$Array* $tmp1856 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp1857 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
org$frostlang$frostc$FixedArray* $tmp1858 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1859 = ((frost$collections$CollectionView*) $tmp1858)->$class->itable;
while ($tmp1859->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1859 = $tmp1859->next;
}
$fn1861 $tmp1860 = $tmp1859->methods[0];
frost$core$Int64 $tmp1862 = $tmp1860(((frost$collections$CollectionView*) $tmp1858));
frost$core$Int64 $tmp1863 = (frost$core$Int64) {1};
int64_t $tmp1864 = $tmp1862.value;
int64_t $tmp1865 = $tmp1863.value;
int64_t $tmp1866 = $tmp1864 - $tmp1865;
frost$core$Int64 $tmp1867 = (frost$core$Int64) {$tmp1866};
frost$core$Object* $tmp1868 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1857, $tmp1867);
org$frostlang$frostc$Type* $tmp1869 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1868), param1);
frost$core$Int64* $tmp1870 = &param0->priority;
frost$core$Int64 $tmp1871 = *$tmp1870;
org$frostlang$frostc$Type* $tmp1872 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1853, $tmp1855, ((frost$collections$ListView*) $tmp1856), $tmp1869, $tmp1871);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
frost$core$Frost$unref$frost$core$Object$Q($tmp1868);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$collections$Array* $tmp1873 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
*(&local5) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp1872;
goto block3;
block30:;
// line 781
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local0) = param0;
goto block3;
block8:;
goto block41;
block41:;
block3:;
org$frostlang$frostc$Type* $tmp1874 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp1875 = &$tmp1874->typeKind;
org$frostlang$frostc$Type$Kind $tmp1876 = *$tmp1875;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1877;
$tmp1877 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1877->value = $tmp1876;
frost$core$Int64 $tmp1878 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1879 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1878);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1880;
$tmp1880 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1880->value = $tmp1879;
ITable* $tmp1881 = ((frost$core$Equatable*) $tmp1877)->$class->itable;
while ($tmp1881->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1881 = $tmp1881->next;
}
$fn1883 $tmp1882 = $tmp1881->methods[1];
frost$core$Bit $tmp1884 = $tmp1882(((frost$core$Equatable*) $tmp1877), ((frost$core$Equatable*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1880)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1877)));
bool $tmp1885 = $tmp1884.value;
if ($tmp1885) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp1886 = *(&local0);
return $tmp1886;
block5:;
frost$core$Int64 $tmp1887 = (frost$core$Int64) {748};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1888, $tmp1887, &$s1889);
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frostc$Type$get_hash$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

// line 788
frost$core$String** $tmp1890 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1891 = *$tmp1890;
ITable* $tmp1892 = ((frost$collections$Key*) $tmp1891)->$class->itable;
while ($tmp1892->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp1892 = $tmp1892->next;
}
$fn1894 $tmp1893 = $tmp1892->methods[0];
frost$core$Int64 $tmp1895 = $tmp1893(((frost$collections$Key*) $tmp1891));
return $tmp1895;

}
frost$core$String* org$frostlang$frostc$Type$get_asString$R$frost$core$String(org$frostlang$frostc$Type* param0) {

// line 793
frost$core$String** $tmp1896 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1897 = *$tmp1896;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
return $tmp1897;

}
void org$frostlang$frostc$Type$cleanup(org$frostlang$frostc$Type* param0) {

// line 4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$FixedArray** $tmp1898 = &param0->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1899 = *$tmp1898;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
frost$core$Weak** $tmp1900 = &param0->genericClassParameter;
frost$core$Weak* $tmp1901 = *$tmp1900;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
frost$core$Weak** $tmp1902 = &param0->genericMethodParameter;
frost$core$Weak* $tmp1903 = *$tmp1902;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
org$frostlang$frostc$MethodRef** $tmp1904 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp1905 = *$tmp1904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
return;

}

