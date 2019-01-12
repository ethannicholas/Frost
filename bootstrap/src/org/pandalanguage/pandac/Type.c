#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/MethodDecl/GenericParameter.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/HashSet.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/MapView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"

__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p0, ((org$pandalanguage$pandac$Type*) p1));

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Type$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { org$pandalanguage$pandac$Type$get_hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Type$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$collections$Key, { org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, org$pandalanguage$pandac$Type$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isSigned$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isChar$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isNumeric$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isSteppedRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isNullable$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$intersection$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$get_hash$R$panda$core$Int64} };

typedef panda$core$Bit (*$fn17)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn26)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn36)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn46)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn56)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn66)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn95)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn104)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn114)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn124)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn134)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn144)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn184)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn193)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn206)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn223)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn236)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn253)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn295)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn299)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn304)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn453)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn457)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn462)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn511)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn515)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn520)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn570)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn595)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn606)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn618)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn645)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1077)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1089)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1100)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1111)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1123)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1135)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1150)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1211)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1263)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1273)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1299)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1314)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1325)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1337)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1349)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1360)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1375)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1386)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1398)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1410)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1425)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1452)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1463)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1475)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1487)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1500)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1521)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1536)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1548)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1564)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1578)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1589)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1612)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1623)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1644)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1661)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1753)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1761)(panda$collections$MapView*);
typedef panda$core$Int64 (*$fn1801)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1879)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1894)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1956)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1978)(panda$collections$Key*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 29, -3248623696866231612, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 197, -4766644293884402549, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x73\x69\x7a\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 151, 3475860875978515115, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x73\x75\x62\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x70\x72\x69\x6f\x72\x69\x74\x79\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 292, -4835118214484693251, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3d", 11, 4555205210328637565, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x3d", 10, -7078666603951044273, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5895082338763246016, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -1180377256514028899, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s1066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s1201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x69\x73\x43\x6c\x61\x73\x73\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 92, -6465324935451040327, NULL };
static panda$core$String $s1241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x69\x73\x4d\x65\x74\x68\x6f\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 93, 7566891704899688644, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -1766462943154097753, NULL };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, 916331035999347368, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 101, 8536794682809672847, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 127, -3361594779411923433, NULL };
static panda$core$String $s1492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 110, -5923730647398865852, NULL };
static panda$core$String $s1598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 180, -8366325379630919520, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 180, -2602239416666791808, NULL };

