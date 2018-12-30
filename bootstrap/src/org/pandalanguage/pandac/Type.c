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
typedef panda$core$Bit (*$fn942)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn954)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn965)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn976)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn988)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1000)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1015)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1073)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1125)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1135)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1161)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1176)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1187)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1199)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1211)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1222)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1237)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1248)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1260)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1272)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1287)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1314)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1325)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1337)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1349)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1362)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1383)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1398)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1410)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1426)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1440)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1451)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1474)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1485)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1506)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1523)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1615)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1623)(panda$collections$MapView*);
typedef panda$core$Int64 (*$fn1660)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1738)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1753)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1815)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1837)(panda$collections$Key*);

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
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
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
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s1006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s1021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s1063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x69\x73\x43\x6c\x61\x73\x73\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 92, -6465324935451040327, NULL };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x69\x73\x4d\x65\x74\x68\x6f\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 93, 7566891704899688644, NULL };
static panda$core$String $s1108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -1766462943154097753, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, 916331035999347368, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 101, 8536794682809672847, NULL };
static panda$core$String $s1301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 127, -3361594779411923433, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 110, -5923730647398865852, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 180, -8366325379630919520, NULL };
static panda$core$String $s1747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 180, -2602239416666791808, NULL };

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
panda$core$Weak** $tmp4 = &param0->genericParameter;
panda$core$Weak* $tmp5 = *$tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Weak** $tmp6 = &param0->genericParameter;
*$tmp6 = $tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp7)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp10)));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp16)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp19)));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp26)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp29)));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp36)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp39)));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp46)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp49)));
*(&local0) = $tmp53;
goto block12;
block11:;
*(&local0) = $tmp44;
goto block12;
block12:;
panda$core$Bit $tmp54 = *(&local0);
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
panda$collections$ImmutableArray** $tmp62 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp63 = *$tmp62;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
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
panda$core$Weak** $tmp68 = &param0->genericParameter;
panda$core$Weak* $tmp69 = *$tmp68;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$core$Weak** $tmp70 = &param0->genericParameter;
*$tmp70 = $tmp67;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp71)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp74)));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp80)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp83)));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp90)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp93)));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp100)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp103)));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp110)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp113)));
*(&local0) = $tmp117;
goto block12;
block11:;
*(&local0) = $tmp108;
goto block12;
block12:;
panda$core$Bit $tmp118 = *(&local0);
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
panda$collections$ImmutableArray** $tmp134 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp135 = *$tmp134;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
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
panda$core$Weak** $tmp143 = &param0->genericParameter;
panda$core$Weak* $tmp144 = *$tmp143;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
panda$core$Weak** $tmp145 = &param0->genericParameter;
*$tmp145 = $tmp142;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp146)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp149)));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp175)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp178)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
abort(); // unreachable
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp158)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp161)));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp205)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp208)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
abort(); // unreachable
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp188)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp191)));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp218)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp221)));
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
panda$collections$ImmutableArray** $tmp234 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp235 = *$tmp234;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
panda$collections$ImmutableArray** $tmp236 = &param0->subtypes;
*$tmp236 = $tmp233;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
// line 113
panda$core$Int64 $tmp237 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Symbol$Kind $tmp238 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp237);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp238, param3, param1);
// line 114
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
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
panda$core$Weak** $tmp240 = &param0->genericParameter;
panda$core$Weak* $tmp241 = *$tmp240;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
panda$core$Weak** $tmp242 = &param0->genericParameter;
*$tmp242 = $tmp239;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// line 118
panda$core$Int64 $tmp243 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Type$Kind $tmp244 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp243);
org$pandalanguage$pandac$Type$Kind* $tmp245 = &param0->typeKind;
*$tmp245 = $tmp244;
// line 119
panda$collections$ImmutableArray* $tmp246 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp246, param1);
panda$collections$ImmutableArray** $tmp247 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp248 = *$tmp247;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
panda$collections$ImmutableArray** $tmp249 = &param0->subtypes;
*$tmp249 = $tmp246;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
// line 120
panda$core$MutableString* $tmp250 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp250, &$s251);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp252 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
*(&local0) = $tmp250;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
// line 121
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp253 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s254));
*(&local1) = &$s255;
// line 122
panda$core$Bit $tmp256 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp257 = &param0->resolved;
*$tmp257 = $tmp256;
// line 123
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
org$pandalanguage$pandac$Type* $tmp271 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp270)));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp270);
// line 124
panda$core$MutableString* $tmp272 = *(&local0);
panda$core$String* $tmp273 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp272, $tmp273);
// line 125
panda$core$MutableString* $tmp274 = *(&local0);
org$pandalanguage$pandac$Type* $tmp275 = *(&local2);
panda$core$MutableString$append$panda$core$Object($tmp274, ((panda$core$Object*) $tmp275));
// line 126
panda$core$String* $tmp276 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp276));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s277));
*(&local1) = &$s278;
// line 127
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
org$pandalanguage$pandac$Type* $tmp287 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
// line 129
panda$core$MutableString* $tmp288 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp288, &$s289);
// line 130
panda$core$Int64 $tmp290 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Symbol$Kind $tmp291 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp290);
org$pandalanguage$pandac$Position* $tmp292 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp293 = *$tmp292;
panda$core$MutableString* $tmp294 = *(&local0);
panda$core$String* $tmp295 = panda$core$MutableString$finish$R$panda$core$String($tmp294);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp291, $tmp293, $tmp295);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
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
panda$core$Weak** $tmp299 = &param0->genericParameter;
panda$core$Weak* $tmp300 = *$tmp299;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
panda$core$Weak** $tmp301 = &param0->genericParameter;
*$tmp301 = $tmp298;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
// line 134
panda$core$Int64 $tmp302 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp303 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp302);
org$pandalanguage$pandac$Type$Kind* $tmp304 = &param0->typeKind;
*$tmp304 = $tmp303;
// line 135
panda$core$Weak* $tmp305 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp305, ((panda$core$Object*) param1));
panda$core$Weak** $tmp306 = &param0->genericParameter;
panda$core$Weak* $tmp307 = *$tmp306;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
panda$core$Weak** $tmp308 = &param0->genericParameter;
*$tmp308 = $tmp305;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// line 136
panda$core$Bit $tmp309 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp310 = &param0->resolved;
*$tmp310 = $tmp309;
// line 137
panda$collections$ImmutableArray** $tmp311 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp312 = *$tmp311;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
panda$collections$ImmutableArray** $tmp313 = &param0->subtypes;
*$tmp313 = ((panda$collections$ImmutableArray*) NULL);
// line 138
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
return;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, panda$collections$ListView* param1) {

panda$core$Bit local0;
panda$core$MutableString* local1 = NULL;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$Type* local3 = NULL;
panda$core$Bit local4;
panda$collections$Array* local5 = NULL;
// line 143
panda$core$Bit* $tmp328 = &param0->resolved;
panda$core$Bit $tmp329 = *$tmp328;
*(&local0) = $tmp329;
// line 144
panda$core$MutableString* $tmp330 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp330);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp331 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
*(&local1) = $tmp330;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
// line 145
panda$core$MutableString* $tmp332 = *(&local1);
panda$core$String** $tmp333 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp334 = *$tmp333;
panda$core$MutableString$append$panda$core$String($tmp332, $tmp334);
// line 146
panda$core$MutableString* $tmp335 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp335, &$s336);
// line 147
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp337 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s338));
*(&local2) = &$s339;
// line 148
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
org$pandalanguage$pandac$Type* $tmp353 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp352)));
*(&local3) = ((org$pandalanguage$pandac$Type*) $tmp352);
// line 149
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
// line 150
panda$core$MutableString* $tmp360 = *(&local1);
panda$core$String* $tmp361 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp360, $tmp361);
// line 151
panda$core$MutableString* $tmp362 = *(&local1);
org$pandalanguage$pandac$Type* $tmp363 = *(&local3);
panda$core$String** $tmp364 = &((org$pandalanguage$pandac$Symbol*) $tmp363)->name;
panda$core$String* $tmp365 = *$tmp364;
panda$core$MutableString$append$panda$core$String($tmp362, $tmp365);
// line 152
panda$core$String* $tmp366 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s367));
*(&local2) = &$s368;
panda$core$Panda$unref$panda$core$Object$Q($tmp352);
org$pandalanguage$pandac$Type* $tmp369 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
// unreffing a
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
// line 154
panda$core$MutableString* $tmp370 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp370, &$s371);
// line 155
panda$collections$Array* $tmp372 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp372);
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp373 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
*(&local5) = $tmp372;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
// line 156
panda$collections$Array* $tmp374 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp374, ((panda$core$Object*) param0));
// line 157
panda$collections$Array* $tmp375 = *(&local5);
panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp375, ((panda$collections$CollectionView*) param1));
// line 158
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
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
// line 164
panda$core$Bit* $tmp388 = &param3->resolved;
panda$core$Bit $tmp389 = *$tmp388;
*(&local0) = $tmp389;
// line 165
panda$core$MutableString* $tmp390 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp390, &$s391);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp392 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
*(&local1) = $tmp390;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
// line 166
panda$collections$Array* $tmp393 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp393);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp394 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
*(&local2) = $tmp393;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
// line 167
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp395 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s396));
*(&local3) = &$s397;
// line 168
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
org$pandalanguage$pandac$Type* $tmp411 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp410)));
*(&local4) = ((org$pandalanguage$pandac$Type*) $tmp410);
// line 169
panda$collections$Array* $tmp412 = *(&local2);
org$pandalanguage$pandac$Type* $tmp413 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp412, ((panda$core$Object*) $tmp413));
// line 170
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
// line 171
panda$core$MutableString* $tmp420 = *(&local1);
panda$core$String* $tmp421 = *(&local3);
panda$core$MutableString$append$panda$core$String($tmp420, $tmp421);
// line 172
panda$core$MutableString* $tmp422 = *(&local1);
org$pandalanguage$pandac$Type* $tmp423 = *(&local4);
panda$core$String** $tmp424 = &((org$pandalanguage$pandac$Symbol*) $tmp423)->name;
panda$core$String* $tmp425 = *$tmp424;
panda$core$MutableString$append$panda$core$String($tmp422, $tmp425);
// line 173
panda$core$String* $tmp426 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s427));
*(&local3) = &$s428;
panda$core$Panda$unref$panda$core$Object$Q($tmp410);
org$pandalanguage$pandac$Type* $tmp429 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
// unreffing p
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// line 175
panda$core$Int64 $tmp430 = param1.$rawValue;
panda$core$Int64 $tmp431 = (panda$core$Int64) {14};
panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp430, $tmp431);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block8; else goto block9;
block8:;
// line 177
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
// line 181
panda$core$MutableString* $tmp444 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp444, &$s445);
goto block7;
block13:;
panda$core$Int64 $tmp446 = (panda$core$Int64) {17};
panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp430, $tmp446);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block14; else goto block15;
block14:;
// line 183
panda$core$MutableString* $tmp449 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp449, &$s450);
goto block7;
block15:;
// line 185
panda$core$Bit $tmp451 = panda$core$Bit$init$builtin_bit(false);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp453 = (panda$core$Int64) {185};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s454, $tmp453);
abort(); // unreachable
block16:;
goto block7;
block7:;
// line 187
panda$collections$Array* $tmp455 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp455, ((panda$core$Object*) param3));
// line 188
org$pandalanguage$pandac$Type* $tmp456 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp457 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp457->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp457 = $tmp457->next;
}
$fn459 $tmp458 = $tmp457->methods[1];
panda$core$Bit $tmp460 = $tmp458(((panda$core$Equatable*) param3), ((panda$core$Equatable*) $tmp456));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block18; else goto block19;
block18:;
// line 189
panda$core$MutableString* $tmp462 = *(&local1);
panda$core$String** $tmp463 = &((org$pandalanguage$pandac$Symbol*) param3)->name;
panda$core$String* $tmp464 = *$tmp463;
panda$core$MutableString$append$panda$core$String($tmp462, $tmp464);
goto block19;
block19:;
// line 191
panda$core$MutableString* $tmp465 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp465, &$s466);
// line 192
org$pandalanguage$pandac$Type* $tmp467 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$MutableString* $tmp468 = *(&local1);
panda$core$String* $tmp469 = panda$core$MutableString$finish$R$panda$core$String($tmp468);
panda$collections$Array* $tmp470 = *(&local2);
panda$collections$ImmutableArray* $tmp471 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp470);
panda$core$Bit $tmp472 = *(&local0);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit$panda$core$Int64($tmp467, $tmp469, param1, param0, ((panda$collections$ListView*) $tmp471), $tmp472, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp471));
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
// line 196
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp478)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp481)));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp489)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp492)));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp501)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp504)));
*(&local0) = $tmp508;
goto block6;
block6:;
panda$core$Bit $tmp509 = *(&local0);
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp511 = (panda$core$Int64) {196};
panda$core$String* $tmp512 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s513, ((panda$core$Object*) param0));
panda$core$String* $tmp514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp512, &$s515);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s516, $tmp511, $tmp514);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
abort(); // unreachable
block7:;
// line 198
org$pandalanguage$pandac$Position* $tmp517 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp518 = *$tmp517;
panda$core$Int64 $tmp519 = $tmp518.line;
return $tmp519;

}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$Type* param1) {

panda$core$Bit local0;
// line 208
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp528)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp531)));
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

