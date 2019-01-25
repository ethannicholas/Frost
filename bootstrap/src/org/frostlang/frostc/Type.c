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
typedef frost$collections$Iterator* (*$fn379)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn383)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn388)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn437)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn441)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn446)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn494)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn519)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn530)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn542)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn569)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1007)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1019)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1030)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1041)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1053)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1065)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1080)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1136)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1183)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1193)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1219)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1234)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1245)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1256)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1267)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1277)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1292)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1303)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1314)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1325)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1338)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1364)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1375)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1386)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1397)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1409)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1430)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1445)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1463)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1478)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1491)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1502)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1524)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1535)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1555)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1572)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1663)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1671)(frost$collections$MapView*);
typedef frost$core$Int64 (*$fn1711)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1789)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1804)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1866)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1888)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1899)(frost$collections$Key*);

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
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static frost$core$String $s589 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, 1146821029976304283, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 5148459585349422950, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 1492063599391574064, NULL };
static frost$core$String $s619 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -3824106974697578343, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 16, -3824106976449029430, NULL };
static frost$core$String $s637 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5545501573009681362, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static frost$core$String $s652 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static frost$core$String $s672 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static frost$core$String $s693 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -3508042023529884901, NULL };
static frost$core$String $s699 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s705 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s711 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s717 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -3824106974826345712, NULL };
static frost$core$String $s723 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s729 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, 1146821090439666569, NULL };
static frost$core$String $s735 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, 1146821061809580773, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, 1146821061809581078, NULL };
static frost$core$String $s753 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -3824106976667626414, NULL };
static frost$core$String $s759 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, 1146820904470315469, NULL };
static frost$core$String $s765 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, 1146820904470315667, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s775 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static frost$core$String $s777 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s795 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static frost$core$String $s797 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static frost$core$String $s820 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 4906885815162678826, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, -3824106976344999226, NULL };
static frost$core$String $s844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, 1146821009278619293, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -7013691227705711665, NULL };
static frost$core$String $s859 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s868 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s885 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s897 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s909 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 3644790808526678741, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -3824106975113800959, NULL };
static frost$core$String $s953 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s975 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s990 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -3508042023517899272, NULL };
static frost$core$String $s996 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1071 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1086 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1091 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, -3508042023536129774, NULL };
static frost$core$String $s1166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s1170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, 1146821061406687137, NULL };
static frost$core$String $s1174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -4916982935192335398, NULL };
static frost$core$String $s1204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s1271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 97, -2976789655376824909, NULL };
static frost$core$String $s1351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 119, 5693748891149284325, NULL };
static frost$core$String $s1401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1510 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1543 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x36\x34", 2, 15707, NULL };
static frost$core$String $s1667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1668 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 168, 1028753922056655266, NULL };
static frost$core$String $s1798 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1893 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 169, -7857031125004373715, NULL };

void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3) {

// line 77
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(param0, param1, param2, param3, $tmp2);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$core$Bit param4) {

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
frost$core$Int64 $tmp65 = (frost$core$Int64) {83};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s66, $tmp65, &$s67);
abort(); // unreachable
block1:;
// line 84
org$frostlang$frostc$Type$Kind* $tmp68 = &param0->typeKind;
*$tmp68 = param2;
// line 85
org$frostlang$frostc$Position* $tmp69 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp69 = param3;
// line 86
frost$core$Bit* $tmp70 = &param0->resolved;
*$tmp70 = param4;
// line 87
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp71 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp72 = *$tmp71;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlang$frostc$FixedArray** $tmp73 = &param0->subtypes;
*$tmp73 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 88
frost$core$Int64 $tmp74 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp75 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp74);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp75, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, frost$core$Int64 param3) {

// line 37
frost$core$Weak* $tmp76 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp76, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Weak** $tmp77 = &param0->genericClassParameter;
frost$core$Weak* $tmp78 = *$tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$Weak** $tmp79 = &param0->genericClassParameter;
*$tmp79 = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// line 40
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
frost$core$Int64 $tmp138 = (frost$core$Int64) {94};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s139, $tmp138, &$s140);
abort(); // unreachable
block1:;
// line 95
frost$core$Bit $tmp141 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s142);
frost$core$Bit $tmp143 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp141);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp145 = (frost$core$Int64) {95};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s146, $tmp145);
abort(); // unreachable
block8:;
// line 96
org$frostlang$frostc$Type$Kind* $tmp147 = &param0->typeKind;
*$tmp147 = param2;
// line 97
org$frostlang$frostc$Position $tmp148 = org$frostlang$frostc$Position$init$frost$core$Int64$frost$core$Int64(param3, param3);
org$frostlang$frostc$Position* $tmp149 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp149 = $tmp148;
// line 98
frost$core$Bit $tmp150 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp151 = &param0->resolved;
*$tmp151 = $tmp150;
// line 99
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp152 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp153 = *$tmp152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
org$frostlang$frostc$FixedArray** $tmp154 = &param0->subtypes;
*$tmp154 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 100
frost$core$Int64 $tmp155 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp156 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp155);
org$frostlang$frostc$Position* $tmp157 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp158 = *$tmp157;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp156, $tmp158, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5) {

// line 104
frost$core$Int64 $tmp159 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64(param0, param1, param2, param3, param4, param5, $tmp159);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5, frost$core$Int64 param6) {

// line 37
frost$core$Weak* $tmp160 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp160, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$core$Weak** $tmp161 = &param0->genericClassParameter;
frost$core$Weak* $tmp162 = *$tmp161;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Weak** $tmp163 = &param0->genericClassParameter;
*$tmp163 = $tmp160;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
// line 40
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
frost$core$Int64 $tmp186 = (frost$core$Int64) {108};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s187, $tmp186, &$s188);
abort(); // unreachable
block1:;
// line 110
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
frost$core$Int64 $tmp201 = (frost$core$Int64) {110};
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
// line 112
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
frost$core$Int64 $tmp231 = (frost$core$Int64) {112};
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
// line 114
org$frostlang$frostc$Type$Kind* $tmp249 = &param0->typeKind;
*$tmp249 = param2;
// line 115
org$frostlang$frostc$Position* $tmp250 = &((org$frostlang$frostc$Symbol*) param0)->position;
*$tmp250 = param3;
// line 116
frost$core$Bit* $tmp251 = &param0->resolved;
*$tmp251 = param5;
// line 117
frost$core$Int64* $tmp252 = &param0->priority;
*$tmp252 = param6;
// line 118
org$frostlang$frostc$FixedArray* $tmp253 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp253, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
org$frostlang$frostc$FixedArray** $tmp254 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp255 = *$tmp254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
org$frostlang$frostc$FixedArray** $tmp256 = &param0->subtypes;
*$tmp256 = $tmp253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// line 119
frost$core$Int64 $tmp257 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp258 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp257);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp258, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter(org$frostlang$frostc$Type* param0, org$frostlang$frostc$ClassDecl$GenericParameter* param1) {

// line 37
frost$core$Weak* $tmp259 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp259, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Weak** $tmp260 = &param0->genericClassParameter;
frost$core$Weak* $tmp261 = *$tmp260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Weak** $tmp262 = &param0->genericClassParameter;
*$tmp262 = $tmp259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// line 40
frost$core$Weak* $tmp263 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp263, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Weak** $tmp264 = &param0->genericMethodParameter;
frost$core$Weak* $tmp265 = *$tmp264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
frost$core$Weak** $tmp266 = &param0->genericMethodParameter;
*$tmp266 = $tmp263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// line 123
frost$core$Int64 $tmp267 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp268 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp267);
org$frostlang$frostc$Type$Kind* $tmp269 = &param0->typeKind;
*$tmp269 = $tmp268;
// line 124
frost$core$Weak* $tmp270 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp270, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Weak** $tmp271 = &param0->genericClassParameter;
frost$core$Weak* $tmp272 = *$tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Weak** $tmp273 = &param0->genericClassParameter;
*$tmp273 = $tmp270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// line 125
frost$core$Bit $tmp274 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp275 = &param0->resolved;
*$tmp275 = $tmp274;
// line 126
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp276 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp277 = *$tmp276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
org$frostlang$frostc$FixedArray** $tmp278 = &param0->subtypes;
*$tmp278 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 127
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

// line 37
frost$core$Weak* $tmp293 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp293, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Weak** $tmp294 = &param0->genericClassParameter;
frost$core$Weak* $tmp295 = *$tmp294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$core$Weak** $tmp296 = &param0->genericClassParameter;
*$tmp296 = $tmp293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// line 40
frost$core$Weak* $tmp297 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp297, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Weak** $tmp298 = &param0->genericMethodParameter;
frost$core$Weak* $tmp299 = *$tmp298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Weak** $tmp300 = &param0->genericMethodParameter;
*$tmp300 = $tmp297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
// line 131
frost$core$Int64 $tmp301 = (frost$core$Int64) {12};
org$frostlang$frostc$Type$Kind $tmp302 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp301);
org$frostlang$frostc$Type$Kind* $tmp303 = &param0->typeKind;
*$tmp303 = $tmp302;
// line 132
frost$core$Weak* $tmp304 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp304, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Weak** $tmp305 = &param0->genericMethodParameter;
frost$core$Weak* $tmp306 = *$tmp305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Weak** $tmp307 = &param0->genericMethodParameter;
*$tmp307 = $tmp304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// line 133
frost$core$Bit $tmp308 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp309 = &param0->resolved;
*$tmp309 = $tmp308;
// line 134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL)));
org$frostlang$frostc$FixedArray** $tmp310 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp311 = *$tmp310;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
org$frostlang$frostc$FixedArray** $tmp312 = &param0->subtypes;
*$tmp312 = ((org$frostlang$frostc$FixedArray*) NULL);
// line 135
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

