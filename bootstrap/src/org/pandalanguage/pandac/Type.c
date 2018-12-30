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

typedef panda$core$Bit (*$fn15)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn24)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn34)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn44)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn54)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn81)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn90)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn100)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn110)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn120)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn158)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn170)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn187)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn200)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn217)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn230)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn268)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn272)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn277)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn354)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn358)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn363)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn412)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn416)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn421)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn471)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn496)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn507)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn519)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn546)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn954)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn966)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn977)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn988)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1000)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1012)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1027)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1085)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1137)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1147)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1173)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1188)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1199)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1211)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1223)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1234)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1249)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1260)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1272)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1284)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1299)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1326)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1337)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1349)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1361)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1374)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1395)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1410)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1422)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1438)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1452)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1463)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1486)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1497)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1518)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1535)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1627)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1635)(panda$collections$MapView*);
typedef panda$core$Int64 (*$fn1672)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1750)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1765)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1827)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1849)(panda$collections$Key*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 29, -3248623696866231612, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 197, -4766644293884402549, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x73\x69\x7a\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 151, 3475860875978515115, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x73\x75\x62\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x70\x72\x69\x6f\x72\x69\x74\x79\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 292, -4835118214484693251, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3d", 11, 4555205210328637565, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x3d", 10, -7078666603951044273, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5895082338763246016, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -1180377256514028899, NULL };
static panda$core$String $s830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s1018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x69\x73\x43\x6c\x61\x73\x73\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 92, -6465324935451040327, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x69\x73\x4d\x65\x74\x68\x6f\x64\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 93, 7566891704899688644, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -1766462943154097753, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, 916331035999347368, NULL };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 101, 8536794682809672847, NULL };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 127, -3361594779411923433, NULL };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 110, -5923730647398865852, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 180, -8366325379630919520, NULL };
static panda$core$String $s1759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 180, -2602239416666791808, NULL };

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
bool $tmp6 = $tmp5 != ((panda$core$Weak*) NULL);
if ($tmp6) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp7 = panda$core$Weak$get$R$panda$core$Weak$T($tmp5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp7)));
panda$core$Panda$unref$panda$core$Object$Q($tmp7);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Weak** $tmp8 = &param0->genericParameter;
*$tmp8 = $tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp9;
$tmp9 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp9->value = param2;
panda$core$Int64 $tmp10 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp11 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp10);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp12;
$tmp12 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp12->value = $tmp11;
ITable* $tmp13 = ((panda$core$Equatable*) $tmp9)->$class->itable;
while ($tmp13->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[1];
panda$core$Bit $tmp16 = $tmp14(((panda$core$Equatable*) $tmp9), ((panda$core$Equatable*) $tmp12));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp9)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp12)));
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block4;
block3:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp18;
$tmp18 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp18->value = param2;
panda$core$Int64 $tmp19 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp20 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp19);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp21;
$tmp21 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp21->value = $tmp20;
ITable* $tmp22 = ((panda$core$Equatable*) $tmp18)->$class->itable;
while ($tmp22->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp22 = $tmp22->next;
}
$fn24 $tmp23 = $tmp22->methods[1];
panda$core$Bit $tmp25 = $tmp23(((panda$core$Equatable*) $tmp18), ((panda$core$Equatable*) $tmp21));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp18)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp21)));
*(&local3) = $tmp25;
goto block5;
block4:;
*(&local3) = $tmp16;
goto block5;
block5:;
panda$core$Bit $tmp26 = *(&local3);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp28;
$tmp28 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp28->value = param2;
panda$core$Int64 $tmp29 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp30 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp29);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp31;
$tmp31 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp31->value = $tmp30;
ITable* $tmp32 = ((panda$core$Equatable*) $tmp28)->$class->itable;
while ($tmp32->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp32 = $tmp32->next;
}
$fn34 $tmp33 = $tmp32->methods[1];
panda$core$Bit $tmp35 = $tmp33(((panda$core$Equatable*) $tmp28), ((panda$core$Equatable*) $tmp31));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp28)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp31)));
*(&local2) = $tmp35;
goto block8;
block7:;
*(&local2) = $tmp26;
goto block8;
block8:;
panda$core$Bit $tmp36 = *(&local2);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block9; else goto block10;
block9:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp38;
$tmp38 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp38->value = param2;
panda$core$Int64 $tmp39 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp40 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp39);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp41;
$tmp41 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp41->value = $tmp40;
ITable* $tmp42 = ((panda$core$Equatable*) $tmp38)->$class->itable;
while ($tmp42->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp42 = $tmp42->next;
}
$fn44 $tmp43 = $tmp42->methods[1];
panda$core$Bit $tmp45 = $tmp43(((panda$core$Equatable*) $tmp38), ((panda$core$Equatable*) $tmp41));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp38)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp41)));
*(&local1) = $tmp45;
goto block11;
block10:;
*(&local1) = $tmp36;
goto block11;
block11:;
panda$core$Bit $tmp46 = *(&local1);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp48;
$tmp48 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp48->value = param2;
panda$core$Int64 $tmp49 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp50 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp49);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp51;
$tmp51 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp51->value = $tmp50;
ITable* $tmp52 = ((panda$core$Equatable*) $tmp48)->$class->itable;
while ($tmp52->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[1];
panda$core$Bit $tmp55 = $tmp53(((panda$core$Equatable*) $tmp48), ((panda$core$Equatable*) $tmp51));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp48)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp51)));
*(&local0) = $tmp55;
goto block14;
block13:;
*(&local0) = $tmp46;
goto block14;
block14:;
panda$core$Bit $tmp56 = *(&local0);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp58 = (panda$core$Int64) {77};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s59, $tmp58, &$s60);
abort(); // unreachable
block15:;
// line 78
org$pandalanguage$pandac$Type$Kind* $tmp61 = &param0->typeKind;
*$tmp61 = param2;
// line 79
org$pandalanguage$pandac$Position* $tmp62 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
*$tmp62 = param3;
// line 80
panda$core$Bit* $tmp63 = &param0->resolved;
*$tmp63 = param4;
// line 81
panda$collections$ImmutableArray** $tmp64 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp65 = *$tmp64;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
panda$collections$ImmutableArray** $tmp66 = &param0->subtypes;
*$tmp66 = ((panda$collections$ImmutableArray*) NULL);
// line 82
panda$core$Int64 $tmp67 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Symbol$Kind $tmp68 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp67);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp68, param3, param1);
return;

}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64(org$pandalanguage$pandac$Type* param0, panda$core$String* param1, org$pandalanguage$pandac$Type$Kind param2, panda$core$Int64 param3) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
// line 37
panda$core$Weak* $tmp69 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp69, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Weak** $tmp70 = &param0->genericParameter;
panda$core$Weak* $tmp71 = *$tmp70;
bool $tmp72 = $tmp71 != ((panda$core$Weak*) NULL);
if ($tmp72) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp73 = panda$core$Weak$get$R$panda$core$Weak$T($tmp71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp73)));
panda$core$Panda$unref$panda$core$Object$Q($tmp73);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$core$Weak** $tmp74 = &param0->genericParameter;
*$tmp74 = $tmp69;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp75;
$tmp75 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp75->value = param2;
panda$core$Int64 $tmp76 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp77 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp76);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp78;
$tmp78 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp78->value = $tmp77;
ITable* $tmp79 = ((panda$core$Equatable*) $tmp75)->$class->itable;
while ($tmp79->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp79 = $tmp79->next;
}
$fn81 $tmp80 = $tmp79->methods[1];
panda$core$Bit $tmp82 = $tmp80(((panda$core$Equatable*) $tmp75), ((panda$core$Equatable*) $tmp78));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp75)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp78)));
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block3; else goto block4;
block3:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp84;
$tmp84 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp84->value = param2;
panda$core$Int64 $tmp85 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp86 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp85);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp87;
$tmp87 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp87->value = $tmp86;
ITable* $tmp88 = ((panda$core$Equatable*) $tmp84)->$class->itable;
while ($tmp88->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp88 = $tmp88->next;
}
$fn90 $tmp89 = $tmp88->methods[1];
panda$core$Bit $tmp91 = $tmp89(((panda$core$Equatable*) $tmp84), ((panda$core$Equatable*) $tmp87));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp84)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp87)));
*(&local3) = $tmp91;
goto block5;
block4:;
*(&local3) = $tmp82;
goto block5;
block5:;
panda$core$Bit $tmp92 = *(&local3);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp94;
$tmp94 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp94->value = param2;
panda$core$Int64 $tmp95 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp96 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp95);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp97;
$tmp97 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp97->value = $tmp96;
ITable* $tmp98 = ((panda$core$Equatable*) $tmp94)->$class->itable;
while ($tmp98->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[1];
panda$core$Bit $tmp101 = $tmp99(((panda$core$Equatable*) $tmp94), ((panda$core$Equatable*) $tmp97));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp94)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp97)));
*(&local2) = $tmp101;
goto block8;
block7:;
*(&local2) = $tmp92;
goto block8;
block8:;
panda$core$Bit $tmp102 = *(&local2);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block9; else goto block10;
block9:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp104;
$tmp104 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp104->value = param2;
panda$core$Int64 $tmp105 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp106 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp105);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp107;
$tmp107 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp107->value = $tmp106;
ITable* $tmp108 = ((panda$core$Equatable*) $tmp104)->$class->itable;
while ($tmp108->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp108 = $tmp108->next;
}
$fn110 $tmp109 = $tmp108->methods[1];
panda$core$Bit $tmp111 = $tmp109(((panda$core$Equatable*) $tmp104), ((panda$core$Equatable*) $tmp107));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp104)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp107)));
*(&local1) = $tmp111;
goto block11;
block10:;
*(&local1) = $tmp102;
goto block11;
block11:;
panda$core$Bit $tmp112 = *(&local1);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp114;
$tmp114 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp114->value = param2;
panda$core$Int64 $tmp115 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp116 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp115);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp117;
$tmp117 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp117->value = $tmp116;
ITable* $tmp118 = ((panda$core$Equatable*) $tmp114)->$class->itable;
while ($tmp118->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
panda$core$Bit $tmp121 = $tmp119(((panda$core$Equatable*) $tmp114), ((panda$core$Equatable*) $tmp117));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp114)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp117)));
*(&local0) = $tmp121;
goto block14;
block13:;
*(&local0) = $tmp112;
goto block14;
block14:;
panda$core$Bit $tmp122 = *(&local0);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp124 = (panda$core$Int64) {87};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s125, $tmp124, &$s126);
abort(); // unreachable
block15:;
// line 88
panda$core$Bit $tmp127 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(param1, &$s128);
panda$core$Bit $tmp129 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp127);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp131 = (panda$core$Int64) {88};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s132, $tmp131);
abort(); // unreachable
block17:;
// line 89
org$pandalanguage$pandac$Type$Kind* $tmp133 = &param0->typeKind;
*$tmp133 = param2;
// line 90
org$pandalanguage$pandac$Position $tmp134 = org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(param3, param3);
org$pandalanguage$pandac$Position* $tmp135 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
*$tmp135 = $tmp134;
// line 91
panda$core$Bit $tmp136 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp137 = &param0->resolved;
*$tmp137 = $tmp136;
// line 92
panda$collections$ImmutableArray** $tmp138 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp139 = *$tmp138;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
panda$collections$ImmutableArray** $tmp140 = &param0->subtypes;
*$tmp140 = ((panda$collections$ImmutableArray*) NULL);
// line 93
panda$core$Int64 $tmp141 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Symbol$Kind $tmp142 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp141);
org$pandalanguage$pandac$Position* $tmp143 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp144 = *$tmp143;
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp142, $tmp144, param1);
return;

}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* param0, panda$core$String* param1, org$pandalanguage$pandac$Type$Kind param2, org$pandalanguage$pandac$Position param3, panda$collections$ListView* param4, panda$core$Bit param5) {

// line 97
panda$core$Int64 $tmp145 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit$panda$core$Int64(param0, param1, param2, param3, param4, param5, $tmp145);
return;

}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit$panda$core$Int64(org$pandalanguage$pandac$Type* param0, panda$core$String* param1, org$pandalanguage$pandac$Type$Kind param2, org$pandalanguage$pandac$Position param3, panda$collections$ListView* param4, panda$core$Bit param5, panda$core$Int64 param6) {

// line 37
panda$core$Weak* $tmp146 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp146, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Weak** $tmp147 = &param0->genericParameter;
panda$core$Weak* $tmp148 = *$tmp147;
bool $tmp149 = $tmp148 != ((panda$core$Weak*) NULL);
if ($tmp149) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp150 = panda$core$Weak$get$R$panda$core$Weak$T($tmp148);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp150)));
panda$core$Panda$unref$panda$core$Object$Q($tmp150);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
panda$core$Weak** $tmp151 = &param0->genericParameter;
*$tmp151 = $tmp146;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp152;
$tmp152 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp152->value = param2;
panda$core$Int64 $tmp153 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp154 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp153);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp155;
$tmp155 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp155->value = $tmp154;
ITable* $tmp156 = ((panda$core$Equatable*) $tmp152)->$class->itable;
while ($tmp156->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[1];
panda$core$Bit $tmp159 = $tmp157(((panda$core$Equatable*) $tmp152), ((panda$core$Equatable*) $tmp155));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp152)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp155)));
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp161 = (panda$core$Int64) {101};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s162, $tmp161, &$s163);
abort(); // unreachable
block3:;
// line 103
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp164;
$tmp164 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp164->value = param2;
panda$core$Int64 $tmp165 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp166 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp165);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp167;
$tmp167 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp167->value = $tmp166;
ITable* $tmp168 = ((panda$core$Equatable*) $tmp164)->$class->itable;
while ($tmp168->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[0];
panda$core$Bit $tmp171 = $tmp169(((panda$core$Equatable*) $tmp164), ((panda$core$Equatable*) $tmp167));
panda$core$Bit $tmp172 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(param1, &$s173);
panda$core$Bit $tmp174 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp171, $tmp172);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp176 = (panda$core$Int64) {103};
panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s178, param1);
panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, &$s180);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp181;
$tmp181 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp181->value = param2;
panda$core$Int64 $tmp182 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp183 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp182);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp184;
$tmp184 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp184->value = $tmp183;
ITable* $tmp185 = ((panda$core$Equatable*) $tmp181)->$class->itable;
while ($tmp185->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp185 = $tmp185->next;
}
$fn187 $tmp186 = $tmp185->methods[0];
panda$core$Bit $tmp188 = $tmp186(((panda$core$Equatable*) $tmp181), ((panda$core$Equatable*) $tmp184));
panda$core$Bit$wrapper* $tmp189;
$tmp189 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp189->value = $tmp188;
panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp179, ((panda$core$Object*) $tmp189));
panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp190, &$s192);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s193, $tmp176, $tmp191);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp181)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp184)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
abort(); // unreachable
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp164)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp167)));
// line 105
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp194;
$tmp194 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp194->value = param2;
panda$core$Int64 $tmp195 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp196 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp195);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp197;
$tmp197 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp197->value = $tmp196;
ITable* $tmp198 = ((panda$core$Equatable*) $tmp194)->$class->itable;
while ($tmp198->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp198 = $tmp198->next;
}
$fn200 $tmp199 = $tmp198->methods[0];
panda$core$Bit $tmp201 = $tmp199(((panda$core$Equatable*) $tmp194), ((panda$core$Equatable*) $tmp197));
panda$core$Bit $tmp202 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(param1, &$s203);
panda$core$Bit $tmp204 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp201, $tmp202);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp206 = (panda$core$Int64) {105};
panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s208, param1);
panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp207, &$s210);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp211;
$tmp211 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp211->value = param2;
panda$core$Int64 $tmp212 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp213 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp212);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp214;
$tmp214 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp214->value = $tmp213;
ITable* $tmp215 = ((panda$core$Equatable*) $tmp211)->$class->itable;
while ($tmp215->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp215 = $tmp215->next;
}
$fn217 $tmp216 = $tmp215->methods[0];
panda$core$Bit $tmp218 = $tmp216(((panda$core$Equatable*) $tmp211), ((panda$core$Equatable*) $tmp214));
panda$core$Bit$wrapper* $tmp219;
$tmp219 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp219->value = $tmp218;
panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp209, ((panda$core$Object*) $tmp219));
panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, &$s222);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s223, $tmp206, $tmp221);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp211)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp214)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
abort(); // unreachable
block7:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp194)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp197)));
// line 107
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp224;
$tmp224 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp224->value = param2;
panda$core$Int64 $tmp225 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp226 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp225);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp227;
$tmp227 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp227->value = $tmp226;
ITable* $tmp228 = ((panda$core$Equatable*) $tmp224)->$class->itable;
while ($tmp228->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp228 = $tmp228->next;
}
$fn230 $tmp229 = $tmp228->methods[1];
panda$core$Bit $tmp231 = $tmp229(((panda$core$Equatable*) $tmp224), ((panda$core$Equatable*) $tmp227));
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp233 = (panda$core$Int64) {107};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s234, $tmp233);
abort(); // unreachable
block9:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp224)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp227)));
// line 108
org$pandalanguage$pandac$Type$Kind* $tmp235 = &param0->typeKind;
*$tmp235 = param2;
// line 109
org$pandalanguage$pandac$Position* $tmp236 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
*$tmp236 = param3;
// line 110
panda$core$Bit* $tmp237 = &param0->resolved;
*$tmp237 = param5;
// line 111
panda$core$Int64* $tmp238 = &param0->priority;
*$tmp238 = param6;
// line 112
panda$collections$ImmutableArray* $tmp239 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp239, param4);
panda$collections$ImmutableArray** $tmp240 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp241 = *$tmp240;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
panda$collections$ImmutableArray** $tmp242 = &param0->subtypes;
*$tmp242 = $tmp239;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// line 113
panda$core$Int64 $tmp243 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Symbol$Kind $tmp244 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp243);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp244, param3, param1);
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
panda$core$Weak* $tmp245 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp245, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Weak** $tmp246 = &param0->genericParameter;
panda$core$Weak* $tmp247 = *$tmp246;
bool $tmp248 = $tmp247 != ((panda$core$Weak*) NULL);
if ($tmp248) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp249 = panda$core$Weak$get$R$panda$core$Weak$T($tmp247);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp249)));
panda$core$Panda$unref$panda$core$Object$Q($tmp249);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
panda$core$Weak** $tmp250 = &param0->genericParameter;
*$tmp250 = $tmp245;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
// line 118
panda$core$Int64 $tmp251 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Type$Kind $tmp252 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp251);
org$pandalanguage$pandac$Type$Kind* $tmp253 = &param0->typeKind;
*$tmp253 = $tmp252;
// line 119
panda$collections$ImmutableArray* $tmp254 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp254, param1);
panda$collections$ImmutableArray** $tmp255 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp256 = *$tmp255;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
panda$collections$ImmutableArray** $tmp257 = &param0->subtypes;
*$tmp257 = $tmp254;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
// line 120
panda$core$MutableString* $tmp258 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp258, &$s259);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp260 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp260));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
*(&local0) = $tmp258;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
// line 121
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp261 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s262));
*(&local1) = &$s263;
// line 122
panda$core$Bit $tmp264 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp265 = &param0->resolved;
*$tmp265 = $tmp264;
// line 123
ITable* $tmp266 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp266->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp266 = $tmp266->next;
}
$fn268 $tmp267 = $tmp266->methods[0];
panda$collections$Iterator* $tmp269 = $tmp267(((panda$collections$Iterable*) param1));
goto block3;
block3:;
ITable* $tmp270 = $tmp269->$class->itable;
while ($tmp270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp270 = $tmp270->next;
}
$fn272 $tmp271 = $tmp270->methods[0];
panda$core$Bit $tmp273 = $tmp271($tmp269);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block5; else goto block4;
block4:;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp275 = $tmp269->$class->itable;
while ($tmp275->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp275 = $tmp275->next;
}
$fn277 $tmp276 = $tmp275->methods[1];
panda$core$Object* $tmp278 = $tmp276($tmp269);
org$pandalanguage$pandac$Type* $tmp279 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp278)));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp278);
// line 124
panda$core$MutableString* $tmp280 = *(&local0);
panda$core$String* $tmp281 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp280, $tmp281);
// line 125
panda$core$MutableString* $tmp282 = *(&local0);
org$pandalanguage$pandac$Type* $tmp283 = *(&local2);
panda$core$MutableString$append$panda$core$Object($tmp282, ((panda$core$Object*) $tmp283));
// line 126
panda$core$String* $tmp284 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s285));
*(&local1) = &$s286;
// line 127
panda$core$Bit* $tmp287 = &param0->resolved;
panda$core$Bit $tmp288 = *$tmp287;
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Type* $tmp290 = *(&local2);
panda$core$Bit* $tmp291 = &$tmp290->resolved;
panda$core$Bit $tmp292 = *$tmp291;
*(&local3) = $tmp292;
goto block8;
block7:;
*(&local3) = $tmp288;
goto block8;
block8:;
panda$core$Bit $tmp293 = *(&local3);
panda$core$Bit* $tmp294 = &param0->resolved;
*$tmp294 = $tmp293;
panda$core$Panda$unref$panda$core$Object$Q($tmp278);
org$pandalanguage$pandac$Type* $tmp295 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// line 129
panda$core$MutableString* $tmp296 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp296, &$s297);
// line 130
panda$core$Int64 $tmp298 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Symbol$Kind $tmp299 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp298);
org$pandalanguage$pandac$Position* $tmp300 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp301 = *$tmp300;
panda$core$MutableString* $tmp302 = *(&local0);
panda$core$String* $tmp303 = panda$core$MutableString$finish$R$panda$core$String($tmp302);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp299, $tmp301, $tmp303);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
panda$core$String* $tmp304 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp305 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// unreffing name
*(&local0) = ((panda$core$MutableString*) NULL);
return;

}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$ClassDecl$GenericParameter* param1) {

// line 37
panda$core$Weak* $tmp306 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp306, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) NULL)));
panda$core$Weak** $tmp307 = &param0->genericParameter;
panda$core$Weak* $tmp308 = *$tmp307;
bool $tmp309 = $tmp308 != ((panda$core$Weak*) NULL);
if ($tmp309) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp310 = panda$core$Weak$get$R$panda$core$Weak$T($tmp308);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp310)));
panda$core$Panda$unref$panda$core$Object$Q($tmp310);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
panda$core$Weak** $tmp311 = &param0->genericParameter;
*$tmp311 = $tmp306;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
// line 134
panda$core$Int64 $tmp312 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type$Kind $tmp313 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp312);
org$pandalanguage$pandac$Type$Kind* $tmp314 = &param0->typeKind;
*$tmp314 = $tmp313;
// line 135
panda$core$Weak* $tmp315 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp315, ((panda$core$Object*) param1));
panda$core$Weak** $tmp316 = &param0->genericParameter;
panda$core$Weak* $tmp317 = *$tmp316;
bool $tmp318 = $tmp317 != ((panda$core$Weak*) NULL);
if ($tmp318) goto block3; else goto block4;
block3:;
panda$core$Object* $tmp319 = panda$core$Weak$get$R$panda$core$Weak$T($tmp317);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp319)));
panda$core$Panda$unref$panda$core$Object$Q($tmp319);
goto block4;
block4:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
panda$core$Weak** $tmp320 = &param0->genericParameter;
*$tmp320 = $tmp315;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
// line 136
panda$core$Bit $tmp321 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp322 = &param0->resolved;
*$tmp322 = $tmp321;
// line 137
panda$collections$ImmutableArray** $tmp323 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp324 = *$tmp323;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ImmutableArray*) NULL)));
panda$collections$ImmutableArray** $tmp325 = &param0->subtypes;
*$tmp325 = ((panda$collections$ImmutableArray*) NULL);
// line 138
panda$core$Int64 $tmp326 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Symbol$Kind $tmp327 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp326);
org$pandalanguage$pandac$Position* $tmp328 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp329 = *$tmp328;
panda$core$String** $tmp330 = &param1->owner;
panda$core$String* $tmp331 = *$tmp330;
panda$core$String* $tmp332 = panda$core$String$convert$R$panda$core$String($tmp331);
panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp332, &$s334);
panda$core$String** $tmp335 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp336 = *$tmp335;
panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, $tmp336);
panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp337, &$s339);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp327, $tmp329, $tmp338);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
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
panda$core$Bit* $tmp340 = &param0->resolved;
panda$core$Bit $tmp341 = *$tmp340;
*(&local0) = $tmp341;
// line 144
panda$core$MutableString* $tmp342 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp342);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp343 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
*(&local1) = $tmp342;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// line 145
panda$core$MutableString* $tmp344 = *(&local1);
panda$core$String** $tmp345 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp346 = *$tmp345;
panda$core$MutableString$append$panda$core$String($tmp344, $tmp346);
// line 146
panda$core$MutableString* $tmp347 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp347, &$s348);
// line 147
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp349 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp349));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s350));
*(&local2) = &$s351;
// line 148
ITable* $tmp352 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp352->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp352 = $tmp352->next;
}
$fn354 $tmp353 = $tmp352->methods[0];
panda$collections$Iterator* $tmp355 = $tmp353(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp356 = $tmp355->$class->itable;
while ($tmp356->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp356 = $tmp356->next;
}
$fn358 $tmp357 = $tmp356->methods[0];
panda$core$Bit $tmp359 = $tmp357($tmp355);
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block3; else goto block2;
block2:;
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp361 = $tmp355->$class->itable;
while ($tmp361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp361 = $tmp361->next;
}
$fn363 $tmp362 = $tmp361->methods[1];
panda$core$Object* $tmp364 = $tmp362($tmp355);
org$pandalanguage$pandac$Type* $tmp365 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp365));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp364)));
*(&local3) = ((org$pandalanguage$pandac$Type*) $tmp364);
// line 149
panda$core$Bit $tmp366 = *(&local0);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Type* $tmp368 = *(&local3);
panda$core$Bit* $tmp369 = &$tmp368->resolved;
panda$core$Bit $tmp370 = *$tmp369;
*(&local4) = $tmp370;
goto block6;
block5:;
*(&local4) = $tmp366;
goto block6;
block6:;
panda$core$Bit $tmp371 = *(&local4);
*(&local0) = $tmp371;
// line 150
panda$core$MutableString* $tmp372 = *(&local1);
panda$core$String* $tmp373 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp372, $tmp373);
// line 151
panda$core$MutableString* $tmp374 = *(&local1);
org$pandalanguage$pandac$Type* $tmp375 = *(&local3);
panda$core$String** $tmp376 = &((org$pandalanguage$pandac$Symbol*) $tmp375)->name;
panda$core$String* $tmp377 = *$tmp376;
panda$core$MutableString$append$panda$core$String($tmp374, $tmp377);
// line 152
panda$core$String* $tmp378 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s379));
*(&local2) = &$s380;
panda$core$Panda$unref$panda$core$Object$Q($tmp364);
org$pandalanguage$pandac$Type* $tmp381 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
// unreffing a
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
// line 154
panda$core$MutableString* $tmp382 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp382, &$s383);
// line 155
panda$collections$Array* $tmp384 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp384);
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp385 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp384));
*(&local5) = $tmp384;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp384));
// line 156
panda$collections$Array* $tmp386 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp386, ((panda$core$Object*) param0));
// line 157
panda$collections$Array* $tmp387 = *(&local5);
panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp387, ((panda$collections$CollectionView*) param1));
// line 158
org$pandalanguage$pandac$Type* $tmp388 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$MutableString* $tmp389 = *(&local1);
panda$core$String* $tmp390 = panda$core$MutableString$finish$R$panda$core$String($tmp389);
panda$core$Int64 $tmp391 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp392 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp391);
org$pandalanguage$pandac$Position* $tmp393 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp394 = *$tmp393;
panda$collections$Array* $tmp395 = *(&local5);
panda$core$Bit $tmp396 = *(&local0);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp388, $tmp390, $tmp392, $tmp394, ((panda$collections$ListView*) $tmp395), $tmp396);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
panda$collections$Array* $tmp397 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
// unreffing subtypes
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp398 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
// unreffing separator
*(&local2) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp399 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
// unreffing name
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp388;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Position param0, org$pandalanguage$pandac$Type$Kind param1, panda$collections$ListView* param2, org$pandalanguage$pandac$Type* param3, panda$core$Int64 param4) {

panda$core$Bit local0;
panda$core$MutableString* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$core$String* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
panda$core$Bit local5;
// line 164
panda$core$Bit* $tmp400 = &param3->resolved;
panda$core$Bit $tmp401 = *$tmp400;
*(&local0) = $tmp401;
// line 165
panda$core$MutableString* $tmp402 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp402, &$s403);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp404 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
*(&local1) = $tmp402;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// line 166
panda$collections$Array* $tmp405 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp405);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp406 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
*(&local2) = $tmp405;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
// line 167
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp407 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s408));
*(&local3) = &$s409;
// line 168
ITable* $tmp410 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp410->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp410 = $tmp410->next;
}
$fn412 $tmp411 = $tmp410->methods[0];
panda$collections$Iterator* $tmp413 = $tmp411(((panda$collections$Iterable*) param2));
goto block1;
block1:;
ITable* $tmp414 = $tmp413->$class->itable;
while ($tmp414->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp414 = $tmp414->next;
}
$fn416 $tmp415 = $tmp414->methods[0];
panda$core$Bit $tmp417 = $tmp415($tmp413);
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block3; else goto block2;
block2:;
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp419 = $tmp413->$class->itable;
while ($tmp419->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp419 = $tmp419->next;
}
$fn421 $tmp420 = $tmp419->methods[1];
panda$core$Object* $tmp422 = $tmp420($tmp413);
org$pandalanguage$pandac$Type* $tmp423 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp422)));
*(&local4) = ((org$pandalanguage$pandac$Type*) $tmp422);
// line 169
panda$collections$Array* $tmp424 = *(&local2);
org$pandalanguage$pandac$Type* $tmp425 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp424, ((panda$core$Object*) $tmp425));
// line 170
panda$core$Bit $tmp426 = *(&local0);
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Type* $tmp428 = *(&local4);
panda$core$Bit* $tmp429 = &$tmp428->resolved;
panda$core$Bit $tmp430 = *$tmp429;
*(&local5) = $tmp430;
goto block6;
block5:;
*(&local5) = $tmp426;
goto block6;
block6:;
panda$core$Bit $tmp431 = *(&local5);
*(&local0) = $tmp431;
// line 171
panda$core$MutableString* $tmp432 = *(&local1);
panda$core$String* $tmp433 = *(&local3);
panda$core$MutableString$append$panda$core$String($tmp432, $tmp433);
// line 172
panda$core$MutableString* $tmp434 = *(&local1);
org$pandalanguage$pandac$Type* $tmp435 = *(&local4);
panda$core$String** $tmp436 = &((org$pandalanguage$pandac$Symbol*) $tmp435)->name;
panda$core$String* $tmp437 = *$tmp436;
panda$core$MutableString$append$panda$core$String($tmp434, $tmp437);
// line 173
panda$core$String* $tmp438 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s439));
*(&local3) = &$s440;
panda$core$Panda$unref$panda$core$Object$Q($tmp422);
org$pandalanguage$pandac$Type* $tmp441 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
// unreffing p
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
// line 175
panda$core$Int64 $tmp442 = param1.$rawValue;
panda$core$Int64 $tmp443 = (panda$core$Int64) {14};
panda$core$Bit $tmp444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp442, $tmp443);
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block8; else goto block9;
block8:;
// line 177
panda$core$MutableString* $tmp446 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp446, &$s447);
goto block7;
block9:;
panda$core$Int64 $tmp448 = (panda$core$Int64) {15};
panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp442, $tmp448);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block10; else goto block11;
block10:;
// line 179
panda$core$MutableString* $tmp451 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp451, &$s452);
goto block7;
block11:;
panda$core$Int64 $tmp453 = (panda$core$Int64) {16};
panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp442, $tmp453);
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block12; else goto block13;
block12:;
// line 181
panda$core$MutableString* $tmp456 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp456, &$s457);
goto block7;
block13:;
panda$core$Int64 $tmp458 = (panda$core$Int64) {17};
panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp442, $tmp458);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block14; else goto block15;
block14:;
// line 183
panda$core$MutableString* $tmp461 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp461, &$s462);
goto block7;
block15:;
// line 185
panda$core$Bit $tmp463 = panda$core$Bit$init$builtin_bit(false);
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp465 = (panda$core$Int64) {185};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s466, $tmp465);
abort(); // unreachable
block16:;
goto block7;
block7:;
// line 187
panda$collections$Array* $tmp467 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp467, ((panda$core$Object*) param3));
// line 188
org$pandalanguage$pandac$Type* $tmp468 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp469 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp469->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp469 = $tmp469->next;
}
$fn471 $tmp470 = $tmp469->methods[1];
panda$core$Bit $tmp472 = $tmp470(((panda$core$Equatable*) param3), ((panda$core$Equatable*) $tmp468));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block18; else goto block19;
block18:;
// line 189
panda$core$MutableString* $tmp474 = *(&local1);
panda$core$String** $tmp475 = &((org$pandalanguage$pandac$Symbol*) param3)->name;
panda$core$String* $tmp476 = *$tmp475;
panda$core$MutableString$append$panda$core$String($tmp474, $tmp476);
goto block19;
block19:;
// line 191
panda$core$MutableString* $tmp477 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp477, &$s478);
// line 192
org$pandalanguage$pandac$Type* $tmp479 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$MutableString* $tmp480 = *(&local1);
panda$core$String* $tmp481 = panda$core$MutableString$finish$R$panda$core$String($tmp480);
panda$collections$Array* $tmp482 = *(&local2);
panda$collections$ImmutableArray* $tmp483 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp482);
panda$core$Bit $tmp484 = *(&local0);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit$panda$core$Int64($tmp479, $tmp481, param1, param0, ((panda$collections$ListView*) $tmp483), $tmp484, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
panda$core$String* $tmp485 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp485));
// unreffing separator
*(&local3) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp486 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
// unreffing subtypes
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$MutableString* $tmp487 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp487));
// unreffing name
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp479;

}
panda$core$Int64 org$pandalanguage$pandac$Type$get_size$R$panda$core$Int64(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
// line 196
org$pandalanguage$pandac$Type$Kind* $tmp488 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp489 = *$tmp488;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp490;
$tmp490 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp490->value = $tmp489;
panda$core$Int64 $tmp491 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp492 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp491);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp493;
$tmp493 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp493->value = $tmp492;
ITable* $tmp494 = ((panda$core$Equatable*) $tmp490)->$class->itable;
while ($tmp494->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp494 = $tmp494->next;
}
$fn496 $tmp495 = $tmp494->methods[0];
panda$core$Bit $tmp497 = $tmp495(((panda$core$Equatable*) $tmp490), ((panda$core$Equatable*) $tmp493));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp490)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp493)));
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block1; else goto block2;
block1:;
*(&local1) = $tmp497;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp499 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp500 = *$tmp499;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp501;
$tmp501 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp501->value = $tmp500;
panda$core$Int64 $tmp502 = (panda$core$Int64) {3};
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
*(&local1) = $tmp508;
goto block3;
block3:;
panda$core$Bit $tmp509 = *(&local1);
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block4; else goto block5;
block4:;
*(&local0) = $tmp509;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp511 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp512 = *$tmp511;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp513;
$tmp513 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp513->value = $tmp512;
panda$core$Int64 $tmp514 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp515 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp514);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp516;
$tmp516 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp516->value = $tmp515;
ITable* $tmp517 = ((panda$core$Equatable*) $tmp513)->$class->itable;
while ($tmp517->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp517 = $tmp517->next;
}
$fn519 $tmp518 = $tmp517->methods[0];
panda$core$Bit $tmp520 = $tmp518(((panda$core$Equatable*) $tmp513), ((panda$core$Equatable*) $tmp516));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp513)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp516)));
*(&local0) = $tmp520;
goto block6;
block6:;
panda$core$Bit $tmp521 = *(&local0);
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp523 = (panda$core$Int64) {196};
panda$core$String* $tmp524 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s525, ((panda$core$Object*) param0));
panda$core$String* $tmp526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp524, &$s527);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s528, $tmp523, $tmp526);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
abort(); // unreachable
block7:;
// line 198
org$pandalanguage$pandac$Position* $tmp529 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp530 = *$tmp529;
panda$core$Int64 $tmp531 = $tmp530.line;
return $tmp531;

}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$Type* param1) {

panda$core$Bit local0;
// line 208
panda$core$String** $tmp532 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp533 = *$tmp532;
panda$core$String** $tmp534 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp535 = *$tmp534;
panda$core$Bit $tmp536 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp533, $tmp535);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$Type$Kind* $tmp538 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp539 = *$tmp538;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp540;
$tmp540 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp540->value = $tmp539;
org$pandalanguage$pandac$Type$Kind* $tmp541 = &param1->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp542 = *$tmp541;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp543;
$tmp543 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp543->value = $tmp542;
ITable* $tmp544 = ((panda$core$Equatable*) $tmp540)->$class->itable;
while ($tmp544->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp544 = $tmp544->next;
}
$fn546 $tmp545 = $tmp544->methods[0];
panda$core$Bit $tmp547 = $tmp545(((panda$core$Equatable*) $tmp540), ((panda$core$Equatable*) $tmp543));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp540)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp543)));
*(&local0) = $tmp547;
goto block3;
block2:;
*(&local0) = $tmp536;
goto block3;
block3:;
panda$core$Bit $tmp548 = *(&local0);
return $tmp548;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {

// line 213
org$pandalanguage$pandac$Type* $tmp549 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp550 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Type$Kind $tmp551 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp550);
org$pandalanguage$pandac$Position $tmp552 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp553 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp549, &$s554, $tmp551, $tmp552, $tmp553);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
return $tmp549;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {

// line 218
org$pandalanguage$pandac$Type* $tmp555 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp556 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp557 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp556);
org$pandalanguage$pandac$Position $tmp558 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp559 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp555, &$s560, $tmp557, $tmp558, $tmp559);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
return $tmp555;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {

// line 223
org$pandalanguage$pandac$Type* $tmp561 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp562 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp563 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp562);
org$pandalanguage$pandac$Position $tmp564 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp565 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp561, &$s566, $tmp563, $tmp564, $tmp565);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
return $tmp561;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {

panda$collections$Array* local0 = NULL;
// line 228
panda$collections$Array* $tmp567 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp567);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp568 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
*(&local0) = $tmp567;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
// line 229
panda$collections$Array* $tmp569 = *(&local0);
org$pandalanguage$pandac$Type* $tmp570 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp569, ((panda$core$Object*) $tmp570));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
// line 230
org$pandalanguage$pandac$Type* $tmp571 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp572 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp573 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp572);
org$pandalanguage$pandac$Position $tmp574 = org$pandalanguage$pandac$Position$init();
panda$collections$Array* $tmp575 = *(&local0);
panda$core$Bit $tmp576 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp571, &$s577, $tmp573, $tmp574, ((panda$collections$ListView*) $tmp575), $tmp576);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
panda$collections$Array* $tmp578 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
// unreffing subtypes
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp571;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {

// line 235
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type() {

// line 240
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {

// line 245
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {

// line 250
org$pandalanguage$pandac$Type* $tmp597 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp598 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp599 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp598);
org$pandalanguage$pandac$Position $tmp600 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp601 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp597, &$s602, $tmp599, $tmp600, $tmp601);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
return $tmp597;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RegularExpression$R$org$pandalanguage$pandac$Type() {

// line 255
org$pandalanguage$pandac$Type* $tmp603 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp604 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp605 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp604);
org$pandalanguage$pandac$Position $tmp606 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp607 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp603, &$s608, $tmp605, $tmp606, $tmp607);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
return $tmp603;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {

// line 260
org$pandalanguage$pandac$Type* $tmp609 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp610 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp611 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp610);
panda$core$Int64 $tmp612 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp609, &$s613, $tmp611, $tmp612);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
return $tmp609;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {

// line 265
org$pandalanguage$pandac$Type* $tmp614 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp615 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp616 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp615);
panda$core$Int64 $tmp617 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp614, &$s618, $tmp616, $tmp617);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
return $tmp614;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {

// line 270
org$pandalanguage$pandac$Type* $tmp619 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp620 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp621 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp620);
panda$core$Int64 $tmp622 = (panda$core$Int64) {32};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp619, &$s623, $tmp621, $tmp622);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
return $tmp619;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {

// line 275
org$pandalanguage$pandac$Type* $tmp624 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp625 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp626 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp625);
panda$core$Int64 $tmp627 = (panda$core$Int64) {64};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp624, &$s628, $tmp626, $tmp627);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
return $tmp624;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {

// line 280
org$pandalanguage$pandac$Type* $tmp629 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp630 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp631 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp630);
panda$core$Int64 $tmp632 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp629, &$s633, $tmp631, $tmp632);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp629));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp629));
return $tmp629;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {

// line 285
org$pandalanguage$pandac$Type* $tmp634 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp635 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp636 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp635);
panda$core$Int64 $tmp637 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp634, &$s638, $tmp636, $tmp637);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
return $tmp634;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {

// line 290
org$pandalanguage$pandac$Type* $tmp639 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp640 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp641 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp640);
panda$core$Int64 $tmp642 = (panda$core$Int64) {32};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp639, &$s643, $tmp641, $tmp642);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
return $tmp639;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {

// line 295
org$pandalanguage$pandac$Type* $tmp644 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp645 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp646 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp645);
panda$core$Int64 $tmp647 = (panda$core$Int64) {64};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp644, &$s648, $tmp646, $tmp647);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
return $tmp644;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {

// line 300
org$pandalanguage$pandac$Type* $tmp649 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp650 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp651 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp650);
panda$core$Int64 $tmp652 = (panda$core$Int64) {32};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp649, &$s653, $tmp651, $tmp652);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
return $tmp649;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {

// line 305
org$pandalanguage$pandac$Type* $tmp654 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp655 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp656 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp655);
panda$core$Int64 $tmp657 = (panda$core$Int64) {64};
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp654, &$s658, $tmp656, $tmp657);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
return $tmp654;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {

// line 310
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {

// line 315
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {

// line 320
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {

// line 325
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {

// line 330
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {

// line 335
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {

// line 340
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {

// line 345
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {

// line 350
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {

// line 355
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {

// line 360
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {

// line 365
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {

// line 370
org$pandalanguage$pandac$Type* $tmp731 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp732 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp733 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp732);
org$pandalanguage$pandac$Position $tmp734 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp735 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp731, &$s736, $tmp733, $tmp734, $tmp735);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
return $tmp731;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {

// line 375
org$pandalanguage$pandac$Type* $tmp737 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp738 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp739 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp738);
org$pandalanguage$pandac$Position $tmp740 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp741 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp737, &$s742, $tmp739, $tmp740, $tmp741);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp737));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp737));
return $tmp737;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 param0) {

// line 380
org$pandalanguage$pandac$Type* $tmp743 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$UInt64$wrapper* $tmp744;
$tmp744 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
$tmp744->value = param0;
panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s746, ((panda$core$Object*) $tmp744));
panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp745, &$s748);
panda$core$Int64 $tmp749 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp750 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp749);
org$pandalanguage$pandac$Position $tmp751 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp752 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp743, $tmp747, $tmp750, $tmp751, $tmp752);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp743));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp743));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp744));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp747));
return $tmp743;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 param0) {

// line 385
org$pandalanguage$pandac$Type* $tmp753 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp754 = panda$core$UInt64$convert$R$panda$core$String(param0);
panda$core$String* $tmp755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s756, $tmp754);
panda$core$String* $tmp757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp755, &$s758);
panda$core$Int64 $tmp759 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp760 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp759);
org$pandalanguage$pandac$Position $tmp761 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp762 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp753, $tmp757, $tmp760, $tmp761, $tmp762);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp754));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp755));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp757));
return $tmp753;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 param0) {

// line 390
org$pandalanguage$pandac$Type* $tmp763 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp764 = panda$core$Real64$convert$R$panda$core$String(param0);
panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s766, $tmp764);
panda$core$String* $tmp767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp765, &$s768);
panda$core$Int64 $tmp769 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp770 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp769);
org$pandalanguage$pandac$Position $tmp771 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp772 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp763, $tmp767, $tmp770, $tmp771, $tmp772);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp763));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp763));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
return $tmp763;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {

// line 395
org$pandalanguage$pandac$Type* $tmp773 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp774 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Type$Kind $tmp775 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp774);
org$pandalanguage$pandac$Position $tmp776 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp777 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp773, &$s778, $tmp775, $tmp776, $tmp777);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp773));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp773));
return $tmp773;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ClassLiteral$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 400
panda$collections$Array* $tmp779 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp779);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp780 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp779));
*(&local0) = $tmp779;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp779));
// line 401
panda$collections$Array* $tmp781 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp781, ((panda$core$Object*) param0));
// line 402
org$pandalanguage$pandac$Type* $tmp782 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$collections$Array* $tmp783 = *(&local0);
org$pandalanguage$pandac$Type* $tmp784 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp782, ((panda$collections$ListView*) $tmp783));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp782));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
panda$collections$Array* $tmp785 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp784;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {

// line 407
org$pandalanguage$pandac$Type* $tmp786 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp787 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Type$Kind $tmp788 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp787);
org$pandalanguage$pandac$Position $tmp789 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp790 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp786, &$s791, $tmp788, $tmp789, $tmp790);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
return $tmp786;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {

// line 412
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {

// line 417
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {

// line 422
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {

// line 427
org$pandalanguage$pandac$Type* $tmp810 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp811 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp812 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp811);
org$pandalanguage$pandac$Position $tmp813 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp814 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp810, &$s815, $tmp812, $tmp813, $tmp814);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
return $tmp810;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type() {

// line 432
org$pandalanguage$pandac$Type* $tmp816 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp817 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp818 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp817);
org$pandalanguage$pandac$Position $tmp819 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp820 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp816, &$s821, $tmp818, $tmp819, $tmp820);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp816));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp816));
return $tmp816;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 437
panda$collections$Array* $tmp822 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp822);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp823 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp822));
*(&local0) = $tmp822;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp822));
// line 438
panda$collections$Array* $tmp824 = *(&local0);
org$pandalanguage$pandac$Type* $tmp825 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp826 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp827 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp826);
org$pandalanguage$pandac$Position $tmp828 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp829 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp825, &$s830, $tmp827, $tmp828, $tmp829);
panda$collections$Array$add$panda$collections$Array$T($tmp824, ((panda$core$Object*) $tmp825));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp825));
// line 439
panda$collections$Array* $tmp831 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp831, ((panda$core$Object*) param0));
// line 440
org$pandalanguage$pandac$Type* $tmp832 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp833 = panda$core$String$convert$R$panda$core$String(&$s834);
panda$core$String* $tmp835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp833, &$s836);
panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp835, ((panda$core$Object*) param0));
panda$core$String* $tmp838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp837, &$s839);
panda$core$Int64 $tmp840 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp841 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp840);
org$pandalanguage$pandac$Position* $tmp842 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp843 = *$tmp842;
panda$collections$Array* $tmp844 = *(&local0);
panda$core$Bit* $tmp845 = &param0->resolved;
panda$core$Bit $tmp846 = *$tmp845;
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp832, $tmp838, $tmp841, $tmp843, ((panda$collections$ListView*) $tmp844), $tmp846);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp835));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp837));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
panda$collections$Array* $tmp847 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp847));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp832;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 445
panda$collections$Array* $tmp848 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp848);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp849 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
*(&local0) = $tmp848;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
// line 446
panda$collections$Array* $tmp850 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp850, ((panda$core$Object*) param0));
// line 447
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 452
panda$collections$Array* $tmp860 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp860);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp861 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
*(&local0) = $tmp860;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
// line 453
panda$collections$Array* $tmp862 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp862, ((panda$core$Object*) param0));
// line 454
org$pandalanguage$pandac$Type* $tmp863 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp864 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp865 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp864);
org$pandalanguage$pandac$Position $tmp866 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp867 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp863, &$s868, $tmp865, $tmp866, $tmp867);
panda$collections$Array* $tmp869 = *(&local0);
org$pandalanguage$pandac$Type* $tmp870 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp863, ((panda$collections$ListView*) $tmp869));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp863));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
panda$collections$Array* $tmp871 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp870;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 459
panda$collections$Array* $tmp872 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp872);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp873 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp873));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
*(&local0) = $tmp872;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
// line 460
panda$collections$Array* $tmp874 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp874, ((panda$core$Object*) param0));
// line 461
org$pandalanguage$pandac$Type* $tmp875 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp876 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp877 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp875, $tmp876);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp875));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp876));
bool $tmp878 = $tmp877.value;
if ($tmp878) goto block1; else goto block3;
block1:;
// line 462
panda$collections$Array* $tmp879 = *(&local0);
org$pandalanguage$pandac$Type* $tmp880 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp879, ((panda$core$Object*) $tmp880));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp880));
goto block2;
block3:;
// line 464
org$pandalanguage$pandac$Type* $tmp881 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp882 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp883 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp881, $tmp882);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp881));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block4; else goto block6;
block4:;
// line 465
panda$collections$Array* $tmp885 = *(&local0);
org$pandalanguage$pandac$Type* $tmp886 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp885, ((panda$core$Object*) $tmp886));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp886));
goto block5;
block6:;
// line 467
org$pandalanguage$pandac$Type* $tmp887 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp888 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp889 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp887, $tmp888);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp887));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp888));
bool $tmp890 = $tmp889.value;
if ($tmp890) goto block7; else goto block9;
block7:;
// line 468
panda$collections$Array* $tmp891 = *(&local0);
org$pandalanguage$pandac$Type* $tmp892 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp891, ((panda$core$Object*) $tmp892));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
goto block8;
block9:;
// line 1
// line 471
panda$collections$Array* $tmp893 = *(&local0);
org$pandalanguage$pandac$Type* $tmp894 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
panda$collections$Array$add$panda$collections$Array$T($tmp893, ((panda$core$Object*) $tmp894));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp894));
goto block8;
block8:;
goto block5;
block5:;
goto block2;
block2:;
// line 473
org$pandalanguage$pandac$Type* $tmp895 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp896 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp897 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp896);
org$pandalanguage$pandac$Position $tmp898 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp899 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp895, &$s900, $tmp897, $tmp898, $tmp899);
panda$collections$Array* $tmp901 = *(&local0);
org$pandalanguage$pandac$Type* $tmp902 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp895, ((panda$collections$ListView*) $tmp901));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp902));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp895));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp902));
panda$collections$Array* $tmp903 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp902;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, org$pandalanguage$pandac$Type* param1) {

panda$collections$Array* local0 = NULL;
// line 478
panda$collections$Array* $tmp904 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp904);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp905 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp905));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp904));
*(&local0) = $tmp904;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp904));
// line 479
panda$collections$Array* $tmp906 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp906, ((panda$core$Object*) param0));
// line 480
panda$collections$Array* $tmp907 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp907, ((panda$core$Object*) param1));
// line 481
org$pandalanguage$pandac$Type* $tmp908 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp909 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp910 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp909);
org$pandalanguage$pandac$Position $tmp911 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp912 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp908, &$s913, $tmp910, $tmp911, $tmp912);
panda$collections$Array* $tmp914 = *(&local0);
org$pandalanguage$pandac$Type* $tmp915 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp908, ((panda$collections$ListView*) $tmp914));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp915));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp908));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp915));
panda$collections$Array* $tmp916 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
// unreffing children
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp915;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {

// line 486
org$pandalanguage$pandac$Type* $tmp917 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp918 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Type$Kind $tmp919 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp918);
org$pandalanguage$pandac$Position $tmp920 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp921 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp917, &$s922, $tmp919, $tmp920, $tmp921);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp917));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp917));
return $tmp917;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {

// line 491
org$pandalanguage$pandac$Type* $tmp923 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$Int64 $tmp924 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Type$Kind $tmp925 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp924);
org$pandalanguage$pandac$Position $tmp926 = org$pandalanguage$pandac$Position$init();
panda$core$Bit $tmp927 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp923, &$s928, $tmp925, $tmp926, $tmp927);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp923));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp923));
return $tmp923;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
// line 495
panda$core$String** $tmp929 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp930 = *$tmp929;
panda$core$Bit $tmp931 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp930, &$s932);
bool $tmp933 = $tmp931.value;
if ($tmp933) goto block1; else goto block2;
block1:;
*(&local3) = $tmp931;
goto block3;
block2:;
panda$core$String** $tmp934 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp935 = *$tmp934;
panda$core$Bit $tmp936 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp935, &$s937);
*(&local3) = $tmp936;
goto block3;
block3:;
panda$core$Bit $tmp938 = *(&local3);
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block4; else goto block5;
block4:;
*(&local2) = $tmp938;
goto block6;
block5:;
panda$core$String** $tmp940 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp941 = *$tmp940;
panda$core$Bit $tmp942 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp941, &$s943);
*(&local2) = $tmp942;
goto block6;
block6:;
panda$core$Bit $tmp944 = *(&local2);
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block7; else goto block8;
block7:;
*(&local1) = $tmp944;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp946 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp947 = *$tmp946;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp948;
$tmp948 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp948->value = $tmp947;
panda$core$Int64 $tmp949 = (panda$core$Int64) {5};
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
*(&local1) = $tmp955;
goto block9;
block9:;
panda$core$Bit $tmp956 = *(&local1);
bool $tmp957 = $tmp956.value;
if ($tmp957) goto block10; else goto block11;
block10:;
*(&local0) = $tmp956;
goto block12;
block11:;
org$pandalanguage$pandac$Type$Kind* $tmp958 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp959 = *$tmp958;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp960;
$tmp960 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp960->value = $tmp959;
panda$core$Int64 $tmp961 = (panda$core$Int64) {18};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp960)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp963)));
*(&local0) = $tmp967;
goto block12;
block12:;
panda$core$Bit $tmp968 = *(&local0);
return $tmp968;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
// line 501
org$pandalanguage$pandac$Type$Kind* $tmp969 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp970 = *$tmp969;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp971;
$tmp971 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp971->value = $tmp970;
panda$core$Int64 $tmp972 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp973 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp972);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp974;
$tmp974 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp974->value = $tmp973;
ITable* $tmp975 = ((panda$core$Equatable*) $tmp971)->$class->itable;
while ($tmp975->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp975 = $tmp975->next;
}
$fn977 $tmp976 = $tmp975->methods[0];
panda$core$Bit $tmp978 = $tmp976(((panda$core$Equatable*) $tmp971), ((panda$core$Equatable*) $tmp974));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp971)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp974)));
bool $tmp979 = $tmp978.value;
if ($tmp979) goto block1; else goto block2;
block1:;
*(&local2) = $tmp978;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp980 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp981 = *$tmp980;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp982;
$tmp982 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp982->value = $tmp981;
panda$core$Int64 $tmp983 = (panda$core$Int64) {3};
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
*(&local2) = $tmp989;
goto block3;
block3:;
panda$core$Bit $tmp990 = *(&local2);
bool $tmp991 = $tmp990.value;
if ($tmp991) goto block4; else goto block5;
block4:;
*(&local1) = $tmp990;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp992 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp993 = *$tmp992;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp994;
$tmp994 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp994->value = $tmp993;
panda$core$Int64 $tmp995 = (panda$core$Int64) {10};
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
*(&local1) = $tmp1001;
goto block6;
block6:;
panda$core$Bit $tmp1002 = *(&local1);
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1002;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1004 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1005 = *$tmp1004;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1006;
$tmp1006 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1006->value = $tmp1005;
panda$core$Int64 $tmp1007 = (panda$core$Int64) {5};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1006)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1009)));
*(&local0) = $tmp1013;
goto block9;
block9:;
panda$core$Bit $tmp1014 = *(&local0);
return $tmp1014;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isSigned$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 506
panda$core$String** $tmp1015 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1016 = *$tmp1015;
panda$core$Bit $tmp1017 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1016, &$s1018);
return $tmp1017;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
// line 510
org$pandalanguage$pandac$Type$Kind* $tmp1019 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1020 = *$tmp1019;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1021;
$tmp1021 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1021->value = $tmp1020;
panda$core$Int64 $tmp1022 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp1023 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1022);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1024;
$tmp1024 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1024->value = $tmp1023;
ITable* $tmp1025 = ((panda$core$Equatable*) $tmp1021)->$class->itable;
while ($tmp1025->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1025 = $tmp1025->next;
}
$fn1027 $tmp1026 = $tmp1025->methods[0];
panda$core$Bit $tmp1028 = $tmp1026(((panda$core$Equatable*) $tmp1021), ((panda$core$Equatable*) $tmp1024));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1021)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1024)));
bool $tmp1029 = $tmp1028.value;
if ($tmp1029) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1028;
goto block3;
block2:;
panda$core$String** $tmp1030 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1031 = *$tmp1030;
panda$core$Bit $tmp1032 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1031, &$s1033);
*(&local0) = $tmp1032;
goto block3;
block3:;
panda$core$Bit $tmp1034 = *(&local0);
return $tmp1034;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 514
panda$core$String** $tmp1035 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1036 = *$tmp1035;
panda$core$Bit $tmp1037 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1036, &$s1038);
return $tmp1037;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
// line 518
panda$core$Bit $tmp1039 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param0);
bool $tmp1040 = $tmp1039.value;
if ($tmp1040) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1039;
goto block3;
block2:;
panda$core$Bit $tmp1041 = org$pandalanguage$pandac$Type$get_isChar$R$panda$core$Bit(param0);
*(&local0) = $tmp1041;
goto block3;
block3:;
panda$core$Bit $tmp1042 = *(&local0);
return $tmp1042;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 522
org$pandalanguage$pandac$Type$Kind* $tmp1043 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1044 = *$tmp1043;
panda$core$Int64 $tmp1045 = $tmp1044.$rawValue;
panda$core$Int64 $tmp1046 = (panda$core$Int64) {0};
panda$core$Bit $tmp1047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1045, $tmp1046);
bool $tmp1048 = $tmp1047.value;
if ($tmp1048) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp1049 = (panda$core$Int64) {1};
panda$core$Bit $tmp1050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1045, $tmp1049);
bool $tmp1051 = $tmp1050.value;
if ($tmp1051) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp1052 = (panda$core$Int64) {11};
panda$core$Bit $tmp1053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1045, $tmp1052);
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp1055 = (panda$core$Int64) {12};
panda$core$Bit $tmp1056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1045, $tmp1055);
bool $tmp1057 = $tmp1056.value;
if ($tmp1057) goto block2; else goto block6;
block6:;
panda$core$Int64 $tmp1058 = (panda$core$Int64) {15};
panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1045, $tmp1058);
bool $tmp1060 = $tmp1059.value;
if ($tmp1060) goto block2; else goto block7;
block7:;
panda$core$Int64 $tmp1061 = (panda$core$Int64) {14};
panda$core$Bit $tmp1062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1045, $tmp1061);
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block2; else goto block8;
block8:;
panda$core$Int64 $tmp1064 = (panda$core$Int64) {17};
panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1045, $tmp1064);
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block2; else goto block9;
block9:;
panda$core$Int64 $tmp1067 = (panda$core$Int64) {16};
panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1045, $tmp1067);
bool $tmp1069 = $tmp1068.value;
if ($tmp1069) goto block2; else goto block10;
block2:;
// line 525
panda$core$Bit $tmp1070 = panda$core$Bit$init$builtin_bit(true);
return $tmp1070;
block10:;
// line 527
panda$core$Bit $tmp1071 = panda$core$Bit$init$builtin_bit(false);
return $tmp1071;
block1:;
panda$core$Bit $tmp1072 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1073 = $tmp1072.value;
if ($tmp1073) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp1074 = (panda$core$Int64) {521};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1075, $tmp1074, &$s1076);
abort(); // unreachable
block11:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
// line 532
org$pandalanguage$pandac$Type$Kind* $tmp1077 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1078 = *$tmp1077;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1079;
$tmp1079 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1079->value = $tmp1078;
panda$core$Int64 $tmp1080 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp1081 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1080);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1082;
$tmp1082 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1082->value = $tmp1081;
ITable* $tmp1083 = ((panda$core$Equatable*) $tmp1079)->$class->itable;
while ($tmp1083->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1083 = $tmp1083->next;
}
$fn1085 $tmp1084 = $tmp1083->methods[0];
panda$core$Bit $tmp1086 = $tmp1084(((panda$core$Equatable*) $tmp1079), ((panda$core$Equatable*) $tmp1082));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1079)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1082)));
bool $tmp1087 = $tmp1086.value;
if ($tmp1087) goto block1; else goto block2;
block1:;
panda$collections$ImmutableArray** $tmp1088 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1089 = *$tmp1088;
panda$core$Int64 $tmp1090 = (panda$core$Int64) {0};
panda$core$Object* $tmp1091 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1089, $tmp1090);
org$pandalanguage$pandac$Type* $tmp1092 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1093 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1091), $tmp1092);
panda$core$Panda$unref$panda$core$Object$Q($tmp1091);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1092));
*(&local0) = $tmp1093;
goto block3;
block2:;
*(&local0) = $tmp1086;
goto block3;
block3:;
panda$core$Bit $tmp1094 = *(&local0);
return $tmp1094;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 536
org$pandalanguage$pandac$Type$Kind* $tmp1095 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1096 = *$tmp1095;
panda$core$Int64 $tmp1097 = $tmp1096.$rawValue;
panda$core$Int64 $tmp1098 = (panda$core$Int64) {15};
panda$core$Bit $tmp1099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1097, $tmp1098);
bool $tmp1100 = $tmp1099.value;
if ($tmp1100) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp1101 = (panda$core$Int64) {14};
panda$core$Bit $tmp1102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1097, $tmp1101);
bool $tmp1103 = $tmp1102.value;
if ($tmp1103) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp1104 = (panda$core$Int64) {17};
panda$core$Bit $tmp1105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1097, $tmp1104);
bool $tmp1106 = $tmp1105.value;
if ($tmp1106) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp1107 = (panda$core$Int64) {16};
panda$core$Bit $tmp1108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1097, $tmp1107);
bool $tmp1109 = $tmp1108.value;
if ($tmp1109) goto block2; else goto block6;
block2:;
// line 538
panda$core$Bit $tmp1110 = panda$core$Bit$init$builtin_bit(true);
return $tmp1110;
block6:;
// line 540
panda$core$Bit $tmp1111 = panda$core$Bit$init$builtin_bit(false);
return $tmp1111;
block1:;
panda$core$Bit $tmp1112 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1113 = $tmp1112.value;
if ($tmp1113) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1114 = (panda$core$Int64) {535};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1115, $tmp1114, &$s1116);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 545
panda$core$String** $tmp1117 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1118 = *$tmp1117;
panda$core$Bit $tmp1119 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1118, &$s1120);
return $tmp1119;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 549
panda$core$String** $tmp1121 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1122 = *$tmp1121;
panda$core$Bit $tmp1123 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1122, &$s1124);
return $tmp1123;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 553
panda$core$String** $tmp1125 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1126 = *$tmp1125;
panda$core$Bit $tmp1127 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1126, &$s1128);
return $tmp1127;

}
panda$core$Bit org$pandalanguage$pandac$Type$get_isNullable$R$panda$core$Bit(org$pandalanguage$pandac$Type* param0) {

// line 557
org$pandalanguage$pandac$Type$Kind* $tmp1129 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1130 = *$tmp1129;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1131;
$tmp1131 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1131->value = $tmp1130;
panda$core$Int64 $tmp1132 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1133 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1132);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1134;
$tmp1134 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1134->value = $tmp1133;
ITable* $tmp1135 = ((panda$core$Equatable*) $tmp1131)->$class->itable;
while ($tmp1135->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1135 = $tmp1135->next;
}
$fn1137 $tmp1136 = $tmp1135->methods[0];
panda$core$Bit $tmp1138 = $tmp1136(((panda$core$Equatable*) $tmp1131), ((panda$core$Equatable*) $tmp1134));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1131)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1134)));
return $tmp1138;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$collections$Array* local0 = NULL;
// line 561
org$pandalanguage$pandac$Type$Kind* $tmp1139 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1140 = *$tmp1139;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1141;
$tmp1141 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1141->value = $tmp1140;
panda$core$Int64 $tmp1142 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1143 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1142);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1144;
$tmp1144 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1144->value = $tmp1143;
ITable* $tmp1145 = ((panda$core$Equatable*) $tmp1141)->$class->itable;
while ($tmp1145->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1145 = $tmp1145->next;
}
$fn1147 $tmp1146 = $tmp1145->methods[0];
panda$core$Bit $tmp1148 = $tmp1146(((panda$core$Equatable*) $tmp1141), ((panda$core$Equatable*) $tmp1144));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1141)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1144)));
bool $tmp1149 = $tmp1148.value;
if ($tmp1149) goto block1; else goto block2;
block1:;
// line 562
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 564
panda$collections$Array* $tmp1150 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1150);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1151 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1151));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1150));
*(&local0) = $tmp1150;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1150));
// line 565
panda$collections$Array* $tmp1152 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp1152, ((panda$core$Object*) param0));
// line 566
org$pandalanguage$pandac$Type* $tmp1153 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String** $tmp1154 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1155 = *$tmp1154;
panda$core$String* $tmp1156 = panda$core$String$convert$R$panda$core$String($tmp1155);
panda$core$String* $tmp1157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1156, &$s1158);
panda$core$Int64 $tmp1159 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1160 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1159);
org$pandalanguage$pandac$Position $tmp1161 = org$pandalanguage$pandac$Position$init();
panda$collections$Array* $tmp1162 = *(&local0);
panda$core$Bit $tmp1163 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1153, $tmp1157, $tmp1160, $tmp1161, ((panda$collections$ListView*) $tmp1162), $tmp1163);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1153));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1153));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1156));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
panda$collections$Array* $tmp1164 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1164));
// unreffing subtypes
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp1153;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

