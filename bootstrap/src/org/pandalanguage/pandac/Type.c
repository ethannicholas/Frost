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
#include "panda/core/Int64.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
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
org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, org$pandalanguage$pandac$Type$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isSigned$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isChar$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isNumeric$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isSteppedRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$get_isNullable$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$get_hash$R$panda$core$Int64} };

typedef panda$core$Bit (*$fn13)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn22)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn32)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn42)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn52)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn77)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn86)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn96)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn106)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn116)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn152)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn164)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn181)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn194)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn211)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn224)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn260)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn264)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn269)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn342)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn346)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn351)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn400)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn404)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn409)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn459)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn484)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn495)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn507)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn534)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn966)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn978)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn989)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1000)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1012)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1024)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1039)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1097)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1149)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1159)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1185)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1200)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1211)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1223)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1235)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1246)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1261)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1272)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1284)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1296)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1311)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1338)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1349)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1361)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1373)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1386)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1407)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1422)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1434)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1450)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1464)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1475)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1498)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1509)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1530)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1547)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1639)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1647)(panda$collections$MapView*);
typedef panda$core$Int64 (*$fn1684)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1762)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1777)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1839)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1861)(panda$collections$Key*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 29, -3248623696866231612, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 197, -4766644293884402549, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x73\x69\x7a\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 151, 3475860875978515115, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x73\x75\x62\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x70\x72\x69\x6f\x72\x69\x74\x79\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 292, -4835118214484693251, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3d", 11, 4555205210328637565, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x3d", 10, -7078666603951044273, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5895082338763246016, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -1180377256514028899, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x69\x73\x43\x6c\x61\x73\x73\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 92, -6465324935451040327, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x69\x73\x4d\x65\x74\x68\x6f\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 93, 7566891704899688644, NULL };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -1766462943154097753, NULL };
static panda$core$String $s1140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, 916331035999347368, NULL };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 101, 8536794682809672847, NULL };
static panda$core$String $s1325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 127, -3361594779411923433, NULL };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 110, -5923730647398865852, NULL };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 180, -8366325379630919520, NULL };
static panda$core$String $s1771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 180, -2602239416666791808, NULL };