// line 37
frost$core$Weak* $tmp327 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp327, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Weak** $tmp328 = &param0->genericClassParameter;
frost$core$Weak* $tmp329 = *$tmp328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Weak** $tmp330 = &param0->genericClassParameter;
*$tmp330 = $tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// line 40
frost$core$Weak* $tmp331 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp331, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Weak** $tmp332 = &param0->genericMethodParameter;
frost$core$Weak* $tmp333 = *$tmp332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Weak** $tmp334 = &param0->genericMethodParameter;
*$tmp334 = $tmp331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// line 139
org$frostlang$frostc$Type** $tmp335 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp336 = *$tmp335;
org$frostlang$frostc$Type$Kind* $tmp337 = &$tmp336->typeKind;
org$frostlang$frostc$Type$Kind $tmp338 = *$tmp337;
org$frostlang$frostc$Type$Kind* $tmp339 = &param0->typeKind;
*$tmp339 = $tmp338;
// line 140
org$frostlang$frostc$Type** $tmp340 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp341 = *$tmp340;
org$frostlang$frostc$FixedArray** $tmp342 = &$tmp341->subtypes;
org$frostlang$frostc$FixedArray* $tmp343 = *$tmp342;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
org$frostlang$frostc$FixedArray** $tmp344 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp345 = *$tmp344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
org$frostlang$frostc$FixedArray** $tmp346 = &param0->subtypes;
*$tmp346 = $tmp343;
// line 141
org$frostlang$frostc$Type** $tmp347 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp348 = *$tmp347;
frost$core$Bit* $tmp349 = &$tmp348->resolved;
frost$core$Bit $tmp350 = *$tmp349;
frost$core$Bit* $tmp351 = &param0->resolved;
*$tmp351 = $tmp350;
// line 142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodRef** $tmp352 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp353 = *$tmp352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
org$frostlang$frostc$MethodRef** $tmp354 = &param0->methodRef;
*$tmp354 = param1;
// line 143
frost$core$Int64 $tmp355 = (frost$core$Int64) {8};
org$frostlang$frostc$Symbol$Kind $tmp356 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp355);
org$frostlang$frostc$Type** $tmp357 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp358 = *$tmp357;
org$frostlang$frostc$Position* $tmp359 = &((org$frostlang$frostc$Symbol*) $tmp358)->position;
org$frostlang$frostc$Position $tmp360 = *$tmp359;
org$frostlang$frostc$Type** $tmp361 = &param1->effectiveType;
org$frostlang$frostc$Type* $tmp362 = *$tmp361;
frost$core$String** $tmp363 = &((org$frostlang$frostc$Symbol*) $tmp362)->name;
frost$core$String* $tmp364 = *$tmp363;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp356, $tmp360, $tmp364);
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
frost$core$Bit* $tmp365 = &param0->resolved;
frost$core$Bit $tmp366 = *$tmp365;
*(&local0) = $tmp366;
// line 149
frost$core$MutableString* $tmp367 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp367);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$core$MutableString* $tmp368 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local1) = $tmp367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
// line 150
frost$core$MutableString* $tmp369 = *(&local1);
frost$core$String** $tmp370 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp371 = *$tmp370;
frost$core$MutableString$append$frost$core$String($tmp369, $tmp371);
// line 151
frost$core$MutableString* $tmp372 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp372, &$s373);
// line 152
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s374));
frost$core$String* $tmp375 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
*(&local2) = &$s376;
// line 153
ITable* $tmp377 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp377->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp377 = $tmp377->next;
}
$fn379 $tmp378 = $tmp377->methods[0];
frost$collections$Iterator* $tmp380 = $tmp378(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp381 = $tmp380->$class->itable;
while ($tmp381->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp381 = $tmp381->next;
}
$fn383 $tmp382 = $tmp381->methods[0];
frost$core$Bit $tmp384 = $tmp382($tmp380);
bool $tmp385 = $tmp384.value;
if ($tmp385) goto block3; else goto block2;
block2:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp386 = $tmp380->$class->itable;
while ($tmp386->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp386 = $tmp386->next;
}
$fn388 $tmp387 = $tmp386->methods[1];
frost$core$Object* $tmp389 = $tmp387($tmp380);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp389)));
org$frostlang$frostc$Type* $tmp390 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp389);
// line 154
frost$core$Bit $tmp391 = *(&local0);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp393 = *(&local3);
frost$core$Bit* $tmp394 = &$tmp393->resolved;
frost$core$Bit $tmp395 = *$tmp394;
*(&local4) = $tmp395;
goto block6;
block5:;
*(&local4) = $tmp391;
goto block6;
block6:;
frost$core$Bit $tmp396 = *(&local4);
*(&local0) = $tmp396;
// line 155
frost$core$MutableString* $tmp397 = *(&local1);
frost$core$String* $tmp398 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp397, $tmp398);
// line 156
frost$core$MutableString* $tmp399 = *(&local1);
org$frostlang$frostc$Type* $tmp400 = *(&local3);
frost$core$String** $tmp401 = &((org$frostlang$frostc$Symbol*) $tmp400)->name;
frost$core$String* $tmp402 = *$tmp401;
frost$core$MutableString$append$frost$core$String($tmp399, $tmp402);
// line 157
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s403));
frost$core$String* $tmp404 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local2) = &$s405;
frost$core$Frost$unref$frost$core$Object$Q($tmp389);
org$frostlang$frostc$Type* $tmp406 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
// line 159
frost$core$MutableString* $tmp407 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp407, &$s408);
// line 160
frost$collections$Array* $tmp409 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp409);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$collections$Array* $tmp410 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local5) = $tmp409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
// line 161
frost$collections$Array* $tmp411 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp411, ((frost$core$Object*) param0));
// line 162
frost$collections$Array* $tmp412 = *(&local5);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp412, ((frost$collections$CollectionView*) param1));
// line 163
org$frostlang$frostc$Type* $tmp413 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp414 = *(&local1);
frost$core$String* $tmp415 = frost$core$MutableString$finish$R$frost$core$String($tmp414);
frost$core$Int64 $tmp416 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp417 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp416);
org$frostlang$frostc$Position* $tmp418 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp419 = *$tmp418;
frost$collections$Array* $tmp420 = *(&local5);
frost$core$Bit $tmp421 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp413, $tmp415, $tmp417, $tmp419, ((frost$collections$ListView*) $tmp420), $tmp421);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$collections$Array* $tmp422 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp423 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp424 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp413;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Position param0, org$frostlang$frostc$Type$Kind param1, frost$collections$ListView* param2, org$frostlang$frostc$Type* param3, frost$core$Int64 param4) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Bit local5;
// line 169
frost$core$Bit* $tmp425 = &param3->resolved;
frost$core$Bit $tmp426 = *$tmp425;
*(&local0) = $tmp426;
// line 170
frost$core$MutableString* $tmp427 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp427, &$s428);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
frost$core$MutableString* $tmp429 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local1) = $tmp427;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
// line 171
frost$collections$Array* $tmp430 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp430);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
frost$collections$Array* $tmp431 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local2) = $tmp430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
// line 172
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s432));
frost$core$String* $tmp433 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local3) = &$s434;
// line 173
ITable* $tmp435 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp435->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp435 = $tmp435->next;
}
$fn437 $tmp436 = $tmp435->methods[0];
frost$collections$Iterator* $tmp438 = $tmp436(((frost$collections$Iterable*) param2));
goto block1;
block1:;
ITable* $tmp439 = $tmp438->$class->itable;
while ($tmp439->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp439 = $tmp439->next;
}
$fn441 $tmp440 = $tmp439->methods[0];
frost$core$Bit $tmp442 = $tmp440($tmp438);
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block3; else goto block2;
block2:;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp444 = $tmp438->$class->itable;
while ($tmp444->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp444 = $tmp444->next;
}
$fn446 $tmp445 = $tmp444->methods[1];
frost$core$Object* $tmp447 = $tmp445($tmp438);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp447)));
org$frostlang$frostc$Type* $tmp448 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp447);
// line 174
frost$collections$Array* $tmp449 = *(&local2);
org$frostlang$frostc$Type* $tmp450 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp449, ((frost$core$Object*) $tmp450));
// line 175
frost$core$Bit $tmp451 = *(&local0);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp453 = *(&local4);
frost$core$Bit* $tmp454 = &$tmp453->resolved;
frost$core$Bit $tmp455 = *$tmp454;
*(&local5) = $tmp455;
goto block6;
block5:;
*(&local5) = $tmp451;
goto block6;
block6:;
frost$core$Bit $tmp456 = *(&local5);
*(&local0) = $tmp456;
// line 176
frost$core$MutableString* $tmp457 = *(&local1);
frost$core$String* $tmp458 = *(&local3);
frost$core$MutableString$append$frost$core$String($tmp457, $tmp458);
// line 177
frost$core$MutableString* $tmp459 = *(&local1);
org$frostlang$frostc$Type* $tmp460 = *(&local4);
frost$core$String** $tmp461 = &((org$frostlang$frostc$Symbol*) $tmp460)->name;
frost$core$String* $tmp462 = *$tmp461;
frost$core$MutableString$append$frost$core$String($tmp459, $tmp462);
// line 178
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s463));
frost$core$String* $tmp464 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local3) = &$s465;
frost$core$Frost$unref$frost$core$Object$Q($tmp447);
org$frostlang$frostc$Type* $tmp466 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
// line 180
frost$core$Int64 $tmp467 = param1.$rawValue;
frost$core$Int64 $tmp468 = (frost$core$Int64) {14};
frost$core$Bit $tmp469 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp467, $tmp468);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block8; else goto block9;
block8:;
// line 182
frost$core$MutableString* $tmp471 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp471, &$s472);
goto block7;
block9:;
frost$core$Int64 $tmp473 = (frost$core$Int64) {15};
frost$core$Bit $tmp474 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp467, $tmp473);
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block10; else goto block11;
block10:;
// line 185
frost$core$MutableString* $tmp476 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp476, &$s477);
goto block7;
block11:;
frost$core$Int64 $tmp478 = (frost$core$Int64) {16};
frost$core$Bit $tmp479 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp467, $tmp478);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block12; else goto block13;
block12:;
// line 188
frost$core$MutableString* $tmp481 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp481, &$s482);
goto block7;
block13:;
frost$core$Int64 $tmp483 = (frost$core$Int64) {17};
frost$core$Bit $tmp484 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp467, $tmp483);
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block14; else goto block15;
block14:;
// line 191
frost$core$MutableString* $tmp486 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp486, &$s487);
goto block7;
block15:;
// line 194
frost$core$Int64 $tmp488 = (frost$core$Int64) {194};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s489, $tmp488);
abort(); // unreachable
block7:;
// line 197
frost$collections$Array* $tmp490 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp490, ((frost$core$Object*) param3));
// line 198
org$frostlang$frostc$Type* $tmp491 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp492 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp492->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp492 = $tmp492->next;
}
$fn494 $tmp493 = $tmp492->methods[1];
frost$core$Bit $tmp495 = $tmp493(((frost$core$Equatable*) param3), ((frost$core$Equatable*) $tmp491));
bool $tmp496 = $tmp495.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
if ($tmp496) goto block16; else goto block17;
block16:;
// line 199
frost$core$MutableString* $tmp497 = *(&local1);
frost$core$String** $tmp498 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp499 = *$tmp498;
frost$core$MutableString$append$frost$core$String($tmp497, $tmp499);
goto block17;
block17:;
// line 201
frost$core$MutableString* $tmp500 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp500, &$s501);
// line 202
org$frostlang$frostc$Type* $tmp502 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$MutableString* $tmp503 = *(&local1);
frost$core$String* $tmp504 = frost$core$MutableString$finish$R$frost$core$String($tmp503);
frost$collections$Array* $tmp505 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp506 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp505);
frost$core$Bit $tmp507 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64($tmp502, $tmp504, param1, param0, ((frost$collections$ListView*) $tmp506), $tmp507, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$String* $tmp508 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp509 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$MutableString* $tmp510 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp502;

}
frost$core$Int64 org$frostlang$frostc$Type$get_size$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
// line 207
org$frostlang$frostc$Type$Kind* $tmp511 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp512 = *$tmp511;
org$frostlang$frostc$Type$Kind$wrapper* $tmp513;
$tmp513 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp513->value = $tmp512;
frost$core$Int64 $tmp514 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp515 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp514);
org$frostlang$frostc$Type$Kind$wrapper* $tmp516;
$tmp516 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp516->value = $tmp515;
ITable* $tmp517 = ((frost$core$Equatable*) $tmp513)->$class->itable;
while ($tmp517->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp517 = $tmp517->next;
}
$fn519 $tmp518 = $tmp517->methods[0];
frost$core$Bit $tmp520 = $tmp518(((frost$core$Equatable*) $tmp513), ((frost$core$Equatable*) $tmp516));
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block1; else goto block2;
block1:;
*(&local1) = $tmp520;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp522 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp523 = *$tmp522;
org$frostlang$frostc$Type$Kind$wrapper* $tmp524;
$tmp524 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp524->value = $tmp523;
frost$core$Int64 $tmp525 = (frost$core$Int64) {3};
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp527)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp524)));
*(&local1) = $tmp531;
goto block3;
block3:;
frost$core$Bit $tmp532 = *(&local1);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block4; else goto block5;
block4:;
*(&local0) = $tmp532;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp534 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp535 = *$tmp534;
org$frostlang$frostc$Type$Kind$wrapper* $tmp536;
$tmp536 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp536->value = $tmp535;
frost$core$Int64 $tmp537 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp538 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp537);
org$frostlang$frostc$Type$Kind$wrapper* $tmp539;
$tmp539 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp539->value = $tmp538;
ITable* $tmp540 = ((frost$core$Equatable*) $tmp536)->$class->itable;
while ($tmp540->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp540 = $tmp540->next;
}
$fn542 $tmp541 = $tmp540->methods[0];
frost$core$Bit $tmp543 = $tmp541(((frost$core$Equatable*) $tmp536), ((frost$core$Equatable*) $tmp539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp539)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp536)));
*(&local0) = $tmp543;
goto block6;
block6:;
frost$core$Bit $tmp544 = *(&local0);
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp546 = (frost$core$Int64) {207};
frost$core$String* $tmp547 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s548, ((frost$core$Object*) param0));
frost$core$String* $tmp549 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp547, &$s550);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s551, $tmp546, $tmp549);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
abort(); // unreachable
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp516)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp513)));
// line 209
org$frostlang$frostc$Position* $tmp552 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp553 = *$tmp552;
frost$core$Int64 $tmp554 = $tmp553.line;
return $tmp554;

}
frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$core$Bit local0;
// line 219
frost$core$String** $tmp555 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp556 = *$tmp555;
frost$core$String** $tmp557 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp558 = *$tmp557;
frost$core$Bit $tmp559 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp556, $tmp558);
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Type$Kind* $tmp561 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp562 = *$tmp561;
org$frostlang$frostc$Type$Kind$wrapper* $tmp563;
$tmp563 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp563->value = $tmp562;
org$frostlang$frostc$Type$Kind* $tmp564 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp565 = *$tmp564;
org$frostlang$frostc$Type$Kind$wrapper* $tmp566;
$tmp566 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp566->value = $tmp565;
ITable* $tmp567 = ((frost$core$Equatable*) $tmp563)->$class->itable;
while ($tmp567->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp567 = $tmp567->next;
}
$fn569 $tmp568 = $tmp567->methods[0];
frost$core$Bit $tmp570 = $tmp568(((frost$core$Equatable*) $tmp563), ((frost$core$Equatable*) $tmp566));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp566)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp563)));
*(&local0) = $tmp570;
goto block3;
block2:;
*(&local0) = $tmp559;
goto block3;
block3:;
frost$core$Bit $tmp571 = *(&local0);
return $tmp571;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type() {

// line 224
org$frostlang$frostc$Type* $tmp572 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp573 = (frost$core$Int64) {4};
org$frostlang$frostc$Type$Kind $tmp574 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp573);
org$frostlang$frostc$Position $tmp575 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp576 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp572, &$s577, $tmp574, $tmp575, $tmp576);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
return $tmp572;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type() {

// line 229
org$frostlang$frostc$Type* $tmp578 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp579 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp580 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp579);
org$frostlang$frostc$Position $tmp581 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp582 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp578, &$s583, $tmp580, $tmp581, $tmp582);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
return $tmp578;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type() {

// line 234
org$frostlang$frostc$Type* $tmp584 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp585 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp586 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp585);
org$frostlang$frostc$Position $tmp587 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp588 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp584, &$s589, $tmp586, $tmp587, $tmp588);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
return $tmp584;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type() {

frost$collections$Array* local0 = NULL;
// line 239
frost$collections$Array* $tmp590 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp590);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$collections$Array* $tmp591 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local0) = $tmp590;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
// line 240
frost$collections$Array* $tmp592 = *(&local0);
org$frostlang$frostc$Type* $tmp593 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp592, ((frost$core$Object*) $tmp593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
// line 241
org$frostlang$frostc$Type* $tmp594 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp595 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp596 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp595);
org$frostlang$frostc$Position $tmp597 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp598 = *(&local0);
frost$core$Bit $tmp599 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp594, &$s600, $tmp596, $tmp597, ((frost$collections$ListView*) $tmp598), $tmp599);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$collections$Array* $tmp601 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp594;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type() {

// line 246
org$frostlang$frostc$Type* $tmp602 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp603 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp604 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp603);
org$frostlang$frostc$Position $tmp605 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp606 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp602, &$s607, $tmp604, $tmp605, $tmp606);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
return $tmp602;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Immutable$R$org$frostlang$frostc$Type() {

// line 251
org$frostlang$frostc$Type* $tmp608 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp609 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp610 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp609);
org$frostlang$frostc$Position $tmp611 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp612 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp608, &$s613, $tmp610, $tmp611, $tmp612);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
return $tmp608;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type() {

// line 256
org$frostlang$frostc$Type* $tmp614 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp615 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp616 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp615);
org$frostlang$frostc$Position $tmp617 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp618 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp614, &$s619, $tmp616, $tmp617, $tmp618);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
return $tmp614;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type() {

// line 261
org$frostlang$frostc$Type* $tmp620 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp621 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp622 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp621);
org$frostlang$frostc$Position $tmp623 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp624 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp620, &$s625, $tmp622, $tmp623, $tmp624);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
return $tmp620;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type() {

// line 266
org$frostlang$frostc$Type* $tmp626 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp627 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp628 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp627);
org$frostlang$frostc$Position $tmp629 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp630 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp626, &$s631, $tmp628, $tmp629, $tmp630);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
return $tmp626;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RegularExpression$R$org$frostlang$frostc$Type() {

// line 271
org$frostlang$frostc$Type* $tmp632 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp633 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp634 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp633);
org$frostlang$frostc$Position $tmp635 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp636 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp632, &$s637, $tmp634, $tmp635, $tmp636);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
return $tmp632;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt8$R$org$frostlang$frostc$Type() {

// line 276
org$frostlang$frostc$Type* $tmp638 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp639 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp640 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp639);
frost$core$Int64 $tmp641 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp638, &$s642, $tmp640, $tmp641);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
return $tmp638;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt16$R$org$frostlang$frostc$Type() {

// line 281
org$frostlang$frostc$Type* $tmp643 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp644 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp645 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp644);
frost$core$Int64 $tmp646 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp643, &$s647, $tmp645, $tmp646);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
return $tmp643;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt32$R$org$frostlang$frostc$Type() {

// line 286
org$frostlang$frostc$Type* $tmp648 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp649 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp650 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp649);
frost$core$Int64 $tmp651 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp648, &$s652, $tmp650, $tmp651);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
return $tmp648;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt64$R$org$frostlang$frostc$Type() {

// line 291
org$frostlang$frostc$Type* $tmp653 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp654 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp655 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp654);
frost$core$Int64 $tmp656 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp653, &$s657, $tmp655, $tmp656);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
return $tmp653;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt8$R$org$frostlang$frostc$Type() {

// line 296
org$frostlang$frostc$Type* $tmp658 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp659 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp660 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp659);
frost$core$Int64 $tmp661 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp658, &$s662, $tmp660, $tmp661);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
return $tmp658;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt16$R$org$frostlang$frostc$Type() {

// line 301
org$frostlang$frostc$Type* $tmp663 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp664 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp665 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp664);
frost$core$Int64 $tmp666 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp663, &$s667, $tmp665, $tmp666);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
return $tmp663;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt32$R$org$frostlang$frostc$Type() {

// line 306
org$frostlang$frostc$Type* $tmp668 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp669 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp670 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp669);
frost$core$Int64 $tmp671 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp668, &$s672, $tmp670, $tmp671);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
return $tmp668;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt64$R$org$frostlang$frostc$Type() {

// line 311
org$frostlang$frostc$Type* $tmp673 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp674 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp675 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp674);
frost$core$Int64 $tmp676 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp673, &$s677, $tmp675, $tmp676);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
return $tmp673;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat32$R$org$frostlang$frostc$Type() {

// line 316
org$frostlang$frostc$Type* $tmp678 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp679 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp680 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp679);
frost$core$Int64 $tmp681 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp678, &$s682, $tmp680, $tmp681);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
return $tmp678;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat64$R$org$frostlang$frostc$Type() {

// line 321
org$frostlang$frostc$Type* $tmp683 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp684 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp685 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp684);
frost$core$Int64 $tmp686 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp683, &$s687, $tmp685, $tmp686);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
return $tmp683;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type() {

// line 326
org$frostlang$frostc$Type* $tmp688 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp689 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp690 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp689);
org$frostlang$frostc$Position $tmp691 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp692 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp688, &$s693, $tmp690, $tmp691, $tmp692);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
return $tmp688;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type() {

// line 331
org$frostlang$frostc$Type* $tmp694 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp695 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp696 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp695);
org$frostlang$frostc$Position $tmp697 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp698 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp694, &$s699, $tmp696, $tmp697, $tmp698);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
return $tmp694;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type() {

// line 336
org$frostlang$frostc$Type* $tmp700 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp701 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp702 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp701);
org$frostlang$frostc$Position $tmp703 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp704 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp700, &$s705, $tmp702, $tmp703, $tmp704);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
return $tmp700;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type() {

// line 341
org$frostlang$frostc$Type* $tmp706 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp707 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp708 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp707);
org$frostlang$frostc$Position $tmp709 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp710 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp706, &$s711, $tmp708, $tmp709, $tmp710);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
return $tmp706;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type() {

// line 346
org$frostlang$frostc$Type* $tmp712 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp713 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp714 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp713);
org$frostlang$frostc$Position $tmp715 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp716 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp712, &$s717, $tmp714, $tmp715, $tmp716);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
return $tmp712;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type() {

// line 351
org$frostlang$frostc$Type* $tmp718 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp719 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp720 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp719);
org$frostlang$frostc$Position $tmp721 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp722 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp718, &$s723, $tmp720, $tmp721, $tmp722);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
return $tmp718;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type() {

// line 356
org$frostlang$frostc$Type* $tmp724 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp725 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp726 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp725);
org$frostlang$frostc$Position $tmp727 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp728 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp724, &$s729, $tmp726, $tmp727, $tmp728);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
return $tmp724;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type() {

// line 361
org$frostlang$frostc$Type* $tmp730 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp731 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp732 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp731);
org$frostlang$frostc$Position $tmp733 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp734 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp730, &$s735, $tmp732, $tmp733, $tmp734);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
return $tmp730;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type() {

// line 366
org$frostlang$frostc$Type* $tmp736 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp737 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp738 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp737);
org$frostlang$frostc$Position $tmp739 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp740 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp736, &$s741, $tmp738, $tmp739, $tmp740);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
return $tmp736;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type() {

// line 371
org$frostlang$frostc$Type* $tmp742 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp743 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp744 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp743);
org$frostlang$frostc$Position $tmp745 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp746 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp742, &$s747, $tmp744, $tmp745, $tmp746);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
return $tmp742;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type() {

// line 376
org$frostlang$frostc$Type* $tmp748 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp749 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp750 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp749);
org$frostlang$frostc$Position $tmp751 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp752 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp748, &$s753, $tmp750, $tmp751, $tmp752);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
return $tmp748;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type() {

// line 381
org$frostlang$frostc$Type* $tmp754 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp755 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp756 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp755);
org$frostlang$frostc$Position $tmp757 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp758 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp754, &$s759, $tmp756, $tmp757, $tmp758);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
return $tmp754;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type() {

// line 386
org$frostlang$frostc$Type* $tmp760 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp761 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp762 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp761);
org$frostlang$frostc$Position $tmp763 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp764 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp760, &$s765, $tmp762, $tmp763, $tmp764);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
return $tmp760;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type() {

// line 391
org$frostlang$frostc$Type* $tmp766 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp767 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp768 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp767);
org$frostlang$frostc$Position $tmp769 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp770 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp766, &$s771, $tmp768, $tmp769, $tmp770);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
return $tmp766;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$IntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