void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Type* param0, panda$core$String* param1, org$pandalanguage$pandac$Type$Kind param2, org$pandalanguage$pandac$Position param3) {

// line 78
panda$core$Bit $tmp2 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit(param0, param1, param2, param3, $tmp2);
return;

}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$Type* param0, panda$core$String* param1, org$pandalanguage$pandac$Type$Kind param2, org$pandalanguage$pandac$Position param3, panda$core$Bit param4) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
// line 38
panda$core$Weak* $tmp3 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp3, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Weak** $tmp4 = &param0->genericClassParameter;
panda$core$Weak* $tmp5 = *$tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$core$Weak** $tmp6 = &param0->genericClassParameter;
*$tmp6 = $tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.ClassDecl.GenericParameter?>)
// line 41
panda$core$Weak* $tmp7 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp7, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Weak** $tmp8 = &param0->genericMethodParameter;
panda$core$Weak* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$Weak** $tmp10 = &param0->genericMethodParameter;
*$tmp10 = $tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// unreffing REF($17:panda.core.Weak<org.pandalanguage.pandac.MethodDecl.GenericParameter?>)
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp11;
$tmp11 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp11->value = param2;
panda$core$Int64 $tmp12 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp13 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp12);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp14;
$tmp14 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp14->value = $tmp13;
ITable* $tmp15 = ((panda$core$Equatable*) $tmp11)->$class->itable;
while ($tmp15->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp15 = $tmp15->next;
}
$fn17 $tmp16 = $tmp15->methods[1];
panda$core$Bit $tmp18 = $tmp16(((panda$core$Equatable*) $tmp11), ((panda$core$Equatable*) $tmp14));
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp20;
$tmp20 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp20->value = param2;
panda$core$Int64 $tmp21 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp22 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp21);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp23;
$tmp23 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp23->value = $tmp22;
ITable* $tmp24 = ((panda$core$Equatable*) $tmp20)->$class->itable;
while ($tmp24->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp24 = $tmp24->next;
}
$fn26 $tmp25 = $tmp24->methods[1];
panda$core$Bit $tmp27 = $tmp25(((panda$core$Equatable*) $tmp20), ((panda$core$Equatable*) $tmp23));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp23)));
// unreffing REF($45:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp20)));
// unreffing REF($41:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local4) = $tmp27;
goto block3;
block2:;
*(&local4) = $tmp18;
goto block3;
block3:;
panda$core$Bit $tmp28 = *(&local4);
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp30;
$tmp30 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp30->value = param2;
panda$core$Int64 $tmp31 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp32 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp31);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp33;
$tmp33 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp33->value = $tmp32;
ITable* $tmp34 = ((panda$core$Equatable*) $tmp30)->$class->itable;
while ($tmp34->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[1];
panda$core$Bit $tmp37 = $tmp35(((panda$core$Equatable*) $tmp30), ((panda$core$Equatable*) $tmp33));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp33)));
// unreffing REF($65:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp30)));
// unreffing REF($61:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local3) = $tmp37;
goto block6;
block5:;
*(&local3) = $tmp28;
goto block6;
block6:;
panda$core$Bit $tmp38 = *(&local3);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block7; else goto block8;
block7:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp40;
$tmp40 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp40->value = param2;
panda$core$Int64 $tmp41 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp42 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp41);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp43;
$tmp43 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp43->value = $tmp42;
ITable* $tmp44 = ((panda$core$Equatable*) $tmp40)->$class->itable;
while ($tmp44->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[1];
panda$core$Bit $tmp47 = $tmp45(((panda$core$Equatable*) $tmp40), ((panda$core$Equatable*) $tmp43));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp43)));
// unreffing REF($85:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp40)));
// unreffing REF($81:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp47;
goto block9;
block8:;
*(&local2) = $tmp38;
goto block9;
block9:;
panda$core$Bit $tmp48 = *(&local2);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp50;
$tmp50 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp50->value = param2;
panda$core$Int64 $tmp51 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp52 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp51);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp53;
$tmp53 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp53->value = $tmp52;
ITable* $tmp54 = ((panda$core$Equatable*) $tmp50)->$class->itable;
while ($tmp54->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[1];
panda$core$Bit $tmp57 = $tmp55(((panda$core$Equatable*) $tmp50), ((panda$core$Equatable*) $tmp53));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp53)));
// unreffing REF($105:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp50)));
// unreffing REF($101:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp57;
goto block12;
block11:;
*(&local1) = $tmp48;
goto block12;
block12:;
panda$core$Bit $tmp58 = *(&local1);
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block13; else goto block14;
block13:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp60;
$tmp60 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp60->value = param2;
panda$core$Int64 $tmp61 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp62 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp61);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp63;
$tmp63 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp63->value = $tmp62;
ITable* $tmp64 = ((panda$core$Equatable*) $tmp60)->$class->itable;
while ($tmp64->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp64 = $tmp64->next;
}
$fn66 $tmp65 = $tmp64->methods[1];
panda$core$Bit $tmp67 = $tmp65(((panda$core$Equatable*) $tmp60), ((panda$core$Equatable*) $tmp63));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp63)));
// unreffing REF($125:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp60)));
// unreffing REF($121:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp67;
goto block15;
block14:;
*(&local0) = $tmp58;
goto block15;
block15:;
panda$core$Bit $tmp68 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp14)));
// unreffing REF($36:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp11)));
// unreffing REF($32:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp70 = (panda$core$Int64) {84};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block16:;
// line 85
org$pandalanguage$pandac$Type$Kind* $tmp73 = &param0->typeKind;
*$tmp73 = param2;
// line 86
org$pandalanguage$pandac$Position* $tmp74 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
*$tmp74 = param3;
// line 87
panda$core$Bit* $tmp75 = &param0->resolved;
*$tmp75 = param4;
// line 88
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray** $tmp76 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp77 = *$tmp76;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
org$pandalanguage$pandac$FixedArray** $tmp78 = &param0->subtypes;
*$tmp78 = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 89
panda$core$Int64 $tmp79 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Symbol$Kind $tmp80 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp79);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp80, param3, param1);
return;

}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64(org$pandalanguage$pandac$Type* param0, panda$core$String* param1, org$pandalanguage$pandac$Type$Kind param2, panda$core$Int64 param3) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
// line 38
panda$core$Weak* $tmp81 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp81, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
panda$core$Weak** $tmp82 = &param0->genericClassParameter;
panda$core$Weak* $tmp83 = *$tmp82;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
panda$core$Weak** $tmp84 = &param0->genericClassParameter;
*$tmp84 = $tmp81;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.ClassDecl.GenericParameter?>)
// line 41
panda$core$Weak* $tmp85 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp85, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
panda$core$Weak** $tmp86 = &param0->genericMethodParameter;
panda$core$Weak* $tmp87 = *$tmp86;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$core$Weak** $tmp88 = &param0->genericMethodParameter;
*$tmp88 = $tmp85;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing REF($17:panda.core.Weak<org.pandalanguage.pandac.MethodDecl.GenericParameter?>)
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp89;
$tmp89 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp89->value = param2;
panda$core$Int64 $tmp90 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp91 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp90);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp92;
$tmp92 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp92->value = $tmp91;
ITable* $tmp93 = ((panda$core$Equatable*) $tmp89)->$class->itable;
while ($tmp93->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[1];
panda$core$Bit $tmp96 = $tmp94(((panda$core$Equatable*) $tmp89), ((panda$core$Equatable*) $tmp92));
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp98;
$tmp98 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp98->value = param2;
panda$core$Int64 $tmp99 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp100 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp99);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp101;
$tmp101 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp101->value = $tmp100;
ITable* $tmp102 = ((panda$core$Equatable*) $tmp98)->$class->itable;
while ($tmp102->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[1];
panda$core$Bit $tmp105 = $tmp103(((panda$core$Equatable*) $tmp98), ((panda$core$Equatable*) $tmp101));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp101)));
// unreffing REF($45:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp98)));
// unreffing REF($41:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local4) = $tmp105;
goto block3;
block2:;
*(&local4) = $tmp96;
goto block3;
block3:;
panda$core$Bit $tmp106 = *(&local4);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp108;
$tmp108 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp108->value = param2;
panda$core$Int64 $tmp109 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp110 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp109);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp111;
$tmp111 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp111->value = $tmp110;
ITable* $tmp112 = ((panda$core$Equatable*) $tmp108)->$class->itable;
while ($tmp112->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[1];
panda$core$Bit $tmp115 = $tmp113(((panda$core$Equatable*) $tmp108), ((panda$core$Equatable*) $tmp111));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp111)));
// unreffing REF($65:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp108)));
// unreffing REF($61:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local3) = $tmp115;
goto block6;
block5:;
*(&local3) = $tmp106;
goto block6;
block6:;
panda$core$Bit $tmp116 = *(&local3);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block7; else goto block8;
block7:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp118;
$tmp118 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp118->value = param2;
panda$core$Int64 $tmp119 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp120 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp119);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp121;
$tmp121 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp121->value = $tmp120;
ITable* $tmp122 = ((panda$core$Equatable*) $tmp118)->$class->itable;
while ($tmp122->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[1];
panda$core$Bit $tmp125 = $tmp123(((panda$core$Equatable*) $tmp118), ((panda$core$Equatable*) $tmp121));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp121)));
// unreffing REF($85:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp118)));
// unreffing REF($81:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp125;
goto block9;
block8:;
*(&local2) = $tmp116;
goto block9;
block9:;
panda$core$Bit $tmp126 = *(&local2);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp128;
$tmp128 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp128->value = param2;
panda$core$Int64 $tmp129 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp130 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp129);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp131;
$tmp131 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp131->value = $tmp130;
ITable* $tmp132 = ((panda$core$Equatable*) $tmp128)->$class->itable;
while ($tmp132->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp132 = $tmp132->next;
}
$fn134 $tmp133 = $tmp132->methods[1];
panda$core$Bit $tmp135 = $tmp133(((panda$core$Equatable*) $tmp128), ((panda$core$Equatable*) $tmp131));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp131)));
// unreffing REF($105:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp128)));
// unreffing REF($101:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp135;
goto block12;
block11:;
*(&local1) = $tmp126;
goto block12;
block12:;
panda$core$Bit $tmp136 = *(&local1);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block13; else goto block14;
block13:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp138;
$tmp138 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp138->value = param2;
panda$core$Int64 $tmp139 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp140 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp139);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp141;
$tmp141 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp141->value = $tmp140;
ITable* $tmp142 = ((panda$core$Equatable*) $tmp138)->$class->itable;
while ($tmp142->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp142 = $tmp142->next;
}
$fn144 $tmp143 = $tmp142->methods[1];
panda$core$Bit $tmp145 = $tmp143(((panda$core$Equatable*) $tmp138), ((panda$core$Equatable*) $tmp141));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp141)));
// unreffing REF($125:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp138)));
// unreffing REF($121:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp145;
goto block15;
block14:;
*(&local0) = $tmp136;
goto block15;
block15:;
panda$core$Bit $tmp146 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp92)));
// unreffing REF($36:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp89)));
// unreffing REF($32:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp148 = (panda$core$Int64) {95};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s149, $tmp148, &$s150);
abort(); // unreachable
block16:;
// line 96
panda$core$Bit $tmp151 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(param1, &$s152);
panda$core$Bit $tmp153 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp151);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp155 = (panda$core$Int64) {96};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s156, $tmp155);
abort(); // unreachable
block18:;
// line 97
org$pandalanguage$pandac$Type$Kind* $tmp157 = &param0->typeKind;
*$tmp157 = param2;
// line 98
org$pandalanguage$pandac$Position $tmp158 = org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(param3, param3);
org$pandalanguage$pandac$Position* $tmp159 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
*$tmp159 = $tmp158;
// line 99
panda$core$Bit $tmp160 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp161 = &param0->resolved;
*$tmp161 = $tmp160;
// line 100
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray** $tmp162 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp163 = *$tmp162;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
org$pandalanguage$pandac$FixedArray** $tmp164 = &param0->subtypes;
*$tmp164 = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 101
panda$core$Int64 $tmp165 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Symbol$Kind $tmp166 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp165);
org$pandalanguage$pandac$Position* $tmp167 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp168 = *$tmp167;
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp166, $tmp168, param1);
return;

}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* param0, panda$core$String* param1, org$pandalanguage$pandac$Type$Kind param2, org$pandalanguage$pandac$Position param3, panda$collections$ListView* param4, panda$core$Bit param5) {

// line 105
panda$core$Int64 $tmp169 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit$panda$core$Int64(param0, param1, param2, param3, param4, param5, $tmp169);
return;

}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit$panda$core$Int64(org$pandalanguage$pandac$Type* param0, panda$core$String* param1, org$pandalanguage$pandac$Type$Kind param2, org$pandalanguage$pandac$Position param3, panda$collections$ListView* param4, panda$core$Bit param5, panda$core$Int64 param6) {

panda$core$Bit local0;
// line 38
panda$core$Weak* $tmp170 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp170, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
panda$core$Weak** $tmp171 = &param0->genericClassParameter;
panda$core$Weak* $tmp172 = *$tmp171;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
panda$core$Weak** $tmp173 = &param0->genericClassParameter;
*$tmp173 = $tmp170;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.ClassDecl.GenericParameter?>)
// line 41
panda$core$Weak* $tmp174 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp174, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
panda$core$Weak** $tmp175 = &param0->genericMethodParameter;
panda$core$Weak* $tmp176 = *$tmp175;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
panda$core$Weak** $tmp177 = &param0->genericMethodParameter;
*$tmp177 = $tmp174;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
// unreffing REF($17:panda.core.Weak<org.pandalanguage.pandac.MethodDecl.GenericParameter?>)
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp178;
$tmp178 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp178->value = param2;
panda$core$Int64 $tmp179 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp180 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp179);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp181;
$tmp181 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp181->value = $tmp180;
ITable* $tmp182 = ((panda$core$Equatable*) $tmp178)->$class->itable;
while ($tmp182->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[1];
panda$core$Bit $tmp185 = $tmp183(((panda$core$Equatable*) $tmp178), ((panda$core$Equatable*) $tmp181));
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp187;
$tmp187 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp187->value = param2;
panda$core$Int64 $tmp188 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp189 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp188);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp190;
$tmp190 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp190->value = $tmp189;
ITable* $tmp191 = ((panda$core$Equatable*) $tmp187)->$class->itable;
while ($tmp191->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[1];
panda$core$Bit $tmp194 = $tmp192(((panda$core$Equatable*) $tmp187), ((panda$core$Equatable*) $tmp190));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp190)));
// unreffing REF($45:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp187)));
// unreffing REF($41:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp194;
goto block3;
block2:;
*(&local0) = $tmp185;
goto block3;
block3:;
panda$core$Bit $tmp195 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp181)));
// unreffing REF($36:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp178)));
// unreffing REF($32:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp197 = (panda$core$Int64) {109};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s198, $tmp197, &$s199);
abort(); // unreachable
block4:;
// line 111
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp200;
$tmp200 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp200->value = param2;
panda$core$Int64 $tmp201 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp202 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp201);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp203;
$tmp203 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp203->value = $tmp202;
ITable* $tmp204 = ((panda$core$Equatable*) $tmp200)->$class->itable;
while ($tmp204->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp204 = $tmp204->next;
}
$fn206 $tmp205 = $tmp204->methods[0];
panda$core$Bit $tmp207 = $tmp205(((panda$core$Equatable*) $tmp200), ((panda$core$Equatable*) $tmp203));
panda$core$Bit $tmp208 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(param1, &$s209);
panda$core$Bit $tmp210 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp207, $tmp208);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp212 = (panda$core$Int64) {111};
panda$core$String* $tmp213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s214, param1);
panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp213, &$s216);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp217;
$tmp217 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp217->value = param2;
panda$core$Int64 $tmp218 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp219 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp218);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp220;
$tmp220 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp220->value = $tmp219;
ITable* $tmp221 = ((panda$core$Equatable*) $tmp217)->$class->itable;
while ($tmp221->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp221 = $tmp221->next;
}
$fn223 $tmp222 = $tmp221->methods[0];
panda$core$Bit $tmp224 = $tmp222(((panda$core$Equatable*) $tmp217), ((panda$core$Equatable*) $tmp220));
panda$core$Bit$wrapper* $tmp225;
$tmp225 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp225->value = $tmp224;
panda$core$String* $tmp226 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp215, ((panda$core$Object*) $tmp225));
panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp226, &$s228);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s229, $tmp212, $tmp227);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
// unreffing REF($94:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
// unreffing REF($93:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
// unreffing REF($92:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp220)));
// unreffing REF($89:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp217)));
// unreffing REF($85:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
// unreffing REF($84:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
// unreffing REF($83:panda.core.String)
abort(); // unreachable
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp203)));
// unreffing REF($75:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp200)));
// unreffing REF($71:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
// line 113
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp230;
$tmp230 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp230->value = param2;
panda$core$Int64 $tmp231 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp232 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp231);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp233;
$tmp233 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp233->value = $tmp232;
ITable* $tmp234 = ((panda$core$Equatable*) $tmp230)->$class->itable;
while ($tmp234->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp234 = $tmp234->next;
}
$fn236 $tmp235 = $tmp234->methods[0];
panda$core$Bit $tmp237 = $tmp235(((panda$core$Equatable*) $tmp230), ((panda$core$Equatable*) $tmp233));
panda$core$Bit $tmp238 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(param1, &$s239);
panda$core$Bit $tmp240 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp237, $tmp238);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp242 = (panda$core$Int64) {113};
panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s244, param1);
panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp243, &$s246);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp247;
$tmp247 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp247->value = param2;
panda$core$Int64 $tmp248 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp249 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp248);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp250;
$tmp250 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp250->value = $tmp249;
ITable* $tmp251 = ((panda$core$Equatable*) $tmp247)->$class->itable;
while ($tmp251->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
panda$core$Bit $tmp254 = $tmp252(((panda$core$Equatable*) $tmp247), ((panda$core$Equatable*) $tmp250));
panda$core$Bit$wrapper* $tmp255;
$tmp255 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp255->value = $tmp254;
panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp245, ((panda$core$Object*) $tmp255));
panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp256, &$s258);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s259, $tmp242, $tmp257);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
// unreffing REF($148:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// unreffing REF($147:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
// unreffing REF($146:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp250)));
// unreffing REF($143:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp247)));
// unreffing REF($139:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
// unreffing REF($138:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing REF($137:panda.core.String)
abort(); // unreachable
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp233)));
// unreffing REF($129:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp230)));
// unreffing REF($125:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
// line 115
org$pandalanguage$pandac$Type$Kind* $tmp260 = &param0->typeKind;
*$tmp260 = param2;
// line 116
org$pandalanguage$pandac$Position* $tmp261 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
*$tmp261 = param3;
// line 117
panda$core$Bit* $tmp262 = &param0->resolved;
*$tmp262 = param5;
// line 118
panda$core$Int64* $tmp263 = &param0->priority;
*$tmp263 = param6;
// line 119
org$pandalanguage$pandac$FixedArray* $tmp264 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init$panda$collections$ListView$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp264, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
org$pandalanguage$pandac$FixedArray** $tmp265 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp266 = *$tmp265;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
org$pandalanguage$pandac$FixedArray** $tmp267 = &param0->subtypes;
*$tmp267 = $tmp264;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
// unreffing REF($192:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.Type>)
// line 120
panda$core$Int64 $tmp268 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Symbol$Kind $tmp269 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp268);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp269, param3, param1);
return;

}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* param0, panda$collections$ListView* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
panda$core$Bit local3;
// line 38
panda$core$Weak* $tmp270 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp270, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
panda$core$Weak** $tmp271 = &param0->genericClassParameter;
panda$core$Weak* $tmp272 = *$tmp271;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
panda$core$Weak** $tmp273 = &param0->genericClassParameter;
*$tmp273 = $tmp270;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.ClassDecl.GenericParameter?>)
// line 41
panda$core$Weak* $tmp274 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp274, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
panda$core$Weak** $tmp275 = &param0->genericMethodParameter;
panda$core$Weak* $tmp276 = *$tmp275;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp276));
panda$core$Weak** $tmp277 = &param0->genericMethodParameter;
*$tmp277 = $tmp274;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
// unreffing REF($17:panda.core.Weak<org.pandalanguage.pandac.MethodDecl.GenericParameter?>)
// line 124
panda$core$Int64 $tmp278 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Type$Kind $tmp279 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp278);
org$pandalanguage$pandac$Type$Kind* $tmp280 = &param0->typeKind;
*$tmp280 = $tmp279;
// line 125
org$pandalanguage$pandac$FixedArray* $tmp281 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init$panda$collections$ListView$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp281, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
org$pandalanguage$pandac$FixedArray** $tmp282 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp283 = *$tmp282;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
org$pandalanguage$pandac$FixedArray** $tmp284 = &param0->subtypes;
*$tmp284 = $tmp281;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
// unreffing REF($38:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.Type>)
// line 126
panda$core$MutableString* $tmp285 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp285, &$s286);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
panda$core$MutableString* $tmp287 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
*(&local0) = $tmp285;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
// unreffing REF($55:panda.core.MutableString)
// line 127
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s288));
panda$core$String* $tmp289 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
*(&local1) = &$s290;
// line 128
panda$core$Bit $tmp291 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp292 = &param0->resolved;
*$tmp292 = $tmp291;
// line 129
ITable* $tmp293 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp293->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp293 = $tmp293->next;
}
$fn295 $tmp294 = $tmp293->methods[0];
panda$collections$Iterator* $tmp296 = $tmp294(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp297 = $tmp296->$class->itable;
while ($tmp297->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp297 = $tmp297->next;
}
$fn299 $tmp298 = $tmp297->methods[0];
panda$core$Bit $tmp300 = $tmp298($tmp296);
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp302 = $tmp296->$class->itable;
while ($tmp302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp302 = $tmp302->next;
}
$fn304 $tmp303 = $tmp302->methods[1];
panda$core$Object* $tmp305 = $tmp303($tmp296);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp305)));
org$pandalanguage$pandac$Type* $tmp306 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp305);
// line 130
panda$core$MutableString* $tmp307 = *(&local0);
panda$core$String* $tmp308 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp307, $tmp308);
// line 131
panda$core$MutableString* $tmp309 = *(&local0);
org$pandalanguage$pandac$Type* $tmp310 = *(&local2);
panda$core$MutableString$append$panda$core$Object($tmp309, ((panda$core$Object*) $tmp310));
// line 132
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s311));
panda$core$String* $tmp312 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
*(&local1) = &$s313;
// line 133
panda$core$Bit* $tmp314 = &param0->resolved;
panda$core$Bit $tmp315 = *$tmp314;
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Type* $tmp317 = *(&local2);
panda$core$Bit* $tmp318 = &$tmp317->resolved;
panda$core$Bit $tmp319 = *$tmp318;
*(&local3) = $tmp319;
goto block6;
block5:;
*(&local3) = $tmp315;
goto block6;
block6:;
panda$core$Bit $tmp320 = *(&local3);
panda$core$Bit* $tmp321 = &param0->resolved;
*$tmp321 = $tmp320;
panda$core$Panda$unref$panda$core$Object$Q($tmp305);
// unreffing REF($94:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp322 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
// unreffing REF($83:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 135
panda$core$MutableString* $tmp323 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp323, &$s324);
// line 136
panda$core$Int64 $tmp325 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Symbol$Kind $tmp326 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp325);
org$pandalanguage$pandac$Position* $tmp327 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp328 = *$tmp327;
panda$core$MutableString* $tmp329 = *(&local0);
panda$core$String* $tmp330 = panda$core$MutableString$finish$R$panda$core$String($tmp329);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp326, $tmp328, $tmp330);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
// unreffing REF($156:panda.core.String)
panda$core$String* $tmp331 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp332 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
// unreffing name
*(&local0) = ((panda$core$MutableString*) NULL);
return;

}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$ClassDecl$GenericParameter* param1) {

// line 38
panda$core$Weak* $tmp333 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp333, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
panda$core$Weak** $tmp334 = &param0->genericClassParameter;
panda$core$Weak* $tmp335 = *$tmp334;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp335));
panda$core$Weak** $tmp336 = &param0->genericClassParameter;
*$tmp336 = $tmp333;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.ClassDecl.GenericParameter?>)
// line 41
panda$core$Weak* $tmp337 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp337, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
panda$core$Weak** $tmp338 = &param0->genericMethodParameter;
panda$core$Weak* $tmp339 = *$tmp338;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
panda$core$Weak** $tmp340 = &param0->genericMethodParameter;
*$tmp340 = $tmp337;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
// unreffing REF($17:panda.core.Weak<org.pandalanguage.pandac.MethodDecl.GenericParameter?>)
// line 140
panda$core$Int64 $tmp341 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp342 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp341);
org$pandalanguage$pandac$Type$Kind* $tmp343 = &param0->typeKind;
*$tmp343 = $tmp342;
// line 141
panda$core$Weak* $tmp344 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp344, ((panda$core$Object*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
panda$core$Weak** $tmp345 = &param0->genericClassParameter;
panda$core$Weak* $tmp346 = *$tmp345;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
panda$core$Weak** $tmp347 = &param0->genericClassParameter;
*$tmp347 = $tmp344;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
// unreffing REF($39:panda.core.Weak<org.pandalanguage.pandac.ClassDecl.GenericParameter?>)
// line 142
panda$core$Bit $tmp348 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp349 = &param0->resolved;
*$tmp349 = $tmp348;
// line 143
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray** $tmp350 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp351 = *$tmp350;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
org$pandalanguage$pandac$FixedArray** $tmp352 = &param0->subtypes;
*$tmp352 = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 144
panda$core$Int64 $tmp353 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Symbol$Kind $tmp354 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp353);
org$pandalanguage$pandac$Position* $tmp355 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp356 = *$tmp355;
panda$core$String** $tmp357 = &param1->owner;
panda$core$String* $tmp358 = *$tmp357;
panda$core$String* $tmp359 = panda$core$String$convert$R$panda$core$String($tmp358);
panda$core$String* $tmp360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp359, &$s361);
panda$core$String** $tmp362 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp363 = *$tmp362;
panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp360, $tmp363);
panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, &$s366);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp354, $tmp356, $tmp365);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp365));
// unreffing REF($82:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
// unreffing REF($81:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
// unreffing REF($77:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
// unreffing REF($76:panda.core.String)
return;

}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$MethodDecl$GenericParameter(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$MethodDecl$GenericParameter* param1) {

// line 38
panda$core$Weak* $tmp367 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp367, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
panda$core$Weak** $tmp368 = &param0->genericClassParameter;
panda$core$Weak* $tmp369 = *$tmp368;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
panda$core$Weak** $tmp370 = &param0->genericClassParameter;
*$tmp370 = $tmp367;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.ClassDecl.GenericParameter?>)
// line 41
panda$core$Weak* $tmp371 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp371, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
panda$core$Weak** $tmp372 = &param0->genericMethodParameter;
panda$core$Weak* $tmp373 = *$tmp372;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
panda$core$Weak** $tmp374 = &param0->genericMethodParameter;
*$tmp374 = $tmp371;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
// unreffing REF($17:panda.core.Weak<org.pandalanguage.pandac.MethodDecl.GenericParameter?>)
// line 148
panda$core$Int64 $tmp375 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp376 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp375);
org$pandalanguage$pandac$Type$Kind* $tmp377 = &param0->typeKind;
*$tmp377 = $tmp376;
// line 149
panda$core$Weak* $tmp378 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp378, ((panda$core$Object*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
panda$core$Weak** $tmp379 = &param0->genericMethodParameter;
panda$core$Weak* $tmp380 = *$tmp379;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
panda$core$Weak** $tmp381 = &param0->genericMethodParameter;
*$tmp381 = $tmp378;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
// unreffing REF($39:panda.core.Weak<org.pandalanguage.pandac.MethodDecl.GenericParameter?>)
// line 150
panda$core$Bit $tmp382 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp383 = &param0->resolved;
*$tmp383 = $tmp382;
// line 151
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray** $tmp384 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp385 = *$tmp384;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
org$pandalanguage$pandac$FixedArray** $tmp386 = &param0->subtypes;
*$tmp386 = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 152
panda$core$Int64 $tmp387 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Symbol$Kind $tmp388 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp387);
org$pandalanguage$pandac$Position* $tmp389 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp390 = *$tmp389;
panda$core$String** $tmp391 = &param1->owner;
panda$core$String* $tmp392 = *$tmp391;
panda$core$String* $tmp393 = panda$core$String$convert$R$panda$core$String($tmp392);
panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp393, &$s395);
panda$core$String** $tmp396 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp397 = *$tmp396;
panda$core$String* $tmp398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp394, $tmp397);
panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp398, &$s400);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp388, $tmp390, $tmp399);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
// unreffing REF($82:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
// unreffing REF($81:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
// unreffing REF($77:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
// unreffing REF($76:panda.core.String)
return;

}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$MethodRef* param1) {

// line 38
panda$core$Weak* $tmp401 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp401, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
panda$core$Weak** $tmp402 = &param0->genericClassParameter;
panda$core$Weak* $tmp403 = *$tmp402;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
panda$core$Weak** $tmp404 = &param0->genericClassParameter;
*$tmp404 = $tmp401;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.ClassDecl.GenericParameter?>)
// line 41
panda$core$Weak* $tmp405 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp405, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
panda$core$Weak** $tmp406 = &param0->genericMethodParameter;
panda$core$Weak* $tmp407 = *$tmp406;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
panda$core$Weak** $tmp408 = &param0->genericMethodParameter;
*$tmp408 = $tmp405;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
// unreffing REF($17:panda.core.Weak<org.pandalanguage.pandac.MethodDecl.GenericParameter?>)
// line 156
org$pandalanguage$pandac$Type** $tmp409 = &param1->effectiveType;
org$pandalanguage$pandac$Type* $tmp410 = *$tmp409;
org$pandalanguage$pandac$Type$Kind* $tmp411 = &$tmp410->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp412 = *$tmp411;
org$pandalanguage$pandac$Type$Kind* $tmp413 = &param0->typeKind;
*$tmp413 = $tmp412;
// line 157
org$pandalanguage$pandac$Type** $tmp414 = &param1->effectiveType;
org$pandalanguage$pandac$Type* $tmp415 = *$tmp414;
org$pandalanguage$pandac$FixedArray** $tmp416 = &$tmp415->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp417 = *$tmp416;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
org$pandalanguage$pandac$FixedArray** $tmp418 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp419 = *$tmp418;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
org$pandalanguage$pandac$FixedArray** $tmp420 = &param0->subtypes;
*$tmp420 = $tmp417;
// line 158
org$pandalanguage$pandac$Type** $tmp421 = &param1->effectiveType;
org$pandalanguage$pandac$Type* $tmp422 = *$tmp421;
panda$core$Bit* $tmp423 = &$tmp422->resolved;
panda$core$Bit $tmp424 = *$tmp423;
panda$core$Bit* $tmp425 = &param0->resolved;
*$tmp425 = $tmp424;
// line 159
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$MethodRef** $tmp426 = &param0->methodRef;
org$pandalanguage$pandac$MethodRef* $tmp427 = *$tmp426;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
org$pandalanguage$pandac$MethodRef** $tmp428 = &param0->methodRef;
*$tmp428 = param1;
// line 160
panda$core$Int64 $tmp429 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Symbol$Kind $tmp430 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp429);
org$pandalanguage$pandac$Type** $tmp431 = &param1->effectiveType;
org$pandalanguage$pandac$Type* $tmp432 = *$tmp431;
org$pandalanguage$pandac$Position* $tmp433 = &((org$pandalanguage$pandac$Symbol*) $tmp432)->position;
org$pandalanguage$pandac$Position $tmp434 = *$tmp433;
org$pandalanguage$pandac$Type** $tmp435 = &param1->effectiveType;
org$pandalanguage$pandac$Type* $tmp436 = *$tmp435;
panda$core$String** $tmp437 = &((org$pandalanguage$pandac$Symbol*) $tmp436)->name;
panda$core$String* $tmp438 = *$tmp437;
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp430, $tmp434, $tmp438);
return;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, panda$collections$ListView* param1) {

panda$core$Bit local0;
panda$core$MutableString* local1 = NULL;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$Type* local3 = NULL;
panda$core$Bit local4;
panda$collections$Array* local5 = NULL;
// line 165
panda$core$Bit* $tmp439 = &param0->resolved;
panda$core$Bit $tmp440 = *$tmp439;
*(&local0) = $tmp440;
// line 166
panda$core$MutableString* $tmp441 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp441);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
panda$core$MutableString* $tmp442 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp442));
*(&local1) = $tmp441;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
// unreffing REF($5:panda.core.MutableString)
// line 167
panda$core$MutableString* $tmp443 = *(&local1);
panda$core$String** $tmp444 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp445 = *$tmp444;
panda$core$MutableString$append$panda$core$String($tmp443, $tmp445);
// line 168
panda$core$MutableString* $tmp446 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp446, &$s447);
// line 169
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s448));
panda$core$String* $tmp449 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp449));
*(&local2) = &$s450;
// line 170
ITable* $tmp451 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp451->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp451 = $tmp451->next;
}
$fn453 $tmp452 = $tmp451->methods[0];
panda$collections$Iterator* $tmp454 = $tmp452(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp455 = $tmp454->$class->itable;
while ($tmp455->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp455 = $tmp455->next;
}
$fn457 $tmp456 = $tmp455->methods[0];
panda$core$Bit $tmp458 = $tmp456($tmp454);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block3; else goto block2;
block2:;
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp460 = $tmp454->$class->itable;
while ($tmp460->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp460 = $tmp460->next;
}
$fn462 $tmp461 = $tmp460->methods[1];
panda$core$Object* $tmp463 = $tmp461($tmp454);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp463)));
org$pandalanguage$pandac$Type* $tmp464 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
*(&local3) = ((org$pandalanguage$pandac$Type*) $tmp463);
// line 171
panda$core$Bit $tmp465 = *(&local0);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Type* $tmp467 = *(&local3);
panda$core$Bit* $tmp468 = &$tmp467->resolved;
panda$core$Bit $tmp469 = *$tmp468;
*(&local4) = $tmp469;
goto block6;
block5:;
*(&local4) = $tmp465;
goto block6;
block6:;
panda$core$Bit $tmp470 = *(&local4);
*(&local0) = $tmp470;
// line 172
panda$core$MutableString* $tmp471 = *(&local1);
panda$core$String* $tmp472 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp471, $tmp472);
// line 173
panda$core$MutableString* $tmp473 = *(&local1);
org$pandalanguage$pandac$Type* $tmp474 = *(&local3);
panda$core$String** $tmp475 = &((org$pandalanguage$pandac$Symbol*) $tmp474)->name;
panda$core$String* $tmp476 = *$tmp475;
panda$core$MutableString$append$panda$core$String($tmp473, $tmp476);
// line 174
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s477));
panda$core$String* $tmp478 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp478));
*(&local2) = &$s479;
panda$core$Panda$unref$panda$core$Object$Q($tmp463);
// unreffing REF($49:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp480 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
// unreffing a
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
// unreffing REF($38:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 176
panda$core$MutableString* $tmp481 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp481, &$s482);
// line 177
panda$collections$Array* $tmp483 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp483);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
panda$collections$Array* $tmp484 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
*(&local5) = $tmp483;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
// unreffing REF($104:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 178
panda$collections$Array* $tmp485 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp485, ((panda$core$Object*) param0));
// line 179
panda$collections$Array* $tmp486 = *(&local5);
panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp486, ((panda$collections$CollectionView*) param1));
// line 180
org$pandalanguage$pandac$Type* $tmp487 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$MutableString* $tmp488 = *(&local1);
panda$core$String* $tmp489 = panda$core$MutableString$finish$R$panda$core$String($tmp488);
panda$core$Int64 $tmp490 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp491 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp490);
org$pandalanguage$pandac$Position* $tmp492 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp493 = *$tmp492;
panda$collections$Array* $tmp494 = *(&local5);
panda$core$Bit $tmp495 = *(&local0);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp487, $tmp489, $tmp491, $tmp493, ((panda$collections$ListView*) $tmp494), $tmp495);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp487));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
// unreffing REF($131:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp487));
// unreffing REF($129:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp496 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
// unreffing subtypes
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp497 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
// unreffing separator
*(&local2) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp498 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
// unreffing name
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp487;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Position param0, org$pandalanguage$pandac$Type$Kind param1, panda$collections$ListView* param2, org$pandalanguage$pandac$Type* param3, panda$core$Int64 param4) {

panda$core$Bit local0;
panda$core$MutableString* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$core$String* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
panda$core$Bit local5;
// line 186
panda$core$Bit* $tmp499 = &param3->resolved;
panda$core$Bit $tmp500 = *$tmp499;
*(&local0) = $tmp500;
// line 187
panda$core$MutableString* $tmp501 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp501, &$s502);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
panda$core$MutableString* $tmp503 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp503));
*(&local1) = $tmp501;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
// unreffing REF($5:panda.core.MutableString)
// line 188
panda$collections$Array* $tmp504 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp504);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
panda$collections$Array* $tmp505 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp505));
*(&local2) = $tmp504;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
// unreffing REF($18:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 189
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s506));
panda$core$String* $tmp507 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
*(&local3) = &$s508;
// line 190
ITable* $tmp509 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp509->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp509 = $tmp509->next;
}
$fn511 $tmp510 = $tmp509->methods[0];
panda$collections$Iterator* $tmp512 = $tmp510(((panda$collections$Iterable*) param2));
goto block1;
block1:;
ITable* $tmp513 = $tmp512->$class->itable;
while ($tmp513->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp513 = $tmp513->next;
}
$fn515 $tmp514 = $tmp513->methods[0];
panda$core$Bit $tmp516 = $tmp514($tmp512);
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block3; else goto block2;
block2:;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp518 = $tmp512->$class->itable;
while ($tmp518->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp518 = $tmp518->next;
}
$fn520 $tmp519 = $tmp518->methods[1];
panda$core$Object* $tmp521 = $tmp519($tmp512);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp521)));
org$pandalanguage$pandac$Type* $tmp522 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
*(&local4) = ((org$pandalanguage$pandac$Type*) $tmp521);
// line 191
panda$collections$Array* $tmp523 = *(&local2);
org$pandalanguage$pandac$Type* $tmp524 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp523, ((panda$core$Object*) $tmp524));
// line 192
panda$core$Bit $tmp525 = *(&local0);
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Type* $tmp527 = *(&local4);
panda$core$Bit* $tmp528 = &$tmp527->resolved;
panda$core$Bit $tmp529 = *$tmp528;
*(&local5) = $tmp529;
goto block6;
block5:;
*(&local5) = $tmp525;
goto block6;
block6:;
panda$core$Bit $tmp530 = *(&local5);
*(&local0) = $tmp530;
// line 193
panda$core$MutableString* $tmp531 = *(&local1);
panda$core$String* $tmp532 = *(&local3);
panda$core$MutableString$append$panda$core$String($tmp531, $tmp532);
// line 194
panda$core$MutableString* $tmp533 = *(&local1);
org$pandalanguage$pandac$Type* $tmp534 = *(&local4);
panda$core$String** $tmp535 = &((org$pandalanguage$pandac$Symbol*) $tmp534)->name;
panda$core$String* $tmp536 = *$tmp535;
panda$core$MutableString$append$panda$core$String($tmp533, $tmp536);
// line 195
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s537));
panda$core$String* $tmp538 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
*(&local3) = &$s539;
panda$core$Panda$unref$panda$core$Object$Q($tmp521);
// unreffing REF($54:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp540 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
// unreffing p
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
// unreffing REF($43:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 197
panda$core$Int64 $tmp541 = param1.$rawValue;
panda$core$Int64 $tmp542 = (panda$core$Int64) {15};
panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp541, $tmp542);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block8; else goto block9;
block8:;
// line 199
panda$core$MutableString* $tmp545 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp545, &$s546);
goto block7;
block9:;
panda$core$Int64 $tmp547 = (panda$core$Int64) {16};
panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp541, $tmp547);
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block10; else goto block11;
block10:;
// line 202
panda$core$MutableString* $tmp550 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp550, &$s551);
goto block7;
block11:;
panda$core$Int64 $tmp552 = (panda$core$Int64) {17};
panda$core$Bit $tmp553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp541, $tmp552);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block12; else goto block13;
block12:;
// line 205
panda$core$MutableString* $tmp555 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp555, &$s556);
goto block7;
block13:;
panda$core$Int64 $tmp557 = (panda$core$Int64) {18};
panda$core$Bit $tmp558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp541, $tmp557);
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block14; else goto block15;
block14:;
// line 208
panda$core$MutableString* $tmp560 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp560, &$s561);
goto block7;
block15:;
// line 211
panda$core$Bit $tmp562 = panda$core$Bit$init$builtin_bit(false);
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp564 = (panda$core$Int64) {211};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s565, $tmp564);
abort(); // unreachable
block16:;
goto block7;
block7:;
// line 214
panda$collections$Array* $tmp566 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp566, ((panda$core$Object*) param3));
// line 215
org$pandalanguage$pandac$Type* $tmp567 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp568 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp568->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp568 = $tmp568->next;
}
$fn570 $tmp569 = $tmp568->methods[1];
panda$core$Bit $tmp571 = $tmp569(((panda$core$Equatable*) param3), ((panda$core$Equatable*) $tmp567));
bool $tmp572 = $tmp571.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
// unreffing REF($161:org.pandalanguage.pandac.Type)
if ($tmp572) goto block18; else goto block19;
block18:;
// line 216
panda$core$MutableString* $tmp573 = *(&local1);
panda$core$String** $tmp574 = &((org$pandalanguage$pandac$Symbol*) param3)->name;
panda$core$String* $tmp575 = *$tmp574;
panda$core$MutableString$append$panda$core$String($tmp573, $tmp575);
goto block19;
block19:;
// line 218
panda$core$MutableString* $tmp576 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp576, &$s577);
// line 219
org$pandalanguage$pandac$Type* $tmp578 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$MutableString* $tmp579 = *(&local1);
panda$core$String* $tmp580 = panda$core$MutableString$finish$R$panda$core$String($tmp579);
panda$collections$Array* $tmp581 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp582 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp581);
panda$core$Bit $tmp583 = *(&local0);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit$panda$core$Int64($tmp578, $tmp580, param1, param0, ((panda$collections$ListView*) $tmp582), $tmp583, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp582));
// unreffing REF($186:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
// unreffing REF($183:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
// unreffing REF($181:org.pandalanguage.pandac.Type)
panda$core$String* $tmp584 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
// unreffing separator
*(&local3) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp585 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
// unreffing subtypes
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$MutableString* $tmp586 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
// unreffing name
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp578;

}
panda$core$Int64 org$pandalanguage$pandac$Type$get_size$R$panda$core$Int64(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
// line 224
org$pandalanguage$pandac$Type$Kind* $tmp587 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp588 = *$tmp587;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp589;
$tmp589 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp589->value = $tmp588;
panda$core$Int64 $tmp590 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp591 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp590);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp592;
$tmp592 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp592->value = $tmp591;
ITable* $tmp593 = ((panda$core$Equatable*) $tmp589)->$class->itable;
while ($tmp593->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp593 = $tmp593->next;
}
$fn595 $tmp594 = $tmp593->methods[0];
panda$core$Bit $tmp596 = $tmp594(((panda$core$Equatable*) $tmp589), ((panda$core$Equatable*) $tmp592));
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block1; else goto block2;
block1:;
*(&local1) = $tmp596;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp598 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp599 = *$tmp598;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp600;
$tmp600 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp600->value = $tmp599;
panda$core$Int64 $tmp601 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp602 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp601);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp603;
$tmp603 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp603->value = $tmp602;
ITable* $tmp604 = ((panda$core$Equatable*) $tmp600)->$class->itable;
while ($tmp604->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp604 = $tmp604->next;
}
$fn606 $tmp605 = $tmp604->methods[0];
panda$core$Bit $tmp607 = $tmp605(((panda$core$Equatable*) $tmp600), ((panda$core$Equatable*) $tmp603));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp603)));
// unreffing REF($20:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp600)));
// unreffing REF($16:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp607;
goto block3;
block3:;
panda$core$Bit $tmp608 = *(&local1);
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block4; else goto block5;
block4:;
*(&local0) = $tmp608;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp610 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp611 = *$tmp610;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp612;
$tmp612 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp612->value = $tmp611;
panda$core$Int64 $tmp613 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp614 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp613);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp615;
$tmp615 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp615->value = $tmp614;
ITable* $tmp616 = ((panda$core$Equatable*) $tmp612)->$class->itable;
while ($tmp616->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp616 = $tmp616->next;
}
$fn618 $tmp617 = $tmp616->methods[0];
panda$core$Bit $tmp619 = $tmp617(((panda$core$Equatable*) $tmp612), ((panda$core$Equatable*) $tmp615));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp615)));
// unreffing REF($42:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp612)));
// unreffing REF($38:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp619;
goto block6;
block6:;
panda$core$Bit $tmp620 = *(&local0);
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp622 = (panda$core$Int64) {224};
panda$core$String* $tmp623 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s624, ((panda$core$Object*) param0));
panda$core$String* $tmp625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp623, &$s626);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s627, $tmp622, $tmp625);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp625));
// unreffing REF($59:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp623));
// unreffing REF($58:panda.core.String)
abort(); // unreachable
block7:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp592)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp589)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
// line 226
org$pandalanguage$pandac$Position* $tmp628 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp629 = *$tmp628;
panda$core$Int64 $tmp630 = $tmp629.line;
return $tmp630;

}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$Type* param1) {

panda$core$Bit local0;
// line 236
panda$core$String** $tmp631 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp632 = *$tmp631;
panda$core$String** $tmp633 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp634 = *$tmp633;
panda$core$Bit $tmp635 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp632, $tmp634);
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$Type$Kind* $tmp637 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp638 = *$tmp637;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp639;
$tmp639 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp639->value = $tmp638;
org$pandalanguage$pandac$Type$Kind* $tmp640 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp641 = *$tmp640;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp642;
$tmp642 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp642->value = $tmp641;
ITable* $tmp643 = ((panda$core$Equatable*) $tmp639)->$class->itable;
while ($tmp643->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp643 = $tmp643->next;
}
$fn645 $tmp644 = $tmp643->methods[0];
panda$core$Bit $tmp646 = $tmp644(((panda$core$Equatable*) $tmp639), ((panda$core$Equatable*) $tmp642));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp642)));
// unreffing REF($16:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp639)));
// unreffing REF($12:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp646;
goto block3;
block2:;
*(&local0) = $tmp635;
goto block3;
block3:;
panda$core$Bit $tmp647 = *(&local0);
return $tmp647;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {

// line 241
org$pandalanguage$pandac$Type* $tmp648 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp649 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Type$Kind $tmp650 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp649);
org$pandalanguage$pandac$Position $tmp651 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp652 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp648, &$s653, $tmp650, $tmp651, $tmp652);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp648;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {

// line 246
org$pandalanguage$pandac$Type* $tmp654 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp655 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp656 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp655);
org$pandalanguage$pandac$Position $tmp657 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp658 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp654, &$s659, $tmp656, $tmp657, $tmp658);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp654;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {

// line 251
org$pandalanguage$pandac$Type* $tmp660 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp661 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp662 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp661);
org$pandalanguage$pandac$Position $tmp663 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp664 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp660, &$s665, $tmp662, $tmp663, $tmp664);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp660;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {

panda$collections$Array* local0 = NULL;
// line 256
panda$collections$Array* $tmp666 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp666);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
panda$collections$Array* $tmp667 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
*(&local0) = $tmp666;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 257
panda$collections$Array* $tmp668 = *(&local0);
org$pandalanguage$pandac$Type* $tmp669 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp668, ((panda$core$Object*) $tmp669));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
// unreffing REF($17:org.pandalanguage.pandac.Type)
// line 258
org$pandalanguage$pandac$Type* $tmp670 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp671 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp672 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp671);
org$pandalanguage$pandac$Position $tmp673 = org$pandalanguage$pandac$Position$init();
panda$collections$Array* $tmp674 = *(&local0);
panda$core$Bit $tmp675 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp670, &$s676, $tmp672, $tmp673, ((panda$collections$ListView*) $tmp674), $tmp675);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
// unreffing REF($24:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp677 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
// unreffing subtypes
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp670;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {

// line 263
org$pandalanguage$pandac$Type* $tmp678 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp679 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp680 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp679);
org$pandalanguage$pandac$Position $tmp681 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp682 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp678, &$s683, $tmp680, $tmp681, $tmp682);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp678;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type() {

// line 268
org$pandalanguage$pandac$Type* $tmp684 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp685 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp686 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp685);
org$pandalanguage$pandac$Position $tmp687 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp688 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp684, &$s689, $tmp686, $tmp687, $tmp688);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp684;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {

// line 273
org$pandalanguage$pandac$Type* $tmp690 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp691 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp692 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp691);
org$pandalanguage$pandac$Position $tmp693 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp694 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp690, &$s695, $tmp692, $tmp693, $tmp694);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp690));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp690));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp690;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {

// line 278
org$pandalanguage$pandac$Type* $tmp696 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp697 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp698 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp697);
org$pandalanguage$pandac$Position $tmp699 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp700 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp696, &$s701, $tmp698, $tmp699, $tmp700);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp696;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RegularExpression$R$org$pandalanguage$pandac$Type() {

// line 283
org$pandalanguage$pandac$Type* $tmp702 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp703 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp704 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp703);
org$pandalanguage$pandac$Position $tmp705 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp706 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp702, &$s707, $tmp704, $tmp705, $tmp706);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp702;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {

// line 288
org$pandalanguage$pandac$Type* $tmp708 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp709 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp710 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp709);
panda$core$Int64 $tmp711 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp708, &$s712, $tmp710, $tmp711);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp708;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {

// line 293
org$pandalanguage$pandac$Type* $tmp713 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp714 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp715 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp714);
panda$core$Int64 $tmp716 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp713, &$s717, $tmp715, $tmp716);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp713;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {

// line 298
org$pandalanguage$pandac$Type* $tmp718 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp719 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp720 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp719);
panda$core$Int64 $tmp721 = (panda$core$Int64) {32};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp718, &$s722, $tmp720, $tmp721);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp718));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp718));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp718;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {

// line 303
org$pandalanguage$pandac$Type* $tmp723 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp724 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp725 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp724);
panda$core$Int64 $tmp726 = (panda$core$Int64) {64};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp723, &$s727, $tmp725, $tmp726);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp723;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {

// line 308
org$pandalanguage$pandac$Type* $tmp728 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp729 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp730 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp729);
panda$core$Int64 $tmp731 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp728, &$s732, $tmp730, $tmp731);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp728;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {

// line 313
org$pandalanguage$pandac$Type* $tmp733 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp734 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp735 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp734);
panda$core$Int64 $tmp736 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp733, &$s737, $tmp735, $tmp736);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp733));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp733));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp733;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {

// line 318
org$pandalanguage$pandac$Type* $tmp738 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp739 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp740 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp739);
panda$core$Int64 $tmp741 = (panda$core$Int64) {32};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp738, &$s742, $tmp740, $tmp741);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp738));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp738));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp738;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {

// line 323
org$pandalanguage$pandac$Type* $tmp743 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp744 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp745 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp744);
panda$core$Int64 $tmp746 = (panda$core$Int64) {64};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp743, &$s747, $tmp745, $tmp746);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp743));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp743));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp743;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {

// line 328
org$pandalanguage$pandac$Type* $tmp748 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp749 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp750 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp749);
panda$core$Int64 $tmp751 = (panda$core$Int64) {32};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp748, &$s752, $tmp750, $tmp751);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp748));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp748));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp748;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {

// line 333
org$pandalanguage$pandac$Type* $tmp753 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp754 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp755 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp754);
panda$core$Int64 $tmp756 = (panda$core$Int64) {64};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp753, &$s757, $tmp755, $tmp756);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp753;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {

// line 338
org$pandalanguage$pandac$Type* $tmp758 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp759 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp760 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp759);
org$pandalanguage$pandac$Position $tmp761 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp762 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp758, &$s763, $tmp760, $tmp761, $tmp762);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp758));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp758));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp758;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {

// line 343
org$pandalanguage$pandac$Type* $tmp764 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp765 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp766 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp765);
org$pandalanguage$pandac$Position $tmp767 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp768 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp764, &$s769, $tmp766, $tmp767, $tmp768);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp764;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {

// line 348
org$pandalanguage$pandac$Type* $tmp770 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp771 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp772 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp771);
org$pandalanguage$pandac$Position $tmp773 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp774 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp770, &$s775, $tmp772, $tmp773, $tmp774);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp770;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {

// line 353
org$pandalanguage$pandac$Type* $tmp776 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp777 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp778 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp777);
org$pandalanguage$pandac$Position $tmp779 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp780 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp776, &$s781, $tmp778, $tmp779, $tmp780);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp776));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp776));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp776;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {

// line 358
org$pandalanguage$pandac$Type* $tmp782 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp783 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp784 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp783);
org$pandalanguage$pandac$Position $tmp785 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp786 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp782, &$s787, $tmp784, $tmp785, $tmp786);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp782));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp782));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp782;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {

// line 363
org$pandalanguage$pandac$Type* $tmp788 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp789 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp790 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp789);
org$pandalanguage$pandac$Position $tmp791 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp792 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp788, &$s793, $tmp790, $tmp791, $tmp792);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp788));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp788));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp788;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {

// line 368
org$pandalanguage$pandac$Type* $tmp794 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp795 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp796 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp795);
org$pandalanguage$pandac$Position $tmp797 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp798 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp794, &$s799, $tmp796, $tmp797, $tmp798);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp794;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {

// line 373
org$pandalanguage$pandac$Type* $tmp800 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp801 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp802 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp801);
org$pandalanguage$pandac$Position $tmp803 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp804 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp800, &$s805, $tmp802, $tmp803, $tmp804);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp800;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {

// line 378
org$pandalanguage$pandac$Type* $tmp806 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp807 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp808 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp807);
org$pandalanguage$pandac$Position $tmp809 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp810 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp806, &$s811, $tmp808, $tmp809, $tmp810);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp806));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp806));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp806;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {

// line 383
org$pandalanguage$pandac$Type* $tmp812 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp813 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp814 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp813);
org$pandalanguage$pandac$Position $tmp815 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp816 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp812, &$s817, $tmp814, $tmp815, $tmp816);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp812;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {

// line 388
org$pandalanguage$pandac$Type* $tmp818 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp819 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp820 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp819);
org$pandalanguage$pandac$Position $tmp821 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp822 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp818, &$s823, $tmp820, $tmp821, $tmp822);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp818));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp818));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp818;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {

// line 393
org$pandalanguage$pandac$Type* $tmp824 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp825 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp826 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp825);
org$pandalanguage$pandac$Position $tmp827 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp828 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp824, &$s829, $tmp826, $tmp827, $tmp828);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp824;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {

// line 398
org$pandalanguage$pandac$Type* $tmp830 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp831 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp832 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp831);
org$pandalanguage$pandac$Position $tmp833 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp834 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp830, &$s835, $tmp832, $tmp833, $tmp834);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp830));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp830));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp830;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {

// line 403
org$pandalanguage$pandac$Type* $tmp836 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp837 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp838 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp837);
org$pandalanguage$pandac$Position $tmp839 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp840 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp836, &$s841, $tmp838, $tmp839, $tmp840);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp836;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 param0) {

// line 408
org$pandalanguage$pandac$Type* $tmp842 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$UInt64$wrapper* $tmp843;
$tmp843 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
$tmp843->value = param0;
panda$core$String* $tmp844 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s845, ((panda$core$Object*) $tmp843));
panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp844, &$s847);
panda$core$Int64 $tmp848 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp849 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp848);
org$pandalanguage$pandac$Position $tmp850 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp851 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp842, $tmp846, $tmp849, $tmp850, $tmp851);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp842));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp846));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp844));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp843));
// unreffing REF($2:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp842));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp842;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 param0) {