void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Type* param0, panda$core$String* param1, org$pandalanguage$pandac$Type$Kind param2, org$pandalanguage$pandac$Position param3) {

// line 72
panda$core$Bit $tmp2 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit(param0, param1, param2, param3, $tmp2);
return;

}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$Type* param0, panda$core$String* param1, org$pandalanguage$pandac$Type$Kind param2, org$pandalanguage$pandac$Position param3, panda$core$Bit param4) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
// line 37
panda$core$Weak* $tmp3 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp3, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Weak** $tmp4 = &param0->genericParameter;
panda$core$Weak* $tmp5 = *$tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$core$Weak** $tmp6 = &param0->genericParameter;
*$tmp6 = $tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.ClassDecl.GenericParameter?>)
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp7;
$tmp7 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp7->value = param2;
panda$core$Int64 $tmp8 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp9 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp8);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp10;
$tmp10 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp10->value = $tmp9;
ITable* $tmp11 = ((panda$core$Equatable*) $tmp7)->$class->itable;
while ($tmp11->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[1];
panda$core$Bit $tmp14 = $tmp12(((panda$core$Equatable*) $tmp7), ((panda$core$Equatable*) $tmp10));
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp16;
$tmp16 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp16->value = param2;
panda$core$Int64 $tmp17 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp18 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp17);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp19;
$tmp19 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp19->value = $tmp18;
ITable* $tmp20 = ((panda$core$Equatable*) $tmp16)->$class->itable;
while ($tmp20->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[1];
panda$core$Bit $tmp23 = $tmp21(((panda$core$Equatable*) $tmp16), ((panda$core$Equatable*) $tmp19));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp19)));
// unreffing REF($29:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp16)));
// unreffing REF($25:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local3) = $tmp23;
goto block3;
block2:;
*(&local3) = $tmp14;
goto block3;
block3:;
panda$core$Bit $tmp24 = *(&local3);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp26;
$tmp26 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp26->value = param2;
panda$core$Int64 $tmp27 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp28 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp27);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp29;
$tmp29 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp29->value = $tmp28;
ITable* $tmp30 = ((panda$core$Equatable*) $tmp26)->$class->itable;
while ($tmp30->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp30 = $tmp30->next;
}
$fn32 $tmp31 = $tmp30->methods[1];
panda$core$Bit $tmp33 = $tmp31(((panda$core$Equatable*) $tmp26), ((panda$core$Equatable*) $tmp29));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp29)));
// unreffing REF($49:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp26)));
// unreffing REF($45:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp33;
goto block6;
block5:;
*(&local2) = $tmp24;
goto block6;
block6:;
panda$core$Bit $tmp34 = *(&local2);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block7; else goto block8;
block7:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp36;
$tmp36 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp36->value = param2;
panda$core$Int64 $tmp37 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp38 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp37);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp39;
$tmp39 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp39->value = $tmp38;
ITable* $tmp40 = ((panda$core$Equatable*) $tmp36)->$class->itable;
while ($tmp40->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp40 = $tmp40->next;
}
$fn42 $tmp41 = $tmp40->methods[1];
panda$core$Bit $tmp43 = $tmp41(((panda$core$Equatable*) $tmp36), ((panda$core$Equatable*) $tmp39));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp39)));
// unreffing REF($69:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp36)));
// unreffing REF($65:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp43;
goto block9;
block8:;
*(&local1) = $tmp34;
goto block9;
block9:;
panda$core$Bit $tmp44 = *(&local1);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp46;
$tmp46 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp46->value = param2;
panda$core$Int64 $tmp47 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp48 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp47);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp49;
$tmp49 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp49->value = $tmp48;
ITable* $tmp50 = ((panda$core$Equatable*) $tmp46)->$class->itable;
while ($tmp50->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp50 = $tmp50->next;
}
$fn52 $tmp51 = $tmp50->methods[1];
panda$core$Bit $tmp53 = $tmp51(((panda$core$Equatable*) $tmp46), ((panda$core$Equatable*) $tmp49));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp49)));
// unreffing REF($89:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp46)));
// unreffing REF($85:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp53;
goto block12;
block11:;
*(&local0) = $tmp44;
goto block12;
block12:;
panda$core$Bit $tmp54 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp10)));
// unreffing REF($20:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp7)));
// unreffing REF($16:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp56 = (panda$core$Int64) {77};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s57, $tmp56, &$s58);
abort(); // unreachable
block13:;
// line 78
org$pandalanguage$pandac$Type$Kind* $tmp59 = &param0->typeKind;
*$tmp59 = param2;
// line 79
org$pandalanguage$pandac$Position* $tmp60 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
*$tmp60 = param3;
// line 80
panda$core$Bit* $tmp61 = &param0->resolved;
*$tmp61 = param4;
// line 81
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
panda$collections$ImmutableArray** $tmp62 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp63 = *$tmp62;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
panda$collections$ImmutableArray** $tmp64 = &param0->subtypes;
*$tmp64 = ((panda$collections$ImmutableArray*) NULL);
// line 82
panda$core$Int64 $tmp65 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Symbol$Kind $tmp66 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp65);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp66, param3, param1);
return;

}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64(org$pandalanguage$pandac$Type* param0, panda$core$String* param1, org$pandalanguage$pandac$Type$Kind param2, panda$core$Int64 param3) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
// line 37
panda$core$Weak* $tmp67 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp67, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$core$Weak** $tmp68 = &param0->genericParameter;
panda$core$Weak* $tmp69 = *$tmp68;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$core$Weak** $tmp70 = &param0->genericParameter;
*$tmp70 = $tmp67;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.ClassDecl.GenericParameter?>)
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp71;
$tmp71 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp71->value = param2;
panda$core$Int64 $tmp72 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp73 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp72);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp74;
$tmp74 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp74->value = $tmp73;
ITable* $tmp75 = ((panda$core$Equatable*) $tmp71)->$class->itable;
while ($tmp75->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[1];
panda$core$Bit $tmp78 = $tmp76(((panda$core$Equatable*) $tmp71), ((panda$core$Equatable*) $tmp74));
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp80;
$tmp80 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp80->value = param2;
panda$core$Int64 $tmp81 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp82 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp81);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp83;
$tmp83 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp83->value = $tmp82;
ITable* $tmp84 = ((panda$core$Equatable*) $tmp80)->$class->itable;
while ($tmp84->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp84 = $tmp84->next;
}
$fn86 $tmp85 = $tmp84->methods[1];
panda$core$Bit $tmp87 = $tmp85(((panda$core$Equatable*) $tmp80), ((panda$core$Equatable*) $tmp83));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp83)));
// unreffing REF($29:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp80)));
// unreffing REF($25:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local3) = $tmp87;
goto block3;
block2:;
*(&local3) = $tmp78;
goto block3;
block3:;
panda$core$Bit $tmp88 = *(&local3);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp90;
$tmp90 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp90->value = param2;
panda$core$Int64 $tmp91 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp92 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp91);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp93;
$tmp93 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp93->value = $tmp92;
ITable* $tmp94 = ((panda$core$Equatable*) $tmp90)->$class->itable;
while ($tmp94->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[1];
panda$core$Bit $tmp97 = $tmp95(((panda$core$Equatable*) $tmp90), ((panda$core$Equatable*) $tmp93));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp93)));
// unreffing REF($49:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp90)));
// unreffing REF($45:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp97;
goto block6;
block5:;
*(&local2) = $tmp88;
goto block6;
block6:;
panda$core$Bit $tmp98 = *(&local2);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block7; else goto block8;
block7:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp100;
$tmp100 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp100->value = param2;
panda$core$Int64 $tmp101 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp102 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp101);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp103;
$tmp103 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp103->value = $tmp102;
ITable* $tmp104 = ((panda$core$Equatable*) $tmp100)->$class->itable;
while ($tmp104->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp104 = $tmp104->next;
}
$fn106 $tmp105 = $tmp104->methods[1];
panda$core$Bit $tmp107 = $tmp105(((panda$core$Equatable*) $tmp100), ((panda$core$Equatable*) $tmp103));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp103)));
// unreffing REF($69:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp100)));
// unreffing REF($65:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp107;
goto block9;
block8:;
*(&local1) = $tmp98;
goto block9;
block9:;
panda$core$Bit $tmp108 = *(&local1);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp110;
$tmp110 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp110->value = param2;
panda$core$Int64 $tmp111 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp112 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp111);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp113;
$tmp113 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp113->value = $tmp112;
ITable* $tmp114 = ((panda$core$Equatable*) $tmp110)->$class->itable;
while ($tmp114->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp114 = $tmp114->next;
}
$fn116 $tmp115 = $tmp114->methods[1];
panda$core$Bit $tmp117 = $tmp115(((panda$core$Equatable*) $tmp110), ((panda$core$Equatable*) $tmp113));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp113)));
// unreffing REF($89:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp110)));
// unreffing REF($85:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp117;
goto block12;
block11:;
*(&local0) = $tmp108;
goto block12;
block12:;
panda$core$Bit $tmp118 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp74)));
// unreffing REF($20:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp71)));
// unreffing REF($16:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp120 = (panda$core$Int64) {87};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s121, $tmp120, &$s122);
abort(); // unreachable
block13:;
// line 88
panda$core$Bit $tmp123 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(param1, &$s124);
panda$core$Bit $tmp125 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp123);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp127 = (panda$core$Int64) {88};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s128, $tmp127);
abort(); // unreachable
block15:;
// line 89
org$pandalanguage$pandac$Type$Kind* $tmp129 = &param0->typeKind;
*$tmp129 = param2;
// line 90
org$pandalanguage$pandac$Position $tmp130 = org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(param3, param3);
org$pandalanguage$pandac$Position* $tmp131 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
*$tmp131 = $tmp130;
// line 91
panda$core$Bit $tmp132 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp133 = &param0->resolved;
*$tmp133 = $tmp132;
// line 92
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
panda$collections$ImmutableArray** $tmp134 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp135 = *$tmp134;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
panda$collections$ImmutableArray** $tmp136 = &param0->subtypes;
*$tmp136 = ((panda$collections$ImmutableArray*) NULL);
// line 93
panda$core$Int64 $tmp137 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Symbol$Kind $tmp138 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp137);
org$pandalanguage$pandac$Position* $tmp139 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp140 = *$tmp139;
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp138, $tmp140, param1);
return;

}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* param0, panda$core$String* param1, org$pandalanguage$pandac$Type$Kind param2, org$pandalanguage$pandac$Position param3, panda$collections$ListView* param4, panda$core$Bit param5) {

// line 97
panda$core$Int64 $tmp141 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit$panda$core$Int64(param0, param1, param2, param3, param4, param5, $tmp141);
return;

}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit$panda$core$Int64(org$pandalanguage$pandac$Type* param0, panda$core$String* param1, org$pandalanguage$pandac$Type$Kind param2, org$pandalanguage$pandac$Position param3, panda$collections$ListView* param4, panda$core$Bit param5, panda$core$Int64 param6) {

// line 37
panda$core$Weak* $tmp142 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp142, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
panda$core$Weak** $tmp143 = &param0->genericParameter;
panda$core$Weak* $tmp144 = *$tmp143;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
panda$core$Weak** $tmp145 = &param0->genericParameter;
*$tmp145 = $tmp142;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.ClassDecl.GenericParameter?>)
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp146;
$tmp146 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp146->value = param2;
panda$core$Int64 $tmp147 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp148 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp147);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp149;
$tmp149 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp149->value = $tmp148;
ITable* $tmp150 = ((panda$core$Equatable*) $tmp146)->$class->itable;
while ($tmp150->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp150 = $tmp150->next;
}
$fn152 $tmp151 = $tmp150->methods[1];
panda$core$Bit $tmp153 = $tmp151(((panda$core$Equatable*) $tmp146), ((panda$core$Equatable*) $tmp149));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp149)));
// unreffing REF($20:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp146)));
// unreffing REF($16:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp155 = (panda$core$Int64) {101};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s156, $tmp155, &$s157);
abort(); // unreachable
block1:;
// line 103
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp158;
$tmp158 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp158->value = param2;
panda$core$Int64 $tmp159 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp160 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp159);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp161;
$tmp161 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp161->value = $tmp160;
ITable* $tmp162 = ((panda$core$Equatable*) $tmp158)->$class->itable;
while ($tmp162->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[0];
panda$core$Bit $tmp165 = $tmp163(((panda$core$Equatable*) $tmp158), ((panda$core$Equatable*) $tmp161));
panda$core$Bit $tmp166 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(param1, &$s167);
panda$core$Bit $tmp168 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp165, $tmp166);
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp170 = (panda$core$Int64) {103};
panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s172, param1);
panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s174);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp175;
$tmp175 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp175->value = param2;
panda$core$Int64 $tmp176 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp177 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp176);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp178;
$tmp178 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp178->value = $tmp177;
ITable* $tmp179 = ((panda$core$Equatable*) $tmp175)->$class->itable;
while ($tmp179->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp179 = $tmp179->next;
}
$fn181 $tmp180 = $tmp179->methods[0];
panda$core$Bit $tmp182 = $tmp180(((panda$core$Equatable*) $tmp175), ((panda$core$Equatable*) $tmp178));
panda$core$Bit$wrapper* $tmp183;
$tmp183 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp183->value = $tmp182;
panda$core$String* $tmp184 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp173, ((panda$core$Object*) $tmp183));
panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp184, &$s186);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s187, $tmp170, $tmp185);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
// unreffing REF($58:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
// unreffing REF($57:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// unreffing REF($56:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp178)));
// unreffing REF($53:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp175)));
// unreffing REF($49:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
// unreffing REF($48:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
// unreffing REF($47:panda.core.String)
abort(); // unreachable
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp161)));
// unreffing REF($39:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp158)));
// unreffing REF($35:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
// line 105
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp188;
$tmp188 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp188->value = param2;
panda$core$Int64 $tmp189 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp190 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp189);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp191;
$tmp191 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp191->value = $tmp190;
ITable* $tmp192 = ((panda$core$Equatable*) $tmp188)->$class->itable;
while ($tmp192->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp192 = $tmp192->next;
}
$fn194 $tmp193 = $tmp192->methods[0];
panda$core$Bit $tmp195 = $tmp193(((panda$core$Equatable*) $tmp188), ((panda$core$Equatable*) $tmp191));
panda$core$Bit $tmp196 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(param1, &$s197);
panda$core$Bit $tmp198 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp195, $tmp196);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp200 = (panda$core$Int64) {105};
panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s202, param1);
panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp201, &$s204);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp205;
$tmp205 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp205->value = param2;
panda$core$Int64 $tmp206 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp207 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp206);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp208;
$tmp208 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp208->value = $tmp207;
ITable* $tmp209 = ((panda$core$Equatable*) $tmp205)->$class->itable;
while ($tmp209->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp209 = $tmp209->next;
}
$fn211 $tmp210 = $tmp209->methods[0];
panda$core$Bit $tmp212 = $tmp210(((panda$core$Equatable*) $tmp205), ((panda$core$Equatable*) $tmp208));
panda$core$Bit$wrapper* $tmp213;
$tmp213 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp213->value = $tmp212;
panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp203, ((panda$core$Object*) $tmp213));
panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp214, &$s216);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s217, $tmp200, $tmp215);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
// unreffing REF($112:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
// unreffing REF($111:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
// unreffing REF($110:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp208)));
// unreffing REF($107:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp205)));
// unreffing REF($103:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// unreffing REF($102:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// unreffing REF($101:panda.core.String)
abort(); // unreachable
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp191)));
// unreffing REF($93:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp188)));
// unreffing REF($89:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
// line 107
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp218;
$tmp218 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp218->value = param2;
panda$core$Int64 $tmp219 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp220 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp219);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp221;
$tmp221 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp221->value = $tmp220;
ITable* $tmp222 = ((panda$core$Equatable*) $tmp218)->$class->itable;
while ($tmp222->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp222 = $tmp222->next;
}
$fn224 $tmp223 = $tmp222->methods[1];
panda$core$Bit $tmp225 = $tmp223(((panda$core$Equatable*) $tmp218), ((panda$core$Equatable*) $tmp221));
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp227 = (panda$core$Int64) {107};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s228, $tmp227);
abort(); // unreachable
block7:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp221)));
// unreffing REF($147:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp218)));
// unreffing REF($143:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
// line 108
org$pandalanguage$pandac$Type$Kind* $tmp229 = &param0->typeKind;
*$tmp229 = param2;
// line 109
org$pandalanguage$pandac$Position* $tmp230 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
*$tmp230 = param3;
// line 110
panda$core$Bit* $tmp231 = &param0->resolved;
*$tmp231 = param5;
// line 111
panda$core$Int64* $tmp232 = &param0->priority;
*$tmp232 = param6;
// line 112
panda$collections$ImmutableArray* $tmp233 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp233, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
panda$collections$ImmutableArray** $tmp234 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp235 = *$tmp234;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
panda$collections$ImmutableArray** $tmp236 = &param0->subtypes;
*$tmp236 = $tmp233;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
// unreffing REF($175:panda.collections.ImmutableArray<org.pandalanguage.pandac.Type>)
// line 113
panda$core$Int64 $tmp237 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Symbol$Kind $tmp238 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp237);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp238, param3, param1);
return;

}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* param0, panda$collections$ListView* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
panda$core$Bit local3;
// line 37
panda$core$Weak* $tmp239 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp239, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
panda$core$Weak** $tmp240 = &param0->genericParameter;
panda$core$Weak* $tmp241 = *$tmp240;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
panda$core$Weak** $tmp242 = &param0->genericParameter;
*$tmp242 = $tmp239;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.ClassDecl.GenericParameter?>)
// line 117
panda$core$Int64 $tmp243 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Type$Kind $tmp244 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp243);
org$pandalanguage$pandac$Type$Kind* $tmp245 = &param0->typeKind;
*$tmp245 = $tmp244;
// line 118
panda$collections$ImmutableArray* $tmp246 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp246, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
panda$collections$ImmutableArray** $tmp247 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp248 = *$tmp247;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
panda$collections$ImmutableArray** $tmp249 = &param0->subtypes;
*$tmp249 = $tmp246;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
// unreffing REF($22:panda.collections.ImmutableArray<org.pandalanguage.pandac.Type>)
// line 119
panda$core$MutableString* $tmp250 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp250, &$s251);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
panda$core$MutableString* $tmp252 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
*(&local0) = $tmp250;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
// unreffing REF($39:panda.core.MutableString)
// line 120
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s253));
panda$core$String* $tmp254 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
*(&local1) = &$s255;
// line 121
panda$core$Bit $tmp256 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp257 = &param0->resolved;
*$tmp257 = $tmp256;
// line 122
ITable* $tmp258 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp258->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp258 = $tmp258->next;
}
$fn260 $tmp259 = $tmp258->methods[0];
panda$collections$Iterator* $tmp261 = $tmp259(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp262 = $tmp261->$class->itable;
while ($tmp262->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp262 = $tmp262->next;
}
$fn264 $tmp263 = $tmp262->methods[0];
panda$core$Bit $tmp265 = $tmp263($tmp261);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp267 = $tmp261->$class->itable;
while ($tmp267->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp267 = $tmp267->next;
}
$fn269 $tmp268 = $tmp267->methods[1];
panda$core$Object* $tmp270 = $tmp268($tmp261);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp270)));
org$pandalanguage$pandac$Type* $tmp271 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp270);
// line 123
panda$core$MutableString* $tmp272 = *(&local0);
panda$core$String* $tmp273 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp272, $tmp273);
// line 124
panda$core$MutableString* $tmp274 = *(&local0);
org$pandalanguage$pandac$Type* $tmp275 = *(&local2);
panda$core$MutableString$append$panda$core$Object($tmp274, ((panda$core$Object*) $tmp275));
// line 125
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s276));
panda$core$String* $tmp277 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
*(&local1) = &$s278;
// line 126
panda$core$Bit* $tmp279 = &param0->resolved;
panda$core$Bit $tmp280 = *$tmp279;
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Type* $tmp282 = *(&local2);
panda$core$Bit* $tmp283 = &$tmp282->resolved;
panda$core$Bit $tmp284 = *$tmp283;
*(&local3) = $tmp284;
goto block6;
block5:;
*(&local3) = $tmp280;
goto block6;
block6:;
panda$core$Bit $tmp285 = *(&local3);
panda$core$Bit* $tmp286 = &param0->resolved;
*$tmp286 = $tmp285;
panda$core$Panda$unref$panda$core$Object$Q($tmp270);
// unreffing REF($78:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp287 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
// unreffing REF($67:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 128
panda$core$MutableString* $tmp288 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp288, &$s289);
// line 129
panda$core$Int64 $tmp290 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Symbol$Kind $tmp291 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp290);
org$pandalanguage$pandac$Position* $tmp292 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp293 = *$tmp292;
panda$core$MutableString* $tmp294 = *(&local0);
panda$core$String* $tmp295 = panda$core$MutableString$finish$R$panda$core$String($tmp294);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp291, $tmp293, $tmp295);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing REF($140:panda.core.String)
panda$core$String* $tmp296 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp297 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
// unreffing name
*(&local0) = ((panda$core$MutableString*) NULL);
return;

}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$ClassDecl$GenericParameter* param1) {

// line 37
panda$core$Weak* $tmp298 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp298, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
panda$core$Weak** $tmp299 = &param0->genericParameter;
panda$core$Weak* $tmp300 = *$tmp299;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
panda$core$Weak** $tmp301 = &param0->genericParameter;
*$tmp301 = $tmp298;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.ClassDecl.GenericParameter?>)
// line 133
panda$core$Int64 $tmp302 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp303 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp302);
org$pandalanguage$pandac$Type$Kind* $tmp304 = &param0->typeKind;
*$tmp304 = $tmp303;
// line 134
panda$core$Weak* $tmp305 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp305, ((panda$core$Object*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
panda$core$Weak** $tmp306 = &param0->genericParameter;
panda$core$Weak* $tmp307 = *$tmp306;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
panda$core$Weak** $tmp308 = &param0->genericParameter;
*$tmp308 = $tmp305;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// unreffing REF($23:panda.core.Weak<org.pandalanguage.pandac.ClassDecl.GenericParameter?>)
// line 135
panda$core$Bit $tmp309 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp310 = &param0->resolved;
*$tmp310 = $tmp309;
// line 136
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
panda$collections$ImmutableArray** $tmp311 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp312 = *$tmp311;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
panda$collections$ImmutableArray** $tmp313 = &param0->subtypes;
*$tmp313 = ((panda$collections$ImmutableArray*) NULL);
// line 137
panda$core$Int64 $tmp314 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Symbol$Kind $tmp315 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp314);
org$pandalanguage$pandac$Position* $tmp316 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp317 = *$tmp316;
panda$core$String** $tmp318 = &param1->owner;
panda$core$String* $tmp319 = *$tmp318;
panda$core$String* $tmp320 = panda$core$String$convert$R$panda$core$String($tmp319);
panda$core$String* $tmp321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp320, &$s322);
panda$core$String** $tmp323 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp324 = *$tmp323;
panda$core$String* $tmp325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp321, $tmp324);
panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp325, &$s327);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp315, $tmp317, $tmp326);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
// unreffing REF($66:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
// unreffing REF($65:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
// unreffing REF($61:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
// unreffing REF($60:panda.core.String)
return;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, panda$collections$ListView* param1) {

panda$core$Bit local0;
panda$core$MutableString* local1 = NULL;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$Type* local3 = NULL;
panda$core$Bit local4;
panda$collections$Array* local5 = NULL;
// line 142
panda$core$Bit* $tmp328 = &param0->resolved;
panda$core$Bit $tmp329 = *$tmp328;
*(&local0) = $tmp329;
// line 143
panda$core$MutableString* $tmp330 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp330);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
panda$core$MutableString* $tmp331 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
*(&local1) = $tmp330;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
// unreffing REF($5:panda.core.MutableString)
// line 144
panda$core$MutableString* $tmp332 = *(&local1);
panda$core$String** $tmp333 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp334 = *$tmp333;
panda$core$MutableString$append$panda$core$String($tmp332, $tmp334);
// line 145
panda$core$MutableString* $tmp335 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp335, &$s336);
// line 146
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s337));
panda$core$String* $tmp338 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
*(&local2) = &$s339;
// line 147
ITable* $tmp340 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp340->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp340 = $tmp340->next;
}
$fn342 $tmp341 = $tmp340->methods[0];
panda$collections$Iterator* $tmp343 = $tmp341(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp344 = $tmp343->$class->itable;
while ($tmp344->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp344 = $tmp344->next;
}
$fn346 $tmp345 = $tmp344->methods[0];
panda$core$Bit $tmp347 = $tmp345($tmp343);
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block3; else goto block2;
block2:;
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp349 = $tmp343->$class->itable;
while ($tmp349->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp349 = $tmp349->next;
}
$fn351 $tmp350 = $tmp349->methods[1];
panda$core$Object* $tmp352 = $tmp350($tmp343);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp352)));
org$pandalanguage$pandac$Type* $tmp353 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
*(&local3) = ((org$pandalanguage$pandac$Type*) $tmp352);
// line 148
panda$core$Bit $tmp354 = *(&local0);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Type* $tmp356 = *(&local3);
panda$core$Bit* $tmp357 = &$tmp356->resolved;
panda$core$Bit $tmp358 = *$tmp357;
*(&local4) = $tmp358;
goto block6;
block5:;
*(&local4) = $tmp354;
goto block6;
block6:;
panda$core$Bit $tmp359 = *(&local4);
*(&local0) = $tmp359;
// line 149
panda$core$MutableString* $tmp360 = *(&local1);
panda$core$String* $tmp361 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp360, $tmp361);
// line 150
panda$core$MutableString* $tmp362 = *(&local1);
org$pandalanguage$pandac$Type* $tmp363 = *(&local3);
panda$core$String** $tmp364 = &((org$pandalanguage$pandac$Symbol*) $tmp363)->name;
panda$core$String* $tmp365 = *$tmp364;
panda$core$MutableString$append$panda$core$String($tmp362, $tmp365);
// line 151
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s366));
panda$core$String* $tmp367 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
*(&local2) = &$s368;
panda$core$Panda$unref$panda$core$Object$Q($tmp352);
// unreffing REF($49:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp369 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
// unreffing a
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
// unreffing REF($38:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 153
panda$core$MutableString* $tmp370 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp370, &$s371);
// line 154
panda$collections$Array* $tmp372 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp372);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
panda$collections$Array* $tmp373 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
*(&local5) = $tmp372;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
// unreffing REF($104:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 155
panda$collections$Array* $tmp374 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp374, ((panda$core$Object*) param0));
// line 156
panda$collections$Array* $tmp375 = *(&local5);
panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp375, ((panda$collections$CollectionView*) param1));
// line 157
org$pandalanguage$pandac$Type* $tmp376 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$MutableString* $tmp377 = *(&local1);
panda$core$String* $tmp378 = panda$core$MutableString$finish$R$panda$core$String($tmp377);
panda$core$Int64 $tmp379 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp380 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp379);
org$pandalanguage$pandac$Position* $tmp381 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp382 = *$tmp381;
panda$collections$Array* $tmp383 = *(&local5);
panda$core$Bit $tmp384 = *(&local0);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp376, $tmp378, $tmp380, $tmp382, ((panda$collections$ListView*) $tmp383), $tmp384);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
// unreffing REF($131:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
// unreffing REF($129:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp385 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
// unreffing subtypes
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp386 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp386));
// unreffing separator
*(&local2) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp387 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
// unreffing name
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp376;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Position param0, org$pandalanguage$pandac$Type$Kind param1, panda$collections$ListView* param2, org$pandalanguage$pandac$Type* param3, panda$core$Int64 param4) {

panda$core$Bit local0;
panda$core$MutableString* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$core$String* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
panda$core$Bit local5;
// line 163
panda$core$Bit* $tmp388 = &param3->resolved;
panda$core$Bit $tmp389 = *$tmp388;
*(&local0) = $tmp389;
// line 164
panda$core$MutableString* $tmp390 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp390, &$s391);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
panda$core$MutableString* $tmp392 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
*(&local1) = $tmp390;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
// unreffing REF($5:panda.core.MutableString)
// line 165
panda$collections$Array* $tmp393 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp393);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
panda$collections$Array* $tmp394 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
*(&local2) = $tmp393;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
// unreffing REF($18:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 166
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s395));
panda$core$String* $tmp396 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
*(&local3) = &$s397;
// line 167
ITable* $tmp398 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp398->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp398 = $tmp398->next;
}
$fn400 $tmp399 = $tmp398->methods[0];
panda$collections$Iterator* $tmp401 = $tmp399(((panda$collections$Iterable*) param2));
goto block1;
block1:;
ITable* $tmp402 = $tmp401->$class->itable;
while ($tmp402->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp402 = $tmp402->next;
}
$fn404 $tmp403 = $tmp402->methods[0];
panda$core$Bit $tmp405 = $tmp403($tmp401);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block3; else goto block2;
block2:;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp407 = $tmp401->$class->itable;
while ($tmp407->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp407 = $tmp407->next;
}
$fn409 $tmp408 = $tmp407->methods[1];
panda$core$Object* $tmp410 = $tmp408($tmp401);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp410)));
org$pandalanguage$pandac$Type* $tmp411 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
*(&local4) = ((org$pandalanguage$pandac$Type*) $tmp410);
// line 168
panda$collections$Array* $tmp412 = *(&local2);
org$pandalanguage$pandac$Type* $tmp413 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp412, ((panda$core$Object*) $tmp413));
// line 169
panda$core$Bit $tmp414 = *(&local0);
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Type* $tmp416 = *(&local4);
panda$core$Bit* $tmp417 = &$tmp416->resolved;
panda$core$Bit $tmp418 = *$tmp417;
*(&local5) = $tmp418;
goto block6;
block5:;
*(&local5) = $tmp414;
goto block6;
block6:;
panda$core$Bit $tmp419 = *(&local5);
*(&local0) = $tmp419;
// line 170
panda$core$MutableString* $tmp420 = *(&local1);
panda$core$String* $tmp421 = *(&local3);
panda$core$MutableString$append$panda$core$String($tmp420, $tmp421);
// line 171
panda$core$MutableString* $tmp422 = *(&local1);
org$pandalanguage$pandac$Type* $tmp423 = *(&local4);
panda$core$String** $tmp424 = &((org$pandalanguage$pandac$Symbol*) $tmp423)->name;
panda$core$String* $tmp425 = *$tmp424;
panda$core$MutableString$append$panda$core$String($tmp422, $tmp425);
// line 172
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s426));
panda$core$String* $tmp427 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
*(&local3) = &$s428;
panda$core$Panda$unref$panda$core$Object$Q($tmp410);
// unreffing REF($54:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp429 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
// unreffing p
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// unreffing REF($43:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 174
panda$core$Int64 $tmp430 = param1.$rawValue;
panda$core$Int64 $tmp431 = (panda$core$Int64) {14};
panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp430, $tmp431);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block8; else goto block9;
block8:;
// line 176
panda$core$MutableString* $tmp434 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp434, &$s435);
goto block7;
block9:;
panda$core$Int64 $tmp436 = (panda$core$Int64) {15};
panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp430, $tmp436);
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block10; else goto block11;
block10:;
// line 179
panda$core$MutableString* $tmp439 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp439, &$s440);
goto block7;
block11:;
panda$core$Int64 $tmp441 = (panda$core$Int64) {16};
panda$core$Bit $tmp442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp430, $tmp441);
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block12; else goto block13;
block12:;
// line 182
panda$core$MutableString* $tmp444 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp444, &$s445);
goto block7;
block13:;
panda$core$Int64 $tmp446 = (panda$core$Int64) {17};
panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp430, $tmp446);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block14; else goto block15;
block14:;
// line 185
panda$core$MutableString* $tmp449 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp449, &$s450);
goto block7;
block15:;
// line 188
panda$core$Bit $tmp451 = panda$core$Bit$init$builtin_bit(false);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp453 = (panda$core$Int64) {188};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s454, $tmp453);
abort(); // unreachable
block16:;
goto block7;
block7:;
// line 191
panda$collections$Array* $tmp455 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp455, ((panda$core$Object*) param3));
// line 192
org$pandalanguage$pandac$Type* $tmp456 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp457 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp457->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp457 = $tmp457->next;
}
$fn459 $tmp458 = $tmp457->methods[1];
panda$core$Bit $tmp460 = $tmp458(((panda$core$Equatable*) param3), ((panda$core$Equatable*) $tmp456));
bool $tmp461 = $tmp460.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
// unreffing REF($161:org.pandalanguage.pandac.Type)
if ($tmp461) goto block18; else goto block19;
block18:;
// line 193
panda$core$MutableString* $tmp462 = *(&local1);
panda$core$String** $tmp463 = &((org$pandalanguage$pandac$Symbol*) param3)->name;
panda$core$String* $tmp464 = *$tmp463;
panda$core$MutableString$append$panda$core$String($tmp462, $tmp464);
goto block19;
block19:;
// line 195
panda$core$MutableString* $tmp465 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp465, &$s466);
// line 196
org$pandalanguage$pandac$Type* $tmp467 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$MutableString* $tmp468 = *(&local1);
panda$core$String* $tmp469 = panda$core$MutableString$finish$R$panda$core$String($tmp468);
panda$collections$Array* $tmp470 = *(&local2);
panda$collections$ImmutableArray* $tmp471 = panda$collections$ImmutableArray$from$panda$collections$Array$LTpanda$collections$ImmutableArray$T$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT($tmp470);
panda$core$Bit $tmp472 = *(&local0);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit$panda$core$Int64($tmp467, $tmp469, param1, param0, ((panda$collections$ListView*) $tmp471), $tmp472, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp471));
// unreffing REF($186:panda.collections.ImmutableArray<panda.collections.ImmutableArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
// unreffing REF($183:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
// unreffing REF($181:org.pandalanguage.pandac.Type)
panda$core$String* $tmp473 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
// unreffing separator
*(&local3) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp474 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp474));
// unreffing subtypes
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$MutableString* $tmp475 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
// unreffing name
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp467;

}
panda$core$Int64 org$pandalanguage$pandac$Type$get_size$R$panda$core$Int64(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
// line 201
org$pandalanguage$pandac$Type$Kind* $tmp476 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp477 = *$tmp476;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp478;
$tmp478 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp478->value = $tmp477;
panda$core$Int64 $tmp479 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp480 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp479);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp481;
$tmp481 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp481->value = $tmp480;
ITable* $tmp482 = ((panda$core$Equatable*) $tmp478)->$class->itable;
while ($tmp482->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp482 = $tmp482->next;
}
$fn484 $tmp483 = $tmp482->methods[0];
panda$core$Bit $tmp485 = $tmp483(((panda$core$Equatable*) $tmp478), ((panda$core$Equatable*) $tmp481));
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block1; else goto block2;
block1:;
*(&local1) = $tmp485;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp487 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp488 = *$tmp487;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp489;
$tmp489 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp489->value = $tmp488;
panda$core$Int64 $tmp490 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp491 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp490);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp492;
$tmp492 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp492->value = $tmp491;
ITable* $tmp493 = ((panda$core$Equatable*) $tmp489)->$class->itable;
while ($tmp493->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp493 = $tmp493->next;
}
$fn495 $tmp494 = $tmp493->methods[0];
panda$core$Bit $tmp496 = $tmp494(((panda$core$Equatable*) $tmp489), ((panda$core$Equatable*) $tmp492));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp492)));
// unreffing REF($20:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp489)));
// unreffing REF($16:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp496;
goto block3;
block3:;
panda$core$Bit $tmp497 = *(&local1);
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block4; else goto block5;
block4:;
*(&local0) = $tmp497;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp499 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp500 = *$tmp499;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp501;
$tmp501 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp501->value = $tmp500;
panda$core$Int64 $tmp502 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp503 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp502);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp504;
$tmp504 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp504->value = $tmp503;
ITable* $tmp505 = ((panda$core$Equatable*) $tmp501)->$class->itable;
while ($tmp505->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp505 = $tmp505->next;
}
$fn507 $tmp506 = $tmp505->methods[0];
panda$core$Bit $tmp508 = $tmp506(((panda$core$Equatable*) $tmp501), ((panda$core$Equatable*) $tmp504));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp504)));
// unreffing REF($42:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp501)));
// unreffing REF($38:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp508;
goto block6;
block6:;
panda$core$Bit $tmp509 = *(&local0);
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp511 = (panda$core$Int64) {201};
panda$core$String* $tmp512 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s513, ((panda$core$Object*) param0));
panda$core$String* $tmp514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp512, &$s515);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s516, $tmp511, $tmp514);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
// unreffing REF($59:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
// unreffing REF($58:panda.core.String)
abort(); // unreachable
block7:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp481)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp478)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
// line 203
org$pandalanguage$pandac$Position* $tmp517 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp518 = *$tmp517;
panda$core$Int64 $tmp519 = $tmp518.line;
return $tmp519;

}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$Type* param1) {

panda$core$Bit local0;
// line 213
panda$core$String** $tmp520 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp521 = *$tmp520;
panda$core$String** $tmp522 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp523 = *$tmp522;
panda$core$Bit $tmp524 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp521, $tmp523);
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$Type$Kind* $tmp526 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp527 = *$tmp526;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp528;
$tmp528 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp528->value = $tmp527;
org$pandalanguage$pandac$Type$Kind* $tmp529 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp530 = *$tmp529;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp531;
$tmp531 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp531->value = $tmp530;
ITable* $tmp532 = ((panda$core$Equatable*) $tmp528)->$class->itable;
while ($tmp532->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp532 = $tmp532->next;
}
$fn534 $tmp533 = $tmp532->methods[0];
panda$core$Bit $tmp535 = $tmp533(((panda$core$Equatable*) $tmp528), ((panda$core$Equatable*) $tmp531));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp531)));
// unreffing REF($16:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp528)));
// unreffing REF($12:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp535;
goto block3;
block2:;
*(&local0) = $tmp524;
goto block3;
block3:;
panda$core$Bit $tmp536 = *(&local0);
return $tmp536;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {

// line 218
org$pandalanguage$pandac$Type* $tmp537 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp538 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Type$Kind $tmp539 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp538);
org$pandalanguage$pandac$Position $tmp540 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp541 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp537, &$s542, $tmp539, $tmp540, $tmp541);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp537;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {

// line 223
org$pandalanguage$pandac$Type* $tmp543 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp544 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp545 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp544);
org$pandalanguage$pandac$Position $tmp546 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp547 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp543, &$s548, $tmp545, $tmp546, $tmp547);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp543;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {

// line 228
org$pandalanguage$pandac$Type* $tmp549 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp550 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp551 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp550);
org$pandalanguage$pandac$Position $tmp552 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp553 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp549, &$s554, $tmp551, $tmp552, $tmp553);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp549;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {

panda$collections$Array* local0 = NULL;
// line 233
panda$collections$Array* $tmp555 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp555);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
panda$collections$Array* $tmp556 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
*(&local0) = $tmp555;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 234
panda$collections$Array* $tmp557 = *(&local0);
org$pandalanguage$pandac$Type* $tmp558 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp557, ((panda$core$Object*) $tmp558));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp558));
// unreffing REF($17:org.pandalanguage.pandac.Type)
// line 235
org$pandalanguage$pandac$Type* $tmp559 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp560 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp561 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp560);
org$pandalanguage$pandac$Position $tmp562 = org$pandalanguage$pandac$Position$init();
panda$collections$Array* $tmp563 = *(&local0);
panda$core$Bit $tmp564 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp559, &$s565, $tmp561, $tmp562, ((panda$collections$ListView*) $tmp563), $tmp564);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
// unreffing REF($24:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp566 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
// unreffing subtypes
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp559;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {

// line 240
org$pandalanguage$pandac$Type* $tmp567 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp568 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp569 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp568);
org$pandalanguage$pandac$Position $tmp570 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp571 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp567, &$s572, $tmp569, $tmp570, $tmp571);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp567;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type() {

// line 245
org$pandalanguage$pandac$Type* $tmp573 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp574 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp575 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp574);
org$pandalanguage$pandac$Position $tmp576 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp577 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp573, &$s578, $tmp575, $tmp576, $tmp577);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp573;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {

// line 250
org$pandalanguage$pandac$Type* $tmp579 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp580 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp581 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp580);
org$pandalanguage$pandac$Position $tmp582 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp583 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp579, &$s584, $tmp581, $tmp582, $tmp583);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp579;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {

// line 255
org$pandalanguage$pandac$Type* $tmp585 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp586 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp587 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp586);
org$pandalanguage$pandac$Position $tmp588 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp589 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp585, &$s590, $tmp587, $tmp588, $tmp589);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp585;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RegularExpression$R$org$pandalanguage$pandac$Type() {

// line 260
org$pandalanguage$pandac$Type* $tmp591 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp592 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp593 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp592);
org$pandalanguage$pandac$Position $tmp594 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp595 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp591, &$s596, $tmp593, $tmp594, $tmp595);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp591;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {

// line 265
org$pandalanguage$pandac$Type* $tmp597 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp598 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp599 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp598);
panda$core$Int64 $tmp600 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp597, &$s601, $tmp599, $tmp600);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp597;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {

// line 270
org$pandalanguage$pandac$Type* $tmp602 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp603 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp604 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp603);
panda$core$Int64 $tmp605 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp602, &$s606, $tmp604, $tmp605);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp602;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {

// line 275
org$pandalanguage$pandac$Type* $tmp607 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp608 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp609 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp608);
panda$core$Int64 $tmp610 = (panda$core$Int64) {32};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp607, &$s611, $tmp609, $tmp610);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp607;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {

// line 280
org$pandalanguage$pandac$Type* $tmp612 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp613 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp614 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp613);
panda$core$Int64 $tmp615 = (panda$core$Int64) {64};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp612, &$s616, $tmp614, $tmp615);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp612;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {

// line 285
org$pandalanguage$pandac$Type* $tmp617 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp618 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp619 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp618);
panda$core$Int64 $tmp620 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp617, &$s621, $tmp619, $tmp620);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp617;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {

// line 290
org$pandalanguage$pandac$Type* $tmp622 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp623 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp624 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp623);
panda$core$Int64 $tmp625 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp622, &$s626, $tmp624, $tmp625);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp622;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {

// line 295
org$pandalanguage$pandac$Type* $tmp627 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp628 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp629 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp628);
panda$core$Int64 $tmp630 = (panda$core$Int64) {32};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp627, &$s631, $tmp629, $tmp630);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp627;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {

// line 300
org$pandalanguage$pandac$Type* $tmp632 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp633 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp634 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp633);
panda$core$Int64 $tmp635 = (panda$core$Int64) {64};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp632, &$s636, $tmp634, $tmp635);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp632;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {

// line 305
org$pandalanguage$pandac$Type* $tmp637 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp638 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp639 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp638);
panda$core$Int64 $tmp640 = (panda$core$Int64) {32};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp637, &$s641, $tmp639, $tmp640);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp637;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {

// line 310
org$pandalanguage$pandac$Type* $tmp642 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp643 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp644 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp643);
panda$core$Int64 $tmp645 = (panda$core$Int64) {64};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp642, &$s646, $tmp644, $tmp645);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp642;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {

// line 315
org$pandalanguage$pandac$Type* $tmp647 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp648 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp649 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp648);
org$pandalanguage$pandac$Position $tmp650 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp651 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp647, &$s652, $tmp649, $tmp650, $tmp651);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp647;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {

// line 320
org$pandalanguage$pandac$Type* $tmp653 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp654 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp655 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp654);
org$pandalanguage$pandac$Position $tmp656 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp657 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp653, &$s658, $tmp655, $tmp656, $tmp657);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp653;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {

// line 325
org$pandalanguage$pandac$Type* $tmp659 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp660 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp661 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp660);
org$pandalanguage$pandac$Position $tmp662 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp663 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp659, &$s664, $tmp661, $tmp662, $tmp663);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp659;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {

// line 330
org$pandalanguage$pandac$Type* $tmp665 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp666 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp667 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp666);
org$pandalanguage$pandac$Position $tmp668 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp669 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp665, &$s670, $tmp667, $tmp668, $tmp669);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp665;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {

// line 335
org$pandalanguage$pandac$Type* $tmp671 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp672 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp673 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp672);
org$pandalanguage$pandac$Position $tmp674 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp675 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp671, &$s676, $tmp673, $tmp674, $tmp675);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp671;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {

// line 340
org$pandalanguage$pandac$Type* $tmp677 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp678 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp679 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp678);
org$pandalanguage$pandac$Position $tmp680 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp681 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp677, &$s682, $tmp679, $tmp680, $tmp681);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp677;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {

// line 345
org$pandalanguage$pandac$Type* $tmp683 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp684 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp685 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp684);
org$pandalanguage$pandac$Position $tmp686 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp687 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp683, &$s688, $tmp685, $tmp686, $tmp687);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp683));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp683));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp683;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {

// line 350
org$pandalanguage$pandac$Type* $tmp689 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp690 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp691 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp690);
org$pandalanguage$pandac$Position $tmp692 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp693 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp689, &$s694, $tmp691, $tmp692, $tmp693);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp689));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp689));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp689;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {

// line 355
org$pandalanguage$pandac$Type* $tmp695 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp696 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp697 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp696);
org$pandalanguage$pandac$Position $tmp698 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp699 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp695, &$s700, $tmp697, $tmp698, $tmp699);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp695;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {

// line 360
org$pandalanguage$pandac$Type* $tmp701 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp702 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp703 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp702);
org$pandalanguage$pandac$Position $tmp704 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp705 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp701, &$s706, $tmp703, $tmp704, $tmp705);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp701;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {

// line 365
org$pandalanguage$pandac$Type* $tmp707 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp708 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp709 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp708);
org$pandalanguage$pandac$Position $tmp710 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp711 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp707, &$s712, $tmp709, $tmp710, $tmp711);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp707;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {

// line 370
org$pandalanguage$pandac$Type* $tmp713 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp714 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp715 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp714);
org$pandalanguage$pandac$Position $tmp716 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp717 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp713, &$s718, $tmp715, $tmp716, $tmp717);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp713;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {

// line 375
org$pandalanguage$pandac$Type* $tmp719 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp720 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp721 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp720);
org$pandalanguage$pandac$Position $tmp722 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp723 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp719, &$s724, $tmp721, $tmp722, $tmp723);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp719;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {

// line 380
org$pandalanguage$pandac$Type* $tmp725 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp726 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp727 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp726);
org$pandalanguage$pandac$Position $tmp728 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp729 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp725, &$s730, $tmp727, $tmp728, $tmp729);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp725;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 param0) {

// line 385
org$pandalanguage$pandac$Type* $tmp731 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$UInt64$wrapper* $tmp732;
$tmp732 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
$tmp732->value = param0;
panda$core$String* $tmp733 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s734, ((panda$core$Object*) $tmp732));
panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp733, &$s736);
panda$core$Int64 $tmp737 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp738 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp737);
org$pandalanguage$pandac$Position $tmp739 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp740 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp731, $tmp735, $tmp738, $tmp739, $tmp740);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp735));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp733));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp732));
// unreffing REF($2:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp731;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 param0) {

