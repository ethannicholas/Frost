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
typedef panda$core$Bit (*$fn1079)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1091)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1102)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1113)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1125)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1137)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1152)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1213)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1276)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1286)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1312)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1332)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1343)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1355)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1367)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1383)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1398)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1409)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1421)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1433)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1453)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1485)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1496)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1508)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1520)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1543)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1564)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1579)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1591)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1607)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1621)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1632)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1655)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1666)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1687)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1709)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1836)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1844)(panda$collections$MapView*);
typedef panda$core$Int64 (*$fn1899)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1992)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2012)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2089)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2111)(panda$collections$Key*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 29, -3248623696866231612, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 197, -4766644293884402549, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x73\x69\x7a\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 151, 3475860875978515115, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x73\x75\x62\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x70\x72\x69\x6f\x72\x69\x74\x79\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 292, -4835118214484693251, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3d", 11, 4555205210328637565, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x3d", 10, -7078666603951044273, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
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
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5895082338763246016, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -1180377256514028899, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s1053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s1068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s1163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x69\x73\x43\x6c\x61\x73\x73\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 92, -6465324935451040327, NULL };
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x69\x73\x4d\x65\x74\x68\x6f\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 93, 7566891704899688644, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 101, 8536794682809672847, NULL };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 137, -3621091859119661460, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 137, -3621091859119661460, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 127, -3361594779411923433, NULL };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 110, -5923730647398865852, NULL };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 137, -3621091859119661460, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s1767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s1807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 180, -8366325379630919520, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 137, -3621091859119661460, NULL };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 137, -3621091859119661460, NULL };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 137, -3621091859119661460, NULL };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s2086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 137, -3621091859119661460, NULL };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 180, -2602239416666791808, NULL };

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
panda$core$Weak* $tmp3 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
panda$core$Weak* $tmp7 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
$tmp11 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp11->value = param2;
panda$core$Int64 $tmp12 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp13 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp12);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp14;
$tmp14 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp20 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp20->value = param2;
panda$core$Int64 $tmp21 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp22 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp21);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp23;
$tmp23 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp30 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp30->value = param2;
panda$core$Int64 $tmp31 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp32 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp31);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp33;
$tmp33 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp40 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp40->value = param2;
panda$core$Int64 $tmp41 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp42 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp41);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp43;
$tmp43 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp50 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp50->value = param2;
panda$core$Int64 $tmp51 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp52 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp51);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp53;
$tmp53 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp60 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp60->value = param2;
panda$core$Int64 $tmp61 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp62 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp61);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp63;
$tmp63 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
panda$core$Weak* $tmp81 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
panda$core$Weak* $tmp85 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
$tmp89 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp89->value = param2;
panda$core$Int64 $tmp90 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp91 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp90);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp92;
$tmp92 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp98 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp98->value = param2;
panda$core$Int64 $tmp99 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp100 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp99);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp101;
$tmp101 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp108 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp108->value = param2;
panda$core$Int64 $tmp109 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp110 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp109);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp111;
$tmp111 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp118 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp118->value = param2;
panda$core$Int64 $tmp119 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp120 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp119);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp121;
$tmp121 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp128 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp128->value = param2;
panda$core$Int64 $tmp129 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp130 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp129);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp131;
$tmp131 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp138 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp138->value = param2;
panda$core$Int64 $tmp139 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp140 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp139);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp141;
$tmp141 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
panda$core$Weak* $tmp170 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
panda$core$Weak* $tmp174 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
$tmp178 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp178->value = param2;
panda$core$Int64 $tmp179 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp180 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp179);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp181;
$tmp181 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp187 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp187->value = param2;
panda$core$Int64 $tmp188 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp189 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp188);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp190;
$tmp190 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp200 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp200->value = param2;
panda$core$Int64 $tmp201 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp202 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp201);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp203;
$tmp203 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp217 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp217->value = param2;
panda$core$Int64 $tmp218 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp219 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp218);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp220;
$tmp220 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp220->value = $tmp219;
ITable* $tmp221 = ((panda$core$Equatable*) $tmp217)->$class->itable;
while ($tmp221->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp221 = $tmp221->next;
}
$fn223 $tmp222 = $tmp221->methods[0];
panda$core$Bit $tmp224 = $tmp222(((panda$core$Equatable*) $tmp217), ((panda$core$Equatable*) $tmp220));
panda$core$Bit$wrapper* $tmp225;
$tmp225 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
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
$tmp230 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp230->value = param2;
panda$core$Int64 $tmp231 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp232 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp231);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp233;
$tmp233 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp247 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp247->value = param2;
panda$core$Int64 $tmp248 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp249 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp248);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp250;
$tmp250 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp250->value = $tmp249;
ITable* $tmp251 = ((panda$core$Equatable*) $tmp247)->$class->itable;
while ($tmp251->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
panda$core$Bit $tmp254 = $tmp252(((panda$core$Equatable*) $tmp247), ((panda$core$Equatable*) $tmp250));
panda$core$Bit$wrapper* $tmp255;
$tmp255 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
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
org$pandalanguage$pandac$FixedArray* $tmp264 = (org$pandalanguage$pandac$FixedArray*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
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
panda$core$Weak* $tmp270 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
panda$core$Weak* $tmp274 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
org$pandalanguage$pandac$FixedArray* $tmp281 = (org$pandalanguage$pandac$FixedArray*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
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
panda$core$MutableString* $tmp285 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
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
panda$core$Weak* $tmp333 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
panda$core$Weak* $tmp337 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
panda$core$Weak* $tmp344 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
panda$core$Weak* $tmp367 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
panda$core$Weak* $tmp371 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
panda$core$Weak* $tmp378 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
panda$core$Weak* $tmp401 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
panda$core$Weak* $tmp405 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
panda$core$MutableString* $tmp441 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
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
panda$collections$Array* $tmp483 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
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
org$pandalanguage$pandac$Type* $tmp487 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
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
panda$core$MutableString* $tmp501 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp501, &$s502);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
panda$core$MutableString* $tmp503 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp503));
*(&local1) = $tmp501;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
// unreffing REF($5:panda.core.MutableString)
// line 188
panda$collections$Array* $tmp504 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
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
org$pandalanguage$pandac$Type* $tmp578 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
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
$tmp589 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp589->value = $tmp588;
panda$core$Int64 $tmp590 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp591 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp590);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp592;
$tmp592 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp600 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp600->value = $tmp599;
panda$core$Int64 $tmp601 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp602 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp601);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp603;
$tmp603 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp612 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp612->value = $tmp611;
panda$core$Int64 $tmp613 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp614 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp613);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp615;
$tmp615 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
$tmp639 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp639->value = $tmp638;
org$pandalanguage$pandac$Type$Kind* $tmp640 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp641 = *$tmp640;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp642;
$tmp642 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
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
org$pandalanguage$pandac$Type* $tmp648 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
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
org$pandalanguage$pandac$Type* $tmp654 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
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
org$pandalanguage$pandac$Type* $tmp660 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
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
panda$collections$Array* $tmp666 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
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
org$pandalanguage$pandac$Type* $tmp670 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s672, &$s673);
panda$core$Int64 $tmp674 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp675 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp674);
org$pandalanguage$pandac$Position $tmp676 = org$pandalanguage$pandac$Position$init();
panda$collections$Array* $tmp677 = *(&local0);
panda$core$Bit $tmp678 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp670, $tmp671, $tmp675, $tmp676, ((panda$collections$ListView*) $tmp677), $tmp678);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
// unreffing REF($25:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
// unreffing REF($24:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp679 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp679));
// unreffing subtypes
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp670;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {

// line 263
org$pandalanguage$pandac$Type* $tmp680 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp681 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp682 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp681);
org$pandalanguage$pandac$Position $tmp683 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp684 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp680, &$s685, $tmp682, $tmp683, $tmp684);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp680;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type() {

// line 268
org$pandalanguage$pandac$Type* $tmp686 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp687 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp688 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp687);
org$pandalanguage$pandac$Position $tmp689 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp690 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp686, &$s691, $tmp688, $tmp689, $tmp690);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp686;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {

// line 273
org$pandalanguage$pandac$Type* $tmp692 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp693 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp694 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp693);
org$pandalanguage$pandac$Position $tmp695 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp696 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp692, &$s697, $tmp694, $tmp695, $tmp696);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp692;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {

// line 278
org$pandalanguage$pandac$Type* $tmp698 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp699 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp700 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp699);
org$pandalanguage$pandac$Position $tmp701 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp702 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp698, &$s703, $tmp700, $tmp701, $tmp702);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp698;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RegularExpression$R$org$pandalanguage$pandac$Type() {

// line 283
org$pandalanguage$pandac$Type* $tmp704 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp705 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp706 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp705);
org$pandalanguage$pandac$Position $tmp707 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp708 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp704, &$s709, $tmp706, $tmp707, $tmp708);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp704;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {

// line 288
org$pandalanguage$pandac$Type* $tmp710 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp711 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp712 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp711);
panda$core$Int64 $tmp713 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp710, &$s714, $tmp712, $tmp713);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp710;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {

// line 293
org$pandalanguage$pandac$Type* $tmp715 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp716 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp717 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp716);
panda$core$Int64 $tmp718 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp715, &$s719, $tmp717, $tmp718);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp715;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {

// line 298
org$pandalanguage$pandac$Type* $tmp720 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp721 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp722 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp721);
panda$core$Int64 $tmp723 = (panda$core$Int64) {32};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp720, &$s724, $tmp722, $tmp723);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp720;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {

// line 303
org$pandalanguage$pandac$Type* $tmp725 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp726 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp727 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp726);
panda$core$Int64 $tmp728 = (panda$core$Int64) {64};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp725, &$s729, $tmp727, $tmp728);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp725;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {

// line 308
org$pandalanguage$pandac$Type* $tmp730 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp731 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp732 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp731);
panda$core$Int64 $tmp733 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp730, &$s734, $tmp732, $tmp733);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp730));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp730));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp730;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {

// line 313
org$pandalanguage$pandac$Type* $tmp735 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp736 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp737 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp736);
panda$core$Int64 $tmp738 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp735, &$s739, $tmp737, $tmp738);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp735));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp735));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp735;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {

// line 318
org$pandalanguage$pandac$Type* $tmp740 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp741 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp742 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp741);
panda$core$Int64 $tmp743 = (panda$core$Int64) {32};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp740, &$s744, $tmp742, $tmp743);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp740;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {

// line 323
org$pandalanguage$pandac$Type* $tmp745 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp746 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp747 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp746);
panda$core$Int64 $tmp748 = (panda$core$Int64) {64};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp745, &$s749, $tmp747, $tmp748);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp745;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {

// line 328
org$pandalanguage$pandac$Type* $tmp750 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp751 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp752 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp751);
panda$core$Int64 $tmp753 = (panda$core$Int64) {32};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp750, &$s754, $tmp752, $tmp753);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp750));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp750));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp750;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {

// line 333
org$pandalanguage$pandac$Type* $tmp755 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp756 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp757 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp756);
panda$core$Int64 $tmp758 = (panda$core$Int64) {64};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp755, &$s759, $tmp757, $tmp758);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp755));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp755));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp755;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {

// line 338
org$pandalanguage$pandac$Type* $tmp760 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp761 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp762 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp761);
org$pandalanguage$pandac$Position $tmp763 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp764 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp760, &$s765, $tmp762, $tmp763, $tmp764);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp760));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp760));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp760;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {

// line 343
org$pandalanguage$pandac$Type* $tmp766 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp767 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp768 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp767);
org$pandalanguage$pandac$Position $tmp769 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp770 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp766, &$s771, $tmp768, $tmp769, $tmp770);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp766;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {

// line 348
org$pandalanguage$pandac$Type* $tmp772 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp773 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp774 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp773);
org$pandalanguage$pandac$Position $tmp775 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp776 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp772, &$s777, $tmp774, $tmp775, $tmp776);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp772));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp772));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp772;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {

// line 353
org$pandalanguage$pandac$Type* $tmp778 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp779 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp780 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp779);
org$pandalanguage$pandac$Position $tmp781 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp782 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp778, &$s783, $tmp780, $tmp781, $tmp782);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp778));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp778));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp778;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {

// line 358
org$pandalanguage$pandac$Type* $tmp784 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp785 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp786 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp785);
org$pandalanguage$pandac$Position $tmp787 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp788 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp784, &$s789, $tmp786, $tmp787, $tmp788);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp784;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {

// line 363
org$pandalanguage$pandac$Type* $tmp790 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp791 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp792 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp791);
org$pandalanguage$pandac$Position $tmp793 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp794 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp790, &$s795, $tmp792, $tmp793, $tmp794);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp790));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp790));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp790;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {

// line 368
org$pandalanguage$pandac$Type* $tmp796 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp797 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp798 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp797);
org$pandalanguage$pandac$Position $tmp799 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp800 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp796, &$s801, $tmp798, $tmp799, $tmp800);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp796;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {

// line 373
org$pandalanguage$pandac$Type* $tmp802 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp803 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp804 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp803);
org$pandalanguage$pandac$Position $tmp805 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp806 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp802, &$s807, $tmp804, $tmp805, $tmp806);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp802));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp802));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp802;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {

// line 378
org$pandalanguage$pandac$Type* $tmp808 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp809 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp810 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp809);
org$pandalanguage$pandac$Position $tmp811 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp812 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp808, &$s813, $tmp810, $tmp811, $tmp812);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp808));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp808));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp808;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {

// line 383
org$pandalanguage$pandac$Type* $tmp814 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp815 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp816 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp815);
org$pandalanguage$pandac$Position $tmp817 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp818 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp814, &$s819, $tmp816, $tmp817, $tmp818);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp814;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {

// line 388
org$pandalanguage$pandac$Type* $tmp820 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp821 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp822 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp821);
org$pandalanguage$pandac$Position $tmp823 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp824 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp820, &$s825, $tmp822, $tmp823, $tmp824);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp820));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp820));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp820;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {

// line 393
org$pandalanguage$pandac$Type* $tmp826 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp827 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp828 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp827);
org$pandalanguage$pandac$Position $tmp829 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp830 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp826, &$s831, $tmp828, $tmp829, $tmp830);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp826;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {

// line 398
org$pandalanguage$pandac$Type* $tmp832 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp833 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp834 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp833);
org$pandalanguage$pandac$Position $tmp835 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp836 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp832, &$s837, $tmp834, $tmp835, $tmp836);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp832;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {

// line 403
org$pandalanguage$pandac$Type* $tmp838 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp839 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp840 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp839);
org$pandalanguage$pandac$Position $tmp841 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp842 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp838, &$s843, $tmp840, $tmp841, $tmp842);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp838;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 param0) {

// line 408
org$pandalanguage$pandac$Type* $tmp844 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$UInt64$wrapper* $tmp845;
$tmp845 = (panda$core$UInt64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
$tmp845->value = param0;
panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s847, ((panda$core$Object*) $tmp845));
panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp846, &$s849);
panda$core$Int64 $tmp850 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp851 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp850);
org$pandalanguage$pandac$Position $tmp852 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp853 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp844, $tmp848, $tmp851, $tmp852, $tmp853);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp844));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp846));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp845));
// unreffing REF($2:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp844));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp844;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 param0) {