// line 413
org$pandalanguage$pandac$Type* $tmp852 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp853 = panda$core$UInt64$convert$R$panda$core$String(param0);
panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s855, $tmp853);
panda$core$String* $tmp856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp854, &$s857);
panda$core$Int64 $tmp858 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp859 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp858);
org$pandalanguage$pandac$Position $tmp860 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp861 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp852, $tmp856, $tmp859, $tmp860, $tmp861);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp852));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp854));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp853));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp852));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp852;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 param0) {

// line 418
org$pandalanguage$pandac$Type* $tmp862 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp863 = panda$core$Real64$convert$R$panda$core$String(param0);
panda$core$String* $tmp864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s865, $tmp863);
panda$core$String* $tmp866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp864, &$s867);
panda$core$Int64 $tmp868 = (panda$core$Int64) {19};
org$pandalanguage$pandac$Type$Kind $tmp869 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp868);
org$pandalanguage$pandac$Position $tmp870 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp871 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp862, $tmp866, $tmp869, $tmp870, $tmp871);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp862));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp866));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp863));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp862));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp862;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {

// line 423
org$pandalanguage$pandac$Type* $tmp872 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp873 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Type$Kind $tmp874 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp873);
org$pandalanguage$pandac$Position $tmp875 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp876 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp872, &$s877, $tmp874, $tmp875, $tmp876);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp872;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ClassLiteral$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 428
panda$collections$Array* $tmp878 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp878);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp878));
panda$collections$Array* $tmp879 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp879));
*(&local0) = $tmp878;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp878));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 429
panda$collections$Array* $tmp880 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp880, ((panda$core$Object*) param0));
// line 430
org$pandalanguage$pandac$Type* $tmp881 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$collections$Array* $tmp882 = *(&local0);
org$pandalanguage$pandac$Type* $tmp883 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp881, ((panda$collections$ListView*) $tmp882));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp883));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp883));
// unreffing REF($23:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp881));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp884 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp884));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp883;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {

// line 435
org$pandalanguage$pandac$Type* $tmp885 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp886 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Type$Kind $tmp887 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp886);
org$pandalanguage$pandac$Position $tmp888 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp889 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp885, &$s890, $tmp887, $tmp888, $tmp889);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp885));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp885));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp885;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {

// line 440
org$pandalanguage$pandac$Type* $tmp891 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp892 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp893 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp892);
org$pandalanguage$pandac$Position $tmp894 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp895 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp891, &$s896, $tmp893, $tmp894, $tmp895);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp891;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {

// line 445
org$pandalanguage$pandac$Type* $tmp897 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp898 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp899 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp898);
org$pandalanguage$pandac$Position $tmp900 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp901 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp897, &$s902, $tmp899, $tmp900, $tmp901);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp897));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp897));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp897;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {

// line 450
org$pandalanguage$pandac$Type* $tmp903 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp904 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp905 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp904);
org$pandalanguage$pandac$Position $tmp906 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp907 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp903, &$s908, $tmp905, $tmp906, $tmp907);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp903;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {

// line 455
org$pandalanguage$pandac$Type* $tmp909 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp910 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp911 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp910);
org$pandalanguage$pandac$Position $tmp912 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp913 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp909, &$s914, $tmp911, $tmp912, $tmp913);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp909));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp909));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp909;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type() {

// line 460
org$pandalanguage$pandac$Type* $tmp915 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp916 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp917 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp916);
org$pandalanguage$pandac$Position $tmp918 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp919 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp915, &$s920, $tmp917, $tmp918, $tmp919);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp915));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp915));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp915;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 465
panda$collections$Array* $tmp921 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp921);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp921));
panda$collections$Array* $tmp922 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp922));
*(&local0) = $tmp921;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp921));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 466
panda$collections$Array* $tmp923 = *(&local0);
org$pandalanguage$pandac$Type* $tmp924 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp925 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp926 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp925);
org$pandalanguage$pandac$Position $tmp927 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp928 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp924, &$s929, $tmp926, $tmp927, $tmp928);
panda$collections$Array$add$panda$collections$Array$T($tmp923, ((panda$core$Object*) $tmp924));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp924));
// unreffing REF($17:org.pandalanguage.pandac.Type)
// line 467
panda$collections$Array* $tmp930 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp930, ((panda$core$Object*) param0));
// line 468
org$pandalanguage$pandac$Type* $tmp931 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp932 = panda$core$String$convert$R$panda$core$String(&$s933);
panda$core$String* $tmp934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp932, &$s935);
panda$core$String* $tmp936 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp934, ((panda$core$Object*) param0));
panda$core$String* $tmp937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp936, &$s938);
panda$core$Int64 $tmp939 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp940 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp939);
org$pandalanguage$pandac$Position* $tmp941 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp942 = *$tmp941;
panda$collections$Array* $tmp943 = *(&local0);
panda$core$Bit* $tmp944 = &param0->resolved;
panda$core$Bit $tmp945 = *$tmp944;
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp931, $tmp937, $tmp940, $tmp942, ((panda$collections$ListView*) $tmp943), $tmp945);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp937));
// unreffing REF($39:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp936));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
// unreffing REF($36:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp932));
// unreffing REF($35:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
// unreffing REF($34:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp946 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp946));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp931;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 473
panda$collections$Array* $tmp947 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp947);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
panda$collections$Array* $tmp948 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp948));
*(&local0) = $tmp947;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 474
panda$collections$Array* $tmp949 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp949, ((panda$core$Object*) param0));
// line 475
org$pandalanguage$pandac$Type* $tmp950 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp951 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp952 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp951);
org$pandalanguage$pandac$Position $tmp953 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp954 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp950, &$s955, $tmp952, $tmp953, $tmp954);
panda$collections$Array* $tmp956 = *(&local0);
org$pandalanguage$pandac$Type* $tmp957 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp950, ((panda$collections$ListView*) $tmp956));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp957));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp957));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp958 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp958));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp957;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ArrayOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 480
panda$collections$Array* $tmp959 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp959);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp959));
panda$collections$Array* $tmp960 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp960));
*(&local0) = $tmp959;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp959));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 481
panda$collections$Array* $tmp961 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp961, ((panda$core$Object*) param0));
// line 482
org$pandalanguage$pandac$Type* $tmp962 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp963 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp964 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp963);
org$pandalanguage$pandac$Position $tmp965 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp966 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp962, &$s967, $tmp964, $tmp965, $tmp966);
panda$collections$Array* $tmp968 = *(&local0);
org$pandalanguage$pandac$Type* $tmp969 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp962, ((panda$collections$ListView*) $tmp968));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp962));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp970 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp970));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp969;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ImmutableArrayOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 487
panda$collections$Array* $tmp971 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp971);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp971));
panda$collections$Array* $tmp972 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp972));
*(&local0) = $tmp971;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp971));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 488
panda$collections$Array* $tmp973 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp973, ((panda$core$Object*) param0));
// line 489
org$pandalanguage$pandac$Type* $tmp974 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp975 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp976 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp975);
org$pandalanguage$pandac$Position $tmp977 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp978 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp974, &$s979, $tmp976, $tmp977, $tmp978);
panda$collections$Array* $tmp980 = *(&local0);
org$pandalanguage$pandac$Type* $tmp981 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp974, ((panda$collections$ListView*) $tmp980));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp981));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp981));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp974));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp982 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp982));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp981;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 494
panda$collections$Array* $tmp983 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp983);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp983));
panda$collections$Array* $tmp984 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
*(&local0) = $tmp983;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp983));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 495
panda$collections$Array* $tmp985 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp985, ((panda$core$Object*) param0));
// line 496
org$pandalanguage$pandac$Type* $tmp986 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp987 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp988 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp987);
org$pandalanguage$pandac$Position $tmp989 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp990 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp986, &$s991, $tmp988, $tmp989, $tmp990);
panda$collections$Array* $tmp992 = *(&local0);
org$pandalanguage$pandac$Type* $tmp993 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp986, ((panda$collections$ListView*) $tmp992));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp994 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp994));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp993;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 501
panda$collections$Array* $tmp995 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp995);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
panda$collections$Array* $tmp996 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp996));
*(&local0) = $tmp995;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 502
panda$collections$Array* $tmp997 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp997, ((panda$core$Object*) param0));
// line 503
org$pandalanguage$pandac$Type* $tmp998 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp999 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1000 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp998, $tmp999);
bool $tmp1001 = $tmp1000.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp999));
// unreffing REF($21:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp998));
// unreffing REF($20:org.pandalanguage.pandac.Type)
if ($tmp1001) goto block1; else goto block3;
block1:;
// line 504
panda$collections$Array* $tmp1002 = *(&local0);
org$pandalanguage$pandac$Type* $tmp1003 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp1002, ((panda$core$Object*) $tmp1003));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1003));
// unreffing REF($34:org.pandalanguage.pandac.Type)
goto block2;
block3:;
// line 506
org$pandalanguage$pandac$Type* $tmp1004 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp1005 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1006 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1004, $tmp1005);
bool $tmp1007 = $tmp1006.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1005));
// unreffing REF($43:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1004));
// unreffing REF($42:org.pandalanguage.pandac.Type)
if ($tmp1007) goto block4; else goto block6;
block4:;
// line 507
panda$collections$Array* $tmp1008 = *(&local0);
org$pandalanguage$pandac$Type* $tmp1009 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp1008, ((panda$core$Object*) $tmp1009));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1009));
// unreffing REF($56:org.pandalanguage.pandac.Type)
goto block5;
block6:;
// line 509
org$pandalanguage$pandac$Type* $tmp1010 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp1011 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1012 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1010, $tmp1011);
bool $tmp1013 = $tmp1012.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1011));
// unreffing REF($65:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1010));
// unreffing REF($64:org.pandalanguage.pandac.Type)
if ($tmp1013) goto block7; else goto block9;
block7:;
// line 510
panda$collections$Array* $tmp1014 = *(&local0);
org$pandalanguage$pandac$Type* $tmp1015 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp1014, ((panda$core$Object*) $tmp1015));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1015));
// unreffing REF($78:org.pandalanguage.pandac.Type)
goto block8;
block9:;
// line 1
// line 513
panda$collections$Array* $tmp1016 = *(&local0);
org$pandalanguage$pandac$Type* $tmp1017 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
panda$collections$Array$add$panda$collections$Array$T($tmp1016, ((panda$core$Object*) $tmp1017));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
// unreffing REF($89:org.pandalanguage.pandac.Type)
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
// line 515
org$pandalanguage$pandac$Type* $tmp1018 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp1019 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp1020 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1019);
org$pandalanguage$pandac$Position $tmp1021 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp1022 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1018, &$s1023, $tmp1020, $tmp1021, $tmp1022);
panda$collections$Array* $tmp1024 = *(&local0);
org$pandalanguage$pandac$Type* $tmp1025 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp1018, ((panda$collections$ListView*) $tmp1024));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1025));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1025));
// unreffing REF($107:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
// unreffing REF($99:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp1026 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1026));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp1025;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$Type* param1) {

panda$collections$Array* local0 = NULL;
// line 520
panda$collections$Array* $tmp1027 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1027);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
panda$collections$Array* $tmp1028 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
*(&local0) = $tmp1027;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 521
panda$collections$Array* $tmp1029 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp1029, ((panda$core$Object*) param0));
// line 522
panda$collections$Array* $tmp1030 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp1030, ((panda$core$Object*) param1));
// line 523
org$pandalanguage$pandac$Type* $tmp1031 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp1032 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp1033 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1032);
org$pandalanguage$pandac$Position $tmp1034 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp1035 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1031, &$s1036, $tmp1033, $tmp1034, $tmp1035);
panda$collections$Array* $tmp1037 = *(&local0);
org$pandalanguage$pandac$Type* $tmp1038 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp1031, ((panda$collections$ListView*) $tmp1037));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1038));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1038));
// unreffing REF($33:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1031));
// unreffing REF($25:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp1039 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1039));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp1038;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {

// line 528
org$pandalanguage$pandac$Type* $tmp1040 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp1041 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Type$Kind $tmp1042 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1041);
org$pandalanguage$pandac$Position $tmp1043 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp1044 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1040, &$s1045, $tmp1042, $tmp1043, $tmp1044);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1040));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1040));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp1040;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {

// line 533
org$pandalanguage$pandac$Type* $tmp1046 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp1047 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Type$Kind $tmp1048 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1047);
org$pandalanguage$pandac$Position $tmp1049 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp1050 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1046, &$s1051, $tmp1048, $tmp1049, $tmp1050);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1046));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1046));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp1046;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
// line 537
panda$core$String** $tmp1052 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1053 = *$tmp1052;
panda$core$Bit $tmp1054 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1053, &$s1055);
bool $tmp1056 = $tmp1054.value;
if ($tmp1056) goto block1; else goto block2;
block1:;
*(&local3) = $tmp1054;
goto block3;
block2:;
panda$core$String** $tmp1057 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1058 = *$tmp1057;
panda$core$Bit $tmp1059 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1058, &$s1060);
*(&local3) = $tmp1059;
goto block3;
block3:;
panda$core$Bit $tmp1061 = *(&local3);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block4; else goto block5;
block4:;
*(&local2) = $tmp1061;
goto block6;
block5:;
panda$core$String** $tmp1063 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1064 = *$tmp1063;
panda$core$Bit $tmp1065 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1064, &$s1066);
*(&local2) = $tmp1065;
goto block6;
block6:;
panda$core$Bit $tmp1067 = *(&local2);
bool $tmp1068 = $tmp1067.value;
if ($tmp1068) goto block7; else goto block8;
block7:;
*(&local1) = $tmp1067;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1069 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1070 = *$tmp1069;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1071;
$tmp1071 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1071->value = $tmp1070;
panda$core$Int64 $tmp1072 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1073 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1072);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1074;
$tmp1074 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1074->value = $tmp1073;
ITable* $tmp1075 = ((panda$core$Equatable*) $tmp1071)->$class->itable;
while ($tmp1075->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1075 = $tmp1075->next;
}
$fn1077 $tmp1076 = $tmp1075->methods[0];
panda$core$Bit $tmp1078 = $tmp1076(((panda$core$Equatable*) $tmp1071), ((panda$core$Equatable*) $tmp1074));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1074)));
// unreffing REF($37:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1071)));
// unreffing REF($33:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp1078;
goto block9;
block9:;
panda$core$Bit $tmp1079 = *(&local1);
bool $tmp1080 = $tmp1079.value;
if ($tmp1080) goto block10; else goto block11;
block10:;
*(&local0) = $tmp1079;
goto block12;
block11:;
org$pandalanguage$pandac$Type$Kind* $tmp1081 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1082 = *$tmp1081;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1083;
$tmp1083 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1083->value = $tmp1082;
panda$core$Int64 $tmp1084 = (panda$core$Int64) {19};
org$pandalanguage$pandac$Type$Kind $tmp1085 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1084);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1086;
$tmp1086 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1086->value = $tmp1085;
ITable* $tmp1087 = ((panda$core$Equatable*) $tmp1083)->$class->itable;
while ($tmp1087->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1087 = $tmp1087->next;
}
$fn1089 $tmp1088 = $tmp1087->methods[0];
panda$core$Bit $tmp1090 = $tmp1088(((panda$core$Equatable*) $tmp1083), ((panda$core$Equatable*) $tmp1086));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1086)));
// unreffing REF($59:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1083)));
// unreffing REF($55:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp1090;
goto block12;
block12:;
panda$core$Bit $tmp1091 = *(&local0);
return $tmp1091;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
// line 543
org$pandalanguage$pandac$Type$Kind* $tmp1092 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1093 = *$tmp1092;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1094;
$tmp1094 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1094->value = $tmp1093;
panda$core$Int64 $tmp1095 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp1096 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1095);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1097;
$tmp1097 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1097->value = $tmp1096;
ITable* $tmp1098 = ((panda$core$Equatable*) $tmp1094)->$class->itable;
while ($tmp1098->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1098 = $tmp1098->next;
}
$fn1100 $tmp1099 = $tmp1098->methods[0];
panda$core$Bit $tmp1101 = $tmp1099(((panda$core$Equatable*) $tmp1094), ((panda$core$Equatable*) $tmp1097));
bool $tmp1102 = $tmp1101.value;
if ($tmp1102) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1101;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1103 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1104 = *$tmp1103;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1105;
$tmp1105 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1105->value = $tmp1104;
panda$core$Int64 $tmp1106 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp1107 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1106);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1108;
$tmp1108 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1108->value = $tmp1107;
ITable* $tmp1109 = ((panda$core$Equatable*) $tmp1105)->$class->itable;
while ($tmp1109->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1109 = $tmp1109->next;
}
$fn1111 $tmp1110 = $tmp1109->methods[0];
panda$core$Bit $tmp1112 = $tmp1110(((panda$core$Equatable*) $tmp1105), ((panda$core$Equatable*) $tmp1108));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1108)));
// unreffing REF($20:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1105)));
// unreffing REF($16:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp1112;
goto block3;
block3:;
panda$core$Bit $tmp1113 = *(&local2);
bool $tmp1114 = $tmp1113.value;
if ($tmp1114) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1113;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1115 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1116 = *$tmp1115;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1117;
$tmp1117 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1117->value = $tmp1116;
panda$core$Int64 $tmp1118 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp1119 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1118);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1120;
$tmp1120 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1120->value = $tmp1119;
ITable* $tmp1121 = ((panda$core$Equatable*) $tmp1117)->$class->itable;
while ($tmp1121->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1121 = $tmp1121->next;
}
$fn1123 $tmp1122 = $tmp1121->methods[0];
panda$core$Bit $tmp1124 = $tmp1122(((panda$core$Equatable*) $tmp1117), ((panda$core$Equatable*) $tmp1120));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1120)));
// unreffing REF($42:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1117)));
// unreffing REF($38:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp1124;
goto block6;
block6:;
panda$core$Bit $tmp1125 = *(&local1);
bool $tmp1126 = $tmp1125.value;
if ($tmp1126) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1125;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1127 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1128 = *$tmp1127;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1129;
$tmp1129 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1129->value = $tmp1128;
panda$core$Int64 $tmp1130 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1131 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1130);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1132;
$tmp1132 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1132->value = $tmp1131;
ITable* $tmp1133 = ((panda$core$Equatable*) $tmp1129)->$class->itable;
while ($tmp1133->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1133 = $tmp1133->next;
}
$fn1135 $tmp1134 = $tmp1133->methods[0];
panda$core$Bit $tmp1136 = $tmp1134(((panda$core$Equatable*) $tmp1129), ((panda$core$Equatable*) $tmp1132));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1132)));
// unreffing REF($64:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1129)));
// unreffing REF($60:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp1136;
goto block9;
block9:;
panda$core$Bit $tmp1137 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1097)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1094)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
return $tmp1137;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isSigned$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 548
panda$core$String** $tmp1138 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1139 = *$tmp1138;
panda$core$Bit $tmp1140 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1139, &$s1141);
return $tmp1140;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
// line 552
org$pandalanguage$pandac$Type$Kind* $tmp1142 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1143 = *$tmp1142;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1144;
$tmp1144 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1144->value = $tmp1143;
panda$core$Int64 $tmp1145 = (panda$core$Int64) {19};
org$pandalanguage$pandac$Type$Kind $tmp1146 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1145);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1147;
$tmp1147 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1147->value = $tmp1146;
ITable* $tmp1148 = ((panda$core$Equatable*) $tmp1144)->$class->itable;
while ($tmp1148->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1148 = $tmp1148->next;
}
$fn1150 $tmp1149 = $tmp1148->methods[0];
panda$core$Bit $tmp1151 = $tmp1149(((panda$core$Equatable*) $tmp1144), ((panda$core$Equatable*) $tmp1147));
bool $tmp1152 = $tmp1151.value;
if ($tmp1152) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1151;
goto block3;
block2:;
panda$core$String** $tmp1153 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1154 = *$tmp1153;
panda$core$Bit $tmp1155 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1154, &$s1156);
*(&local0) = $tmp1155;
goto block3;
block3:;
panda$core$Bit $tmp1157 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1147)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1144)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
return $tmp1157;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 556
panda$core$String** $tmp1158 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1159 = *$tmp1158;
panda$core$Bit $tmp1160 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1159, &$s1161);
return $tmp1160;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
// line 560
panda$core$Bit $tmp1162 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param0);
bool $tmp1163 = $tmp1162.value;
if ($tmp1163) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1162;
goto block3;
block2:;
panda$core$Bit $tmp1164 = org$pandalanguage$pandac$Type$get_isChar$R$panda$core$Bit(param0);
*(&local0) = $tmp1164;
goto block3;
block3:;
panda$core$Bit $tmp1165 = *(&local0);
return $tmp1165;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 564
org$pandalanguage$pandac$Type$Kind* $tmp1166 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1167 = *$tmp1166;
panda$core$Int64 $tmp1168 = $tmp1167.$rawValue;
panda$core$Int64 $tmp1169 = (panda$core$Int64) {0};
panda$core$Bit $tmp1170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1168, $tmp1169);
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp1172 = (panda$core$Int64) {1};
panda$core$Bit $tmp1173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1168, $tmp1172);
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp1175 = (panda$core$Int64) {11};
panda$core$Bit $tmp1176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1168, $tmp1175);
bool $tmp1177 = $tmp1176.value;
if ($tmp1177) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp1178 = (panda$core$Int64) {12};
panda$core$Bit $tmp1179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1168, $tmp1178);
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block2; else goto block6;
block6:;
panda$core$Int64 $tmp1181 = (panda$core$Int64) {13};
panda$core$Bit $tmp1182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1168, $tmp1181);
bool $tmp1183 = $tmp1182.value;
if ($tmp1183) goto block2; else goto block7;
block7:;
panda$core$Int64 $tmp1184 = (panda$core$Int64) {16};
panda$core$Bit $tmp1185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1168, $tmp1184);
bool $tmp1186 = $tmp1185.value;
if ($tmp1186) goto block2; else goto block8;
block8:;
panda$core$Int64 $tmp1187 = (panda$core$Int64) {15};
panda$core$Bit $tmp1188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1168, $tmp1187);
bool $tmp1189 = $tmp1188.value;
if ($tmp1189) goto block2; else goto block9;
block9:;
panda$core$Int64 $tmp1190 = (panda$core$Int64) {18};
panda$core$Bit $tmp1191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1168, $tmp1190);
bool $tmp1192 = $tmp1191.value;
if ($tmp1192) goto block2; else goto block10;
block10:;
panda$core$Int64 $tmp1193 = (panda$core$Int64) {17};
panda$core$Bit $tmp1194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1168, $tmp1193);
bool $tmp1195 = $tmp1194.value;
if ($tmp1195) goto block2; else goto block11;
block2:;
// line 568
panda$core$Bit $tmp1196 = panda$core$Bit$init$builtin_bit(true);
return $tmp1196;
block11:;
// line 571
panda$core$Bit $tmp1197 = panda$core$Bit$init$builtin_bit(false);
return $tmp1197;
block1:;
panda$core$Bit $tmp1198 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1199 = $tmp1198.value;
if ($tmp1199) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp1200 = (panda$core$Int64) {563};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1201, $tmp1200, &$s1202);
abort(); // unreachable
block12:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
// line 577
org$pandalanguage$pandac$Type$Kind* $tmp1203 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1204 = *$tmp1203;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1205;
$tmp1205 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1205->value = $tmp1204;
panda$core$Int64 $tmp1206 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp1207 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1206);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1208;
$tmp1208 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1208->value = $tmp1207;
ITable* $tmp1209 = ((panda$core$Equatable*) $tmp1205)->$class->itable;
while ($tmp1209->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1209 = $tmp1209->next;
}
$fn1211 $tmp1210 = $tmp1209->methods[0];
panda$core$Bit $tmp1212 = $tmp1210(((panda$core$Equatable*) $tmp1205), ((panda$core$Equatable*) $tmp1208));
bool $tmp1213 = $tmp1212.value;
if ($tmp1213) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$FixedArray** $tmp1214 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1215 = *$tmp1214;
panda$core$Int64 $tmp1216 = (panda$core$Int64) {0};
panda$core$Object* $tmp1217 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1215, $tmp1216);
org$pandalanguage$pandac$Type* $tmp1218 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1219 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1217), $tmp1218);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1218));
// unreffing REF($19:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1217);
// unreffing REF($17:org.pandalanguage.pandac.FixedArray.T)
*(&local0) = $tmp1219;
goto block3;
block2:;
*(&local0) = $tmp1212;
goto block3;
block3:;
panda$core$Bit $tmp1220 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1208)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1205)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
return $tmp1220;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 581
org$pandalanguage$pandac$Type$Kind* $tmp1221 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1222 = *$tmp1221;
panda$core$Int64 $tmp1223 = $tmp1222.$rawValue;
panda$core$Int64 $tmp1224 = (panda$core$Int64) {16};
panda$core$Bit $tmp1225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1223, $tmp1224);
bool $tmp1226 = $tmp1225.value;
if ($tmp1226) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp1227 = (panda$core$Int64) {15};
panda$core$Bit $tmp1228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1223, $tmp1227);
bool $tmp1229 = $tmp1228.value;
if ($tmp1229) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp1230 = (panda$core$Int64) {18};
panda$core$Bit $tmp1231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1223, $tmp1230);
bool $tmp1232 = $tmp1231.value;
if ($tmp1232) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp1233 = (panda$core$Int64) {17};
panda$core$Bit $tmp1234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1223, $tmp1233);
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block2; else goto block6;
block2:;
// line 583
panda$core$Bit $tmp1236 = panda$core$Bit$init$builtin_bit(true);
return $tmp1236;
block6:;
// line 586
panda$core$Bit $tmp1237 = panda$core$Bit$init$builtin_bit(false);
return $tmp1237;
block1:;
panda$core$Bit $tmp1238 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1239 = $tmp1238.value;
if ($tmp1239) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1240 = (panda$core$Int64) {580};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1241, $tmp1240, &$s1242);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 592
panda$core$String** $tmp1243 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1244 = *$tmp1243;
panda$core$Bit $tmp1245 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1244, &$s1246);
return $tmp1245;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 596
panda$core$String** $tmp1247 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1248 = *$tmp1247;
panda$core$Bit $tmp1249 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1248, &$s1250);
return $tmp1249;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 600
panda$core$String** $tmp1251 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1252 = *$tmp1251;
panda$core$Bit $tmp1253 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1252, &$s1254);
return $tmp1253;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isNullable$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 604
org$pandalanguage$pandac$Type$Kind* $tmp1255 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1256 = *$tmp1255;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1257;
$tmp1257 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1257->value = $tmp1256;
panda$core$Int64 $tmp1258 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1259 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1258);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1260;
$tmp1260 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1260->value = $tmp1259;
ITable* $tmp1261 = ((panda$core$Equatable*) $tmp1257)->$class->itable;
while ($tmp1261->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1261 = $tmp1261->next;
}
$fn1263 $tmp1262 = $tmp1261->methods[0];
panda$core$Bit $tmp1264 = $tmp1262(((panda$core$Equatable*) $tmp1257), ((panda$core$Equatable*) $tmp1260));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1260)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1257)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
return $tmp1264;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 608
org$pandalanguage$pandac$Type$Kind* $tmp1265 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1266 = *$tmp1265;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1267;
$tmp1267 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1267->value = $tmp1266;
panda$core$Int64 $tmp1268 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1269 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1268);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1270;
$tmp1270 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1270->value = $tmp1269;
ITable* $tmp1271 = ((panda$core$Equatable*) $tmp1267)->$class->itable;
while ($tmp1271->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1271 = $tmp1271->next;
}
$fn1273 $tmp1272 = $tmp1271->methods[0];
panda$core$Bit $tmp1274 = $tmp1272(((panda$core$Equatable*) $tmp1267), ((panda$core$Equatable*) $tmp1270));
bool $tmp1275 = $tmp1274.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1270)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1267)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1275) goto block1; else goto block2;
block1:;
// line 609
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 611
panda$collections$Array* $tmp1276 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1276);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1276));
panda$collections$Array* $tmp1277 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1277));
*(&local0) = $tmp1276;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1276));
// unreffing REF($23:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 612
panda$collections$Array* $tmp1278 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp1278, ((panda$core$Object*) param0));
// line 613
org$pandalanguage$pandac$Type* $tmp1279 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String** $tmp1280 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1281 = *$tmp1280;
panda$core$String* $tmp1282 = panda$core$String$convert$R$panda$core$String($tmp1281);
panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1282, &$s1284);
panda$core$Int64 $tmp1285 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1286 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1285);
org$pandalanguage$pandac$Position $tmp1287 = org$pandalanguage$pandac$Position$init();
panda$collections$Array* $tmp1288 = *(&local0);
panda$core$Bit $tmp1289 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1279, $tmp1283, $tmp1286, $tmp1287, ((panda$collections$ListView*) $tmp1288), $tmp1289);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1279));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1283));
// unreffing REF($47:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1282));
// unreffing REF($46:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1279));
// unreffing REF($42:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp1290 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1290));
// unreffing subtypes
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp1279;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