// line 570
org$pandalanguage$pandac$Type$Kind* $tmp1165 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1166 = *$tmp1165;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1167;
$tmp1167 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1167->value = $tmp1166;
panda$core$Int64 $tmp1168 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1169 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1168);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1170;
$tmp1170 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1170->value = $tmp1169;
ITable* $tmp1171 = ((panda$core$Equatable*) $tmp1167)->$class->itable;
while ($tmp1171->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1171 = $tmp1171->next;
}
$fn1173 $tmp1172 = $tmp1171->methods[1];
panda$core$Bit $tmp1174 = $tmp1172(((panda$core$Equatable*) $tmp1167), ((panda$core$Equatable*) $tmp1170));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1167)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1170)));
bool $tmp1175 = $tmp1174.value;
if ($tmp1175) goto block1; else goto block2;
block1:;
// line 571
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 573
panda$collections$ImmutableArray** $tmp1176 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1177 = *$tmp1176;
panda$core$Int64 $tmp1178 = (panda$core$Int64) {0};
panda$core$Object* $tmp1179 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1177, $tmp1178);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1179)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1179);
return ((org$pandalanguage$pandac$Type*) $tmp1179);

}
panda$core$Int64 org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
org$pandalanguage$pandac$Type$Kind* $tmp1180 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1181 = *$tmp1180;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1182;
$tmp1182 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1182->value = $tmp1181;
panda$core$Int64 $tmp1183 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp1184 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1183);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1185;
$tmp1185 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1185->value = $tmp1184;
ITable* $tmp1186 = ((panda$core$Equatable*) $tmp1182)->$class->itable;
while ($tmp1186->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1186 = $tmp1186->next;
}
$fn1188 $tmp1187 = $tmp1186->methods[0];
panda$core$Bit $tmp1189 = $tmp1187(((panda$core$Equatable*) $tmp1182), ((panda$core$Equatable*) $tmp1185));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1182)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1185)));
bool $tmp1190 = $tmp1189.value;
if ($tmp1190) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1189;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1191 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1192 = *$tmp1191;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1193;
$tmp1193 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1193->value = $tmp1192;
panda$core$Int64 $tmp1194 = (panda$core$Int64) {15};
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
*(&local2) = $tmp1200;
goto block3;
block3:;
panda$core$Bit $tmp1201 = *(&local2);
bool $tmp1202 = $tmp1201.value;
if ($tmp1202) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1201;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1203 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1204 = *$tmp1203;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1205;
$tmp1205 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1205->value = $tmp1204;
panda$core$Int64 $tmp1206 = (panda$core$Int64) {16};
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
*(&local1) = $tmp1212;
goto block6;
block6:;
panda$core$Bit $tmp1213 = *(&local1);
bool $tmp1214 = $tmp1213.value;
if ($tmp1214) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1213;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1215 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1216 = *$tmp1215;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1217;
$tmp1217 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1217->value = $tmp1216;
panda$core$Int64 $tmp1218 = (panda$core$Int64) {17};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1217)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1220)));
*(&local0) = $tmp1224;
goto block9;
block9:;
panda$core$Bit $tmp1225 = *(&local0);
bool $tmp1226 = $tmp1225.value;
if ($tmp1226) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp1227 = (panda$core$Int64) {578};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1228, $tmp1227, &$s1229);
abort(); // unreachable
block10:;
// line 579
panda$collections$ImmutableArray** $tmp1230 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1231 = *$tmp1230;
ITable* $tmp1232 = ((panda$collections$CollectionView*) $tmp1231)->$class->itable;
while ($tmp1232->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1232 = $tmp1232->next;
}
$fn1234 $tmp1233 = $tmp1232->methods[0];
panda$core$Int64 $tmp1235 = $tmp1233(((panda$collections$CollectionView*) $tmp1231));
panda$core$Int64 $tmp1236 = (panda$core$Int64) {1};
int64_t $tmp1237 = $tmp1235.value;
int64_t $tmp1238 = $tmp1236.value;
int64_t $tmp1239 = $tmp1237 - $tmp1238;
panda$core$Int64 $tmp1240 = (panda$core$Int64) {$tmp1239};
return $tmp1240;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
org$pandalanguage$pandac$Type$Kind* $tmp1241 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1242 = *$tmp1241;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1243;
$tmp1243 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1243->value = $tmp1242;
panda$core$Int64 $tmp1244 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp1245 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1244);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1246;
$tmp1246 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1246->value = $tmp1245;
ITable* $tmp1247 = ((panda$core$Equatable*) $tmp1243)->$class->itable;
while ($tmp1247->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1247 = $tmp1247->next;
}
$fn1249 $tmp1248 = $tmp1247->methods[0];
panda$core$Bit $tmp1250 = $tmp1248(((panda$core$Equatable*) $tmp1243), ((panda$core$Equatable*) $tmp1246));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1243)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1246)));
bool $tmp1251 = $tmp1250.value;
if ($tmp1251) goto block1; else goto block2;
block1:;
*(&local4) = $tmp1250;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1252 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1253 = *$tmp1252;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1254;
$tmp1254 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1254->value = $tmp1253;
panda$core$Int64 $tmp1255 = (panda$core$Int64) {15};
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
*(&local4) = $tmp1261;
goto block3;
block3:;
panda$core$Bit $tmp1262 = *(&local4);
bool $tmp1263 = $tmp1262.value;
if ($tmp1263) goto block4; else goto block5;
block4:;
*(&local3) = $tmp1262;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1264 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1265 = *$tmp1264;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1266;
$tmp1266 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1266->value = $tmp1265;
panda$core$Int64 $tmp1267 = (panda$core$Int64) {16};
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
*(&local3) = $tmp1273;
goto block6;
block6:;
panda$core$Bit $tmp1274 = *(&local3);
bool $tmp1275 = $tmp1274.value;
if ($tmp1275) goto block7; else goto block8;
block7:;
*(&local2) = $tmp1274;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1276 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1277 = *$tmp1276;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1278;
$tmp1278 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1278->value = $tmp1277;
panda$core$Int64 $tmp1279 = (panda$core$Int64) {17};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1278)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1281)));
*(&local2) = $tmp1285;
goto block9;
block9:;
panda$core$Bit $tmp1286 = *(&local2);
bool $tmp1287 = $tmp1286.value;
if ($tmp1287) goto block10; else goto block11;
block10:;
panda$core$Int64 $tmp1288 = (panda$core$Int64) {0};
int64_t $tmp1289 = param1.value;
int64_t $tmp1290 = $tmp1288.value;
bool $tmp1291 = $tmp1289 >= $tmp1290;
panda$core$Bit $tmp1292 = (panda$core$Bit) {$tmp1291};
*(&local1) = $tmp1292;
goto block12;
block11:;
*(&local1) = $tmp1286;
goto block12;
block12:;
panda$core$Bit $tmp1293 = *(&local1);
bool $tmp1294 = $tmp1293.value;
if ($tmp1294) goto block13; else goto block14;
block13:;
panda$collections$ImmutableArray** $tmp1295 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1296 = *$tmp1295;
ITable* $tmp1297 = ((panda$collections$CollectionView*) $tmp1296)->$class->itable;
while ($tmp1297->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1297 = $tmp1297->next;
}
$fn1299 $tmp1298 = $tmp1297->methods[0];
panda$core$Int64 $tmp1300 = $tmp1298(((panda$collections$CollectionView*) $tmp1296));
panda$core$Int64 $tmp1301 = (panda$core$Int64) {1};
int64_t $tmp1302 = $tmp1300.value;
int64_t $tmp1303 = $tmp1301.value;
int64_t $tmp1304 = $tmp1302 - $tmp1303;
panda$core$Int64 $tmp1305 = (panda$core$Int64) {$tmp1304};
int64_t $tmp1306 = param1.value;
int64_t $tmp1307 = $tmp1305.value;
bool $tmp1308 = $tmp1306 < $tmp1307;
panda$core$Bit $tmp1309 = (panda$core$Bit) {$tmp1308};
*(&local0) = $tmp1309;
goto block15;
block14:;
*(&local0) = $tmp1293;
goto block15;
block15:;
panda$core$Bit $tmp1310 = *(&local0);
bool $tmp1311 = $tmp1310.value;
if ($tmp1311) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp1312 = (panda$core$Int64) {584};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1313, $tmp1312, &$s1314);
abort(); // unreachable
block16:;
// line 585
panda$collections$ImmutableArray** $tmp1315 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1316 = *$tmp1315;
panda$core$Object* $tmp1317 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1316, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1317)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1317);
return ((org$pandalanguage$pandac$Type*) $tmp1317);

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Bit local2;
org$pandalanguage$pandac$Type$Kind* $tmp1318 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1319 = *$tmp1318;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1320;
$tmp1320 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1320->value = $tmp1319;
panda$core$Int64 $tmp1321 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp1322 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1321);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1323;
$tmp1323 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1323->value = $tmp1322;
ITable* $tmp1324 = ((panda$core$Equatable*) $tmp1320)->$class->itable;
while ($tmp1324->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1324 = $tmp1324->next;
}
$fn1326 $tmp1325 = $tmp1324->methods[0];
panda$core$Bit $tmp1327 = $tmp1325(((panda$core$Equatable*) $tmp1320), ((panda$core$Equatable*) $tmp1323));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1320)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1323)));
bool $tmp1328 = $tmp1327.value;
if ($tmp1328) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1327;
goto block3;
block2:;
org$pandalanguage$pandac$Type$Kind* $tmp1329 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1330 = *$tmp1329;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1331;
$tmp1331 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1331->value = $tmp1330;
panda$core$Int64 $tmp1332 = (panda$core$Int64) {15};
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
*(&local2) = $tmp1338;
goto block3;
block3:;
panda$core$Bit $tmp1339 = *(&local2);
bool $tmp1340 = $tmp1339.value;
if ($tmp1340) goto block4; else goto block5;
block4:;
*(&local1) = $tmp1339;
goto block6;
block5:;
org$pandalanguage$pandac$Type$Kind* $tmp1341 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1342 = *$tmp1341;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1343;
$tmp1343 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1343->value = $tmp1342;
panda$core$Int64 $tmp1344 = (panda$core$Int64) {16};
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
*(&local1) = $tmp1350;
goto block6;
block6:;
panda$core$Bit $tmp1351 = *(&local1);
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block7; else goto block8;
block7:;
*(&local0) = $tmp1351;
goto block9;
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1353 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1354 = *$tmp1353;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1355;
$tmp1355 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1355->value = $tmp1354;
panda$core$Int64 $tmp1356 = (panda$core$Int64) {17};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1355)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1358)));
*(&local0) = $tmp1362;
goto block9;
block9:;
panda$core$Bit $tmp1363 = *(&local0);
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp1365 = (panda$core$Int64) {590};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1366, $tmp1365, &$s1367);
abort(); // unreachable
block10:;
// line 591
panda$collections$ImmutableArray** $tmp1368 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1369 = *$tmp1368;
panda$collections$ImmutableArray** $tmp1370 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1371 = *$tmp1370;
ITable* $tmp1372 = ((panda$collections$CollectionView*) $tmp1371)->$class->itable;
while ($tmp1372->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1372 = $tmp1372->next;
}
$fn1374 $tmp1373 = $tmp1372->methods[0];
panda$core$Int64 $tmp1375 = $tmp1373(((panda$collections$CollectionView*) $tmp1371));
panda$core$Int64 $tmp1376 = (panda$core$Int64) {1};
int64_t $tmp1377 = $tmp1375.value;
int64_t $tmp1378 = $tmp1376.value;
int64_t $tmp1379 = $tmp1377 - $tmp1378;
panda$core$Int64 $tmp1380 = (panda$core$Int64) {$tmp1379};
panda$core$Object* $tmp1381 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1369, $tmp1380);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1381)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1381);
return ((org$pandalanguage$pandac$Type*) $tmp1381);

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
panda$core$Bit $tmp1382 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, param2);
bool $tmp1383 = $tmp1382.value;
if ($tmp1383) goto block1; else goto block2;
block1:;
// line 597
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block2:;
// line 599
org$pandalanguage$pandac$Type* $tmp1384 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1385 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp1384);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1384));
bool $tmp1386 = $tmp1385.value;
if ($tmp1386) goto block3; else goto block4;
block3:;
// line 600
org$pandalanguage$pandac$Type$Kind* $tmp1387 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1388 = *$tmp1387;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1389;
$tmp1389 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1389->value = $tmp1388;
panda$core$Int64 $tmp1390 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1391 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1390);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1392;
$tmp1392 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1392->value = $tmp1391;
ITable* $tmp1393 = ((panda$core$Equatable*) $tmp1389)->$class->itable;
while ($tmp1393->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1393 = $tmp1393->next;
}
$fn1395 $tmp1394 = $tmp1393->methods[0];
panda$core$Bit $tmp1396 = $tmp1394(((panda$core$Equatable*) $tmp1389), ((panda$core$Equatable*) $tmp1392));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1389)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1392)));
bool $tmp1397 = $tmp1396.value;
if ($tmp1397) goto block5; else goto block6;
block5:;
// line 601
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block6:;
// line 603
org$pandalanguage$pandac$Type* $tmp1398 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1398));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1398));
return $tmp1398;
block4:;
// line 605
org$pandalanguage$pandac$Type* $tmp1399 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1400 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param2, $tmp1399);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1399));
bool $tmp1401 = $tmp1400.value;
if ($tmp1401) goto block7; else goto block8;
block7:;
// line 606
org$pandalanguage$pandac$Type$Kind* $tmp1402 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1403 = *$tmp1402;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1404;
$tmp1404 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1404->value = $tmp1403;
panda$core$Int64 $tmp1405 = (panda$core$Int64) {1};
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
if ($tmp1412) goto block9; else goto block10;
block9:;
// line 607
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block10:;
// line 609
org$pandalanguage$pandac$Type* $tmp1413 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1413));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1413));
return $tmp1413;
block8:;
// line 611
org$pandalanguage$pandac$Type$Kind* $tmp1414 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1415 = *$tmp1414;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1416;
$tmp1416 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1416->value = $tmp1415;
panda$core$Int64 $tmp1417 = (panda$core$Int64) {5};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1416)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1419)));
bool $tmp1424 = $tmp1423.value;
if ($tmp1424) goto block11; else goto block12;
block11:;
panda$core$Bit $tmp1425 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param2);
*(&local0) = $tmp1425;
goto block13;
block12:;
*(&local0) = $tmp1423;
goto block13;
block13:;
panda$core$Bit $tmp1426 = *(&local0);
bool $tmp1427 = $tmp1426.value;
if ($tmp1427) goto block14; else goto block15;
block14:;
// line 612
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block15:;
// line 614
panda$core$Bit $tmp1428 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param0);
bool $tmp1429 = $tmp1428.value;
if ($tmp1429) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Type$Kind* $tmp1430 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1431 = *$tmp1430;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1432;
$tmp1432 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1432->value = $tmp1431;
panda$core$Int64 $tmp1433 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1434 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1433);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1435;
$tmp1435 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1435->value = $tmp1434;
ITable* $tmp1436 = ((panda$core$Equatable*) $tmp1432)->$class->itable;
while ($tmp1436->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1436 = $tmp1436->next;
}
$fn1438 $tmp1437 = $tmp1436->methods[0];
panda$core$Bit $tmp1439 = $tmp1437(((panda$core$Equatable*) $tmp1432), ((panda$core$Equatable*) $tmp1435));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1432)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1435)));
*(&local1) = $tmp1439;
goto block18;
block17:;
*(&local1) = $tmp1428;
goto block18;
block18:;
panda$core$Bit $tmp1440 = *(&local1);
bool $tmp1441 = $tmp1440.value;
if ($tmp1441) goto block19; else goto block20;
block19:;
// line 615
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block20:;
// line 617
panda$core$Bit $tmp1442 = org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit(param0);
bool $tmp1443 = $tmp1442.value;
if ($tmp1443) goto block21; else goto block22;
block21:;
// line 618
org$pandalanguage$pandac$Type$Kind* $tmp1444 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1445 = *$tmp1444;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1446;
$tmp1446 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1446->value = $tmp1445;
panda$core$Int64 $tmp1447 = (panda$core$Int64) {5};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1446)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1449)));
bool $tmp1454 = $tmp1453.value;
if ($tmp1454) goto block23; else goto block24;
block23:;
*(&local2) = $tmp1453;
goto block25;
block24:;
org$pandalanguage$pandac$Type$Kind* $tmp1455 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1456 = *$tmp1455;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1457;
$tmp1457 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1457->value = $tmp1456;
panda$core$Int64 $tmp1458 = (panda$core$Int64) {18};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1457)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1460)));
*(&local2) = $tmp1464;
goto block25;
block25:;
panda$core$Bit $tmp1465 = *(&local2);
bool $tmp1466 = $tmp1465.value;
if ($tmp1466) goto block26; else goto block27;
block26:;
// line 619
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block27:;
// line 621
panda$core$Bit $tmp1467 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param2);
bool $tmp1468 = $tmp1467.value;
if ($tmp1468) goto block28; else goto block29;
block28:;
// line 622
panda$core$String** $tmp1469 = &((org$pandalanguage$pandac$Symbol*) param2)->name;
panda$core$String* $tmp1470 = *$tmp1469;
panda$core$Bit $tmp1471 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp1470, &$s1472);
bool $tmp1473 = $tmp1471.value;
if ($tmp1473) goto block30; else goto block31;
block30:;
// line 623
org$pandalanguage$pandac$Type* $tmp1474 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1474));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1474));
return $tmp1474;
block31:;
// line 625
org$pandalanguage$pandac$Type* $tmp1475 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1475));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1475));
return $tmp1475;
block29:;
goto block22;
block22:;
// line 628
panda$core$Bit $tmp1476 = org$pandalanguage$pandac$Type$get_isReal$R$panda$core$Bit(param2);
bool $tmp1477 = $tmp1476.value;
if ($tmp1477) goto block32; else goto block33;
block32:;
// line 629
org$pandalanguage$pandac$Type$Kind* $tmp1478 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1479 = *$tmp1478;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1480;
$tmp1480 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1480->value = $tmp1479;
panda$core$Int64 $tmp1481 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Type$Kind $tmp1482 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1481);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1483;
$tmp1483 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1483->value = $tmp1482;
ITable* $tmp1484 = ((panda$core$Equatable*) $tmp1480)->$class->itable;
while ($tmp1484->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1484 = $tmp1484->next;
}
$fn1486 $tmp1485 = $tmp1484->methods[0];
panda$core$Bit $tmp1487 = $tmp1485(((panda$core$Equatable*) $tmp1480), ((panda$core$Equatable*) $tmp1483));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1480)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1483)));
bool $tmp1488 = $tmp1487.value;
if ($tmp1488) goto block34; else goto block35;
block34:;
*(&local3) = $tmp1487;
goto block36;
block35:;
org$pandalanguage$pandac$Type$Kind* $tmp1489 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1490 = *$tmp1489;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1491;
$tmp1491 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1491->value = $tmp1490;
panda$core$Int64 $tmp1492 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp1493 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1492);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1494;
$tmp1494 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1494->value = $tmp1493;
ITable* $tmp1495 = ((panda$core$Equatable*) $tmp1491)->$class->itable;
while ($tmp1495->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1495 = $tmp1495->next;
}
$fn1497 $tmp1496 = $tmp1495->methods[0];
panda$core$Bit $tmp1498 = $tmp1496(((panda$core$Equatable*) $tmp1491), ((panda$core$Equatable*) $tmp1494));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1491)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1494)));
*(&local3) = $tmp1498;
goto block36;
block36:;
panda$core$Bit $tmp1499 = *(&local3);
bool $tmp1500 = $tmp1499.value;
if ($tmp1500) goto block37; else goto block38;
block37:;
// line 630
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block38:;
// line 632
panda$core$Bit $tmp1501 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit(param0);
bool $tmp1502 = $tmp1501.value;
if ($tmp1502) goto block39; else goto block40;
block39:;
// line 633
panda$core$String** $tmp1503 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1504 = *$tmp1503;
panda$core$Bit $tmp1505 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp1504, &$s1506);
bool $tmp1507 = $tmp1505.value;
if ($tmp1507) goto block41; else goto block42;
block41:;
// line 634
org$pandalanguage$pandac$Type* $tmp1508 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1508));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1508));
return $tmp1508;
block42:;
// line 636
org$pandalanguage$pandac$Type* $tmp1509 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1509));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1509));
return $tmp1509;
block40:;
goto block33;
block33:;
// line 639
org$pandalanguage$pandac$Type$Kind* $tmp1510 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1511 = *$tmp1510;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1512;
$tmp1512 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1512->value = $tmp1511;
panda$core$Int64 $tmp1513 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1514 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1513);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1515;
$tmp1515 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1515->value = $tmp1514;
ITable* $tmp1516 = ((panda$core$Equatable*) $tmp1512)->$class->itable;
while ($tmp1516->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1516 = $tmp1516->next;
}
$fn1518 $tmp1517 = $tmp1516->methods[0];
panda$core$Bit $tmp1519 = $tmp1517(((panda$core$Equatable*) $tmp1512), ((panda$core$Equatable*) $tmp1515));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1512)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1515)));
bool $tmp1520 = $tmp1519.value;
if ($tmp1520) goto block43; else goto block44;
block43:;
// line 640
panda$collections$ImmutableArray** $tmp1521 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1522 = *$tmp1521;
panda$core$Int64 $tmp1523 = (panda$core$Int64) {0};
panda$core$Object* $tmp1524 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1522, $tmp1523);
org$pandalanguage$pandac$Type* $tmp1525 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1524), param1, param2);
org$pandalanguage$pandac$Type* $tmp1526 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1525);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1526));
panda$core$Panda$unref$panda$core$Object$Q($tmp1524);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1525));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1526));
return $tmp1526;
block44:;
// line 642
org$pandalanguage$pandac$Type$Kind* $tmp1527 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1528 = *$tmp1527;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1529;
$tmp1529 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1529->value = $tmp1528;
panda$core$Int64 $tmp1530 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1531 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1530);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1532;
$tmp1532 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1532->value = $tmp1531;
ITable* $tmp1533 = ((panda$core$Equatable*) $tmp1529)->$class->itable;
while ($tmp1533->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1533 = $tmp1533->next;
}
$fn1535 $tmp1534 = $tmp1533->methods[0];
panda$core$Bit $tmp1536 = $tmp1534(((panda$core$Equatable*) $tmp1529), ((panda$core$Equatable*) $tmp1532));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1529)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1532)));
bool $tmp1537 = $tmp1536.value;
if ($tmp1537) goto block45; else goto block46;
block45:;
// line 643
panda$collections$ImmutableArray** $tmp1538 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp1539 = *$tmp1538;
panda$core$Int64 $tmp1540 = (panda$core$Int64) {0};
panda$core$Object* $tmp1541 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1539, $tmp1540);
org$pandalanguage$pandac$Type* $tmp1542 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param0, param1, ((org$pandalanguage$pandac$Type*) $tmp1541));
org$pandalanguage$pandac$Type* $tmp1543 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1542);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1543));
panda$core$Panda$unref$panda$core$Object$Q($tmp1541);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1542));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1543));
return $tmp1543;
block46:;
// line 645
org$pandalanguage$pandac$Type* $tmp1544 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, param0);
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1545 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1545));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1544));
*(&local4) = $tmp1544;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1544));
// line 646
org$pandalanguage$pandac$Type* $tmp1546 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, param2);
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1547 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1547));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1546));
*(&local5) = $tmp1546;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1546));
// line 647
org$pandalanguage$pandac$Type* $tmp1548 = *(&local4);
panda$core$Bit $tmp1549 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp1548);
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block47; else goto block48;
block47:;
org$pandalanguage$pandac$Type* $tmp1551 = *(&local5);
panda$core$Bit $tmp1552 = org$pandalanguage$pandac$Type$get_isClass$R$panda$core$Bit($tmp1551);
*(&local6) = $tmp1552;
goto block49;
block48:;
*(&local6) = $tmp1549;
goto block49;
block49:;
panda$core$Bit $tmp1553 = *(&local6);
bool $tmp1554 = $tmp1553.value;
if ($tmp1554) goto block50; else goto block51;
block50:;
// line 648
panda$collections$HashSet* $tmp1555 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
panda$collections$HashSet$init($tmp1555);
*(&local7) = ((panda$collections$HashSet*) NULL);
panda$collections$HashSet* $tmp1556 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1556));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
*(&local7) = $tmp1555;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
// line 649
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1557 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1557));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
*(&local8) = param0;
// line 650
org$pandalanguage$pandac$Type* $tmp1558 = *(&local4);
org$pandalanguage$pandac$ClassDecl* $tmp1559 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1558);
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1560 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1560));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1559));
*(&local9) = $tmp1559;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1559));
// line 651
goto block52;
block52:;
org$pandalanguage$pandac$ClassDecl* $tmp1561 = *(&local9);
panda$core$Bit $tmp1562 = panda$core$Bit$init$builtin_bit($tmp1561 != NULL);
bool $tmp1563 = $tmp1562.value;
if ($tmp1563) goto block53; else goto block54;
block53:;
// line 652
panda$collections$HashSet* $tmp1564 = *(&local7);
org$pandalanguage$pandac$Type* $tmp1565 = *(&local8);
panda$collections$HashSet$add$panda$collections$HashSet$T($tmp1564, ((panda$collections$Key*) $tmp1565));
// line 653
org$pandalanguage$pandac$ClassDecl* $tmp1566 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1567 = &$tmp1566->rawSuper;
org$pandalanguage$pandac$Type* $tmp1568 = *$tmp1567;
panda$core$Bit $tmp1569 = panda$core$Bit$init$builtin_bit($tmp1568 != NULL);
bool $tmp1570 = $tmp1569.value;
if ($tmp1570) goto block55; else goto block57;
block55:;
// line 654
org$pandalanguage$pandac$Type* $tmp1571 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1572 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1573 = &$tmp1572->rawSuper;
org$pandalanguage$pandac$Type* $tmp1574 = *$tmp1573;
org$pandalanguage$pandac$Type* $tmp1575 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp1571, $tmp1574);
org$pandalanguage$pandac$Type* $tmp1576 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1576));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1575));
*(&local8) = $tmp1575;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1575));
// line 655
org$pandalanguage$pandac$Type* $tmp1577 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1578 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1577);
org$pandalanguage$pandac$ClassDecl* $tmp1579 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1579));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1578));
*(&local9) = $tmp1578;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1578));
goto block56;
block57:;
// line 1
// line 658
org$pandalanguage$pandac$ClassDecl* $tmp1580 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1580));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block56;
block56:;
goto block52;
block54:;
// line 661
org$pandalanguage$pandac$Type* $tmp1581 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1581));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
*(&local8) = param2;
// line 662
org$pandalanguage$pandac$Type* $tmp1582 = *(&local5);
org$pandalanguage$pandac$ClassDecl* $tmp1583 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1582);
org$pandalanguage$pandac$ClassDecl* $tmp1584 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1584));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1583));
*(&local9) = $tmp1583;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1583));
// line 663
goto block58;
block58:;
org$pandalanguage$pandac$ClassDecl* $tmp1585 = *(&local9);
panda$core$Bit $tmp1586 = panda$core$Bit$init$builtin_bit($tmp1585 != NULL);
bool $tmp1587 = $tmp1586.value;
if ($tmp1587) goto block59; else goto block60;
block59:;
// line 664
panda$collections$HashSet* $tmp1588 = *(&local7);
org$pandalanguage$pandac$Type* $tmp1589 = *(&local8);
panda$core$Bit $tmp1590 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit($tmp1588, ((panda$collections$Key*) $tmp1589));
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block61; else goto block62;
block61:;
// line 665
org$pandalanguage$pandac$Type* $tmp1592 = *(&local8);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1592));
org$pandalanguage$pandac$ClassDecl* $tmp1593 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1593));
// unreffing cl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp1594 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1594));
// unreffing t
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$HashSet* $tmp1595 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1595));
// unreffing ancestors
*(&local7) = ((panda$collections$HashSet*) NULL);
org$pandalanguage$pandac$Type* $tmp1596 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1596));
// unreffing t2
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1597 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1597));
// unreffing t1
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1592;
block62:;
// line 667
org$pandalanguage$pandac$ClassDecl* $tmp1598 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1599 = &$tmp1598->rawSuper;
org$pandalanguage$pandac$Type* $tmp1600 = *$tmp1599;
panda$core$Bit $tmp1601 = panda$core$Bit$init$builtin_bit($tmp1600 != NULL);
bool $tmp1602 = $tmp1601.value;
if ($tmp1602) goto block63; else goto block65;
block63:;
// line 668
org$pandalanguage$pandac$Type* $tmp1603 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1604 = *(&local9);
org$pandalanguage$pandac$Type** $tmp1605 = &$tmp1604->rawSuper;
org$pandalanguage$pandac$Type* $tmp1606 = *$tmp1605;
org$pandalanguage$pandac$Type* $tmp1607 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp1603, $tmp1606);
org$pandalanguage$pandac$Type* $tmp1608 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1608));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1607));
*(&local8) = $tmp1607;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1607));
// line 669
org$pandalanguage$pandac$Type* $tmp1609 = *(&local8);
org$pandalanguage$pandac$ClassDecl* $tmp1610 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param1, $tmp1609);
org$pandalanguage$pandac$ClassDecl* $tmp1611 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1611));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1610));
*(&local9) = $tmp1610;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1610));
goto block64;
block65:;
// line 1
// line 672
org$pandalanguage$pandac$ClassDecl* $tmp1612 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1612));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block64;
block64:;
goto block58;
block60:;
org$pandalanguage$pandac$ClassDecl* $tmp1613 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1613));
// unreffing cl
*(&local9) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp1614 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1614));
// unreffing t
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$HashSet* $tmp1615 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1615));
// unreffing ancestors
*(&local7) = ((panda$collections$HashSet*) NULL);
goto block51;
block51:;
// line 676
org$pandalanguage$pandac$Type* $tmp1616 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1616));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1616));
org$pandalanguage$pandac$Type* $tmp1617 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1617));
// unreffing t2
*(&local5) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1618 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1618));
// unreffing t1
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1616;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, panda$collections$HashMap* param1) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$core$Int64 local3;
panda$collections$Array* local4 = NULL;
panda$core$Int64 local5;
org$pandalanguage$pandac$Type$Kind* $tmp1619 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1620 = *$tmp1619;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1621;
$tmp1621 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1621->value = $tmp1620;
panda$core$Int64 $tmp1622 = (panda$core$Int64) {6};
org$pandalanguage$pandac$Type$Kind $tmp1623 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1622);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1624;
$tmp1624 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1624->value = $tmp1623;
ITable* $tmp1625 = ((panda$core$Equatable*) $tmp1621)->$class->itable;
while ($tmp1625->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1625 = $tmp1625->next;
}
$fn1627 $tmp1626 = $tmp1625->methods[1];
panda$core$Bit $tmp1628 = $tmp1626(((panda$core$Equatable*) $tmp1621), ((panda$core$Equatable*) $tmp1624));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1621)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1624)));
bool $tmp1629 = $tmp1628.value;
if ($tmp1629) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp1630 = (panda$core$Int64) {681};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1631, $tmp1630, &$s1632);
abort(); // unreachable
block1:;
// line 682
ITable* $tmp1633 = ((panda$collections$MapView*) param1)->$class->itable;
while ($tmp1633->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp1633 = $tmp1633->next;
}
$fn1635 $tmp1634 = $tmp1633->methods[0];
panda$core$Int64 $tmp1636 = $tmp1634(((panda$collections$MapView*) param1));
panda$core$Int64 $tmp1637 = (panda$core$Int64) {0};
panda$core$Bit $tmp1638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1636, $tmp1637);
bool $tmp1639 = $tmp1638.value;
if ($tmp1639) goto block3; else goto block4;
block3:;
// line 683
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block4:;
// line 685
org$pandalanguage$pandac$Type$Kind* $tmp1640 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1641 = *$tmp1640;
panda$core$Int64 $tmp1642 = $tmp1641.$rawValue;
panda$core$Int64 $tmp1643 = (panda$core$Int64) {12};
panda$core$Bit $tmp1644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1642, $tmp1643);
bool $tmp1645 = $tmp1644.value;
if ($tmp1645) goto block6; else goto block7;
block6:;
// line 687
panda$core$String** $tmp1646 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1647 = *$tmp1646;
panda$core$Object* $tmp1648 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(param1, ((panda$collections$Key*) $tmp1647));
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1649 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1649));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1648)));
*(&local0) = ((org$pandalanguage$pandac$Type*) $tmp1648);
panda$core$Panda$unref$panda$core$Object$Q($tmp1648);
// line 688
org$pandalanguage$pandac$Type* $tmp1650 = *(&local0);
panda$core$Bit $tmp1651 = panda$core$Bit$init$builtin_bit($tmp1650 != NULL);
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block8; else goto block9;
block8:;
// line 689
org$pandalanguage$pandac$Type* $tmp1653 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1653));
org$pandalanguage$pandac$Type* $tmp1654 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1654));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1653;
block9:;
// line 691
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
org$pandalanguage$pandac$Type* $tmp1655 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1655));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return param0;
block7:;
panda$core$Int64 $tmp1656 = (panda$core$Int64) {11};
panda$core$Bit $tmp1657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1642, $tmp1656);
bool $tmp1658 = $tmp1657.value;
if ($tmp1658) goto block10; else goto block11;
block10:;
// line 693
panda$collections$ImmutableArray** $tmp1659 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1660 = *$tmp1659;
panda$core$Int64 $tmp1661 = (panda$core$Int64) {0};
panda$core$Object* $tmp1662 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1660, $tmp1661);
org$pandalanguage$pandac$Type* $tmp1663 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1662), param1);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1664 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1664));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1663));
*(&local1) = $tmp1663;
panda$core$Panda$unref$panda$core$Object$Q($tmp1662);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1663));
// line 694
panda$collections$Array* $tmp1665 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1665);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1666 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1666));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1665));
*(&local2) = $tmp1665;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1665));
// line 695
panda$core$Int64 $tmp1667 = (panda$core$Int64) {1};
panda$collections$ImmutableArray** $tmp1668 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1669 = *$tmp1668;
ITable* $tmp1670 = ((panda$collections$CollectionView*) $tmp1669)->$class->itable;
while ($tmp1670->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1670 = $tmp1670->next;
}
$fn1672 $tmp1671 = $tmp1670->methods[0];
panda$core$Int64 $tmp1673 = $tmp1671(((panda$collections$CollectionView*) $tmp1669));
panda$core$Bit $tmp1674 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1675 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1667, $tmp1673, $tmp1674);
panda$core$Int64 $tmp1676 = $tmp1675.min;
*(&local3) = $tmp1676;
panda$core$Int64 $tmp1677 = $tmp1675.max;
panda$core$Bit $tmp1678 = $tmp1675.inclusive;
bool $tmp1679 = $tmp1678.value;
panda$core$Int64 $tmp1680 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1681 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1680);
if ($tmp1679) goto block15; else goto block16;
block15:;
int64_t $tmp1682 = $tmp1676.value;
int64_t $tmp1683 = $tmp1677.value;
bool $tmp1684 = $tmp1682 <= $tmp1683;
panda$core$Bit $tmp1685 = (panda$core$Bit) {$tmp1684};
bool $tmp1686 = $tmp1685.value;
if ($tmp1686) goto block12; else goto block13;
block16:;
int64_t $tmp1687 = $tmp1676.value;
int64_t $tmp1688 = $tmp1677.value;
bool $tmp1689 = $tmp1687 < $tmp1688;
panda$core$Bit $tmp1690 = (panda$core$Bit) {$tmp1689};
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block12; else goto block13;
block12:;
// line 696
panda$collections$Array* $tmp1692 = *(&local2);
panda$collections$ImmutableArray** $tmp1693 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1694 = *$tmp1693;
panda$core$Int64 $tmp1695 = *(&local3);
panda$core$Object* $tmp1696 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1694, $tmp1695);
org$pandalanguage$pandac$Type* $tmp1697 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1696), param1);
panda$collections$Array$add$panda$collections$Array$T($tmp1692, ((panda$core$Object*) $tmp1697));
panda$core$Panda$unref$panda$core$Object$Q($tmp1696);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1697));
goto block14;
block14:;
panda$core$Int64 $tmp1698 = *(&local3);
int64_t $tmp1699 = $tmp1677.value;
int64_t $tmp1700 = $tmp1698.value;
int64_t $tmp1701 = $tmp1699 - $tmp1700;
panda$core$Int64 $tmp1702 = (panda$core$Int64) {$tmp1701};
panda$core$UInt64 $tmp1703 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1702);
if ($tmp1679) goto block18; else goto block19;
block18:;
uint64_t $tmp1704 = $tmp1703.value;
uint64_t $tmp1705 = $tmp1681.value;
bool $tmp1706 = $tmp1704 >= $tmp1705;
panda$core$Bit $tmp1707 = (panda$core$Bit) {$tmp1706};
bool $tmp1708 = $tmp1707.value;
if ($tmp1708) goto block17; else goto block13;
block19:;
uint64_t $tmp1709 = $tmp1703.value;
uint64_t $tmp1710 = $tmp1681.value;
bool $tmp1711 = $tmp1709 > $tmp1710;
panda$core$Bit $tmp1712 = (panda$core$Bit) {$tmp1711};
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block17; else goto block13;
block17:;
int64_t $tmp1714 = $tmp1698.value;
int64_t $tmp1715 = $tmp1680.value;
int64_t $tmp1716 = $tmp1714 + $tmp1715;
panda$core$Int64 $tmp1717 = (panda$core$Int64) {$tmp1716};
*(&local3) = $tmp1717;
goto block12;
block13:;
// line 698
org$pandalanguage$pandac$Type* $tmp1718 = *(&local1);
panda$collections$Array* $tmp1719 = *(&local2);
org$pandalanguage$pandac$Type* $tmp1720 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp1718, ((panda$collections$ListView*) $tmp1719));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1720));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1720));
panda$collections$Array* $tmp1721 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1721));
// unreffing remappedArgs
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp1722 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1722));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1720;
block11:;
panda$core$Int64 $tmp1723 = (panda$core$Int64) {1};
panda$core$Bit $tmp1724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1642, $tmp1723);
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block20; else goto block21;
block20:;
// line 700
panda$collections$ImmutableArray** $tmp1726 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1727 = *$tmp1726;
panda$core$Int64 $tmp1728 = (panda$core$Int64) {0};
panda$core$Object* $tmp1729 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1727, $tmp1728);
org$pandalanguage$pandac$Type* $tmp1730 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1729), param1);
org$pandalanguage$pandac$Type* $tmp1731 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1730);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1731));
panda$core$Panda$unref$panda$core$Object$Q($tmp1729);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1730));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1731));
return $tmp1731;
block21:;
panda$core$Int64 $tmp1732 = (panda$core$Int64) {15};
panda$core$Bit $tmp1733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1642, $tmp1732);
bool $tmp1734 = $tmp1733.value;
if ($tmp1734) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp1735 = (panda$core$Int64) {14};
panda$core$Bit $tmp1736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1642, $tmp1735);
bool $tmp1737 = $tmp1736.value;
if ($tmp1737) goto block22; else goto block24;
block24:;
panda$core$Int64 $tmp1738 = (panda$core$Int64) {17};
panda$core$Bit $tmp1739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1642, $tmp1738);
bool $tmp1740 = $tmp1739.value;
if ($tmp1740) goto block22; else goto block25;
block25:;
panda$core$Int64 $tmp1741 = (panda$core$Int64) {16};
panda$core$Bit $tmp1742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1642, $tmp1741);
bool $tmp1743 = $tmp1742.value;
if ($tmp1743) goto block22; else goto block26;
block22:;
// line 702
panda$collections$Array* $tmp1744 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1744);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1745 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1744));
*(&local4) = $tmp1744;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1744));
// line 703
panda$collections$ImmutableArray** $tmp1746 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1747 = *$tmp1746;
ITable* $tmp1748 = ((panda$collections$CollectionView*) $tmp1747)->$class->itable;
while ($tmp1748->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1748 = $tmp1748->next;
}
$fn1750 $tmp1749 = $tmp1748->methods[0];
panda$core$Int64 $tmp1751 = $tmp1749(((panda$collections$CollectionView*) $tmp1747));
panda$core$Int64 $tmp1752 = (panda$core$Int64) {1};
int64_t $tmp1753 = $tmp1751.value;
int64_t $tmp1754 = $tmp1752.value;
bool $tmp1755 = $tmp1753 >= $tmp1754;
panda$core$Bit $tmp1756 = (panda$core$Bit) {$tmp1755};
bool $tmp1757 = $tmp1756.value;
if ($tmp1757) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp1758 = (panda$core$Int64) {703};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1759, $tmp1758);
abort(); // unreachable
block27:;
// line 704
panda$core$Int64 $tmp1760 = (panda$core$Int64) {0};
panda$collections$ImmutableArray** $tmp1761 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1762 = *$tmp1761;
ITable* $tmp1763 = ((panda$collections$CollectionView*) $tmp1762)->$class->itable;
while ($tmp1763->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1763 = $tmp1763->next;
}
$fn1765 $tmp1764 = $tmp1763->methods[0];
panda$core$Int64 $tmp1766 = $tmp1764(((panda$collections$CollectionView*) $tmp1762));
panda$core$Int64 $tmp1767 = (panda$core$Int64) {1};
int64_t $tmp1768 = $tmp1766.value;
int64_t $tmp1769 = $tmp1767.value;
int64_t $tmp1770 = $tmp1768 - $tmp1769;
panda$core$Int64 $tmp1771 = (panda$core$Int64) {$tmp1770};
panda$core$Bit $tmp1772 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1773 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1760, $tmp1771, $tmp1772);
panda$core$Int64 $tmp1774 = $tmp1773.min;
*(&local5) = $tmp1774;
panda$core$Int64 $tmp1775 = $tmp1773.max;
panda$core$Bit $tmp1776 = $tmp1773.inclusive;
bool $tmp1777 = $tmp1776.value;
panda$core$Int64 $tmp1778 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1779 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1778);
if ($tmp1777) goto block32; else goto block33;
block32:;
int64_t $tmp1780 = $tmp1774.value;
int64_t $tmp1781 = $tmp1775.value;
bool $tmp1782 = $tmp1780 <= $tmp1781;
panda$core$Bit $tmp1783 = (panda$core$Bit) {$tmp1782};
bool $tmp1784 = $tmp1783.value;
if ($tmp1784) goto block29; else goto block30;
block33:;
int64_t $tmp1785 = $tmp1774.value;
int64_t $tmp1786 = $tmp1775.value;
bool $tmp1787 = $tmp1785 < $tmp1786;
panda$core$Bit $tmp1788 = (panda$core$Bit) {$tmp1787};
bool $tmp1789 = $tmp1788.value;
if ($tmp1789) goto block29; else goto block30;
block29:;
// line 705
panda$collections$Array* $tmp1790 = *(&local4);
panda$collections$ImmutableArray** $tmp1791 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1792 = *$tmp1791;
panda$core$Int64 $tmp1793 = *(&local5);
panda$core$Object* $tmp1794 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1792, $tmp1793);
org$pandalanguage$pandac$Type* $tmp1795 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1794), param1);
panda$collections$Array$add$panda$collections$Array$T($tmp1790, ((panda$core$Object*) $tmp1795));
panda$core$Panda$unref$panda$core$Object$Q($tmp1794);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1795));
goto block31;
block31:;
panda$core$Int64 $tmp1796 = *(&local5);
int64_t $tmp1797 = $tmp1775.value;
int64_t $tmp1798 = $tmp1796.value;
int64_t $tmp1799 = $tmp1797 - $tmp1798;
panda$core$Int64 $tmp1800 = (panda$core$Int64) {$tmp1799};
panda$core$UInt64 $tmp1801 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1800);
if ($tmp1777) goto block35; else goto block36;
block35:;
uint64_t $tmp1802 = $tmp1801.value;
uint64_t $tmp1803 = $tmp1779.value;
bool $tmp1804 = $tmp1802 >= $tmp1803;
panda$core$Bit $tmp1805 = (panda$core$Bit) {$tmp1804};
bool $tmp1806 = $tmp1805.value;
if ($tmp1806) goto block34; else goto block30;
block36:;
uint64_t $tmp1807 = $tmp1801.value;
uint64_t $tmp1808 = $tmp1779.value;
bool $tmp1809 = $tmp1807 > $tmp1808;
panda$core$Bit $tmp1810 = (panda$core$Bit) {$tmp1809};
bool $tmp1811 = $tmp1810.value;
if ($tmp1811) goto block34; else goto block30;
block34:;
int64_t $tmp1812 = $tmp1796.value;
int64_t $tmp1813 = $tmp1778.value;
int64_t $tmp1814 = $tmp1812 + $tmp1813;
panda$core$Int64 $tmp1815 = (panda$core$Int64) {$tmp1814};
*(&local5) = $tmp1815;
goto block29;
block30:;
// line 707
org$pandalanguage$pandac$Position* $tmp1816 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp1817 = *$tmp1816;
org$pandalanguage$pandac$Type$Kind* $tmp1818 = &param0->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1819 = *$tmp1818;
panda$collections$Array* $tmp1820 = *(&local4);
panda$collections$ImmutableArray** $tmp1821 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1822 = *$tmp1821;
panda$collections$ImmutableArray** $tmp1823 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1824 = *$tmp1823;
ITable* $tmp1825 = ((panda$collections$CollectionView*) $tmp1824)->$class->itable;
while ($tmp1825->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1825 = $tmp1825->next;
}
$fn1827 $tmp1826 = $tmp1825->methods[0];
panda$core$Int64 $tmp1828 = $tmp1826(((panda$collections$CollectionView*) $tmp1824));
panda$core$Int64 $tmp1829 = (panda$core$Int64) {1};
int64_t $tmp1830 = $tmp1828.value;
int64_t $tmp1831 = $tmp1829.value;
int64_t $tmp1832 = $tmp1830 - $tmp1831;
panda$core$Int64 $tmp1833 = (panda$core$Int64) {$tmp1832};
panda$core$Object* $tmp1834 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp1822, $tmp1833);
org$pandalanguage$pandac$Type* $tmp1835 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1834), param1);
panda$core$Int64* $tmp1836 = &param0->priority;
panda$core$Int64 $tmp1837 = *$tmp1836;
org$pandalanguage$pandac$Type* $tmp1838 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp1817, $tmp1819, ((panda$collections$ListView*) $tmp1820), $tmp1835, $tmp1837);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1838));
panda$core$Panda$unref$panda$core$Object$Q($tmp1834);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1835));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1838));
panda$collections$Array* $tmp1839 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1839));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
return $tmp1838;
block26:;
// line 709
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
return param0;
block5:;
panda$core$Bit $tmp1840 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1841 = $tmp1840.value;
if ($tmp1841) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp1842 = (panda$core$Int64) {681};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1843, $tmp1842, &$s1844);
abort(); // unreachable
block37:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$pandac$Type$get_hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* param0) {

// line 715
panda$core$String** $tmp1845 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1846 = *$tmp1845;
ITable* $tmp1847 = ((panda$collections$Key*) $tmp1846)->$class->itable;
while ($tmp1847->$class != (panda$core$Class*) &panda$collections$Key$class) {
    $tmp1847 = $tmp1847->next;
}
$fn1849 $tmp1848 = $tmp1847->methods[0];
panda$core$Int64 $tmp1850 = $tmp1848(((panda$collections$Key*) $tmp1846));
return $tmp1850;

}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* param0) {

// line 720
panda$core$String** $tmp1851 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1852 = *$tmp1851;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1852));
return $tmp1852;

}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* param0) {

panda$collections$ImmutableArray** $tmp1853 = &param0->subtypes;
panda$collections$ImmutableArray* $tmp1854 = *$tmp1853;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1854));
panda$core$Weak** $tmp1855 = &param0->genericParameter;
panda$core$Weak* $tmp1856 = *$tmp1855;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1856));
return;

}