// line 390
org$pandalanguage$pandac$Type* $tmp741 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp742 = panda$core$UInt64$convert$R$panda$core$String(param0);
panda$core$String* $tmp743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s744, $tmp742);
panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp743, &$s746);
panda$core$Int64 $tmp747 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp748 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp747);
org$pandalanguage$pandac$Position $tmp749 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp750 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp741, $tmp745, $tmp748, $tmp749, $tmp750);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp741));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp743));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp742));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp741));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp741;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 param0) {

// line 395
org$pandalanguage$pandac$Type* $tmp751 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp752 = panda$core$Real64$convert$R$panda$core$String(param0);
panda$core$String* $tmp753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s754, $tmp752);
panda$core$String* $tmp755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp753, &$s756);
panda$core$Int64 $tmp757 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp758 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp757);
org$pandalanguage$pandac$Position $tmp759 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp760 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp751, $tmp755, $tmp758, $tmp759, $tmp760);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp751));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp755));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp752));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp751));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp751;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {

// line 400
org$pandalanguage$pandac$Type* $tmp761 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp762 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Type$Kind $tmp763 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp762);
org$pandalanguage$pandac$Position $tmp764 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp765 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp761, &$s766, $tmp763, $tmp764, $tmp765);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp761));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp761));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp761;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ClassLiteral$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 405
panda$collections$Array* $tmp767 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp767);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
panda$collections$Array* $tmp768 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp768));
*(&local0) = $tmp767;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 406
panda$collections$Array* $tmp769 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp769, ((panda$core$Object*) param0));
// line 407
org$pandalanguage$pandac$Type* $tmp770 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$collections$Array* $tmp771 = *(&local0);
org$pandalanguage$pandac$Type* $tmp772 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp770, ((panda$collections$ListView*) $tmp771));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp772));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp772));
// unreffing REF($23:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp773 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp773));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp772;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {

// line 412
org$pandalanguage$pandac$Type* $tmp774 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp775 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Type$Kind $tmp776 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp775);
org$pandalanguage$pandac$Position $tmp777 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp778 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp774, &$s779, $tmp776, $tmp777, $tmp778);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp774));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp774));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp774;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {

// line 417
org$pandalanguage$pandac$Type* $tmp780 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp781 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp782 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp781);
org$pandalanguage$pandac$Position $tmp783 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp784 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp780, &$s785, $tmp782, $tmp783, $tmp784);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp780;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {

// line 422
org$pandalanguage$pandac$Type* $tmp786 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp787 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp788 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp787);
org$pandalanguage$pandac$Position $tmp789 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp790 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp786, &$s791, $tmp788, $tmp789, $tmp790);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp786;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {

// line 427
org$pandalanguage$pandac$Type* $tmp792 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp793 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp794 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp793);
org$pandalanguage$pandac$Position $tmp795 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp796 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp792, &$s797, $tmp794, $tmp795, $tmp796);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp792));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp792));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp792;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {

// line 432
org$pandalanguage$pandac$Type* $tmp798 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp799 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp800 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp799);
org$pandalanguage$pandac$Position $tmp801 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp802 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp798, &$s803, $tmp800, $tmp801, $tmp802);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp798));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp798));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp798;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type() {

// line 437
org$pandalanguage$pandac$Type* $tmp804 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp805 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp806 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp805);
org$pandalanguage$pandac$Position $tmp807 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp808 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp804, &$s809, $tmp806, $tmp807, $tmp808);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp804;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 442
panda$collections$Array* $tmp810 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp810);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
panda$collections$Array* $tmp811 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
*(&local0) = $tmp810;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 443
panda$collections$Array* $tmp812 = *(&local0);
org$pandalanguage$pandac$Type* $tmp813 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp814 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp815 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp814);
org$pandalanguage$pandac$Position $tmp816 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp817 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp813, &$s818, $tmp815, $tmp816, $tmp817);
panda$collections$Array$add$panda$collections$Array$T($tmp812, ((panda$core$Object*) $tmp813));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp813));
// unreffing REF($17:org.pandalanguage.pandac.Type)
// line 444
panda$collections$Array* $tmp819 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp819, ((panda$core$Object*) param0));
// line 445
org$pandalanguage$pandac$Type* $tmp820 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp821 = panda$core$String$convert$R$panda$core$String(&$s822);
panda$core$String* $tmp823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp821, &$s824);
panda$core$String* $tmp825 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp823, ((panda$core$Object*) param0));
panda$core$String* $tmp826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp825, &$s827);
panda$core$Int64 $tmp828 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp829 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp828);
org$pandalanguage$pandac$Position* $tmp830 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp831 = *$tmp830;
panda$collections$Array* $tmp832 = *(&local0);
panda$core$Bit* $tmp833 = &param0->resolved;
panda$core$Bit $tmp834 = *$tmp833;
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp820, $tmp826, $tmp829, $tmp831, ((panda$collections$ListView*) $tmp832), $tmp834);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp820));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
// unreffing REF($39:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp825));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
// unreffing REF($36:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
// unreffing REF($35:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp820));
// unreffing REF($34:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp835 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp835));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp820;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 450
panda$collections$Array* $tmp836 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp836);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
panda$collections$Array* $tmp837 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp837));
*(&local0) = $tmp836;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 451
panda$collections$Array* $tmp838 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp838, ((panda$core$Object*) param0));
// line 452
org$pandalanguage$pandac$Type* $tmp839 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp840 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp841 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp840);
org$pandalanguage$pandac$Position $tmp842 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp843 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp839, &$s844, $tmp841, $tmp842, $tmp843);
panda$collections$Array* $tmp845 = *(&local0);
org$pandalanguage$pandac$Type* $tmp846 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp839, ((panda$collections$ListView*) $tmp845));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp846));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp846));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp847 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp847));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp846;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ArrayOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 457
panda$collections$Array* $tmp848 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp848);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
panda$collections$Array* $tmp849 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
*(&local0) = $tmp848;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 458
panda$collections$Array* $tmp850 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp850, ((panda$core$Object*) param0));
// line 459
org$pandalanguage$pandac$Type* $tmp851 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp852 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp853 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp852);
org$pandalanguage$pandac$Position $tmp854 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp855 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp851, &$s856, $tmp853, $tmp854, $tmp855);
panda$collections$Array* $tmp857 = *(&local0);
org$pandalanguage$pandac$Type* $tmp858 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp851, ((panda$collections$ListView*) $tmp857));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp851));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp859 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp858;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ImmutableArrayOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 464
panda$collections$Array* $tmp860 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp860);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
panda$collections$Array* $tmp861 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
*(&local0) = $tmp860;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 465
panda$collections$Array* $tmp862 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp862, ((panda$core$Object*) param0));
// line 466
org$pandalanguage$pandac$Type* $tmp863 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp864 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp865 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp864);
org$pandalanguage$pandac$Position $tmp866 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp867 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp863, &$s868, $tmp865, $tmp866, $tmp867);
panda$collections$Array* $tmp869 = *(&local0);
org$pandalanguage$pandac$Type* $tmp870 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp863, ((panda$collections$ListView*) $tmp869));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp863));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp871 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp870;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 471
panda$collections$Array* $tmp872 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp872);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
panda$collections$Array* $tmp873 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp873));
*(&local0) = $tmp872;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 472
panda$collections$Array* $tmp874 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp874, ((panda$core$Object*) param0));
// line 473
org$pandalanguage$pandac$Type* $tmp875 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp876 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp877 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp876);
org$pandalanguage$pandac$Position $tmp878 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp879 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp875, &$s880, $tmp877, $tmp878, $tmp879);
panda$collections$Array* $tmp881 = *(&local0);
org$pandalanguage$pandac$Type* $tmp882 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp875, ((panda$collections$ListView*) $tmp881));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp875));
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp883 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp883));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp882;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 478
panda$collections$Array* $tmp884 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp884);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp884));
panda$collections$Array* $tmp885 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp885));
*(&local0) = $tmp884;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp884));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 479
panda$collections$Array* $tmp886 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp886, ((panda$core$Object*) param0));
// line 480
org$pandalanguage$pandac$Type* $tmp887 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp888 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp889 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp887, $tmp888);
bool $tmp890 = $tmp889.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp888));
// unreffing REF($21:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp887));
// unreffing REF($20:org.pandalanguage.pandac.Type)
if ($tmp890) goto block1; else goto block3;
block1:;
// line 481
panda$collections$Array* $tmp891 = *(&local0);
org$pandalanguage$pandac$Type* $tmp892 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp891, ((panda$core$Object*) $tmp892));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
// unreffing REF($34:org.pandalanguage.pandac.Type)
goto block2;
block3:;
// line 483
org$pandalanguage$pandac$Type* $tmp893 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp894 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp895 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp893, $tmp894);
bool $tmp896 = $tmp895.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp894));
// unreffing REF($43:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
// unreffing REF($42:org.pandalanguage.pandac.Type)
if ($tmp896) goto block4; else goto block6;
block4:;
// line 484
panda$collections$Array* $tmp897 = *(&local0);
org$pandalanguage$pandac$Type* $tmp898 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp897, ((panda$core$Object*) $tmp898));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp898));
// unreffing REF($56:org.pandalanguage.pandac.Type)
goto block5;
block6:;
// line 486
org$pandalanguage$pandac$Type* $tmp899 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp900 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp901 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp899, $tmp900);
bool $tmp902 = $tmp901.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp900));
// unreffing REF($65:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp899));
// unreffing REF($64:org.pandalanguage.pandac.Type)
if ($tmp902) goto block7; else goto block9;
block7:;
// line 487
panda$collections$Array* $tmp903 = *(&local0);
org$pandalanguage$pandac$Type* $tmp904 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp903, ((panda$core$Object*) $tmp904));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp904));
// unreffing REF($78:org.pandalanguage.pandac.Type)
goto block8;
block9:;
// line 1
// line 490
panda$collections$Array* $tmp905 = *(&local0);
org$pandalanguage$pandac$Type* $tmp906 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
panda$collections$Array$add$panda$collections$Array$T($tmp905, ((panda$core$Object*) $tmp906));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp906));
// unreffing REF($89:org.pandalanguage.pandac.Type)
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
// line 492
org$pandalanguage$pandac$Type* $tmp907 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp908 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp909 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp908);
org$pandalanguage$pandac$Position $tmp910 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp911 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp907, &$s912, $tmp909, $tmp910, $tmp911);
panda$collections$Array* $tmp913 = *(&local0);
org$pandalanguage$pandac$Type* $tmp914 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp907, ((panda$collections$ListView*) $tmp913));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp914));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp914));
// unreffing REF($107:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp907));
// unreffing REF($99:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp915 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp915));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp914;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$Type* param1) {

panda$collections$Array* local0 = NULL;
// line 497
panda$collections$Array* $tmp916 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp916);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
panda$collections$Array* $tmp917 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp917));
*(&local0) = $tmp916;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 498
panda$collections$Array* $tmp918 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp918, ((panda$core$Object*) param0));
// line 499
panda$collections$Array* $tmp919 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp919, ((panda$core$Object*) param1));
// line 500
org$pandalanguage$pandac$Type* $tmp920 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp921 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp922 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp921);
org$pandalanguage$pandac$Position $tmp923 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp924 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp920, &$s925, $tmp922, $tmp923, $tmp924);
panda$collections$Array* $tmp926 = *(&local0);
org$pandalanguage$pandac$Type* $tmp927 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp920, ((panda$collections$ListView*) $tmp926));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp927));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp927));
// unreffing REF($33:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp920));
// unreffing REF($25:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp928 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp928));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp927;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {

// line 505
org$pandalanguage$pandac$Type* $tmp929 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp930 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Type$Kind $tmp931 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp930);
org$pandalanguage$pandac$Position $tmp932 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp933 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp929, &$s934, $tmp931, $tmp932, $tmp933);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp929;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {

// line 510
org$pandalanguage$pandac$Type* $tmp935 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp936 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Type$Kind $tmp937 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp936);
org$pandalanguage$pandac$Position $tmp938 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp939 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp935, &$s940, $tmp937, $tmp938, $tmp939);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp935;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
// line 514
panda$core$String** $tmp941 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp942 = *$tmp941;
panda$core$Bit $tmp943 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp942, &$s944);
bool $tmp945 = $tmp943.value;
if ($tmp945) goto block1; else goto block2;
block1:;
*(&local3) = $tmp943;
goto block3;
block2:;
panda$core$String** $tmp946 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp947 = *$tmp946;
panda$core$Bit $tmp948 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp947, &$s949);
*(&local3) = $tmp948;
goto block3;
block3:;
panda$core$Bit $tmp950 = *(&local3);
bool $tmp951 = $tmp950.value;
if ($tmp951) goto block4; else goto block5;
block4:;
*(&local2) = $tmp950;
goto block6;
block5:;
panda$core$String** $tmp952 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp953 = *$tmp952;
panda$core$Bit $tmp954 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp953, &$s955);
*(&local2) = $tmp954;
goto block6;
block6:;
panda$core$Bit $tmp956 = *(&local2);
bool $tmp957 = $tmp956.value;
if ($tmp957) goto block7; else goto block8;
block7:;
*(&local1) = $tmp956;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp958 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp959 = *$tmp958;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp960;
$tmp960 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp960->value = $tmp959;
panda$core$Int64 $tmp961 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp962 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp961);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp963;
$tmp963 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp963->value = $tmp962;
ITable* $tmp964 = ((panda$core$Equatable*) $tmp960)->$class->itable;
while ($tmp964->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp964 = $tmp964->next;
}
$fn966 $tmp965 = $tmp964->methods[0];
panda$core$Bit $tmp967 = $tmp965(((panda$core$Equatable*) $tmp960), ((panda$core$Equatable*) $tmp963));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp963)));
// unreffing REF($37:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp960)));
// unreffing REF($33:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp967;
goto block9;
block9:;
panda$core$Bit $tmp968 = *(&local1);
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block10; else goto block11;
block10:;
*(&local0) = $tmp968;
goto block12;
block11:;
org$pandalanguage$pandac$Type$Kind* $tmp970 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp971 = *$tmp970;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp972;
$tmp972 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp972->value = $tmp971;
panda$core$Int64 $tmp973 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp974 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp973);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp975;
$tmp975 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp975->value = $tmp974;
ITable* $tmp976 = ((panda$core$Equatable*) $tmp972)->$class->itable;
while ($tmp976->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp976 = $tmp976->next;
}
$fn978 $tmp977 = $tmp976->methods[0];
panda$core$Bit $tmp979 = $tmp977(((panda$core$Equatable*) $tmp972), ((panda$core$Equatable*) $tmp975));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp975)));
// unreffing REF($59:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp972)));
// unreffing REF($55:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp979;
goto block12;
block12:;
panda$core$Bit $tmp980 = *(&local0);
return $tmp980;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
// line 520
org$pandalanguage$pandac$Type$Kind* $tmp981 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp982 = *$tmp981;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp983;
$tmp983 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp983->value = $tmp982;
panda$core$Int64 $tmp984 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp985 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp984);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp986;
$tmp986 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp986->value = $tmp985;
ITable* $tmp987 = ((panda$core$Equatable*) $tmp983)->$class->itable;
while ($tmp987->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp987 = $tmp987->next;
}
$fn989 $tmp988 = $tmp987->methods[0];
panda$core$Bit $tmp990 = $tmp988(((panda$core$Equatable*) $tmp983), ((panda$core$Equatable*) $tmp986));
bool $tmp991 = $tmp990.value;
if ($tmp991) goto block1; else goto block2;
block1:;
*(&local2) = $tmp990;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp992 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp993 = *$tmp992;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp994;
$tmp994 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp994->value = $tmp993;
panda$core$Int64 $tmp995 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp996 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp995);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp997;
$tmp997 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp997->value = $tmp996;
ITable* $tmp998 = ((panda$core$Equatable*) $tmp994)->$class->itable;
while ($tmp998->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp998 = $tmp998->next;
}
$fn1000 $tmp999 = $tmp998->methods[0];
panda$core$Bit $tmp1001 = $tmp999(((panda$core$Equatable*) $tmp994), ((panda$core$Equatable*) $tmp997));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp997)));
// unreffing REF($20:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp994)));
// unreffing REF($16:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp1001;
goto block3;
block3:;
panda$core$Bit $tmp1002 = *(&local2);
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1002;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1004 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1005 = *$tmp1004;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1006;
$tmp1006 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1006->value = $tmp1005;
panda$core$Int64 $tmp1007 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp1008 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1007);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1009;
$tmp1009 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1009->value = $tmp1008;
ITable* $tmp1010 = ((panda$core$Equatable*) $tmp1006)->$class->itable;
while ($tmp1010->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1010 = $tmp1010->next;
}
$fn1012 $tmp1011 = $tmp1010->methods[0];
panda$core$Bit $tmp1013 = $tmp1011(((panda$core$Equatable*) $tmp1006), ((panda$core$Equatable*) $tmp1009));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1009)));
// unreffing REF($42:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1006)));
// unreffing REF($38:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp1013;
goto block6;
block6:;
panda$core$Bit $tmp1014 = *(&local1);
bool $tmp1015 = $tmp1014.value;
if ($tmp1015) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1014;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1016 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1017 = *$tmp1016;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1018;
$tmp1018 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1018->value = $tmp1017;
panda$core$Int64 $tmp1019 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1020 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1019);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1021;
$tmp1021 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1021->value = $tmp1020;
ITable* $tmp1022 = ((panda$core$Equatable*) $tmp1018)->$class->itable;
while ($tmp1022->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1022 = $tmp1022->next;
}
$fn1024 $tmp1023 = $tmp1022->methods[0];
panda$core$Bit $tmp1025 = $tmp1023(((panda$core$Equatable*) $tmp1018), ((panda$core$Equatable*) $tmp1021));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1021)));
// unreffing REF($64:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1018)));
// unreffing REF($60:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp1025;
goto block9;
block9:;
panda$core$Bit $tmp1026 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp986)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp983)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
return $tmp1026;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isSigned$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 525
panda$core$String** $tmp1027 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1028 = *$tmp1027;
panda$core$Bit $tmp1029 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1028, &$s1030);
return $tmp1029;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
// line 529
org$pandalanguage$pandac$Type$Kind* $tmp1031 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1032 = *$tmp1031;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1033;
$tmp1033 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1033->value = $tmp1032;
panda$core$Int64 $tmp1034 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp1035 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1034);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1036;
$tmp1036 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1036->value = $tmp1035;
ITable* $tmp1037 = ((panda$core$Equatable*) $tmp1033)->$class->itable;
while ($tmp1037->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1037 = $tmp1037->next;
}
$fn1039 $tmp1038 = $tmp1037->methods[0];
panda$core$Bit $tmp1040 = $tmp1038(((panda$core$Equatable*) $tmp1033), ((panda$core$Equatable*) $tmp1036));
bool $tmp1041 = $tmp1040.value;
if ($tmp1041) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1040;
goto block3;
block2:;
panda$core$String** $tmp1042 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1043 = *$tmp1042;
panda$core$Bit $tmp1044 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1043, &$s1045);
*(&local0) = $tmp1044;
goto block3;
block3:;
panda$core$Bit $tmp1046 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1036)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1033)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
return $tmp1046;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 533
panda$core$String** $tmp1047 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1048 = *$tmp1047;
panda$core$Bit $tmp1049 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1048, &$s1050);
return $tmp1049;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
// line 537
panda$core$Bit $tmp1051 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param0);
bool $tmp1052 = $tmp1051.value;
if ($tmp1052) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1051;
goto block3;
block2:;
panda$core$Bit $tmp1053 = org$pandalanguage$pandac$Type$get_isChar$R$panda$core$Bit(param0);
*(&local0) = $tmp1053;
goto block3;
block3:;
panda$core$Bit $tmp1054 = *(&local0);
return $tmp1054;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 541
org$pandalanguage$pandac$Type$Kind* $tmp1055 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1056 = *$tmp1055;
panda$core$Int64 $tmp1057 = $tmp1056.$rawValue;
panda$core$Int64 $tmp1058 = (panda$core$Int64) {0};
panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1057, $tmp1058);
bool $tmp1060 = $tmp1059.value;
if ($tmp1060) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp1061 = (panda$core$Int64) {1};
panda$core$Bit $tmp1062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1057, $tmp1061);
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp1064 = (panda$core$Int64) {11};
panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1057, $tmp1064);
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp1067 = (panda$core$Int64) {12};
panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1057, $tmp1067);
bool $tmp1069 = $tmp1068.value;
if ($tmp1069) goto block2; else goto block6;
block6:;
panda$core$Int64 $tmp1070 = (panda$core$Int64) {15};
panda$core$Bit $tmp1071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1057, $tmp1070);
bool $tmp1072 = $tmp1071.value;
if ($tmp1072) goto block2; else goto block7;
block7:;
panda$core$Int64 $tmp1073 = (panda$core$Int64) {14};
panda$core$Bit $tmp1074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1057, $tmp1073);
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block2; else goto block8;
block8:;
panda$core$Int64 $tmp1076 = (panda$core$Int64) {17};
panda$core$Bit $tmp1077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1057, $tmp1076);
bool $tmp1078 = $tmp1077.value;
if ($tmp1078) goto block2; else goto block9;
block9:;
panda$core$Int64 $tmp1079 = (panda$core$Int64) {16};
panda$core$Bit $tmp1080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1057, $tmp1079);
bool $tmp1081 = $tmp1080.value;
if ($tmp1081) goto block2; else goto block10;
block2:;
// line 544
panda$core$Bit $tmp1082 = panda$core$Bit$init$builtin_bit(true);
return $tmp1082;
block10:;
// line 547
panda$core$Bit $tmp1083 = panda$core$Bit$init$builtin_bit(false);
return $tmp1083;
block1:;
panda$core$Bit $tmp1084 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1085 = $tmp1084.value;
if ($tmp1085) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp1086 = (panda$core$Int64) {540};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1087, $tmp1086, &$s1088);
abort(); // unreachable
block11:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
// line 553
org$pandalanguage$pandac$Type$Kind* $tmp1089 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1090 = *$tmp1089;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1091;
$tmp1091 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1091->value = $tmp1090;
panda$core$Int64 $tmp1092 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp1093 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1092);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1094;
$tmp1094 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1094->value = $tmp1093;
ITable* $tmp1095 = ((panda$core$Equatable*) $tmp1091)->$class->itable;
while ($tmp1095->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1095 = $tmp1095->next;
}
$fn1097 $tmp1096 = $tmp1095->methods[0];
panda$core$Bit $tmp1098 = $tmp1096(((panda$core$Equatable*) $tmp1091), ((panda$core$Equatable*) $tmp1094));
bool $tmp1099 = $tmp1098.value;
if ($tmp1099) goto block1; else goto block2;
block1:;
panda$collections$ImmutableArray** $tmp1100 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1101 = *$tmp1100;
panda$core$Int64 $tmp1102 = (panda$core$Int64) {0};
panda$core$Object* $tmp1103 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1101, $tmp1102);
org$pandalanguage$pandac$Type* $tmp1104 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1105 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1103), $tmp1104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1104));
// unreffing REF($19:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1103);
// unreffing REF($17:panda.collections.ImmutableArray.T)
*(&local0) = $tmp1105;
goto block3;
block2:;
*(&local0) = $tmp1098;
goto block3;
block3:;
panda$core$Bit $tmp1106 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1094)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1091)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
return $tmp1106;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 557
org$pandalanguage$pandac$Type$Kind* $tmp1107 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1108 = *$tmp1107;
panda$core$Int64 $tmp1109 = $tmp1108.$rawValue;
panda$core$Int64 $tmp1110 = (panda$core$Int64) {15};
panda$core$Bit $tmp1111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1109, $tmp1110);
bool $tmp1112 = $tmp1111.value;
if ($tmp1112) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp1113 = (panda$core$Int64) {14};
panda$core$Bit $tmp1114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1109, $tmp1113);
bool $tmp1115 = $tmp1114.value;
if ($tmp1115) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp1116 = (panda$core$Int64) {17};
panda$core$Bit $tmp1117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1109, $tmp1116);
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp1119 = (panda$core$Int64) {16};
panda$core$Bit $tmp1120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1109, $tmp1119);
bool $tmp1121 = $tmp1120.value;
if ($tmp1121) goto block2; else goto block6;
block2:;
// line 559
panda$core$Bit $tmp1122 = panda$core$Bit$init$builtin_bit(true);
return $tmp1122;
block6:;
// line 562
panda$core$Bit $tmp1123 = panda$core$Bit$init$builtin_bit(false);
return $tmp1123;
block1:;
panda$core$Bit $tmp1124 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1125 = $tmp1124.value;
if ($tmp1125) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1126 = (panda$core$Int64) {556};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1127, $tmp1126, &$s1128);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 568
panda$core$String** $tmp1129 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1130 = *$tmp1129;
panda$core$Bit $tmp1131 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1130, &$s1132);
return $tmp1131;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 572
panda$core$String** $tmp1133 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1134 = *$tmp1133;
panda$core$Bit $tmp1135 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1134, &$s1136);
return $tmp1135;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 576
panda$core$String** $tmp1137 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1138 = *$tmp1137;
panda$core$Bit $tmp1139 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1138, &$s1140);
return $tmp1139;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isNullable$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 580
org$pandalanguage$pandac$Type$Kind* $tmp1141 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1142 = *$tmp1141;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1143;
$tmp1143 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1143->value = $tmp1142;
panda$core$Int64 $tmp1144 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1145 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1144);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1146;
$tmp1146 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1146->value = $tmp1145;
ITable* $tmp1147 = ((panda$core$Equatable*) $tmp1143)->$class->itable;
while ($tmp1147->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1147 = $tmp1147->next;
}
$fn1149 $tmp1148 = $tmp1147->methods[0];
panda$core$Bit $tmp1150 = $tmp1148(((panda$core$Equatable*) $tmp1143), ((panda$core$Equatable*) $tmp1146));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1146)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1143)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
return $tmp1150;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 584
org$pandalanguage$pandac$Type$Kind* $tmp1151 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1152 = *$tmp1151;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1153;
$tmp1153 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1153->value = $tmp1152;
panda$core$Int64 $tmp1154 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1155 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1154);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1156;
$tmp1156 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1156->value = $tmp1155;
ITable* $tmp1157 = ((panda$core$Equatable*) $tmp1153)->$class->itable;
while ($tmp1157->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1157 = $tmp1157->next;
}
$fn1159 $tmp1158 = $tmp1157->methods[0];
panda$core$Bit $tmp1160 = $tmp1158(((panda$core$Equatable*) $tmp1153), ((panda$core$Equatable*) $tmp1156));
bool $tmp1161 = $tmp1160.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1156)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1153)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1161) goto block1; else goto block2;
block1:;
// line 585
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 587
panda$collections$Array* $tmp1162 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1162);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1162));
panda$collections$Array* $tmp1163 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1163));
*(&local0) = $tmp1162;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1162));
// unreffing REF($23:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 588
panda$collections$Array* $tmp1164 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp1164, ((panda$core$Object*) param0));
// line 589
org$pandalanguage$pandac$Type* $tmp1165 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String** $tmp1166 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1167 = *$tmp1166;
panda$core$String* $tmp1168 = panda$core$String$convert$R$panda$core$String($tmp1167);
panda$core$String* $tmp1169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1168, &$s1170);
panda$core$Int64 $tmp1171 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1172 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1171);
org$pandalanguage$pandac$Position $tmp1173 = org$pandalanguage$pandac$Position$init();
panda$collections$Array* $tmp1174 = *(&local0);
panda$core$Bit $tmp1175 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1165, $tmp1169, $tmp1172, $tmp1173, ((panda$collections$ListView*) $tmp1174), $tmp1175);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1165));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
// unreffing REF($47:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1168));
// unreffing REF($46:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1165));
// unreffing REF($42:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp1176 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1176));
// unreffing subtypes
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp1165;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