// line 413
org$pandalanguage$pandac$Type* $tmp854 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp855 = panda$core$UInt64$convert$R$panda$core$String(param0);
panda$core$String* $tmp856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s857, $tmp855);
panda$core$String* $tmp858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp856, &$s859);
panda$core$Int64 $tmp860 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp861 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp860);
org$pandalanguage$pandac$Position $tmp862 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp863 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp854, $tmp858, $tmp861, $tmp862, $tmp863);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp854));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp854));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp854;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 param0) {

// line 418
org$pandalanguage$pandac$Type* $tmp864 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp865 = panda$core$Real64$convert$R$panda$core$String(param0);
panda$core$String* $tmp866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s867, $tmp865);
panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp866, &$s869);
panda$core$Int64 $tmp870 = (panda$core$Int64) {19};
org$pandalanguage$pandac$Type$Kind $tmp871 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp870);
org$pandalanguage$pandac$Position $tmp872 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp873 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp864, $tmp868, $tmp871, $tmp872, $tmp873);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp868));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp866));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp864;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {

// line 423
org$pandalanguage$pandac$Type* $tmp874 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp875 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Type$Kind $tmp876 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp875);
org$pandalanguage$pandac$Position $tmp877 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp878 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp874, &$s879, $tmp876, $tmp877, $tmp878);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp874));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp874));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp874;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ClassLiteral$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 428
panda$collections$Array* $tmp880 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp880);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp880));
panda$collections$Array* $tmp881 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp881));
*(&local0) = $tmp880;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp880));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 429
panda$collections$Array* $tmp882 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp882, ((panda$core$Object*) param0));
// line 430
org$pandalanguage$pandac$Type* $tmp883 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$collections$Array* $tmp884 = *(&local0);
org$pandalanguage$pandac$Type* $tmp885 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp883, ((panda$collections$ListView*) $tmp884));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp885));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp885));
// unreffing REF($23:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp883));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp886 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp886));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp885;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {

// line 435
org$pandalanguage$pandac$Type* $tmp887 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp888 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Type$Kind $tmp889 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp888);
org$pandalanguage$pandac$Position $tmp890 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp891 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp887, &$s892, $tmp889, $tmp890, $tmp891);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp887));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp887));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp887;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {

// line 440
org$pandalanguage$pandac$Type* $tmp893 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp894 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp895 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp894);
org$pandalanguage$pandac$Position $tmp896 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp897 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp893, &$s898, $tmp895, $tmp896, $tmp897);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp893;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {

// line 445
org$pandalanguage$pandac$Type* $tmp899 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp900 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp901 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp900);
org$pandalanguage$pandac$Position $tmp902 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp903 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp899, &$s904, $tmp901, $tmp902, $tmp903);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp899));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp899));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp899;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {

// line 450
org$pandalanguage$pandac$Type* $tmp905 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp906 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp907 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp906);
org$pandalanguage$pandac$Position $tmp908 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp909 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp905, &$s910, $tmp907, $tmp908, $tmp909);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp905));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp905));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp905;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {

// line 455
org$pandalanguage$pandac$Type* $tmp911 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp912 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp913 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp912);
org$pandalanguage$pandac$Position $tmp914 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp915 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp911, &$s916, $tmp913, $tmp914, $tmp915);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp911));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp911));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp911;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type() {

// line 460
org$pandalanguage$pandac$Type* $tmp917 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp918 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp919 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp918);
org$pandalanguage$pandac$Position $tmp920 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp921 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp917, &$s922, $tmp919, $tmp920, $tmp921);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp917));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp917));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp917;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 465
panda$collections$Array* $tmp923 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp923);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp923));
panda$collections$Array* $tmp924 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp924));
*(&local0) = $tmp923;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp923));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 466
panda$collections$Array* $tmp925 = *(&local0);
org$pandalanguage$pandac$Type* $tmp926 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp927 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp928 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp927);
org$pandalanguage$pandac$Position $tmp929 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp930 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp926, &$s931, $tmp928, $tmp929, $tmp930);
panda$collections$Array$add$panda$collections$Array$T($tmp925, ((panda$core$Object*) $tmp926));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
// unreffing REF($17:org.pandalanguage.pandac.Type)
// line 467
panda$collections$Array* $tmp932 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp932, ((panda$core$Object*) param0));
// line 468
org$pandalanguage$pandac$Type* $tmp933 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp934 = panda$core$String$convert$R$panda$core$String(&$s935);
panda$core$String* $tmp936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp934, &$s937);
panda$core$String* $tmp938 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp936, ((panda$core$Object*) param0));
panda$core$String* $tmp939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp938, &$s940);
panda$core$Int64 $tmp941 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp942 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp941);
org$pandalanguage$pandac$Position* $tmp943 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp944 = *$tmp943;
panda$collections$Array* $tmp945 = *(&local0);
panda$core$Bit* $tmp946 = &param0->resolved;
panda$core$Bit $tmp947 = *$tmp946;
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp933, $tmp939, $tmp942, $tmp944, ((panda$collections$ListView*) $tmp945), $tmp947);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp939));
// unreffing REF($39:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp938));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp936));
// unreffing REF($36:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
// unreffing REF($35:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
// unreffing REF($34:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp948 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp948));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp933;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 473
panda$collections$Array* $tmp949 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp949);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp949));
panda$collections$Array* $tmp950 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
*(&local0) = $tmp949;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp949));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 474
panda$collections$Array* $tmp951 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp951, ((panda$core$Object*) param0));
// line 475
org$pandalanguage$pandac$Type* $tmp952 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp953 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp954 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp953);
org$pandalanguage$pandac$Position $tmp955 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp956 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp952, &$s957, $tmp954, $tmp955, $tmp956);
panda$collections$Array* $tmp958 = *(&local0);
org$pandalanguage$pandac$Type* $tmp959 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp952, ((panda$collections$ListView*) $tmp958));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp959));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp959));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp952));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp960 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp960));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp959;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ArrayOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 480
panda$collections$Array* $tmp961 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp961);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp961));
panda$collections$Array* $tmp962 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp962));
*(&local0) = $tmp961;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp961));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 481
panda$collections$Array* $tmp963 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp963, ((panda$core$Object*) param0));
// line 482
org$pandalanguage$pandac$Type* $tmp964 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp965 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp966 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp965);
org$pandalanguage$pandac$Position $tmp967 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp968 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp964, &$s969, $tmp966, $tmp967, $tmp968);
panda$collections$Array* $tmp970 = *(&local0);
org$pandalanguage$pandac$Type* $tmp971 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp964, ((panda$collections$ListView*) $tmp970));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp971));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp971));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp964));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp972 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp972));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp971;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ImmutableArrayOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 487
panda$collections$Array* $tmp973 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp973);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp973));
panda$collections$Array* $tmp974 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp974));
*(&local0) = $tmp973;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp973));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 488
panda$collections$Array* $tmp975 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp975, ((panda$core$Object*) param0));
// line 489
org$pandalanguage$pandac$Type* $tmp976 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp977 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp978 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp977);
org$pandalanguage$pandac$Position $tmp979 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp980 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp976, &$s981, $tmp978, $tmp979, $tmp980);
panda$collections$Array* $tmp982 = *(&local0);
org$pandalanguage$pandac$Type* $tmp983 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp976, ((panda$collections$ListView*) $tmp982));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp983));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp983));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp976));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp984 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp983;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 494
panda$collections$Array* $tmp985 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp985);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
panda$collections$Array* $tmp986 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
*(&local0) = $tmp985;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 495
panda$collections$Array* $tmp987 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp987, ((panda$core$Object*) param0));
// line 496
org$pandalanguage$pandac$Type* $tmp988 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp989 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp990 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp989);
org$pandalanguage$pandac$Position $tmp991 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp992 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp988, &$s993, $tmp990, $tmp991, $tmp992);
panda$collections$Array* $tmp994 = *(&local0);
org$pandalanguage$pandac$Type* $tmp995 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp988, ((panda$collections$ListView*) $tmp994));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp988));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp996 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp996));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp995;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 501
panda$collections$Array* $tmp997 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp997);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
panda$collections$Array* $tmp998 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp998));
*(&local0) = $tmp997;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 502
panda$collections$Array* $tmp999 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp999, ((panda$core$Object*) param0));
// line 503
org$pandalanguage$pandac$Type* $tmp1000 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp1001 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1002 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1000, $tmp1001);
bool $tmp1003 = $tmp1002.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
// unreffing REF($21:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
// unreffing REF($20:org.pandalanguage.pandac.Type)
if ($tmp1003) goto block1; else goto block3;
block1:;
// line 504
panda$collections$Array* $tmp1004 = *(&local0);
org$pandalanguage$pandac$Type* $tmp1005 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp1004, ((panda$core$Object*) $tmp1005));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1005));
// unreffing REF($34:org.pandalanguage.pandac.Type)
goto block2;
block3:;
// line 506
org$pandalanguage$pandac$Type* $tmp1006 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp1007 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1008 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1006, $tmp1007);
bool $tmp1009 = $tmp1008.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1007));
// unreffing REF($43:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1006));
// unreffing REF($42:org.pandalanguage.pandac.Type)
if ($tmp1009) goto block4; else goto block6;
block4:;
// line 507
panda$collections$Array* $tmp1010 = *(&local0);
org$pandalanguage$pandac$Type* $tmp1011 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp1010, ((panda$core$Object*) $tmp1011));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1011));
// unreffing REF($56:org.pandalanguage.pandac.Type)
goto block5;
block6:;
// line 509
org$pandalanguage$pandac$Type* $tmp1012 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp1013 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1014 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1012, $tmp1013);
bool $tmp1015 = $tmp1014.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
// unreffing REF($65:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1012));
// unreffing REF($64:org.pandalanguage.pandac.Type)
if ($tmp1015) goto block7; else goto block9;
block7:;
// line 510
panda$collections$Array* $tmp1016 = *(&local0);
org$pandalanguage$pandac$Type* $tmp1017 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp1016, ((panda$core$Object*) $tmp1017));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
// unreffing REF($78:org.pandalanguage.pandac.Type)
goto block8;
block9:;
// line 1
// line 513
panda$collections$Array* $tmp1018 = *(&local0);
org$pandalanguage$pandac$Type* $tmp1019 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
panda$collections$Array$add$panda$collections$Array$T($tmp1018, ((panda$core$Object*) $tmp1019));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
// unreffing REF($89:org.pandalanguage.pandac.Type)
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
// line 515
org$pandalanguage$pandac$Type* $tmp1020 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp1021 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp1022 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1021);
org$pandalanguage$pandac$Position $tmp1023 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp1024 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1020, &$s1025, $tmp1022, $tmp1023, $tmp1024);
panda$collections$Array* $tmp1026 = *(&local0);
org$pandalanguage$pandac$Type* $tmp1027 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp1020, ((panda$collections$ListView*) $tmp1026));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
// unreffing REF($107:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
// unreffing REF($99:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp1028 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp1027;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$Type* param1) {

panda$collections$Array* local0 = NULL;
// line 520
panda$collections$Array* $tmp1029 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1029);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1029));
panda$collections$Array* $tmp1030 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1030));
*(&local0) = $tmp1029;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1029));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 521
panda$collections$Array* $tmp1031 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp1031, ((panda$core$Object*) param0));
// line 522
panda$collections$Array* $tmp1032 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp1032, ((panda$core$Object*) param1));
// line 523
org$pandalanguage$pandac$Type* $tmp1033 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp1034 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp1035 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1034);
org$pandalanguage$pandac$Position $tmp1036 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp1037 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1033, &$s1038, $tmp1035, $tmp1036, $tmp1037);
panda$collections$Array* $tmp1039 = *(&local0);
org$pandalanguage$pandac$Type* $tmp1040 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp1033, ((panda$collections$ListView*) $tmp1039));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1040));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1040));
// unreffing REF($33:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1033));
// unreffing REF($25:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp1041 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1041));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp1040;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {

// line 528
org$pandalanguage$pandac$Type* $tmp1042 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp1043 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Type$Kind $tmp1044 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1043);
org$pandalanguage$pandac$Position $tmp1045 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp1046 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1042, &$s1047, $tmp1044, $tmp1045, $tmp1046);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1042));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1042));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp1042;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {

// line 533
org$pandalanguage$pandac$Type* $tmp1048 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp1049 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Type$Kind $tmp1050 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1049);
org$pandalanguage$pandac$Position $tmp1051 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp1052 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1048, &$s1053, $tmp1050, $tmp1051, $tmp1052);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp1048;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
// line 537
panda$core$String** $tmp1054 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1055 = *$tmp1054;
panda$core$Bit $tmp1056 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1055, &$s1057);
bool $tmp1058 = $tmp1056.value;
if ($tmp1058) goto block1; else goto block2;
block1:;
*(&local3) = $tmp1056;
goto block3;
block2:;
panda$core$String** $tmp1059 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1060 = *$tmp1059;
panda$core$Bit $tmp1061 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1060, &$s1062);
*(&local3) = $tmp1061;
goto block3;
block3:;
panda$core$Bit $tmp1063 = *(&local3);
bool $tmp1064 = $tmp1063.value;
if ($tmp1064) goto block4; else goto block5;
block4:;
*(&local2) = $tmp1063;
goto block6;
block5:;
panda$core$String** $tmp1065 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1066 = *$tmp1065;
panda$core$Bit $tmp1067 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1066, &$s1068);
*(&local2) = $tmp1067;
goto block6;
block6:;
panda$core$Bit $tmp1069 = *(&local2);
bool $tmp1070 = $tmp1069.value;
if ($tmp1070) goto block7; else goto block8;
block7:;
*(&local1) = $tmp1069;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1071 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1072 = *$tmp1071;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1073;
$tmp1073 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1073->value = $tmp1072;
panda$core$Int64 $tmp1074 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1075 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1074);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1076;
$tmp1076 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1076->value = $tmp1075;
ITable* $tmp1077 = ((panda$core$Equatable*) $tmp1073)->$class->itable;
while ($tmp1077->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1077 = $tmp1077->next;
}
$fn1079 $tmp1078 = $tmp1077->methods[0];
panda$core$Bit $tmp1080 = $tmp1078(((panda$core$Equatable*) $tmp1073), ((panda$core$Equatable*) $tmp1076));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1076)));
// unreffing REF($37:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1073)));
// unreffing REF($33:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp1080;
goto block9;
block9:;
panda$core$Bit $tmp1081 = *(&local1);
bool $tmp1082 = $tmp1081.value;
if ($tmp1082) goto block10; else goto block11;
block10:;
*(&local0) = $tmp1081;
goto block12;
block11:;
org$pandalanguage$pandac$Type$Kind* $tmp1083 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1084 = *$tmp1083;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1085;
$tmp1085 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1085->value = $tmp1084;
panda$core$Int64 $tmp1086 = (panda$core$Int64) {19};
org$pandalanguage$pandac$Type$Kind $tmp1087 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1086);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1088;
$tmp1088 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1088->value = $tmp1087;
ITable* $tmp1089 = ((panda$core$Equatable*) $tmp1085)->$class->itable;
while ($tmp1089->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1089 = $tmp1089->next;
}
$fn1091 $tmp1090 = $tmp1089->methods[0];
panda$core$Bit $tmp1092 = $tmp1090(((panda$core$Equatable*) $tmp1085), ((panda$core$Equatable*) $tmp1088));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1088)));
// unreffing REF($59:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1085)));
// unreffing REF($55:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp1092;
goto block12;
block12:;
panda$core$Bit $tmp1093 = *(&local0);
return $tmp1093;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
// line 543
org$pandalanguage$pandac$Type$Kind* $tmp1094 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1095 = *$tmp1094;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1096;
$tmp1096 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1096->value = $tmp1095;
panda$core$Int64 $tmp1097 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp1098 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1097);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1099;
$tmp1099 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1099->value = $tmp1098;
ITable* $tmp1100 = ((panda$core$Equatable*) $tmp1096)->$class->itable;
while ($tmp1100->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1100 = $tmp1100->next;
}
$fn1102 $tmp1101 = $tmp1100->methods[0];
panda$core$Bit $tmp1103 = $tmp1101(((panda$core$Equatable*) $tmp1096), ((panda$core$Equatable*) $tmp1099));
bool $tmp1104 = $tmp1103.value;
if ($tmp1104) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1103;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1105 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1106 = *$tmp1105;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1107;
$tmp1107 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1107->value = $tmp1106;
panda$core$Int64 $tmp1108 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp1109 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1108);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1110;
$tmp1110 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1110->value = $tmp1109;
ITable* $tmp1111 = ((panda$core$Equatable*) $tmp1107)->$class->itable;
while ($tmp1111->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1111 = $tmp1111->next;
}
$fn1113 $tmp1112 = $tmp1111->methods[0];
panda$core$Bit $tmp1114 = $tmp1112(((panda$core$Equatable*) $tmp1107), ((panda$core$Equatable*) $tmp1110));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1110)));
// unreffing REF($20:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1107)));
// unreffing REF($16:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp1114;
goto block3;
block3:;
panda$core$Bit $tmp1115 = *(&local2);
bool $tmp1116 = $tmp1115.value;
if ($tmp1116) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1115;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1117 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1118 = *$tmp1117;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1119;
$tmp1119 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1119->value = $tmp1118;
panda$core$Int64 $tmp1120 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp1121 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1120);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1122;
$tmp1122 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1122->value = $tmp1121;
ITable* $tmp1123 = ((panda$core$Equatable*) $tmp1119)->$class->itable;
while ($tmp1123->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1123 = $tmp1123->next;
}
$fn1125 $tmp1124 = $tmp1123->methods[0];
panda$core$Bit $tmp1126 = $tmp1124(((panda$core$Equatable*) $tmp1119), ((panda$core$Equatable*) $tmp1122));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1122)));
// unreffing REF($42:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1119)));
// unreffing REF($38:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp1126;
goto block6;
block6:;
panda$core$Bit $tmp1127 = *(&local1);
bool $tmp1128 = $tmp1127.value;
if ($tmp1128) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1127;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1129 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1130 = *$tmp1129;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1131;
$tmp1131 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1131->value = $tmp1130;
panda$core$Int64 $tmp1132 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1133 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1132);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1134;
$tmp1134 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1134->value = $tmp1133;
ITable* $tmp1135 = ((panda$core$Equatable*) $tmp1131)->$class->itable;
while ($tmp1135->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1135 = $tmp1135->next;
}
$fn1137 $tmp1136 = $tmp1135->methods[0];
panda$core$Bit $tmp1138 = $tmp1136(((panda$core$Equatable*) $tmp1131), ((panda$core$Equatable*) $tmp1134));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1134)));
// unreffing REF($64:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1131)));
// unreffing REF($60:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp1138;
goto block9;
block9:;
panda$core$Bit $tmp1139 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1099)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1096)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
return $tmp1139;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isSigned$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 548
panda$core$String** $tmp1140 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1141 = *$tmp1140;
panda$core$Bit $tmp1142 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1141, &$s1143);
return $tmp1142;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
// line 552
org$pandalanguage$pandac$Type$Kind* $tmp1144 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1145 = *$tmp1144;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1146;
$tmp1146 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1146->value = $tmp1145;
panda$core$Int64 $tmp1147 = (panda$core$Int64) {19};
org$pandalanguage$pandac$Type$Kind $tmp1148 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1147);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1149;
$tmp1149 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1149->value = $tmp1148;
ITable* $tmp1150 = ((panda$core$Equatable*) $tmp1146)->$class->itable;
while ($tmp1150->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1150 = $tmp1150->next;
}
$fn1152 $tmp1151 = $tmp1150->methods[0];
panda$core$Bit $tmp1153 = $tmp1151(((panda$core$Equatable*) $tmp1146), ((panda$core$Equatable*) $tmp1149));
bool $tmp1154 = $tmp1153.value;
if ($tmp1154) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1153;
goto block3;
block2:;
panda$core$String** $tmp1155 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1156 = *$tmp1155;
panda$core$Bit $tmp1157 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1156, &$s1158);
*(&local0) = $tmp1157;
goto block3;
block3:;
panda$core$Bit $tmp1159 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1149)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1146)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
return $tmp1159;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 556
panda$core$String** $tmp1160 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1161 = *$tmp1160;
panda$core$Bit $tmp1162 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1161, &$s1163);
return $tmp1162;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
// line 560
panda$core$Bit $tmp1164 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param0);
bool $tmp1165 = $tmp1164.value;
if ($tmp1165) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1164;
goto block3;
block2:;
panda$core$Bit $tmp1166 = org$pandalanguage$pandac$Type$get_isChar$R$panda$core$Bit(param0);
*(&local0) = $tmp1166;
goto block3;
block3:;
panda$core$Bit $tmp1167 = *(&local0);
return $tmp1167;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 564
org$pandalanguage$pandac$Type$Kind* $tmp1168 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1169 = *$tmp1168;
panda$core$Int64 $tmp1170 = $tmp1169.$rawValue;
panda$core$Int64 $tmp1171 = (panda$core$Int64) {0};
panda$core$Bit $tmp1172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1170, $tmp1171);
bool $tmp1173 = $tmp1172.value;
if ($tmp1173) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp1174 = (panda$core$Int64) {1};
panda$core$Bit $tmp1175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1170, $tmp1174);
bool $tmp1176 = $tmp1175.value;
if ($tmp1176) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp1177 = (panda$core$Int64) {11};
panda$core$Bit $tmp1178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1170, $tmp1177);
bool $tmp1179 = $tmp1178.value;
if ($tmp1179) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp1180 = (panda$core$Int64) {12};
panda$core$Bit $tmp1181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1170, $tmp1180);
bool $tmp1182 = $tmp1181.value;
if ($tmp1182) goto block2; else goto block6;
block6:;
panda$core$Int64 $tmp1183 = (panda$core$Int64) {13};
panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1170, $tmp1183);
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block2; else goto block7;
block7:;
panda$core$Int64 $tmp1186 = (panda$core$Int64) {16};
panda$core$Bit $tmp1187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1170, $tmp1186);
bool $tmp1188 = $tmp1187.value;
if ($tmp1188) goto block2; else goto block8;
block8:;
panda$core$Int64 $tmp1189 = (panda$core$Int64) {15};
panda$core$Bit $tmp1190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1170, $tmp1189);
bool $tmp1191 = $tmp1190.value;
if ($tmp1191) goto block2; else goto block9;
block9:;
panda$core$Int64 $tmp1192 = (panda$core$Int64) {18};
panda$core$Bit $tmp1193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1170, $tmp1192);
bool $tmp1194 = $tmp1193.value;
if ($tmp1194) goto block2; else goto block10;
block10:;
panda$core$Int64 $tmp1195 = (panda$core$Int64) {17};
panda$core$Bit $tmp1196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1170, $tmp1195);
bool $tmp1197 = $tmp1196.value;
if ($tmp1197) goto block2; else goto block11;
block2:;
// line 568
panda$core$Bit $tmp1198 = panda$core$Bit$init$builtin_bit(true);
return $tmp1198;
block11:;
// line 571
panda$core$Bit $tmp1199 = panda$core$Bit$init$builtin_bit(false);
return $tmp1199;
block1:;
panda$core$Bit $tmp1200 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1201 = $tmp1200.value;
if ($tmp1201) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp1202 = (panda$core$Int64) {563};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1203, $tmp1202, &$s1204);
abort(); // unreachable
block12:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
// line 577
org$pandalanguage$pandac$Type$Kind* $tmp1205 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1206 = *$tmp1205;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1207;
$tmp1207 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1207->value = $tmp1206;
panda$core$Int64 $tmp1208 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp1209 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1208);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1210;
$tmp1210 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1210->value = $tmp1209;
ITable* $tmp1211 = ((panda$core$Equatable*) $tmp1207)->$class->itable;
while ($tmp1211->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1211 = $tmp1211->next;
}
$fn1213 $tmp1212 = $tmp1211->methods[0];
panda$core$Bit $tmp1214 = $tmp1212(((panda$core$Equatable*) $tmp1207), ((panda$core$Equatable*) $tmp1210));
bool $tmp1215 = $tmp1214.value;
if ($tmp1215) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$FixedArray** $tmp1216 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1217 = *$tmp1216;
panda$core$Bit $tmp1218 = panda$core$Bit$init$builtin_bit($tmp1217 != NULL);
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1220 = (panda$core$Int64) {577};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1221, $tmp1220, &$s1222);
abort(); // unreachable
block4:;
panda$core$Int64 $tmp1223 = (panda$core$Int64) {0};
panda$core$Object* $tmp1224 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1217, $tmp1223);
org$pandalanguage$pandac$Type* $tmp1225 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1226 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1224), $tmp1225);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1225));
// unreffing REF($26:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1224);
// unreffing REF($24:org.pandalanguage.pandac.FixedArray.T)
*(&local0) = $tmp1226;
goto block3;
block2:;
*(&local0) = $tmp1214;
goto block3;
block3:;
panda$core$Bit $tmp1227 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1210)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1207)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
return $tmp1227;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 581
org$pandalanguage$pandac$Type$Kind* $tmp1228 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1229 = *$tmp1228;
panda$core$Int64 $tmp1230 = $tmp1229.$rawValue;
panda$core$Int64 $tmp1231 = (panda$core$Int64) {16};
panda$core$Bit $tmp1232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1230, $tmp1231);
bool $tmp1233 = $tmp1232.value;
if ($tmp1233) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp1234 = (panda$core$Int64) {15};
panda$core$Bit $tmp1235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1230, $tmp1234);
bool $tmp1236 = $tmp1235.value;
if ($tmp1236) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp1237 = (panda$core$Int64) {18};
panda$core$Bit $tmp1238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1230, $tmp1237);
bool $tmp1239 = $tmp1238.value;
if ($tmp1239) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp1240 = (panda$core$Int64) {17};
panda$core$Bit $tmp1241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1230, $tmp1240);
bool $tmp1242 = $tmp1241.value;
if ($tmp1242) goto block2; else goto block6;
block2:;
// line 583
panda$core$Bit $tmp1243 = panda$core$Bit$init$builtin_bit(true);
return $tmp1243;
block6:;
// line 586
panda$core$Bit $tmp1244 = panda$core$Bit$init$builtin_bit(false);
return $tmp1244;
block1:;
panda$core$Bit $tmp1245 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1246 = $tmp1245.value;
if ($tmp1246) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1247 = (panda$core$Int64) {580};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1248, $tmp1247, &$s1249);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 592
panda$core$String** $tmp1250 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1251 = *$tmp1250;
panda$core$Bit $tmp1252 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1251, &$s1253);
return $tmp1252;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 596
panda$core$String** $tmp1254 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1255 = *$tmp1254;
panda$core$String* $tmp1256 = panda$core$String$convert$R$panda$core$String(&$s1257);
panda$core$String* $tmp1258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1256, &$s1259);
panda$core$Bit $tmp1260 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1255, $tmp1258);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1258));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1256));
// unreffing REF($4:panda.core.String)
return $tmp1260;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 600
panda$core$String** $tmp1261 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1262 = *$tmp1261;
panda$core$String* $tmp1263 = panda$core$String$convert$R$panda$core$String(&$s1264);
panda$core$String* $tmp1265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1263, &$s1266);
panda$core$Bit $tmp1267 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1262, $tmp1265);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1265));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
// unreffing REF($4:panda.core.String)
return $tmp1267;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isNullable$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 604
org$pandalanguage$pandac$Type$Kind* $tmp1268 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1269 = *$tmp1268;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1270;
$tmp1270 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1270->value = $tmp1269;
panda$core$Int64 $tmp1271 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1272 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1271);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1273;
$tmp1273 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1273->value = $tmp1272;
ITable* $tmp1274 = ((panda$core$Equatable*) $tmp1270)->$class->itable;
while ($tmp1274->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1274 = $tmp1274->next;
}
$fn1276 $tmp1275 = $tmp1274->methods[0];
panda$core$Bit $tmp1277 = $tmp1275(((panda$core$Equatable*) $tmp1270), ((panda$core$Equatable*) $tmp1273));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1273)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1270)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
return $tmp1277;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 608
org$pandalanguage$pandac$Type$Kind* $tmp1278 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1279 = *$tmp1278;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1280;
$tmp1280 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1280->value = $tmp1279;
panda$core$Int64 $tmp1281 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1282 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1281);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1283;
$tmp1283 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1283->value = $tmp1282;
ITable* $tmp1284 = ((panda$core$Equatable*) $tmp1280)->$class->itable;
while ($tmp1284->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1284 = $tmp1284->next;
}
$fn1286 $tmp1285 = $tmp1284->methods[0];
panda$core$Bit $tmp1287 = $tmp1285(((panda$core$Equatable*) $tmp1280), ((panda$core$Equatable*) $tmp1283));
bool $tmp1288 = $tmp1287.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1283)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1280)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1288) goto block1; else goto block2;
block1:;
// line 609
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 611
panda$collections$Array* $tmp1289 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1289);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1289));
panda$collections$Array* $tmp1290 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1290));
*(&local0) = $tmp1289;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1289));
// unreffing REF($23:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 612
panda$collections$Array* $tmp1291 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp1291, ((panda$core$Object*) param0));
// line 613
org$pandalanguage$pandac$Type* $tmp1292 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String** $tmp1293 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1294 = *$tmp1293;
panda$core$String* $tmp1295 = panda$core$String$convert$R$panda$core$String($tmp1294);
panda$core$String* $tmp1296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1295, &$s1297);
panda$core$Int64 $tmp1298 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1299 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1298);
org$pandalanguage$pandac$Position $tmp1300 = org$pandalanguage$pandac$Position$init();
panda$collections$Array* $tmp1301 = *(&local0);
panda$core$Bit $tmp1302 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1292, $tmp1296, $tmp1299, $tmp1300, ((panda$collections$ListView*) $tmp1301), $tmp1302);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1292));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1296));
// unreffing REF($47:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1295));
// unreffing REF($46:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1292));
// unreffing REF($42:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp1303 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1303));
// unreffing subtypes
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp1292;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