// line 396
org$frostlang$frostc$Type* $tmp772 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp773;
$tmp773 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp773->value = param0;
frost$core$String* $tmp774 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s775, ((frost$core$Object*) $tmp773));
frost$core$String* $tmp776 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp774, &$s777);
frost$core$Int64 $tmp778 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp779 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp778);
org$frostlang$frostc$Position $tmp780 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp781 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp772, $tmp776, $tmp779, $tmp780, $tmp781);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
return $tmp772;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$NegatedIntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

// line 401
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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RealLiteral$frost$core$Real64$R$org$frostlang$frostc$Type(frost$core$Real64 param0) {

// line 406
org$frostlang$frostc$Type* $tmp792 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Real64$wrapper* $tmp793;
$tmp793 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp793->value = param0;
frost$core$String* $tmp794 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s795, ((frost$core$Object*) $tmp793));
frost$core$String* $tmp796 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp794, &$s797);
frost$core$Int64 $tmp798 = (frost$core$Int64) {18};
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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BitLiteral$R$org$frostlang$frostc$Type() {

// line 411
org$frostlang$frostc$Type* $tmp802 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp803 = (frost$core$Int64) {7};
org$frostlang$frostc$Type$Kind $tmp804 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp803);
org$frostlang$frostc$Position $tmp805 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp806 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp802, &$s807, $tmp804, $tmp805, $tmp806);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
return $tmp802;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ClassLiteral$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 416
frost$collections$Array* $tmp808 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp808);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
frost$collections$Array* $tmp809 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local0) = $tmp808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
// line 417
frost$collections$Array* $tmp810 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp810, ((frost$core$Object*) param0));
// line 418
org$frostlang$frostc$Type* $tmp811 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$collections$Array* $tmp812 = *(&local0);
org$frostlang$frostc$Type* $tmp813 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp811, ((frost$collections$ListView*) $tmp812));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$collections$Array* $tmp814 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp813;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type() {

// line 423
org$frostlang$frostc$Type* $tmp815 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp816 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$Kind $tmp817 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp816);
org$frostlang$frostc$Position $tmp818 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp819 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp815, &$s820, $tmp817, $tmp818, $tmp819);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
return $tmp815;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type() {

// line 428
org$frostlang$frostc$Type* $tmp821 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp822 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp823 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp822);
org$frostlang$frostc$Position $tmp824 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp825 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp821, &$s826, $tmp823, $tmp824, $tmp825);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
return $tmp821;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterable$R$org$frostlang$frostc$Type() {

// line 433
org$frostlang$frostc$Type* $tmp827 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp828 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp829 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp828);
org$frostlang$frostc$Position $tmp830 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp831 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp827, &$s832, $tmp829, $tmp830, $tmp831);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
return $tmp827;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Frost$R$org$frostlang$frostc$Type() {

// line 438
org$frostlang$frostc$Type* $tmp833 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp834 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp835 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp834);
org$frostlang$frostc$Position $tmp836 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp837 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp833, &$s838, $tmp835, $tmp836, $tmp837);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
return $tmp833;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type() {

// line 443
org$frostlang$frostc$Type* $tmp839 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp840 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp841 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp840);
org$frostlang$frostc$Position $tmp842 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp843 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp839, &$s844, $tmp841, $tmp842, $tmp843);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
return $tmp839;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type() {

// line 448
org$frostlang$frostc$Type* $tmp845 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp846 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp847 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp846);
org$frostlang$frostc$Position $tmp848 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp849 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp845, &$s850, $tmp847, $tmp848, $tmp849);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
return $tmp845;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 453
frost$collections$Array* $tmp851 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp851);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
frost$collections$Array* $tmp852 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local0) = $tmp851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
// line 454
frost$collections$Array* $tmp853 = *(&local0);
org$frostlang$frostc$Type* $tmp854 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp855 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp856 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp855);
org$frostlang$frostc$Position $tmp857 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp858 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp854, &$s859, $tmp856, $tmp857, $tmp858);
frost$collections$Array$add$frost$collections$Array$T($tmp853, ((frost$core$Object*) $tmp854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// line 455
frost$collections$Array* $tmp860 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp860, ((frost$core$Object*) param0));
// line 456
org$frostlang$frostc$Type* $tmp861 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp862 = frost$core$String$get_asString$R$frost$core$String(&$s863);
frost$core$String* $tmp864 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp862, &$s865);
frost$core$String* $tmp866 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp864, ((frost$core$Object*) param0));
frost$core$String* $tmp867 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp866, &$s868);
frost$core$Int64 $tmp869 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp870 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp869);
org$frostlang$frostc$Position* $tmp871 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp872 = *$tmp871;
frost$collections$Array* $tmp873 = *(&local0);
frost$core$Bit* $tmp874 = &param0->resolved;
frost$core$Bit $tmp875 = *$tmp874;
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp861, $tmp867, $tmp870, $tmp872, ((frost$collections$ListView*) $tmp873), $tmp875);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
frost$collections$Array* $tmp876 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp861;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 461
frost$collections$Array* $tmp877 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp877);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
frost$collections$Array* $tmp878 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local0) = $tmp877;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
// line 462
frost$collections$Array* $tmp879 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp879, ((frost$core$Object*) param0));
// line 463
org$frostlang$frostc$Type* $tmp880 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp881 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp882 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp881);
org$frostlang$frostc$Position $tmp883 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp884 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp880, &$s885, $tmp882, $tmp883, $tmp884);
frost$collections$Array* $tmp886 = *(&local0);
org$frostlang$frostc$Type* $tmp887 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp880, ((frost$collections$ListView*) $tmp886));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
frost$collections$Array* $tmp888 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp887;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 468
frost$collections$Array* $tmp889 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp889);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
frost$collections$Array* $tmp890 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
*(&local0) = $tmp889;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
// line 469
frost$collections$Array* $tmp891 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp891, ((frost$core$Object*) param0));
// line 470
org$frostlang$frostc$Type* $tmp892 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp893 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp894 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp893);
org$frostlang$frostc$Position $tmp895 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp896 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp892, &$s897, $tmp894, $tmp895, $tmp896);
frost$collections$Array* $tmp898 = *(&local0);
org$frostlang$frostc$Type* $tmp899 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp892, ((frost$collections$ListView*) $tmp898));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
frost$collections$Array* $tmp900 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp899;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ImmutableArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 475
frost$collections$Array* $tmp901 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp901);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$collections$Array* $tmp902 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
*(&local0) = $tmp901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
// line 476
frost$collections$Array* $tmp903 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp903, ((frost$core$Object*) param0));
// line 477
org$frostlang$frostc$Type* $tmp904 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp905 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp906 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp905);
org$frostlang$frostc$Position $tmp907 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp908 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp904, &$s909, $tmp906, $tmp907, $tmp908);
frost$collections$Array* $tmp910 = *(&local0);
org$frostlang$frostc$Type* $tmp911 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp904, ((frost$collections$ListView*) $tmp910));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
frost$collections$Array* $tmp912 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp911;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 482
frost$collections$Array* $tmp913 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp913);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
frost$collections$Array* $tmp914 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local0) = $tmp913;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
// line 483
frost$collections$Array* $tmp915 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp915, ((frost$core$Object*) param0));
// line 484
org$frostlang$frostc$Type* $tmp916 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp917 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp918 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp917);
org$frostlang$frostc$Position $tmp919 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp920 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp916, &$s921, $tmp918, $tmp919, $tmp920);
frost$collections$Array* $tmp922 = *(&local0);
org$frostlang$frostc$Type* $tmp923 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp916, ((frost$collections$ListView*) $tmp922));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
frost$collections$Array* $tmp924 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp923;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 489
frost$collections$Array* $tmp925 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp925);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
frost$collections$Array* $tmp926 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
*(&local0) = $tmp925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
// line 490
frost$collections$Array* $tmp927 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp927, ((frost$core$Object*) param0));
// line 491
org$frostlang$frostc$Type* $tmp928 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp929 = org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp930 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp928, $tmp929);
bool $tmp931 = $tmp930.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
if ($tmp931) goto block1; else goto block3;
block1:;
// line 492
frost$collections$Array* $tmp932 = *(&local0);
org$frostlang$frostc$Type* $tmp933 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp932, ((frost$core$Object*) $tmp933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
goto block2;
block3:;
// line 494
org$frostlang$frostc$Type* $tmp934 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp935 = org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp936 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp934, $tmp935);
bool $tmp937 = $tmp936.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
if ($tmp937) goto block4; else goto block6;
block4:;
// line 495
frost$collections$Array* $tmp938 = *(&local0);
org$frostlang$frostc$Type* $tmp939 = org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp938, ((frost$core$Object*) $tmp939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
goto block5;
block6:;
// line 497
org$frostlang$frostc$Type* $tmp940 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp941 = org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp942 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp940, $tmp941);
bool $tmp943 = $tmp942.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
if ($tmp943) goto block7; else goto block9;
block7:;
// line 498
frost$collections$Array* $tmp944 = *(&local0);
org$frostlang$frostc$Type* $tmp945 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp944, ((frost$core$Object*) $tmp945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
goto block8;
block9:;
// line 1
// line 501
frost$collections$Array* $tmp946 = *(&local0);
org$frostlang$frostc$Type* $tmp947 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
frost$collections$Array$add$frost$collections$Array$T($tmp946, ((frost$core$Object*) $tmp947));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
// line 503
org$frostlang$frostc$Type* $tmp948 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp949 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp950 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp949);
org$frostlang$frostc$Position $tmp951 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp952 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp948, &$s953, $tmp950, $tmp951, $tmp952);
frost$collections$Array* $tmp954 = *(&local0);
org$frostlang$frostc$Type* $tmp955 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp948, ((frost$collections$ListView*) $tmp954));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
frost$collections$Array* $tmp956 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp955;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$collections$Array* local0 = NULL;
// line 508
frost$collections$Array* $tmp957 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp957);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
frost$collections$Array* $tmp958 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
*(&local0) = $tmp957;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// line 509
frost$collections$Array* $tmp959 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp959, ((frost$core$Object*) param0));
// line 510
frost$collections$Array* $tmp960 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp960, ((frost$core$Object*) param1));
// line 511
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
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type() {

// line 516
org$frostlang$frostc$Type* $tmp970 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp971 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp972 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp971);
org$frostlang$frostc$Position $tmp973 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp974 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp970, &$s975, $tmp972, $tmp973, $tmp974);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
return $tmp970;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type() {

// line 521
org$frostlang$frostc$Type* $tmp976 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp977 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp978 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp977);
org$frostlang$frostc$Position $tmp979 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp980 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp976, &$s981, $tmp978, $tmp979, $tmp980);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
return $tmp976;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
// line 525
frost$core$String** $tmp982 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp983 = *$tmp982;
frost$core$Bit $tmp984 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp983, &$s985);
bool $tmp986 = $tmp984.value;
if ($tmp986) goto block1; else goto block2;
block1:;
*(&local3) = $tmp984;
goto block3;
block2:;
frost$core$String** $tmp987 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp988 = *$tmp987;
frost$core$Bit $tmp989 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp988, &$s990);
*(&local3) = $tmp989;
goto block3;
block3:;
frost$core$Bit $tmp991 = *(&local3);
bool $tmp992 = $tmp991.value;
if ($tmp992) goto block4; else goto block5;
block4:;
*(&local2) = $tmp991;
goto block6;
block5:;
frost$core$String** $tmp993 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp994 = *$tmp993;
frost$core$Bit $tmp995 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp994, &$s996);
*(&local2) = $tmp995;
goto block6;
block6:;
frost$core$Bit $tmp997 = *(&local2);
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block7; else goto block8;
block7:;
*(&local1) = $tmp997;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp999 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1000 = *$tmp999;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1001;
$tmp1001 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1001->value = $tmp1000;
frost$core$Int64 $tmp1002 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1003 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1002);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1004;
$tmp1004 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1004->value = $tmp1003;
ITable* $tmp1005 = ((frost$core$Equatable*) $tmp1001)->$class->itable;
while ($tmp1005->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1005 = $tmp1005->next;
}
$fn1007 $tmp1006 = $tmp1005->methods[0];
frost$core$Bit $tmp1008 = $tmp1006(((frost$core$Equatable*) $tmp1001), ((frost$core$Equatable*) $tmp1004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1004)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1001)));
*(&local1) = $tmp1008;
goto block9;
block9:;
frost$core$Bit $tmp1009 = *(&local1);
bool $tmp1010 = $tmp1009.value;
if ($tmp1010) goto block10; else goto block11;
block10:;
*(&local0) = $tmp1009;
goto block12;
block11:;
org$frostlang$frostc$Type$Kind* $tmp1011 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1012 = *$tmp1011;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1013;
$tmp1013 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1013->value = $tmp1012;
frost$core$Int64 $tmp1014 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1015 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1014);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1016;
$tmp1016 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1016->value = $tmp1015;
ITable* $tmp1017 = ((frost$core$Equatable*) $tmp1013)->$class->itable;
while ($tmp1017->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1017 = $tmp1017->next;
}
$fn1019 $tmp1018 = $tmp1017->methods[0];
frost$core$Bit $tmp1020 = $tmp1018(((frost$core$Equatable*) $tmp1013), ((frost$core$Equatable*) $tmp1016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1016)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1013)));
*(&local0) = $tmp1020;
goto block12;
block12:;
frost$core$Bit $tmp1021 = *(&local0);
return $tmp1021;

}
frost$core$Bit org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
// line 531
org$frostlang$frostc$Type$Kind* $tmp1022 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1023 = *$tmp1022;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1024;
$tmp1024 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1024->value = $tmp1023;
frost$core$Int64 $tmp1025 = (frost$core$Int64) {2};
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
bool $tmp1032 = $tmp1031.value;
if ($tmp1032) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1031;
goto block3;
block2:;
org$frostlang$frostc$Type$Kind* $tmp1033 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1034 = *$tmp1033;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1035;
$tmp1035 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1035->value = $tmp1034;
frost$core$Int64 $tmp1036 = (frost$core$Int64) {3};
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1038)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1035)));
*(&local2) = $tmp1042;
goto block3;
block3:;
frost$core$Bit $tmp1043 = *(&local2);
bool $tmp1044 = $tmp1043.value;
if ($tmp1044) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1043;
goto block6;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1045 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1046 = *$tmp1045;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1047;
$tmp1047 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1047->value = $tmp1046;
frost$core$Int64 $tmp1048 = (frost$core$Int64) {9};
org$frostlang$frostc$Type$Kind $tmp1049 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1048);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1050;
$tmp1050 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1050->value = $tmp1049;
ITable* $tmp1051 = ((frost$core$Equatable*) $tmp1047)->$class->itable;
while ($tmp1051->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1051 = $tmp1051->next;
}
$fn1053 $tmp1052 = $tmp1051->methods[0];
frost$core$Bit $tmp1054 = $tmp1052(((frost$core$Equatable*) $tmp1047), ((frost$core$Equatable*) $tmp1050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1050)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1047)));
*(&local1) = $tmp1054;
goto block6;
block6:;
frost$core$Bit $tmp1055 = *(&local1);
bool $tmp1056 = $tmp1055.value;
if ($tmp1056) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1055;
goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp1057 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1058 = *$tmp1057;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1059;
$tmp1059 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1059->value = $tmp1058;
frost$core$Int64 $tmp1060 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1061 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1060);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1062;
$tmp1062 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1062->value = $tmp1061;
ITable* $tmp1063 = ((frost$core$Equatable*) $tmp1059)->$class->itable;
while ($tmp1063->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1063 = $tmp1063->next;
}
$fn1065 $tmp1064 = $tmp1063->methods[0];
frost$core$Bit $tmp1066 = $tmp1064(((frost$core$Equatable*) $tmp1059), ((frost$core$Equatable*) $tmp1062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1062)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1059)));
*(&local0) = $tmp1066;
goto block9;
block9:;
frost$core$Bit $tmp1067 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1027)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1024)));
return $tmp1067;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 536
frost$core$String** $tmp1068 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1069 = *$tmp1068;
frost$core$Bit $tmp1070 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1069, &$s1071);
return $tmp1070;

}
frost$core$Bit org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 540
org$frostlang$frostc$Type$Kind* $tmp1072 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1073 = *$tmp1072;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1074;
$tmp1074 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1074->value = $tmp1073;
frost$core$Int64 $tmp1075 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1076 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1075);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1077;
$tmp1077 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1077->value = $tmp1076;
ITable* $tmp1078 = ((frost$core$Equatable*) $tmp1074)->$class->itable;
while ($tmp1078->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1078 = $tmp1078->next;
}
$fn1080 $tmp1079 = $tmp1078->methods[0];
frost$core$Bit $tmp1081 = $tmp1079(((frost$core$Equatable*) $tmp1074), ((frost$core$Equatable*) $tmp1077));
bool $tmp1082 = $tmp1081.value;
if ($tmp1082) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1081;
goto block3;
block2:;
frost$core$String** $tmp1083 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1084 = *$tmp1083;
frost$core$Bit $tmp1085 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1084, &$s1086);
*(&local0) = $tmp1085;
goto block3;
block3:;
frost$core$Bit $tmp1087 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1077)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1074)));
return $tmp1087;

}
frost$core$Bit org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 544
frost$core$String** $tmp1088 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1089 = *$tmp1088;
frost$core$Bit $tmp1090 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1089, &$s1091);
return $tmp1090;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 548
frost$core$Bit $tmp1092 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1093 = $tmp1092.value;
if ($tmp1093) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1092;
goto block3;
block2:;
frost$core$Bit $tmp1094 = org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(param0);
*(&local0) = $tmp1094;
goto block3;
block3:;
frost$core$Bit $tmp1095 = *(&local0);
return $tmp1095;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 552
org$frostlang$frostc$Type$Kind* $tmp1096 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1097 = *$tmp1096;
frost$core$Int64 $tmp1098 = $tmp1097.$rawValue;
frost$core$Int64 $tmp1099 = (frost$core$Int64) {0};
frost$core$Bit $tmp1100 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1098, $tmp1099);
bool $tmp1101 = $tmp1100.value;
if ($tmp1101) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1102 = (frost$core$Int64) {1};
frost$core$Bit $tmp1103 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1098, $tmp1102);
bool $tmp1104 = $tmp1103.value;
if ($tmp1104) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp1105 = (frost$core$Int64) {10};
frost$core$Bit $tmp1106 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1098, $tmp1105);
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1108 = (frost$core$Int64) {11};
frost$core$Bit $tmp1109 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1098, $tmp1108);
bool $tmp1110 = $tmp1109.value;
if ($tmp1110) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp1111 = (frost$core$Int64) {12};
frost$core$Bit $tmp1112 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1098, $tmp1111);
bool $tmp1113 = $tmp1112.value;
if ($tmp1113) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp1114 = (frost$core$Int64) {15};
frost$core$Bit $tmp1115 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1098, $tmp1114);
bool $tmp1116 = $tmp1115.value;
if ($tmp1116) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp1117 = (frost$core$Int64) {14};
frost$core$Bit $tmp1118 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1098, $tmp1117);
bool $tmp1119 = $tmp1118.value;
if ($tmp1119) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp1120 = (frost$core$Int64) {17};
frost$core$Bit $tmp1121 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1098, $tmp1120);
bool $tmp1122 = $tmp1121.value;
if ($tmp1122) goto block2; else goto block10;
block10:;
frost$core$Int64 $tmp1123 = (frost$core$Int64) {16};
frost$core$Bit $tmp1124 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1098, $tmp1123);
bool $tmp1125 = $tmp1124.value;
if ($tmp1125) goto block2; else goto block11;
block2:;
// line 556
frost$core$Bit $tmp1126 = frost$core$Bit$init$builtin_bit(true);
return $tmp1126;
block11:;
// line 559
frost$core$Bit $tmp1127 = frost$core$Bit$init$builtin_bit(false);
return $tmp1127;
block1:;
goto block12;
block12:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
// line 565
org$frostlang$frostc$Type$Kind* $tmp1128 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1129 = *$tmp1128;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1130;
$tmp1130 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1130->value = $tmp1129;
frost$core$Int64 $tmp1131 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1132 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1131);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1133;
$tmp1133 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1133->value = $tmp1132;
ITable* $tmp1134 = ((frost$core$Equatable*) $tmp1130)->$class->itable;
while ($tmp1134->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1134 = $tmp1134->next;
}
$fn1136 $tmp1135 = $tmp1134->methods[0];
frost$core$Bit $tmp1137 = $tmp1135(((frost$core$Equatable*) $tmp1130), ((frost$core$Equatable*) $tmp1133));
bool $tmp1138 = $tmp1137.value;
if ($tmp1138) goto block1; else goto block2;
block1:;
org$frostlang$frostc$FixedArray** $tmp1139 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1140 = *$tmp1139;
frost$core$Int64 $tmp1141 = (frost$core$Int64) {0};
frost$core$Object* $tmp1142 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1140, $tmp1141);
org$frostlang$frostc$Type* $tmp1143 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1144 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1142), $tmp1143);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
frost$core$Frost$unref$frost$core$Object$Q($tmp1142);
*(&local0) = $tmp1144;
goto block3;
block2:;
*(&local0) = $tmp1137;
goto block3;
block3:;
frost$core$Bit $tmp1145 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1133)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1130)));
return $tmp1145;

}
frost$core$Bit org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 569
org$frostlang$frostc$Type$Kind* $tmp1146 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1147 = *$tmp1146;
frost$core$Int64 $tmp1148 = $tmp1147.$rawValue;
frost$core$Int64 $tmp1149 = (frost$core$Int64) {15};
frost$core$Bit $tmp1150 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1148, $tmp1149);
bool $tmp1151 = $tmp1150.value;
if ($tmp1151) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1152 = (frost$core$Int64) {14};
frost$core$Bit $tmp1153 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1148, $tmp1152);
bool $tmp1154 = $tmp1153.value;
if ($tmp1154) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp1155 = (frost$core$Int64) {17};
frost$core$Bit $tmp1156 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1148, $tmp1155);
bool $tmp1157 = $tmp1156.value;
if ($tmp1157) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp1158 = (frost$core$Int64) {16};
frost$core$Bit $tmp1159 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1148, $tmp1158);
bool $tmp1160 = $tmp1159.value;
if ($tmp1160) goto block2; else goto block6;
block2:;
// line 571
frost$core$Bit $tmp1161 = frost$core$Bit$init$builtin_bit(true);
return $tmp1161;
block6:;
// line 574
frost$core$Bit $tmp1162 = frost$core$Bit$init$builtin_bit(false);
return $tmp1162;
block1:;
goto block7;
block7:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 580
frost$core$String** $tmp1163 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1164 = *$tmp1163;
frost$core$Bit $tmp1165 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1164, &$s1166);
return $tmp1165;

}
frost$core$Bit org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 584
frost$core$String** $tmp1167 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1168 = *$tmp1167;
frost$core$Bit $tmp1169 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1168, &$s1170);
return $tmp1169;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 588
frost$core$String** $tmp1171 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1172 = *$tmp1171;
frost$core$Bit $tmp1173 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1172, &$s1174);
return $tmp1173;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