// line 213
org$pandalanguage$pandac$Type* $tmp537 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp538 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Type$Kind $tmp539 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp538);
org$pandalanguage$pandac$Position $tmp540 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp541 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp537, &$s542, $tmp539, $tmp540, $tmp541);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
return $tmp537;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {

// line 218
org$pandalanguage$pandac$Type* $tmp543 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp544 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp545 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp544);
org$pandalanguage$pandac$Position $tmp546 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp547 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp543, &$s548, $tmp545, $tmp546, $tmp547);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
return $tmp543;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {

// line 223
org$pandalanguage$pandac$Type* $tmp549 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp550 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp551 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp550);
org$pandalanguage$pandac$Position $tmp552 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp553 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp549, &$s554, $tmp551, $tmp552, $tmp553);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
return $tmp549;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {

panda$collections$Array* local0 = NULL;
// line 228
panda$collections$Array* $tmp555 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp555);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp556 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
*(&local0) = $tmp555;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
// line 229
panda$collections$Array* $tmp557 = *(&local0);
org$pandalanguage$pandac$Type* $tmp558 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp557, ((panda$core$Object*) $tmp558));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp558));
// line 230
org$pandalanguage$pandac$Type* $tmp559 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp560 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp561 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp560);
org$pandalanguage$pandac$Position $tmp562 = org$pandalanguage$pandac$Position$init();
panda$collections$Array* $tmp563 = *(&local0);
panda$core$Bit $tmp564 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp559, &$s565, $tmp561, $tmp562, ((panda$collections$ListView*) $tmp563), $tmp564);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
panda$collections$Array* $tmp566 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
// unreffing subtypes
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp559;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {

// line 235
org$pandalanguage$pandac$Type* $tmp567 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp568 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp569 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp568);
org$pandalanguage$pandac$Position $tmp570 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp571 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp567, &$s572, $tmp569, $tmp570, $tmp571);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
return $tmp567;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type() {

// line 240
org$pandalanguage$pandac$Type* $tmp573 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp574 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp575 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp574);
org$pandalanguage$pandac$Position $tmp576 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp577 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp573, &$s578, $tmp575, $tmp576, $tmp577);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
return $tmp573;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {

// line 245
org$pandalanguage$pandac$Type* $tmp579 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp580 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp581 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp580);
org$pandalanguage$pandac$Position $tmp582 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp583 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp579, &$s584, $tmp581, $tmp582, $tmp583);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
return $tmp579;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {

// line 250
org$pandalanguage$pandac$Type* $tmp585 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp586 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp587 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp586);
org$pandalanguage$pandac$Position $tmp588 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp589 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp585, &$s590, $tmp587, $tmp588, $tmp589);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
return $tmp585;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RegularExpression$R$org$pandalanguage$pandac$Type() {

// line 255
org$pandalanguage$pandac$Type* $tmp591 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp592 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp593 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp592);
org$pandalanguage$pandac$Position $tmp594 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp595 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp591, &$s596, $tmp593, $tmp594, $tmp595);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
return $tmp591;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {

// line 260
org$pandalanguage$pandac$Type* $tmp597 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp598 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp599 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp598);
panda$core$Int64 $tmp600 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp597, &$s601, $tmp599, $tmp600);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
return $tmp597;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {

// line 265
org$pandalanguage$pandac$Type* $tmp602 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp603 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp604 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp603);
panda$core$Int64 $tmp605 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp602, &$s606, $tmp604, $tmp605);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
return $tmp602;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {

// line 270
org$pandalanguage$pandac$Type* $tmp607 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp608 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp609 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp608);
panda$core$Int64 $tmp610 = (panda$core$Int64) {32};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp607, &$s611, $tmp609, $tmp610);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
return $tmp607;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {

// line 275
org$pandalanguage$pandac$Type* $tmp612 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp613 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp614 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp613);
panda$core$Int64 $tmp615 = (panda$core$Int64) {64};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp612, &$s616, $tmp614, $tmp615);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
return $tmp612;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {

// line 280
org$pandalanguage$pandac$Type* $tmp617 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp618 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp619 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp618);
panda$core$Int64 $tmp620 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp617, &$s621, $tmp619, $tmp620);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
return $tmp617;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {

// line 285
org$pandalanguage$pandac$Type* $tmp622 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp623 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp624 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp623);
panda$core$Int64 $tmp625 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp622, &$s626, $tmp624, $tmp625);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
return $tmp622;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {

// line 290
org$pandalanguage$pandac$Type* $tmp627 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp628 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp629 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp628);
panda$core$Int64 $tmp630 = (panda$core$Int64) {32};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp627, &$s631, $tmp629, $tmp630);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
return $tmp627;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {

// line 295
org$pandalanguage$pandac$Type* $tmp632 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp633 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp634 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp633);
panda$core$Int64 $tmp635 = (panda$core$Int64) {64};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp632, &$s636, $tmp634, $tmp635);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
return $tmp632;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {

// line 300
org$pandalanguage$pandac$Type* $tmp637 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp638 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp639 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp638);
panda$core$Int64 $tmp640 = (panda$core$Int64) {32};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp637, &$s641, $tmp639, $tmp640);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
return $tmp637;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {

// line 305
org$pandalanguage$pandac$Type* $tmp642 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp643 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp644 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp643);
panda$core$Int64 $tmp645 = (panda$core$Int64) {64};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp642, &$s646, $tmp644, $tmp645);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
return $tmp642;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {

// line 310
org$pandalanguage$pandac$Type* $tmp647 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp648 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp649 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp648);
org$pandalanguage$pandac$Position $tmp650 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp651 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp647, &$s652, $tmp649, $tmp650, $tmp651);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
return $tmp647;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {

// line 315
org$pandalanguage$pandac$Type* $tmp653 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp654 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp655 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp654);
org$pandalanguage$pandac$Position $tmp656 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp657 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp653, &$s658, $tmp655, $tmp656, $tmp657);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
return $tmp653;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {

// line 320
org$pandalanguage$pandac$Type* $tmp659 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp660 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp661 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp660);
org$pandalanguage$pandac$Position $tmp662 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp663 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp659, &$s664, $tmp661, $tmp662, $tmp663);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
return $tmp659;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {

// line 325
org$pandalanguage$pandac$Type* $tmp665 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp666 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp667 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp666);
org$pandalanguage$pandac$Position $tmp668 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp669 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp665, &$s670, $tmp667, $tmp668, $tmp669);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
return $tmp665;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {

// line 330
org$pandalanguage$pandac$Type* $tmp671 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp672 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp673 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp672);
org$pandalanguage$pandac$Position $tmp674 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp675 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp671, &$s676, $tmp673, $tmp674, $tmp675);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
return $tmp671;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {

// line 335
org$pandalanguage$pandac$Type* $tmp677 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp678 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp679 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp678);
org$pandalanguage$pandac$Position $tmp680 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp681 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp677, &$s682, $tmp679, $tmp680, $tmp681);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
return $tmp677;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {

// line 340
org$pandalanguage$pandac$Type* $tmp683 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp684 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp685 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp684);
org$pandalanguage$pandac$Position $tmp686 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp687 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp683, &$s688, $tmp685, $tmp686, $tmp687);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp683));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp683));
return $tmp683;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {

// line 345
org$pandalanguage$pandac$Type* $tmp689 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp690 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp691 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp690);
org$pandalanguage$pandac$Position $tmp692 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp693 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp689, &$s694, $tmp691, $tmp692, $tmp693);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp689));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp689));
return $tmp689;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {

// line 350
org$pandalanguage$pandac$Type* $tmp695 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp696 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp697 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp696);
org$pandalanguage$pandac$Position $tmp698 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp699 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp695, &$s700, $tmp697, $tmp698, $tmp699);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
return $tmp695;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {

// line 355
org$pandalanguage$pandac$Type* $tmp701 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp702 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp703 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp702);
org$pandalanguage$pandac$Position $tmp704 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp705 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp701, &$s706, $tmp703, $tmp704, $tmp705);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
return $tmp701;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {

// line 360
org$pandalanguage$pandac$Type* $tmp707 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp708 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp709 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp708);
org$pandalanguage$pandac$Position $tmp710 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp711 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp707, &$s712, $tmp709, $tmp710, $tmp711);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
return $tmp707;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {

// line 365
org$pandalanguage$pandac$Type* $tmp713 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp714 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp715 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp714);
org$pandalanguage$pandac$Position $tmp716 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp717 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp713, &$s718, $tmp715, $tmp716, $tmp717);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
return $tmp713;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {

// line 370
org$pandalanguage$pandac$Type* $tmp719 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp720 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp721 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp720);
org$pandalanguage$pandac$Position $tmp722 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp723 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp719, &$s724, $tmp721, $tmp722, $tmp723);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
return $tmp719;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {

// line 375
org$pandalanguage$pandac$Type* $tmp725 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp726 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp727 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp726);
org$pandalanguage$pandac$Position $tmp728 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp729 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp725, &$s730, $tmp727, $tmp728, $tmp729);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
return $tmp725;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 param0) {

// line 380
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp732));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp733));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp735));
return $tmp731;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 param0) {

// line 385
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp741));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp742));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp743));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
return $tmp741;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 param0) {

// line 390
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp751));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp752));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp755));
return $tmp751;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {

// line 395
org$pandalanguage$pandac$Type* $tmp761 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp762 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Type$Kind $tmp763 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp762);
org$pandalanguage$pandac$Position $tmp764 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp765 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp761, &$s766, $tmp763, $tmp764, $tmp765);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp761));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp761));
return $tmp761;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ClassLiteral$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 400
panda$collections$Array* $tmp767 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp767);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp768 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp768));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
*(&local0) = $tmp767;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
// line 401
panda$collections$Array* $tmp769 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp769, ((panda$core$Object*) param0));
// line 402
org$pandalanguage$pandac$Type* $tmp770 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$collections$Array* $tmp771 = *(&local0);
org$pandalanguage$pandac$Type* $tmp772 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp770, ((panda$collections$ListView*) $tmp771));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp772));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp772));
panda$collections$Array* $tmp773 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp773));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp772;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {

// line 407
org$pandalanguage$pandac$Type* $tmp774 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp775 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Type$Kind $tmp776 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp775);
org$pandalanguage$pandac$Position $tmp777 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp778 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp774, &$s779, $tmp776, $tmp777, $tmp778);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp774));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp774));
return $tmp774;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {

// line 412
org$pandalanguage$pandac$Type* $tmp780 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp781 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp782 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp781);
org$pandalanguage$pandac$Position $tmp783 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp784 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp780, &$s785, $tmp782, $tmp783, $tmp784);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
return $tmp780;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {

// line 417
org$pandalanguage$pandac$Type* $tmp786 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp787 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp788 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp787);
org$pandalanguage$pandac$Position $tmp789 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp790 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp786, &$s791, $tmp788, $tmp789, $tmp790);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
return $tmp786;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {

// line 422
org$pandalanguage$pandac$Type* $tmp792 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp793 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp794 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp793);
org$pandalanguage$pandac$Position $tmp795 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp796 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp792, &$s797, $tmp794, $tmp795, $tmp796);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp792));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp792));
return $tmp792;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {

// line 427
org$pandalanguage$pandac$Type* $tmp798 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp799 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp800 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp799);
org$pandalanguage$pandac$Position $tmp801 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp802 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp798, &$s803, $tmp800, $tmp801, $tmp802);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp798));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp798));
return $tmp798;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type() {

// line 432
org$pandalanguage$pandac$Type* $tmp804 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp805 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp806 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp805);
org$pandalanguage$pandac$Position $tmp807 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp808 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp804, &$s809, $tmp806, $tmp807, $tmp808);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
return $tmp804;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 437
panda$collections$Array* $tmp810 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp810);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp811 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
*(&local0) = $tmp810;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
// line 438
panda$collections$Array* $tmp812 = *(&local0);
org$pandalanguage$pandac$Type* $tmp813 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp814 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp815 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp814);
org$pandalanguage$pandac$Position $tmp816 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp817 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp813, &$s818, $tmp815, $tmp816, $tmp817);
panda$collections$Array$add$panda$collections$Array$T($tmp812, ((panda$core$Object*) $tmp813));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp813));
// line 439
panda$collections$Array* $tmp819 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp819, ((panda$core$Object*) param0));
// line 440
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp820));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp825));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
panda$collections$Array* $tmp835 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp835));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp820;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 445
panda$collections$Array* $tmp836 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp836);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp837 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp837));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
*(&local0) = $tmp836;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
// line 446
panda$collections$Array* $tmp838 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp838, ((panda$core$Object*) param0));
// line 447
org$pandalanguage$pandac$Type* $tmp839 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp840 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp841 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp840);
org$pandalanguage$pandac$Position $tmp842 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp843 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp839, &$s844, $tmp841, $tmp842, $tmp843);
panda$collections$Array* $tmp845 = *(&local0);
org$pandalanguage$pandac$Type* $tmp846 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp839, ((panda$collections$ListView*) $tmp845));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp846));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp846));
panda$collections$Array* $tmp847 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp847));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp846;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 452
panda$collections$Array* $tmp848 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp848);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp849 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
*(&local0) = $tmp848;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
// line 453
panda$collections$Array* $tmp850 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp850, ((panda$core$Object*) param0));
// line 454
org$pandalanguage$pandac$Type* $tmp851 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp852 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp853 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp852);
org$pandalanguage$pandac$Position $tmp854 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp855 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp851, &$s856, $tmp853, $tmp854, $tmp855);
panda$collections$Array* $tmp857 = *(&local0);
org$pandalanguage$pandac$Type* $tmp858 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp851, ((panda$collections$ListView*) $tmp857));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp851));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
panda$collections$Array* $tmp859 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp858;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 459
panda$collections$Array* $tmp860 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp860);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp861 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
*(&local0) = $tmp860;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
// line 460
panda$collections$Array* $tmp862 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp862, ((panda$core$Object*) param0));
// line 461
org$pandalanguage$pandac$Type* $tmp863 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp864 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp865 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp863, $tmp864);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp863));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
bool $tmp866 = $tmp865.value;
if ($tmp866) goto block1; else goto block3;
block1:;
// line 462
panda$collections$Array* $tmp867 = *(&local0);
org$pandalanguage$pandac$Type* $tmp868 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp867, ((panda$core$Object*) $tmp868));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp868));
goto block2;
block3:;
// line 464
org$pandalanguage$pandac$Type* $tmp869 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp870 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp871 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp869, $tmp870);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp869));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block4; else goto block6;
block4:;
// line 465
panda$collections$Array* $tmp873 = *(&local0);
org$pandalanguage$pandac$Type* $tmp874 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp873, ((panda$core$Object*) $tmp874));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp874));
goto block5;
block6:;
// line 467
org$pandalanguage$pandac$Type* $tmp875 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp876 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp877 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp875, $tmp876);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp875));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp876));
bool $tmp878 = $tmp877.value;
if ($tmp878) goto block7; else goto block9;
block7:;
// line 468
panda$collections$Array* $tmp879 = *(&local0);
org$pandalanguage$pandac$Type* $tmp880 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp879, ((panda$core$Object*) $tmp880));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp880));
goto block8;
block9:;
// line 1
// line 471
panda$collections$Array* $tmp881 = *(&local0);
org$pandalanguage$pandac$Type* $tmp882 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
panda$collections$Array$add$panda$collections$Array$T($tmp881, ((panda$core$Object*) $tmp882));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
// line 473
org$pandalanguage$pandac$Type* $tmp883 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp884 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp885 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp884);
org$pandalanguage$pandac$Position $tmp886 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp887 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp883, &$s888, $tmp885, $tmp886, $tmp887);
panda$collections$Array* $tmp889 = *(&local0);
org$pandalanguage$pandac$Type* $tmp890 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp883, ((panda$collections$ListView*) $tmp889));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp890));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp883));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp890));
panda$collections$Array* $tmp891 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp890;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$Type* param1) {

panda$collections$Array* local0 = NULL;
// line 478
panda$collections$Array* $tmp892 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp892);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp893 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
*(&local0) = $tmp892;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
// line 479
panda$collections$Array* $tmp894 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp894, ((panda$core$Object*) param0));
// line 480
panda$collections$Array* $tmp895 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp895, ((panda$core$Object*) param1));
// line 481
org$pandalanguage$pandac$Type* $tmp896 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp897 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp898 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp897);
org$pandalanguage$pandac$Position $tmp899 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp900 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp896, &$s901, $tmp898, $tmp899, $tmp900);
panda$collections$Array* $tmp902 = *(&local0);
org$pandalanguage$pandac$Type* $tmp903 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp896, ((panda$collections$ListView*) $tmp902));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp896));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
panda$collections$Array* $tmp904 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp904));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp903;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {

// line 486
org$pandalanguage$pandac$Type* $tmp905 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp906 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Type$Kind $tmp907 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp906);
org$pandalanguage$pandac$Position $tmp908 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp909 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp905, &$s910, $tmp907, $tmp908, $tmp909);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp905));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp905));
return $tmp905;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {

// line 491
org$pandalanguage$pandac$Type* $tmp911 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp912 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Type$Kind $tmp913 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp912);
org$pandalanguage$pandac$Position $tmp914 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp915 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp911, &$s916, $tmp913, $tmp914, $tmp915);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp911));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp911));
return $tmp911;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
// line 495
panda$core$String** $tmp917 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp918 = *$tmp917;
panda$core$Bit $tmp919 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp918, &$s920);
bool $tmp921 = $tmp919.value;
if ($tmp921) goto block1; else goto block2;
block1:;
*(&local3) = $tmp919;
goto block3;
block2:;
panda$core$String** $tmp922 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp923 = *$tmp922;
panda$core$Bit $tmp924 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp923, &$s925);
*(&local3) = $tmp924;
goto block3;
block3:;
panda$core$Bit $tmp926 = *(&local3);
bool $tmp927 = $tmp926.value;
if ($tmp927) goto block4; else goto block5;
block4:;
*(&local2) = $tmp926;
goto block6;
block5:;
panda$core$String** $tmp928 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp929 = *$tmp928;
panda$core$Bit $tmp930 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp929, &$s931);
*(&local2) = $tmp930;
goto block6;
block6:;
panda$core$Bit $tmp932 = *(&local2);
bool $tmp933 = $tmp932.value;
if ($tmp933) goto block7; else goto block8;
block7:;
*(&local1) = $tmp932;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp934 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp935 = *$tmp934;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp936;
$tmp936 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp936->value = $tmp935;
panda$core$Int64 $tmp937 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp938 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp937);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp939;
$tmp939 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp939->value = $tmp938;
ITable* $tmp940 = ((panda$core$Equatable*) $tmp936)->$class->itable;
while ($tmp940->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp940 = $tmp940->next;
}
$fn942 $tmp941 = $tmp940->methods[0];
panda$core$Bit $tmp943 = $tmp941(((panda$core$Equatable*) $tmp936), ((panda$core$Equatable*) $tmp939));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp936)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp939)));
*(&local1) = $tmp943;
goto block9;
block9:;
panda$core$Bit $tmp944 = *(&local1);
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block10; else goto block11;
block10:;
*(&local0) = $tmp944;
goto block12;
block11:;
org$pandalanguage$pandac$Type$Kind* $tmp946 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp947 = *$tmp946;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp948;
$tmp948 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp948->value = $tmp947;
panda$core$Int64 $tmp949 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp950 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp949);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp951;
$tmp951 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp951->value = $tmp950;
ITable* $tmp952 = ((panda$core$Equatable*) $tmp948)->$class->itable;
while ($tmp952->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp952 = $tmp952->next;
}
$fn954 $tmp953 = $tmp952->methods[0];
panda$core$Bit $tmp955 = $tmp953(((panda$core$Equatable*) $tmp948), ((panda$core$Equatable*) $tmp951));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp948)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp951)));
*(&local0) = $tmp955;
goto block12;
block12:;
panda$core$Bit $tmp956 = *(&local0);
return $tmp956;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
// line 501
org$pandalanguage$pandac$Type$Kind* $tmp957 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp958 = *$tmp957;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp959;
$tmp959 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp959->value = $tmp958;
panda$core$Int64 $tmp960 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp961 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp960);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp962;
$tmp962 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp962->value = $tmp961;
ITable* $tmp963 = ((panda$core$Equatable*) $tmp959)->$class->itable;
while ($tmp963->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp963 = $tmp963->next;
}
$fn965 $tmp964 = $tmp963->methods[0];
panda$core$Bit $tmp966 = $tmp964(((panda$core$Equatable*) $tmp959), ((panda$core$Equatable*) $tmp962));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp959)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp962)));
bool $tmp967 = $tmp966.value;
if ($tmp967) goto block1; else goto block2;
block1:;
*(&local2) = $tmp966;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp968 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp969 = *$tmp968;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp970;
$tmp970 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp970->value = $tmp969;
panda$core$Int64 $tmp971 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp972 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp971);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp973;
$tmp973 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp973->value = $tmp972;
ITable* $tmp974 = ((panda$core$Equatable*) $tmp970)->$class->itable;
while ($tmp974->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp974 = $tmp974->next;
}
$fn976 $tmp975 = $tmp974->methods[0];
panda$core$Bit $tmp977 = $tmp975(((panda$core$Equatable*) $tmp970), ((panda$core$Equatable*) $tmp973));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp970)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp973)));
*(&local2) = $tmp977;
goto block3;
block3:;
panda$core$Bit $tmp978 = *(&local2);
bool $tmp979 = $tmp978.value;
if ($tmp979) goto block4; else goto block5;
block4:;
*(&local1) = $tmp978;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp980 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp981 = *$tmp980;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp982;
$tmp982 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp982->value = $tmp981;
panda$core$Int64 $tmp983 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp984 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp983);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp985;
$tmp985 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp985->value = $tmp984;
ITable* $tmp986 = ((panda$core$Equatable*) $tmp982)->$class->itable;
while ($tmp986->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp986 = $tmp986->next;
}
$fn988 $tmp987 = $tmp986->methods[0];
panda$core$Bit $tmp989 = $tmp987(((panda$core$Equatable*) $tmp982), ((panda$core$Equatable*) $tmp985));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp982)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp985)));
*(&local1) = $tmp989;
goto block6;
block6:;
panda$core$Bit $tmp990 = *(&local1);
bool $tmp991 = $tmp990.value;
if ($tmp991) goto block7; else goto block8;
block7:;
*(&local0) = $tmp990;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp992 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp993 = *$tmp992;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp994;
$tmp994 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp994->value = $tmp993;
panda$core$Int64 $tmp995 = (panda$core$Int64) {5};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp994)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp997)));
*(&local0) = $tmp1001;
goto block9;
block9:;
panda$core$Bit $tmp1002 = *(&local0);
return $tmp1002;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isSigned$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 506
panda$core$String** $tmp1003 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1004 = *$tmp1003;
panda$core$Bit $tmp1005 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1004, &$s1006);
return $tmp1005;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
// line 510
org$pandalanguage$pandac$Type$Kind* $tmp1007 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1008 = *$tmp1007;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1009;
$tmp1009 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1009->value = $tmp1008;
panda$core$Int64 $tmp1010 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp1011 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1010);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1012;
$tmp1012 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1012->value = $tmp1011;
ITable* $tmp1013 = ((panda$core$Equatable*) $tmp1009)->$class->itable;
while ($tmp1013->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1013 = $tmp1013->next;
}
$fn1015 $tmp1014 = $tmp1013->methods[0];
panda$core$Bit $tmp1016 = $tmp1014(((panda$core$Equatable*) $tmp1009), ((panda$core$Equatable*) $tmp1012));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1009)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1012)));
bool $tmp1017 = $tmp1016.value;
if ($tmp1017) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1016;
goto block3;
block2:;
panda$core$String** $tmp1018 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1019 = *$tmp1018;
panda$core$Bit $tmp1020 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1019, &$s1021);
*(&local0) = $tmp1020;
goto block3;
block3:;
panda$core$Bit $tmp1022 = *(&local0);
return $tmp1022;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 514
panda$core$String** $tmp1023 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1024 = *$tmp1023;
panda$core$Bit $tmp1025 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1024, &$s1026);
return $tmp1025;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
// line 518
panda$core$Bit $tmp1027 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param0);
bool $tmp1028 = $tmp1027.value;
if ($tmp1028) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1027;
goto block3;
block2:;
panda$core$Bit $tmp1029 = org$pandalanguage$pandac$Type$get_isChar$R$panda$core$Bit(param0);
*(&local0) = $tmp1029;
goto block3;
block3:;
panda$core$Bit $tmp1030 = *(&local0);
return $tmp1030;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 522
org$pandalanguage$pandac$Type$Kind* $tmp1031 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1032 = *$tmp1031;
panda$core$Int64 $tmp1033 = $tmp1032.$rawValue;
panda$core$Int64 $tmp1034 = (panda$core$Int64) {0};
panda$core$Bit $tmp1035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1033, $tmp1034);
bool $tmp1036 = $tmp1035.value;
if ($tmp1036) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp1037 = (panda$core$Int64) {1};
panda$core$Bit $tmp1038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1033, $tmp1037);
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp1040 = (panda$core$Int64) {11};
panda$core$Bit $tmp1041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1033, $tmp1040);
bool $tmp1042 = $tmp1041.value;
if ($tmp1042) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp1043 = (panda$core$Int64) {12};
panda$core$Bit $tmp1044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1033, $tmp1043);
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block2; else goto block6;
block6:;
panda$core$Int64 $tmp1046 = (panda$core$Int64) {15};
panda$core$Bit $tmp1047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1033, $tmp1046);
bool $tmp1048 = $tmp1047.value;
if ($tmp1048) goto block2; else goto block7;
block7:;
panda$core$Int64 $tmp1049 = (panda$core$Int64) {14};
panda$core$Bit $tmp1050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1033, $tmp1049);
bool $tmp1051 = $tmp1050.value;
if ($tmp1051) goto block2; else goto block8;
block8:;
panda$core$Int64 $tmp1052 = (panda$core$Int64) {17};
panda$core$Bit $tmp1053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1033, $tmp1052);
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block2; else goto block9;
block9:;
panda$core$Int64 $tmp1055 = (panda$core$Int64) {16};
panda$core$Bit $tmp1056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1033, $tmp1055);
bool $tmp1057 = $tmp1056.value;
if ($tmp1057) goto block2; else goto block10;
block2:;
// line 525
panda$core$Bit $tmp1058 = panda$core$Bit$init$builtin_bit(true);
return $tmp1058;
block10:;
// line 527
panda$core$Bit $tmp1059 = panda$core$Bit$init$builtin_bit(false);
return $tmp1059;
block1:;
panda$core$Bit $tmp1060 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1061 = $tmp1060.value;
if ($tmp1061) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp1062 = (panda$core$Int64) {521};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1063, $tmp1062, &$s1064);
abort(); // unreachable
block11:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
// line 532
org$pandalanguage$pandac$Type$Kind* $tmp1065 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1066 = *$tmp1065;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1067;
$tmp1067 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1067->value = $tmp1066;
panda$core$Int64 $tmp1068 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp1069 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1068);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1070;
$tmp1070 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1070->value = $tmp1069;
ITable* $tmp1071 = ((panda$core$Equatable*) $tmp1067)->$class->itable;
while ($tmp1071->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1071 = $tmp1071->next;
}
$fn1073 $tmp1072 = $tmp1071->methods[0];
panda$core$Bit $tmp1074 = $tmp1072(((panda$core$Equatable*) $tmp1067), ((panda$core$Equatable*) $tmp1070));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1067)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1070)));
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block1; else goto block2;
block1:;
panda$collections$ImmutableArray** $tmp1076 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1077 = *$tmp1076;
panda$core$Int64 $tmp1078 = (panda$core$Int64) {0};
panda$core$Object* $tmp1079 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1077, $tmp1078);
org$pandalanguage$pandac$Type* $tmp1080 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1081 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1079), $tmp1080);
panda$core$Panda$unref$panda$core$Object$Q($tmp1079);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1080));
*(&local0) = $tmp1081;
goto block3;
block2:;
*(&local0) = $tmp1074;
goto block3;
block3:;
panda$core$Bit $tmp1082 = *(&local0);
return $tmp1082;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 536
org$pandalanguage$pandac$Type$Kind* $tmp1083 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1084 = *$tmp1083;
panda$core$Int64 $tmp1085 = $tmp1084.$rawValue;
panda$core$Int64 $tmp1086 = (panda$core$Int64) {15};
panda$core$Bit $tmp1087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1085, $tmp1086);
bool $tmp1088 = $tmp1087.value;
if ($tmp1088) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp1089 = (panda$core$Int64) {14};
panda$core$Bit $tmp1090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1085, $tmp1089);
bool $tmp1091 = $tmp1090.value;
if ($tmp1091) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp1092 = (panda$core$Int64) {17};
panda$core$Bit $tmp1093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1085, $tmp1092);
bool $tmp1094 = $tmp1093.value;
if ($tmp1094) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp1095 = (panda$core$Int64) {16};
panda$core$Bit $tmp1096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1085, $tmp1095);
bool $tmp1097 = $tmp1096.value;
if ($tmp1097) goto block2; else goto block6;
block2:;
// line 538
panda$core$Bit $tmp1098 = panda$core$Bit$init$builtin_bit(true);
return $tmp1098;
block6:;
// line 540
panda$core$Bit $tmp1099 = panda$core$Bit$init$builtin_bit(false);
return $tmp1099;
block1:;
panda$core$Bit $tmp1100 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1101 = $tmp1100.value;
if ($tmp1101) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1102 = (panda$core$Int64) {535};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1103, $tmp1102, &$s1104);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 545
panda$core$String** $tmp1105 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1106 = *$tmp1105;
panda$core$Bit $tmp1107 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1106, &$s1108);
return $tmp1107;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 549
panda$core$String** $tmp1109 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1110 = *$tmp1109;
panda$core$Bit $tmp1111 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1110, &$s1112);
return $tmp1111;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 553
panda$core$String** $tmp1113 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1114 = *$tmp1113;
panda$core$Bit $tmp1115 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1114, &$s1116);
return $tmp1115;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isNullable$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 557
org$pandalanguage$pandac$Type$Kind* $tmp1117 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1118 = *$tmp1117;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1119;
$tmp1119 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1119->value = $tmp1118;
panda$core$Int64 $tmp1120 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1121 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1120);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1122;
$tmp1122 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1122->value = $tmp1121;
ITable* $tmp1123 = ((panda$core$Equatable*) $tmp1119)->$class->itable;
while ($tmp1123->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1123 = $tmp1123->next;
}
$fn1125 $tmp1124 = $tmp1123->methods[0];
panda$core$Bit $tmp1126 = $tmp1124(((panda$core$Equatable*) $tmp1119), ((panda$core$Equatable*) $tmp1122));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1119)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1122)));
return $tmp1126;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 561
org$pandalanguage$pandac$Type$Kind* $tmp1127 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1128 = *$tmp1127;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1129;
$tmp1129 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1129->value = $tmp1128;
panda$core$Int64 $tmp1130 = (panda$core$Int64) {1};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1129)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1132)));
bool $tmp1137 = $tmp1136.value;
if ($tmp1137) goto block1; else goto block2;
block1:;
// line 562
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 564
panda$collections$Array* $tmp1138 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1138);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1139 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1139));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1138));
*(&local0) = $tmp1138;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1138));
// line 565
panda$collections$Array* $tmp1140 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp1140, ((panda$core$Object*) param0));
// line 566
org$pandalanguage$pandac$Type* $tmp1141 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String** $tmp1142 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1143 = *$tmp1142;
panda$core$String* $tmp1144 = panda$core$String$convert$R$panda$core$String($tmp1143);
panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1144, &$s1146);
panda$core$Int64 $tmp1147 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1148 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1147);
org$pandalanguage$pandac$Position $tmp1149 = org$pandalanguage$pandac$Position$init();
panda$collections$Array* $tmp1150 = *(&local0);
panda$core$Bit $tmp1151 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1141, $tmp1145, $tmp1148, $tmp1149, ((panda$collections$ListView*) $tmp1150), $tmp1151);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1141));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1141));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1144));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1145));
panda$collections$Array* $tmp1152 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1152));
// unreffing subtypes
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp1141;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