// line 617
org$pandalanguage$pandac$Type$Kind* $tmp1291 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1292 = *$tmp1291;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1293;
$tmp1293 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1293->value = $tmp1292;
panda$core$Int64 $tmp1294 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1295 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1294);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1296;
$tmp1296 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1296->value = $tmp1295;
ITable* $tmp1297 = ((panda$core$Equatable*) $tmp1293)->$class->itable;
while ($tmp1297->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1297 = $tmp1297->next;
}
$fn1299 $tmp1298 = $tmp1297->methods[1];
panda$core$Bit $tmp1300 = $tmp1298(((panda$core$Equatable*) $tmp1293), ((panda$core$Equatable*) $tmp1296));
bool $tmp1301 = $tmp1300.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1296)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1293)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1301) goto block1; else goto block2;
block1:;
// line 618
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 620
org$pandalanguage$pandac$FixedArray** $tmp1302 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1303 = *$tmp1302;
panda$core$Int64 $tmp1304 = (panda$core$Int64) {0};
panda$core$Object* $tmp1305 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1303, $tmp1304);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1305)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1305);
// unreffing REF($28:org.pandalanguage.pandac.FixedArray.T)
return ((org$pandalanguage$pandac$Type*) $tmp1305);

}
panda$core$Int64 org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
org$pandalanguage$pandac$Type$Kind* $tmp1306 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1307 = *$tmp1306;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1308;
$tmp1308 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1308->value = $tmp1307;
panda$core$Int64 $tmp1309 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp1310 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1309);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1311;
$tmp1311 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1311->value = $tmp1310;
ITable* $tmp1312 = ((panda$core$Equatable*) $tmp1308)->$class->itable;
while ($tmp1312->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1312 = $tmp1312->next;
}
$fn1314 $tmp1313 = $tmp1312->methods[0];
panda$core$Bit $tmp1315 = $tmp1313(((panda$core$Equatable*) $tmp1308), ((panda$core$Equatable*) $tmp1311));
bool $tmp1316 = $tmp1315.value;
if ($tmp1316) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1315;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1317 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1318 = *$tmp1317;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1319;
$tmp1319 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1319->value = $tmp1318;
panda$core$Int64 $tmp1320 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp1321 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1320);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1322;
$tmp1322 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1322->value = $tmp1321;
ITable* $tmp1323 = ((panda$core$Equatable*) $tmp1319)->$class->itable;
while ($tmp1323->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1323 = $tmp1323->next;
}
$fn1325 $tmp1324 = $tmp1323->methods[0];
panda$core$Bit $tmp1326 = $tmp1324(((panda$core$Equatable*) $tmp1319), ((panda$core$Equatable*) $tmp1322));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1322)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1319)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp1326;
goto block3;
block3:;
panda$core$Bit $tmp1327 = *(&local2);
bool $tmp1328 = $tmp1327.value;
if ($tmp1328) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1327;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1329 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1330 = *$tmp1329;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1331;
$tmp1331 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1331->value = $tmp1330;
panda$core$Int64 $tmp1332 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp1333 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1332);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1334;
$tmp1334 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1334->value = $tmp1333;
ITable* $tmp1335 = ((panda$core$Equatable*) $tmp1331)->$class->itable;
while ($tmp1335->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1335 = $tmp1335->next;
}
$fn1337 $tmp1336 = $tmp1335->methods[0];
panda$core$Bit $tmp1338 = $tmp1336(((panda$core$Equatable*) $tmp1331), ((panda$core$Equatable*) $tmp1334));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1334)));
// unreffing REF($41:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1331)));
// unreffing REF($37:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp1338;
goto block6;
block6:;
panda$core$Bit $tmp1339 = *(&local1);
bool $tmp1340 = $tmp1339.value;
if ($tmp1340) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1339;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1341 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1342 = *$tmp1341;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1343;
$tmp1343 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1343->value = $tmp1342;
panda$core$Int64 $tmp1344 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp1345 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1344);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1346;
$tmp1346 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1346->value = $tmp1345;
ITable* $tmp1347 = ((panda$core$Equatable*) $tmp1343)->$class->itable;
while ($tmp1347->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1347 = $tmp1347->next;
}
$fn1349 $tmp1348 = $tmp1347->methods[0];
panda$core$Bit $tmp1350 = $tmp1348(((panda$core$Equatable*) $tmp1343), ((panda$core$Equatable*) $tmp1346));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1346)));
// unreffing REF($63:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1343)));
// unreffing REF($59:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp1350;
goto block9;
block9:;
panda$core$Bit $tmp1351 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1311)));
// unreffing REF($6:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1308)));
// unreffing REF($2:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp1353 = (panda$core$Int64) {625};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1354, $tmp1353, &$s1355);
abort(); // unreachable
block10:;
// line 626
org$pandalanguage$pandac$FixedArray** $tmp1356 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1357 = *$tmp1356;
ITable* $tmp1358 = ((panda$collections$CollectionView*) $tmp1357)->$class->itable;
while ($tmp1358->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1358 = $tmp1358->next;
}
$fn1360 $tmp1359 = $tmp1358->methods[0];
panda$core$Int64 $tmp1361 = $tmp1359(((panda$collections$CollectionView*) $tmp1357));
panda$core$Int64 $tmp1362 = (panda$core$Int64) {1};
int64_t $tmp1363 = $tmp1361.value;
int64_t $tmp1364 = $tmp1362.value;
int64_t $tmp1365 = $tmp1363 - $tmp1364;
panda$core$Int64 $tmp1366 = (panda$core$Int64) {$tmp1365};
return $tmp1366;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
org$pandalanguage$pandac$Type$Kind* $tmp1367 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1368 = *$tmp1367;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1369;
$tmp1369 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1369->value = $tmp1368;
panda$core$Int64 $tmp1370 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp1371 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1370);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1372;
$tmp1372 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1372->value = $tmp1371;
ITable* $tmp1373 = ((panda$core$Equatable*) $tmp1369)->$class->itable;
while ($tmp1373->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1373 = $tmp1373->next;
}
$fn1375 $tmp1374 = $tmp1373->methods[0];
panda$core$Bit $tmp1376 = $tmp1374(((panda$core$Equatable*) $tmp1369), ((panda$core$Equatable*) $tmp1372));
bool $tmp1377 = $tmp1376.value;
if ($tmp1377) goto block1; else goto block2;
block1:;
*(&local4) = $tmp1376;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1378 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1379 = *$tmp1378;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1380;
$tmp1380 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1380->value = $tmp1379;
panda$core$Int64 $tmp1381 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp1382 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1381);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1383;
$tmp1383 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1383->value = $tmp1382;
ITable* $tmp1384 = ((panda$core$Equatable*) $tmp1380)->$class->itable;
while ($tmp1384->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1384 = $tmp1384->next;
}
$fn1386 $tmp1385 = $tmp1384->methods[0];
panda$core$Bit $tmp1387 = $tmp1385(((panda$core$Equatable*) $tmp1380), ((panda$core$Equatable*) $tmp1383));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1383)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1380)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local4) = $tmp1387;
goto block3;
block3:;
panda$core$Bit $tmp1388 = *(&local4);
bool $tmp1389 = $tmp1388.value;
if ($tmp1389) goto block4; else goto block5;
block4:;
*(&local3) = $tmp1388;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1390 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1391 = *$tmp1390;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1392;
$tmp1392 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1392->value = $tmp1391;
panda$core$Int64 $tmp1393 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp1394 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1393);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1395;
$tmp1395 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1395->value = $tmp1394;
ITable* $tmp1396 = ((panda$core$Equatable*) $tmp1392)->$class->itable;
while ($tmp1396->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1396 = $tmp1396->next;
}
$fn1398 $tmp1397 = $tmp1396->methods[0];
panda$core$Bit $tmp1399 = $tmp1397(((panda$core$Equatable*) $tmp1392), ((panda$core$Equatable*) $tmp1395));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1395)));
// unreffing REF($41:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1392)));
// unreffing REF($37:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local3) = $tmp1399;
goto block6;
block6:;
panda$core$Bit $tmp1400 = *(&local3);
bool $tmp1401 = $tmp1400.value;
if ($tmp1401) goto block7; else goto block8;
block7:;
*(&local2) = $tmp1400;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1402 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1403 = *$tmp1402;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1404;
$tmp1404 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1404->value = $tmp1403;
panda$core$Int64 $tmp1405 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp1406 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1405);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1407;
$tmp1407 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1407->value = $tmp1406;
ITable* $tmp1408 = ((panda$core$Equatable*) $tmp1404)->$class->itable;
while ($tmp1408->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1408 = $tmp1408->next;
}
$fn1410 $tmp1409 = $tmp1408->methods[0];
panda$core$Bit $tmp1411 = $tmp1409(((panda$core$Equatable*) $tmp1404), ((panda$core$Equatable*) $tmp1407));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1407)));
// unreffing REF($63:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1404)));
// unreffing REF($59:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp1411;
goto block9;
block9:;
panda$core$Bit $tmp1412 = *(&local2);
bool $tmp1413 = $tmp1412.value;
if ($tmp1413) goto block10; else goto block11;
block10:;
panda$core$Int64 $tmp1414 = (panda$core$Int64) {0};
int64_t $tmp1415 = param1.value;
int64_t $tmp1416 = $tmp1414.value;
bool $tmp1417 = $tmp1415 >= $tmp1416;
panda$core$Bit $tmp1418 = (panda$core$Bit) {$tmp1417};
*(&local1) = $tmp1418;
goto block12;
block11:;
*(&local1) = $tmp1412;
goto block12;
block12:;
panda$core$Bit $tmp1419 = *(&local1);
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block13; else goto block14;
block13:;
org$pandalanguage$pandac$FixedArray** $tmp1421 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1422 = *$tmp1421;
ITable* $tmp1423 = ((panda$collections$CollectionView*) $tmp1422)->$class->itable;
while ($tmp1423->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1423 = $tmp1423->next;
}
$fn1425 $tmp1424 = $tmp1423->methods[0];
panda$core$Int64 $tmp1426 = $tmp1424(((panda$collections$CollectionView*) $tmp1422));
panda$core$Int64 $tmp1427 = (panda$core$Int64) {1};
int64_t $tmp1428 = $tmp1426.value;
int64_t $tmp1429 = $tmp1427.value;
int64_t $tmp1430 = $tmp1428 - $tmp1429;
panda$core$Int64 $tmp1431 = (panda$core$Int64) {$tmp1430};
int64_t $tmp1432 = param1.value;
int64_t $tmp1433 = $tmp1431.value;
bool $tmp1434 = $tmp1432 < $tmp1433;
panda$core$Bit $tmp1435 = (panda$core$Bit) {$tmp1434};
*(&local0) = $tmp1435;
goto block15;
block14:;
*(&local0) = $tmp1419;
goto block15;
block15:;
panda$core$Bit $tmp1436 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1372)));
// unreffing REF($6:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1369)));
// unreffing REF($2:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp1437 = $tmp1436.value;
if ($tmp1437) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp1438 = (panda$core$Int64) {631};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1439, $tmp1438, &$s1440);
abort(); // unreachable
block16:;
// line 632
org$pandalanguage$pandac$FixedArray** $tmp1441 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1442 = *$tmp1441;
panda$core$Object* $tmp1443 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1442, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1443)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1443);
// unreffing REF($124:org.pandalanguage.pandac.FixedArray.T)
return ((org$pandalanguage$pandac$Type*) $tmp1443);

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
org$pandalanguage$pandac$Type$Kind* $tmp1444 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1445 = *$tmp1444;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1446;
$tmp1446 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1446->value = $tmp1445;
panda$core$Int64 $tmp1447 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp1448 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1447);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1449;
$tmp1449 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1449->value = $tmp1448;
ITable* $tmp1450 = ((panda$core$Equatable*) $tmp1446)->$class->itable;
while ($tmp1450->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1450 = $tmp1450->next;
}
$fn1452 $tmp1451 = $tmp1450->methods[0];
panda$core$Bit $tmp1453 = $tmp1451(((panda$core$Equatable*) $tmp1446), ((panda$core$Equatable*) $tmp1449));
bool $tmp1454 = $tmp1453.value;
if ($tmp1454) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1453;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1455 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1456 = *$tmp1455;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1457;
$tmp1457 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1457->value = $tmp1456;
panda$core$Int64 $tmp1458 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp1459 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1458);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1460;
$tmp1460 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1460->value = $tmp1459;
ITable* $tmp1461 = ((panda$core$Equatable*) $tmp1457)->$class->itable;
while ($tmp1461->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1461 = $tmp1461->next;
}
$fn1463 $tmp1462 = $tmp1461->methods[0];
panda$core$Bit $tmp1464 = $tmp1462(((panda$core$Equatable*) $tmp1457), ((panda$core$Equatable*) $tmp1460));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1460)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1457)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp1464;
goto block3;
block3:;
panda$core$Bit $tmp1465 = *(&local2);
bool $tmp1466 = $tmp1465.value;
if ($tmp1466) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1465;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1467 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1468 = *$tmp1467;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1469;
$tmp1469 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1469->value = $tmp1468;
panda$core$Int64 $tmp1470 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp1471 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1470);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1472;
$tmp1472 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1472->value = $tmp1471;
ITable* $tmp1473 = ((panda$core$Equatable*) $tmp1469)->$class->itable;
while ($tmp1473->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1473 = $tmp1473->next;
}
$fn1475 $tmp1474 = $tmp1473->methods[0];
panda$core$Bit $tmp1476 = $tmp1474(((panda$core$Equatable*) $tmp1469), ((panda$core$Equatable*) $tmp1472));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1472)));
// unreffing REF($41:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1469)));
// unreffing REF($37:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp1476;
goto block6;
block6:;
panda$core$Bit $tmp1477 = *(&local1);
bool $tmp1478 = $tmp1477.value;
if ($tmp1478) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1477;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1479 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1480 = *$tmp1479;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1481;
$tmp1481 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1481->value = $tmp1480;
panda$core$Int64 $tmp1482 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp1483 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1482);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1484;
$tmp1484 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1484->value = $tmp1483;
ITable* $tmp1485 = ((panda$core$Equatable*) $tmp1481)->$class->itable;
while ($tmp1485->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1485 = $tmp1485->next;
}
$fn1487 $tmp1486 = $tmp1485->methods[0];
panda$core$Bit $tmp1488 = $tmp1486(((panda$core$Equatable*) $tmp1481), ((panda$core$Equatable*) $tmp1484));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1484)));
// unreffing REF($63:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1481)));
// unreffing REF($59:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp1488;
goto block9;
block9:;
panda$core$Bit $tmp1489 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1449)));
// unreffing REF($6:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1446)));
// unreffing REF($2:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp1491 = (panda$core$Int64) {637};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1492, $tmp1491, &$s1493);
abort(); // unreachable
block10:;
// line 638
org$pandalanguage$pandac$FixedArray** $tmp1494 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1495 = *$tmp1494;
org$pandalanguage$pandac$FixedArray** $tmp1496 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1497 = *$tmp1496;
ITable* $tmp1498 = ((panda$collections$CollectionView*) $tmp1497)->$class->itable;
while ($tmp1498->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1498 = $tmp1498->next;
}
$fn1500 $tmp1499 = $tmp1498->methods[0];
panda$core$Int64 $tmp1501 = $tmp1499(((panda$collections$CollectionView*) $tmp1497));
panda$core$Int64 $tmp1502 = (panda$core$Int64) {1};
int64_t $tmp1503 = $tmp1501.value;
int64_t $tmp1504 = $tmp1502.value;
int64_t $tmp1505 = $tmp1503 - $tmp1504;
panda$core$Int64 $tmp1506 = (panda$core$Int64) {$tmp1505};
panda$core$Object* $tmp1507 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1495, $tmp1506);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1507)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1507);
// unreffing REF($101:org.pandalanguage.pandac.FixedArray.T)
return ((org$pandalanguage$pandac$Type*) $tmp1507);

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Type* param2) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
org$pandalanguage$pandac$Type* local4 = NULL;
org$pandalanguage$pandac$Type* local5 = NULL;
panda$core$Bit local6;
panda$collections$HashSet* local7 = NULL;
org$pandalanguage$pandac$Type* local8 = NULL;
org$pandalanguage$pandac$ClassDecl* local9 = NULL;
// line 645
panda$core$Bit $tmp1508 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, param2);
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block1; else goto block2;
block1:;
// line 646
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 648
org$pandalanguage$pandac$Type* $tmp1510 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1511 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp1510);
bool $tmp1512 = $tmp1511.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1510));
// unreffing REF($9:org.pandalanguage.pandac.Type)
if ($tmp1512) goto block3; else goto block4;
block3:;
// line 649
org$pandalanguage$pandac$Type$Kind* $tmp1513 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1514 = *$tmp1513;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1515;
$tmp1515 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1515->value = $tmp1514;
panda$core$Int64 $tmp1516 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1517 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1516);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1518;
$tmp1518 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1518->value = $tmp1517;
ITable* $tmp1519 = ((panda$core$Equatable*) $tmp1515)->$class->itable;
while ($tmp1519->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1519 = $tmp1519->next;
}
$fn1521 $tmp1520 = $tmp1519->methods[0];
panda$core$Bit $tmp1522 = $tmp1520(((panda$core$Equatable*) $tmp1515), ((panda$core$Equatable*) $tmp1518));
bool $tmp1523 = $tmp1522.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1518)));
// unreffing REF($23:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1515)));
// unreffing REF($19:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1523) goto block5; else goto block6;
block5:;
// line 650
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block6:;
// line 652
org$pandalanguage$pandac$Type* $tmp1524 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1524));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1524));
// unreffing REF($39:org.pandalanguage.pandac.Type)
return $tmp1524;
block4:;
// line 654
org$pandalanguage$pandac$Type* $tmp1525 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1526 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param2, $tmp1525);
bool $tmp1527 = $tmp1526.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1525));
// unreffing REF($47:org.pandalanguage.pandac.Type)
if ($tmp1527) goto block7; else goto block8;
block7:;
// line 655
org$pandalanguage$pandac$Type$Kind* $tmp1528 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1529 = *$tmp1528;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1530;
$tmp1530 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1530->value = $tmp1529;
panda$core$Int64 $tmp1531 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1532 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1531);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1533;
$tmp1533 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1533->value = $tmp1532;
ITable* $tmp1534 = ((panda$core$Equatable*) $tmp1530)->$class->itable;
while ($tmp1534->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1534 = $tmp1534->next;
}
$fn1536 $tmp1535 = $tmp1534->methods[0];
panda$core$Bit $tmp1537 = $tmp1535(((panda$core$Equatable*) $tmp1530), ((panda$core$Equatable*) $tmp1533));
bool $tmp1538 = $tmp1537.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1533)));
// unreffing REF($61:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1530)));
// unreffing REF($57:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1538) goto block9; else goto block10;
block9:;
// line 656
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block10:;
// line 658
org$pandalanguage$pandac$Type* $tmp1539 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1539));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1539));
// unreffing REF($77:org.pandalanguage.pandac.Type)
return $tmp1539;
block8:;
// line 660
org$pandalanguage$pandac$Type$Kind* $tmp1540 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1541 = *$tmp1540;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1542;
$tmp1542 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1542->value = $tmp1541;
panda$core$Int64 $tmp1543 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1544 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1543);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1545;
$tmp1545 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1545->value = $tmp1544;
ITable* $tmp1546 = ((panda$core$Equatable*) $tmp1542)->$class->itable;
while ($tmp1546->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1546 = $tmp1546->next;
}
$fn1548 $tmp1547 = $tmp1546->methods[0];
panda$core$Bit $tmp1549 = $tmp1547(((panda$core$Equatable*) $tmp1542), ((panda$core$Equatable*) $tmp1545));
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block13; else goto block14;
block13:;
panda$core$Bit $tmp1551 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param2);
*(&local0) = $tmp1551;
goto block15;
block14:;
*(&local0) = $tmp1549;
goto block15;
block15:;
panda$core$Bit $tmp1552 = *(&local0);
bool $tmp1553 = $tmp1552.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1545)));
// unreffing REF($91:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1542)));
// unreffing REF($87:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1553) goto block11; else goto block12;
block11:;
// line 661
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block12:;
// line 663
panda$core$Bit $tmp1554 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param0);
bool $tmp1555 = $tmp1554.value;
if ($tmp1555) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Type$Kind* $tmp1556 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1557 = *$tmp1556;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1558;
$tmp1558 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1558->value = $tmp1557;
panda$core$Int64 $tmp1559 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1560 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1559);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1561;
$tmp1561 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1561->value = $tmp1560;
ITable* $tmp1562 = ((panda$core$Equatable*) $tmp1558)->$class->itable;
while ($tmp1562->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1562 = $tmp1562->next;
}
$fn1564 $tmp1563 = $tmp1562->methods[0];
panda$core$Bit $tmp1565 = $tmp1563(((panda$core$Equatable*) $tmp1558), ((panda$core$Equatable*) $tmp1561));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1561)));
// unreffing REF($124:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1558)));
// unreffing REF($120:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp1565;
goto block20;
block19:;
*(&local1) = $tmp1554;
goto block20;
block20:;
panda$core$Bit $tmp1566 = *(&local1);
bool $tmp1567 = $tmp1566.value;
if ($tmp1567) goto block16; else goto block17;
block16:;
// line 664
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block17:;
// line 666
panda$core$Bit $tmp1568 = org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit(param0);
bool $tmp1569 = $tmp1568.value;
if ($tmp1569) goto block21; else goto block22;
block21:;
// line 667
org$pandalanguage$pandac$Type$Kind* $tmp1570 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1571 = *$tmp1570;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1572;
$tmp1572 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1572->value = $tmp1571;
panda$core$Int64 $tmp1573 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1574 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1573);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1575;
$tmp1575 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1575->value = $tmp1574;
ITable* $tmp1576 = ((panda$core$Equatable*) $tmp1572)->$class->itable;
while ($tmp1576->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1576 = $tmp1576->next;
}
$fn1578 $tmp1577 = $tmp1576->methods[0];
panda$core$Bit $tmp1579 = $tmp1577(((panda$core$Equatable*) $tmp1572), ((panda$core$Equatable*) $tmp1575));
bool $tmp1580 = $tmp1579.value;
if ($tmp1580) goto block25; else goto block26;
block25:;
*(&local2) = $tmp1579;
goto block27;
block26:;
org$pandalanguage$pandac$Type$Kind* $tmp1581 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1582 = *$tmp1581;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1583;
$tmp1583 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1583->value = $tmp1582;
panda$core$Int64 $tmp1584 = (panda$core$Int64) {19};
org$pandalanguage$pandac$Type$Kind $tmp1585 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1584);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1586;
$tmp1586 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1586->value = $tmp1585;
ITable* $tmp1587 = ((panda$core$Equatable*) $tmp1583)->$class->itable;
while ($tmp1587->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1587 = $tmp1587->next;
}
$fn1589 $tmp1588 = $tmp1587->methods[0];
panda$core$Bit $tmp1590 = $tmp1588(((panda$core$Equatable*) $tmp1583), ((panda$core$Equatable*) $tmp1586));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1586)));
// unreffing REF($168:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1583)));
// unreffing REF($164:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp1590;
goto block27;
block27:;
panda$core$Bit $tmp1591 = *(&local2);
bool $tmp1592 = $tmp1591.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1575)));
// unreffing REF($155:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1572)));
// unreffing REF($151:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1592) goto block23; else goto block24;
block23:;
// line 668
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block24:;
// line 670
panda$core$Bit $tmp1593 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param2);
bool $tmp1594 = $tmp1593.value;
if ($tmp1594) goto block28; else goto block29;
block28:;
// line 671
panda$core$String** $tmp1595 = &((org$pandalanguage$pandac$Symbol*) param2)->name;
panda$core$String* $tmp1596 = *$tmp1595;
panda$core$Bit $tmp1597 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp1596, &$s1598);
bool $tmp1599 = $tmp1597.value;
if ($tmp1599) goto block30; else goto block31;
block30:;
// line 672
org$pandalanguage$pandac$Type* $tmp1600 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1600));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1600));
// unreffing REF($204:org.pandalanguage.pandac.Type)
return $tmp1600;
block31:;
// line 674
org$pandalanguage$pandac$Type* $tmp1601 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1601));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1601));
// unreffing REF($212:org.pandalanguage.pandac.Type)
return $tmp1601;
block29:;
goto block22;
block22:;
// line 677
panda$core$Bit $tmp1602 = org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit(param2);
bool $tmp1603 = $tmp1602.value;
if ($tmp1603) goto block32; else goto block33;
block32:;
// line 678
org$pandalanguage$pandac$Type$Kind* $tmp1604 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1605 = *$tmp1604;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1606;
$tmp1606 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1606->value = $tmp1605;
panda$core$Int64 $tmp1607 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1608 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1607);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1609;
$tmp1609 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1609->value = $tmp1608;
ITable* $tmp1610 = ((panda$core$Equatable*) $tmp1606)->$class->itable;
while ($tmp1610->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1610 = $tmp1610->next;
}
$fn1612 $tmp1611 = $tmp1610->methods[0];
panda$core$Bit $tmp1613 = $tmp1611(((panda$core$Equatable*) $tmp1606), ((panda$core$Equatable*) $tmp1609));
bool $tmp1614 = $tmp1613.value;
if ($tmp1614) goto block36; else goto block37;
block36:;
*(&local3) = $tmp1613;
goto block38;
block37:;
org$pandalanguage$pandac$Type$Kind* $tmp1615 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1616 = *$tmp1615;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1617;
$tmp1617 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1617->value = $tmp1616;
panda$core$Int64 $tmp1618 = (panda$core$Int64) {19};
org$pandalanguage$pandac$Type$Kind $tmp1619 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1618);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1620;
$tmp1620 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1620->value = $tmp1619;
ITable* $tmp1621 = ((panda$core$Equatable*) $tmp1617)->$class->itable;
while ($tmp1621->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1621 = $tmp1621->next;
}
$fn1623 $tmp1622 = $tmp1621->methods[0];
panda$core$Bit $tmp1624 = $tmp1622(((panda$core$Equatable*) $tmp1617), ((panda$core$Equatable*) $tmp1620));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1620)));
// unreffing REF($244:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1617)));
// unreffing REF($240:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local3) = $tmp1624;
goto block38;
block38:;
panda$core$Bit $tmp1625 = *(&local3);
bool $tmp1626 = $tmp1625.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1609)));
// unreffing REF($231:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1606)));
// unreffing REF($227:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1626) goto block34; else goto block35;
block34:;
// line 679
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block35:;
// line 681
panda$core$Bit $tmp1627 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param0);
bool $tmp1628 = $tmp1627.value;
if ($tmp1628) goto block39; else goto block40;
block39:;
// line 682
panda$core$String** $tmp1629 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1630 = *$tmp1629;
panda$core$Bit $tmp1631 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp1630, &$s1632);
bool $tmp1633 = $tmp1631.value;
if ($tmp1633) goto block41; else goto block42;
block41:;
// line 683
org$pandalanguage$pandac$Type* $tmp1634 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1634));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1634));
// unreffing REF($280:org.pandalanguage.pandac.Type)
return $tmp1634;
block42:;
// line 685
org$pandalanguage$pandac$Type* $tmp1635 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1635));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1635));
// unreffing REF($288:org.pandalanguage.pandac.Type)
return $tmp1635;
block40:;
goto block33;
block33:;
// line 688
org$pandalanguage$pandac$Type$Kind* $tmp1636 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1637 = *$tmp1636;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1638;
$tmp1638 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1638->value = $tmp1637;
panda$core$Int64 $tmp1639 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1640 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1639);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1641;
$tmp1641 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1641->value = $tmp1640;
ITable* $tmp1642 = ((panda$core$Equatable*) $tmp1638)->$class->itable;
while ($tmp1642->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1642 = $tmp1642->next;
}
$fn1644 $tmp1643 = $tmp1642->methods[0];
panda$core$Bit $tmp1645 = $tmp1643(((panda$core$Equatable*) $tmp1638), ((panda$core$Equatable*) $tmp1641));
bool $tmp1646 = $tmp1645.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1641)));
// unreffing REF($303:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1638)));
// unreffing REF($299:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1646) goto block43; else goto block44;
block43:;
// line 689
org$pandalanguage$pandac$FixedArray** $tmp1647 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1648 = *$tmp1647;
panda$core$Int64 $tmp1649 = (panda$core$Int64) {0};
panda$core$Object* $tmp1650 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1648, $tmp1649);
org$pandalanguage$pandac$Type* $tmp1651 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1650), param1, param2);
org$pandalanguage$pandac$Type* $tmp1652 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1651);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1652));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1652));
// unreffing REF($323:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1651));
// unreffing REF($322:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1650);
// unreffing REF($320:org.pandalanguage.pandac.FixedArray.T)
return $tmp1652;
block44:;
// line 691
org$pandalanguage$pandac$Type$Kind* $tmp1653 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1654 = *$tmp1653;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1655;
$tmp1655 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1655->value = $tmp1654;
panda$core$Int64 $tmp1656 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1657 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1656);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1658;
$tmp1658 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1658->value = $tmp1657;
ITable* $tmp1659 = ((panda$core$Equatable*) $tmp1655)->$class->itable;
while ($tmp1659->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1659 = $tmp1659->next;
}
$fn1661 $tmp1660 = $tmp1659->methods[0];
panda$core$Bit $tmp1662 = $tmp1660(((panda$core$Equatable*) $tmp1655), ((panda$core$Equatable*) $tmp1658));
bool $tmp1663 = $tmp1662.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1658)));
// unreffing REF($343:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1655)));
// unreffing REF($339:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1663) goto block45; else goto block46;
block45:;
// line 692
org$pandalanguage$pandac$FixedArray** $tmp1664 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1665 = *$tmp1664;
panda$core$Int64 $tmp1666 = (panda$core$Int64) {0};
panda$core$Object* $tmp1667 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1665, $tmp1666);
org$pandalanguage$pandac$Type* $tmp1668 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param0, param1, ((org$pandalanguage$pandac$Type*) $tmp1667));
org$pandalanguage$pandac$Type* $tmp1669 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1668);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1669));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1669));
// unreffing REF($363:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1668));
// unreffing REF($362:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1667);
// unreffing REF($360:org.pandalanguage.pandac.FixedArray.T)
return $tmp1669;
block46:;
// line 694
org$pandalanguage$pandac$Type* $tmp1670 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, param0);
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1670));
org$pandalanguage$pandac$Type* $tmp1671 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1671));
*(&local4) = $tmp1670;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1670));
// unreffing REF($377:org.pandalanguage.pandac.Type)
// line 695
org$pandalanguage$pandac$Type* $tmp1672 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, param2);
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1672));
org$pandalanguage$pandac$Type* $tmp1673 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1673));
*(&local5) = $tmp1672;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1672));
// unreffing REF($389:org.pandalanguage.pandac.Type)
// line 696
org$pandalanguage$pandac$Type* $tmp1674 = *(&local4);
panda$core$Bit $tmp1675 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp1674);
bool $tmp1676 = $tmp1675.value;
if ($tmp1676) goto block49; else goto block50;
block49:;
org$pandalanguage$pandac$Type* $tmp1677 = *(&local5);
panda$core$Bit $tmp1678 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp1677);
*(&local6) = $tmp1678;
goto block51;
block50:;
*(&local6) = $tmp1675;
goto block51;
block51:;
panda$core$Bit $tmp1679 = *(&local6);
bool $tmp1680 = $tmp1679.value;
if ($tmp1680) goto block47; else goto block48;
block47:;
// line 697
panda$collections$HashSet* $tmp1681 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp1681);
*(&local7) = ((panda$collections$HashSet*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1681));
panda$collections$HashSet* $tmp1682 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1682));
*(&local7) = $tmp1681;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1681));
// unreffing REF($415:panda.collections.HashSet<org.pandalanguage.pandac.Type>)
// line 698
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
org$pandalanguage$pandac$Type* $tmp1683 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1683));
*(&local8) = param0;
// line 699
org$pandalanguage$pandac$Type* $tmp1684 = *(&local4);
org$pandalanguage$pandac$ClassDecl* $tmp1685 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1684);
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1685));
org$pandalanguage$pandac$ClassDecl* $tmp1686 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1686));
*(&local9) = $tmp1685;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1685));
// unreffing REF($438:org.pandalanguage.pandac.ClassDecl?)
// line 700
goto block52;
block52:;
org$pandalanguage$pandac$ClassDecl* $tmp1687 = *(&local9);
panda$core$Bit $tmp1688 = panda$core$Bit$init$builtin_bit($tmp1687 != NULL);
bool $tmp1689 = $tmp1688.value;
if ($tmp1689) goto block53; else goto block54;
block53:;
// line 701
panda$collections$HashSet* $tmp1690 = *(&local7);
org$pandalanguage$pandac$Type* $tmp1691 = *(&local8);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp1690, ((panda$collections$Key*) $tmp1691));
// line 702
org$pandalanguage$pandac$ClassDecl* $tmp1692 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1693 = &$tmp1692->rawSuper;
org$pandalanguage$pandac$Type* $tmp1694 = *$tmp1693;
panda$core$Bit $tmp1695 = panda$core$Bit$init$builtin_bit($tmp1694 != NULL);
bool $tmp1696 = $tmp1695.value;
if ($tmp1696) goto block55; else goto block57;
block55:;
// line 703
org$pandalanguage$pandac$Type* $tmp1697 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1698 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1699 = &$tmp1698->rawSuper;
org$pandalanguage$pandac$Type* $tmp1700 = *$tmp1699;
org$pandalanguage$pandac$Type* $tmp1701 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp1697, $tmp1700);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1701));
org$pandalanguage$pandac$Type* $tmp1702 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1702));
*(&local8) = $tmp1701;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1701));
// unreffing REF($478:org.pandalanguage.pandac.Type)
// line 704
org$pandalanguage$pandac$Type* $tmp1703 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1704 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1703);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1704));
org$pandalanguage$pandac$ClassDecl* $tmp1705 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1705));
*(&local9) = $tmp1704;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1704));
// unreffing REF($490:org.pandalanguage.pandac.ClassDecl?)
goto block56;
block57:;
// line 1
// line 707
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp1706 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1706));
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block56;
block56:;
goto block52;
block54:;
// line 710
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Type* $tmp1707 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1707));
*(&local8) = param2;
// line 711
org$pandalanguage$pandac$Type* $tmp1708 = *(&local5);
org$pandalanguage$pandac$ClassDecl* $tmp1709 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1708);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1709));
org$pandalanguage$pandac$ClassDecl* $tmp1710 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1710));
*(&local9) = $tmp1709;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1709));
// unreffing REF($520:org.pandalanguage.pandac.ClassDecl?)
// line 712
goto block58;
block58:;
org$pandalanguage$pandac$ClassDecl* $tmp1711 = *(&local9);
panda$core$Bit $tmp1712 = panda$core$Bit$init$builtin_bit($tmp1711 != NULL);
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block59; else goto block60;
block59:;
// line 713
panda$collections$HashSet* $tmp1714 = *(&local7);
org$pandalanguage$pandac$Type* $tmp1715 = *(&local8);
panda$core$Bit $tmp1716 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp1714, ((panda$collections$Key*) $tmp1715));
bool $tmp1717 = $tmp1716.value;
if ($tmp1717) goto block61; else goto block62;
block61:;
// line 714
org$pandalanguage$pandac$Type* $tmp1718 = *(&local8);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1718));
org$pandalanguage$pandac$ClassDecl* $tmp1719 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1719));
// unreffing cl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp1720 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1720));
// unreffing t
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$HashSet* $tmp1721 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1721));
// unreffing ancestors
*(&local7) = ((panda$collections$HashSet*) NULL);
org$pandalanguage$pandac$Type* $tmp1722 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1722));
// unreffing t2
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1723 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1723));
// unreffing t1
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1718;
block62:;
// line 716
org$pandalanguage$pandac$ClassDecl* $tmp1724 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1725 = &$tmp1724->rawSuper;
org$pandalanguage$pandac$Type* $tmp1726 = *$tmp1725;
panda$core$Bit $tmp1727 = panda$core$Bit$init$builtin_bit($tmp1726 != NULL);
bool $tmp1728 = $tmp1727.value;
if ($tmp1728) goto block63; else goto block65;
block63:;
// line 717
org$pandalanguage$pandac$Type* $tmp1729 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1730 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1731 = &$tmp1730->rawSuper;
org$pandalanguage$pandac$Type* $tmp1732 = *$tmp1731;
org$pandalanguage$pandac$Type* $tmp1733 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp1729, $tmp1732);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1733));
org$pandalanguage$pandac$Type* $tmp1734 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1734));
*(&local8) = $tmp1733;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1733));
// unreffing REF($591:org.pandalanguage.pandac.Type)
// line 718
org$pandalanguage$pandac$Type* $tmp1735 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1736 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1735);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1736));
org$pandalanguage$pandac$ClassDecl* $tmp1737 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1737));
*(&local9) = $tmp1736;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1736));
// unreffing REF($603:org.pandalanguage.pandac.ClassDecl?)
goto block64;
block65:;
// line 1
// line 721
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp1738 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1738));
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block64;
block64:;
goto block58;
block60:;
org$pandalanguage$pandac$ClassDecl* $tmp1739 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1739));
// unreffing cl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp1740 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1740));
// unreffing t
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$HashSet* $tmp1741 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1741));
// unreffing ancestors
*(&local7) = ((panda$collections$HashSet*) NULL);
goto block48;
block48:;
// line 725
org$pandalanguage$pandac$Type* $tmp1742 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1742));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1742));
// unreffing REF($641:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$Type* $tmp1743 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1743));
// unreffing t2
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1744 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1744));
// unreffing t1
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1742;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$intersection$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Type* param2) {

// line 733
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, panda$collections$HashMap* param1) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$core$Int64 local3;
panda$collections$Array* local4 = NULL;
panda$core$Int64 local5;
org$pandalanguage$pandac$Type$Kind* $tmp1745 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1746 = *$tmp1745;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1747;
$tmp1747 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1747->value = $tmp1746;
panda$core$Int64 $tmp1748 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Type$Kind $tmp1749 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1748);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1750;
$tmp1750 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1750->value = $tmp1749;
ITable* $tmp1751 = ((panda$core$Equatable*) $tmp1747)->$class->itable;
while ($tmp1751->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1751 = $tmp1751->next;
}
$fn1753 $tmp1752 = $tmp1751->methods[1];
panda$core$Bit $tmp1754 = $tmp1752(((panda$core$Equatable*) $tmp1747), ((panda$core$Equatable*) $tmp1750));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1750)));
// unreffing REF($6:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1747)));
// unreffing REF($2:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp1755 = $tmp1754.value;
if ($tmp1755) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp1756 = (panda$core$Int64) {738};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1757, $tmp1756, &$s1758);
abort(); // unreachable
block1:;
// line 739
ITable* $tmp1759 = ((panda$collections$MapView*) param1)->$class->itable;
while ($tmp1759->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp1759 = $tmp1759->next;
}
$fn1761 $tmp1760 = $tmp1759->methods[0];
panda$core$Int64 $tmp1762 = $tmp1760(((panda$collections$MapView*) param1));
panda$core$Int64 $tmp1763 = (panda$core$Int64) {0};
panda$core$Bit $tmp1764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1762, $tmp1763);
bool $tmp1765 = $tmp1764.value;
if ($tmp1765) goto block3; else goto block4;
block3:;
// line 740
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block4:;
// line 742
org$pandalanguage$pandac$Type$Kind* $tmp1766 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1767 = *$tmp1766;
panda$core$Int64 $tmp1768 = $tmp1767.$rawValue;
panda$core$Int64 $tmp1769 = (panda$core$Int64) {12};
panda$core$Bit $tmp1770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1768, $tmp1769);
bool $tmp1771 = $tmp1770.value;
if ($tmp1771) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp1772 = (panda$core$Int64) {13};
panda$core$Bit $tmp1773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1768, $tmp1772);
bool $tmp1774 = $tmp1773.value;
if ($tmp1774) goto block6; else goto block8;
block6:;
// line 744
panda$core$String** $tmp1775 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1776 = *$tmp1775;
panda$core$Object* $tmp1777 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(param1, ((panda$collections$Key*) $tmp1776));
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1777)));
org$pandalanguage$pandac$Type* $tmp1778 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1778));
*(&local0) = ((org$pandalanguage$pandac$Type*) $tmp1777);
panda$core$Panda$unref$panda$core$Object$Q($tmp1777);
// unreffing REF($50:panda.collections.HashMap.V?)
// line 745
org$pandalanguage$pandac$Type* $tmp1779 = *(&local0);
panda$core$Bit $tmp1780 = panda$core$Bit$init$builtin_bit($tmp1779 != NULL);
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block9; else goto block10;
block9:;
// line 746
org$pandalanguage$pandac$Type* $tmp1782 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1782));
org$pandalanguage$pandac$Type* $tmp1783 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1783));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1782;
block10:;
// line 748
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
org$pandalanguage$pandac$Type* $tmp1784 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1784));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return param0;
block8:;
panda$core$Int64 $tmp1785 = (panda$core$Int64) {11};
panda$core$Bit $tmp1786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1768, $tmp1785);
bool $tmp1787 = $tmp1786.value;
if ($tmp1787) goto block11; else goto block12;
block11:;
// line 751
org$pandalanguage$pandac$FixedArray** $tmp1788 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1789 = *$tmp1788;
panda$core$Int64 $tmp1790 = (panda$core$Int64) {0};
panda$core$Object* $tmp1791 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1789, $tmp1790);
org$pandalanguage$pandac$Type* $tmp1792 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1791), param1);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1792));
org$pandalanguage$pandac$Type* $tmp1793 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1793));
*(&local1) = $tmp1792;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1792));
// unreffing REF($100:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1791);
// unreffing REF($98:org.pandalanguage.pandac.FixedArray.T)
// line 752
panda$collections$Array* $tmp1794 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1794);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1794));
panda$collections$Array* $tmp1795 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1795));
*(&local2) = $tmp1794;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1794));
// unreffing REF($115:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 753
panda$core$Int64 $tmp1796 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FixedArray** $tmp1797 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1798 = *$tmp1797;
ITable* $tmp1799 = ((panda$collections$CollectionView*) $tmp1798)->$class->itable;
while ($tmp1799->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1799 = $tmp1799->next;
}
$fn1801 $tmp1800 = $tmp1799->methods[0];
panda$core$Int64 $tmp1802 = $tmp1800(((panda$collections$CollectionView*) $tmp1798));
panda$core$Bit $tmp1803 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1804 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1796, $tmp1802, $tmp1803);
panda$core$Int64 $tmp1805 = $tmp1804.min;
*(&local3) = $tmp1805;
panda$core$Int64 $tmp1806 = $tmp1804.max;
panda$core$Bit $tmp1807 = $tmp1804.inclusive;
bool $tmp1808 = $tmp1807.value;
panda$core$Int64 $tmp1809 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1810 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1809);
if ($tmp1808) goto block16; else goto block17;
block16:;
int64_t $tmp1811 = $tmp1805.value;
int64_t $tmp1812 = $tmp1806.value;
bool $tmp1813 = $tmp1811 <= $tmp1812;
panda$core$Bit $tmp1814 = (panda$core$Bit) {$tmp1813};
bool $tmp1815 = $tmp1814.value;
if ($tmp1815) goto block13; else goto block14;
block17:;
int64_t $tmp1816 = $tmp1805.value;
int64_t $tmp1817 = $tmp1806.value;
bool $tmp1818 = $tmp1816 < $tmp1817;
panda$core$Bit $tmp1819 = (panda$core$Bit) {$tmp1818};
bool $tmp1820 = $tmp1819.value;
if ($tmp1820) goto block13; else goto block14;
block13:;
// line 754
panda$collections$Array* $tmp1821 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp1822 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1823 = *$tmp1822;
panda$core$Int64 $tmp1824 = *(&local3);
panda$core$Object* $tmp1825 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1823, $tmp1824);
org$pandalanguage$pandac$Type* $tmp1826 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1825), param1);
panda$collections$Array$add$panda$collections$Array$T($tmp1821, ((panda$core$Object*) $tmp1826));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1826));
// unreffing REF($167:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1825);
// unreffing REF($165:org.pandalanguage.pandac.FixedArray.T)
goto block15;
block15:;
panda$core$Int64 $tmp1827 = *(&local3);
int64_t $tmp1828 = $tmp1806.value;
int64_t $tmp1829 = $tmp1827.value;
int64_t $tmp1830 = $tmp1828 - $tmp1829;
panda$core$Int64 $tmp1831 = (panda$core$Int64) {$tmp1830};
panda$core$UInt64 $tmp1832 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1831);
if ($tmp1808) goto block19; else goto block20;
block19:;
uint64_t $tmp1833 = $tmp1832.value;
uint64_t $tmp1834 = $tmp1810.value;
bool $tmp1835 = $tmp1833 >= $tmp1834;
panda$core$Bit $tmp1836 = (panda$core$Bit) {$tmp1835};
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block18; else goto block14;
block20:;
uint64_t $tmp1838 = $tmp1832.value;
uint64_t $tmp1839 = $tmp1810.value;
bool $tmp1840 = $tmp1838 > $tmp1839;
panda$core$Bit $tmp1841 = (panda$core$Bit) {$tmp1840};
bool $tmp1842 = $tmp1841.value;
if ($tmp1842) goto block18; else goto block14;
block18:;
int64_t $tmp1843 = $tmp1827.value;
int64_t $tmp1844 = $tmp1809.value;
int64_t $tmp1845 = $tmp1843 + $tmp1844;
panda$core$Int64 $tmp1846 = (panda$core$Int64) {$tmp1845};
*(&local3) = $tmp1846;
goto block13;
block14:;
// line 756
org$pandalanguage$pandac$Type* $tmp1847 = *(&local1);
panda$collections$Array* $tmp1848 = *(&local2);
org$pandalanguage$pandac$Type* $tmp1849 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp1847, ((panda$collections$ListView*) $tmp1848));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1849));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1849));
// unreffing REF($206:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp1850 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1850));
// unreffing remappedArgs
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp1851 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1851));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1849;
block12:;
panda$core$Int64 $tmp1852 = (panda$core$Int64) {1};
panda$core$Bit $tmp1853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1768, $tmp1852);
bool $tmp1854 = $tmp1853.value;
if ($tmp1854) goto block21; else goto block22;
block21:;
// line 759
org$pandalanguage$pandac$FixedArray** $tmp1855 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1856 = *$tmp1855;
panda$core$Int64 $tmp1857 = (panda$core$Int64) {0};
panda$core$Object* $tmp1858 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1856, $tmp1857);
org$pandalanguage$pandac$Type* $tmp1859 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1858), param1);
org$pandalanguage$pandac$Type* $tmp1860 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1859);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
// unreffing REF($236:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1859));
// unreffing REF($235:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1858);
// unreffing REF($233:org.pandalanguage.pandac.FixedArray.T)
return $tmp1860;
block22:;
panda$core$Int64 $tmp1861 = (panda$core$Int64) {16};
panda$core$Bit $tmp1862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1768, $tmp1861);
bool $tmp1863 = $tmp1862.value;
if ($tmp1863) goto block23; else goto block24;
block24:;
panda$core$Int64 $tmp1864 = (panda$core$Int64) {15};
panda$core$Bit $tmp1865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1768, $tmp1864);
bool $tmp1866 = $tmp1865.value;
if ($tmp1866) goto block23; else goto block25;
block25:;
panda$core$Int64 $tmp1867 = (panda$core$Int64) {18};
panda$core$Bit $tmp1868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1768, $tmp1867);
bool $tmp1869 = $tmp1868.value;
if ($tmp1869) goto block23; else goto block26;
block26:;
panda$core$Int64 $tmp1870 = (panda$core$Int64) {17};
panda$core$Bit $tmp1871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1768, $tmp1870);
bool $tmp1872 = $tmp1871.value;
if ($tmp1872) goto block23; else goto block27;
block23:;
// line 762
panda$collections$Array* $tmp1873 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1873);
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1873));
panda$collections$Array* $tmp1874 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1874));
*(&local4) = $tmp1873;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1873));
// unreffing REF($266:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 763
org$pandalanguage$pandac$FixedArray** $tmp1875 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1876 = *$tmp1875;
ITable* $tmp1877 = ((panda$collections$CollectionView*) $tmp1876)->$class->itable;
while ($tmp1877->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1877 = $tmp1877->next;
}
$fn1879 $tmp1878 = $tmp1877->methods[0];
panda$core$Int64 $tmp1880 = $tmp1878(((panda$collections$CollectionView*) $tmp1876));
panda$core$Int64 $tmp1881 = (panda$core$Int64) {1};
int64_t $tmp1882 = $tmp1880.value;
int64_t $tmp1883 = $tmp1881.value;
bool $tmp1884 = $tmp1882 >= $tmp1883;
panda$core$Bit $tmp1885 = (panda$core$Bit) {$tmp1884};
bool $tmp1886 = $tmp1885.value;
if ($tmp1886) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp1887 = (panda$core$Int64) {763};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1888, $tmp1887);
abort(); // unreachable
block28:;
// line 764
panda$core$Int64 $tmp1889 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FixedArray** $tmp1890 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1891 = *$tmp1890;
ITable* $tmp1892 = ((panda$collections$CollectionView*) $tmp1891)->$class->itable;
while ($tmp1892->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1892 = $tmp1892->next;
}
$fn1894 $tmp1893 = $tmp1892->methods[0];
panda$core$Int64 $tmp1895 = $tmp1893(((panda$collections$CollectionView*) $tmp1891));
panda$core$Int64 $tmp1896 = (panda$core$Int64) {1};
int64_t $tmp1897 = $tmp1895.value;
int64_t $tmp1898 = $tmp1896.value;
int64_t $tmp1899 = $tmp1897 - $tmp1898;
panda$core$Int64 $tmp1900 = (panda$core$Int64) {$tmp1899};
panda$core$Bit $tmp1901 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1902 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1889, $tmp1900, $tmp1901);
panda$core$Int64 $tmp1903 = $tmp1902.min;
*(&local5) = $tmp1903;
panda$core$Int64 $tmp1904 = $tmp1902.max;
panda$core$Bit $tmp1905 = $tmp1902.inclusive;
bool $tmp1906 = $tmp1905.value;
panda$core$Int64 $tmp1907 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1908 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1907);
if ($tmp1906) goto block33; else goto block34;
block33:;
int64_t $tmp1909 = $tmp1903.value;
int64_t $tmp1910 = $tmp1904.value;
bool $tmp1911 = $tmp1909 <= $tmp1910;
panda$core$Bit $tmp1912 = (panda$core$Bit) {$tmp1911};
bool $tmp1913 = $tmp1912.value;
if ($tmp1913) goto block30; else goto block31;
block34:;
int64_t $tmp1914 = $tmp1903.value;
int64_t $tmp1915 = $tmp1904.value;
bool $tmp1916 = $tmp1914 < $tmp1915;
panda$core$Bit $tmp1917 = (panda$core$Bit) {$tmp1916};
bool $tmp1918 = $tmp1917.value;
if ($tmp1918) goto block30; else goto block31;
block30:;
// line 765
panda$collections$Array* $tmp1919 = *(&local4);
org$pandalanguage$pandac$FixedArray** $tmp1920 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1921 = *$tmp1920;
panda$core$Int64 $tmp1922 = *(&local5);
panda$core$Object* $tmp1923 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1921, $tmp1922);
org$pandalanguage$pandac$Type* $tmp1924 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1923), param1);
panda$collections$Array$add$panda$collections$Array$T($tmp1919, ((panda$core$Object*) $tmp1924));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1924));
// unreffing REF($339:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1923);
// unreffing REF($337:org.pandalanguage.pandac.FixedArray.T)
goto block32;
block32:;
panda$core$Int64 $tmp1925 = *(&local5);
int64_t $tmp1926 = $tmp1904.value;
int64_t $tmp1927 = $tmp1925.value;
int64_t $tmp1928 = $tmp1926 - $tmp1927;
panda$core$Int64 $tmp1929 = (panda$core$Int64) {$tmp1928};
panda$core$UInt64 $tmp1930 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1929);
if ($tmp1906) goto block36; else goto block37;
block36:;
uint64_t $tmp1931 = $tmp1930.value;
uint64_t $tmp1932 = $tmp1908.value;
bool $tmp1933 = $tmp1931 >= $tmp1932;
panda$core$Bit $tmp1934 = (panda$core$Bit) {$tmp1933};
bool $tmp1935 = $tmp1934.value;
if ($tmp1935) goto block35; else goto block31;
block37:;
uint64_t $tmp1936 = $tmp1930.value;
uint64_t $tmp1937 = $tmp1908.value;
bool $tmp1938 = $tmp1936 > $tmp1937;
panda$core$Bit $tmp1939 = (panda$core$Bit) {$tmp1938};
bool $tmp1940 = $tmp1939.value;
if ($tmp1940) goto block35; else goto block31;
block35:;
int64_t $tmp1941 = $tmp1925.value;
int64_t $tmp1942 = $tmp1907.value;
int64_t $tmp1943 = $tmp1941 + $tmp1942;
panda$core$Int64 $tmp1944 = (panda$core$Int64) {$tmp1943};
*(&local5) = $tmp1944;
goto block30;
block31:;
// line 767
org$pandalanguage$pandac$Position* $tmp1945 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp1946 = *$tmp1945;
org$pandalanguage$pandac$Type$Kind* $tmp1947 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1948 = *$tmp1947;
panda$collections$Array* $tmp1949 = *(&local4);
org$pandalanguage$pandac$FixedArray** $tmp1950 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1951 = *$tmp1950;
org$pandalanguage$pandac$FixedArray** $tmp1952 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1953 = *$tmp1952;
ITable* $tmp1954 = ((panda$collections$CollectionView*) $tmp1953)->$class->itable;
while ($tmp1954->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1954 = $tmp1954->next;
}
$fn1956 $tmp1955 = $tmp1954->methods[0];
panda$core$Int64 $tmp1957 = $tmp1955(((panda$collections$CollectionView*) $tmp1953));
panda$core$Int64 $tmp1958 = (panda$core$Int64) {1};
int64_t $tmp1959 = $tmp1957.value;
int64_t $tmp1960 = $tmp1958.value;
int64_t $tmp1961 = $tmp1959 - $tmp1960;
panda$core$Int64 $tmp1962 = (panda$core$Int64) {$tmp1961};
panda$core$Object* $tmp1963 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1951, $tmp1962);
org$pandalanguage$pandac$Type* $tmp1964 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1963), param1);
panda$core$Int64* $tmp1965 = &param0->priority;
panda$core$Int64 $tmp1966 = *$tmp1965;
org$pandalanguage$pandac$Type* $tmp1967 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp1946, $tmp1948, ((panda$collections$ListView*) $tmp1949), $tmp1964, $tmp1966);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1967));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1967));
// unreffing REF($401:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1964));
// unreffing REF($398:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1963);
// unreffing REF($396:org.pandalanguage.pandac.FixedArray.T)
panda$collections$Array* $tmp1968 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
return $tmp1967;
block27:;
// line 771
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block5:;
panda$core$Bit $tmp1969 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1970 = $tmp1969.value;
if ($tmp1970) goto block38; else goto block39;
block39:;
panda$core$Int64 $tmp1971 = (panda$core$Int64) {738};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1972, $tmp1971, &$s1973);
abort(); // unreachable
block38:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$pandac$Type$get_hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* param0) {

// line 778
panda$core$String** $tmp1974 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1975 = *$tmp1974;
ITable* $tmp1976 = ((panda$collections$Key*) $tmp1975)->$class->itable;
while ($tmp1976->$class != (panda$core$Class*) &panda$collections$Key$class) {
    $tmp1976 = $tmp1976->next;
}
$fn1978 $tmp1977 = $tmp1976->methods[0];
panda$core$Int64 $tmp1979 = $tmp1977(((panda$collections$Key*) $tmp1975));
return $tmp1979;

}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* param0) {

// line 783
panda$core$String** $tmp1980 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1981 = *$tmp1980;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1981));
return $tmp1981;

}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* param0) {

// line 4
org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) param0));
org$pandalanguage$pandac$FixedArray** $tmp1982 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1983 = *$tmp1982;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
panda$core$Weak** $tmp1984 = &param0->genericClassParameter;
panda$core$Weak* $tmp1985 = *$tmp1984;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1985));
panda$core$Weak** $tmp1986 = &param0->genericMethodParameter;
panda$core$Weak* $tmp1987 = *$tmp1986;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1987));
org$pandalanguage$pandac$MethodRef** $tmp1988 = &param0->methodRef;
org$pandalanguage$pandac$MethodRef* $tmp1989 = *$tmp1988;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1989));
return;

}