// line 592
org$frostlang$frostc$Type$Kind* $tmp1175 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1176 = *$tmp1175;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1177;
$tmp1177 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1177->value = $tmp1176;
frost$core$Int64 $tmp1178 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1179 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1178);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1180;
$tmp1180 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1180->value = $tmp1179;
ITable* $tmp1181 = ((frost$core$Equatable*) $tmp1177)->$class->itable;
while ($tmp1181->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1181 = $tmp1181->next;
}
$fn1183 $tmp1182 = $tmp1181->methods[0];
frost$core$Bit $tmp1184 = $tmp1182(((frost$core$Equatable*) $tmp1177), ((frost$core$Equatable*) $tmp1180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1180)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1177)));
return $tmp1184;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

frost$collections$Array* local0 = NULL;
// line 596
org$frostlang$frostc$Type$Kind* $tmp1185 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1186 = *$tmp1185;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1187;
$tmp1187 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1187->value = $tmp1186;
frost$core$Int64 $tmp1188 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1189 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1188);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1190;
$tmp1190 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1190->value = $tmp1189;
ITable* $tmp1191 = ((frost$core$Equatable*) $tmp1187)->$class->itable;
while ($tmp1191->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1191 = $tmp1191->next;
}
$fn1193 $tmp1192 = $tmp1191->methods[0];
frost$core$Bit $tmp1194 = $tmp1192(((frost$core$Equatable*) $tmp1187), ((frost$core$Equatable*) $tmp1190));
bool $tmp1195 = $tmp1194.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1190)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1187)));
if ($tmp1195) goto block1; else goto block2;
block1:;
// line 597
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 599
frost$collections$Array* $tmp1196 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1196);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
frost$collections$Array* $tmp1197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
*(&local0) = $tmp1196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
// line 600
frost$collections$Array* $tmp1198 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp1198, ((frost$core$Object*) param0));
// line 601
org$frostlang$frostc$Type* $tmp1199 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String** $tmp1200 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1201 = *$tmp1200;
frost$core$String* $tmp1202 = frost$core$String$get_asString$R$frost$core$String($tmp1201);
frost$core$String* $tmp1203 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1202, &$s1204);
frost$core$Int64 $tmp1205 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1206 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1205);
org$frostlang$frostc$Position $tmp1207 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp1208 = *(&local0);
frost$core$Bit $tmp1209 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp1199, $tmp1203, $tmp1206, $tmp1207, ((frost$collections$ListView*) $tmp1208), $tmp1209);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
frost$collections$Array* $tmp1210 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1199;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 605
org$frostlang$frostc$Type$Kind* $tmp1211 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1212 = *$tmp1211;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1213;
$tmp1213 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1213->value = $tmp1212;
frost$core$Int64 $tmp1214 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1215 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1214);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1216;
$tmp1216 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1216->value = $tmp1215;
ITable* $tmp1217 = ((frost$core$Equatable*) $tmp1213)->$class->itable;
while ($tmp1217->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1217 = $tmp1217->next;
}
$fn1219 $tmp1218 = $tmp1217->methods[1];
frost$core$Bit $tmp1220 = $tmp1218(((frost$core$Equatable*) $tmp1213), ((frost$core$Equatable*) $tmp1216));
bool $tmp1221 = $tmp1220.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1216)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1213)));
if ($tmp1221) goto block1; else goto block2;
block1:;
// line 606
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 608
org$frostlang$frostc$FixedArray** $tmp1222 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1223 = *$tmp1222;
frost$core$Int64 $tmp1224 = (frost$core$Int64) {0};
frost$core$Object* $tmp1225 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1223, $tmp1224);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1225)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1225);
return ((org$frostlang$frostc$Type*) $tmp1225);

}
frost$core$Int64 org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind* $tmp1226 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1227 = *$tmp1226;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1228;
$tmp1228 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1228->value = $tmp1227;
frost$core$Int64 $tmp1229 = (frost$core$Int64) {14};
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
bool $tmp1236 = $tmp1235.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1231)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1228)));
if ($tmp1236) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1237 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1238 = *$tmp1237;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1239;
$tmp1239 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1239->value = $tmp1238;
frost$core$Int64 $tmp1240 = (frost$core$Int64) {15};
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1242)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1239)));
if ($tmp1247) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1248 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1249 = *$tmp1248;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1250;
$tmp1250 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1250->value = $tmp1249;
frost$core$Int64 $tmp1251 = (frost$core$Int64) {16};
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
bool $tmp1258 = $tmp1257.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1253)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1250)));
if ($tmp1258) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1259 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1260 = *$tmp1259;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1261;
$tmp1261 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1261->value = $tmp1260;
frost$core$Int64 $tmp1262 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1263 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1262);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1264;
$tmp1264 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1264->value = $tmp1263;
ITable* $tmp1265 = ((frost$core$Equatable*) $tmp1261)->$class->itable;
while ($tmp1265->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1265 = $tmp1265->next;
}
$fn1267 $tmp1266 = $tmp1265->methods[0];
frost$core$Bit $tmp1268 = $tmp1266(((frost$core$Equatable*) $tmp1261), ((frost$core$Equatable*) $tmp1264));
bool $tmp1269 = $tmp1268.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1264)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1261)));
if ($tmp1269) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1270 = (frost$core$Int64) {613};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1271, $tmp1270, &$s1272);
abort(); // unreachable
block1:;
// line 614
org$frostlang$frostc$FixedArray** $tmp1273 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1274 = *$tmp1273;
ITable* $tmp1275 = ((frost$collections$CollectionView*) $tmp1274)->$class->itable;
while ($tmp1275->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1275 = $tmp1275->next;
}
$fn1277 $tmp1276 = $tmp1275->methods[0];
frost$core$Int64 $tmp1278 = $tmp1276(((frost$collections$CollectionView*) $tmp1274));
frost$core$Int64 $tmp1279 = (frost$core$Int64) {1};
int64_t $tmp1280 = $tmp1278.value;
int64_t $tmp1281 = $tmp1279.value;
int64_t $tmp1282 = $tmp1280 - $tmp1281;
frost$core$Int64 $tmp1283 = (frost$core$Int64) {$tmp1282};
return $tmp1283;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$core$Int64 param1) {

org$frostlang$frostc$Type$Kind* $tmp1284 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1285 = *$tmp1284;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1286;
$tmp1286 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1286->value = $tmp1285;
frost$core$Int64 $tmp1287 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp1288 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1287);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1289;
$tmp1289 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1289->value = $tmp1288;
ITable* $tmp1290 = ((frost$core$Equatable*) $tmp1286)->$class->itable;
while ($tmp1290->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1290 = $tmp1290->next;
}
$fn1292 $tmp1291 = $tmp1290->methods[0];
frost$core$Bit $tmp1293 = $tmp1291(((frost$core$Equatable*) $tmp1286), ((frost$core$Equatable*) $tmp1289));
bool $tmp1294 = $tmp1293.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1289)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1286)));
if ($tmp1294) goto block4; else goto block7;
block7:;
org$frostlang$frostc$Type$Kind* $tmp1295 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1296 = *$tmp1295;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1297;
$tmp1297 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1297->value = $tmp1296;
frost$core$Int64 $tmp1298 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp1299 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1298);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1300;
$tmp1300 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1300->value = $tmp1299;
ITable* $tmp1301 = ((frost$core$Equatable*) $tmp1297)->$class->itable;
while ($tmp1301->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1301 = $tmp1301->next;
}
$fn1303 $tmp1302 = $tmp1301->methods[0];
frost$core$Bit $tmp1304 = $tmp1302(((frost$core$Equatable*) $tmp1297), ((frost$core$Equatable*) $tmp1300));
bool $tmp1305 = $tmp1304.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1300)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1297)));
if ($tmp1305) goto block4; else goto block6;
block6:;
org$frostlang$frostc$Type$Kind* $tmp1306 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1307 = *$tmp1306;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1308;
$tmp1308 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1308->value = $tmp1307;
frost$core$Int64 $tmp1309 = (frost$core$Int64) {16};
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1311)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1308)));
if ($tmp1316) goto block4; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1317 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1318 = *$tmp1317;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1319;
$tmp1319 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1319->value = $tmp1318;
frost$core$Int64 $tmp1320 = (frost$core$Int64) {17};
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
bool $tmp1327 = $tmp1326.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1322)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1319)));
if ($tmp1327) goto block4; else goto block2;
block4:;
frost$core$Int64 $tmp1328 = (frost$core$Int64) {0};
int64_t $tmp1329 = param1.value;
int64_t $tmp1330 = $tmp1328.value;
bool $tmp1331 = $tmp1329 >= $tmp1330;
frost$core$Bit $tmp1332 = (frost$core$Bit) {$tmp1331};
bool $tmp1333 = $tmp1332.value;
if ($tmp1333) goto block3; else goto block2;
block3:;
org$frostlang$frostc$FixedArray** $tmp1334 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1335 = *$tmp1334;
ITable* $tmp1336 = ((frost$collections$CollectionView*) $tmp1335)->$class->itable;
while ($tmp1336->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1336 = $tmp1336->next;
}
$fn1338 $tmp1337 = $tmp1336->methods[0];
frost$core$Int64 $tmp1339 = $tmp1337(((frost$collections$CollectionView*) $tmp1335));
frost$core$Int64 $tmp1340 = (frost$core$Int64) {1};
int64_t $tmp1341 = $tmp1339.value;
int64_t $tmp1342 = $tmp1340.value;
int64_t $tmp1343 = $tmp1341 - $tmp1342;
frost$core$Int64 $tmp1344 = (frost$core$Int64) {$tmp1343};
int64_t $tmp1345 = param1.value;
int64_t $tmp1346 = $tmp1344.value;
bool $tmp1347 = $tmp1345 < $tmp1346;
frost$core$Bit $tmp1348 = (frost$core$Bit) {$tmp1347};
bool $tmp1349 = $tmp1348.value;
if ($tmp1349) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1350 = (frost$core$Int64) {619};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1351, $tmp1350, &$s1352);
abort(); // unreachable
block1:;
// line 620
org$frostlang$frostc$FixedArray** $tmp1353 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1354 = *$tmp1353;
frost$core$Object* $tmp1355 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1354, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1355)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1355);
return ((org$frostlang$frostc$Type*) $tmp1355);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind* $tmp1356 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1357 = *$tmp1356;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1358;
$tmp1358 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1358->value = $tmp1357;
frost$core$Int64 $tmp1359 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp1360 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1359);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1361;
$tmp1361 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1361->value = $tmp1360;
ITable* $tmp1362 = ((frost$core$Equatable*) $tmp1358)->$class->itable;
while ($tmp1362->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1362 = $tmp1362->next;
}
$fn1364 $tmp1363 = $tmp1362->methods[0];
frost$core$Bit $tmp1365 = $tmp1363(((frost$core$Equatable*) $tmp1358), ((frost$core$Equatable*) $tmp1361));
bool $tmp1366 = $tmp1365.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1361)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1358)));
if ($tmp1366) goto block1; else goto block5;
block5:;
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1372)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1369)));
if ($tmp1377) goto block1; else goto block4;
block4:;
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
bool $tmp1388 = $tmp1387.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1383)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1380)));
if ($tmp1388) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp1389 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1390 = *$tmp1389;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1391;
$tmp1391 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1391->value = $tmp1390;
frost$core$Int64 $tmp1392 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp1393 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1392);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1394;
$tmp1394 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1394->value = $tmp1393;
ITable* $tmp1395 = ((frost$core$Equatable*) $tmp1391)->$class->itable;
while ($tmp1395->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1395 = $tmp1395->next;
}
$fn1397 $tmp1396 = $tmp1395->methods[0];
frost$core$Bit $tmp1398 = $tmp1396(((frost$core$Equatable*) $tmp1391), ((frost$core$Equatable*) $tmp1394));
bool $tmp1399 = $tmp1398.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1394)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1391)));
if ($tmp1399) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1400 = (frost$core$Int64) {625};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1401, $tmp1400, &$s1402);
abort(); // unreachable
block1:;
// line 626
org$frostlang$frostc$FixedArray** $tmp1403 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1404 = *$tmp1403;
org$frostlang$frostc$FixedArray** $tmp1405 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1406 = *$tmp1405;
ITable* $tmp1407 = ((frost$collections$CollectionView*) $tmp1406)->$class->itable;
while ($tmp1407->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1407 = $tmp1407->next;
}
$fn1409 $tmp1408 = $tmp1407->methods[0];
frost$core$Int64 $tmp1410 = $tmp1408(((frost$collections$CollectionView*) $tmp1406));
frost$core$Int64 $tmp1411 = (frost$core$Int64) {1};
int64_t $tmp1412 = $tmp1410.value;
int64_t $tmp1413 = $tmp1411.value;
int64_t $tmp1414 = $tmp1412 - $tmp1413;
frost$core$Int64 $tmp1415 = (frost$core$Int64) {$tmp1414};
frost$core$Object* $tmp1416 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1404, $tmp1415);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1416)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1416);
return ((org$frostlang$frostc$Type*) $tmp1416);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
frost$collections$HashSet* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
// line 633
frost$core$Bit $tmp1417 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param2);
bool $tmp1418 = $tmp1417.value;
if ($tmp1418) goto block1; else goto block2;
block1:;
// line 634
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 636
org$frostlang$frostc$Type* $tmp1419 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1420 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1419);
bool $tmp1421 = $tmp1420.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
if ($tmp1421) goto block3; else goto block4;
block3:;
// line 637
org$frostlang$frostc$Type$Kind* $tmp1422 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1423 = *$tmp1422;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1424;
$tmp1424 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1424->value = $tmp1423;
frost$core$Int64 $tmp1425 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1426 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1425);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1427;
$tmp1427 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1427->value = $tmp1426;
ITable* $tmp1428 = ((frost$core$Equatable*) $tmp1424)->$class->itable;
while ($tmp1428->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1428 = $tmp1428->next;
}
$fn1430 $tmp1429 = $tmp1428->methods[0];
frost$core$Bit $tmp1431 = $tmp1429(((frost$core$Equatable*) $tmp1424), ((frost$core$Equatable*) $tmp1427));
bool $tmp1432 = $tmp1431.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1427)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1424)));
if ($tmp1432) goto block5; else goto block6;
block5:;
// line 638
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block6:;
// line 640
org$frostlang$frostc$Type* $tmp1433 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
return $tmp1433;
block4:;
// line 642
org$frostlang$frostc$Type* $tmp1434 = org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1435 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param2, $tmp1434);
bool $tmp1436 = $tmp1435.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
if ($tmp1436) goto block7; else goto block8;
block7:;
// line 643
org$frostlang$frostc$Type$Kind* $tmp1437 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1438 = *$tmp1437;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1439;
$tmp1439 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1439->value = $tmp1438;
frost$core$Int64 $tmp1440 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1441 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1440);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1442;
$tmp1442 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1442->value = $tmp1441;
ITable* $tmp1443 = ((frost$core$Equatable*) $tmp1439)->$class->itable;
while ($tmp1443->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1443 = $tmp1443->next;
}
$fn1445 $tmp1444 = $tmp1443->methods[0];
frost$core$Bit $tmp1446 = $tmp1444(((frost$core$Equatable*) $tmp1439), ((frost$core$Equatable*) $tmp1442));
bool $tmp1447 = $tmp1446.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1442)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1439)));
if ($tmp1447) goto block9; else goto block10;
block9:;
// line 644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block10:;
// line 646
org$frostlang$frostc$Type* $tmp1448 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
return $tmp1448;
block8:;
// line 648
org$frostlang$frostc$Type* $tmp1449 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1450 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1449);
bool $tmp1451 = $tmp1450.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
if ($tmp1451) goto block11; else goto block12;
block11:;
// line 649
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block12:;
// line 651
org$frostlang$frostc$Type* $tmp1452 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1453 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param2, $tmp1452);
bool $tmp1454 = $tmp1453.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
if ($tmp1454) goto block13; else goto block14;
block13:;
// line 652
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block14:;
// line 654
org$frostlang$frostc$Type$Kind* $tmp1455 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1456 = *$tmp1455;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1457;
$tmp1457 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1457->value = $tmp1456;
frost$core$Int64 $tmp1458 = (frost$core$Int64) {5};
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
bool $tmp1465 = $tmp1464.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1460)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1457)));
if ($tmp1465) goto block17; else goto block16;
block17:;
frost$core$Bit $tmp1466 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1467 = $tmp1466.value;
if ($tmp1467) goto block15; else goto block16;
block15:;
// line 655
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block16:;
// line 657
frost$core$Bit $tmp1468 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1469 = $tmp1468.value;
if ($tmp1469) goto block20; else goto block19;
block20:;
org$frostlang$frostc$Type$Kind* $tmp1470 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1471 = *$tmp1470;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1472;
$tmp1472 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1472->value = $tmp1471;
frost$core$Int64 $tmp1473 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1474 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1473);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1475;
$tmp1475 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1475->value = $tmp1474;
ITable* $tmp1476 = ((frost$core$Equatable*) $tmp1472)->$class->itable;
while ($tmp1476->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1476 = $tmp1476->next;
}
$fn1478 $tmp1477 = $tmp1476->methods[0];
frost$core$Bit $tmp1479 = $tmp1477(((frost$core$Equatable*) $tmp1472), ((frost$core$Equatable*) $tmp1475));
bool $tmp1480 = $tmp1479.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1475)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1472)));
if ($tmp1480) goto block18; else goto block19;
block18:;
// line 658
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block19:;
// line 660
frost$core$Bit $tmp1481 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param0);
bool $tmp1482 = $tmp1481.value;
if ($tmp1482) goto block21; else goto block22;
block21:;
// line 661
org$frostlang$frostc$Type$Kind* $tmp1483 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1484 = *$tmp1483;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1485;
$tmp1485 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1485->value = $tmp1484;
frost$core$Int64 $tmp1486 = (frost$core$Int64) {5};
org$frostlang$frostc$Type$Kind $tmp1487 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1486);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1488;
$tmp1488 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1488->value = $tmp1487;
ITable* $tmp1489 = ((frost$core$Equatable*) $tmp1485)->$class->itable;
while ($tmp1489->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1489 = $tmp1489->next;
}
$fn1491 $tmp1490 = $tmp1489->methods[0];
frost$core$Bit $tmp1492 = $tmp1490(((frost$core$Equatable*) $tmp1485), ((frost$core$Equatable*) $tmp1488));
bool $tmp1493 = $tmp1492.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1488)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1485)));
if ($tmp1493) goto block23; else goto block25;
block25:;
org$frostlang$frostc$Type$Kind* $tmp1494 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1495 = *$tmp1494;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1496;
$tmp1496 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1496->value = $tmp1495;
frost$core$Int64 $tmp1497 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1498 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1497);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1499;
$tmp1499 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1499->value = $tmp1498;
ITable* $tmp1500 = ((frost$core$Equatable*) $tmp1496)->$class->itable;
while ($tmp1500->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1500 = $tmp1500->next;
}
$fn1502 $tmp1501 = $tmp1500->methods[0];
frost$core$Bit $tmp1503 = $tmp1501(((frost$core$Equatable*) $tmp1496), ((frost$core$Equatable*) $tmp1499));
bool $tmp1504 = $tmp1503.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1499)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1496)));
if ($tmp1504) goto block23; else goto block24;
block23:;
// line 662
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block24:;
// line 664
frost$core$Bit $tmp1505 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
bool $tmp1506 = $tmp1505.value;
if ($tmp1506) goto block26; else goto block27;
block26:;
// line 665
frost$core$String** $tmp1507 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp1508 = *$tmp1507;
frost$core$Bit $tmp1509 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1508, &$s1510);
bool $tmp1511 = $tmp1509.value;
if ($tmp1511) goto block28; else goto block29;
block28:;
// line 666
org$frostlang$frostc$Type* $tmp1512 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
return $tmp1512;
block29:;
// line 668
org$frostlang$frostc$Type* $tmp1513 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
return $tmp1513;
block27:;
goto block22;
block22:;
// line 671
frost$core$Bit $tmp1514 = org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(param2);
bool $tmp1515 = $tmp1514.value;
if ($tmp1515) goto block30; else goto block31;
block30:;
// line 672
org$frostlang$frostc$Type$Kind* $tmp1516 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1517 = *$tmp1516;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1518;
$tmp1518 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1518->value = $tmp1517;
frost$core$Int64 $tmp1519 = (frost$core$Int64) {5};
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
if ($tmp1526) goto block32; else goto block34;
block34:;
org$frostlang$frostc$Type$Kind* $tmp1527 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1528 = *$tmp1527;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1529;
$tmp1529 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1529->value = $tmp1528;
frost$core$Int64 $tmp1530 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp1531 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1530);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1532;
$tmp1532 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1532->value = $tmp1531;
ITable* $tmp1533 = ((frost$core$Equatable*) $tmp1529)->$class->itable;
while ($tmp1533->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1533 = $tmp1533->next;
}
$fn1535 $tmp1534 = $tmp1533->methods[0];
frost$core$Bit $tmp1536 = $tmp1534(((frost$core$Equatable*) $tmp1529), ((frost$core$Equatable*) $tmp1532));
bool $tmp1537 = $tmp1536.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1532)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1529)));
if ($tmp1537) goto block32; else goto block33;
block32:;
// line 673
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block33:;
// line 675
frost$core$Bit $tmp1538 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
bool $tmp1539 = $tmp1538.value;
if ($tmp1539) goto block35; else goto block36;
block35:;
// line 676
frost$core$String** $tmp1540 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1541 = *$tmp1540;
frost$core$Bit $tmp1542 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp1541, &$s1543);
bool $tmp1544 = $tmp1542.value;
if ($tmp1544) goto block37; else goto block38;
block37:;
// line 677
org$frostlang$frostc$Type* $tmp1545 = org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
return $tmp1545;
block38:;
// line 679
org$frostlang$frostc$Type* $tmp1546 = org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
return $tmp1546;
block36:;
goto block31;
block31:;
// line 682
org$frostlang$frostc$Type$Kind* $tmp1547 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1548 = *$tmp1547;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1549;
$tmp1549 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1549->value = $tmp1548;
frost$core$Int64 $tmp1550 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1551 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1550);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1552;
$tmp1552 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1552->value = $tmp1551;
ITable* $tmp1553 = ((frost$core$Equatable*) $tmp1549)->$class->itable;
while ($tmp1553->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1553 = $tmp1553->next;
}
$fn1555 $tmp1554 = $tmp1553->methods[0];
frost$core$Bit $tmp1556 = $tmp1554(((frost$core$Equatable*) $tmp1549), ((frost$core$Equatable*) $tmp1552));
bool $tmp1557 = $tmp1556.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1552)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1549)));
if ($tmp1557) goto block39; else goto block40;
block39:;
// line 683
org$frostlang$frostc$FixedArray** $tmp1558 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1559 = *$tmp1558;
frost$core$Int64 $tmp1560 = (frost$core$Int64) {0};
frost$core$Object* $tmp1561 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1559, $tmp1560);
org$frostlang$frostc$Type* $tmp1562 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1561), param1, param2);
org$frostlang$frostc$Type* $tmp1563 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1562);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
frost$core$Frost$unref$frost$core$Object$Q($tmp1561);
return $tmp1563;
block40:;
// line 685
org$frostlang$frostc$Type$Kind* $tmp1564 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp1565 = *$tmp1564;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1566;
$tmp1566 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1566->value = $tmp1565;
frost$core$Int64 $tmp1567 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1568 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1567);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1569;
$tmp1569 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1569->value = $tmp1568;
ITable* $tmp1570 = ((frost$core$Equatable*) $tmp1566)->$class->itable;
while ($tmp1570->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1570 = $tmp1570->next;
}
$fn1572 $tmp1571 = $tmp1570->methods[0];
frost$core$Bit $tmp1573 = $tmp1571(((frost$core$Equatable*) $tmp1566), ((frost$core$Equatable*) $tmp1569));
bool $tmp1574 = $tmp1573.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1569)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1566)));
if ($tmp1574) goto block41; else goto block42;
block41:;
// line 686
org$frostlang$frostc$FixedArray** $tmp1575 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp1576 = *$tmp1575;
frost$core$Int64 $tmp1577 = (frost$core$Int64) {0};
frost$core$Object* $tmp1578 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1576, $tmp1577);
org$frostlang$frostc$Type* $tmp1579 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, param1, ((org$frostlang$frostc$Type*) $tmp1578));
org$frostlang$frostc$Type* $tmp1580 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1579);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
frost$core$Frost$unref$frost$core$Object$Q($tmp1578);
return $tmp1580;
block42:;
// line 688
org$frostlang$frostc$Type* $tmp1581 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param0);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
org$frostlang$frostc$Type* $tmp1582 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
*(&local0) = $tmp1581;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
// line 689
org$frostlang$frostc$Type* $tmp1583 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param2);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
org$frostlang$frostc$Type* $tmp1584 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
*(&local1) = $tmp1583;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
// line 690
org$frostlang$frostc$Type* $tmp1585 = *(&local0);
frost$core$Bit $tmp1586 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1585);
bool $tmp1587 = $tmp1586.value;
if ($tmp1587) goto block45; else goto block44;
block45:;
org$frostlang$frostc$Type* $tmp1588 = *(&local1);
frost$core$Bit $tmp1589 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp1588);
bool $tmp1590 = $tmp1589.value;
if ($tmp1590) goto block43; else goto block44;
block43:;
// line 691
frost$collections$HashSet* $tmp1591 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp1591);
*(&local2) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
frost$collections$HashSet* $tmp1592 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
*(&local2) = $tmp1591;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
// line 692
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1593 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
*(&local3) = param0;
// line 693
org$frostlang$frostc$Type* $tmp1594 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp1595 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1594);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
org$frostlang$frostc$ClassDecl* $tmp1596 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local4) = $tmp1595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
// line 694
goto block46;
block46:;
org$frostlang$frostc$ClassDecl* $tmp1597 = *(&local4);
frost$core$Bit $tmp1598 = frost$core$Bit$init$builtin_bit($tmp1597 != NULL);
bool $tmp1599 = $tmp1598.value;
if ($tmp1599) goto block47; else goto block48;
block47:;
// line 695
frost$collections$HashSet* $tmp1600 = *(&local2);
org$frostlang$frostc$Type* $tmp1601 = *(&local3);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp1600, ((frost$collections$Key*) $tmp1601));
// line 696
org$frostlang$frostc$ClassDecl* $tmp1602 = *(&local4);
org$frostlang$frostc$Type** $tmp1603 = &$tmp1602->rawSuper;
org$frostlang$frostc$Type* $tmp1604 = *$tmp1603;
frost$core$Bit $tmp1605 = frost$core$Bit$init$builtin_bit($tmp1604 != NULL);
bool $tmp1606 = $tmp1605.value;
if ($tmp1606) goto block49; else goto block51;
block49:;
// line 697
org$frostlang$frostc$Type* $tmp1607 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1608 = *(&local4);
org$frostlang$frostc$Type** $tmp1609 = &$tmp1608->rawSuper;
org$frostlang$frostc$Type* $tmp1610 = *$tmp1609;
org$frostlang$frostc$Type* $tmp1611 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1607, $tmp1610);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
org$frostlang$frostc$Type* $tmp1612 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
*(&local3) = $tmp1611;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
// line 698
org$frostlang$frostc$Type* $tmp1613 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1614 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1613);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
org$frostlang$frostc$ClassDecl* $tmp1615 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1615));
*(&local4) = $tmp1614;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
goto block50;
block51:;
// line 1
// line 701
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1616 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block50;
block50:;
goto block46;
block48:;
// line 704
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp1617 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
*(&local3) = param2;
// line 705
org$frostlang$frostc$Type* $tmp1618 = *(&local1);
org$frostlang$frostc$ClassDecl* $tmp1619 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1618);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
org$frostlang$frostc$ClassDecl* $tmp1620 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
*(&local4) = $tmp1619;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
// line 706
goto block52;
block52:;
org$frostlang$frostc$ClassDecl* $tmp1621 = *(&local4);
frost$core$Bit $tmp1622 = frost$core$Bit$init$builtin_bit($tmp1621 != NULL);
bool $tmp1623 = $tmp1622.value;
if ($tmp1623) goto block53; else goto block54;
block53:;
// line 707
frost$collections$HashSet* $tmp1624 = *(&local2);
org$frostlang$frostc$Type* $tmp1625 = *(&local3);
frost$core$Bit $tmp1626 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp1624, ((frost$collections$Key*) $tmp1625));
bool $tmp1627 = $tmp1626.value;
if ($tmp1627) goto block55; else goto block56;
block55:;
// line 708
org$frostlang$frostc$Type* $tmp1628 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
org$frostlang$frostc$ClassDecl* $tmp1629 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1630 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1631 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1631));
*(&local2) = ((frost$collections$HashSet*) NULL);
org$frostlang$frostc$Type* $tmp1632 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1633 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1628;
block56:;
// line 710
org$frostlang$frostc$ClassDecl* $tmp1634 = *(&local4);
org$frostlang$frostc$Type** $tmp1635 = &$tmp1634->rawSuper;
org$frostlang$frostc$Type* $tmp1636 = *$tmp1635;
frost$core$Bit $tmp1637 = frost$core$Bit$init$builtin_bit($tmp1636 != NULL);
bool $tmp1638 = $tmp1637.value;
if ($tmp1638) goto block57; else goto block59;
block57:;
// line 711
org$frostlang$frostc$Type* $tmp1639 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1640 = *(&local4);
org$frostlang$frostc$Type** $tmp1641 = &$tmp1640->rawSuper;
org$frostlang$frostc$Type* $tmp1642 = *$tmp1641;
org$frostlang$frostc$Type* $tmp1643 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp1639, $tmp1642);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
org$frostlang$frostc$Type* $tmp1644 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1644));
*(&local3) = $tmp1643;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
// line 712
org$frostlang$frostc$Type* $tmp1645 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1646 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, $tmp1645);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
org$frostlang$frostc$ClassDecl* $tmp1647 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
*(&local4) = $tmp1646;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
goto block58;
block59:;
// line 1
// line 715
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1648 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block58;
block58:;
goto block52;
block54:;
org$frostlang$frostc$ClassDecl* $tmp1649 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1650 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashSet* $tmp1651 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
*(&local2) = ((frost$collections$HashSet*) NULL);
goto block44;
block44:;
// line 719
org$frostlang$frostc$Type* $tmp1652 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
org$frostlang$frostc$Type* $tmp1653 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1654 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1652;

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
org$frostlang$frostc$Type$Kind* $tmp1655 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1656 = *$tmp1655;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1657;
$tmp1657 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1657->value = $tmp1656;
frost$core$Int64 $tmp1658 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1659 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1658);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1660;
$tmp1660 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1660->value = $tmp1659;
ITable* $tmp1661 = ((frost$core$Equatable*) $tmp1657)->$class->itable;
while ($tmp1661->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1661 = $tmp1661->next;
}
$fn1663 $tmp1662 = $tmp1661->methods[1];
frost$core$Bit $tmp1664 = $tmp1662(((frost$core$Equatable*) $tmp1657), ((frost$core$Equatable*) $tmp1660));
bool $tmp1665 = $tmp1664.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1660)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1657)));
if ($tmp1665) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp1666 = (frost$core$Int64) {732};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1667, $tmp1666, &$s1668);
abort(); // unreachable
block1:;
// line 733
ITable* $tmp1669 = ((frost$collections$MapView*) param1)->$class->itable;
while ($tmp1669->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp1669 = $tmp1669->next;
}
$fn1671 $tmp1670 = $tmp1669->methods[0];
frost$core$Int64 $tmp1672 = $tmp1670(((frost$collections$MapView*) param1));
frost$core$Int64 $tmp1673 = (frost$core$Int64) {0};
frost$core$Bit $tmp1674 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1672, $tmp1673);
bool $tmp1675 = $tmp1674.value;
if ($tmp1675) goto block6; else goto block7;
block6:;
// line 734
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
*(&local0) = param0;
goto block3;
block7:;
// line 736
org$frostlang$frostc$Type$Kind* $tmp1676 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1677 = *$tmp1676;
frost$core$Int64 $tmp1678 = $tmp1677.$rawValue;
frost$core$Int64 $tmp1679 = (frost$core$Int64) {11};
frost$core$Bit $tmp1680 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1678, $tmp1679);
bool $tmp1681 = $tmp1680.value;
if ($tmp1681) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1682 = (frost$core$Int64) {12};
frost$core$Bit $tmp1683 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1678, $tmp1682);
bool $tmp1684 = $tmp1683.value;
if ($tmp1684) goto block9; else goto block11;
block9:;
// line 738
frost$core$String** $tmp1685 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1686 = *$tmp1685;
frost$core$Object* $tmp1687 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param1, ((frost$collections$Key*) $tmp1686));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1687)));
org$frostlang$frostc$Type* $tmp1688 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp1687);
frost$core$Frost$unref$frost$core$Object$Q($tmp1687);
// line 739
org$frostlang$frostc$Type* $tmp1689 = *(&local1);
frost$core$Bit $tmp1690 = frost$core$Bit$init$builtin_bit($tmp1689 != NULL);
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block12; else goto block13;
block12:;
// line 740
org$frostlang$frostc$Type* $tmp1692 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
org$frostlang$frostc$Type* $tmp1693 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp1692;
goto block3;
block13:;
// line 742
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1694 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = param0;
goto block3;
block11:;
frost$core$Int64 $tmp1695 = (frost$core$Int64) {10};
frost$core$Bit $tmp1696 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1678, $tmp1695);
bool $tmp1697 = $tmp1696.value;
if ($tmp1697) goto block14; else goto block15;
block14:;
// line 745
org$frostlang$frostc$FixedArray** $tmp1698 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1699 = *$tmp1698;
frost$core$Int64 $tmp1700 = (frost$core$Int64) {0};
frost$core$Object* $tmp1701 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1699, $tmp1700);
org$frostlang$frostc$Type* $tmp1702 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1701), param1);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
org$frostlang$frostc$Type* $tmp1703 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
*(&local2) = $tmp1702;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
frost$core$Frost$unref$frost$core$Object$Q($tmp1701);
// line 746
frost$collections$Array* $tmp1704 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1704);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
frost$collections$Array* $tmp1705 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
*(&local3) = $tmp1704;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
// line 747
frost$core$Int64 $tmp1706 = (frost$core$Int64) {1};
org$frostlang$frostc$FixedArray** $tmp1707 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1708 = *$tmp1707;
ITable* $tmp1709 = ((frost$collections$CollectionView*) $tmp1708)->$class->itable;
while ($tmp1709->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1709 = $tmp1709->next;
}
$fn1711 $tmp1710 = $tmp1709->methods[0];
frost$core$Int64 $tmp1712 = $tmp1710(((frost$collections$CollectionView*) $tmp1708));
frost$core$Bit $tmp1713 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1714 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1706, $tmp1712, $tmp1713);
frost$core$Int64 $tmp1715 = $tmp1714.min;
*(&local4) = $tmp1715;
frost$core$Int64 $tmp1716 = $tmp1714.max;
frost$core$Bit $tmp1717 = $tmp1714.inclusive;
bool $tmp1718 = $tmp1717.value;
frost$core$Int64 $tmp1719 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1720 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1719);
if ($tmp1718) goto block19; else goto block20;
block19:;
int64_t $tmp1721 = $tmp1715.value;
int64_t $tmp1722 = $tmp1716.value;
bool $tmp1723 = $tmp1721 <= $tmp1722;
frost$core$Bit $tmp1724 = (frost$core$Bit) {$tmp1723};
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block16; else goto block17;
block20:;
int64_t $tmp1726 = $tmp1715.value;
int64_t $tmp1727 = $tmp1716.value;
bool $tmp1728 = $tmp1726 < $tmp1727;
frost$core$Bit $tmp1729 = (frost$core$Bit) {$tmp1728};
bool $tmp1730 = $tmp1729.value;
if ($tmp1730) goto block16; else goto block17;
block16:;
// line 748
frost$collections$Array* $tmp1731 = *(&local3);
org$frostlang$frostc$FixedArray** $tmp1732 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1733 = *$tmp1732;
frost$core$Int64 $tmp1734 = *(&local4);
frost$core$Object* $tmp1735 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1733, $tmp1734);
org$frostlang$frostc$Type* $tmp1736 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1735), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1731, ((frost$core$Object*) $tmp1736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
frost$core$Frost$unref$frost$core$Object$Q($tmp1735);
goto block18;
block18:;
frost$core$Int64 $tmp1737 = *(&local4);
int64_t $tmp1738 = $tmp1716.value;
int64_t $tmp1739 = $tmp1737.value;
int64_t $tmp1740 = $tmp1738 - $tmp1739;
frost$core$Int64 $tmp1741 = (frost$core$Int64) {$tmp1740};
frost$core$UInt64 $tmp1742 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1741);
if ($tmp1718) goto block22; else goto block23;
block22:;
uint64_t $tmp1743 = $tmp1742.value;
uint64_t $tmp1744 = $tmp1720.value;
bool $tmp1745 = $tmp1743 >= $tmp1744;
frost$core$Bit $tmp1746 = (frost$core$Bit) {$tmp1745};
bool $tmp1747 = $tmp1746.value;
if ($tmp1747) goto block21; else goto block17;
block23:;
uint64_t $tmp1748 = $tmp1742.value;
uint64_t $tmp1749 = $tmp1720.value;
bool $tmp1750 = $tmp1748 > $tmp1749;
frost$core$Bit $tmp1751 = (frost$core$Bit) {$tmp1750};
bool $tmp1752 = $tmp1751.value;
if ($tmp1752) goto block21; else goto block17;
block21:;
int64_t $tmp1753 = $tmp1737.value;
int64_t $tmp1754 = $tmp1719.value;
int64_t $tmp1755 = $tmp1753 + $tmp1754;
frost$core$Int64 $tmp1756 = (frost$core$Int64) {$tmp1755};
*(&local4) = $tmp1756;
goto block16;
block17:;
// line 750
org$frostlang$frostc$Type* $tmp1757 = *(&local2);
frost$collections$Array* $tmp1758 = *(&local3);
org$frostlang$frostc$Type* $tmp1759 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1757, ((frost$collections$ListView*) $tmp1758));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
frost$collections$Array* $tmp1760 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1761 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
*(&local0) = $tmp1759;
goto block3;
block15:;
frost$core$Int64 $tmp1762 = (frost$core$Int64) {1};
frost$core$Bit $tmp1763 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1678, $tmp1762);
bool $tmp1764 = $tmp1763.value;
if ($tmp1764) goto block24; else goto block25;
block24:;
// line 753
org$frostlang$frostc$FixedArray** $tmp1765 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1766 = *$tmp1765;
frost$core$Int64 $tmp1767 = (frost$core$Int64) {0};
frost$core$Object* $tmp1768 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1766, $tmp1767);
org$frostlang$frostc$Type* $tmp1769 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1768), param1);
org$frostlang$frostc$Type* $tmp1770 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1769);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
frost$core$Frost$unref$frost$core$Object$Q($tmp1768);
*(&local0) = $tmp1770;
goto block3;
block25:;
frost$core$Int64 $tmp1771 = (frost$core$Int64) {15};
frost$core$Bit $tmp1772 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1678, $tmp1771);
bool $tmp1773 = $tmp1772.value;
if ($tmp1773) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp1774 = (frost$core$Int64) {14};
frost$core$Bit $tmp1775 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1678, $tmp1774);
bool $tmp1776 = $tmp1775.value;
if ($tmp1776) goto block26; else goto block28;
block28:;
frost$core$Int64 $tmp1777 = (frost$core$Int64) {17};
frost$core$Bit $tmp1778 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1678, $tmp1777);
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block26; else goto block29;
block29:;
frost$core$Int64 $tmp1780 = (frost$core$Int64) {16};
frost$core$Bit $tmp1781 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1678, $tmp1780);
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block26; else goto block30;
block26:;
// line 756
frost$collections$Array* $tmp1783 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1783);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
frost$collections$Array* $tmp1784 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
*(&local5) = $tmp1783;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
// line 757
org$frostlang$frostc$FixedArray** $tmp1785 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1786 = *$tmp1785;
ITable* $tmp1787 = ((frost$collections$CollectionView*) $tmp1786)->$class->itable;
while ($tmp1787->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1787 = $tmp1787->next;
}
$fn1789 $tmp1788 = $tmp1787->methods[0];
frost$core$Int64 $tmp1790 = $tmp1788(((frost$collections$CollectionView*) $tmp1786));
frost$core$Int64 $tmp1791 = (frost$core$Int64) {1};
int64_t $tmp1792 = $tmp1790.value;
int64_t $tmp1793 = $tmp1791.value;
bool $tmp1794 = $tmp1792 >= $tmp1793;
frost$core$Bit $tmp1795 = (frost$core$Bit) {$tmp1794};
bool $tmp1796 = $tmp1795.value;
if ($tmp1796) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp1797 = (frost$core$Int64) {757};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1798, $tmp1797);
abort(); // unreachable
block31:;
// line 758
frost$core$Int64 $tmp1799 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1800 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1801 = *$tmp1800;
ITable* $tmp1802 = ((frost$collections$CollectionView*) $tmp1801)->$class->itable;
while ($tmp1802->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1802 = $tmp1802->next;
}
$fn1804 $tmp1803 = $tmp1802->methods[0];
frost$core$Int64 $tmp1805 = $tmp1803(((frost$collections$CollectionView*) $tmp1801));
frost$core$Int64 $tmp1806 = (frost$core$Int64) {1};
int64_t $tmp1807 = $tmp1805.value;
int64_t $tmp1808 = $tmp1806.value;
int64_t $tmp1809 = $tmp1807 - $tmp1808;
frost$core$Int64 $tmp1810 = (frost$core$Int64) {$tmp1809};
frost$core$Bit $tmp1811 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1812 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1799, $tmp1810, $tmp1811);
frost$core$Int64 $tmp1813 = $tmp1812.min;
*(&local6) = $tmp1813;
frost$core$Int64 $tmp1814 = $tmp1812.max;
frost$core$Bit $tmp1815 = $tmp1812.inclusive;
bool $tmp1816 = $tmp1815.value;
frost$core$Int64 $tmp1817 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1818 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1817);
if ($tmp1816) goto block36; else goto block37;
block36:;
int64_t $tmp1819 = $tmp1813.value;
int64_t $tmp1820 = $tmp1814.value;
bool $tmp1821 = $tmp1819 <= $tmp1820;
frost$core$Bit $tmp1822 = (frost$core$Bit) {$tmp1821};
bool $tmp1823 = $tmp1822.value;
if ($tmp1823) goto block33; else goto block34;
block37:;
int64_t $tmp1824 = $tmp1813.value;
int64_t $tmp1825 = $tmp1814.value;
bool $tmp1826 = $tmp1824 < $tmp1825;
frost$core$Bit $tmp1827 = (frost$core$Bit) {$tmp1826};
bool $tmp1828 = $tmp1827.value;
if ($tmp1828) goto block33; else goto block34;
block33:;
// line 759
frost$collections$Array* $tmp1829 = *(&local5);
org$frostlang$frostc$FixedArray** $tmp1830 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1831 = *$tmp1830;
frost$core$Int64 $tmp1832 = *(&local6);
frost$core$Object* $tmp1833 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1831, $tmp1832);
org$frostlang$frostc$Type* $tmp1834 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1833), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1829, ((frost$core$Object*) $tmp1834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$Frost$unref$frost$core$Object$Q($tmp1833);
goto block35;
block35:;
frost$core$Int64 $tmp1835 = *(&local6);
int64_t $tmp1836 = $tmp1814.value;
int64_t $tmp1837 = $tmp1835.value;
int64_t $tmp1838 = $tmp1836 - $tmp1837;
frost$core$Int64 $tmp1839 = (frost$core$Int64) {$tmp1838};
frost$core$UInt64 $tmp1840 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1839);
if ($tmp1816) goto block39; else goto block40;
block39:;
uint64_t $tmp1841 = $tmp1840.value;
uint64_t $tmp1842 = $tmp1818.value;
bool $tmp1843 = $tmp1841 >= $tmp1842;
frost$core$Bit $tmp1844 = (frost$core$Bit) {$tmp1843};
bool $tmp1845 = $tmp1844.value;
if ($tmp1845) goto block38; else goto block34;
block40:;
uint64_t $tmp1846 = $tmp1840.value;
uint64_t $tmp1847 = $tmp1818.value;
bool $tmp1848 = $tmp1846 > $tmp1847;
frost$core$Bit $tmp1849 = (frost$core$Bit) {$tmp1848};
bool $tmp1850 = $tmp1849.value;
if ($tmp1850) goto block38; else goto block34;
block38:;
int64_t $tmp1851 = $tmp1835.value;
int64_t $tmp1852 = $tmp1817.value;
int64_t $tmp1853 = $tmp1851 + $tmp1852;
frost$core$Int64 $tmp1854 = (frost$core$Int64) {$tmp1853};
*(&local6) = $tmp1854;
goto block33;
block34:;
// line 761
org$frostlang$frostc$Position* $tmp1855 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp1856 = *$tmp1855;
org$frostlang$frostc$Type$Kind* $tmp1857 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1858 = *$tmp1857;
frost$collections$Array* $tmp1859 = *(&local5);
org$frostlang$frostc$FixedArray** $tmp1860 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1861 = *$tmp1860;
org$frostlang$frostc$FixedArray** $tmp1862 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1863 = *$tmp1862;
ITable* $tmp1864 = ((frost$collections$CollectionView*) $tmp1863)->$class->itable;
while ($tmp1864->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1864 = $tmp1864->next;
}
$fn1866 $tmp1865 = $tmp1864->methods[0];
frost$core$Int64 $tmp1867 = $tmp1865(((frost$collections$CollectionView*) $tmp1863));
frost$core$Int64 $tmp1868 = (frost$core$Int64) {1};
int64_t $tmp1869 = $tmp1867.value;
int64_t $tmp1870 = $tmp1868.value;
int64_t $tmp1871 = $tmp1869 - $tmp1870;
frost$core$Int64 $tmp1872 = (frost$core$Int64) {$tmp1871};
frost$core$Object* $tmp1873 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1861, $tmp1872);
org$frostlang$frostc$Type* $tmp1874 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1873), param1);
frost$core$Int64* $tmp1875 = &param0->priority;
frost$core$Int64 $tmp1876 = *$tmp1875;
org$frostlang$frostc$Type* $tmp1877 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1856, $tmp1858, ((frost$collections$ListView*) $tmp1859), $tmp1874, $tmp1876);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
frost$core$Frost$unref$frost$core$Object$Q($tmp1873);
frost$collections$Array* $tmp1878 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
*(&local5) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp1877;
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
org$frostlang$frostc$Type* $tmp1879 = *(&local0);
org$frostlang$frostc$Type$Kind* $tmp1880 = &$tmp1879->typeKind;
org$frostlang$frostc$Type$Kind $tmp1881 = *$tmp1880;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1882;
$tmp1882 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1882->value = $tmp1881;
frost$core$Int64 $tmp1883 = (frost$core$Int64) {6};
org$frostlang$frostc$Type$Kind $tmp1884 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1883);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1885;
$tmp1885 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1885->value = $tmp1884;
ITable* $tmp1886 = ((frost$core$Equatable*) $tmp1882)->$class->itable;
while ($tmp1886->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1886 = $tmp1886->next;
}
$fn1888 $tmp1887 = $tmp1886->methods[1];
frost$core$Bit $tmp1889 = $tmp1887(((frost$core$Equatable*) $tmp1882), ((frost$core$Equatable*) $tmp1885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1885)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1882)));
bool $tmp1890 = $tmp1889.value;
if ($tmp1890) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Type* $tmp1891 = *(&local0);
return $tmp1891;
block5:;
frost$core$Int64 $tmp1892 = (frost$core$Int64) {732};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1893, $tmp1892, &$s1894);
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frostc$Type$get_hash$R$frost$core$Int64(org$frostlang$frostc$Type* param0) {

// line 772
frost$core$String** $tmp1895 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1896 = *$tmp1895;
ITable* $tmp1897 = ((frost$collections$Key*) $tmp1896)->$class->itable;
while ($tmp1897->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp1897 = $tmp1897->next;
}
$fn1899 $tmp1898 = $tmp1897->methods[0];
frost$core$Int64 $tmp1900 = $tmp1898(((frost$collections$Key*) $tmp1896));
return $tmp1900;

}
frost$core$String* org$frostlang$frostc$Type$get_asString$R$frost$core$String(org$frostlang$frostc$Type* param0) {

// line 777
frost$core$String** $tmp1901 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1902 = *$tmp1901;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
return $tmp1902;

}
void org$frostlang$frostc$Type$cleanup(org$frostlang$frostc$Type* param0) {

// line 4
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
org$frostlang$frostc$FixedArray** $tmp1903 = &param0->subtypes;
org$frostlang$frostc$FixedArray* $tmp1904 = *$tmp1903;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
frost$core$Weak** $tmp1905 = &param0->genericClassParameter;
frost$core$Weak* $tmp1906 = *$tmp1905;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
frost$core$Weak** $tmp1907 = &param0->genericMethodParameter;
frost$core$Weak* $tmp1908 = *$tmp1907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
org$frostlang$frostc$MethodRef** $tmp1909 = &param0->methodRef;
org$frostlang$frostc$MethodRef* $tmp1910 = *$tmp1909;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
return;

}