// line 570
org$pandalanguage$pandac$Type$Kind* $tmp1153 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1154 = *$tmp1153;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1155;
$tmp1155 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1155->value = $tmp1154;
panda$core$Int64 $tmp1156 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1157 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1156);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1158;
$tmp1158 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1158->value = $tmp1157;
ITable* $tmp1159 = ((panda$core$Equatable*) $tmp1155)->$class->itable;
while ($tmp1159->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1159 = $tmp1159->next;
}
$fn1161 $tmp1160 = $tmp1159->methods[1];
panda$core$Bit $tmp1162 = $tmp1160(((panda$core$Equatable*) $tmp1155), ((panda$core$Equatable*) $tmp1158));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1155)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1158)));
bool $tmp1163 = $tmp1162.value;
if ($tmp1163) goto block1; else goto block2;
block1:;
// line 571
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 573
panda$collections$ImmutableArray** $tmp1164 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1165 = *$tmp1164;
panda$core$Int64 $tmp1166 = (panda$core$Int64) {0};
panda$core$Object* $tmp1167 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1165, $tmp1166);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1167)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1167);
return ((org$pandalanguage$pandac$Type*) $tmp1167);

}
panda$core$Int64 org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
org$pandalanguage$pandac$Type$Kind* $tmp1168 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1169 = *$tmp1168;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1170;
$tmp1170 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1170->value = $tmp1169;
panda$core$Int64 $tmp1171 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp1172 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1171);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1173;
$tmp1173 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1173->value = $tmp1172;
ITable* $tmp1174 = ((panda$core$Equatable*) $tmp1170)->$class->itable;
while ($tmp1174->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1174 = $tmp1174->next;
}
$fn1176 $tmp1175 = $tmp1174->methods[0];
panda$core$Bit $tmp1177 = $tmp1175(((panda$core$Equatable*) $tmp1170), ((panda$core$Equatable*) $tmp1173));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1170)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1173)));
bool $tmp1178 = $tmp1177.value;
if ($tmp1178) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1177;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1179 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1180 = *$tmp1179;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1181;
$tmp1181 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1181->value = $tmp1180;
panda$core$Int64 $tmp1182 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp1183 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1182);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1184;
$tmp1184 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1184->value = $tmp1183;
ITable* $tmp1185 = ((panda$core$Equatable*) $tmp1181)->$class->itable;
while ($tmp1185->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1185 = $tmp1185->next;
}
$fn1187 $tmp1186 = $tmp1185->methods[0];
panda$core$Bit $tmp1188 = $tmp1186(((panda$core$Equatable*) $tmp1181), ((panda$core$Equatable*) $tmp1184));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1181)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1184)));
*(&local2) = $tmp1188;
goto block3;
block3:;
panda$core$Bit $tmp1189 = *(&local2);
bool $tmp1190 = $tmp1189.value;
if ($tmp1190) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1189;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1191 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1192 = *$tmp1191;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1193;
$tmp1193 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1193->value = $tmp1192;
panda$core$Int64 $tmp1194 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp1195 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1194);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1196;
$tmp1196 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1196->value = $tmp1195;
ITable* $tmp1197 = ((panda$core$Equatable*) $tmp1193)->$class->itable;
while ($tmp1197->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1197 = $tmp1197->next;
}
$fn1199 $tmp1198 = $tmp1197->methods[0];
panda$core$Bit $tmp1200 = $tmp1198(((panda$core$Equatable*) $tmp1193), ((panda$core$Equatable*) $tmp1196));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1193)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1196)));
*(&local1) = $tmp1200;
goto block6;
block6:;
panda$core$Bit $tmp1201 = *(&local1);
bool $tmp1202 = $tmp1201.value;
if ($tmp1202) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1201;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1203 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1204 = *$tmp1203;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1205;
$tmp1205 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1205->value = $tmp1204;
panda$core$Int64 $tmp1206 = (panda$core$Int64) {17};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1205)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1208)));
*(&local0) = $tmp1212;
goto block9;
block9:;
panda$core$Bit $tmp1213 = *(&local0);
bool $tmp1214 = $tmp1213.value;
if ($tmp1214) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp1215 = (panda$core$Int64) {578};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1216, $tmp1215, &$s1217);
abort(); // unreachable
block10:;
// line 579
panda$collections$ImmutableArray** $tmp1218 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1219 = *$tmp1218;
ITable* $tmp1220 = ((panda$collections$CollectionView*) $tmp1219)->$class->itable;
while ($tmp1220->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1220 = $tmp1220->next;
}
$fn1222 $tmp1221 = $tmp1220->methods[0];
panda$core$Int64 $tmp1223 = $tmp1221(((panda$collections$CollectionView*) $tmp1219));
panda$core$Int64 $tmp1224 = (panda$core$Int64) {1};
int64_t $tmp1225 = $tmp1223.value;
int64_t $tmp1226 = $tmp1224.value;
int64_t $tmp1227 = $tmp1225 - $tmp1226;
panda$core$Int64 $tmp1228 = (panda$core$Int64) {$tmp1227};
return $tmp1228;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
org$pandalanguage$pandac$Type$Kind* $tmp1229 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1230 = *$tmp1229;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1231;
$tmp1231 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1231->value = $tmp1230;
panda$core$Int64 $tmp1232 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp1233 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1232);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1234;
$tmp1234 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1234->value = $tmp1233;
ITable* $tmp1235 = ((panda$core$Equatable*) $tmp1231)->$class->itable;
while ($tmp1235->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1235 = $tmp1235->next;
}
$fn1237 $tmp1236 = $tmp1235->methods[0];
panda$core$Bit $tmp1238 = $tmp1236(((panda$core$Equatable*) $tmp1231), ((panda$core$Equatable*) $tmp1234));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1231)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1234)));
bool $tmp1239 = $tmp1238.value;
if ($tmp1239) goto block1; else goto block2;
block1:;
*(&local4) = $tmp1238;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1240 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1241 = *$tmp1240;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1242;
$tmp1242 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1242->value = $tmp1241;
panda$core$Int64 $tmp1243 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp1244 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1243);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1245;
$tmp1245 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1245->value = $tmp1244;
ITable* $tmp1246 = ((panda$core$Equatable*) $tmp1242)->$class->itable;
while ($tmp1246->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1246 = $tmp1246->next;
}
$fn1248 $tmp1247 = $tmp1246->methods[0];
panda$core$Bit $tmp1249 = $tmp1247(((panda$core$Equatable*) $tmp1242), ((panda$core$Equatable*) $tmp1245));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1242)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1245)));
*(&local4) = $tmp1249;
goto block3;
block3:;
panda$core$Bit $tmp1250 = *(&local4);
bool $tmp1251 = $tmp1250.value;
if ($tmp1251) goto block4; else goto block5;
block4:;
*(&local3) = $tmp1250;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1252 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1253 = *$tmp1252;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1254;
$tmp1254 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1254->value = $tmp1253;
panda$core$Int64 $tmp1255 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp1256 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1255);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1257;
$tmp1257 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1257->value = $tmp1256;
ITable* $tmp1258 = ((panda$core$Equatable*) $tmp1254)->$class->itable;
while ($tmp1258->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1258 = $tmp1258->next;
}
$fn1260 $tmp1259 = $tmp1258->methods[0];
panda$core$Bit $tmp1261 = $tmp1259(((panda$core$Equatable*) $tmp1254), ((panda$core$Equatable*) $tmp1257));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1254)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1257)));
*(&local3) = $tmp1261;
goto block6;
block6:;
panda$core$Bit $tmp1262 = *(&local3);
bool $tmp1263 = $tmp1262.value;
if ($tmp1263) goto block7; else goto block8;
block7:;
*(&local2) = $tmp1262;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1264 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1265 = *$tmp1264;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1266;
$tmp1266 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1266->value = $tmp1265;
panda$core$Int64 $tmp1267 = (panda$core$Int64) {17};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1266)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1269)));
*(&local2) = $tmp1273;
goto block9;
block9:;
panda$core$Bit $tmp1274 = *(&local2);
bool $tmp1275 = $tmp1274.value;
if ($tmp1275) goto block10; else goto block11;
block10:;
panda$core$Int64 $tmp1276 = (panda$core$Int64) {0};
int64_t $tmp1277 = param1.value;
int64_t $tmp1278 = $tmp1276.value;
bool $tmp1279 = $tmp1277 >= $tmp1278;
panda$core$Bit $tmp1280 = (panda$core$Bit) {$tmp1279};
*(&local1) = $tmp1280;
goto block12;
block11:;
*(&local1) = $tmp1274;
goto block12;
block12:;
panda$core$Bit $tmp1281 = *(&local1);
bool $tmp1282 = $tmp1281.value;
if ($tmp1282) goto block13; else goto block14;
block13:;
panda$collections$ImmutableArray** $tmp1283 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1284 = *$tmp1283;
ITable* $tmp1285 = ((panda$collections$CollectionView*) $tmp1284)->$class->itable;
while ($tmp1285->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1285 = $tmp1285->next;
}
$fn1287 $tmp1286 = $tmp1285->methods[0];
panda$core$Int64 $tmp1288 = $tmp1286(((panda$collections$CollectionView*) $tmp1284));
panda$core$Int64 $tmp1289 = (panda$core$Int64) {1};
int64_t $tmp1290 = $tmp1288.value;
int64_t $tmp1291 = $tmp1289.value;
int64_t $tmp1292 = $tmp1290 - $tmp1291;
panda$core$Int64 $tmp1293 = (panda$core$Int64) {$tmp1292};
int64_t $tmp1294 = param1.value;
int64_t $tmp1295 = $tmp1293.value;
bool $tmp1296 = $tmp1294 < $tmp1295;
panda$core$Bit $tmp1297 = (panda$core$Bit) {$tmp1296};
*(&local0) = $tmp1297;
goto block15;
block14:;
*(&local0) = $tmp1281;
goto block15;
block15:;
panda$core$Bit $tmp1298 = *(&local0);
bool $tmp1299 = $tmp1298.value;
if ($tmp1299) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp1300 = (panda$core$Int64) {584};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1301, $tmp1300, &$s1302);
abort(); // unreachable
block16:;
// line 585
panda$collections$ImmutableArray** $tmp1303 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1304 = *$tmp1303;
panda$core$Object* $tmp1305 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1304, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1305)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1305);
return ((org$pandalanguage$pandac$Type*) $tmp1305);

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
org$pandalanguage$pandac$Type$Kind* $tmp1306 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1307 = *$tmp1306;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1308;
$tmp1308 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1308->value = $tmp1307;
panda$core$Int64 $tmp1309 = (panda$core$Int64) {14};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1308)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1311)));
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
panda$core$Int64 $tmp1320 = (panda$core$Int64) {15};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1319)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1322)));
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
panda$core$Int64 $tmp1332 = (panda$core$Int64) {16};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1331)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1334)));
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
panda$core$Int64 $tmp1344 = (panda$core$Int64) {17};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1343)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1346)));
*(&local0) = $tmp1350;
goto block9;
block9:;
panda$core$Bit $tmp1351 = *(&local0);
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp1353 = (panda$core$Int64) {590};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1354, $tmp1353, &$s1355);
abort(); // unreachable
block10:;
// line 591
panda$collections$ImmutableArray** $tmp1356 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1357 = *$tmp1356;
panda$collections$ImmutableArray** $tmp1358 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1359 = *$tmp1358;
ITable* $tmp1360 = ((panda$collections$CollectionView*) $tmp1359)->$class->itable;
while ($tmp1360->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1360 = $tmp1360->next;
}
$fn1362 $tmp1361 = $tmp1360->methods[0];
panda$core$Int64 $tmp1363 = $tmp1361(((panda$collections$CollectionView*) $tmp1359));
panda$core$Int64 $tmp1364 = (panda$core$Int64) {1};
int64_t $tmp1365 = $tmp1363.value;
int64_t $tmp1366 = $tmp1364.value;
int64_t $tmp1367 = $tmp1365 - $tmp1366;
panda$core$Int64 $tmp1368 = (panda$core$Int64) {$tmp1367};
panda$core$Object* $tmp1369 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1357, $tmp1368);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1369)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1369);
return ((org$pandalanguage$pandac$Type*) $tmp1369);

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
// line 596
panda$core$Bit $tmp1370 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, param2);
bool $tmp1371 = $tmp1370.value;
if ($tmp1371) goto block1; else goto block2;
block1:;
// line 597
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 599
org$pandalanguage$pandac$Type* $tmp1372 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1373 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp1372);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1372));
bool $tmp1374 = $tmp1373.value;
if ($tmp1374) goto block3; else goto block4;
block3:;
// line 600
org$pandalanguage$pandac$Type$Kind* $tmp1375 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1376 = *$tmp1375;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1377;
$tmp1377 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1377->value = $tmp1376;
panda$core$Int64 $tmp1378 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1379 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1378);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1380;
$tmp1380 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1380->value = $tmp1379;
ITable* $tmp1381 = ((panda$core$Equatable*) $tmp1377)->$class->itable;
while ($tmp1381->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1381 = $tmp1381->next;
}
$fn1383 $tmp1382 = $tmp1381->methods[0];
panda$core$Bit $tmp1384 = $tmp1382(((panda$core$Equatable*) $tmp1377), ((panda$core$Equatable*) $tmp1380));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1377)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1380)));
bool $tmp1385 = $tmp1384.value;
if ($tmp1385) goto block5; else goto block6;
block5:;
// line 601
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block6:;
// line 603
org$pandalanguage$pandac$Type* $tmp1386 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1386));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1386));
return $tmp1386;
block4:;
// line 605
org$pandalanguage$pandac$Type* $tmp1387 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1388 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param2, $tmp1387);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1387));
bool $tmp1389 = $tmp1388.value;
if ($tmp1389) goto block7; else goto block8;
block7:;
// line 606
org$pandalanguage$pandac$Type$Kind* $tmp1390 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1391 = *$tmp1390;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1392;
$tmp1392 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1392->value = $tmp1391;
panda$core$Int64 $tmp1393 = (panda$core$Int64) {1};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1392)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1395)));
bool $tmp1400 = $tmp1399.value;
if ($tmp1400) goto block9; else goto block10;
block9:;
// line 607
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block10:;
// line 609
org$pandalanguage$pandac$Type* $tmp1401 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1401));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1401));
return $tmp1401;
block8:;
// line 611
org$pandalanguage$pandac$Type$Kind* $tmp1402 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1403 = *$tmp1402;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1404;
$tmp1404 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1404->value = $tmp1403;
panda$core$Int64 $tmp1405 = (panda$core$Int64) {5};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1404)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1407)));
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block11; else goto block12;
block11:;
panda$core$Bit $tmp1413 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param2);
*(&local0) = $tmp1413;
goto block13;
block12:;
*(&local0) = $tmp1411;
goto block13;
block13:;
panda$core$Bit $tmp1414 = *(&local0);
bool $tmp1415 = $tmp1414.value;
if ($tmp1415) goto block14; else goto block15;
block14:;
// line 612
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block15:;
// line 614
panda$core$Bit $tmp1416 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param0);
bool $tmp1417 = $tmp1416.value;
if ($tmp1417) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Type$Kind* $tmp1418 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1419 = *$tmp1418;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1420;
$tmp1420 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1420->value = $tmp1419;
panda$core$Int64 $tmp1421 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1422 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1421);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1423;
$tmp1423 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1423->value = $tmp1422;
ITable* $tmp1424 = ((panda$core$Equatable*) $tmp1420)->$class->itable;
while ($tmp1424->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1424 = $tmp1424->next;
}
$fn1426 $tmp1425 = $tmp1424->methods[0];
panda$core$Bit $tmp1427 = $tmp1425(((panda$core$Equatable*) $tmp1420), ((panda$core$Equatable*) $tmp1423));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1420)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1423)));
*(&local1) = $tmp1427;
goto block18;
block17:;
*(&local1) = $tmp1416;
goto block18;
block18:;
panda$core$Bit $tmp1428 = *(&local1);
bool $tmp1429 = $tmp1428.value;
if ($tmp1429) goto block19; else goto block20;
block19:;
// line 615
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block20:;
// line 617
panda$core$Bit $tmp1430 = org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit(param0);
bool $tmp1431 = $tmp1430.value;
if ($tmp1431) goto block21; else goto block22;
block21:;
// line 618
org$pandalanguage$pandac$Type$Kind* $tmp1432 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1433 = *$tmp1432;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1434;
$tmp1434 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1434->value = $tmp1433;
panda$core$Int64 $tmp1435 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1436 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1435);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1437;
$tmp1437 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1437->value = $tmp1436;
ITable* $tmp1438 = ((panda$core$Equatable*) $tmp1434)->$class->itable;
while ($tmp1438->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1438 = $tmp1438->next;
}
$fn1440 $tmp1439 = $tmp1438->methods[0];
panda$core$Bit $tmp1441 = $tmp1439(((panda$core$Equatable*) $tmp1434), ((panda$core$Equatable*) $tmp1437));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1434)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1437)));
bool $tmp1442 = $tmp1441.value;
if ($tmp1442) goto block23; else goto block24;
block23:;
*(&local2) = $tmp1441;
goto block25;
block24:;
org$pandalanguage$pandac$Type$Kind* $tmp1443 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1444 = *$tmp1443;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1445;
$tmp1445 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1445->value = $tmp1444;
panda$core$Int64 $tmp1446 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp1447 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1446);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1448;
$tmp1448 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1448->value = $tmp1447;
ITable* $tmp1449 = ((panda$core$Equatable*) $tmp1445)->$class->itable;
while ($tmp1449->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1449 = $tmp1449->next;
}
$fn1451 $tmp1450 = $tmp1449->methods[0];
panda$core$Bit $tmp1452 = $tmp1450(((panda$core$Equatable*) $tmp1445), ((panda$core$Equatable*) $tmp1448));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1445)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1448)));
*(&local2) = $tmp1452;
goto block25;
block25:;
panda$core$Bit $tmp1453 = *(&local2);
bool $tmp1454 = $tmp1453.value;
if ($tmp1454) goto block26; else goto block27;
block26:;
// line 619
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block27:;
// line 621
panda$core$Bit $tmp1455 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param2);
bool $tmp1456 = $tmp1455.value;
if ($tmp1456) goto block28; else goto block29;
block28:;
// line 622
panda$core$String** $tmp1457 = &((org$pandalanguage$pandac$Symbol*) param2)->name;
panda$core$String* $tmp1458 = *$tmp1457;
panda$core$Bit $tmp1459 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp1458, &$s1460);
bool $tmp1461 = $tmp1459.value;
if ($tmp1461) goto block30; else goto block31;
block30:;
// line 623
org$pandalanguage$pandac$Type* $tmp1462 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1462));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1462));
return $tmp1462;
block31:;
// line 625
org$pandalanguage$pandac$Type* $tmp1463 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1463));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1463));
return $tmp1463;
block29:;
goto block22;
block22:;
// line 628
panda$core$Bit $tmp1464 = org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit(param2);
bool $tmp1465 = $tmp1464.value;
if ($tmp1465) goto block32; else goto block33;
block32:;
// line 629
org$pandalanguage$pandac$Type$Kind* $tmp1466 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1467 = *$tmp1466;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1468;
$tmp1468 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1468->value = $tmp1467;
panda$core$Int64 $tmp1469 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1470 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1469);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1471;
$tmp1471 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1471->value = $tmp1470;
ITable* $tmp1472 = ((panda$core$Equatable*) $tmp1468)->$class->itable;
while ($tmp1472->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1472 = $tmp1472->next;
}
$fn1474 $tmp1473 = $tmp1472->methods[0];
panda$core$Bit $tmp1475 = $tmp1473(((panda$core$Equatable*) $tmp1468), ((panda$core$Equatable*) $tmp1471));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1468)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1471)));
bool $tmp1476 = $tmp1475.value;
if ($tmp1476) goto block34; else goto block35;
block34:;
*(&local3) = $tmp1475;
goto block36;
block35:;
org$pandalanguage$pandac$Type$Kind* $tmp1477 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1478 = *$tmp1477;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1479;
$tmp1479 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1479->value = $tmp1478;
panda$core$Int64 $tmp1480 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp1481 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1480);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1482;
$tmp1482 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1482->value = $tmp1481;
ITable* $tmp1483 = ((panda$core$Equatable*) $tmp1479)->$class->itable;
while ($tmp1483->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1483 = $tmp1483->next;
}
$fn1485 $tmp1484 = $tmp1483->methods[0];
panda$core$Bit $tmp1486 = $tmp1484(((panda$core$Equatable*) $tmp1479), ((panda$core$Equatable*) $tmp1482));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1479)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1482)));
*(&local3) = $tmp1486;
goto block36;
block36:;
panda$core$Bit $tmp1487 = *(&local3);
bool $tmp1488 = $tmp1487.value;
if ($tmp1488) goto block37; else goto block38;
block37:;
// line 630
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block38:;
// line 632
panda$core$Bit $tmp1489 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param0);
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block39; else goto block40;
block39:;
// line 633
panda$core$String** $tmp1491 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1492 = *$tmp1491;
panda$core$Bit $tmp1493 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp1492, &$s1494);
bool $tmp1495 = $tmp1493.value;
if ($tmp1495) goto block41; else goto block42;
block41:;
// line 634
org$pandalanguage$pandac$Type* $tmp1496 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
return $tmp1496;
block42:;
// line 636
org$pandalanguage$pandac$Type* $tmp1497 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1497));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1497));
return $tmp1497;
block40:;
goto block33;
block33:;
// line 639
org$pandalanguage$pandac$Type$Kind* $tmp1498 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1499 = *$tmp1498;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1500;
$tmp1500 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1500->value = $tmp1499;
panda$core$Int64 $tmp1501 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1502 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1501);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1503;
$tmp1503 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1503->value = $tmp1502;
ITable* $tmp1504 = ((panda$core$Equatable*) $tmp1500)->$class->itable;
while ($tmp1504->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1504 = $tmp1504->next;
}
$fn1506 $tmp1505 = $tmp1504->methods[0];
panda$core$Bit $tmp1507 = $tmp1505(((panda$core$Equatable*) $tmp1500), ((panda$core$Equatable*) $tmp1503));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1500)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1503)));
bool $tmp1508 = $tmp1507.value;
if ($tmp1508) goto block43; else goto block44;
block43:;
// line 640
panda$collections$ImmutableArray** $tmp1509 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1510 = *$tmp1509;
panda$core$Int64 $tmp1511 = (panda$core$Int64) {0};
panda$core$Object* $tmp1512 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1510, $tmp1511);
org$pandalanguage$pandac$Type* $tmp1513 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1512), param1, param2);
org$pandalanguage$pandac$Type* $tmp1514 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1513);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
panda$core$Panda$unref$panda$core$Object$Q($tmp1512);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1513));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
return $tmp1514;
block44:;
// line 642
org$pandalanguage$pandac$Type$Kind* $tmp1515 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1516 = *$tmp1515;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1517;
$tmp1517 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1517->value = $tmp1516;
panda$core$Int64 $tmp1518 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1519 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1518);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1520;
$tmp1520 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1520->value = $tmp1519;
ITable* $tmp1521 = ((panda$core$Equatable*) $tmp1517)->$class->itable;
while ($tmp1521->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1521 = $tmp1521->next;
}
$fn1523 $tmp1522 = $tmp1521->methods[0];
panda$core$Bit $tmp1524 = $tmp1522(((panda$core$Equatable*) $tmp1517), ((panda$core$Equatable*) $tmp1520));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1517)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1520)));
bool $tmp1525 = $tmp1524.value;
if ($tmp1525) goto block45; else goto block46;
block45:;
// line 643
panda$collections$ImmutableArray** $tmp1526 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1527 = *$tmp1526;
panda$core$Int64 $tmp1528 = (panda$core$Int64) {0};
panda$core$Object* $tmp1529 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1527, $tmp1528);
org$pandalanguage$pandac$Type* $tmp1530 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param0, param1, ((org$pandalanguage$pandac$Type*) $tmp1529));
org$pandalanguage$pandac$Type* $tmp1531 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1530);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1531));
panda$core$Panda$unref$panda$core$Object$Q($tmp1529);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1530));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1531));
return $tmp1531;
block46:;
// line 645
org$pandalanguage$pandac$Type* $tmp1532 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, param0);
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1533 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1533));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1532));
*(&local4) = $tmp1532;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1532));
// line 646
org$pandalanguage$pandac$Type* $tmp1534 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, param2);
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1535 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1535));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1534));
*(&local5) = $tmp1534;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1534));
// line 647
org$pandalanguage$pandac$Type* $tmp1536 = *(&local4);
panda$core$Bit $tmp1537 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp1536);
bool $tmp1538 = $tmp1537.value;
if ($tmp1538) goto block47; else goto block48;
block47:;
org$pandalanguage$pandac$Type* $tmp1539 = *(&local5);
panda$core$Bit $tmp1540 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp1539);
*(&local6) = $tmp1540;
goto block49;
block48:;
*(&local6) = $tmp1537;
goto block49;
block49:;
panda$core$Bit $tmp1541 = *(&local6);
bool $tmp1542 = $tmp1541.value;
if ($tmp1542) goto block50; else goto block51;
block50:;
// line 648
panda$collections$HashSet* $tmp1543 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp1543);
*(&local7) = ((panda$collections$HashSet*) NULL);
panda$collections$HashSet* $tmp1544 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1544));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1543));
*(&local7) = $tmp1543;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1543));
// line 649
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1545 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1545));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
*(&local8) = param0;
// line 650
org$pandalanguage$pandac$Type* $tmp1546 = *(&local4);
org$pandalanguage$pandac$ClassDecl* $tmp1547 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1546);
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1548 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1548));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1547));
*(&local9) = $tmp1547;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1547));
// line 651
goto block52;
block52:;
org$pandalanguage$pandac$ClassDecl* $tmp1549 = *(&local9);
panda$core$Bit $tmp1550 = panda$core$Bit$init$builtin_bit($tmp1549 != NULL);
bool $tmp1551 = $tmp1550.value;
if ($tmp1551) goto block53; else goto block54;
block53:;
// line 652
panda$collections$HashSet* $tmp1552 = *(&local7);
org$pandalanguage$pandac$Type* $tmp1553 = *(&local8);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp1552, ((panda$collections$Key*) $tmp1553));
// line 653
org$pandalanguage$pandac$ClassDecl* $tmp1554 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1555 = &$tmp1554->rawSuper;
org$pandalanguage$pandac$Type* $tmp1556 = *$tmp1555;
panda$core$Bit $tmp1557 = panda$core$Bit$init$builtin_bit($tmp1556 != NULL);
bool $tmp1558 = $tmp1557.value;
if ($tmp1558) goto block55; else goto block57;
block55:;
// line 654
org$pandalanguage$pandac$Type* $tmp1559 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1560 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1561 = &$tmp1560->rawSuper;
org$pandalanguage$pandac$Type* $tmp1562 = *$tmp1561;
org$pandalanguage$pandac$Type* $tmp1563 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp1559, $tmp1562);
org$pandalanguage$pandac$Type* $tmp1564 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1564));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1563));
*(&local8) = $tmp1563;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1563));
// line 655
org$pandalanguage$pandac$Type* $tmp1565 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1566 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1565);
org$pandalanguage$pandac$ClassDecl* $tmp1567 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1567));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1566));
*(&local9) = $tmp1566;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1566));
goto block56;
block57:;
// line 1
// line 658
org$pandalanguage$pandac$ClassDecl* $tmp1568 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1568));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block56;
block56:;
goto block52;
block54:;
// line 661
org$pandalanguage$pandac$Type* $tmp1569 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1569));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
*(&local8) = param2;
// line 662
org$pandalanguage$pandac$Type* $tmp1570 = *(&local5);
org$pandalanguage$pandac$ClassDecl* $tmp1571 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1570);
org$pandalanguage$pandac$ClassDecl* $tmp1572 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1572));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
*(&local9) = $tmp1571;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
// line 663
goto block58;
block58:;
org$pandalanguage$pandac$ClassDecl* $tmp1573 = *(&local9);
panda$core$Bit $tmp1574 = panda$core$Bit$init$builtin_bit($tmp1573 != NULL);
bool $tmp1575 = $tmp1574.value;
if ($tmp1575) goto block59; else goto block60;
block59:;
// line 664
panda$collections$HashSet* $tmp1576 = *(&local7);
org$pandalanguage$pandac$Type* $tmp1577 = *(&local8);
panda$core$Bit $tmp1578 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp1576, ((panda$collections$Key*) $tmp1577));
bool $tmp1579 = $tmp1578.value;
if ($tmp1579) goto block61; else goto block62;
block61:;
// line 665
org$pandalanguage$pandac$Type* $tmp1580 = *(&local8);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1580));
org$pandalanguage$pandac$ClassDecl* $tmp1581 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1581));
// unreffing cl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp1582 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1582));
// unreffing t
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$HashSet* $tmp1583 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1583));
// unreffing ancestors
*(&local7) = ((panda$collections$HashSet*) NULL);
org$pandalanguage$pandac$Type* $tmp1584 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1584));
// unreffing t2
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1585 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1585));
// unreffing t1
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1580;
block62:;
// line 667
org$pandalanguage$pandac$ClassDecl* $tmp1586 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1587 = &$tmp1586->rawSuper;
org$pandalanguage$pandac$Type* $tmp1588 = *$tmp1587;
panda$core$Bit $tmp1589 = panda$core$Bit$init$builtin_bit($tmp1588 != NULL);
bool $tmp1590 = $tmp1589.value;
if ($tmp1590) goto block63; else goto block65;
block63:;
// line 668
org$pandalanguage$pandac$Type* $tmp1591 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1592 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1593 = &$tmp1592->rawSuper;
org$pandalanguage$pandac$Type* $tmp1594 = *$tmp1593;
org$pandalanguage$pandac$Type* $tmp1595 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp1591, $tmp1594);
org$pandalanguage$pandac$Type* $tmp1596 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1596));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1595));
*(&local8) = $tmp1595;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1595));
// line 669
org$pandalanguage$pandac$Type* $tmp1597 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1598 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1597);
org$pandalanguage$pandac$ClassDecl* $tmp1599 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1599));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1598));
*(&local9) = $tmp1598;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1598));
goto block64;
block65:;
// line 1
// line 672
org$pandalanguage$pandac$ClassDecl* $tmp1600 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1600));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block64;
block64:;
goto block58;
block60:;
org$pandalanguage$pandac$ClassDecl* $tmp1601 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1601));
// unreffing cl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp1602 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1602));
// unreffing t
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$HashSet* $tmp1603 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1603));
// unreffing ancestors
*(&local7) = ((panda$collections$HashSet*) NULL);
goto block51;
block51:;
// line 676
org$pandalanguage$pandac$Type* $tmp1604 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1604));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1604));
org$pandalanguage$pandac$Type* $tmp1605 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1605));
// unreffing t2
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1606 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1606));
// unreffing t1
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1604;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, panda$collections$HashMap* param1) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$core$Int64 local3;
panda$collections$Array* local4 = NULL;
panda$core$Int64 local5;
org$pandalanguage$pandac$Type$Kind* $tmp1607 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1608 = *$tmp1607;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1609;
$tmp1609 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1609->value = $tmp1608;
panda$core$Int64 $tmp1610 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Type$Kind $tmp1611 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1610);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1612;
$tmp1612 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1612->value = $tmp1611;
ITable* $tmp1613 = ((panda$core$Equatable*) $tmp1609)->$class->itable;
while ($tmp1613->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1613 = $tmp1613->next;
}
$fn1615 $tmp1614 = $tmp1613->methods[1];
panda$core$Bit $tmp1616 = $tmp1614(((panda$core$Equatable*) $tmp1609), ((panda$core$Equatable*) $tmp1612));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1609)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1612)));
bool $tmp1617 = $tmp1616.value;
if ($tmp1617) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp1618 = (panda$core$Int64) {681};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1619, $tmp1618, &$s1620);
abort(); // unreachable
block1:;
// line 682
ITable* $tmp1621 = ((panda$collections$MapView*) param1)->$class->itable;
while ($tmp1621->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp1621 = $tmp1621->next;
}
$fn1623 $tmp1622 = $tmp1621->methods[0];
panda$core$Int64 $tmp1624 = $tmp1622(((panda$collections$MapView*) param1));
panda$core$Int64 $tmp1625 = (panda$core$Int64) {0};
panda$core$Bit $tmp1626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1624, $tmp1625);
bool $tmp1627 = $tmp1626.value;
if ($tmp1627) goto block3; else goto block4;
block3:;
// line 683
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block4:;
// line 685
org$pandalanguage$pandac$Type$Kind* $tmp1628 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1629 = *$tmp1628;
panda$core$Int64 $tmp1630 = $tmp1629.$rawValue;
panda$core$Int64 $tmp1631 = (panda$core$Int64) {12};
panda$core$Bit $tmp1632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1630, $tmp1631);
bool $tmp1633 = $tmp1632.value;
if ($tmp1633) goto block6; else goto block7;
block6:;
// line 687
panda$core$String** $tmp1634 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1635 = *$tmp1634;
panda$core$Object* $tmp1636 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(param1, ((panda$collections$Key*) $tmp1635));
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1637 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1637));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1636)));
*(&local0) = ((org$pandalanguage$pandac$Type*) $tmp1636);
panda$core$Panda$unref$panda$core$Object$Q($tmp1636);
// line 688
org$pandalanguage$pandac$Type* $tmp1638 = *(&local0);
panda$core$Bit $tmp1639 = panda$core$Bit$init$builtin_bit($tmp1638 != NULL);
bool $tmp1640 = $tmp1639.value;
if ($tmp1640) goto block8; else goto block9;
block8:;
// line 689
org$pandalanguage$pandac$Type* $tmp1641 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1641));
org$pandalanguage$pandac$Type* $tmp1642 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1642));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1641;
block9:;
// line 691
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
org$pandalanguage$pandac$Type* $tmp1643 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1643));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return param0;
block7:;
panda$core$Int64 $tmp1644 = (panda$core$Int64) {11};
panda$core$Bit $tmp1645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1630, $tmp1644);
bool $tmp1646 = $tmp1645.value;
if ($tmp1646) goto block10; else goto block11;
block10:;
// line 693
panda$collections$ImmutableArray** $tmp1647 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1648 = *$tmp1647;
panda$core$Int64 $tmp1649 = (panda$core$Int64) {0};
panda$core$Object* $tmp1650 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1648, $tmp1649);
org$pandalanguage$pandac$Type* $tmp1651 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1650), param1);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1652 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1652));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1651));
*(&local1) = $tmp1651;
panda$core$Panda$unref$panda$core$Object$Q($tmp1650);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1651));
// line 694
panda$collections$Array* $tmp1653 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1653);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1654 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1654));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1653));
*(&local2) = $tmp1653;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1653));
// line 695
panda$core$Int64 $tmp1655 = (panda$core$Int64) {1};
panda$collections$ImmutableArray** $tmp1656 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1657 = *$tmp1656;
ITable* $tmp1658 = ((panda$collections$CollectionView*) $tmp1657)->$class->itable;
while ($tmp1658->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1658 = $tmp1658->next;
}
$fn1660 $tmp1659 = $tmp1658->methods[0];
panda$core$Int64 $tmp1661 = $tmp1659(((panda$collections$CollectionView*) $tmp1657));
panda$core$Bit $tmp1662 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1663 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1655, $tmp1661, $tmp1662);
panda$core$Int64 $tmp1664 = $tmp1663.min;
*(&local3) = $tmp1664;
panda$core$Int64 $tmp1665 = $tmp1663.max;
panda$core$Bit $tmp1666 = $tmp1663.inclusive;
bool $tmp1667 = $tmp1666.value;
panda$core$Int64 $tmp1668 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1669 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1668);
if ($tmp1667) goto block15; else goto block16;
block15:;
int64_t $tmp1670 = $tmp1664.value;
int64_t $tmp1671 = $tmp1665.value;
bool $tmp1672 = $tmp1670 <= $tmp1671;
panda$core$Bit $tmp1673 = (panda$core$Bit) {$tmp1672};
bool $tmp1674 = $tmp1673.value;
if ($tmp1674) goto block12; else goto block13;
block16:;
int64_t $tmp1675 = $tmp1664.value;
int64_t $tmp1676 = $tmp1665.value;
bool $tmp1677 = $tmp1675 < $tmp1676;
panda$core$Bit $tmp1678 = (panda$core$Bit) {$tmp1677};
bool $tmp1679 = $tmp1678.value;
if ($tmp1679) goto block12; else goto block13;
block12:;
// line 696
panda$collections$Array* $tmp1680 = *(&local2);
panda$collections$ImmutableArray** $tmp1681 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1682 = *$tmp1681;
panda$core$Int64 $tmp1683 = *(&local3);
panda$core$Object* $tmp1684 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1682, $tmp1683);
org$pandalanguage$pandac$Type* $tmp1685 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1684), param1);
panda$collections$Array$add$panda$collections$Array$T($tmp1680, ((panda$core$Object*) $tmp1685));
panda$core$Panda$unref$panda$core$Object$Q($tmp1684);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1685));
goto block14;
block14:;
panda$core$Int64 $tmp1686 = *(&local3);
int64_t $tmp1687 = $tmp1665.value;
int64_t $tmp1688 = $tmp1686.value;
int64_t $tmp1689 = $tmp1687 - $tmp1688;
panda$core$Int64 $tmp1690 = (panda$core$Int64) {$tmp1689};
panda$core$UInt64 $tmp1691 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1690);
if ($tmp1667) goto block18; else goto block19;
block18:;
uint64_t $tmp1692 = $tmp1691.value;
uint64_t $tmp1693 = $tmp1669.value;
bool $tmp1694 = $tmp1692 >= $tmp1693;
panda$core$Bit $tmp1695 = (panda$core$Bit) {$tmp1694};
bool $tmp1696 = $tmp1695.value;
if ($tmp1696) goto block17; else goto block13;
block19:;
uint64_t $tmp1697 = $tmp1691.value;
uint64_t $tmp1698 = $tmp1669.value;
bool $tmp1699 = $tmp1697 > $tmp1698;
panda$core$Bit $tmp1700 = (panda$core$Bit) {$tmp1699};
bool $tmp1701 = $tmp1700.value;
if ($tmp1701) goto block17; else goto block13;
block17:;
int64_t $tmp1702 = $tmp1686.value;
int64_t $tmp1703 = $tmp1668.value;
int64_t $tmp1704 = $tmp1702 + $tmp1703;
panda$core$Int64 $tmp1705 = (panda$core$Int64) {$tmp1704};
*(&local3) = $tmp1705;
goto block12;
block13:;
// line 698
org$pandalanguage$pandac$Type* $tmp1706 = *(&local1);
panda$collections$Array* $tmp1707 = *(&local2);
org$pandalanguage$pandac$Type* $tmp1708 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp1706, ((panda$collections$ListView*) $tmp1707));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1708));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1708));
panda$collections$Array* $tmp1709 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1709));
// unreffing remappedArgs
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp1710 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1710));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1708;
block11:;
panda$core$Int64 $tmp1711 = (panda$core$Int64) {1};
panda$core$Bit $tmp1712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1630, $tmp1711);
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block20; else goto block21;
block20:;
// line 700
panda$collections$ImmutableArray** $tmp1714 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1715 = *$tmp1714;
panda$core$Int64 $tmp1716 = (panda$core$Int64) {0};
panda$core$Object* $tmp1717 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1715, $tmp1716);
org$pandalanguage$pandac$Type* $tmp1718 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1717), param1);
org$pandalanguage$pandac$Type* $tmp1719 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1718);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1719));
panda$core$Panda$unref$panda$core$Object$Q($tmp1717);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1718));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1719));
return $tmp1719;
block21:;
panda$core$Int64 $tmp1720 = (panda$core$Int64) {15};
panda$core$Bit $tmp1721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1630, $tmp1720);
bool $tmp1722 = $tmp1721.value;
if ($tmp1722) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp1723 = (panda$core$Int64) {14};
panda$core$Bit $tmp1724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1630, $tmp1723);
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block22; else goto block24;
block24:;
panda$core$Int64 $tmp1726 = (panda$core$Int64) {17};
panda$core$Bit $tmp1727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1630, $tmp1726);
bool $tmp1728 = $tmp1727.value;
if ($tmp1728) goto block22; else goto block25;
block25:;
panda$core$Int64 $tmp1729 = (panda$core$Int64) {16};
panda$core$Bit $tmp1730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1630, $tmp1729);
bool $tmp1731 = $tmp1730.value;
if ($tmp1731) goto block22; else goto block26;
block22:;
// line 702
panda$collections$Array* $tmp1732 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1732);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1733 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1733));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1732));
*(&local4) = $tmp1732;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1732));
// line 703
panda$collections$ImmutableArray** $tmp1734 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1735 = *$tmp1734;
ITable* $tmp1736 = ((panda$collections$CollectionView*) $tmp1735)->$class->itable;
while ($tmp1736->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1736 = $tmp1736->next;
}
$fn1738 $tmp1737 = $tmp1736->methods[0];
panda$core$Int64 $tmp1739 = $tmp1737(((panda$collections$CollectionView*) $tmp1735));
panda$core$Int64 $tmp1740 = (panda$core$Int64) {1};
int64_t $tmp1741 = $tmp1739.value;
int64_t $tmp1742 = $tmp1740.value;
bool $tmp1743 = $tmp1741 >= $tmp1742;
panda$core$Bit $tmp1744 = (panda$core$Bit) {$tmp1743};
bool $tmp1745 = $tmp1744.value;
if ($tmp1745) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp1746 = (panda$core$Int64) {703};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1747, $tmp1746);
abort(); // unreachable
block27:;
// line 704
panda$core$Int64 $tmp1748 = (panda$core$Int64) {0};
panda$collections$ImmutableArray** $tmp1749 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1750 = *$tmp1749;
ITable* $tmp1751 = ((panda$collections$CollectionView*) $tmp1750)->$class->itable;
while ($tmp1751->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1751 = $tmp1751->next;
}
$fn1753 $tmp1752 = $tmp1751->methods[0];
panda$core$Int64 $tmp1754 = $tmp1752(((panda$collections$CollectionView*) $tmp1750));
panda$core$Int64 $tmp1755 = (panda$core$Int64) {1};
int64_t $tmp1756 = $tmp1754.value;
int64_t $tmp1757 = $tmp1755.value;
int64_t $tmp1758 = $tmp1756 - $tmp1757;
panda$core$Int64 $tmp1759 = (panda$core$Int64) {$tmp1758};
panda$core$Bit $tmp1760 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1761 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1748, $tmp1759, $tmp1760);
panda$core$Int64 $tmp1762 = $tmp1761.min;
*(&local5) = $tmp1762;
panda$core$Int64 $tmp1763 = $tmp1761.max;
panda$core$Bit $tmp1764 = $tmp1761.inclusive;
bool $tmp1765 = $tmp1764.value;
panda$core$Int64 $tmp1766 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1767 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1766);
if ($tmp1765) goto block32; else goto block33;
block32:;
int64_t $tmp1768 = $tmp1762.value;
int64_t $tmp1769 = $tmp1763.value;
bool $tmp1770 = $tmp1768 <= $tmp1769;
panda$core$Bit $tmp1771 = (panda$core$Bit) {$tmp1770};
bool $tmp1772 = $tmp1771.value;
if ($tmp1772) goto block29; else goto block30;
block33:;
int64_t $tmp1773 = $tmp1762.value;
int64_t $tmp1774 = $tmp1763.value;
bool $tmp1775 = $tmp1773 < $tmp1774;
panda$core$Bit $tmp1776 = (panda$core$Bit) {$tmp1775};
bool $tmp1777 = $tmp1776.value;
if ($tmp1777) goto block29; else goto block30;
block29:;
// line 705
panda$collections$Array* $tmp1778 = *(&local4);
panda$collections$ImmutableArray** $tmp1779 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1780 = *$tmp1779;
panda$core$Int64 $tmp1781 = *(&local5);
panda$core$Object* $tmp1782 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1780, $tmp1781);
org$pandalanguage$pandac$Type* $tmp1783 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1782), param1);
panda$collections$Array$add$panda$collections$Array$T($tmp1778, ((panda$core$Object*) $tmp1783));
panda$core$Panda$unref$panda$core$Object$Q($tmp1782);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1783));
goto block31;
block31:;
panda$core$Int64 $tmp1784 = *(&local5);
int64_t $tmp1785 = $tmp1763.value;
int64_t $tmp1786 = $tmp1784.value;
int64_t $tmp1787 = $tmp1785 - $tmp1786;
panda$core$Int64 $tmp1788 = (panda$core$Int64) {$tmp1787};
panda$core$UInt64 $tmp1789 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1788);
if ($tmp1765) goto block35; else goto block36;
block35:;
uint64_t $tmp1790 = $tmp1789.value;
uint64_t $tmp1791 = $tmp1767.value;
bool $tmp1792 = $tmp1790 >= $tmp1791;
panda$core$Bit $tmp1793 = (panda$core$Bit) {$tmp1792};
bool $tmp1794 = $tmp1793.value;
if ($tmp1794) goto block34; else goto block30;
block36:;
uint64_t $tmp1795 = $tmp1789.value;
uint64_t $tmp1796 = $tmp1767.value;
bool $tmp1797 = $tmp1795 > $tmp1796;
panda$core$Bit $tmp1798 = (panda$core$Bit) {$tmp1797};
bool $tmp1799 = $tmp1798.value;
if ($tmp1799) goto block34; else goto block30;
block34:;
int64_t $tmp1800 = $tmp1784.value;
int64_t $tmp1801 = $tmp1766.value;
int64_t $tmp1802 = $tmp1800 + $tmp1801;
panda$core$Int64 $tmp1803 = (panda$core$Int64) {$tmp1802};
*(&local5) = $tmp1803;
goto block29;
block30:;
// line 707
org$pandalanguage$pandac$Position* $tmp1804 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp1805 = *$tmp1804;
org$pandalanguage$pandac$Type$Kind* $tmp1806 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1807 = *$tmp1806;
panda$collections$Array* $tmp1808 = *(&local4);
panda$collections$ImmutableArray** $tmp1809 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1810 = *$tmp1809;
panda$collections$ImmutableArray** $tmp1811 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1812 = *$tmp1811;
ITable* $tmp1813 = ((panda$collections$CollectionView*) $tmp1812)->$class->itable;
while ($tmp1813->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1813 = $tmp1813->next;
}
$fn1815 $tmp1814 = $tmp1813->methods[0];
panda$core$Int64 $tmp1816 = $tmp1814(((panda$collections$CollectionView*) $tmp1812));
panda$core$Int64 $tmp1817 = (panda$core$Int64) {1};
int64_t $tmp1818 = $tmp1816.value;
int64_t $tmp1819 = $tmp1817.value;
int64_t $tmp1820 = $tmp1818 - $tmp1819;
panda$core$Int64 $tmp1821 = (panda$core$Int64) {$tmp1820};
panda$core$Object* $tmp1822 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1810, $tmp1821);
org$pandalanguage$pandac$Type* $tmp1823 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1822), param1);
panda$core$Int64* $tmp1824 = &param0->priority;
panda$core$Int64 $tmp1825 = *$tmp1824;
org$pandalanguage$pandac$Type* $tmp1826 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp1805, $tmp1807, ((panda$collections$ListView*) $tmp1808), $tmp1823, $tmp1825);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1826));
panda$core$Panda$unref$panda$core$Object$Q($tmp1822);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1823));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1826));
panda$collections$Array* $tmp1827 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1827));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
return $tmp1826;
block26:;
// line 709
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block5:;
panda$core$Bit $tmp1828 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1829 = $tmp1828.value;
if ($tmp1829) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp1830 = (panda$core$Int64) {681};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1831, $tmp1830, &$s1832);
abort(); // unreachable
block37:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$pandac$Type$get_hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* param0) {

// line 715
panda$core$String** $tmp1833 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1834 = *$tmp1833;
ITable* $tmp1835 = ((panda$collections$Key*) $tmp1834)->$class->itable;
while ($tmp1835->$class != (panda$core$Class*) &panda$collections$Key$class) {
    $tmp1835 = $tmp1835->next;
}
$fn1837 $tmp1836 = $tmp1835->methods[0];
panda$core$Int64 $tmp1838 = $tmp1836(((panda$collections$Key*) $tmp1834));
return $tmp1838;

}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* param0) {

// line 720
panda$core$String** $tmp1839 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1840 = *$tmp1839;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1840));
return $tmp1840;

}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* param0) {

panda$collections$ImmutableArray** $tmp1841 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1842 = *$tmp1841;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1842));
panda$core$Weak** $tmp1843 = &param0->genericParameter;
panda$core$Weak* $tmp1844 = *$tmp1843;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1844));
return;

}