// line 617
org$pandalanguage$pandac$Type$Kind* $tmp1304 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1305 = *$tmp1304;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1306;
$tmp1306 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1306->value = $tmp1305;
panda$core$Int64 $tmp1307 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1308 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1307);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1309;
$tmp1309 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1309->value = $tmp1308;
ITable* $tmp1310 = ((panda$core$Equatable*) $tmp1306)->$class->itable;
while ($tmp1310->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1310 = $tmp1310->next;
}
$fn1312 $tmp1311 = $tmp1310->methods[1];
panda$core$Bit $tmp1313 = $tmp1311(((panda$core$Equatable*) $tmp1306), ((panda$core$Equatable*) $tmp1309));
bool $tmp1314 = $tmp1313.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1309)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1306)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1314) goto block1; else goto block2;
block1:;
// line 618
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 620
org$pandalanguage$pandac$FixedArray** $tmp1315 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1316 = *$tmp1315;
panda$core$Bit $tmp1317 = panda$core$Bit$init$builtin_bit($tmp1316 != NULL);
bool $tmp1318 = $tmp1317.value;
if ($tmp1318) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp1319 = (panda$core$Int64) {620};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1320, $tmp1319, &$s1321);
abort(); // unreachable
block3:;
panda$core$Int64 $tmp1322 = (panda$core$Int64) {0};
panda$core$Object* $tmp1323 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1316, $tmp1322);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1323)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1323);
// unreffing REF($35:org.pandalanguage.pandac.FixedArray.T)
return ((org$pandalanguage$pandac$Type*) $tmp1323);

}
panda$core$Int64 org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
org$pandalanguage$pandac$Type$Kind* $tmp1324 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1325 = *$tmp1324;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1326;
$tmp1326 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1326->value = $tmp1325;
panda$core$Int64 $tmp1327 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp1328 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1327);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1329;
$tmp1329 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1329->value = $tmp1328;
ITable* $tmp1330 = ((panda$core$Equatable*) $tmp1326)->$class->itable;
while ($tmp1330->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1330 = $tmp1330->next;
}
$fn1332 $tmp1331 = $tmp1330->methods[0];
panda$core$Bit $tmp1333 = $tmp1331(((panda$core$Equatable*) $tmp1326), ((panda$core$Equatable*) $tmp1329));
bool $tmp1334 = $tmp1333.value;
if ($tmp1334) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1333;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1335 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1336 = *$tmp1335;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1337;
$tmp1337 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1337->value = $tmp1336;
panda$core$Int64 $tmp1338 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp1339 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1338);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1340;
$tmp1340 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1340->value = $tmp1339;
ITable* $tmp1341 = ((panda$core$Equatable*) $tmp1337)->$class->itable;
while ($tmp1341->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1341 = $tmp1341->next;
}
$fn1343 $tmp1342 = $tmp1341->methods[0];
panda$core$Bit $tmp1344 = $tmp1342(((panda$core$Equatable*) $tmp1337), ((panda$core$Equatable*) $tmp1340));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1340)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1337)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp1344;
goto block3;
block3:;
panda$core$Bit $tmp1345 = *(&local2);
bool $tmp1346 = $tmp1345.value;
if ($tmp1346) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1345;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1347 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1348 = *$tmp1347;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1349;
$tmp1349 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1349->value = $tmp1348;
panda$core$Int64 $tmp1350 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp1351 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1350);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1352;
$tmp1352 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1352->value = $tmp1351;
ITable* $tmp1353 = ((panda$core$Equatable*) $tmp1349)->$class->itable;
while ($tmp1353->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1353 = $tmp1353->next;
}
$fn1355 $tmp1354 = $tmp1353->methods[0];
panda$core$Bit $tmp1356 = $tmp1354(((panda$core$Equatable*) $tmp1349), ((panda$core$Equatable*) $tmp1352));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1352)));
// unreffing REF($41:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1349)));
// unreffing REF($37:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp1356;
goto block6;
block6:;
panda$core$Bit $tmp1357 = *(&local1);
bool $tmp1358 = $tmp1357.value;
if ($tmp1358) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1357;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1359 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1360 = *$tmp1359;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1361;
$tmp1361 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1361->value = $tmp1360;
panda$core$Int64 $tmp1362 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp1363 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1362);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1364;
$tmp1364 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1364->value = $tmp1363;
ITable* $tmp1365 = ((panda$core$Equatable*) $tmp1361)->$class->itable;
while ($tmp1365->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1365 = $tmp1365->next;
}
$fn1367 $tmp1366 = $tmp1365->methods[0];
panda$core$Bit $tmp1368 = $tmp1366(((panda$core$Equatable*) $tmp1361), ((panda$core$Equatable*) $tmp1364));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1364)));
// unreffing REF($63:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1361)));
// unreffing REF($59:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp1368;
goto block9;
block9:;
panda$core$Bit $tmp1369 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1329)));
// unreffing REF($6:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1326)));
// unreffing REF($2:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp1370 = $tmp1369.value;
if ($tmp1370) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp1371 = (panda$core$Int64) {625};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1372, $tmp1371, &$s1373);
abort(); // unreachable
block10:;
// line 626
org$pandalanguage$pandac$FixedArray** $tmp1374 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1375 = *$tmp1374;
panda$core$Bit $tmp1376 = panda$core$Bit$init$builtin_bit($tmp1375 != NULL);
bool $tmp1377 = $tmp1376.value;
if ($tmp1377) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp1378 = (panda$core$Int64) {626};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1379, $tmp1378, &$s1380);
abort(); // unreachable
block12:;
ITable* $tmp1381 = ((panda$collections$CollectionView*) $tmp1375)->$class->itable;
while ($tmp1381->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1381 = $tmp1381->next;
}
$fn1383 $tmp1382 = $tmp1381->methods[0];
panda$core$Int64 $tmp1384 = $tmp1382(((panda$collections$CollectionView*) $tmp1375));
panda$core$Int64 $tmp1385 = (panda$core$Int64) {1};
int64_t $tmp1386 = $tmp1384.value;
int64_t $tmp1387 = $tmp1385.value;
int64_t $tmp1388 = $tmp1386 - $tmp1387;
panda$core$Int64 $tmp1389 = (panda$core$Int64) {$tmp1388};
return $tmp1389;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
org$pandalanguage$pandac$Type$Kind* $tmp1390 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1391 = *$tmp1390;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1392;
$tmp1392 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1392->value = $tmp1391;
panda$core$Int64 $tmp1393 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp1394 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1393);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1395;
$tmp1395 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1395->value = $tmp1394;
ITable* $tmp1396 = ((panda$core$Equatable*) $tmp1392)->$class->itable;
while ($tmp1396->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1396 = $tmp1396->next;
}
$fn1398 $tmp1397 = $tmp1396->methods[0];
panda$core$Bit $tmp1399 = $tmp1397(((panda$core$Equatable*) $tmp1392), ((panda$core$Equatable*) $tmp1395));
bool $tmp1400 = $tmp1399.value;
if ($tmp1400) goto block1; else goto block2;
block1:;
*(&local4) = $tmp1399;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1401 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1402 = *$tmp1401;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1403;
$tmp1403 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1403->value = $tmp1402;
panda$core$Int64 $tmp1404 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp1405 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1404);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1406;
$tmp1406 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1406->value = $tmp1405;
ITable* $tmp1407 = ((panda$core$Equatable*) $tmp1403)->$class->itable;
while ($tmp1407->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1407 = $tmp1407->next;
}
$fn1409 $tmp1408 = $tmp1407->methods[0];
panda$core$Bit $tmp1410 = $tmp1408(((panda$core$Equatable*) $tmp1403), ((panda$core$Equatable*) $tmp1406));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1406)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1403)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local4) = $tmp1410;
goto block3;
block3:;
panda$core$Bit $tmp1411 = *(&local4);
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block4; else goto block5;
block4:;
*(&local3) = $tmp1411;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1413 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1414 = *$tmp1413;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1415;
$tmp1415 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1415->value = $tmp1414;
panda$core$Int64 $tmp1416 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp1417 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1416);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1418;
$tmp1418 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1418->value = $tmp1417;
ITable* $tmp1419 = ((panda$core$Equatable*) $tmp1415)->$class->itable;
while ($tmp1419->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1419 = $tmp1419->next;
}
$fn1421 $tmp1420 = $tmp1419->methods[0];
panda$core$Bit $tmp1422 = $tmp1420(((panda$core$Equatable*) $tmp1415), ((panda$core$Equatable*) $tmp1418));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1418)));
// unreffing REF($41:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1415)));
// unreffing REF($37:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local3) = $tmp1422;
goto block6;
block6:;
panda$core$Bit $tmp1423 = *(&local3);
bool $tmp1424 = $tmp1423.value;
if ($tmp1424) goto block7; else goto block8;
block7:;
*(&local2) = $tmp1423;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1425 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1426 = *$tmp1425;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1427;
$tmp1427 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1427->value = $tmp1426;
panda$core$Int64 $tmp1428 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp1429 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1428);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1430;
$tmp1430 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1430->value = $tmp1429;
ITable* $tmp1431 = ((panda$core$Equatable*) $tmp1427)->$class->itable;
while ($tmp1431->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1431 = $tmp1431->next;
}
$fn1433 $tmp1432 = $tmp1431->methods[0];
panda$core$Bit $tmp1434 = $tmp1432(((panda$core$Equatable*) $tmp1427), ((panda$core$Equatable*) $tmp1430));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1430)));
// unreffing REF($63:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1427)));
// unreffing REF($59:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp1434;
goto block9;
block9:;
panda$core$Bit $tmp1435 = *(&local2);
bool $tmp1436 = $tmp1435.value;
if ($tmp1436) goto block10; else goto block11;
block10:;
panda$core$Int64 $tmp1437 = (panda$core$Int64) {0};
int64_t $tmp1438 = param1.value;
int64_t $tmp1439 = $tmp1437.value;
bool $tmp1440 = $tmp1438 >= $tmp1439;
panda$core$Bit $tmp1441 = (panda$core$Bit) {$tmp1440};
*(&local1) = $tmp1441;
goto block12;
block11:;
*(&local1) = $tmp1435;
goto block12;
block12:;
panda$core$Bit $tmp1442 = *(&local1);
bool $tmp1443 = $tmp1442.value;
if ($tmp1443) goto block13; else goto block14;
block13:;
org$pandalanguage$pandac$FixedArray** $tmp1444 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1445 = *$tmp1444;
panda$core$Bit $tmp1446 = panda$core$Bit$init$builtin_bit($tmp1445 != NULL);
bool $tmp1447 = $tmp1446.value;
if ($tmp1447) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp1448 = (panda$core$Int64) {630};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1449, $tmp1448, &$s1450);
abort(); // unreachable
block16:;
ITable* $tmp1451 = ((panda$collections$CollectionView*) $tmp1445)->$class->itable;
while ($tmp1451->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1451 = $tmp1451->next;
}
$fn1453 $tmp1452 = $tmp1451->methods[0];
panda$core$Int64 $tmp1454 = $tmp1452(((panda$collections$CollectionView*) $tmp1445));
panda$core$Int64 $tmp1455 = (panda$core$Int64) {1};
int64_t $tmp1456 = $tmp1454.value;
int64_t $tmp1457 = $tmp1455.value;
int64_t $tmp1458 = $tmp1456 - $tmp1457;
panda$core$Int64 $tmp1459 = (panda$core$Int64) {$tmp1458};
int64_t $tmp1460 = param1.value;
int64_t $tmp1461 = $tmp1459.value;
bool $tmp1462 = $tmp1460 < $tmp1461;
panda$core$Bit $tmp1463 = (panda$core$Bit) {$tmp1462};
*(&local0) = $tmp1463;
goto block15;
block14:;
*(&local0) = $tmp1442;
goto block15;
block15:;
panda$core$Bit $tmp1464 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1395)));
// unreffing REF($6:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1392)));
// unreffing REF($2:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp1465 = $tmp1464.value;
if ($tmp1465) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp1466 = (panda$core$Int64) {631};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1467, $tmp1466, &$s1468);
abort(); // unreachable
block18:;
// line 632
org$pandalanguage$pandac$FixedArray** $tmp1469 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1470 = *$tmp1469;
panda$core$Bit $tmp1471 = panda$core$Bit$init$builtin_bit($tmp1470 != NULL);
bool $tmp1472 = $tmp1471.value;
if ($tmp1472) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp1473 = (panda$core$Int64) {632};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1474, $tmp1473, &$s1475);
abort(); // unreachable
block20:;
panda$core$Object* $tmp1476 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1470, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1476)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1476);
// unreffing REF($138:org.pandalanguage.pandac.FixedArray.T)
return ((org$pandalanguage$pandac$Type*) $tmp1476);

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
org$pandalanguage$pandac$Type$Kind* $tmp1477 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1478 = *$tmp1477;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1479;
$tmp1479 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1479->value = $tmp1478;
panda$core$Int64 $tmp1480 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp1481 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1480);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1482;
$tmp1482 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1482->value = $tmp1481;
ITable* $tmp1483 = ((panda$core$Equatable*) $tmp1479)->$class->itable;
while ($tmp1483->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1483 = $tmp1483->next;
}
$fn1485 $tmp1484 = $tmp1483->methods[0];
panda$core$Bit $tmp1486 = $tmp1484(((panda$core$Equatable*) $tmp1479), ((panda$core$Equatable*) $tmp1482));
bool $tmp1487 = $tmp1486.value;
if ($tmp1487) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1486;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1488 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1489 = *$tmp1488;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1490;
$tmp1490 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1490->value = $tmp1489;
panda$core$Int64 $tmp1491 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp1492 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1491);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1493;
$tmp1493 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1493->value = $tmp1492;
ITable* $tmp1494 = ((panda$core$Equatable*) $tmp1490)->$class->itable;
while ($tmp1494->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1494 = $tmp1494->next;
}
$fn1496 $tmp1495 = $tmp1494->methods[0];
panda$core$Bit $tmp1497 = $tmp1495(((panda$core$Equatable*) $tmp1490), ((panda$core$Equatable*) $tmp1493));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1493)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1490)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp1497;
goto block3;
block3:;
panda$core$Bit $tmp1498 = *(&local2);
bool $tmp1499 = $tmp1498.value;
if ($tmp1499) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1498;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1500 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1501 = *$tmp1500;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1502;
$tmp1502 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1502->value = $tmp1501;
panda$core$Int64 $tmp1503 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp1504 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1503);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1505;
$tmp1505 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1505->value = $tmp1504;
ITable* $tmp1506 = ((panda$core$Equatable*) $tmp1502)->$class->itable;
while ($tmp1506->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1506 = $tmp1506->next;
}
$fn1508 $tmp1507 = $tmp1506->methods[0];
panda$core$Bit $tmp1509 = $tmp1507(((panda$core$Equatable*) $tmp1502), ((panda$core$Equatable*) $tmp1505));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1505)));
// unreffing REF($41:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1502)));
// unreffing REF($37:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp1509;
goto block6;
block6:;
panda$core$Bit $tmp1510 = *(&local1);
bool $tmp1511 = $tmp1510.value;
if ($tmp1511) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1510;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1512 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1513 = *$tmp1512;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1514;
$tmp1514 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1514->value = $tmp1513;
panda$core$Int64 $tmp1515 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp1516 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1515);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1517;
$tmp1517 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1517->value = $tmp1516;
ITable* $tmp1518 = ((panda$core$Equatable*) $tmp1514)->$class->itable;
while ($tmp1518->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1518 = $tmp1518->next;
}
$fn1520 $tmp1519 = $tmp1518->methods[0];
panda$core$Bit $tmp1521 = $tmp1519(((panda$core$Equatable*) $tmp1514), ((panda$core$Equatable*) $tmp1517));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1517)));
// unreffing REF($63:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1514)));
// unreffing REF($59:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp1521;
goto block9;
block9:;
panda$core$Bit $tmp1522 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1482)));
// unreffing REF($6:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1479)));
// unreffing REF($2:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp1523 = $tmp1522.value;
if ($tmp1523) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp1524 = (panda$core$Int64) {637};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1525, $tmp1524, &$s1526);
abort(); // unreachable
block10:;
// line 638
org$pandalanguage$pandac$FixedArray** $tmp1527 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1528 = *$tmp1527;
panda$core$Bit $tmp1529 = panda$core$Bit$init$builtin_bit($tmp1528 != NULL);
bool $tmp1530 = $tmp1529.value;
if ($tmp1530) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp1531 = (panda$core$Int64) {638};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1532, $tmp1531, &$s1533);
abort(); // unreachable
block12:;
org$pandalanguage$pandac$FixedArray** $tmp1534 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1535 = *$tmp1534;
panda$core$Bit $tmp1536 = panda$core$Bit$init$builtin_bit($tmp1535 != NULL);
bool $tmp1537 = $tmp1536.value;
if ($tmp1537) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp1538 = (panda$core$Int64) {638};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1539, $tmp1538, &$s1540);
abort(); // unreachable
block14:;
ITable* $tmp1541 = ((panda$collections$CollectionView*) $tmp1535)->$class->itable;
while ($tmp1541->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1541 = $tmp1541->next;
}
$fn1543 $tmp1542 = $tmp1541->methods[0];
panda$core$Int64 $tmp1544 = $tmp1542(((panda$collections$CollectionView*) $tmp1535));
panda$core$Int64 $tmp1545 = (panda$core$Int64) {1};
int64_t $tmp1546 = $tmp1544.value;
int64_t $tmp1547 = $tmp1545.value;
int64_t $tmp1548 = $tmp1546 - $tmp1547;
panda$core$Int64 $tmp1549 = (panda$core$Int64) {$tmp1548};
panda$core$Object* $tmp1550 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1528, $tmp1549);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1550)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1550);
// unreffing REF($115:org.pandalanguage.pandac.FixedArray.T)
return ((org$pandalanguage$pandac$Type*) $tmp1550);

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
panda$core$Bit $tmp1551 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, param2);
bool $tmp1552 = $tmp1551.value;
if ($tmp1552) goto block1; else goto block2;
block1:;
// line 646
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 648
org$pandalanguage$pandac$Type* $tmp1553 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1554 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp1553);
bool $tmp1555 = $tmp1554.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1553));
// unreffing REF($9:org.pandalanguage.pandac.Type)
if ($tmp1555) goto block3; else goto block4;
block3:;
// line 649
org$pandalanguage$pandac$Type$Kind* $tmp1556 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1557 = *$tmp1556;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1558;
$tmp1558 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1558->value = $tmp1557;
panda$core$Int64 $tmp1559 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1560 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1559);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1561;
$tmp1561 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1561->value = $tmp1560;
ITable* $tmp1562 = ((panda$core$Equatable*) $tmp1558)->$class->itable;
while ($tmp1562->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1562 = $tmp1562->next;
}
$fn1564 $tmp1563 = $tmp1562->methods[0];
panda$core$Bit $tmp1565 = $tmp1563(((panda$core$Equatable*) $tmp1558), ((panda$core$Equatable*) $tmp1561));
bool $tmp1566 = $tmp1565.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1561)));
// unreffing REF($23:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1558)));
// unreffing REF($19:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1566) goto block5; else goto block6;
block5:;
// line 650
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block6:;
// line 652
org$pandalanguage$pandac$Type* $tmp1567 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1567));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1567));
// unreffing REF($39:org.pandalanguage.pandac.Type)
return $tmp1567;
block4:;
// line 654
org$pandalanguage$pandac$Type* $tmp1568 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1569 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param2, $tmp1568);
bool $tmp1570 = $tmp1569.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1568));
// unreffing REF($47:org.pandalanguage.pandac.Type)
if ($tmp1570) goto block7; else goto block8;
block7:;
// line 655
org$pandalanguage$pandac$Type$Kind* $tmp1571 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1572 = *$tmp1571;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1573;
$tmp1573 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1573->value = $tmp1572;
panda$core$Int64 $tmp1574 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1575 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1574);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1576;
$tmp1576 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1576->value = $tmp1575;
ITable* $tmp1577 = ((panda$core$Equatable*) $tmp1573)->$class->itable;
while ($tmp1577->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1577 = $tmp1577->next;
}
$fn1579 $tmp1578 = $tmp1577->methods[0];
panda$core$Bit $tmp1580 = $tmp1578(((panda$core$Equatable*) $tmp1573), ((panda$core$Equatable*) $tmp1576));
bool $tmp1581 = $tmp1580.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1576)));
// unreffing REF($61:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1573)));
// unreffing REF($57:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1581) goto block9; else goto block10;
block9:;
// line 656
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block10:;
// line 658
org$pandalanguage$pandac$Type* $tmp1582 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1582));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1582));
// unreffing REF($77:org.pandalanguage.pandac.Type)
return $tmp1582;
block8:;
// line 660
org$pandalanguage$pandac$Type$Kind* $tmp1583 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1584 = *$tmp1583;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1585;
$tmp1585 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1585->value = $tmp1584;
panda$core$Int64 $tmp1586 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1587 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1586);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1588;
$tmp1588 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1588->value = $tmp1587;
ITable* $tmp1589 = ((panda$core$Equatable*) $tmp1585)->$class->itable;
while ($tmp1589->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1589 = $tmp1589->next;
}
$fn1591 $tmp1590 = $tmp1589->methods[0];
panda$core$Bit $tmp1592 = $tmp1590(((panda$core$Equatable*) $tmp1585), ((panda$core$Equatable*) $tmp1588));
bool $tmp1593 = $tmp1592.value;
if ($tmp1593) goto block13; else goto block14;
block13:;
panda$core$Bit $tmp1594 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param2);
*(&local0) = $tmp1594;
goto block15;
block14:;
*(&local0) = $tmp1592;
goto block15;
block15:;
panda$core$Bit $tmp1595 = *(&local0);
bool $tmp1596 = $tmp1595.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1588)));
// unreffing REF($91:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1585)));
// unreffing REF($87:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1596) goto block11; else goto block12;
block11:;
// line 661
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block12:;
// line 663
panda$core$Bit $tmp1597 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param0);
bool $tmp1598 = $tmp1597.value;
if ($tmp1598) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Type$Kind* $tmp1599 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1600 = *$tmp1599;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1601;
$tmp1601 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1601->value = $tmp1600;
panda$core$Int64 $tmp1602 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1603 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1602);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1604;
$tmp1604 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1604->value = $tmp1603;
ITable* $tmp1605 = ((panda$core$Equatable*) $tmp1601)->$class->itable;
while ($tmp1605->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1605 = $tmp1605->next;
}
$fn1607 $tmp1606 = $tmp1605->methods[0];
panda$core$Bit $tmp1608 = $tmp1606(((panda$core$Equatable*) $tmp1601), ((panda$core$Equatable*) $tmp1604));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1604)));
// unreffing REF($124:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1601)));
// unreffing REF($120:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp1608;
goto block20;
block19:;
*(&local1) = $tmp1597;
goto block20;
block20:;
panda$core$Bit $tmp1609 = *(&local1);
bool $tmp1610 = $tmp1609.value;
if ($tmp1610) goto block16; else goto block17;
block16:;
// line 664
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block17:;
// line 666
panda$core$Bit $tmp1611 = org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit(param0);
bool $tmp1612 = $tmp1611.value;
if ($tmp1612) goto block21; else goto block22;
block21:;
// line 667
org$pandalanguage$pandac$Type$Kind* $tmp1613 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1614 = *$tmp1613;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1615;
$tmp1615 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1615->value = $tmp1614;
panda$core$Int64 $tmp1616 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1617 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1616);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1618;
$tmp1618 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1618->value = $tmp1617;
ITable* $tmp1619 = ((panda$core$Equatable*) $tmp1615)->$class->itable;
while ($tmp1619->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1619 = $tmp1619->next;
}
$fn1621 $tmp1620 = $tmp1619->methods[0];
panda$core$Bit $tmp1622 = $tmp1620(((panda$core$Equatable*) $tmp1615), ((panda$core$Equatable*) $tmp1618));
bool $tmp1623 = $tmp1622.value;
if ($tmp1623) goto block25; else goto block26;
block25:;
*(&local2) = $tmp1622;
goto block27;
block26:;
org$pandalanguage$pandac$Type$Kind* $tmp1624 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1625 = *$tmp1624;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1626;
$tmp1626 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1626->value = $tmp1625;
panda$core$Int64 $tmp1627 = (panda$core$Int64) {19};
org$pandalanguage$pandac$Type$Kind $tmp1628 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1627);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1629;
$tmp1629 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1629->value = $tmp1628;
ITable* $tmp1630 = ((panda$core$Equatable*) $tmp1626)->$class->itable;
while ($tmp1630->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1630 = $tmp1630->next;
}
$fn1632 $tmp1631 = $tmp1630->methods[0];
panda$core$Bit $tmp1633 = $tmp1631(((panda$core$Equatable*) $tmp1626), ((panda$core$Equatable*) $tmp1629));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1629)));
// unreffing REF($168:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1626)));
// unreffing REF($164:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp1633;
goto block27;
block27:;
panda$core$Bit $tmp1634 = *(&local2);
bool $tmp1635 = $tmp1634.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1618)));
// unreffing REF($155:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1615)));
// unreffing REF($151:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1635) goto block23; else goto block24;
block23:;
// line 668
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block24:;
// line 670
panda$core$Bit $tmp1636 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param2);
bool $tmp1637 = $tmp1636.value;
if ($tmp1637) goto block28; else goto block29;
block28:;
// line 671
panda$core$String** $tmp1638 = &((org$pandalanguage$pandac$Symbol*) param2)->name;
panda$core$String* $tmp1639 = *$tmp1638;
panda$core$Bit $tmp1640 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp1639, &$s1641);
bool $tmp1642 = $tmp1640.value;
if ($tmp1642) goto block30; else goto block31;
block30:;
// line 672
org$pandalanguage$pandac$Type* $tmp1643 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1643));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1643));
// unreffing REF($204:org.pandalanguage.pandac.Type)
return $tmp1643;
block31:;
// line 674
org$pandalanguage$pandac$Type* $tmp1644 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1644));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1644));
// unreffing REF($212:org.pandalanguage.pandac.Type)
return $tmp1644;
block29:;
goto block22;
block22:;
// line 677
panda$core$Bit $tmp1645 = org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit(param2);
bool $tmp1646 = $tmp1645.value;
if ($tmp1646) goto block32; else goto block33;
block32:;
// line 678
org$pandalanguage$pandac$Type$Kind* $tmp1647 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1648 = *$tmp1647;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1649;
$tmp1649 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1649->value = $tmp1648;
panda$core$Int64 $tmp1650 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1651 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1650);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1652;
$tmp1652 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1652->value = $tmp1651;
ITable* $tmp1653 = ((panda$core$Equatable*) $tmp1649)->$class->itable;
while ($tmp1653->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1653 = $tmp1653->next;
}
$fn1655 $tmp1654 = $tmp1653->methods[0];
panda$core$Bit $tmp1656 = $tmp1654(((panda$core$Equatable*) $tmp1649), ((panda$core$Equatable*) $tmp1652));
bool $tmp1657 = $tmp1656.value;
if ($tmp1657) goto block36; else goto block37;
block36:;
*(&local3) = $tmp1656;
goto block38;
block37:;
org$pandalanguage$pandac$Type$Kind* $tmp1658 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1659 = *$tmp1658;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1660;
$tmp1660 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1660->value = $tmp1659;
panda$core$Int64 $tmp1661 = (panda$core$Int64) {19};
org$pandalanguage$pandac$Type$Kind $tmp1662 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1661);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1663;
$tmp1663 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1663->value = $tmp1662;
ITable* $tmp1664 = ((panda$core$Equatable*) $tmp1660)->$class->itable;
while ($tmp1664->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1664 = $tmp1664->next;
}
$fn1666 $tmp1665 = $tmp1664->methods[0];
panda$core$Bit $tmp1667 = $tmp1665(((panda$core$Equatable*) $tmp1660), ((panda$core$Equatable*) $tmp1663));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1663)));
// unreffing REF($244:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1660)));
// unreffing REF($240:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local3) = $tmp1667;
goto block38;
block38:;
panda$core$Bit $tmp1668 = *(&local3);
bool $tmp1669 = $tmp1668.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1652)));
// unreffing REF($231:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1649)));
// unreffing REF($227:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1669) goto block34; else goto block35;
block34:;
// line 679
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block35:;
// line 681
panda$core$Bit $tmp1670 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param0);
bool $tmp1671 = $tmp1670.value;
if ($tmp1671) goto block39; else goto block40;
block39:;
// line 682
panda$core$String** $tmp1672 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1673 = *$tmp1672;
panda$core$Bit $tmp1674 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp1673, &$s1675);
bool $tmp1676 = $tmp1674.value;
if ($tmp1676) goto block41; else goto block42;
block41:;
// line 683
org$pandalanguage$pandac$Type* $tmp1677 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1677));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1677));
// unreffing REF($280:org.pandalanguage.pandac.Type)
return $tmp1677;
block42:;
// line 685
org$pandalanguage$pandac$Type* $tmp1678 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1678));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1678));
// unreffing REF($288:org.pandalanguage.pandac.Type)
return $tmp1678;
block40:;
goto block33;
block33:;
// line 688
org$pandalanguage$pandac$Type$Kind* $tmp1679 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1680 = *$tmp1679;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1681;
$tmp1681 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1681->value = $tmp1680;
panda$core$Int64 $tmp1682 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1683 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1682);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1684;
$tmp1684 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1684->value = $tmp1683;
ITable* $tmp1685 = ((panda$core$Equatable*) $tmp1681)->$class->itable;
while ($tmp1685->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1685 = $tmp1685->next;
}
$fn1687 $tmp1686 = $tmp1685->methods[0];
panda$core$Bit $tmp1688 = $tmp1686(((panda$core$Equatable*) $tmp1681), ((panda$core$Equatable*) $tmp1684));
bool $tmp1689 = $tmp1688.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1684)));
// unreffing REF($303:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1681)));
// unreffing REF($299:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1689) goto block43; else goto block44;
block43:;
// line 689
org$pandalanguage$pandac$FixedArray** $tmp1690 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1691 = *$tmp1690;
panda$core$Bit $tmp1692 = panda$core$Bit$init$builtin_bit($tmp1691 != NULL);
bool $tmp1693 = $tmp1692.value;
if ($tmp1693) goto block45; else goto block46;
block46:;
panda$core$Int64 $tmp1694 = (panda$core$Int64) {689};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1695, $tmp1694, &$s1696);
abort(); // unreachable
block45:;
panda$core$Int64 $tmp1697 = (panda$core$Int64) {0};
panda$core$Object* $tmp1698 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1691, $tmp1697);
org$pandalanguage$pandac$Type* $tmp1699 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1698), param1, param2);
org$pandalanguage$pandac$Type* $tmp1700 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1699);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1700));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1700));
// unreffing REF($330:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1699));
// unreffing REF($329:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1698);
// unreffing REF($327:org.pandalanguage.pandac.FixedArray.T)
return $tmp1700;
block44:;
// line 691
org$pandalanguage$pandac$Type$Kind* $tmp1701 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1702 = *$tmp1701;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1703;
$tmp1703 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1703->value = $tmp1702;
panda$core$Int64 $tmp1704 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1705 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1704);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1706;
$tmp1706 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1706->value = $tmp1705;
ITable* $tmp1707 = ((panda$core$Equatable*) $tmp1703)->$class->itable;
while ($tmp1707->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1707 = $tmp1707->next;
}
$fn1709 $tmp1708 = $tmp1707->methods[0];
panda$core$Bit $tmp1710 = $tmp1708(((panda$core$Equatable*) $tmp1703), ((panda$core$Equatable*) $tmp1706));
bool $tmp1711 = $tmp1710.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1706)));
// unreffing REF($350:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1703)));
// unreffing REF($346:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1711) goto block47; else goto block48;
block47:;
// line 692
org$pandalanguage$pandac$FixedArray** $tmp1712 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1713 = *$tmp1712;
panda$core$Bit $tmp1714 = panda$core$Bit$init$builtin_bit($tmp1713 != NULL);
bool $tmp1715 = $tmp1714.value;
if ($tmp1715) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp1716 = (panda$core$Int64) {692};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1717, $tmp1716, &$s1718);
abort(); // unreachable
block49:;
panda$core$Int64 $tmp1719 = (panda$core$Int64) {0};
panda$core$Object* $tmp1720 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1713, $tmp1719);
org$pandalanguage$pandac$Type* $tmp1721 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param0, param1, ((org$pandalanguage$pandac$Type*) $tmp1720));
org$pandalanguage$pandac$Type* $tmp1722 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1721);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1722));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1722));
// unreffing REF($377:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1721));
// unreffing REF($376:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1720);
// unreffing REF($374:org.pandalanguage.pandac.FixedArray.T)
return $tmp1722;
block48:;
// line 694
org$pandalanguage$pandac$Type* $tmp1723 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, param0);
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1723));
org$pandalanguage$pandac$Type* $tmp1724 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1724));
*(&local4) = $tmp1723;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1723));
// unreffing REF($391:org.pandalanguage.pandac.Type)
// line 695
org$pandalanguage$pandac$Type* $tmp1725 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, param2);
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1725));
org$pandalanguage$pandac$Type* $tmp1726 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1726));
*(&local5) = $tmp1725;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1725));
// unreffing REF($403:org.pandalanguage.pandac.Type)
// line 696
org$pandalanguage$pandac$Type* $tmp1727 = *(&local4);
panda$core$Bit $tmp1728 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp1727);
bool $tmp1729 = $tmp1728.value;
if ($tmp1729) goto block53; else goto block54;
block53:;
org$pandalanguage$pandac$Type* $tmp1730 = *(&local5);
panda$core$Bit $tmp1731 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp1730);
*(&local6) = $tmp1731;
goto block55;
block54:;
*(&local6) = $tmp1728;
goto block55;
block55:;
panda$core$Bit $tmp1732 = *(&local6);
bool $tmp1733 = $tmp1732.value;
if ($tmp1733) goto block51; else goto block52;
block51:;
// line 697
panda$collections$HashSet* $tmp1734 = (panda$collections$HashSet*) frostObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp1734);
*(&local7) = ((panda$collections$HashSet*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1734));
panda$collections$HashSet* $tmp1735 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1735));
*(&local7) = $tmp1734;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1734));
// unreffing REF($429:panda.collections.HashSet<org.pandalanguage.pandac.Type>)
// line 698
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
org$pandalanguage$pandac$Type* $tmp1736 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1736));
*(&local8) = param0;
// line 699
org$pandalanguage$pandac$Type* $tmp1737 = *(&local4);
org$pandalanguage$pandac$ClassDecl* $tmp1738 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1737);
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1738));
org$pandalanguage$pandac$ClassDecl* $tmp1739 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1739));
*(&local9) = $tmp1738;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1738));
// unreffing REF($452:org.pandalanguage.pandac.ClassDecl?)
// line 700
goto block56;
block56:;
org$pandalanguage$pandac$ClassDecl* $tmp1740 = *(&local9);
panda$core$Bit $tmp1741 = panda$core$Bit$init$builtin_bit($tmp1740 != NULL);
bool $tmp1742 = $tmp1741.value;
if ($tmp1742) goto block57; else goto block58;
block57:;
// line 701
panda$collections$HashSet* $tmp1743 = *(&local7);
org$pandalanguage$pandac$Type* $tmp1744 = *(&local8);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp1743, ((panda$collections$Key*) $tmp1744));
// line 702
org$pandalanguage$pandac$ClassDecl* $tmp1745 = *(&local9);
panda$core$Bit $tmp1746 = panda$core$Bit$init$builtin_bit($tmp1745 != NULL);
bool $tmp1747 = $tmp1746.value;
if ($tmp1747) goto block61; else goto block62;
block62:;
panda$core$Int64 $tmp1748 = (panda$core$Int64) {702};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1749, $tmp1748, &$s1750);
abort(); // unreachable
block61:;
org$pandalanguage$pandac$Type** $tmp1751 = &$tmp1745->rawSuper;
org$pandalanguage$pandac$Type* $tmp1752 = *$tmp1751;
panda$core$Bit $tmp1753 = panda$core$Bit$init$builtin_bit($tmp1752 != NULL);
bool $tmp1754 = $tmp1753.value;
if ($tmp1754) goto block59; else goto block63;
block59:;
// line 703
org$pandalanguage$pandac$Type* $tmp1755 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1756 = *(&local9);
panda$core$Bit $tmp1757 = panda$core$Bit$init$builtin_bit($tmp1756 != NULL);
bool $tmp1758 = $tmp1757.value;
if ($tmp1758) goto block64; else goto block65;
block65:;
panda$core$Int64 $tmp1759 = (panda$core$Int64) {703};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1760, $tmp1759, &$s1761);
abort(); // unreachable
block64:;
org$pandalanguage$pandac$Type** $tmp1762 = &$tmp1756->rawSuper;
org$pandalanguage$pandac$Type* $tmp1763 = *$tmp1762;
panda$core$Bit $tmp1764 = panda$core$Bit$init$builtin_bit($tmp1763 != NULL);
bool $tmp1765 = $tmp1764.value;
if ($tmp1765) goto block66; else goto block67;
block67:;
panda$core$Int64 $tmp1766 = (panda$core$Int64) {703};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1767, $tmp1766, &$s1768);
abort(); // unreachable
block66:;
org$pandalanguage$pandac$Type* $tmp1769 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp1755, $tmp1763);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1769));
org$pandalanguage$pandac$Type* $tmp1770 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1770));
*(&local8) = $tmp1769;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1769));
// unreffing REF($513:org.pandalanguage.pandac.Type)
// line 704
org$pandalanguage$pandac$Type* $tmp1771 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1772 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1771);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1772));
org$pandalanguage$pandac$ClassDecl* $tmp1773 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1773));
*(&local9) = $tmp1772;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1772));
// unreffing REF($525:org.pandalanguage.pandac.ClassDecl?)
goto block60;
block63:;
// line 1
// line 707
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp1774 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1774));
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block60;
block60:;
goto block56;
block58:;
// line 710
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Type* $tmp1775 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1775));
*(&local8) = param2;
// line 711
org$pandalanguage$pandac$Type* $tmp1776 = *(&local5);
org$pandalanguage$pandac$ClassDecl* $tmp1777 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1776);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1777));
org$pandalanguage$pandac$ClassDecl* $tmp1778 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1778));
*(&local9) = $tmp1777;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1777));
// unreffing REF($555:org.pandalanguage.pandac.ClassDecl?)
// line 712
goto block68;
block68:;
org$pandalanguage$pandac$ClassDecl* $tmp1779 = *(&local9);
panda$core$Bit $tmp1780 = panda$core$Bit$init$builtin_bit($tmp1779 != NULL);
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block69; else goto block70;
block69:;
// line 713
panda$collections$HashSet* $tmp1782 = *(&local7);
org$pandalanguage$pandac$Type* $tmp1783 = *(&local8);
panda$core$Bit $tmp1784 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp1782, ((panda$collections$Key*) $tmp1783));
bool $tmp1785 = $tmp1784.value;
if ($tmp1785) goto block71; else goto block72;
block71:;
// line 714
org$pandalanguage$pandac$Type* $tmp1786 = *(&local8);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1786));
org$pandalanguage$pandac$ClassDecl* $tmp1787 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1787));
// unreffing cl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp1788 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1788));
// unreffing t
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$HashSet* $tmp1789 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1789));
// unreffing ancestors
*(&local7) = ((panda$collections$HashSet*) NULL);
org$pandalanguage$pandac$Type* $tmp1790 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1790));
// unreffing t2
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1791 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1791));
// unreffing t1
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1786;
block72:;
// line 716
org$pandalanguage$pandac$ClassDecl* $tmp1792 = *(&local9);
panda$core$Bit $tmp1793 = panda$core$Bit$init$builtin_bit($tmp1792 != NULL);
bool $tmp1794 = $tmp1793.value;
if ($tmp1794) goto block75; else goto block76;
block76:;
panda$core$Int64 $tmp1795 = (panda$core$Int64) {716};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1796, $tmp1795, &$s1797);
abort(); // unreachable
block75:;
org$pandalanguage$pandac$Type** $tmp1798 = &$tmp1792->rawSuper;
org$pandalanguage$pandac$Type* $tmp1799 = *$tmp1798;
panda$core$Bit $tmp1800 = panda$core$Bit$init$builtin_bit($tmp1799 != NULL);
bool $tmp1801 = $tmp1800.value;
if ($tmp1801) goto block73; else goto block77;
block73:;
// line 717
org$pandalanguage$pandac$Type* $tmp1802 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1803 = *(&local9);
panda$core$Bit $tmp1804 = panda$core$Bit$init$builtin_bit($tmp1803 != NULL);
bool $tmp1805 = $tmp1804.value;
if ($tmp1805) goto block78; else goto block79;
block79:;
panda$core$Int64 $tmp1806 = (panda$core$Int64) {717};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1807, $tmp1806, &$s1808);
abort(); // unreachable
block78:;
org$pandalanguage$pandac$Type** $tmp1809 = &$tmp1803->rawSuper;
org$pandalanguage$pandac$Type* $tmp1810 = *$tmp1809;
panda$core$Bit $tmp1811 = panda$core$Bit$init$builtin_bit($tmp1810 != NULL);
bool $tmp1812 = $tmp1811.value;
if ($tmp1812) goto block80; else goto block81;
block81:;
panda$core$Int64 $tmp1813 = (panda$core$Int64) {717};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1814, $tmp1813, &$s1815);
abort(); // unreachable
block80:;
org$pandalanguage$pandac$Type* $tmp1816 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp1802, $tmp1810);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1816));
org$pandalanguage$pandac$Type* $tmp1817 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1817));
*(&local8) = $tmp1816;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1816));
// unreffing REF($647:org.pandalanguage.pandac.Type)
// line 718
org$pandalanguage$pandac$Type* $tmp1818 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1819 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1818);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1819));
org$pandalanguage$pandac$ClassDecl* $tmp1820 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1820));
*(&local9) = $tmp1819;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1819));
// unreffing REF($659:org.pandalanguage.pandac.ClassDecl?)
goto block74;
block77:;
// line 1
// line 721
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp1821 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1821));
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block74;
block74:;
goto block68;
block70:;
org$pandalanguage$pandac$ClassDecl* $tmp1822 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1822));
// unreffing cl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp1823 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1823));
// unreffing t
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$HashSet* $tmp1824 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1824));
// unreffing ancestors
*(&local7) = ((panda$collections$HashSet*) NULL);
goto block52;
block52:;
// line 725
org$pandalanguage$pandac$Type* $tmp1825 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1825));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1825));
// unreffing REF($697:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$Type* $tmp1826 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1826));
// unreffing t2
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1827 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1827));
// unreffing t1
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1825;

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
org$pandalanguage$pandac$Type$Kind* $tmp1828 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1829 = *$tmp1828;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1830;
$tmp1830 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1830->value = $tmp1829;
panda$core$Int64 $tmp1831 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Type$Kind $tmp1832 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1831);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1833;
$tmp1833 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1833->value = $tmp1832;
ITable* $tmp1834 = ((panda$core$Equatable*) $tmp1830)->$class->itable;
while ($tmp1834->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1834 = $tmp1834->next;
}
$fn1836 $tmp1835 = $tmp1834->methods[1];
panda$core$Bit $tmp1837 = $tmp1835(((panda$core$Equatable*) $tmp1830), ((panda$core$Equatable*) $tmp1833));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1833)));
// unreffing REF($6:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1830)));
// unreffing REF($2:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp1838 = $tmp1837.value;
if ($tmp1838) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp1839 = (panda$core$Int64) {738};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1840, $tmp1839, &$s1841);
abort(); // unreachable
block1:;
// line 739
ITable* $tmp1842 = ((panda$collections$MapView*) param1)->$class->itable;
while ($tmp1842->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp1842 = $tmp1842->next;
}
$fn1844 $tmp1843 = $tmp1842->methods[0];
panda$core$Int64 $tmp1845 = $tmp1843(((panda$collections$MapView*) param1));
panda$core$Int64 $tmp1846 = (panda$core$Int64) {0};
panda$core$Bit $tmp1847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1845, $tmp1846);
bool $tmp1848 = $tmp1847.value;
if ($tmp1848) goto block3; else goto block4;
block3:;
// line 740
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block4:;
// line 742
org$pandalanguage$pandac$Type$Kind* $tmp1849 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1850 = *$tmp1849;
panda$core$Int64 $tmp1851 = $tmp1850.$rawValue;
panda$core$Int64 $tmp1852 = (panda$core$Int64) {12};
panda$core$Bit $tmp1853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1851, $tmp1852);
bool $tmp1854 = $tmp1853.value;
if ($tmp1854) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp1855 = (panda$core$Int64) {13};
panda$core$Bit $tmp1856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1851, $tmp1855);
bool $tmp1857 = $tmp1856.value;
if ($tmp1857) goto block6; else goto block8;
block6:;
// line 744
panda$core$String** $tmp1858 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1859 = *$tmp1858;
panda$core$Object* $tmp1860 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(param1, ((panda$collections$Key*) $tmp1859));
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1860)));
org$pandalanguage$pandac$Type* $tmp1861 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1861));
*(&local0) = ((org$pandalanguage$pandac$Type*) $tmp1860);
panda$core$Panda$unref$panda$core$Object$Q($tmp1860);
// unreffing REF($50:panda.collections.HashMap.V?)
// line 745
org$pandalanguage$pandac$Type* $tmp1862 = *(&local0);
panda$core$Bit $tmp1863 = panda$core$Bit$init$builtin_bit($tmp1862 != NULL);
bool $tmp1864 = $tmp1863.value;
if ($tmp1864) goto block9; else goto block10;
block9:;
// line 746
org$pandalanguage$pandac$Type* $tmp1865 = *(&local0);
panda$core$Bit $tmp1866 = panda$core$Bit$init$builtin_bit($tmp1865 != NULL);
bool $tmp1867 = $tmp1866.value;
if ($tmp1867) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp1868 = (panda$core$Int64) {746};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1869, $tmp1868, &$s1870);
abort(); // unreachable
block11:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1865));
org$pandalanguage$pandac$Type* $tmp1871 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1871));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1865;
block10:;
// line 748
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
org$pandalanguage$pandac$Type* $tmp1872 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1872));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return param0;
block8:;
panda$core$Int64 $tmp1873 = (panda$core$Int64) {11};
panda$core$Bit $tmp1874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1851, $tmp1873);
bool $tmp1875 = $tmp1874.value;
if ($tmp1875) goto block13; else goto block14;
block13:;
// line 751
org$pandalanguage$pandac$FixedArray** $tmp1876 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1877 = *$tmp1876;
panda$core$Bit $tmp1878 = panda$core$Bit$init$builtin_bit($tmp1877 != NULL);
bool $tmp1879 = $tmp1878.value;
if ($tmp1879) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp1880 = (panda$core$Int64) {751};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1881, $tmp1880, &$s1882);
abort(); // unreachable
block15:;
panda$core$Int64 $tmp1883 = (panda$core$Int64) {0};
panda$core$Object* $tmp1884 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1877, $tmp1883);
org$pandalanguage$pandac$Type* $tmp1885 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1884), param1);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1885));
org$pandalanguage$pandac$Type* $tmp1886 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1886));
*(&local1) = $tmp1885;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1885));
// unreffing REF($114:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1884);
// unreffing REF($112:org.pandalanguage.pandac.FixedArray.T)
// line 752
panda$collections$Array* $tmp1887 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1887);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1887));
panda$collections$Array* $tmp1888 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1888));
*(&local2) = $tmp1887;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1887));
// unreffing REF($129:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 753
panda$core$Int64 $tmp1889 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FixedArray** $tmp1890 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1891 = *$tmp1890;
panda$core$Bit $tmp1892 = panda$core$Bit$init$builtin_bit($tmp1891 != NULL);
bool $tmp1893 = $tmp1892.value;
if ($tmp1893) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp1894 = (panda$core$Int64) {753};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1895, $tmp1894, &$s1896);
abort(); // unreachable
block17:;
ITable* $tmp1897 = ((panda$collections$CollectionView*) $tmp1891)->$class->itable;
while ($tmp1897->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1897 = $tmp1897->next;
}
$fn1899 $tmp1898 = $tmp1897->methods[0];
panda$core$Int64 $tmp1900 = $tmp1898(((panda$collections$CollectionView*) $tmp1891));
panda$core$Bit $tmp1901 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1902 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1889, $tmp1900, $tmp1901);
panda$core$Int64 $tmp1903 = $tmp1902.min;
*(&local3) = $tmp1903;
panda$core$Int64 $tmp1904 = $tmp1902.max;
panda$core$Bit $tmp1905 = $tmp1902.inclusive;
bool $tmp1906 = $tmp1905.value;
panda$core$Int64 $tmp1907 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1908 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1907);
if ($tmp1906) goto block22; else goto block23;
block22:;
int64_t $tmp1909 = $tmp1903.value;
int64_t $tmp1910 = $tmp1904.value;
bool $tmp1911 = $tmp1909 <= $tmp1910;
panda$core$Bit $tmp1912 = (panda$core$Bit) {$tmp1911};
bool $tmp1913 = $tmp1912.value;
if ($tmp1913) goto block19; else goto block20;
block23:;
int64_t $tmp1914 = $tmp1903.value;
int64_t $tmp1915 = $tmp1904.value;
bool $tmp1916 = $tmp1914 < $tmp1915;
panda$core$Bit $tmp1917 = (panda$core$Bit) {$tmp1916};
bool $tmp1918 = $tmp1917.value;
if ($tmp1918) goto block19; else goto block20;
block19:;
// line 754
panda$collections$Array* $tmp1919 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp1920 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1921 = *$tmp1920;
panda$core$Bit $tmp1922 = panda$core$Bit$init$builtin_bit($tmp1921 != NULL);
bool $tmp1923 = $tmp1922.value;
if ($tmp1923) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp1924 = (panda$core$Int64) {754};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1925, $tmp1924, &$s1926);
abort(); // unreachable
block24:;
panda$core$Int64 $tmp1927 = *(&local3);
panda$core$Object* $tmp1928 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1921, $tmp1927);
org$pandalanguage$pandac$Type* $tmp1929 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1928), param1);
panda$collections$Array$add$panda$collections$Array$T($tmp1919, ((panda$core$Object*) $tmp1929));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1929));
// unreffing REF($195:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1928);
// unreffing REF($193:org.pandalanguage.pandac.FixedArray.T)
goto block21;
block21:;
panda$core$Int64 $tmp1930 = *(&local3);
int64_t $tmp1931 = $tmp1904.value;
int64_t $tmp1932 = $tmp1930.value;
int64_t $tmp1933 = $tmp1931 - $tmp1932;
panda$core$Int64 $tmp1934 = (panda$core$Int64) {$tmp1933};
panda$core$UInt64 $tmp1935 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1934);
if ($tmp1906) goto block27; else goto block28;
block27:;
uint64_t $tmp1936 = $tmp1935.value;
uint64_t $tmp1937 = $tmp1908.value;
bool $tmp1938 = $tmp1936 >= $tmp1937;
panda$core$Bit $tmp1939 = (panda$core$Bit) {$tmp1938};
bool $tmp1940 = $tmp1939.value;
if ($tmp1940) goto block26; else goto block20;
block28:;
uint64_t $tmp1941 = $tmp1935.value;
uint64_t $tmp1942 = $tmp1908.value;
bool $tmp1943 = $tmp1941 > $tmp1942;
panda$core$Bit $tmp1944 = (panda$core$Bit) {$tmp1943};
bool $tmp1945 = $tmp1944.value;
if ($tmp1945) goto block26; else goto block20;
block26:;
int64_t $tmp1946 = $tmp1930.value;
int64_t $tmp1947 = $tmp1907.value;
int64_t $tmp1948 = $tmp1946 + $tmp1947;
panda$core$Int64 $tmp1949 = (panda$core$Int64) {$tmp1948};
*(&local3) = $tmp1949;
goto block19;
block20:;
// line 756
org$pandalanguage$pandac$Type* $tmp1950 = *(&local1);
panda$collections$Array* $tmp1951 = *(&local2);
org$pandalanguage$pandac$Type* $tmp1952 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp1950, ((panda$collections$ListView*) $tmp1951));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1952));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1952));
// unreffing REF($234:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp1953 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1953));
// unreffing remappedArgs
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp1954 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1954));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1952;
block14:;
panda$core$Int64 $tmp1955 = (panda$core$Int64) {1};
panda$core$Bit $tmp1956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1851, $tmp1955);
bool $tmp1957 = $tmp1956.value;
if ($tmp1957) goto block29; else goto block30;
block29:;
// line 759
org$pandalanguage$pandac$FixedArray** $tmp1958 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1959 = *$tmp1958;
panda$core$Bit $tmp1960 = panda$core$Bit$init$builtin_bit($tmp1959 != NULL);
bool $tmp1961 = $tmp1960.value;
if ($tmp1961) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp1962 = (panda$core$Int64) {759};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1963, $tmp1962, &$s1964);
abort(); // unreachable
block31:;
panda$core$Int64 $tmp1965 = (panda$core$Int64) {0};
panda$core$Object* $tmp1966 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1959, $tmp1965);
org$pandalanguage$pandac$Type* $tmp1967 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1966), param1);
org$pandalanguage$pandac$Type* $tmp1968 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1967);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
// unreffing REF($271:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1967));
// unreffing REF($270:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1966);
// unreffing REF($268:org.pandalanguage.pandac.FixedArray.T)
return $tmp1968;
block30:;
panda$core$Int64 $tmp1969 = (panda$core$Int64) {16};
panda$core$Bit $tmp1970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1851, $tmp1969);
bool $tmp1971 = $tmp1970.value;
if ($tmp1971) goto block33; else goto block34;
block34:;
panda$core$Int64 $tmp1972 = (panda$core$Int64) {15};
panda$core$Bit $tmp1973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1851, $tmp1972);
bool $tmp1974 = $tmp1973.value;
if ($tmp1974) goto block33; else goto block35;
block35:;
panda$core$Int64 $tmp1975 = (panda$core$Int64) {18};
panda$core$Bit $tmp1976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1851, $tmp1975);
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block33; else goto block36;
block36:;
panda$core$Int64 $tmp1978 = (panda$core$Int64) {17};
panda$core$Bit $tmp1979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1851, $tmp1978);
bool $tmp1980 = $tmp1979.value;
if ($tmp1980) goto block33; else goto block37;
block33:;
// line 762
panda$collections$Array* $tmp1981 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1981);
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1981));
panda$collections$Array* $tmp1982 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1982));
*(&local4) = $tmp1981;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1981));
// unreffing REF($301:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 763
org$pandalanguage$pandac$FixedArray** $tmp1983 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1984 = *$tmp1983;
panda$core$Bit $tmp1985 = panda$core$Bit$init$builtin_bit($tmp1984 != NULL);
bool $tmp1986 = $tmp1985.value;
if ($tmp1986) goto block38; else goto block39;
block39:;
panda$core$Int64 $tmp1987 = (panda$core$Int64) {763};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1988, $tmp1987, &$s1989);
abort(); // unreachable
block38:;
ITable* $tmp1990 = ((panda$collections$CollectionView*) $tmp1984)->$class->itable;
while ($tmp1990->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1990 = $tmp1990->next;
}
$fn1992 $tmp1991 = $tmp1990->methods[0];
panda$core$Int64 $tmp1993 = $tmp1991(((panda$collections$CollectionView*) $tmp1984));
panda$core$Int64 $tmp1994 = (panda$core$Int64) {1};
int64_t $tmp1995 = $tmp1993.value;
int64_t $tmp1996 = $tmp1994.value;
bool $tmp1997 = $tmp1995 >= $tmp1996;
panda$core$Bit $tmp1998 = (panda$core$Bit) {$tmp1997};
bool $tmp1999 = $tmp1998.value;
if ($tmp1999) goto block40; else goto block41;
block41:;
panda$core$Int64 $tmp2000 = (panda$core$Int64) {763};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2001, $tmp2000);
abort(); // unreachable
block40:;
// line 764
panda$core$Int64 $tmp2002 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FixedArray** $tmp2003 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp2004 = *$tmp2003;
panda$core$Bit $tmp2005 = panda$core$Bit$init$builtin_bit($tmp2004 != NULL);
bool $tmp2006 = $tmp2005.value;
if ($tmp2006) goto block42; else goto block43;
block43:;
panda$core$Int64 $tmp2007 = (panda$core$Int64) {764};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2008, $tmp2007, &$s2009);
abort(); // unreachable
block42:;
ITable* $tmp2010 = ((panda$collections$CollectionView*) $tmp2004)->$class->itable;
while ($tmp2010->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2010 = $tmp2010->next;
}
$fn2012 $tmp2011 = $tmp2010->methods[0];
panda$core$Int64 $tmp2013 = $tmp2011(((panda$collections$CollectionView*) $tmp2004));
panda$core$Int64 $tmp2014 = (panda$core$Int64) {1};
int64_t $tmp2015 = $tmp2013.value;
int64_t $tmp2016 = $tmp2014.value;
int64_t $tmp2017 = $tmp2015 - $tmp2016;
panda$core$Int64 $tmp2018 = (panda$core$Int64) {$tmp2017};
panda$core$Bit $tmp2019 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2020 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2002, $tmp2018, $tmp2019);
panda$core$Int64 $tmp2021 = $tmp2020.min;
*(&local5) = $tmp2021;
panda$core$Int64 $tmp2022 = $tmp2020.max;
panda$core$Bit $tmp2023 = $tmp2020.inclusive;
bool $tmp2024 = $tmp2023.value;
panda$core$Int64 $tmp2025 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2026 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2025);
if ($tmp2024) goto block47; else goto block48;
block47:;
int64_t $tmp2027 = $tmp2021.value;
int64_t $tmp2028 = $tmp2022.value;
bool $tmp2029 = $tmp2027 <= $tmp2028;
panda$core$Bit $tmp2030 = (panda$core$Bit) {$tmp2029};
bool $tmp2031 = $tmp2030.value;
if ($tmp2031) goto block44; else goto block45;
block48:;
int64_t $tmp2032 = $tmp2021.value;
int64_t $tmp2033 = $tmp2022.value;
bool $tmp2034 = $tmp2032 < $tmp2033;
panda$core$Bit $tmp2035 = (panda$core$Bit) {$tmp2034};
bool $tmp2036 = $tmp2035.value;
if ($tmp2036) goto block44; else goto block45;
block44:;
// line 765
panda$collections$Array* $tmp2037 = *(&local4);
org$pandalanguage$pandac$FixedArray** $tmp2038 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp2039 = *$tmp2038;
panda$core$Bit $tmp2040 = panda$core$Bit$init$builtin_bit($tmp2039 != NULL);
bool $tmp2041 = $tmp2040.value;
if ($tmp2041) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp2042 = (panda$core$Int64) {765};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2043, $tmp2042, &$s2044);
abort(); // unreachable
block49:;
panda$core$Int64 $tmp2045 = *(&local5);
panda$core$Object* $tmp2046 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2039, $tmp2045);
org$pandalanguage$pandac$Type* $tmp2047 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp2046), param1);
panda$collections$Array$add$panda$collections$Array$T($tmp2037, ((panda$core$Object*) $tmp2047));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2047));
// unreffing REF($395:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp2046);
// unreffing REF($393:org.pandalanguage.pandac.FixedArray.T)
goto block46;
block46:;
panda$core$Int64 $tmp2048 = *(&local5);
int64_t $tmp2049 = $tmp2022.value;
int64_t $tmp2050 = $tmp2048.value;
int64_t $tmp2051 = $tmp2049 - $tmp2050;
panda$core$Int64 $tmp2052 = (panda$core$Int64) {$tmp2051};
panda$core$UInt64 $tmp2053 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2052);
if ($tmp2024) goto block52; else goto block53;
block52:;
uint64_t $tmp2054 = $tmp2053.value;
uint64_t $tmp2055 = $tmp2026.value;
bool $tmp2056 = $tmp2054 >= $tmp2055;
panda$core$Bit $tmp2057 = (panda$core$Bit) {$tmp2056};
bool $tmp2058 = $tmp2057.value;
if ($tmp2058) goto block51; else goto block45;
block53:;
uint64_t $tmp2059 = $tmp2053.value;
uint64_t $tmp2060 = $tmp2026.value;
bool $tmp2061 = $tmp2059 > $tmp2060;
panda$core$Bit $tmp2062 = (panda$core$Bit) {$tmp2061};
bool $tmp2063 = $tmp2062.value;
if ($tmp2063) goto block51; else goto block45;
block51:;
int64_t $tmp2064 = $tmp2048.value;
int64_t $tmp2065 = $tmp2025.value;
int64_t $tmp2066 = $tmp2064 + $tmp2065;
panda$core$Int64 $tmp2067 = (panda$core$Int64) {$tmp2066};
*(&local5) = $tmp2067;
goto block44;
block45:;
// line 767
org$pandalanguage$pandac$Position* $tmp2068 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp2069 = *$tmp2068;
org$pandalanguage$pandac$Type$Kind* $tmp2070 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2071 = *$tmp2070;
panda$collections$Array* $tmp2072 = *(&local4);
org$pandalanguage$pandac$FixedArray** $tmp2073 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp2074 = *$tmp2073;
panda$core$Bit $tmp2075 = panda$core$Bit$init$builtin_bit($tmp2074 != NULL);
bool $tmp2076 = $tmp2075.value;
if ($tmp2076) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp2077 = (panda$core$Int64) {768};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2078, $tmp2077, &$s2079);
abort(); // unreachable
block54:;
org$pandalanguage$pandac$FixedArray** $tmp2080 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp2081 = *$tmp2080;
panda$core$Bit $tmp2082 = panda$core$Bit$init$builtin_bit($tmp2081 != NULL);
bool $tmp2083 = $tmp2082.value;
if ($tmp2083) goto block56; else goto block57;
block57:;
panda$core$Int64 $tmp2084 = (panda$core$Int64) {768};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2085, $tmp2084, &$s2086);
abort(); // unreachable
block56:;
ITable* $tmp2087 = ((panda$collections$CollectionView*) $tmp2081)->$class->itable;
while ($tmp2087->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2087 = $tmp2087->next;
}
$fn2089 $tmp2088 = $tmp2087->methods[0];
panda$core$Int64 $tmp2090 = $tmp2088(((panda$collections$CollectionView*) $tmp2081));
panda$core$Int64 $tmp2091 = (panda$core$Int64) {1};
int64_t $tmp2092 = $tmp2090.value;
int64_t $tmp2093 = $tmp2091.value;
int64_t $tmp2094 = $tmp2092 - $tmp2093;
panda$core$Int64 $tmp2095 = (panda$core$Int64) {$tmp2094};
panda$core$Object* $tmp2096 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2074, $tmp2095);
org$pandalanguage$pandac$Type* $tmp2097 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp2096), param1);
panda$core$Int64* $tmp2098 = &param0->priority;
panda$core$Int64 $tmp2099 = *$tmp2098;
org$pandalanguage$pandac$Type* $tmp2100 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp2069, $tmp2071, ((panda$collections$ListView*) $tmp2072), $tmp2097, $tmp2099);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
// unreffing REF($471:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
// unreffing REF($468:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp2096);
// unreffing REF($466:org.pandalanguage.pandac.FixedArray.T)
panda$collections$Array* $tmp2101 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2101));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
return $tmp2100;
block37:;
// line 771
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block5:;
panda$core$Bit $tmp2102 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2103 = $tmp2102.value;
if ($tmp2103) goto block58; else goto block59;
block59:;
panda$core$Int64 $tmp2104 = (panda$core$Int64) {738};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2105, $tmp2104, &$s2106);
abort(); // unreachable
block58:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$pandac$Type$get_hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* param0) {

// line 778
panda$core$String** $tmp2107 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp2108 = *$tmp2107;
ITable* $tmp2109 = ((panda$collections$Key*) $tmp2108)->$class->itable;
while ($tmp2109->$class != (panda$core$Class*) &panda$collections$Key$class) {
    $tmp2109 = $tmp2109->next;
}
$fn2111 $tmp2110 = $tmp2109->methods[0];
panda$core$Int64 $tmp2112 = $tmp2110(((panda$collections$Key*) $tmp2108));
return $tmp2112;

}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* param0) {

// line 783
panda$core$String** $tmp2113 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp2114 = *$tmp2113;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2114));
return $tmp2114;

}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* param0) {

// line 4
org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) param0));
org$pandalanguage$pandac$FixedArray** $tmp2115 = &param0->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp2116 = *$tmp2115;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2116));
panda$core$Weak** $tmp2117 = &param0->genericClassParameter;
panda$core$Weak* $tmp2118 = *$tmp2117;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2118));
panda$core$Weak** $tmp2119 = &param0->genericMethodParameter;
panda$core$Weak* $tmp2120 = *$tmp2119;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2120));
org$pandalanguage$pandac$MethodRef** $tmp2121 = &param0->methodRef;
org$pandalanguage$pandac$MethodRef* $tmp2122 = *$tmp2121;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2122));
return;

}