// line 593
org$pandalanguage$pandac$Type$Kind* $tmp1177 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1178 = *$tmp1177;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1179;
$tmp1179 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1179->value = $tmp1178;
panda$core$Int64 $tmp1180 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1181 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1180);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1182;
$tmp1182 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1182->value = $tmp1181;
ITable* $tmp1183 = ((panda$core$Equatable*) $tmp1179)->$class->itable;
while ($tmp1183->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1183 = $tmp1183->next;
}
$fn1185 $tmp1184 = $tmp1183->methods[1];
panda$core$Bit $tmp1186 = $tmp1184(((panda$core$Equatable*) $tmp1179), ((panda$core$Equatable*) $tmp1182));
bool $tmp1187 = $tmp1186.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1182)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1179)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1187) goto block1; else goto block2;
block1:;
// line 594
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 596
panda$collections$ImmutableArray** $tmp1188 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1189 = *$tmp1188;
panda$core$Int64 $tmp1190 = (panda$core$Int64) {0};
panda$core$Object* $tmp1191 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1189, $tmp1190);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1191)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1191);
// unreffing REF($28:panda.collections.ImmutableArray.T)
return ((org$pandalanguage$pandac$Type*) $tmp1191);

}
panda$core$Int64 org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
org$pandalanguage$pandac$Type$Kind* $tmp1192 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1193 = *$tmp1192;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1194;
$tmp1194 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1194->value = $tmp1193;
panda$core$Int64 $tmp1195 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp1196 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1195);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1197;
$tmp1197 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1197->value = $tmp1196;
ITable* $tmp1198 = ((panda$core$Equatable*) $tmp1194)->$class->itable;
while ($tmp1198->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1198 = $tmp1198->next;
}
$fn1200 $tmp1199 = $tmp1198->methods[0];
panda$core$Bit $tmp1201 = $tmp1199(((panda$core$Equatable*) $tmp1194), ((panda$core$Equatable*) $tmp1197));
bool $tmp1202 = $tmp1201.value;
if ($tmp1202) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1201;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1203 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1204 = *$tmp1203;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1205;
$tmp1205 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1205->value = $tmp1204;
panda$core$Int64 $tmp1206 = (panda$core$Int64) {15};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1208)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1205)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp1212;
goto block3;
block3:;
panda$core$Bit $tmp1213 = *(&local2);
bool $tmp1214 = $tmp1213.value;
if ($tmp1214) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1213;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1215 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1216 = *$tmp1215;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1217;
$tmp1217 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1217->value = $tmp1216;
panda$core$Int64 $tmp1218 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp1219 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1218);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1220;
$tmp1220 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1220->value = $tmp1219;
ITable* $tmp1221 = ((panda$core$Equatable*) $tmp1217)->$class->itable;
while ($tmp1221->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1221 = $tmp1221->next;
}
$fn1223 $tmp1222 = $tmp1221->methods[0];
panda$core$Bit $tmp1224 = $tmp1222(((panda$core$Equatable*) $tmp1217), ((panda$core$Equatable*) $tmp1220));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1220)));
// unreffing REF($41:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1217)));
// unreffing REF($37:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp1224;
goto block6;
block6:;
panda$core$Bit $tmp1225 = *(&local1);
bool $tmp1226 = $tmp1225.value;
if ($tmp1226) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1225;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1227 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1228 = *$tmp1227;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1229;
$tmp1229 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1229->value = $tmp1228;
panda$core$Int64 $tmp1230 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp1231 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1230);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1232;
$tmp1232 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1232->value = $tmp1231;
ITable* $tmp1233 = ((panda$core$Equatable*) $tmp1229)->$class->itable;
while ($tmp1233->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1233 = $tmp1233->next;
}
$fn1235 $tmp1234 = $tmp1233->methods[0];
panda$core$Bit $tmp1236 = $tmp1234(((panda$core$Equatable*) $tmp1229), ((panda$core$Equatable*) $tmp1232));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1232)));
// unreffing REF($63:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1229)));
// unreffing REF($59:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp1236;
goto block9;
block9:;
panda$core$Bit $tmp1237 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1197)));
// unreffing REF($6:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1194)));
// unreffing REF($2:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp1238 = $tmp1237.value;
if ($tmp1238) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp1239 = (panda$core$Int64) {601};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1240, $tmp1239, &$s1241);
abort(); // unreachable
block10:;
// line 602
panda$collections$ImmutableArray** $tmp1242 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1243 = *$tmp1242;
ITable* $tmp1244 = ((panda$collections$CollectionView*) $tmp1243)->$class->itable;
while ($tmp1244->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1244 = $tmp1244->next;
}
$fn1246 $tmp1245 = $tmp1244->methods[0];
panda$core$Int64 $tmp1247 = $tmp1245(((panda$collections$CollectionView*) $tmp1243));
panda$core$Int64 $tmp1248 = (panda$core$Int64) {1};
int64_t $tmp1249 = $tmp1247.value;
int64_t $tmp1250 = $tmp1248.value;
int64_t $tmp1251 = $tmp1249 - $tmp1250;
panda$core$Int64 $tmp1252 = (panda$core$Int64) {$tmp1251};
return $tmp1252;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
org$pandalanguage$pandac$Type$Kind* $tmp1253 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1254 = *$tmp1253;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1255;
$tmp1255 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1255->value = $tmp1254;
panda$core$Int64 $tmp1256 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp1257 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1256);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1258;
$tmp1258 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1258->value = $tmp1257;
ITable* $tmp1259 = ((panda$core$Equatable*) $tmp1255)->$class->itable;
while ($tmp1259->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1259 = $tmp1259->next;
}
$fn1261 $tmp1260 = $tmp1259->methods[0];
panda$core$Bit $tmp1262 = $tmp1260(((panda$core$Equatable*) $tmp1255), ((panda$core$Equatable*) $tmp1258));
bool $tmp1263 = $tmp1262.value;
if ($tmp1263) goto block1; else goto block2;
block1:;
*(&local4) = $tmp1262;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1264 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1265 = *$tmp1264;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1266;
$tmp1266 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1266->value = $tmp1265;
panda$core$Int64 $tmp1267 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp1268 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1267);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1269;
$tmp1269 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1269->value = $tmp1268;
ITable* $tmp1270 = ((panda$core$Equatable*) $tmp1266)->$class->itable;
while ($tmp1270->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1270 = $tmp1270->next;
}
$fn1272 $tmp1271 = $tmp1270->methods[0];
panda$core$Bit $tmp1273 = $tmp1271(((panda$core$Equatable*) $tmp1266), ((panda$core$Equatable*) $tmp1269));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1269)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1266)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local4) = $tmp1273;
goto block3;
block3:;
panda$core$Bit $tmp1274 = *(&local4);
bool $tmp1275 = $tmp1274.value;
if ($tmp1275) goto block4; else goto block5;
block4:;
*(&local3) = $tmp1274;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1276 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1277 = *$tmp1276;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1278;
$tmp1278 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1278->value = $tmp1277;
panda$core$Int64 $tmp1279 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp1280 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1279);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1281;
$tmp1281 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1281->value = $tmp1280;
ITable* $tmp1282 = ((panda$core$Equatable*) $tmp1278)->$class->itable;
while ($tmp1282->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1282 = $tmp1282->next;
}
$fn1284 $tmp1283 = $tmp1282->methods[0];
panda$core$Bit $tmp1285 = $tmp1283(((panda$core$Equatable*) $tmp1278), ((panda$core$Equatable*) $tmp1281));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1281)));
// unreffing REF($41:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1278)));
// unreffing REF($37:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local3) = $tmp1285;
goto block6;
block6:;
panda$core$Bit $tmp1286 = *(&local3);
bool $tmp1287 = $tmp1286.value;
if ($tmp1287) goto block7; else goto block8;
block7:;
*(&local2) = $tmp1286;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1288 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1289 = *$tmp1288;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1290;
$tmp1290 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1290->value = $tmp1289;
panda$core$Int64 $tmp1291 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp1292 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1291);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1293;
$tmp1293 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1293->value = $tmp1292;
ITable* $tmp1294 = ((panda$core$Equatable*) $tmp1290)->$class->itable;
while ($tmp1294->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1294 = $tmp1294->next;
}
$fn1296 $tmp1295 = $tmp1294->methods[0];
panda$core$Bit $tmp1297 = $tmp1295(((panda$core$Equatable*) $tmp1290), ((panda$core$Equatable*) $tmp1293));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1293)));
// unreffing REF($63:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1290)));
// unreffing REF($59:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp1297;
goto block9;
block9:;
panda$core$Bit $tmp1298 = *(&local2);
bool $tmp1299 = $tmp1298.value;
if ($tmp1299) goto block10; else goto block11;
block10:;
panda$core$Int64 $tmp1300 = (panda$core$Int64) {0};
int64_t $tmp1301 = param1.value;
int64_t $tmp1302 = $tmp1300.value;
bool $tmp1303 = $tmp1301 >= $tmp1302;
panda$core$Bit $tmp1304 = (panda$core$Bit) {$tmp1303};
*(&local1) = $tmp1304;
goto block12;
block11:;
*(&local1) = $tmp1298;
goto block12;
block12:;
panda$core$Bit $tmp1305 = *(&local1);
bool $tmp1306 = $tmp1305.value;
if ($tmp1306) goto block13; else goto block14;
block13:;
panda$collections$ImmutableArray** $tmp1307 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1308 = *$tmp1307;
ITable* $tmp1309 = ((panda$collections$CollectionView*) $tmp1308)->$class->itable;
while ($tmp1309->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1309 = $tmp1309->next;
}
$fn1311 $tmp1310 = $tmp1309->methods[0];
panda$core$Int64 $tmp1312 = $tmp1310(((panda$collections$CollectionView*) $tmp1308));
panda$core$Int64 $tmp1313 = (panda$core$Int64) {1};
int64_t $tmp1314 = $tmp1312.value;
int64_t $tmp1315 = $tmp1313.value;
int64_t $tmp1316 = $tmp1314 - $tmp1315;
panda$core$Int64 $tmp1317 = (panda$core$Int64) {$tmp1316};
int64_t $tmp1318 = param1.value;
int64_t $tmp1319 = $tmp1317.value;
bool $tmp1320 = $tmp1318 < $tmp1319;
panda$core$Bit $tmp1321 = (panda$core$Bit) {$tmp1320};
*(&local0) = $tmp1321;
goto block15;
block14:;
*(&local0) = $tmp1305;
goto block15;
block15:;
panda$core$Bit $tmp1322 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1258)));
// unreffing REF($6:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1255)));
// unreffing REF($2:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp1323 = $tmp1322.value;
if ($tmp1323) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp1324 = (panda$core$Int64) {607};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1325, $tmp1324, &$s1326);
abort(); // unreachable
block16:;
// line 608
panda$collections$ImmutableArray** $tmp1327 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1328 = *$tmp1327;
panda$core$Object* $tmp1329 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1328, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1329)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1329);
// unreffing REF($124:panda.collections.ImmutableArray.T)
return ((org$pandalanguage$pandac$Type*) $tmp1329);

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
org$pandalanguage$pandac$Type$Kind* $tmp1330 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1331 = *$tmp1330;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1332;
$tmp1332 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1332->value = $tmp1331;
panda$core$Int64 $tmp1333 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp1334 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1333);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1335;
$tmp1335 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1335->value = $tmp1334;
ITable* $tmp1336 = ((panda$core$Equatable*) $tmp1332)->$class->itable;
while ($tmp1336->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1336 = $tmp1336->next;
}
$fn1338 $tmp1337 = $tmp1336->methods[0];
panda$core$Bit $tmp1339 = $tmp1337(((panda$core$Equatable*) $tmp1332), ((panda$core$Equatable*) $tmp1335));
bool $tmp1340 = $tmp1339.value;
if ($tmp1340) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1339;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1341 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1342 = *$tmp1341;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1343;
$tmp1343 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1343->value = $tmp1342;
panda$core$Int64 $tmp1344 = (panda$core$Int64) {15};
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
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1343)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp1350;
goto block3;
block3:;
panda$core$Bit $tmp1351 = *(&local2);
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1351;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1353 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1354 = *$tmp1353;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1355;
$tmp1355 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1355->value = $tmp1354;
panda$core$Int64 $tmp1356 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp1357 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1356);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1358;
$tmp1358 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1358->value = $tmp1357;
ITable* $tmp1359 = ((panda$core$Equatable*) $tmp1355)->$class->itable;
while ($tmp1359->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1359 = $tmp1359->next;
}
$fn1361 $tmp1360 = $tmp1359->methods[0];
panda$core$Bit $tmp1362 = $tmp1360(((panda$core$Equatable*) $tmp1355), ((panda$core$Equatable*) $tmp1358));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1358)));
// unreffing REF($41:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1355)));
// unreffing REF($37:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp1362;
goto block6;
block6:;
panda$core$Bit $tmp1363 = *(&local1);
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1363;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1365 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1366 = *$tmp1365;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1367;
$tmp1367 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1367->value = $tmp1366;
panda$core$Int64 $tmp1368 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp1369 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1368);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1370;
$tmp1370 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1370->value = $tmp1369;
ITable* $tmp1371 = ((panda$core$Equatable*) $tmp1367)->$class->itable;
while ($tmp1371->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1371 = $tmp1371->next;
}
$fn1373 $tmp1372 = $tmp1371->methods[0];
panda$core$Bit $tmp1374 = $tmp1372(((panda$core$Equatable*) $tmp1367), ((panda$core$Equatable*) $tmp1370));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1370)));
// unreffing REF($63:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1367)));
// unreffing REF($59:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local0) = $tmp1374;
goto block9;
block9:;
panda$core$Bit $tmp1375 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1335)));
// unreffing REF($6:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1332)));
// unreffing REF($2:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp1376 = $tmp1375.value;
if ($tmp1376) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp1377 = (panda$core$Int64) {613};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1378, $tmp1377, &$s1379);
abort(); // unreachable
block10:;
// line 614
panda$collections$ImmutableArray** $tmp1380 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1381 = *$tmp1380;
panda$collections$ImmutableArray** $tmp1382 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1383 = *$tmp1382;
ITable* $tmp1384 = ((panda$collections$CollectionView*) $tmp1383)->$class->itable;
while ($tmp1384->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1384 = $tmp1384->next;
}
$fn1386 $tmp1385 = $tmp1384->methods[0];
panda$core$Int64 $tmp1387 = $tmp1385(((panda$collections$CollectionView*) $tmp1383));
panda$core$Int64 $tmp1388 = (panda$core$Int64) {1};
int64_t $tmp1389 = $tmp1387.value;
int64_t $tmp1390 = $tmp1388.value;
int64_t $tmp1391 = $tmp1389 - $tmp1390;
panda$core$Int64 $tmp1392 = (panda$core$Int64) {$tmp1391};
panda$core$Object* $tmp1393 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1381, $tmp1392);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1393)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1393);
// unreffing REF($101:panda.collections.ImmutableArray.T)
return ((org$pandalanguage$pandac$Type*) $tmp1393);

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
// line 619
panda$core$Bit $tmp1394 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, param2);
bool $tmp1395 = $tmp1394.value;
if ($tmp1395) goto block1; else goto block2;
block1:;
// line 620
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 622
org$pandalanguage$pandac$Type* $tmp1396 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1397 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp1396);
bool $tmp1398 = $tmp1397.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
// unreffing REF($9:org.pandalanguage.pandac.Type)
if ($tmp1398) goto block3; else goto block4;
block3:;
// line 623
org$pandalanguage$pandac$Type$Kind* $tmp1399 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1400 = *$tmp1399;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1401;
$tmp1401 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1401->value = $tmp1400;
panda$core$Int64 $tmp1402 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1403 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1402);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1404;
$tmp1404 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1404->value = $tmp1403;
ITable* $tmp1405 = ((panda$core$Equatable*) $tmp1401)->$class->itable;
while ($tmp1405->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1405 = $tmp1405->next;
}
$fn1407 $tmp1406 = $tmp1405->methods[0];
panda$core$Bit $tmp1408 = $tmp1406(((panda$core$Equatable*) $tmp1401), ((panda$core$Equatable*) $tmp1404));
bool $tmp1409 = $tmp1408.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1404)));
// unreffing REF($23:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1401)));
// unreffing REF($19:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1409) goto block5; else goto block6;
block5:;
// line 624
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block6:;
// line 626
org$pandalanguage$pandac$Type* $tmp1410 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1410));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1410));
// unreffing REF($39:org.pandalanguage.pandac.Type)
return $tmp1410;
block4:;
// line 628
org$pandalanguage$pandac$Type* $tmp1411 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1412 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param2, $tmp1411);
bool $tmp1413 = $tmp1412.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1411));
// unreffing REF($47:org.pandalanguage.pandac.Type)
if ($tmp1413) goto block7; else goto block8;
block7:;
// line 629
org$pandalanguage$pandac$Type$Kind* $tmp1414 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1415 = *$tmp1414;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1416;
$tmp1416 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1416->value = $tmp1415;
panda$core$Int64 $tmp1417 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1418 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1417);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1419;
$tmp1419 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1419->value = $tmp1418;
ITable* $tmp1420 = ((panda$core$Equatable*) $tmp1416)->$class->itable;
while ($tmp1420->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1420 = $tmp1420->next;
}
$fn1422 $tmp1421 = $tmp1420->methods[0];
panda$core$Bit $tmp1423 = $tmp1421(((panda$core$Equatable*) $tmp1416), ((panda$core$Equatable*) $tmp1419));
bool $tmp1424 = $tmp1423.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1419)));
// unreffing REF($61:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1416)));
// unreffing REF($57:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1424) goto block9; else goto block10;
block9:;
// line 630
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block10:;
// line 632
org$pandalanguage$pandac$Type* $tmp1425 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
// unreffing REF($77:org.pandalanguage.pandac.Type)
return $tmp1425;
block8:;
// line 634
org$pandalanguage$pandac$Type$Kind* $tmp1426 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1427 = *$tmp1426;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1428;
$tmp1428 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1428->value = $tmp1427;
panda$core$Int64 $tmp1429 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1430 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1429);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1431;
$tmp1431 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1431->value = $tmp1430;
ITable* $tmp1432 = ((panda$core$Equatable*) $tmp1428)->$class->itable;
while ($tmp1432->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1432 = $tmp1432->next;
}
$fn1434 $tmp1433 = $tmp1432->methods[0];
panda$core$Bit $tmp1435 = $tmp1433(((panda$core$Equatable*) $tmp1428), ((panda$core$Equatable*) $tmp1431));
bool $tmp1436 = $tmp1435.value;
if ($tmp1436) goto block13; else goto block14;
block13:;
panda$core$Bit $tmp1437 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param2);
*(&local0) = $tmp1437;
goto block15;
block14:;
*(&local0) = $tmp1435;
goto block15;
block15:;
panda$core$Bit $tmp1438 = *(&local0);
bool $tmp1439 = $tmp1438.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1431)));
// unreffing REF($91:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1428)));
// unreffing REF($87:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1439) goto block11; else goto block12;
block11:;
// line 635
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block12:;
// line 637
panda$core$Bit $tmp1440 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param0);
bool $tmp1441 = $tmp1440.value;
if ($tmp1441) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Type$Kind* $tmp1442 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1443 = *$tmp1442;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1444;
$tmp1444 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1444->value = $tmp1443;
panda$core$Int64 $tmp1445 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1446 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1445);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1447;
$tmp1447 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1447->value = $tmp1446;
ITable* $tmp1448 = ((panda$core$Equatable*) $tmp1444)->$class->itable;
while ($tmp1448->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1448 = $tmp1448->next;
}
$fn1450 $tmp1449 = $tmp1448->methods[0];
panda$core$Bit $tmp1451 = $tmp1449(((panda$core$Equatable*) $tmp1444), ((panda$core$Equatable*) $tmp1447));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1447)));
// unreffing REF($124:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1444)));
// unreffing REF($120:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp1451;
goto block20;
block19:;
*(&local1) = $tmp1440;
goto block20;
block20:;
panda$core$Bit $tmp1452 = *(&local1);
bool $tmp1453 = $tmp1452.value;
if ($tmp1453) goto block16; else goto block17;
block16:;
// line 638
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block17:;
// line 640
panda$core$Bit $tmp1454 = org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit(param0);
bool $tmp1455 = $tmp1454.value;
if ($tmp1455) goto block21; else goto block22;
block21:;
// line 641
org$pandalanguage$pandac$Type$Kind* $tmp1456 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1457 = *$tmp1456;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1458;
$tmp1458 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1458->value = $tmp1457;
panda$core$Int64 $tmp1459 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1460 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1459);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1461;
$tmp1461 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1461->value = $tmp1460;
ITable* $tmp1462 = ((panda$core$Equatable*) $tmp1458)->$class->itable;
while ($tmp1462->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1462 = $tmp1462->next;
}
$fn1464 $tmp1463 = $tmp1462->methods[0];
panda$core$Bit $tmp1465 = $tmp1463(((panda$core$Equatable*) $tmp1458), ((panda$core$Equatable*) $tmp1461));
bool $tmp1466 = $tmp1465.value;
if ($tmp1466) goto block25; else goto block26;
block25:;
*(&local2) = $tmp1465;
goto block27;
block26:;
org$pandalanguage$pandac$Type$Kind* $tmp1467 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1468 = *$tmp1467;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1469;
$tmp1469 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1469->value = $tmp1468;
panda$core$Int64 $tmp1470 = (panda$core$Int64) {18};
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
// unreffing REF($168:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1469)));
// unreffing REF($164:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local2) = $tmp1476;
goto block27;
block27:;
panda$core$Bit $tmp1477 = *(&local2);
bool $tmp1478 = $tmp1477.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1461)));
// unreffing REF($155:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1458)));
// unreffing REF($151:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1478) goto block23; else goto block24;
block23:;
// line 642
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block24:;
// line 644
panda$core$Bit $tmp1479 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param2);
bool $tmp1480 = $tmp1479.value;
if ($tmp1480) goto block28; else goto block29;
block28:;
// line 645
panda$core$String** $tmp1481 = &((org$pandalanguage$pandac$Symbol*) param2)->name;
panda$core$String* $tmp1482 = *$tmp1481;
panda$core$Bit $tmp1483 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp1482, &$s1484);
bool $tmp1485 = $tmp1483.value;
if ($tmp1485) goto block30; else goto block31;
block30:;
// line 646
org$pandalanguage$pandac$Type* $tmp1486 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1486));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1486));
// unreffing REF($204:org.pandalanguage.pandac.Type)
return $tmp1486;
block31:;
// line 648
org$pandalanguage$pandac$Type* $tmp1487 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1487));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1487));
// unreffing REF($212:org.pandalanguage.pandac.Type)
return $tmp1487;
block29:;
goto block22;
block22:;
// line 651
panda$core$Bit $tmp1488 = org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit(param2);
bool $tmp1489 = $tmp1488.value;
if ($tmp1489) goto block32; else goto block33;
block32:;
// line 652
org$pandalanguage$pandac$Type$Kind* $tmp1490 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1491 = *$tmp1490;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1492;
$tmp1492 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1492->value = $tmp1491;
panda$core$Int64 $tmp1493 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1494 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1493);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1495;
$tmp1495 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1495->value = $tmp1494;
ITable* $tmp1496 = ((panda$core$Equatable*) $tmp1492)->$class->itable;
while ($tmp1496->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1496 = $tmp1496->next;
}
$fn1498 $tmp1497 = $tmp1496->methods[0];
panda$core$Bit $tmp1499 = $tmp1497(((panda$core$Equatable*) $tmp1492), ((panda$core$Equatable*) $tmp1495));
bool $tmp1500 = $tmp1499.value;
if ($tmp1500) goto block36; else goto block37;
block36:;
*(&local3) = $tmp1499;
goto block38;
block37:;
org$pandalanguage$pandac$Type$Kind* $tmp1501 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1502 = *$tmp1501;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1503;
$tmp1503 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1503->value = $tmp1502;
panda$core$Int64 $tmp1504 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp1505 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1504);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1506;
$tmp1506 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1506->value = $tmp1505;
ITable* $tmp1507 = ((panda$core$Equatable*) $tmp1503)->$class->itable;
while ($tmp1507->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1507 = $tmp1507->next;
}
$fn1509 $tmp1508 = $tmp1507->methods[0];
panda$core$Bit $tmp1510 = $tmp1508(((panda$core$Equatable*) $tmp1503), ((panda$core$Equatable*) $tmp1506));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1506)));
// unreffing REF($244:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1503)));
// unreffing REF($240:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local3) = $tmp1510;
goto block38;
block38:;
panda$core$Bit $tmp1511 = *(&local3);
bool $tmp1512 = $tmp1511.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1495)));
// unreffing REF($231:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1492)));
// unreffing REF($227:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1512) goto block34; else goto block35;
block34:;
// line 653
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block35:;
// line 655
panda$core$Bit $tmp1513 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param0);
bool $tmp1514 = $tmp1513.value;
if ($tmp1514) goto block39; else goto block40;
block39:;
// line 656
panda$core$String** $tmp1515 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1516 = *$tmp1515;
panda$core$Bit $tmp1517 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp1516, &$s1518);
bool $tmp1519 = $tmp1517.value;
if ($tmp1519) goto block41; else goto block42;
block41:;
// line 657
org$pandalanguage$pandac$Type* $tmp1520 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1520));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1520));
// unreffing REF($280:org.pandalanguage.pandac.Type)
return $tmp1520;
block42:;
// line 659
org$pandalanguage$pandac$Type* $tmp1521 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
// unreffing REF($288:org.pandalanguage.pandac.Type)
return $tmp1521;
block40:;
goto block33;
block33:;
// line 662
org$pandalanguage$pandac$Type$Kind* $tmp1522 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1523 = *$tmp1522;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1524;
$tmp1524 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1524->value = $tmp1523;
panda$core$Int64 $tmp1525 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1526 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1525);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1527;
$tmp1527 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1527->value = $tmp1526;
ITable* $tmp1528 = ((panda$core$Equatable*) $tmp1524)->$class->itable;
while ($tmp1528->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1528 = $tmp1528->next;
}
$fn1530 $tmp1529 = $tmp1528->methods[0];
panda$core$Bit $tmp1531 = $tmp1529(((panda$core$Equatable*) $tmp1524), ((panda$core$Equatable*) $tmp1527));
bool $tmp1532 = $tmp1531.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1527)));
// unreffing REF($303:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1524)));
// unreffing REF($299:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1532) goto block43; else goto block44;
block43:;
// line 663
panda$collections$ImmutableArray** $tmp1533 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1534 = *$tmp1533;
panda$core$Int64 $tmp1535 = (panda$core$Int64) {0};
panda$core$Object* $tmp1536 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1534, $tmp1535);
org$pandalanguage$pandac$Type* $tmp1537 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1536), param1, param2);
org$pandalanguage$pandac$Type* $tmp1538 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1537);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1538));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1538));
// unreffing REF($323:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1537));
// unreffing REF($322:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1536);
// unreffing REF($320:panda.collections.ImmutableArray.T)
return $tmp1538;
block44:;
// line 665
org$pandalanguage$pandac$Type$Kind* $tmp1539 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1540 = *$tmp1539;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1541;
$tmp1541 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1541->value = $tmp1540;
panda$core$Int64 $tmp1542 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1543 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1542);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1544;
$tmp1544 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1544->value = $tmp1543;
ITable* $tmp1545 = ((panda$core$Equatable*) $tmp1541)->$class->itable;
while ($tmp1545->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1545 = $tmp1545->next;
}
$fn1547 $tmp1546 = $tmp1545->methods[0];
panda$core$Bit $tmp1548 = $tmp1546(((panda$core$Equatable*) $tmp1541), ((panda$core$Equatable*) $tmp1544));
bool $tmp1549 = $tmp1548.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1544)));
// unreffing REF($343:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1541)));
// unreffing REF($339:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1549) goto block45; else goto block46;
block45:;
// line 666
panda$collections$ImmutableArray** $tmp1550 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1551 = *$tmp1550;
panda$core$Int64 $tmp1552 = (panda$core$Int64) {0};
panda$core$Object* $tmp1553 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1551, $tmp1552);
org$pandalanguage$pandac$Type* $tmp1554 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param0, param1, ((org$pandalanguage$pandac$Type*) $tmp1553));
org$pandalanguage$pandac$Type* $tmp1555 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1554);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
// unreffing REF($363:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1554));
// unreffing REF($362:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1553);
// unreffing REF($360:panda.collections.ImmutableArray.T)
return $tmp1555;
block46:;
// line 668
org$pandalanguage$pandac$Type* $tmp1556 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, param0);
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1556));
org$pandalanguage$pandac$Type* $tmp1557 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1557));
*(&local4) = $tmp1556;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1556));
// unreffing REF($377:org.pandalanguage.pandac.Type)
// line 669
org$pandalanguage$pandac$Type* $tmp1558 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, param2);
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1558));
org$pandalanguage$pandac$Type* $tmp1559 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1559));
*(&local5) = $tmp1558;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1558));
// unreffing REF($389:org.pandalanguage.pandac.Type)
// line 670
org$pandalanguage$pandac$Type* $tmp1560 = *(&local4);
panda$core$Bit $tmp1561 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp1560);
bool $tmp1562 = $tmp1561.value;
if ($tmp1562) goto block49; else goto block50;
block49:;
org$pandalanguage$pandac$Type* $tmp1563 = *(&local5);
panda$core$Bit $tmp1564 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp1563);
*(&local6) = $tmp1564;
goto block51;
block50:;
*(&local6) = $tmp1561;
goto block51;
block51:;
panda$core$Bit $tmp1565 = *(&local6);
bool $tmp1566 = $tmp1565.value;
if ($tmp1566) goto block47; else goto block48;
block47:;
// line 671
panda$collections$HashSet* $tmp1567 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp1567);
*(&local7) = ((panda$collections$HashSet*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1567));
panda$collections$HashSet* $tmp1568 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1568));
*(&local7) = $tmp1567;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1567));
// unreffing REF($415:panda.collections.HashSet<org.pandalanguage.pandac.Type>)
// line 672
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
org$pandalanguage$pandac$Type* $tmp1569 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1569));
*(&local8) = param0;
// line 673
org$pandalanguage$pandac$Type* $tmp1570 = *(&local4);
org$pandalanguage$pandac$ClassDecl* $tmp1571 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1570);
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
org$pandalanguage$pandac$ClassDecl* $tmp1572 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1572));
*(&local9) = $tmp1571;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
// unreffing REF($438:org.pandalanguage.pandac.ClassDecl?)
// line 674
goto block52;
block52:;
org$pandalanguage$pandac$ClassDecl* $tmp1573 = *(&local9);
panda$core$Bit $tmp1574 = panda$core$Bit$init$builtin_bit($tmp1573 != NULL);
bool $tmp1575 = $tmp1574.value;
if ($tmp1575) goto block53; else goto block54;
block53:;
// line 675
panda$collections$HashSet* $tmp1576 = *(&local7);
org$pandalanguage$pandac$Type* $tmp1577 = *(&local8);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp1576, ((panda$collections$Key*) $tmp1577));
// line 676
org$pandalanguage$pandac$ClassDecl* $tmp1578 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1579 = &$tmp1578->rawSuper;
org$pandalanguage$pandac$Type* $tmp1580 = *$tmp1579;
panda$core$Bit $tmp1581 = panda$core$Bit$init$builtin_bit($tmp1580 != NULL);
bool $tmp1582 = $tmp1581.value;
if ($tmp1582) goto block55; else goto block57;
block55:;
// line 677
org$pandalanguage$pandac$Type* $tmp1583 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1584 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1585 = &$tmp1584->rawSuper;
org$pandalanguage$pandac$Type* $tmp1586 = *$tmp1585;
org$pandalanguage$pandac$Type* $tmp1587 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp1583, $tmp1586);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1587));
org$pandalanguage$pandac$Type* $tmp1588 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1588));
*(&local8) = $tmp1587;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1587));
// unreffing REF($478:org.pandalanguage.pandac.Type)
// line 678
org$pandalanguage$pandac$Type* $tmp1589 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1590 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1589);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1590));
org$pandalanguage$pandac$ClassDecl* $tmp1591 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1591));
*(&local9) = $tmp1590;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1590));
// unreffing REF($490:org.pandalanguage.pandac.ClassDecl?)
goto block56;
block57:;
// line 1
// line 681
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp1592 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1592));
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block56;
block56:;
goto block52;
block54:;
// line 684
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Type* $tmp1593 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1593));
*(&local8) = param2;
// line 685
org$pandalanguage$pandac$Type* $tmp1594 = *(&local5);
org$pandalanguage$pandac$ClassDecl* $tmp1595 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1594);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1595));
org$pandalanguage$pandac$ClassDecl* $tmp1596 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1596));
*(&local9) = $tmp1595;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1595));
// unreffing REF($520:org.pandalanguage.pandac.ClassDecl?)
// line 686
goto block58;
block58:;
org$pandalanguage$pandac$ClassDecl* $tmp1597 = *(&local9);
panda$core$Bit $tmp1598 = panda$core$Bit$init$builtin_bit($tmp1597 != NULL);
bool $tmp1599 = $tmp1598.value;
if ($tmp1599) goto block59; else goto block60;
block59:;
// line 687
panda$collections$HashSet* $tmp1600 = *(&local7);
org$pandalanguage$pandac$Type* $tmp1601 = *(&local8);
panda$core$Bit $tmp1602 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp1600, ((panda$collections$Key*) $tmp1601));
bool $tmp1603 = $tmp1602.value;
if ($tmp1603) goto block61; else goto block62;
block61:;
// line 688
org$pandalanguage$pandac$Type* $tmp1604 = *(&local8);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1604));
org$pandalanguage$pandac$ClassDecl* $tmp1605 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1605));
// unreffing cl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp1606 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1606));
// unreffing t
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$HashSet* $tmp1607 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1607));
// unreffing ancestors
*(&local7) = ((panda$collections$HashSet*) NULL);
org$pandalanguage$pandac$Type* $tmp1608 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1608));
// unreffing t2
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1609 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1609));
// unreffing t1
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1604;
block62:;
// line 690
org$pandalanguage$pandac$ClassDecl* $tmp1610 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1611 = &$tmp1610->rawSuper;
org$pandalanguage$pandac$Type* $tmp1612 = *$tmp1611;
panda$core$Bit $tmp1613 = panda$core$Bit$init$builtin_bit($tmp1612 != NULL);
bool $tmp1614 = $tmp1613.value;
if ($tmp1614) goto block63; else goto block65;
block63:;
// line 691
org$pandalanguage$pandac$Type* $tmp1615 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1616 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1617 = &$tmp1616->rawSuper;
org$pandalanguage$pandac$Type* $tmp1618 = *$tmp1617;
org$pandalanguage$pandac$Type* $tmp1619 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp1615, $tmp1618);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1619));
org$pandalanguage$pandac$Type* $tmp1620 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1620));
*(&local8) = $tmp1619;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1619));
// unreffing REF($591:org.pandalanguage.pandac.Type)
// line 692
org$pandalanguage$pandac$Type* $tmp1621 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1622 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1621);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1622));
org$pandalanguage$pandac$ClassDecl* $tmp1623 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1623));
*(&local9) = $tmp1622;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1622));
// unreffing REF($603:org.pandalanguage.pandac.ClassDecl?)
goto block64;
block65:;
// line 1
// line 695
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp1624 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1624));
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block64;
block64:;
goto block58;
block60:;
org$pandalanguage$pandac$ClassDecl* $tmp1625 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1625));
// unreffing cl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp1626 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1626));
// unreffing t
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$HashSet* $tmp1627 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1627));
// unreffing ancestors
*(&local7) = ((panda$collections$HashSet*) NULL);
goto block48;
block48:;
// line 699
org$pandalanguage$pandac$Type* $tmp1628 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
// unreffing REF($641:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$Type* $tmp1629 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1629));
// unreffing t2
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1630 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1630));
// unreffing t1
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1628;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, panda$collections$HashMap* param1) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$core$Int64 local3;
panda$collections$Array* local4 = NULL;
panda$core$Int64 local5;
org$pandalanguage$pandac$Type$Kind* $tmp1631 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1632 = *$tmp1631;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1633;
$tmp1633 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1633->value = $tmp1632;
panda$core$Int64 $tmp1634 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Type$Kind $tmp1635 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1634);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1636;
$tmp1636 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1636->value = $tmp1635;
ITable* $tmp1637 = ((panda$core$Equatable*) $tmp1633)->$class->itable;
while ($tmp1637->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1637 = $tmp1637->next;
}
$fn1639 $tmp1638 = $tmp1637->methods[1];
panda$core$Bit $tmp1640 = $tmp1638(((panda$core$Equatable*) $tmp1633), ((panda$core$Equatable*) $tmp1636));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1636)));
// unreffing REF($6:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1633)));
// unreffing REF($2:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
bool $tmp1641 = $tmp1640.value;
if ($tmp1641) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp1642 = (panda$core$Int64) {704};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1643, $tmp1642, &$s1644);
abort(); // unreachable
block1:;
// line 705
ITable* $tmp1645 = ((panda$collections$MapView*) param1)->$class->itable;
while ($tmp1645->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp1645 = $tmp1645->next;
}
$fn1647 $tmp1646 = $tmp1645->methods[0];
panda$core$Int64 $tmp1648 = $tmp1646(((panda$collections$MapView*) param1));
panda$core$Int64 $tmp1649 = (panda$core$Int64) {0};
panda$core$Bit $tmp1650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1648, $tmp1649);
bool $tmp1651 = $tmp1650.value;
if ($tmp1651) goto block3; else goto block4;
block3:;
// line 706
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block4:;
// line 708
org$pandalanguage$pandac$Type$Kind* $tmp1652 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1653 = *$tmp1652;
panda$core$Int64 $tmp1654 = $tmp1653.$rawValue;
panda$core$Int64 $tmp1655 = (panda$core$Int64) {12};
panda$core$Bit $tmp1656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1654, $tmp1655);
bool $tmp1657 = $tmp1656.value;
if ($tmp1657) goto block6; else goto block7;
block6:;
// line 710
panda$core$String** $tmp1658 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1659 = *$tmp1658;
panda$core$Object* $tmp1660 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(param1, ((panda$collections$Key*) $tmp1659));
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1660)));
org$pandalanguage$pandac$Type* $tmp1661 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
*(&local0) = ((org$pandalanguage$pandac$Type*) $tmp1660);
panda$core$Panda$unref$panda$core$Object$Q($tmp1660);
// unreffing REF($46:panda.collections.HashMap.V?)
// line 711
org$pandalanguage$pandac$Type* $tmp1662 = *(&local0);
panda$core$Bit $tmp1663 = panda$core$Bit$init$builtin_bit($tmp1662 != NULL);
bool $tmp1664 = $tmp1663.value;
if ($tmp1664) goto block8; else goto block9;
block8:;
// line 712
org$pandalanguage$pandac$Type* $tmp1665 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1665));
org$pandalanguage$pandac$Type* $tmp1666 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1666));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1665;
block9:;
// line 714
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
org$pandalanguage$pandac$Type* $tmp1667 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1667));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return param0;
block7:;
panda$core$Int64 $tmp1668 = (panda$core$Int64) {11};
panda$core$Bit $tmp1669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1654, $tmp1668);
bool $tmp1670 = $tmp1669.value;
if ($tmp1670) goto block10; else goto block11;
block10:;
// line 717
panda$collections$ImmutableArray** $tmp1671 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1672 = *$tmp1671;
panda$core$Int64 $tmp1673 = (panda$core$Int64) {0};
panda$core$Object* $tmp1674 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1672, $tmp1673);
org$pandalanguage$pandac$Type* $tmp1675 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1674), param1);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1675));
org$pandalanguage$pandac$Type* $tmp1676 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1676));
*(&local1) = $tmp1675;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1675));
// unreffing REF($96:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1674);
// unreffing REF($94:panda.collections.ImmutableArray.T)
// line 718
panda$collections$Array* $tmp1677 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1677);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1677));
panda$collections$Array* $tmp1678 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1678));
*(&local2) = $tmp1677;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1677));
// unreffing REF($111:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 719
panda$core$Int64 $tmp1679 = (panda$core$Int64) {1};
panda$collections$ImmutableArray** $tmp1680 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1681 = *$tmp1680;
ITable* $tmp1682 = ((panda$collections$CollectionView*) $tmp1681)->$class->itable;
while ($tmp1682->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1682 = $tmp1682->next;
}
$fn1684 $tmp1683 = $tmp1682->methods[0];
panda$core$Int64 $tmp1685 = $tmp1683(((panda$collections$CollectionView*) $tmp1681));
panda$core$Bit $tmp1686 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1687 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1679, $tmp1685, $tmp1686);
panda$core$Int64 $tmp1688 = $tmp1687.min;
*(&local3) = $tmp1688;
panda$core$Int64 $tmp1689 = $tmp1687.max;
panda$core$Bit $tmp1690 = $tmp1687.inclusive;
bool $tmp1691 = $tmp1690.value;
panda$core$Int64 $tmp1692 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1693 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1692);
if ($tmp1691) goto block15; else goto block16;
block15:;
int64_t $tmp1694 = $tmp1688.value;
int64_t $tmp1695 = $tmp1689.value;
bool $tmp1696 = $tmp1694 <= $tmp1695;
panda$core$Bit $tmp1697 = (panda$core$Bit) {$tmp1696};
bool $tmp1698 = $tmp1697.value;
if ($tmp1698) goto block12; else goto block13;
block16:;
int64_t $tmp1699 = $tmp1688.value;
int64_t $tmp1700 = $tmp1689.value;
bool $tmp1701 = $tmp1699 < $tmp1700;
panda$core$Bit $tmp1702 = (panda$core$Bit) {$tmp1701};
bool $tmp1703 = $tmp1702.value;
if ($tmp1703) goto block12; else goto block13;
block12:;
// line 720
panda$collections$Array* $tmp1704 = *(&local2);
panda$collections$ImmutableArray** $tmp1705 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1706 = *$tmp1705;
panda$core$Int64 $tmp1707 = *(&local3);
panda$core$Object* $tmp1708 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1706, $tmp1707);
org$pandalanguage$pandac$Type* $tmp1709 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1708), param1);
panda$collections$Array$add$panda$collections$Array$T($tmp1704, ((panda$core$Object*) $tmp1709));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1709));
// unreffing REF($163:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1708);
// unreffing REF($161:panda.collections.ImmutableArray.T)
goto block14;
block14:;
panda$core$Int64 $tmp1710 = *(&local3);
int64_t $tmp1711 = $tmp1689.value;
int64_t $tmp1712 = $tmp1710.value;
int64_t $tmp1713 = $tmp1711 - $tmp1712;
panda$core$Int64 $tmp1714 = (panda$core$Int64) {$tmp1713};
panda$core$UInt64 $tmp1715 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1714);
if ($tmp1691) goto block18; else goto block19;
block18:;
uint64_t $tmp1716 = $tmp1715.value;
uint64_t $tmp1717 = $tmp1693.value;
bool $tmp1718 = $tmp1716 >= $tmp1717;
panda$core$Bit $tmp1719 = (panda$core$Bit) {$tmp1718};
bool $tmp1720 = $tmp1719.value;
if ($tmp1720) goto block17; else goto block13;
block19:;
uint64_t $tmp1721 = $tmp1715.value;
uint64_t $tmp1722 = $tmp1693.value;
bool $tmp1723 = $tmp1721 > $tmp1722;
panda$core$Bit $tmp1724 = (panda$core$Bit) {$tmp1723};
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block17; else goto block13;
block17:;
int64_t $tmp1726 = $tmp1710.value;
int64_t $tmp1727 = $tmp1692.value;
int64_t $tmp1728 = $tmp1726 + $tmp1727;
panda$core$Int64 $tmp1729 = (panda$core$Int64) {$tmp1728};
*(&local3) = $tmp1729;
goto block12;
block13:;
// line 722
org$pandalanguage$pandac$Type* $tmp1730 = *(&local1);
panda$collections$Array* $tmp1731 = *(&local2);
org$pandalanguage$pandac$Type* $tmp1732 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp1730, ((panda$collections$ListView*) $tmp1731));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1732));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1732));
// unreffing REF($202:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp1733 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1733));
// unreffing remappedArgs
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp1734 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1734));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1732;
block11:;
panda$core$Int64 $tmp1735 = (panda$core$Int64) {1};
panda$core$Bit $tmp1736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1654, $tmp1735);
bool $tmp1737 = $tmp1736.value;
if ($tmp1737) goto block20; else goto block21;
block20:;
// line 725
panda$collections$ImmutableArray** $tmp1738 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1739 = *$tmp1738;
panda$core$Int64 $tmp1740 = (panda$core$Int64) {0};
panda$core$Object* $tmp1741 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1739, $tmp1740);
org$pandalanguage$pandac$Type* $tmp1742 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1741), param1);
org$pandalanguage$pandac$Type* $tmp1743 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1742);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1743));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1743));
// unreffing REF($232:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1742));
// unreffing REF($231:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1741);
// unreffing REF($229:panda.collections.ImmutableArray.T)
return $tmp1743;
block21:;
panda$core$Int64 $tmp1744 = (panda$core$Int64) {15};
panda$core$Bit $tmp1745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1654, $tmp1744);
bool $tmp1746 = $tmp1745.value;
if ($tmp1746) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp1747 = (panda$core$Int64) {14};
panda$core$Bit $tmp1748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1654, $tmp1747);
bool $tmp1749 = $tmp1748.value;
if ($tmp1749) goto block22; else goto block24;
block24:;
panda$core$Int64 $tmp1750 = (panda$core$Int64) {17};
panda$core$Bit $tmp1751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1654, $tmp1750);
bool $tmp1752 = $tmp1751.value;
if ($tmp1752) goto block22; else goto block25;
block25:;
panda$core$Int64 $tmp1753 = (panda$core$Int64) {16};
panda$core$Bit $tmp1754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1654, $tmp1753);
bool $tmp1755 = $tmp1754.value;
if ($tmp1755) goto block22; else goto block26;
block22:;
// line 728
panda$collections$Array* $tmp1756 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1756);
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1756));
panda$collections$Array* $tmp1757 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1757));
*(&local4) = $tmp1756;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1756));
// unreffing REF($262:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 729
panda$collections$ImmutableArray** $tmp1758 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1759 = *$tmp1758;
ITable* $tmp1760 = ((panda$collections$CollectionView*) $tmp1759)->$class->itable;
while ($tmp1760->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1760 = $tmp1760->next;
}
$fn1762 $tmp1761 = $tmp1760->methods[0];
panda$core$Int64 $tmp1763 = $tmp1761(((panda$collections$CollectionView*) $tmp1759));
panda$core$Int64 $tmp1764 = (panda$core$Int64) {1};
int64_t $tmp1765 = $tmp1763.value;
int64_t $tmp1766 = $tmp1764.value;
bool $tmp1767 = $tmp1765 >= $tmp1766;
panda$core$Bit $tmp1768 = (panda$core$Bit) {$tmp1767};
bool $tmp1769 = $tmp1768.value;
if ($tmp1769) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp1770 = (panda$core$Int64) {729};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1771, $tmp1770);
abort(); // unreachable
block27:;
// line 730
panda$core$Int64 $tmp1772 = (panda$core$Int64) {0};
panda$collections$ImmutableArray** $tmp1773 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1774 = *$tmp1773;
ITable* $tmp1775 = ((panda$collections$CollectionView*) $tmp1774)->$class->itable;
while ($tmp1775->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1775 = $tmp1775->next;
}
$fn1777 $tmp1776 = $tmp1775->methods[0];
panda$core$Int64 $tmp1778 = $tmp1776(((panda$collections$CollectionView*) $tmp1774));
panda$core$Int64 $tmp1779 = (panda$core$Int64) {1};
int64_t $tmp1780 = $tmp1778.value;
int64_t $tmp1781 = $tmp1779.value;
int64_t $tmp1782 = $tmp1780 - $tmp1781;
panda$core$Int64 $tmp1783 = (panda$core$Int64) {$tmp1782};
panda$core$Bit $tmp1784 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1785 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1772, $tmp1783, $tmp1784);
panda$core$Int64 $tmp1786 = $tmp1785.min;
*(&local5) = $tmp1786;
panda$core$Int64 $tmp1787 = $tmp1785.max;
panda$core$Bit $tmp1788 = $tmp1785.inclusive;
bool $tmp1789 = $tmp1788.value;
panda$core$Int64 $tmp1790 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1791 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1790);
if ($tmp1789) goto block32; else goto block33;
block32:;
int64_t $tmp1792 = $tmp1786.value;
int64_t $tmp1793 = $tmp1787.value;
bool $tmp1794 = $tmp1792 <= $tmp1793;
panda$core$Bit $tmp1795 = (panda$core$Bit) {$tmp1794};
bool $tmp1796 = $tmp1795.value;
if ($tmp1796) goto block29; else goto block30;
block33:;
int64_t $tmp1797 = $tmp1786.value;
int64_t $tmp1798 = $tmp1787.value;
bool $tmp1799 = $tmp1797 < $tmp1798;
panda$core$Bit $tmp1800 = (panda$core$Bit) {$tmp1799};
bool $tmp1801 = $tmp1800.value;
if ($tmp1801) goto block29; else goto block30;
block29:;
// line 731
panda$collections$Array* $tmp1802 = *(&local4);
panda$collections$ImmutableArray** $tmp1803 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1804 = *$tmp1803;
panda$core$Int64 $tmp1805 = *(&local5);
panda$core$Object* $tmp1806 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1804, $tmp1805);
org$pandalanguage$pandac$Type* $tmp1807 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1806), param1);
panda$collections$Array$add$panda$collections$Array$T($tmp1802, ((panda$core$Object*) $tmp1807));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1807));
// unreffing REF($335:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1806);
// unreffing REF($333:panda.collections.ImmutableArray.T)
goto block31;
block31:;
panda$core$Int64 $tmp1808 = *(&local5);
int64_t $tmp1809 = $tmp1787.value;
int64_t $tmp1810 = $tmp1808.value;
int64_t $tmp1811 = $tmp1809 - $tmp1810;
panda$core$Int64 $tmp1812 = (panda$core$Int64) {$tmp1811};
panda$core$UInt64 $tmp1813 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1812);
if ($tmp1789) goto block35; else goto block36;
block35:;
uint64_t $tmp1814 = $tmp1813.value;
uint64_t $tmp1815 = $tmp1791.value;
bool $tmp1816 = $tmp1814 >= $tmp1815;
panda$core$Bit $tmp1817 = (panda$core$Bit) {$tmp1816};
bool $tmp1818 = $tmp1817.value;
if ($tmp1818) goto block34; else goto block30;
block36:;
uint64_t $tmp1819 = $tmp1813.value;
uint64_t $tmp1820 = $tmp1791.value;
bool $tmp1821 = $tmp1819 > $tmp1820;
panda$core$Bit $tmp1822 = (panda$core$Bit) {$tmp1821};
bool $tmp1823 = $tmp1822.value;
if ($tmp1823) goto block34; else goto block30;
block34:;
int64_t $tmp1824 = $tmp1808.value;
int64_t $tmp1825 = $tmp1790.value;
int64_t $tmp1826 = $tmp1824 + $tmp1825;
panda$core$Int64 $tmp1827 = (panda$core$Int64) {$tmp1826};
*(&local5) = $tmp1827;
goto block29;
block30:;
// line 733
org$pandalanguage$pandac$Position* $tmp1828 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp1829 = *$tmp1828;
org$pandalanguage$pandac$Type$Kind* $tmp1830 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1831 = *$tmp1830;
panda$collections$Array* $tmp1832 = *(&local4);
panda$collections$ImmutableArray** $tmp1833 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1834 = *$tmp1833;
panda$collections$ImmutableArray** $tmp1835 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1836 = *$tmp1835;
ITable* $tmp1837 = ((panda$collections$CollectionView*) $tmp1836)->$class->itable;
while ($tmp1837->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1837 = $tmp1837->next;
}
$fn1839 $tmp1838 = $tmp1837->methods[0];
panda$core$Int64 $tmp1840 = $tmp1838(((panda$collections$CollectionView*) $tmp1836));
panda$core$Int64 $tmp1841 = (panda$core$Int64) {1};
int64_t $tmp1842 = $tmp1840.value;
int64_t $tmp1843 = $tmp1841.value;
int64_t $tmp1844 = $tmp1842 - $tmp1843;
panda$core$Int64 $tmp1845 = (panda$core$Int64) {$tmp1844};
panda$core$Object* $tmp1846 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1834, $tmp1845);
org$pandalanguage$pandac$Type* $tmp1847 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1846), param1);
panda$core$Int64* $tmp1848 = &param0->priority;
panda$core$Int64 $tmp1849 = *$tmp1848;
org$pandalanguage$pandac$Type* $tmp1850 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp1829, $tmp1831, ((panda$collections$ListView*) $tmp1832), $tmp1847, $tmp1849);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1850));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1850));
// unreffing REF($397:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1847));
// unreffing REF($394:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1846);
// unreffing REF($392:panda.collections.ImmutableArray.T)
panda$collections$Array* $tmp1851 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1851));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
return $tmp1850;
block26:;
// line 737
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block5:;
panda$core$Bit $tmp1852 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1853 = $tmp1852.value;
if ($tmp1853) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp1854 = (panda$core$Int64) {704};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1855, $tmp1854, &$s1856);
abort(); // unreachable
block37:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$pandac$Type$get_hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* param0) {

// line 744
panda$core$String** $tmp1857 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1858 = *$tmp1857;
ITable* $tmp1859 = ((panda$collections$Key*) $tmp1858)->$class->itable;
while ($tmp1859->$class != (panda$core$Class*) &panda$collections$Key$class) {
    $tmp1859 = $tmp1859->next;
}
$fn1861 $tmp1860 = $tmp1859->methods[0];
panda$core$Int64 $tmp1862 = $tmp1860(((panda$collections$Key*) $tmp1858));
return $tmp1862;

}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* param0) {

// line 749
panda$core$String** $tmp1863 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1864 = *$tmp1863;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1864));
return $tmp1864;

}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* param0) {

// line 4
org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) param0));
panda$collections$ImmutableArray** $tmp1865 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1866 = *$tmp1865;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1866));
panda$core$Weak** $tmp1867 = &param0->genericParameter;
panda$core$Weak* $tmp1868 = *$tmp1867;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1868));
return;

}

