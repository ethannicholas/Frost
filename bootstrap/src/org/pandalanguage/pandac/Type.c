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
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/ImmutableArray.h"
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
__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p0, ((org$pandalanguage$pandac$Type*) p1));

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Type$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Type$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$collections$Key, { org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim} };

static panda$core$String $s1;
org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, org$pandalanguage$pandac$Type$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$isNullable$R$panda$core$Bit, org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit, org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit, org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit, org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$returnType$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn114)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn121)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn132)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn195)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn202)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn213)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn270)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn277)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn288)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn364)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1246)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1459)(panda$collections$MapView*);
typedef panda$core$Int64 (*$fn1506)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1576)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1587)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1621)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 29, -3248623696866231612, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3d", 11, 4555205210328637565, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x3d", 10, -7078666603951044273, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5895082338763246016, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -1180377256514028899, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s1039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 106, -1489654704582770111, NULL };
static panda$core$String $s1316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 180, -8366325379630919520, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 181, -4388988894214124261, NULL };

void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position) {
    panda$core$Bit $tmp2;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Bit$init$builtin_bit(&$tmp2, false);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit(self, p_name, p_typeKind, p_position, $tmp2);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_resolved) {
    panda$core$Weak* $tmp3;
    panda$core$Weak* $tmp4;
    panda$collections$Array* $tmp6;
    panda$collections$Array* $tmp7;
    org$pandalanguage$pandac$Symbol$Kind $tmp8;
    panda$core$Int64 $tmp9;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Weak* $tmp5 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T$Q($tmp5, ((panda$core$Object*) NULL));
    $tmp4 = $tmp5;
    $tmp3 = $tmp4;
    self->parameter = $tmp3;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        $tmp6 = self->subtypes;
        $tmp7 = NULL;
        self->subtypes = $tmp7;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
    }
    panda$core$Int64$init$builtin_int64(&$tmp9, 7);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp8, $tmp9);
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp8, p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, panda$core$Int64 p_size) {
    panda$core$Weak* $tmp10;
    panda$core$Weak* $tmp11;
    org$pandalanguage$pandac$Position $tmp19;
    panda$core$Bit $tmp20;
    panda$collections$Array* $tmp21;
    panda$collections$Array* $tmp22;
    org$pandalanguage$pandac$Symbol$Kind $tmp23;
    panda$core$Int64 $tmp24;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Weak* $tmp12 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T$Q($tmp12, ((panda$core$Object*) NULL));
    $tmp11 = $tmp12;
    $tmp10 = $tmp11;
    self->parameter = $tmp10;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
    panda$core$Bit $tmp14 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s13);
    panda$core$Bit $tmp15 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp14);
    if ($tmp15.value) goto $l16; else goto $l17;
    $l17:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s18, (panda$core$Int64) { 49 });
    abort();
    $l16:;
    self->typeKind = p_typeKind;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp19, p_size, p_size);
    ((org$pandalanguage$pandac$Symbol*) self)->position = $tmp19;
    panda$core$Bit$init$builtin_bit(&$tmp20, true);
    self->resolved = $tmp20;
    {
        $tmp21 = self->subtypes;
        $tmp22 = NULL;
        self->subtypes = $tmp22;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
    }
    panda$core$Int64$init$builtin_int64(&$tmp24, 7);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp23, $tmp24);
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp23, self->position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_subtypes, panda$core$Bit p_resolved) {
    panda$core$Weak* $tmp25;
    panda$core$Weak* $tmp26;
    panda$core$Int64 $tmp28;
    panda$core$String* $tmp36;
    panda$core$String* $tmp37;
    panda$core$String* $tmp38;
    panda$core$String* $tmp39;
    panda$core$Object* $tmp44;
    panda$core$Int64 $tmp45;
    panda$core$Int64 $tmp51;
    panda$core$String* $tmp59;
    panda$core$String* $tmp60;
    panda$core$String* $tmp61;
    panda$core$String* $tmp62;
    panda$core$Object* $tmp67;
    panda$core$Int64 $tmp68;
    panda$core$Int64 $tmp74;
    panda$collections$Array* $tmp79;
    panda$collections$Array* $tmp80;
    panda$collections$Array* $tmp81;
    org$pandalanguage$pandac$Symbol$Kind $tmp83;
    panda$core$Int64 $tmp84;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Weak* $tmp27 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T$Q($tmp27, ((panda$core$Object*) NULL));
    $tmp26 = $tmp27;
    $tmp25 = $tmp26;
    self->parameter = $tmp25;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
    panda$core$Int64$init$builtin_int64(&$tmp28, 1);
    panda$core$Bit $tmp29 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, $tmp28);
    panda$core$Bit $tmp31 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s30);
    panda$core$Bit $tmp32 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp29, $tmp31);
    if ($tmp32.value) goto $l33; else goto $l34;
    $l34:;
    panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s40, p_name);
    $tmp39 = $tmp41;
    panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp39, &$s42);
    $tmp38 = $tmp43;
    panda$core$Int64$init$builtin_int64(&$tmp45, 1);
    panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, $tmp45);
    panda$core$Bit$wrapper* $tmp47;
    $tmp47 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp47->value = $tmp46;
    $tmp44 = ((panda$core$Object*) $tmp47);
    panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp38, $tmp44);
    $tmp37 = $tmp48;
    panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp37, &$s49);
    $tmp36 = $tmp50;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s35, (panda$core$Int64) { 58 }, $tmp36);
    abort();
    $l33:;
    panda$core$Int64$init$builtin_int64(&$tmp51, 11);
    panda$core$Bit $tmp52 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, $tmp51);
    panda$core$Bit $tmp54 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s53);
    panda$core$Bit $tmp55 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp52, $tmp54);
    if ($tmp55.value) goto $l56; else goto $l57;
    $l57:;
    panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s63, p_name);
    $tmp62 = $tmp64;
    panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, &$s65);
    $tmp61 = $tmp66;
    panda$core$Int64$init$builtin_int64(&$tmp68, 11);
    panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, $tmp68);
    panda$core$Bit$wrapper* $tmp70;
    $tmp70 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp70->value = $tmp69;
    $tmp67 = ((panda$core$Object*) $tmp70);
    panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp61, $tmp67);
    $tmp60 = $tmp71;
    panda$core$String* $tmp73 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp60, &$s72);
    $tmp59 = $tmp73;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s58, (panda$core$Int64) { 60 }, $tmp59);
    abort();
    $l56:;
    panda$core$Int64$init$builtin_int64(&$tmp74, 12);
    panda$core$Bit $tmp75 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, $tmp74);
    if ($tmp75.value) goto $l76; else goto $l77;
    $l77:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s78, (panda$core$Int64) { 62 });
    abort();
    $l76:;
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        $tmp79 = self->subtypes;
        panda$collections$Array* $tmp82 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp82, ((panda$collections$CollectionView*) p_subtypes));
        $tmp81 = $tmp82;
        $tmp80 = $tmp81;
        self->subtypes = $tmp80;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
    }
    panda$core$Int64$init$builtin_int64(&$tmp84, 7);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp83, $tmp84);
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp83, p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    panda$core$Weak* $tmp85;
    panda$core$Weak* $tmp86;
    org$pandalanguage$pandac$Type$Kind $tmp91;
    panda$core$Int64 $tmp92;
    panda$collections$Array* $tmp93;
    panda$collections$Array* $tmp94;
    panda$collections$Array* $tmp95;
    panda$core$MutableString* name97 = NULL;
    panda$core$MutableString* $tmp98;
    panda$core$MutableString* $tmp99;
    panda$core$String* separator102 = NULL;
    panda$core$String* $tmp103;
    panda$core$Bit $tmp105;
    panda$collections$Iterator* Iter$76$9109 = NULL;
    panda$collections$Iterator* $tmp110;
    panda$collections$Iterator* $tmp111;
    org$pandalanguage$pandac$Type* t127 = NULL;
    org$pandalanguage$pandac$Type* $tmp128;
    panda$core$Object* $tmp129;
    panda$core$String* $tmp134;
    panda$core$String* $tmp135;
    org$pandalanguage$pandac$Type* $tmp137;
    panda$core$Char8 $tmp143;
    panda$core$UInt8 $tmp144;
    org$pandalanguage$pandac$Symbol$Kind $tmp145;
    panda$core$Int64 $tmp146;
    panda$core$String* $tmp147;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Weak* $tmp87 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T$Q($tmp87, ((panda$core$Object*) NULL));
    $tmp86 = $tmp87;
    $tmp85 = $tmp86;
    self->parameter = $tmp85;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
    int $tmp90;
    {
        panda$core$Int64$init$builtin_int64(&$tmp92, 7);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp91, $tmp92);
        self->typeKind = $tmp91;
        {
            $tmp93 = self->subtypes;
            panda$collections$Array* $tmp96 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp96, ((panda$collections$CollectionView*) p_subtypes));
            $tmp95 = $tmp96;
            $tmp94 = $tmp95;
            self->subtypes = $tmp94;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
        }
        panda$core$MutableString* $tmp100 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp100, &$s101);
        $tmp99 = $tmp100;
        $tmp98 = $tmp99;
        name97 = $tmp98;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
        $tmp103 = &$s104;
        separator102 = $tmp103;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
        panda$core$Bit$init$builtin_bit(&$tmp105, true);
        self->resolved = $tmp105;
        {
            int $tmp108;
            {
                ITable* $tmp112 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
                while ($tmp112->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp112 = $tmp112->next;
                }
                $fn114 $tmp113 = $tmp112->methods[0];
                panda$collections$Iterator* $tmp115 = $tmp113(((panda$collections$Iterable*) p_subtypes));
                $tmp111 = $tmp115;
                $tmp110 = $tmp111;
                Iter$76$9109 = $tmp110;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
                $l116:;
                ITable* $tmp119 = Iter$76$9109->$class->itable;
                while ($tmp119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp119 = $tmp119->next;
                }
                $fn121 $tmp120 = $tmp119->methods[0];
                panda$core$Bit $tmp122 = $tmp120(Iter$76$9109);
                panda$core$Bit $tmp123 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp122);
                bool $tmp118 = $tmp123.value;
                if (!$tmp118) goto $l117;
                {
                    int $tmp126;
                    {
                        ITable* $tmp130 = Iter$76$9109->$class->itable;
                        while ($tmp130->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp130 = $tmp130->next;
                        }
                        $fn132 $tmp131 = $tmp130->methods[1];
                        panda$core$Object* $tmp133 = $tmp131(Iter$76$9109);
                        $tmp129 = $tmp133;
                        $tmp128 = ((org$pandalanguage$pandac$Type*) $tmp129);
                        t127 = $tmp128;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp129);
                        panda$core$MutableString$append$panda$core$String(name97, separator102);
                        panda$core$MutableString$append$panda$core$Object(name97, ((panda$core$Object*) t127));
                        {
                            $tmp134 = separator102;
                            $tmp135 = &$s136;
                            separator102 = $tmp135;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
                        }
                        $tmp137 = self;
                        bool $tmp138 = $tmp137->resolved.value;
                        if (!$tmp138) goto $l139;
                        $tmp138 = t127->resolved.value;
                        $l139:;
                        panda$core$Bit $tmp140 = { $tmp138 };
                        $tmp137->resolved = $tmp140;
                    }
                    $tmp126 = -1;
                    goto $l124;
                    $l124:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t127));
                    t127 = NULL;
                    switch ($tmp126) {
                        case -1: goto $l141;
                    }
                    $l141:;
                }
                goto $l116;
                $l117:;
            }
            $tmp108 = -1;
            goto $l106;
            $l106:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$76$9109));
            Iter$76$9109 = NULL;
            switch ($tmp108) {
                case -1: goto $l142;
            }
            $l142:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp144, 62);
        panda$core$Char8$init$panda$core$UInt8(&$tmp143, $tmp144);
        panda$core$MutableString$append$panda$core$Char8(name97, $tmp143);
        panda$core$Int64$init$builtin_int64(&$tmp146, 7);
        org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp145, $tmp146);
        panda$core$String* $tmp148 = panda$core$MutableString$finish$R$panda$core$String(name97);
        $tmp147 = $tmp148;
        org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp145, self->position, $tmp147);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
    }
    $tmp90 = -1;
    goto $l88;
    $l88:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) separator102));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name97));
    name97 = NULL;
    separator102 = NULL;
    switch ($tmp90) {
        case -1: goto $l149;
    }
    $l149:;
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    panda$core$Weak* $tmp150;
    panda$core$Weak* $tmp151;
    org$pandalanguage$pandac$Type$Kind $tmp153;
    panda$core$Int64 $tmp154;
    panda$core$Weak* $tmp155;
    panda$core$Weak* $tmp156;
    panda$core$Weak* $tmp157;
    panda$core$Bit $tmp159;
    panda$collections$Array* $tmp160;
    panda$collections$Array* $tmp161;
    org$pandalanguage$pandac$Symbol$Kind $tmp162;
    panda$core$Int64 $tmp163;
    panda$core$String* $tmp164;
    panda$core$String* $tmp165;
    panda$core$String* $tmp166;
    panda$core$String* $tmp167;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Weak* $tmp152 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T$Q($tmp152, ((panda$core$Object*) NULL));
    $tmp151 = $tmp152;
    $tmp150 = $tmp151;
    self->parameter = $tmp150;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
    panda$core$Int64$init$builtin_int64(&$tmp154, 12);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp153, $tmp154);
    self->typeKind = $tmp153;
    {
        $tmp155 = self->parameter;
        panda$core$Weak* $tmp158 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T$Q($tmp158, ((panda$core$Object*) p_param));
        $tmp157 = $tmp158;
        $tmp156 = $tmp157;
        self->parameter = $tmp156;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
    }
    panda$core$Bit$init$builtin_bit(&$tmp159, true);
    self->resolved = $tmp159;
    {
        $tmp160 = self->subtypes;
        $tmp161 = NULL;
        self->subtypes = $tmp161;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
    }
    panda$core$Int64$init$builtin_int64(&$tmp163, 7);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp162, $tmp163);
    panda$core$String* $tmp168 = panda$core$String$convert$R$panda$core$String(p_param->owner);
    $tmp167 = $tmp168;
    panda$core$String* $tmp170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp167, &$s169);
    $tmp166 = $tmp170;
    panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp166, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
    $tmp165 = $tmp171;
    panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp165, &$s172);
    $tmp164 = $tmp173;
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp162, self->position, $tmp164);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_base, panda$collections$ListView* p_arguments) {
    panda$core$Bit resolved177;
    panda$core$MutableString* name178 = NULL;
    panda$core$MutableString* $tmp179;
    panda$core$MutableString* $tmp180;
    panda$core$Char8 $tmp182;
    panda$core$UInt8 $tmp183;
    panda$core$String* separator184 = NULL;
    panda$core$String* $tmp185;
    panda$collections$Iterator* Iter$101$9190 = NULL;
    panda$collections$Iterator* $tmp191;
    panda$collections$Iterator* $tmp192;
    org$pandalanguage$pandac$Type* a208 = NULL;
    org$pandalanguage$pandac$Type* $tmp209;
    panda$core$Object* $tmp210;
    panda$core$String* $tmp218;
    panda$core$String* $tmp219;
    panda$core$Char8 $tmp223;
    panda$core$UInt8 $tmp224;
    panda$collections$Array* subtypes225 = NULL;
    panda$collections$Array* $tmp226;
    panda$collections$Array* $tmp227;
    org$pandalanguage$pandac$Type* $returnValue229;
    org$pandalanguage$pandac$Type* $tmp230;
    org$pandalanguage$pandac$Type* $tmp231;
    panda$core$String* $tmp233;
    org$pandalanguage$pandac$Type$Kind $tmp235;
    panda$core$Int64 $tmp236;
    panda$collections$ImmutableArray* $tmp237;
    int $tmp176;
    {
        resolved177 = p_base->resolved;
        panda$core$MutableString* $tmp181 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp181);
        $tmp180 = $tmp181;
        $tmp179 = $tmp180;
        name178 = $tmp179;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
        panda$core$MutableString$append$panda$core$String(name178, ((org$pandalanguage$pandac$Symbol*) p_base)->name);
        panda$core$UInt8$init$builtin_uint8(&$tmp183, 60);
        panda$core$Char8$init$panda$core$UInt8(&$tmp182, $tmp183);
        panda$core$MutableString$append$panda$core$Char8(name178, $tmp182);
        $tmp185 = &$s186;
        separator184 = $tmp185;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
        {
            int $tmp189;
            {
                ITable* $tmp193 = ((panda$collections$Iterable*) p_arguments)->$class->itable;
                while ($tmp193->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp193 = $tmp193->next;
                }
                $fn195 $tmp194 = $tmp193->methods[0];
                panda$collections$Iterator* $tmp196 = $tmp194(((panda$collections$Iterable*) p_arguments));
                $tmp192 = $tmp196;
                $tmp191 = $tmp192;
                Iter$101$9190 = $tmp191;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
                $l197:;
                ITable* $tmp200 = Iter$101$9190->$class->itable;
                while ($tmp200->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp200 = $tmp200->next;
                }
                $fn202 $tmp201 = $tmp200->methods[0];
                panda$core$Bit $tmp203 = $tmp201(Iter$101$9190);
                panda$core$Bit $tmp204 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp203);
                bool $tmp199 = $tmp204.value;
                if (!$tmp199) goto $l198;
                {
                    int $tmp207;
                    {
                        ITable* $tmp211 = Iter$101$9190->$class->itable;
                        while ($tmp211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp211 = $tmp211->next;
                        }
                        $fn213 $tmp212 = $tmp211->methods[1];
                        panda$core$Object* $tmp214 = $tmp212(Iter$101$9190);
                        $tmp210 = $tmp214;
                        $tmp209 = ((org$pandalanguage$pandac$Type*) $tmp210);
                        a208 = $tmp209;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp210);
                        bool $tmp215 = resolved177.value;
                        if (!$tmp215) goto $l216;
                        $tmp215 = a208->resolved.value;
                        $l216:;
                        panda$core$Bit $tmp217 = { $tmp215 };
                        resolved177 = $tmp217;
                        panda$core$MutableString$append$panda$core$String(name178, separator184);
                        panda$core$MutableString$append$panda$core$String(name178, ((org$pandalanguage$pandac$Symbol*) a208)->name);
                        {
                            $tmp218 = separator184;
                            $tmp219 = &$s220;
                            separator184 = $tmp219;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
                        }
                    }
                    $tmp207 = -1;
                    goto $l205;
                    $l205:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) a208));
                    a208 = NULL;
                    switch ($tmp207) {
                        case -1: goto $l221;
                    }
                    $l221:;
                }
                goto $l197;
                $l198:;
            }
            $tmp189 = -1;
            goto $l187;
            $l187:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$101$9190));
            Iter$101$9190 = NULL;
            switch ($tmp189) {
                case -1: goto $l222;
            }
            $l222:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp224, 62);
        panda$core$Char8$init$panda$core$UInt8(&$tmp223, $tmp224);
        panda$core$MutableString$append$panda$core$Char8(name178, $tmp223);
        panda$collections$Array* $tmp228 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp228);
        $tmp227 = $tmp228;
        $tmp226 = $tmp227;
        subtypes225 = $tmp226;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
        panda$collections$Array$add$panda$collections$Array$T(subtypes225, ((panda$core$Object*) p_base));
        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(subtypes225, ((panda$collections$CollectionView*) p_arguments));
        org$pandalanguage$pandac$Type* $tmp232 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp234 = panda$core$MutableString$finish$R$panda$core$String(name178);
        $tmp233 = $tmp234;
        panda$core$Int64$init$builtin_int64(&$tmp236, 11);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp235, $tmp236);
        panda$collections$ImmutableArray* $tmp238 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes225);
        $tmp237 = $tmp238;
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp232, $tmp233, $tmp235, ((org$pandalanguage$pandac$Symbol*) p_base)->position, ((panda$collections$ListView*) $tmp237), resolved177);
        $tmp231 = $tmp232;
        $tmp230 = $tmp231;
        $returnValue229 = $tmp230;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
        $tmp176 = 0;
        goto $l174;
        $l239:;
        return $returnValue229;
    }
    $l174:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) subtypes225));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) separator184));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name178));
    name178 = NULL;
    separator184 = NULL;
    subtypes225 = NULL;
    switch ($tmp176) {
        case 0: goto $l239;
    }
    $l241:;
    if (false) goto $l242; else goto $l243;
    $l243:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s244, (panda$core$Int64) { 95 }, &$s245);
    abort();
    $l242:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type$Kind p_kind, panda$collections$ListView* p_parameterTypes, org$pandalanguage$pandac$Type* p_returnType) {
    panda$core$Bit resolved249;
    panda$core$MutableString* name250 = NULL;
    panda$core$MutableString* $tmp251;
    panda$core$MutableString* $tmp252;
    panda$collections$Array* subtypes255 = NULL;
    panda$collections$Array* $tmp256;
    panda$collections$Array* $tmp257;
    panda$core$String* separator259 = NULL;
    panda$core$String* $tmp260;
    panda$collections$Iterator* Iter$121$9265 = NULL;
    panda$collections$Iterator* $tmp266;
    panda$collections$Iterator* $tmp267;
    org$pandalanguage$pandac$Type* p283 = NULL;
    org$pandalanguage$pandac$Type* $tmp284;
    panda$core$Object* $tmp285;
    panda$core$String* $tmp293;
    panda$core$String* $tmp294;
    org$pandalanguage$pandac$Type$Kind $match$128_9298;
    panda$core$Int64 $tmp299;
    panda$core$Int64 $tmp302;
    panda$core$Int64 $tmp305;
    panda$core$Int64 $tmp308;
    panda$core$Bit $tmp311;
    org$pandalanguage$pandac$Type* $tmp315;
    panda$core$Char8 $tmp318;
    panda$core$UInt8 $tmp319;
    org$pandalanguage$pandac$Type* $returnValue320;
    org$pandalanguage$pandac$Type* $tmp321;
    org$pandalanguage$pandac$Type* $tmp322;
    panda$core$String* $tmp324;
    panda$collections$ImmutableArray* $tmp326;
    int $tmp248;
    {
        resolved249 = p_returnType->resolved;
        panda$core$MutableString* $tmp253 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp253, &$s254);
        $tmp252 = $tmp253;
        $tmp251 = $tmp252;
        name250 = $tmp251;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
        panda$collections$Array* $tmp258 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp258);
        $tmp257 = $tmp258;
        $tmp256 = $tmp257;
        subtypes255 = $tmp256;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
        $tmp260 = &$s261;
        separator259 = $tmp260;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp260));
        {
            int $tmp264;
            {
                ITable* $tmp268 = ((panda$collections$Iterable*) p_parameterTypes)->$class->itable;
                while ($tmp268->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp268 = $tmp268->next;
                }
                $fn270 $tmp269 = $tmp268->methods[0];
                panda$collections$Iterator* $tmp271 = $tmp269(((panda$collections$Iterable*) p_parameterTypes));
                $tmp267 = $tmp271;
                $tmp266 = $tmp267;
                Iter$121$9265 = $tmp266;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
                $l272:;
                ITable* $tmp275 = Iter$121$9265->$class->itable;
                while ($tmp275->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp275 = $tmp275->next;
                }
                $fn277 $tmp276 = $tmp275->methods[0];
                panda$core$Bit $tmp278 = $tmp276(Iter$121$9265);
                panda$core$Bit $tmp279 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp278);
                bool $tmp274 = $tmp279.value;
                if (!$tmp274) goto $l273;
                {
                    int $tmp282;
                    {
                        ITable* $tmp286 = Iter$121$9265->$class->itable;
                        while ($tmp286->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp286 = $tmp286->next;
                        }
                        $fn288 $tmp287 = $tmp286->methods[1];
                        panda$core$Object* $tmp289 = $tmp287(Iter$121$9265);
                        $tmp285 = $tmp289;
                        $tmp284 = ((org$pandalanguage$pandac$Type*) $tmp285);
                        p283 = $tmp284;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp285);
                        panda$collections$Array$add$panda$collections$Array$T(subtypes255, ((panda$core$Object*) p283));
                        bool $tmp290 = resolved249.value;
                        if (!$tmp290) goto $l291;
                        $tmp290 = p283->resolved.value;
                        $l291:;
                        panda$core$Bit $tmp292 = { $tmp290 };
                        resolved249 = $tmp292;
                        panda$core$MutableString$append$panda$core$String(name250, separator259);
                        panda$core$MutableString$append$panda$core$String(name250, ((org$pandalanguage$pandac$Symbol*) p283)->name);
                        {
                            $tmp293 = separator259;
                            $tmp294 = &$s295;
                            separator259 = $tmp294;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
                        }
                    }
                    $tmp282 = -1;
                    goto $l280;
                    $l280:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p283));
                    p283 = NULL;
                    switch ($tmp282) {
                        case -1: goto $l296;
                    }
                    $l296:;
                }
                goto $l272;
                $l273:;
            }
            $tmp264 = -1;
            goto $l262;
            $l262:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$121$9265));
            Iter$121$9265 = NULL;
            switch ($tmp264) {
                case -1: goto $l297;
            }
            $l297:;
        }
        {
            $match$128_9298 = p_kind;
            panda$core$Int64$init$builtin_int64(&$tmp299, 14);
            panda$core$Bit $tmp300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9298.$rawValue, $tmp299);
            if ($tmp300.value) {
            {
                panda$core$MutableString$append$panda$core$String(name250, &$s301);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp302, 15);
            panda$core$Bit $tmp303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9298.$rawValue, $tmp302);
            if ($tmp303.value) {
            {
                panda$core$MutableString$append$panda$core$String(name250, &$s304);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp305, 16);
            panda$core$Bit $tmp306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9298.$rawValue, $tmp305);
            if ($tmp306.value) {
            {
                panda$core$MutableString$append$panda$core$String(name250, &$s307);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp308, 17);
            panda$core$Bit $tmp309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9298.$rawValue, $tmp308);
            if ($tmp309.value) {
            {
                panda$core$MutableString$append$panda$core$String(name250, &$s310);
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp311, false);
                if ($tmp311.value) goto $l312; else goto $l313;
                $l313:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s314, (panda$core$Int64) { 138 });
                abort();
                $l312:;
            }
            }
            }
            }
            }
        }
        panda$collections$Array$add$panda$collections$Array$T(subtypes255, ((panda$core$Object*) p_returnType));
        org$pandalanguage$pandac$Type* $tmp316 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp315 = $tmp316;
        panda$core$Bit $tmp317 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_returnType, $tmp315);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
        if ($tmp317.value) {
        {
            panda$core$MutableString$append$panda$core$String(name250, ((org$pandalanguage$pandac$Symbol*) p_returnType)->name);
        }
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp319, 41);
        panda$core$Char8$init$panda$core$UInt8(&$tmp318, $tmp319);
        panda$core$MutableString$append$panda$core$Char8(name250, $tmp318);
        org$pandalanguage$pandac$Type* $tmp323 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp325 = panda$core$MutableString$finish$R$panda$core$String(name250);
        $tmp324 = $tmp325;
        panda$collections$ImmutableArray* $tmp327 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes255);
        $tmp326 = $tmp327;
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp323, $tmp324, p_kind, p_position, ((panda$collections$ListView*) $tmp326), resolved249);
        $tmp322 = $tmp323;
        $tmp321 = $tmp322;
        $returnValue320 = $tmp321;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
        $tmp248 = 0;
        goto $l246;
        $l328:;
        return $returnValue320;
    }
    $l246:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) separator259));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) subtypes255));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name250));
    name250 = NULL;
    subtypes255 = NULL;
    separator259 = NULL;
    switch ($tmp248) {
        case 0: goto $l328;
    }
    $l330:;
    if (false) goto $l331; else goto $l332;
    $l332:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s333, (panda$core$Int64) { 115 }, &$s334);
    abort();
    $l331:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp337;
    panda$core$Int64 $tmp340;
    panda$core$Int64 $tmp344;
    panda$core$String* $tmp350;
    panda$core$String* $tmp351;
    panda$core$Int64 $returnValue356;
    panda$core$Int64$init$builtin_int64(&$tmp337, 2);
    panda$core$Bit $tmp338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp337);
    bool $tmp336 = $tmp338.value;
    if ($tmp336) goto $l339;
    panda$core$Int64$init$builtin_int64(&$tmp340, 3);
    panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp340);
    $tmp336 = $tmp341.value;
    $l339:;
    panda$core$Bit $tmp342 = { $tmp336 };
    bool $tmp335 = $tmp342.value;
    if ($tmp335) goto $l343;
    panda$core$Int64$init$builtin_int64(&$tmp344, 10);
    panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp344);
    $tmp335 = $tmp345.value;
    $l343:;
    panda$core$Bit $tmp346 = { $tmp335 };
    if ($tmp346.value) goto $l347; else goto $l348;
    $l348:;
    panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s352, ((panda$core$Object*) self));
    $tmp351 = $tmp353;
    panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp351, &$s354);
    $tmp350 = $tmp355;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s349, (panda$core$Int64) { 149 }, $tmp350);
    abort();
    $l347:;
    $returnValue356 = self->position.line;
    return $returnValue356;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue358;
    panda$core$Bit $tmp359 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue358 = $tmp359;
    return $returnValue358;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue361;
    ITable* $tmp362 = ((panda$core$Equatable*) self->name)->$class->itable;
    while ($tmp362->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp362 = $tmp362->next;
    }
    $fn364 $tmp363 = $tmp362->methods[1];
    panda$core$Bit $tmp365 = $tmp363(((panda$core$Equatable*) self->name), ((panda$core$Equatable*) ((org$pandalanguage$pandac$Symbol*) p_other)->name));
    $returnValue361 = $tmp365;
    return $returnValue361;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue367;
    org$pandalanguage$pandac$Type* $tmp368;
    org$pandalanguage$pandac$Type* $tmp369;
    org$pandalanguage$pandac$Type$Kind $tmp372;
    panda$core$Int64 $tmp373;
    org$pandalanguage$pandac$Position $tmp374;
    panda$core$Bit $tmp375;
    org$pandalanguage$pandac$Type* $tmp370 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp373, 4);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp372, $tmp373);
    org$pandalanguage$pandac$Position$init(&$tmp374);
    panda$core$Bit$init$builtin_bit(&$tmp375, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp370, &$s371, $tmp372, $tmp374, $tmp375);
    $tmp369 = $tmp370;
    $tmp368 = $tmp369;
    $returnValue367 = $tmp368;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
    return $returnValue367;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue377;
    org$pandalanguage$pandac$Type* $tmp378;
    org$pandalanguage$pandac$Type* $tmp379;
    org$pandalanguage$pandac$Type$Kind $tmp382;
    panda$core$Int64 $tmp383;
    org$pandalanguage$pandac$Position $tmp384;
    panda$core$Bit $tmp385;
    org$pandalanguage$pandac$Type* $tmp380 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp383, 13);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp382, $tmp383);
    org$pandalanguage$pandac$Position$init(&$tmp384);
    panda$core$Bit$init$builtin_bit(&$tmp385, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp380, &$s381, $tmp382, $tmp384, $tmp385);
    $tmp379 = $tmp380;
    $tmp378 = $tmp379;
    $returnValue377 = $tmp378;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
    return $returnValue377;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue387;
    org$pandalanguage$pandac$Type* $tmp388;
    org$pandalanguage$pandac$Type* $tmp389;
    org$pandalanguage$pandac$Type$Kind $tmp392;
    panda$core$Int64 $tmp393;
    org$pandalanguage$pandac$Position $tmp394;
    panda$core$Bit $tmp395;
    org$pandalanguage$pandac$Type* $tmp390 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp393, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp392, $tmp393);
    org$pandalanguage$pandac$Position$init(&$tmp394);
    panda$core$Bit$init$builtin_bit(&$tmp395, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp390, &$s391, $tmp392, $tmp394, $tmp395);
    $tmp389 = $tmp390;
    $tmp388 = $tmp389;
    $returnValue387 = $tmp388;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
    return $returnValue387;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes400 = NULL;
    panda$collections$Array* $tmp401;
    panda$collections$Array* $tmp402;
    org$pandalanguage$pandac$Type* $tmp404;
    org$pandalanguage$pandac$Type* $returnValue406;
    org$pandalanguage$pandac$Type* $tmp407;
    org$pandalanguage$pandac$Type* $tmp408;
    org$pandalanguage$pandac$Type$Kind $tmp411;
    panda$core$Int64 $tmp412;
    org$pandalanguage$pandac$Position $tmp413;
    panda$core$Bit $tmp414;
    int $tmp399;
    {
        panda$collections$Array* $tmp403 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp403);
        $tmp402 = $tmp403;
        $tmp401 = $tmp402;
        subtypes400 = $tmp401;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
        org$pandalanguage$pandac$Type* $tmp405 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp404 = $tmp405;
        panda$collections$Array$add$panda$collections$Array$T(subtypes400, ((panda$core$Object*) $tmp404));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
        org$pandalanguage$pandac$Type* $tmp409 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp412, 1);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp411, $tmp412);
        org$pandalanguage$pandac$Position$init(&$tmp413);
        panda$core$Bit$init$builtin_bit(&$tmp414, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp409, &$s410, $tmp411, $tmp413, ((panda$collections$ListView*) subtypes400), $tmp414);
        $tmp408 = $tmp409;
        $tmp407 = $tmp408;
        $returnValue406 = $tmp407;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
        $tmp399 = 0;
        goto $l397;
        $l415:;
        return $returnValue406;
    }
    $l397:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) subtypes400));
    subtypes400 = NULL;
    switch ($tmp399) {
        case 0: goto $l415;
    }
    $l417:;
    if (false) goto $l418; else goto $l419;
    $l419:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s420, (panda$core$Int64) { 180 }, &$s421);
    abort();
    $l418:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue422;
    org$pandalanguage$pandac$Type* $tmp423;
    org$pandalanguage$pandac$Type* $tmp424;
    org$pandalanguage$pandac$Type$Kind $tmp427;
    panda$core$Int64 $tmp428;
    org$pandalanguage$pandac$Position $tmp429;
    panda$core$Bit $tmp430;
    org$pandalanguage$pandac$Type* $tmp425 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp428, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp427, $tmp428);
    org$pandalanguage$pandac$Position$init(&$tmp429);
    panda$core$Bit$init$builtin_bit(&$tmp430, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp425, &$s426, $tmp427, $tmp429, $tmp430);
    $tmp424 = $tmp425;
    $tmp423 = $tmp424;
    $returnValue422 = $tmp423;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
    return $returnValue422;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue432;
    org$pandalanguage$pandac$Type* $tmp433;
    org$pandalanguage$pandac$Type* $tmp434;
    org$pandalanguage$pandac$Type$Kind $tmp437;
    panda$core$Int64 $tmp438;
    org$pandalanguage$pandac$Position $tmp439;
    panda$core$Bit $tmp440;
    org$pandalanguage$pandac$Type* $tmp435 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp438, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp437, $tmp438);
    org$pandalanguage$pandac$Position$init(&$tmp439);
    panda$core$Bit$init$builtin_bit(&$tmp440, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp435, &$s436, $tmp437, $tmp439, $tmp440);
    $tmp434 = $tmp435;
    $tmp433 = $tmp434;
    $returnValue432 = $tmp433;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
    return $returnValue432;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue442;
    org$pandalanguage$pandac$Type* $tmp443;
    org$pandalanguage$pandac$Type* $tmp444;
    org$pandalanguage$pandac$Type$Kind $tmp447;
    panda$core$Int64 $tmp448;
    org$pandalanguage$pandac$Position $tmp449;
    panda$core$Bit $tmp450;
    org$pandalanguage$pandac$Type* $tmp445 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp448, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp447, $tmp448);
    org$pandalanguage$pandac$Position$init(&$tmp449);
    panda$core$Bit$init$builtin_bit(&$tmp450, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp445, &$s446, $tmp447, $tmp449, $tmp450);
    $tmp444 = $tmp445;
    $tmp443 = $tmp444;
    $returnValue442 = $tmp443;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp444));
    return $returnValue442;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue452;
    org$pandalanguage$pandac$Type* $tmp453;
    org$pandalanguage$pandac$Type* $tmp454;
    org$pandalanguage$pandac$Type$Kind $tmp457;
    panda$core$Int64 $tmp458;
    org$pandalanguage$pandac$Position $tmp459;
    panda$core$Bit $tmp460;
    org$pandalanguage$pandac$Type* $tmp455 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp458, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp457, $tmp458);
    org$pandalanguage$pandac$Position$init(&$tmp459);
    panda$core$Bit$init$builtin_bit(&$tmp460, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp455, &$s456, $tmp457, $tmp459, $tmp460);
    $tmp454 = $tmp455;
    $tmp453 = $tmp454;
    $returnValue452 = $tmp453;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
    return $returnValue452;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RegularExpression$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue462;
    org$pandalanguage$pandac$Type* $tmp463;
    org$pandalanguage$pandac$Type* $tmp464;
    org$pandalanguage$pandac$Type$Kind $tmp467;
    panda$core$Int64 $tmp468;
    org$pandalanguage$pandac$Position $tmp469;
    panda$core$Bit $tmp470;
    org$pandalanguage$pandac$Type* $tmp465 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp468, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp467, $tmp468);
    org$pandalanguage$pandac$Position$init(&$tmp469);
    panda$core$Bit$init$builtin_bit(&$tmp470, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp465, &$s466, $tmp467, $tmp469, $tmp470);
    $tmp464 = $tmp465;
    $tmp463 = $tmp464;
    $returnValue462 = $tmp463;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
    return $returnValue462;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue472;
    org$pandalanguage$pandac$Type* $tmp473;
    org$pandalanguage$pandac$Type* $tmp474;
    org$pandalanguage$pandac$Type$Kind $tmp477;
    panda$core$Int64 $tmp478;
    panda$core$Int64 $tmp479;
    org$pandalanguage$pandac$Type* $tmp475 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp478, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp477, $tmp478);
    panda$core$Int64$init$builtin_int64(&$tmp479, 8);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp475, &$s476, $tmp477, $tmp479);
    $tmp474 = $tmp475;
    $tmp473 = $tmp474;
    $returnValue472 = $tmp473;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp474));
    return $returnValue472;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue481;
    org$pandalanguage$pandac$Type* $tmp482;
    org$pandalanguage$pandac$Type* $tmp483;
    org$pandalanguage$pandac$Type$Kind $tmp486;
    panda$core$Int64 $tmp487;
    panda$core$Int64 $tmp488;
    org$pandalanguage$pandac$Type* $tmp484 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp487, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp486, $tmp487);
    panda$core$Int64$init$builtin_int64(&$tmp488, 16);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp484, &$s485, $tmp486, $tmp488);
    $tmp483 = $tmp484;
    $tmp482 = $tmp483;
    $returnValue481 = $tmp482;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
    return $returnValue481;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue490;
    org$pandalanguage$pandac$Type* $tmp491;
    org$pandalanguage$pandac$Type* $tmp492;
    org$pandalanguage$pandac$Type$Kind $tmp495;
    panda$core$Int64 $tmp496;
    panda$core$Int64 $tmp497;
    org$pandalanguage$pandac$Type* $tmp493 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp496, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp495, $tmp496);
    panda$core$Int64$init$builtin_int64(&$tmp497, 32);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp493, &$s494, $tmp495, $tmp497);
    $tmp492 = $tmp493;
    $tmp491 = $tmp492;
    $returnValue490 = $tmp491;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp491));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp492));
    return $returnValue490;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue499;
    org$pandalanguage$pandac$Type* $tmp500;
    org$pandalanguage$pandac$Type* $tmp501;
    org$pandalanguage$pandac$Type$Kind $tmp504;
    panda$core$Int64 $tmp505;
    panda$core$Int64 $tmp506;
    org$pandalanguage$pandac$Type* $tmp502 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp505, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp504, $tmp505);
    panda$core$Int64$init$builtin_int64(&$tmp506, 64);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp502, &$s503, $tmp504, $tmp506);
    $tmp501 = $tmp502;
    $tmp500 = $tmp501;
    $returnValue499 = $tmp500;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
    return $returnValue499;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue508;
    org$pandalanguage$pandac$Type* $tmp509;
    org$pandalanguage$pandac$Type* $tmp510;
    org$pandalanguage$pandac$Type$Kind $tmp513;
    panda$core$Int64 $tmp514;
    panda$core$Int64 $tmp515;
    org$pandalanguage$pandac$Type* $tmp511 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp514, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp513, $tmp514);
    panda$core$Int64$init$builtin_int64(&$tmp515, 8);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp511, &$s512, $tmp513, $tmp515);
    $tmp510 = $tmp511;
    $tmp509 = $tmp510;
    $returnValue508 = $tmp509;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp510));
    return $returnValue508;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue517;
    org$pandalanguage$pandac$Type* $tmp518;
    org$pandalanguage$pandac$Type* $tmp519;
    org$pandalanguage$pandac$Type$Kind $tmp522;
    panda$core$Int64 $tmp523;
    panda$core$Int64 $tmp524;
    org$pandalanguage$pandac$Type* $tmp520 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp523, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp522, $tmp523);
    panda$core$Int64$init$builtin_int64(&$tmp524, 16);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp520, &$s521, $tmp522, $tmp524);
    $tmp519 = $tmp520;
    $tmp518 = $tmp519;
    $returnValue517 = $tmp518;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
    return $returnValue517;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue526;
    org$pandalanguage$pandac$Type* $tmp527;
    org$pandalanguage$pandac$Type* $tmp528;
    org$pandalanguage$pandac$Type$Kind $tmp531;
    panda$core$Int64 $tmp532;
    panda$core$Int64 $tmp533;
    org$pandalanguage$pandac$Type* $tmp529 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp532, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp531, $tmp532);
    panda$core$Int64$init$builtin_int64(&$tmp533, 32);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp529, &$s530, $tmp531, $tmp533);
    $tmp528 = $tmp529;
    $tmp527 = $tmp528;
    $returnValue526 = $tmp527;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp527));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
    return $returnValue526;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue535;
    org$pandalanguage$pandac$Type* $tmp536;
    org$pandalanguage$pandac$Type* $tmp537;
    org$pandalanguage$pandac$Type$Kind $tmp540;
    panda$core$Int64 $tmp541;
    panda$core$Int64 $tmp542;
    org$pandalanguage$pandac$Type* $tmp538 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp541, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp540, $tmp541);
    panda$core$Int64$init$builtin_int64(&$tmp542, 64);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp538, &$s539, $tmp540, $tmp542);
    $tmp537 = $tmp538;
    $tmp536 = $tmp537;
    $returnValue535 = $tmp536;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
    return $returnValue535;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue544;
    org$pandalanguage$pandac$Type* $tmp545;
    org$pandalanguage$pandac$Type* $tmp546;
    org$pandalanguage$pandac$Type$Kind $tmp549;
    panda$core$Int64 $tmp550;
    panda$core$Int64 $tmp551;
    org$pandalanguage$pandac$Type* $tmp547 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp550, 10);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp549, $tmp550);
    panda$core$Int64$init$builtin_int64(&$tmp551, 32);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp547, &$s548, $tmp549, $tmp551);
    $tmp546 = $tmp547;
    $tmp545 = $tmp546;
    $returnValue544 = $tmp545;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
    return $returnValue544;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue553;
    org$pandalanguage$pandac$Type* $tmp554;
    org$pandalanguage$pandac$Type* $tmp555;
    org$pandalanguage$pandac$Type$Kind $tmp558;
    panda$core$Int64 $tmp559;
    panda$core$Int64 $tmp560;
    org$pandalanguage$pandac$Type* $tmp556 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp559, 10);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp558, $tmp559);
    panda$core$Int64$init$builtin_int64(&$tmp560, 64);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp556, &$s557, $tmp558, $tmp560);
    $tmp555 = $tmp556;
    $tmp554 = $tmp555;
    $returnValue553 = $tmp554;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp554));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
    return $returnValue553;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue562;
    org$pandalanguage$pandac$Type* $tmp563;
    org$pandalanguage$pandac$Type* $tmp564;
    org$pandalanguage$pandac$Type$Kind $tmp567;
    panda$core$Int64 $tmp568;
    org$pandalanguage$pandac$Position $tmp569;
    panda$core$Bit $tmp570;
    org$pandalanguage$pandac$Type* $tmp565 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp568, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp567, $tmp568);
    org$pandalanguage$pandac$Position$init(&$tmp569);
    panda$core$Bit$init$builtin_bit(&$tmp570, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp565, &$s566, $tmp567, $tmp569, $tmp570);
    $tmp564 = $tmp565;
    $tmp563 = $tmp564;
    $returnValue562 = $tmp563;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
    return $returnValue562;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue572;
    org$pandalanguage$pandac$Type* $tmp573;
    org$pandalanguage$pandac$Type* $tmp574;
    org$pandalanguage$pandac$Type$Kind $tmp577;
    panda$core$Int64 $tmp578;
    org$pandalanguage$pandac$Position $tmp579;
    panda$core$Bit $tmp580;
    org$pandalanguage$pandac$Type* $tmp575 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp578, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp577, $tmp578);
    org$pandalanguage$pandac$Position$init(&$tmp579);
    panda$core$Bit$init$builtin_bit(&$tmp580, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp575, &$s576, $tmp577, $tmp579, $tmp580);
    $tmp574 = $tmp575;
    $tmp573 = $tmp574;
    $returnValue572 = $tmp573;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
    return $returnValue572;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue582;
    org$pandalanguage$pandac$Type* $tmp583;
    org$pandalanguage$pandac$Type* $tmp584;
    org$pandalanguage$pandac$Type$Kind $tmp587;
    panda$core$Int64 $tmp588;
    org$pandalanguage$pandac$Position $tmp589;
    panda$core$Bit $tmp590;
    org$pandalanguage$pandac$Type* $tmp585 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp588, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp587, $tmp588);
    org$pandalanguage$pandac$Position$init(&$tmp589);
    panda$core$Bit$init$builtin_bit(&$tmp590, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp585, &$s586, $tmp587, $tmp589, $tmp590);
    $tmp584 = $tmp585;
    $tmp583 = $tmp584;
    $returnValue582 = $tmp583;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
    return $returnValue582;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue592;
    org$pandalanguage$pandac$Type* $tmp593;
    org$pandalanguage$pandac$Type* $tmp594;
    org$pandalanguage$pandac$Type$Kind $tmp597;
    panda$core$Int64 $tmp598;
    org$pandalanguage$pandac$Position $tmp599;
    panda$core$Bit $tmp600;
    org$pandalanguage$pandac$Type* $tmp595 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp598, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp597, $tmp598);
    org$pandalanguage$pandac$Position$init(&$tmp599);
    panda$core$Bit$init$builtin_bit(&$tmp600, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp595, &$s596, $tmp597, $tmp599, $tmp600);
    $tmp594 = $tmp595;
    $tmp593 = $tmp594;
    $returnValue592 = $tmp593;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp593));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp594));
    return $returnValue592;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue602;
    org$pandalanguage$pandac$Type* $tmp603;
    org$pandalanguage$pandac$Type* $tmp604;
    org$pandalanguage$pandac$Type$Kind $tmp607;
    panda$core$Int64 $tmp608;
    org$pandalanguage$pandac$Position $tmp609;
    panda$core$Bit $tmp610;
    org$pandalanguage$pandac$Type* $tmp605 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp608, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp607, $tmp608);
    org$pandalanguage$pandac$Position$init(&$tmp609);
    panda$core$Bit$init$builtin_bit(&$tmp610, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp605, &$s606, $tmp607, $tmp609, $tmp610);
    $tmp604 = $tmp605;
    $tmp603 = $tmp604;
    $returnValue602 = $tmp603;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
    return $returnValue602;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue612;
    org$pandalanguage$pandac$Type* $tmp613;
    org$pandalanguage$pandac$Type* $tmp614;
    org$pandalanguage$pandac$Type$Kind $tmp617;
    panda$core$Int64 $tmp618;
    org$pandalanguage$pandac$Position $tmp619;
    panda$core$Bit $tmp620;
    org$pandalanguage$pandac$Type* $tmp615 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp618, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp617, $tmp618);
    org$pandalanguage$pandac$Position$init(&$tmp619);
    panda$core$Bit$init$builtin_bit(&$tmp620, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp615, &$s616, $tmp617, $tmp619, $tmp620);
    $tmp614 = $tmp615;
    $tmp613 = $tmp614;
    $returnValue612 = $tmp613;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp613));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
    return $returnValue612;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue622;
    org$pandalanguage$pandac$Type* $tmp623;
    org$pandalanguage$pandac$Type* $tmp624;
    org$pandalanguage$pandac$Type$Kind $tmp627;
    panda$core$Int64 $tmp628;
    org$pandalanguage$pandac$Position $tmp629;
    panda$core$Bit $tmp630;
    org$pandalanguage$pandac$Type* $tmp625 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp628, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp627, $tmp628);
    org$pandalanguage$pandac$Position$init(&$tmp629);
    panda$core$Bit$init$builtin_bit(&$tmp630, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp625, &$s626, $tmp627, $tmp629, $tmp630);
    $tmp624 = $tmp625;
    $tmp623 = $tmp624;
    $returnValue622 = $tmp623;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp623));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
    return $returnValue622;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue632;
    org$pandalanguage$pandac$Type* $tmp633;
    org$pandalanguage$pandac$Type* $tmp634;
    org$pandalanguage$pandac$Type$Kind $tmp637;
    panda$core$Int64 $tmp638;
    org$pandalanguage$pandac$Position $tmp639;
    panda$core$Bit $tmp640;
    org$pandalanguage$pandac$Type* $tmp635 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp638, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp637, $tmp638);
    org$pandalanguage$pandac$Position$init(&$tmp639);
    panda$core$Bit$init$builtin_bit(&$tmp640, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp635, &$s636, $tmp637, $tmp639, $tmp640);
    $tmp634 = $tmp635;
    $tmp633 = $tmp634;
    $returnValue632 = $tmp633;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp633));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
    return $returnValue632;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue642;
    org$pandalanguage$pandac$Type* $tmp643;
    org$pandalanguage$pandac$Type* $tmp644;
    org$pandalanguage$pandac$Type$Kind $tmp647;
    panda$core$Int64 $tmp648;
    org$pandalanguage$pandac$Position $tmp649;
    panda$core$Bit $tmp650;
    org$pandalanguage$pandac$Type* $tmp645 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp648, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp647, $tmp648);
    org$pandalanguage$pandac$Position$init(&$tmp649);
    panda$core$Bit$init$builtin_bit(&$tmp650, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp645, &$s646, $tmp647, $tmp649, $tmp650);
    $tmp644 = $tmp645;
    $tmp643 = $tmp644;
    $returnValue642 = $tmp643;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp643));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
    return $returnValue642;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue652;
    org$pandalanguage$pandac$Type* $tmp653;
    org$pandalanguage$pandac$Type* $tmp654;
    org$pandalanguage$pandac$Type$Kind $tmp657;
    panda$core$Int64 $tmp658;
    org$pandalanguage$pandac$Position $tmp659;
    panda$core$Bit $tmp660;
    org$pandalanguage$pandac$Type* $tmp655 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp658, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp657, $tmp658);
    org$pandalanguage$pandac$Position$init(&$tmp659);
    panda$core$Bit$init$builtin_bit(&$tmp660, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp655, &$s656, $tmp657, $tmp659, $tmp660);
    $tmp654 = $tmp655;
    $tmp653 = $tmp654;
    $returnValue652 = $tmp653;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
    return $returnValue652;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue662;
    org$pandalanguage$pandac$Type* $tmp663;
    org$pandalanguage$pandac$Type* $tmp664;
    org$pandalanguage$pandac$Type$Kind $tmp667;
    panda$core$Int64 $tmp668;
    org$pandalanguage$pandac$Position $tmp669;
    panda$core$Bit $tmp670;
    org$pandalanguage$pandac$Type* $tmp665 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp668, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp667, $tmp668);
    org$pandalanguage$pandac$Position$init(&$tmp669);
    panda$core$Bit$init$builtin_bit(&$tmp670, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp665, &$s666, $tmp667, $tmp669, $tmp670);
    $tmp664 = $tmp665;
    $tmp663 = $tmp664;
    $returnValue662 = $tmp663;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp663));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
    return $returnValue662;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue672;
    org$pandalanguage$pandac$Type* $tmp673;
    org$pandalanguage$pandac$Type* $tmp674;
    org$pandalanguage$pandac$Type$Kind $tmp677;
    panda$core$Int64 $tmp678;
    org$pandalanguage$pandac$Position $tmp679;
    panda$core$Bit $tmp680;
    org$pandalanguage$pandac$Type* $tmp675 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp678, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp677, $tmp678);
    org$pandalanguage$pandac$Position$init(&$tmp679);
    panda$core$Bit$init$builtin_bit(&$tmp680, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp675, &$s676, $tmp677, $tmp679, $tmp680);
    $tmp674 = $tmp675;
    $tmp673 = $tmp674;
    $returnValue672 = $tmp673;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp673));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
    return $returnValue672;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue682;
    org$pandalanguage$pandac$Type* $tmp683;
    org$pandalanguage$pandac$Type* $tmp684;
    org$pandalanguage$pandac$Type$Kind $tmp687;
    panda$core$Int64 $tmp688;
    org$pandalanguage$pandac$Position $tmp689;
    panda$core$Bit $tmp690;
    org$pandalanguage$pandac$Type* $tmp685 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp688, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp687, $tmp688);
    org$pandalanguage$pandac$Position$init(&$tmp689);
    panda$core$Bit$init$builtin_bit(&$tmp690, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp685, &$s686, $tmp687, $tmp689, $tmp690);
    $tmp684 = $tmp685;
    $tmp683 = $tmp684;
    $returnValue682 = $tmp683;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp683));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
    return $returnValue682;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue692;
    org$pandalanguage$pandac$Type* $tmp693;
    org$pandalanguage$pandac$Type* $tmp694;
    org$pandalanguage$pandac$Type$Kind $tmp697;
    panda$core$Int64 $tmp698;
    org$pandalanguage$pandac$Position $tmp699;
    panda$core$Bit $tmp700;
    org$pandalanguage$pandac$Type* $tmp695 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp698, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp697, $tmp698);
    org$pandalanguage$pandac$Position$init(&$tmp699);
    panda$core$Bit$init$builtin_bit(&$tmp700, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp695, &$s696, $tmp697, $tmp699, $tmp700);
    $tmp694 = $tmp695;
    $tmp693 = $tmp694;
    $returnValue692 = $tmp693;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
    return $returnValue692;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue702;
    org$pandalanguage$pandac$Type* $tmp703;
    org$pandalanguage$pandac$Type* $tmp704;
    panda$core$String* $tmp706;
    panda$core$String* $tmp707;
    panda$core$Object* $tmp709;
    org$pandalanguage$pandac$Type$Kind $tmp714;
    panda$core$Int64 $tmp715;
    org$pandalanguage$pandac$Position $tmp716;
    panda$core$Bit $tmp717;
    org$pandalanguage$pandac$Type* $tmp705 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$UInt64$wrapper* $tmp710;
    $tmp710 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
    $tmp710->value = p_value;
    $tmp709 = ((panda$core$Object*) $tmp710);
    panda$core$String* $tmp711 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s708, $tmp709);
    $tmp707 = $tmp711;
    panda$core$String* $tmp713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp707, &$s712);
    $tmp706 = $tmp713;
    panda$core$Int64$init$builtin_int64(&$tmp715, 5);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp714, $tmp715);
    org$pandalanguage$pandac$Position$init(&$tmp716);
    panda$core$Bit$init$builtin_bit(&$tmp717, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp705, $tmp706, $tmp714, $tmp716, $tmp717);
    $tmp704 = $tmp705;
    $tmp703 = $tmp704;
    $returnValue702 = $tmp703;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp706));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
    panda$core$Panda$unref$panda$core$Object$Q($tmp709);
    return $returnValue702;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue719;
    org$pandalanguage$pandac$Type* $tmp720;
    org$pandalanguage$pandac$Type* $tmp721;
    panda$core$String* $tmp723;
    panda$core$String* $tmp724;
    panda$core$String* $tmp726;
    org$pandalanguage$pandac$Type$Kind $tmp731;
    panda$core$Int64 $tmp732;
    org$pandalanguage$pandac$Position $tmp733;
    panda$core$Bit $tmp734;
    org$pandalanguage$pandac$Type* $tmp722 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp727 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp726 = $tmp727;
    panda$core$String* $tmp728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s725, $tmp726);
    $tmp724 = $tmp728;
    panda$core$String* $tmp730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp724, &$s729);
    $tmp723 = $tmp730;
    panda$core$Int64$init$builtin_int64(&$tmp732, 5);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp731, $tmp732);
    org$pandalanguage$pandac$Position$init(&$tmp733);
    panda$core$Bit$init$builtin_bit(&$tmp734, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp722, $tmp723, $tmp731, $tmp733, $tmp734);
    $tmp721 = $tmp722;
    $tmp720 = $tmp721;
    $returnValue719 = $tmp720;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp721));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp724));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp726));
    return $returnValue719;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue736;
    org$pandalanguage$pandac$Type* $tmp737;
    org$pandalanguage$pandac$Type* $tmp738;
    panda$core$String* $tmp740;
    panda$core$String* $tmp741;
    panda$core$String* $tmp743;
    org$pandalanguage$pandac$Type$Kind $tmp748;
    panda$core$Int64 $tmp749;
    org$pandalanguage$pandac$Position $tmp750;
    panda$core$Bit $tmp751;
    org$pandalanguage$pandac$Type* $tmp739 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp744 = panda$core$Real64$convert$R$panda$core$String(p_value);
    $tmp743 = $tmp744;
    panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s742, $tmp743);
    $tmp741 = $tmp745;
    panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp741, &$s746);
    $tmp740 = $tmp747;
    panda$core$Int64$init$builtin_int64(&$tmp749, 18);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp748, $tmp749);
    org$pandalanguage$pandac$Position$init(&$tmp750);
    panda$core$Bit$init$builtin_bit(&$tmp751, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp739, $tmp740, $tmp748, $tmp750, $tmp751);
    $tmp738 = $tmp739;
    $tmp737 = $tmp738;
    $returnValue736 = $tmp737;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp737));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp738));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp741));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp743));
    return $returnValue736;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue753;
    org$pandalanguage$pandac$Type* $tmp754;
    org$pandalanguage$pandac$Type* $tmp755;
    org$pandalanguage$pandac$Type$Kind $tmp758;
    panda$core$Int64 $tmp759;
    org$pandalanguage$pandac$Position $tmp760;
    panda$core$Bit $tmp761;
    org$pandalanguage$pandac$Type* $tmp756 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp759, 8);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp758, $tmp759);
    org$pandalanguage$pandac$Position$init(&$tmp760);
    panda$core$Bit$init$builtin_bit(&$tmp761, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp756, &$s757, $tmp758, $tmp760, $tmp761);
    $tmp755 = $tmp756;
    $tmp754 = $tmp755;
    $returnValue753 = $tmp754;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp754));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp755));
    return $returnValue753;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue763;
    org$pandalanguage$pandac$Type* $tmp764;
    org$pandalanguage$pandac$Type* $tmp765;
    org$pandalanguage$pandac$Type$Kind $tmp768;
    panda$core$Int64 $tmp769;
    org$pandalanguage$pandac$Position $tmp770;
    panda$core$Bit $tmp771;
    org$pandalanguage$pandac$Type* $tmp766 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp769, 9);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp768, $tmp769);
    org$pandalanguage$pandac$Position$init(&$tmp770);
    panda$core$Bit$init$builtin_bit(&$tmp771, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp766, &$s767, $tmp768, $tmp770, $tmp771);
    $tmp765 = $tmp766;
    $tmp764 = $tmp765;
    $returnValue763 = $tmp764;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
    return $returnValue763;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue773;
    org$pandalanguage$pandac$Type* $tmp774;
    org$pandalanguage$pandac$Type* $tmp775;
    org$pandalanguage$pandac$Type$Kind $tmp778;
    panda$core$Int64 $tmp779;
    org$pandalanguage$pandac$Position $tmp780;
    panda$core$Bit $tmp781;
    org$pandalanguage$pandac$Type* $tmp776 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp779, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp778, $tmp779);
    org$pandalanguage$pandac$Position$init(&$tmp780);
    panda$core$Bit$init$builtin_bit(&$tmp781, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp776, &$s777, $tmp778, $tmp780, $tmp781);
    $tmp775 = $tmp776;
    $tmp774 = $tmp775;
    $returnValue773 = $tmp774;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp774));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp775));
    return $returnValue773;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue783;
    org$pandalanguage$pandac$Type* $tmp784;
    org$pandalanguage$pandac$Type* $tmp785;
    org$pandalanguage$pandac$Type$Kind $tmp788;
    panda$core$Int64 $tmp789;
    org$pandalanguage$pandac$Position $tmp790;
    panda$core$Bit $tmp791;
    org$pandalanguage$pandac$Type* $tmp786 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp789, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp788, $tmp789);
    org$pandalanguage$pandac$Position$init(&$tmp790);
    panda$core$Bit$init$builtin_bit(&$tmp791, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp786, &$s787, $tmp788, $tmp790, $tmp791);
    $tmp785 = $tmp786;
    $tmp784 = $tmp785;
    $returnValue783 = $tmp784;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
    return $returnValue783;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue793;
    org$pandalanguage$pandac$Type* $tmp794;
    org$pandalanguage$pandac$Type* $tmp795;
    org$pandalanguage$pandac$Type$Kind $tmp798;
    panda$core$Int64 $tmp799;
    org$pandalanguage$pandac$Position $tmp800;
    panda$core$Bit $tmp801;
    org$pandalanguage$pandac$Type* $tmp796 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp799, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp798, $tmp799);
    org$pandalanguage$pandac$Position$init(&$tmp800);
    panda$core$Bit$init$builtin_bit(&$tmp801, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp796, &$s797, $tmp798, $tmp800, $tmp801);
    $tmp795 = $tmp796;
    $tmp794 = $tmp795;
    $returnValue793 = $tmp794;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp795));
    return $returnValue793;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue803;
    org$pandalanguage$pandac$Type* $tmp804;
    org$pandalanguage$pandac$Type* $tmp805;
    org$pandalanguage$pandac$Type$Kind $tmp808;
    panda$core$Int64 $tmp809;
    org$pandalanguage$pandac$Position $tmp810;
    panda$core$Bit $tmp811;
    org$pandalanguage$pandac$Type* $tmp806 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp809, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp808, $tmp809);
    org$pandalanguage$pandac$Position$init(&$tmp810);
    panda$core$Bit$init$builtin_bit(&$tmp811, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp806, &$s807, $tmp808, $tmp810, $tmp811);
    $tmp805 = $tmp806;
    $tmp804 = $tmp805;
    $returnValue803 = $tmp804;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp805));
    return $returnValue803;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue813;
    org$pandalanguage$pandac$Type* $tmp814;
    org$pandalanguage$pandac$Type* $tmp815;
    org$pandalanguage$pandac$Type$Kind $tmp818;
    panda$core$Int64 $tmp819;
    org$pandalanguage$pandac$Position $tmp820;
    panda$core$Bit $tmp821;
    org$pandalanguage$pandac$Type* $tmp816 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp819, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp818, $tmp819);
    org$pandalanguage$pandac$Position$init(&$tmp820);
    panda$core$Bit$init$builtin_bit(&$tmp821, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp816, &$s817, $tmp818, $tmp820, $tmp821);
    $tmp815 = $tmp816;
    $tmp814 = $tmp815;
    $returnValue813 = $tmp814;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp815));
    return $returnValue813;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children826 = NULL;
    panda$collections$Array* $tmp827;
    panda$collections$Array* $tmp828;
    org$pandalanguage$pandac$Type* $tmp830;
    org$pandalanguage$pandac$Type$Kind $tmp833;
    panda$core$Int64 $tmp834;
    org$pandalanguage$pandac$Position $tmp835;
    panda$core$Bit $tmp836;
    org$pandalanguage$pandac$Type* $returnValue837;
    org$pandalanguage$pandac$Type* $tmp838;
    org$pandalanguage$pandac$Type* $tmp839;
    panda$core$String* $tmp841;
    panda$core$String* $tmp842;
    panda$core$String* $tmp843;
    panda$core$String* $tmp844;
    org$pandalanguage$pandac$Type$Kind $tmp852;
    panda$core$Int64 $tmp853;
    int $tmp825;
    {
        panda$collections$Array* $tmp829 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp829);
        $tmp828 = $tmp829;
        $tmp827 = $tmp828;
        children826 = $tmp827;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
        org$pandalanguage$pandac$Type* $tmp831 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp834, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp833, $tmp834);
        org$pandalanguage$pandac$Position$init(&$tmp835);
        panda$core$Bit$init$builtin_bit(&$tmp836, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp831, &$s832, $tmp833, $tmp835, $tmp836);
        $tmp830 = $tmp831;
        panda$collections$Array$add$panda$collections$Array$T(children826, ((panda$core$Object*) $tmp830));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp830));
        panda$collections$Array$add$panda$collections$Array$T(children826, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp840 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp846 = panda$core$String$convert$R$panda$core$String(&$s845);
        $tmp844 = $tmp846;
        panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp844, &$s847);
        $tmp843 = $tmp848;
        panda$core$String* $tmp849 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp843, ((panda$core$Object*) p_t));
        $tmp842 = $tmp849;
        panda$core$String* $tmp851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp842, &$s850);
        $tmp841 = $tmp851;
        panda$core$Int64$init$builtin_int64(&$tmp853, 11);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp852, $tmp853);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp840, $tmp841, $tmp852, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children826), p_t->resolved);
        $tmp839 = $tmp840;
        $tmp838 = $tmp839;
        $returnValue837 = $tmp838;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp841));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp842));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp843));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp844));
        $tmp825 = 0;
        goto $l823;
        $l854:;
        return $returnValue837;
    }
    $l823:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) children826));
    children826 = NULL;
    switch ($tmp825) {
        case 0: goto $l854;
    }
    $l856:;
    if (false) goto $l857; else goto $l858;
    $l858:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s859, (panda$core$Int64) { 382 }, &$s860);
    abort();
    $l857:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children864 = NULL;
    panda$collections$Array* $tmp865;
    panda$collections$Array* $tmp866;
    org$pandalanguage$pandac$Type* $returnValue868;
    org$pandalanguage$pandac$Type* $tmp869;
    org$pandalanguage$pandac$Type* $tmp870;
    org$pandalanguage$pandac$Type* $tmp871;
    org$pandalanguage$pandac$Type$Kind $tmp874;
    panda$core$Int64 $tmp875;
    org$pandalanguage$pandac$Position $tmp876;
    panda$core$Bit $tmp877;
    int $tmp863;
    {
        panda$collections$Array* $tmp867 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp867);
        $tmp866 = $tmp867;
        $tmp865 = $tmp866;
        children864 = $tmp865;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp866));
        panda$collections$Array$add$panda$collections$Array$T(children864, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp872 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp875, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp874, $tmp875);
        org$pandalanguage$pandac$Position$init(&$tmp876);
        panda$core$Bit$init$builtin_bit(&$tmp877, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp872, &$s873, $tmp874, $tmp876, $tmp877);
        $tmp871 = $tmp872;
        org$pandalanguage$pandac$Type* $tmp878 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp871, ((panda$collections$ListView*) children864));
        $tmp870 = $tmp878;
        $tmp869 = $tmp870;
        $returnValue868 = $tmp869;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp869));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
        $tmp863 = 0;
        goto $l861;
        $l879:;
        return $returnValue868;
    }
    $l861:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) children864));
    children864 = NULL;
    switch ($tmp863) {
        case 0: goto $l879;
    }
    $l881:;
    if (false) goto $l882; else goto $l883;
    $l883:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s884, (panda$core$Int64) { 390 }, &$s885);
    abort();
    $l882:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children889 = NULL;
    panda$collections$Array* $tmp890;
    panda$collections$Array* $tmp891;
    org$pandalanguage$pandac$Type* $returnValue893;
    org$pandalanguage$pandac$Type* $tmp894;
    org$pandalanguage$pandac$Type* $tmp895;
    org$pandalanguage$pandac$Type* $tmp896;
    org$pandalanguage$pandac$Type$Kind $tmp899;
    panda$core$Int64 $tmp900;
    org$pandalanguage$pandac$Position $tmp901;
    panda$core$Bit $tmp902;
    int $tmp888;
    {
        panda$collections$Array* $tmp892 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp892);
        $tmp891 = $tmp892;
        $tmp890 = $tmp891;
        children889 = $tmp890;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp890));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
        panda$collections$Array$add$panda$collections$Array$T(children889, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp897 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp900, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp899, $tmp900);
        org$pandalanguage$pandac$Position$init(&$tmp901);
        panda$core$Bit$init$builtin_bit(&$tmp902, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp897, &$s898, $tmp899, $tmp901, $tmp902);
        $tmp896 = $tmp897;
        org$pandalanguage$pandac$Type* $tmp903 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp896, ((panda$collections$ListView*) children889));
        $tmp895 = $tmp903;
        $tmp894 = $tmp895;
        $returnValue893 = $tmp894;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp894));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp895));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp896));
        $tmp888 = 0;
        goto $l886;
        $l904:;
        return $returnValue893;
    }
    $l886:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) children889));
    children889 = NULL;
    switch ($tmp888) {
        case 0: goto $l904;
    }
    $l906:;
    if (false) goto $l907; else goto $l908;
    $l908:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s909, (panda$core$Int64) { 397 }, &$s910);
    abort();
    $l907:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children914 = NULL;
    panda$collections$Array* $tmp915;
    panda$collections$Array* $tmp916;
    org$pandalanguage$pandac$Type* $tmp918;
    org$pandalanguage$pandac$Type* $tmp921;
    org$pandalanguage$pandac$Type* $tmp923;
    org$pandalanguage$pandac$Type* $tmp926;
    org$pandalanguage$pandac$Type* $tmp928;
    org$pandalanguage$pandac$Type* $tmp931;
    org$pandalanguage$pandac$Type* $tmp933;
    org$pandalanguage$pandac$Type* $returnValue935;
    org$pandalanguage$pandac$Type* $tmp936;
    org$pandalanguage$pandac$Type* $tmp937;
    org$pandalanguage$pandac$Type* $tmp938;
    org$pandalanguage$pandac$Type$Kind $tmp941;
    panda$core$Int64 $tmp942;
    org$pandalanguage$pandac$Position $tmp943;
    panda$core$Bit $tmp944;
    int $tmp913;
    {
        panda$collections$Array* $tmp917 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp917);
        $tmp916 = $tmp917;
        $tmp915 = $tmp916;
        children914 = $tmp915;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp915));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
        panda$collections$Array$add$panda$collections$Array$T(children914, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp919 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp918 = $tmp919;
        panda$core$Bit $tmp920 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp918);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp918));
        if ($tmp920.value) {
        {
            org$pandalanguage$pandac$Type* $tmp922 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp921 = $tmp922;
            panda$collections$Array$add$panda$collections$Array$T(children914, ((panda$core$Object*) $tmp921));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp921));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp924 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp923 = $tmp924;
        panda$core$Bit $tmp925 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp923);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp923));
        if ($tmp925.value) {
        {
            org$pandalanguage$pandac$Type* $tmp927 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp926 = $tmp927;
            panda$collections$Array$add$panda$collections$Array$T(children914, ((panda$core$Object*) $tmp926));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp929 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp928 = $tmp929;
        panda$core$Bit $tmp930 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp928);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp928));
        if ($tmp930.value) {
        {
            org$pandalanguage$pandac$Type* $tmp932 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp931 = $tmp932;
            panda$collections$Array$add$panda$collections$Array$T(children914, ((panda$core$Object*) $tmp931));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp934 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp933 = $tmp934;
            panda$collections$Array$add$panda$collections$Array$T(children914, ((panda$core$Object*) $tmp933));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
        }
        }
        }
        }
        org$pandalanguage$pandac$Type* $tmp939 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp942, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp941, $tmp942);
        org$pandalanguage$pandac$Position$init(&$tmp943);
        panda$core$Bit$init$builtin_bit(&$tmp944, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp939, &$s940, $tmp941, $tmp943, $tmp944);
        $tmp938 = $tmp939;
        org$pandalanguage$pandac$Type* $tmp945 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp938, ((panda$collections$ListView*) children914));
        $tmp937 = $tmp945;
        $tmp936 = $tmp937;
        $returnValue935 = $tmp936;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp936));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp937));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp938));
        $tmp913 = 0;
        goto $l911;
        $l946:;
        return $returnValue935;
    }
    $l911:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) children914));
    children914 = NULL;
    switch ($tmp913) {
        case 0: goto $l946;
    }
    $l948:;
    if (false) goto $l949; else goto $l950;
    $l950:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s951, (panda$core$Int64) { 404 }, &$s952);
    abort();
    $l949:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue953;
    org$pandalanguage$pandac$Type* $tmp954;
    org$pandalanguage$pandac$Type* $tmp955;
    org$pandalanguage$pandac$Type$Kind $tmp958;
    panda$core$Int64 $tmp959;
    org$pandalanguage$pandac$Position $tmp960;
    panda$core$Bit $tmp961;
    org$pandalanguage$pandac$Type* $tmp956 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp959, 6);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp958, $tmp959);
    org$pandalanguage$pandac$Position$init(&$tmp960);
    panda$core$Bit$init$builtin_bit(&$tmp961, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp956, &$s957, $tmp958, $tmp960, $tmp961);
    $tmp955 = $tmp956;
    $tmp954 = $tmp955;
    $returnValue953 = $tmp954;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp954));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp955));
    return $returnValue953;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue963;
    org$pandalanguage$pandac$Type* $tmp964;
    org$pandalanguage$pandac$Type* $tmp965;
    org$pandalanguage$pandac$Type$Kind $tmp968;
    panda$core$Int64 $tmp969;
    org$pandalanguage$pandac$Position $tmp970;
    panda$core$Bit $tmp971;
    org$pandalanguage$pandac$Type* $tmp966 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp969, 6);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp968, $tmp969);
    org$pandalanguage$pandac$Position$init(&$tmp970);
    panda$core$Bit$init$builtin_bit(&$tmp971, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp966, &$s967, $tmp968, $tmp970, $tmp971);
    $tmp965 = $tmp966;
    $tmp964 = $tmp965;
    $returnValue963 = $tmp964;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp964));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp965));
    return $returnValue963;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNullable$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$433_9973;
    panda$core$Int64 $tmp974;
    panda$core$Bit $returnValue976;
    panda$core$Bit $tmp977;
    panda$core$Int64 $tmp979;
    panda$core$Object* $tmp981;
    panda$core$Bit $tmp985;
    {
        $match$433_9973 = self->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp974, 1);
        panda$core$Bit $tmp975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$433_9973.$rawValue, $tmp974);
        if ($tmp975.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp977, true);
            $returnValue976 = $tmp977;
            return $returnValue976;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp979, 12);
        panda$core$Bit $tmp980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$433_9973.$rawValue, $tmp979);
        if ($tmp980.value) {
        {
            panda$core$Object* $tmp982 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->parameter);
            $tmp981 = $tmp982;
            panda$core$Bit $tmp983 = org$pandalanguage$pandac$Type$isNullable$R$panda$core$Bit(((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp981)->bound);
            $returnValue976 = $tmp983;
            panda$core$Panda$unref$panda$core$Object$Q($tmp981);
            return $returnValue976;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp985, false);
            $returnValue976 = $tmp985;
            return $returnValue976;
        }
        }
        }
    }
    if (false) goto $l987; else goto $l988;
    $l988:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s989, (panda$core$Int64) { 432 }, &$s990);
    abort();
    $l987:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue991;
    panda$core$Int64 $tmp1007;
    panda$core$Int64 $tmp1011;
    panda$core$Bit $tmp997 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s996);
    bool $tmp995 = $tmp997.value;
    if ($tmp995) goto $l998;
    panda$core$Bit $tmp1000 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s999);
    $tmp995 = $tmp1000.value;
    $l998:;
    panda$core$Bit $tmp1001 = { $tmp995 };
    bool $tmp994 = $tmp1001.value;
    if ($tmp994) goto $l1002;
    panda$core$Bit $tmp1004 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1003);
    $tmp994 = $tmp1004.value;
    $l1002:;
    panda$core$Bit $tmp1005 = { $tmp994 };
    bool $tmp993 = $tmp1005.value;
    if ($tmp993) goto $l1006;
    panda$core$Int64$init$builtin_int64(&$tmp1007, 5);
    panda$core$Bit $tmp1008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1007);
    $tmp993 = $tmp1008.value;
    $l1006:;
    panda$core$Bit $tmp1009 = { $tmp993 };
    bool $tmp992 = $tmp1009.value;
    if ($tmp992) goto $l1010;
    panda$core$Int64$init$builtin_int64(&$tmp1011, 18);
    panda$core$Bit $tmp1012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1011);
    $tmp992 = $tmp1012.value;
    $l1010:;
    panda$core$Bit $tmp1013 = { $tmp992 };
    $returnValue991 = $tmp1013;
    return $returnValue991;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue1015;
    panda$core$Int64 $tmp1019;
    panda$core$Int64 $tmp1022;
    panda$core$Int64 $tmp1026;
    panda$core$Int64 $tmp1030;
    panda$core$Int64$init$builtin_int64(&$tmp1019, 2);
    panda$core$Bit $tmp1020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1019);
    bool $tmp1018 = $tmp1020.value;
    if ($tmp1018) goto $l1021;
    panda$core$Int64$init$builtin_int64(&$tmp1022, 3);
    panda$core$Bit $tmp1023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1022);
    $tmp1018 = $tmp1023.value;
    $l1021:;
    panda$core$Bit $tmp1024 = { $tmp1018 };
    bool $tmp1017 = $tmp1024.value;
    if ($tmp1017) goto $l1025;
    panda$core$Int64$init$builtin_int64(&$tmp1026, 10);
    panda$core$Bit $tmp1027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1026);
    $tmp1017 = $tmp1027.value;
    $l1025:;
    panda$core$Bit $tmp1028 = { $tmp1017 };
    bool $tmp1016 = $tmp1028.value;
    if ($tmp1016) goto $l1029;
    panda$core$Int64$init$builtin_int64(&$tmp1030, 5);
    panda$core$Bit $tmp1031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1030);
    $tmp1016 = $tmp1031.value;
    $l1029:;
    panda$core$Bit $tmp1032 = { $tmp1016 };
    $returnValue1015 = $tmp1032;
    return $returnValue1015;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue1034;
    panda$core$Int64 $tmp1036;
    panda$core$Int64$init$builtin_int64(&$tmp1036, 18);
    panda$core$Bit $tmp1037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1036);
    bool $tmp1035 = $tmp1037.value;
    if ($tmp1035) goto $l1038;
    panda$core$Bit $tmp1040 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1039);
    $tmp1035 = $tmp1040.value;
    $l1038:;
    panda$core$Bit $tmp1041 = { $tmp1035 };
    $returnValue1034 = $tmp1041;
    return $returnValue1034;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue1043;
    panda$core$Bit $tmp1045 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1044);
    $returnValue1043 = $tmp1045;
    return $returnValue1043;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue1047;
    panda$core$Bit $tmp1049 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp1048 = $tmp1049.value;
    if ($tmp1048) goto $l1050;
    panda$core$Bit $tmp1051 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp1048 = $tmp1051.value;
    $l1050:;
    panda$core$Bit $tmp1052 = { $tmp1048 };
    $returnValue1047 = $tmp1052;
    return $returnValue1047;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$467_91054;
    panda$core$Int64 $tmp1062;
    panda$core$Int64 $tmp1065;
    panda$core$Int64 $tmp1069;
    panda$core$Int64 $tmp1073;
    panda$core$Int64 $tmp1077;
    panda$core$Int64 $tmp1081;
    panda$core$Int64 $tmp1085;
    panda$core$Int64 $tmp1089;
    panda$core$Bit $returnValue1092;
    panda$core$Bit $tmp1093;
    panda$core$Bit $tmp1095;
    {
        $match$467_91054 = self->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp1062, 0);
        panda$core$Bit $tmp1063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$467_91054.$rawValue, $tmp1062);
        bool $tmp1061 = $tmp1063.value;
        if ($tmp1061) goto $l1064;
        panda$core$Int64$init$builtin_int64(&$tmp1065, 1);
        panda$core$Bit $tmp1066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$467_91054.$rawValue, $tmp1065);
        $tmp1061 = $tmp1066.value;
        $l1064:;
        panda$core$Bit $tmp1067 = { $tmp1061 };
        bool $tmp1060 = $tmp1067.value;
        if ($tmp1060) goto $l1068;
        panda$core$Int64$init$builtin_int64(&$tmp1069, 11);
        panda$core$Bit $tmp1070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$467_91054.$rawValue, $tmp1069);
        $tmp1060 = $tmp1070.value;
        $l1068:;
        panda$core$Bit $tmp1071 = { $tmp1060 };
        bool $tmp1059 = $tmp1071.value;
        if ($tmp1059) goto $l1072;
        panda$core$Int64$init$builtin_int64(&$tmp1073, 12);
        panda$core$Bit $tmp1074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$467_91054.$rawValue, $tmp1073);
        $tmp1059 = $tmp1074.value;
        $l1072:;
        panda$core$Bit $tmp1075 = { $tmp1059 };
        bool $tmp1058 = $tmp1075.value;
        if ($tmp1058) goto $l1076;
        panda$core$Int64$init$builtin_int64(&$tmp1077, 15);
        panda$core$Bit $tmp1078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$467_91054.$rawValue, $tmp1077);
        $tmp1058 = $tmp1078.value;
        $l1076:;
        panda$core$Bit $tmp1079 = { $tmp1058 };
        bool $tmp1057 = $tmp1079.value;
        if ($tmp1057) goto $l1080;
        panda$core$Int64$init$builtin_int64(&$tmp1081, 14);
        panda$core$Bit $tmp1082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$467_91054.$rawValue, $tmp1081);
        $tmp1057 = $tmp1082.value;
        $l1080:;
        panda$core$Bit $tmp1083 = { $tmp1057 };
        bool $tmp1056 = $tmp1083.value;
        if ($tmp1056) goto $l1084;
        panda$core$Int64$init$builtin_int64(&$tmp1085, 17);
        panda$core$Bit $tmp1086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$467_91054.$rawValue, $tmp1085);
        $tmp1056 = $tmp1086.value;
        $l1084:;
        panda$core$Bit $tmp1087 = { $tmp1056 };
        bool $tmp1055 = $tmp1087.value;
        if ($tmp1055) goto $l1088;
        panda$core$Int64$init$builtin_int64(&$tmp1089, 16);
        panda$core$Bit $tmp1090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$467_91054.$rawValue, $tmp1089);
        $tmp1055 = $tmp1090.value;
        $l1088:;
        panda$core$Bit $tmp1091 = { $tmp1055 };
        if ($tmp1091.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1093, true);
            $returnValue1092 = $tmp1093;
            return $returnValue1092;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1095, false);
            $returnValue1092 = $tmp1095;
            return $returnValue1092;
        }
        }
    }
    if (false) goto $l1097; else goto $l1098;
    $l1098:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1099, (panda$core$Int64) { 466 }, &$s1100);
    abort();
    $l1097:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$477_91101;
    panda$core$Int64 $tmp1105;
    panda$core$Int64 $tmp1108;
    panda$core$Int64 $tmp1112;
    panda$core$Int64 $tmp1116;
    panda$core$Bit $returnValue1119;
    panda$core$Bit $tmp1120;
    panda$core$Bit $tmp1122;
    {
        $match$477_91101 = self->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp1105, 15);
        panda$core$Bit $tmp1106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$477_91101.$rawValue, $tmp1105);
        bool $tmp1104 = $tmp1106.value;
        if ($tmp1104) goto $l1107;
        panda$core$Int64$init$builtin_int64(&$tmp1108, 14);
        panda$core$Bit $tmp1109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$477_91101.$rawValue, $tmp1108);
        $tmp1104 = $tmp1109.value;
        $l1107:;
        panda$core$Bit $tmp1110 = { $tmp1104 };
        bool $tmp1103 = $tmp1110.value;
        if ($tmp1103) goto $l1111;
        panda$core$Int64$init$builtin_int64(&$tmp1112, 17);
        panda$core$Bit $tmp1113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$477_91101.$rawValue, $tmp1112);
        $tmp1103 = $tmp1113.value;
        $l1111:;
        panda$core$Bit $tmp1114 = { $tmp1103 };
        bool $tmp1102 = $tmp1114.value;
        if ($tmp1102) goto $l1115;
        panda$core$Int64$init$builtin_int64(&$tmp1116, 16);
        panda$core$Bit $tmp1117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$477_91101.$rawValue, $tmp1116);
        $tmp1102 = $tmp1117.value;
        $l1115:;
        panda$core$Bit $tmp1118 = { $tmp1102 };
        if ($tmp1118.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1120, true);
            $returnValue1119 = $tmp1120;
            return $returnValue1119;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1122, false);
            $returnValue1119 = $tmp1122;
            return $returnValue1119;
        }
        }
    }
    if (false) goto $l1124; else goto $l1125;
    $l1125:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1126, (panda$core$Int64) { 476 }, &$s1127);
    abort();
    $l1124:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue1128;
    panda$core$Bit $tmp1130 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1129);
    $returnValue1128 = $tmp1130;
    return $returnValue1128;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1132;
    panda$core$Bit $returnValue1134;
    org$pandalanguage$pandac$Type* $tmp1135;
    panda$core$Int64 $tmp1140;
    panda$core$Object* $tmp1143;
    panda$core$Int64 $tmp1144;
    panda$core$Int64$init$builtin_int64(&$tmp1132, 1);
    panda$core$Bit $tmp1133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1132);
    if ($tmp1133.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1136 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(self);
        $tmp1135 = $tmp1136;
        panda$core$Bit $tmp1137 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit($tmp1135);
        $returnValue1134 = $tmp1137;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
        return $returnValue1134;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1140, 11);
    panda$core$Bit $tmp1141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1140);
    bool $tmp1139 = $tmp1141.value;
    if (!$tmp1139) goto $l1142;
    panda$core$Int64$init$builtin_int64(&$tmp1144, 0);
    panda$core$Object* $tmp1145 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1144);
    $tmp1143 = $tmp1145;
    panda$core$Bit $tmp1147 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp1143))->name, &$s1146);
    $tmp1139 = $tmp1147.value;
    panda$core$Panda$unref$panda$core$Object$Q($tmp1143);
    $l1142:;
    panda$core$Bit $tmp1148 = { $tmp1139 };
    $returnValue1134 = $tmp1148;
    return $returnValue1134;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1150;
    panda$core$Bit $returnValue1152;
    org$pandalanguage$pandac$Type* $tmp1153;
    panda$core$Int64 $tmp1158;
    panda$core$Object* $tmp1161;
    panda$core$Int64 $tmp1162;
    panda$core$Int64$init$builtin_int64(&$tmp1150, 1);
    panda$core$Bit $tmp1151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1150);
    if ($tmp1151.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1154 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(self);
        $tmp1153 = $tmp1154;
        panda$core$Bit $tmp1155 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit($tmp1153);
        $returnValue1152 = $tmp1155;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1153));
        return $returnValue1152;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1158, 11);
    panda$core$Bit $tmp1159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1158);
    bool $tmp1157 = $tmp1159.value;
    if (!$tmp1157) goto $l1160;
    panda$core$Int64$init$builtin_int64(&$tmp1162, 0);
    panda$core$Object* $tmp1163 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1162);
    $tmp1161 = $tmp1163;
    panda$core$Bit $tmp1165 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp1161))->name, &$s1164);
    $tmp1157 = $tmp1165.value;
    panda$core$Panda$unref$panda$core$Object$Q($tmp1161);
    $l1160:;
    panda$core$Bit $tmp1166 = { $tmp1157 };
    $returnValue1152 = $tmp1166;
    return $returnValue1152;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1171;
    org$pandalanguage$pandac$Type* $returnValue1173;
    org$pandalanguage$pandac$Type* $tmp1174;
    panda$collections$Array* subtypes1177 = NULL;
    panda$collections$Array* $tmp1178;
    panda$collections$Array* $tmp1179;
    org$pandalanguage$pandac$Type* $tmp1181;
    org$pandalanguage$pandac$Type* $tmp1182;
    panda$core$String* $tmp1184;
    panda$core$String* $tmp1185;
    org$pandalanguage$pandac$Type$Kind $tmp1189;
    panda$core$Int64 $tmp1190;
    org$pandalanguage$pandac$Position $tmp1191;
    panda$core$Bit $tmp1192;
    int $tmp1170;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1171, 1);
        panda$core$Bit $tmp1172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1171);
        if ($tmp1172.value) {
        {
            $tmp1174 = self;
            $returnValue1173 = $tmp1174;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1174));
            $tmp1170 = 0;
            goto $l1168;
            $l1175:;
            return $returnValue1173;
        }
        }
        panda$collections$Array* $tmp1180 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1180);
        $tmp1179 = $tmp1180;
        $tmp1178 = $tmp1179;
        subtypes1177 = $tmp1178;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1178));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1179));
        panda$collections$Array$add$panda$collections$Array$T(subtypes1177, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp1183 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp1186 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp1185 = $tmp1186;
        panda$core$String* $tmp1188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1185, &$s1187);
        $tmp1184 = $tmp1188;
        panda$core$Int64$init$builtin_int64(&$tmp1190, 1);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp1189, $tmp1190);
        org$pandalanguage$pandac$Position$init(&$tmp1191);
        panda$core$Bit$init$builtin_bit(&$tmp1192, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1183, $tmp1184, $tmp1189, $tmp1191, ((panda$collections$ListView*) subtypes1177), $tmp1192);
        $tmp1182 = $tmp1183;
        $tmp1181 = $tmp1182;
        $returnValue1173 = $tmp1181;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1181));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1182));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1184));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
        $tmp1170 = 1;
        goto $l1168;
        $l1193:;
        return $returnValue1173;
    }
    $l1168:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) subtypes1177));
    subtypes1177 = NULL;
    switch ($tmp1170) {
        case 1: goto $l1193;
        case 0: goto $l1175;
    }
    $l1195:;
    if (false) goto $l1196; else goto $l1197;
    $l1197:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1198, (panda$core$Int64) { 503 }, &$s1199);
    abort();
    $l1196:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$514_131201;
    panda$core$Int64 $tmp1202;
    org$pandalanguage$pandac$Type* $returnValue1204;
    org$pandalanguage$pandac$Type* $tmp1205;
    panda$core$Object* $tmp1206;
    panda$core$Int64 $tmp1207;
    panda$core$Int64 $tmp1210;
    org$pandalanguage$pandac$Type* $tmp1212;
    org$pandalanguage$pandac$Type* $tmp1213;
    panda$core$Object* $tmp1214;
    org$pandalanguage$pandac$Type* $tmp1218;
    panda$core$Bit $tmp1200 = org$pandalanguage$pandac$Type$isNullable$R$panda$core$Bit(self);
    if ($tmp1200.value) {
    {
        {
            $match$514_131201 = self->typeKind;
            panda$core$Int64$init$builtin_int64(&$tmp1202, 1);
            panda$core$Bit $tmp1203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$514_131201.$rawValue, $tmp1202);
            if ($tmp1203.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp1207, 0);
                panda$core$Object* $tmp1208 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1207);
                $tmp1206 = $tmp1208;
                $tmp1205 = ((org$pandalanguage$pandac$Type*) $tmp1206);
                $returnValue1204 = $tmp1205;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1205));
                panda$core$Panda$unref$panda$core$Object$Q($tmp1206);
                return $returnValue1204;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1210, 12);
            panda$core$Bit $tmp1211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$514_131201.$rawValue, $tmp1210);
            if ($tmp1211.value) {
            {
                panda$core$Object* $tmp1215 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->parameter);
                $tmp1214 = $tmp1215;
                org$pandalanguage$pandac$Type* $tmp1216 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1214)->bound);
                $tmp1213 = $tmp1216;
                $tmp1212 = $tmp1213;
                $returnValue1204 = $tmp1212;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1212));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1213));
                panda$core$Panda$unref$panda$core$Object$Q($tmp1214);
                return $returnValue1204;
            }
            }
            }
        }
    }
    }
    $tmp1218 = self;
    $returnValue1204 = $tmp1218;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1218));
    return $returnValue1204;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1223;
    panda$core$Int64 $tmp1226;
    panda$core$Int64 $tmp1230;
    panda$core$Int64 $tmp1234;
    org$pandalanguage$pandac$Type* $returnValue1241;
    org$pandalanguage$pandac$Type* $tmp1242;
    panda$core$Object* $tmp1243;
    panda$core$Int64 $tmp1248;
    panda$core$Int64$init$builtin_int64(&$tmp1223, 14);
    panda$core$Bit $tmp1224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1223);
    bool $tmp1222 = $tmp1224.value;
    if ($tmp1222) goto $l1225;
    panda$core$Int64$init$builtin_int64(&$tmp1226, 15);
    panda$core$Bit $tmp1227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1226);
    $tmp1222 = $tmp1227.value;
    $l1225:;
    panda$core$Bit $tmp1228 = { $tmp1222 };
    bool $tmp1221 = $tmp1228.value;
    if ($tmp1221) goto $l1229;
    panda$core$Int64$init$builtin_int64(&$tmp1230, 16);
    panda$core$Bit $tmp1231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1230);
    $tmp1221 = $tmp1231.value;
    $l1229:;
    panda$core$Bit $tmp1232 = { $tmp1221 };
    bool $tmp1220 = $tmp1232.value;
    if ($tmp1220) goto $l1233;
    panda$core$Int64$init$builtin_int64(&$tmp1234, 17);
    panda$core$Bit $tmp1235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1234);
    $tmp1220 = $tmp1235.value;
    $l1233:;
    panda$core$Bit $tmp1236 = { $tmp1220 };
    if ($tmp1236.value) goto $l1237; else goto $l1238;
    $l1238:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1239, (panda$core$Int64) { 526 }, &$s1240);
    abort();
    $l1237:;
    ITable* $tmp1244 = ((panda$collections$CollectionView*) self->subtypes)->$class->itable;
    while ($tmp1244->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1244 = $tmp1244->next;
    }
    $fn1246 $tmp1245 = $tmp1244->methods[0];
    panda$core$Int64 $tmp1247 = $tmp1245(((panda$collections$CollectionView*) self->subtypes));
    panda$core$Int64$init$builtin_int64(&$tmp1248, 1);
    panda$core$Int64 $tmp1249 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1247, $tmp1248);
    panda$core$Object* $tmp1250 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1249);
    $tmp1243 = $tmp1250;
    $tmp1242 = ((org$pandalanguage$pandac$Type*) $tmp1243);
    $returnValue1241 = $tmp1242;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1242));
    panda$core$Panda$unref$panda$core$Object$Q($tmp1243);
    return $returnValue1241;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $returnValue1256;
    org$pandalanguage$pandac$Type* $tmp1257;
    org$pandalanguage$pandac$Type* $tmp1260;
    panda$core$Int64 $tmp1263;
    org$pandalanguage$pandac$Type* $tmp1265;
    org$pandalanguage$pandac$Type* $tmp1268;
    org$pandalanguage$pandac$Type* $tmp1269;
    org$pandalanguage$pandac$Type* $tmp1273;
    panda$core$Int64 $tmp1276;
    org$pandalanguage$pandac$Type* $tmp1278;
    org$pandalanguage$pandac$Type* $tmp1281;
    org$pandalanguage$pandac$Type* $tmp1282;
    panda$core$Int64 $tmp1287;
    org$pandalanguage$pandac$Type* $tmp1292;
    panda$core$Int64 $tmp1298;
    org$pandalanguage$pandac$Type* $tmp1301;
    panda$core$Int64 $tmp1306;
    panda$core$Int64 $tmp1309;
    org$pandalanguage$pandac$Type* $tmp1312;
    org$pandalanguage$pandac$Type* $tmp1318;
    org$pandalanguage$pandac$Type* $tmp1319;
    org$pandalanguage$pandac$Type* $tmp1323;
    org$pandalanguage$pandac$Type* $tmp1324;
    panda$core$Int64 $tmp1330;
    panda$core$Int64 $tmp1333;
    org$pandalanguage$pandac$Type* $tmp1336;
    org$pandalanguage$pandac$Type* $tmp1342;
    org$pandalanguage$pandac$Type* $tmp1343;
    org$pandalanguage$pandac$Type* $tmp1347;
    org$pandalanguage$pandac$Type* $tmp1348;
    panda$core$Int64 $tmp1352;
    org$pandalanguage$pandac$Type* $tmp1354;
    org$pandalanguage$pandac$Type* $tmp1355;
    org$pandalanguage$pandac$Type* $tmp1356;
    org$pandalanguage$pandac$Type* $tmp1357;
    panda$core$Int64 $tmp1363;
    org$pandalanguage$pandac$Type* $tmp1365;
    org$pandalanguage$pandac$Type* $tmp1366;
    org$pandalanguage$pandac$Type* $tmp1367;
    org$pandalanguage$pandac$Type* $tmp1368;
    org$pandalanguage$pandac$Type* t11374 = NULL;
    org$pandalanguage$pandac$Type* $tmp1375;
    org$pandalanguage$pandac$Type* $tmp1376;
    org$pandalanguage$pandac$Type* t21378 = NULL;
    org$pandalanguage$pandac$Type* $tmp1379;
    org$pandalanguage$pandac$Type* $tmp1380;
    panda$collections$HashSet* ancestors1390 = NULL;
    panda$collections$HashSet* $tmp1391;
    panda$collections$HashSet* $tmp1392;
    org$pandalanguage$pandac$Type* t1394 = NULL;
    org$pandalanguage$pandac$Type* $tmp1395;
    org$pandalanguage$pandac$ClassDecl* cl1396 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1397;
    org$pandalanguage$pandac$ClassDecl* $tmp1398;
    org$pandalanguage$pandac$Type* $tmp1403;
    org$pandalanguage$pandac$Type* $tmp1404;
    org$pandalanguage$pandac$Type* $tmp1405;
    org$pandalanguage$pandac$ClassDecl* $tmp1407;
    org$pandalanguage$pandac$ClassDecl* $tmp1408;
    org$pandalanguage$pandac$ClassDecl* $tmp1409;
    org$pandalanguage$pandac$ClassDecl* $tmp1411;
    org$pandalanguage$pandac$ClassDecl* $tmp1412;
    org$pandalanguage$pandac$Type* $tmp1413;
    org$pandalanguage$pandac$Type* $tmp1414;
    org$pandalanguage$pandac$ClassDecl* $tmp1415;
    org$pandalanguage$pandac$ClassDecl* $tmp1416;
    org$pandalanguage$pandac$ClassDecl* $tmp1417;
    org$pandalanguage$pandac$Type* $tmp1423;
    org$pandalanguage$pandac$Type* $tmp1427;
    org$pandalanguage$pandac$Type* $tmp1428;
    org$pandalanguage$pandac$Type* $tmp1429;
    org$pandalanguage$pandac$ClassDecl* $tmp1431;
    org$pandalanguage$pandac$ClassDecl* $tmp1432;
    org$pandalanguage$pandac$ClassDecl* $tmp1433;
    org$pandalanguage$pandac$ClassDecl* $tmp1435;
    org$pandalanguage$pandac$ClassDecl* $tmp1436;
    org$pandalanguage$pandac$Type* $tmp1438;
    org$pandalanguage$pandac$Type* $tmp1439;
    int $tmp1254;
    {
        panda$core$Bit $tmp1255 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp1255.value) {
        {
            $tmp1257 = self;
            $returnValue1256 = $tmp1257;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1257));
            $tmp1254 = 0;
            goto $l1252;
            $l1258:;
            return $returnValue1256;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1261 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp1260 = $tmp1261;
        panda$core$Bit $tmp1262 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp1260);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1260));
        if ($tmp1262.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1263, 1);
            panda$core$Bit $tmp1264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1263);
            if ($tmp1264.value) {
            {
                $tmp1265 = p_other;
                $returnValue1256 = $tmp1265;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1265));
                $tmp1254 = 1;
                goto $l1252;
                $l1266:;
                return $returnValue1256;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1270 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp1269 = $tmp1270;
            $tmp1268 = $tmp1269;
            $returnValue1256 = $tmp1268;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1268));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1269));
            $tmp1254 = 2;
            goto $l1252;
            $l1271:;
            return $returnValue1256;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1274 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp1273 = $tmp1274;
        panda$core$Bit $tmp1275 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp1273);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1273));
        if ($tmp1275.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1276, 1);
            panda$core$Bit $tmp1277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1276);
            if ($tmp1277.value) {
            {
                $tmp1278 = self;
                $returnValue1256 = $tmp1278;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1278));
                $tmp1254 = 3;
                goto $l1252;
                $l1279:;
                return $returnValue1256;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1283 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp1282 = $tmp1283;
            $tmp1281 = $tmp1282;
            $returnValue1256 = $tmp1281;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1281));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1282));
            $tmp1254 = 4;
            goto $l1252;
            $l1284:;
            return $returnValue1256;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1287, 5);
        panda$core$Bit $tmp1288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1287);
        bool $tmp1286 = $tmp1288.value;
        if (!$tmp1286) goto $l1289;
        panda$core$Bit $tmp1290 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp1286 = $tmp1290.value;
        $l1289:;
        panda$core$Bit $tmp1291 = { $tmp1286 };
        if ($tmp1291.value) {
        {
            $tmp1292 = p_other;
            $returnValue1256 = $tmp1292;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1292));
            $tmp1254 = 5;
            goto $l1252;
            $l1293:;
            return $returnValue1256;
        }
        }
        panda$core$Bit $tmp1296 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp1295 = $tmp1296.value;
        if (!$tmp1295) goto $l1297;
        panda$core$Int64$init$builtin_int64(&$tmp1298, 5);
        panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1298);
        $tmp1295 = $tmp1299.value;
        $l1297:;
        panda$core$Bit $tmp1300 = { $tmp1295 };
        if ($tmp1300.value) {
        {
            $tmp1301 = self;
            $returnValue1256 = $tmp1301;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1301));
            $tmp1254 = 6;
            goto $l1252;
            $l1302:;
            return $returnValue1256;
        }
        }
        panda$core$Bit $tmp1304 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp1304.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1306, 5);
            panda$core$Bit $tmp1307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1306);
            bool $tmp1305 = $tmp1307.value;
            if ($tmp1305) goto $l1308;
            panda$core$Int64$init$builtin_int64(&$tmp1309, 18);
            panda$core$Bit $tmp1310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1309);
            $tmp1305 = $tmp1310.value;
            $l1308:;
            panda$core$Bit $tmp1311 = { $tmp1305 };
            if ($tmp1311.value) {
            {
                $tmp1312 = self;
                $returnValue1256 = $tmp1312;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1312));
                $tmp1254 = 7;
                goto $l1252;
                $l1313:;
                return $returnValue1256;
            }
            }
            panda$core$Bit $tmp1315 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp1315.value) {
            {
                panda$core$Bit $tmp1317 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s1316);
                if ($tmp1317.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1320 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp1319 = $tmp1320;
                    $tmp1318 = $tmp1319;
                    $returnValue1256 = $tmp1318;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1318));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
                    $tmp1254 = 8;
                    goto $l1252;
                    $l1321:;
                    return $returnValue1256;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1325 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp1324 = $tmp1325;
                $tmp1323 = $tmp1324;
                $returnValue1256 = $tmp1323;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1323));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1324));
                $tmp1254 = 9;
                goto $l1252;
                $l1326:;
                return $returnValue1256;
            }
            }
        }
        }
        panda$core$Bit $tmp1328 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp1328.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1330, 5);
            panda$core$Bit $tmp1331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1330);
            bool $tmp1329 = $tmp1331.value;
            if ($tmp1329) goto $l1332;
            panda$core$Int64$init$builtin_int64(&$tmp1333, 18);
            panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1333);
            $tmp1329 = $tmp1334.value;
            $l1332:;
            panda$core$Bit $tmp1335 = { $tmp1329 };
            if ($tmp1335.value) {
            {
                $tmp1336 = p_other;
                $returnValue1256 = $tmp1336;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1336));
                $tmp1254 = 10;
                goto $l1252;
                $l1337:;
                return $returnValue1256;
            }
            }
            panda$core$Bit $tmp1339 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp1339.value) {
            {
                panda$core$Bit $tmp1341 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1340);
                if ($tmp1341.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1344 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp1343 = $tmp1344;
                    $tmp1342 = $tmp1343;
                    $returnValue1256 = $tmp1342;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1342));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1343));
                    $tmp1254 = 11;
                    goto $l1252;
                    $l1345:;
                    return $returnValue1256;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1349 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp1348 = $tmp1349;
                $tmp1347 = $tmp1348;
                $returnValue1256 = $tmp1347;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1347));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1348));
                $tmp1254 = 12;
                goto $l1252;
                $l1350:;
                return $returnValue1256;
            }
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1352, 1);
        panda$core$Bit $tmp1353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1352);
        if ($tmp1353.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1358 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(self);
            $tmp1357 = $tmp1358;
            org$pandalanguage$pandac$Type* $tmp1359 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1357, p_compiler, p_other);
            $tmp1356 = $tmp1359;
            org$pandalanguage$pandac$Type* $tmp1360 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1356);
            $tmp1355 = $tmp1360;
            $tmp1354 = $tmp1355;
            $returnValue1256 = $tmp1354;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1354));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1355));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1356));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1357));
            $tmp1254 = 13;
            goto $l1252;
            $l1361:;
            return $returnValue1256;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1363, 1);
        panda$core$Bit $tmp1364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1363);
        if ($tmp1364.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1369 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp1368 = $tmp1369;
            org$pandalanguage$pandac$Type* $tmp1370 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, $tmp1368);
            $tmp1367 = $tmp1370;
            org$pandalanguage$pandac$Type* $tmp1371 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1367);
            $tmp1366 = $tmp1371;
            $tmp1365 = $tmp1366;
            $returnValue1256 = $tmp1365;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1365));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1366));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1367));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1368));
            $tmp1254 = 14;
            goto $l1252;
            $l1372:;
            return $returnValue1256;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1377 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp1376 = $tmp1377;
        $tmp1375 = $tmp1376;
        t11374 = $tmp1375;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1375));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1376));
        org$pandalanguage$pandac$Type* $tmp1381 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp1380 = $tmp1381;
        $tmp1379 = $tmp1380;
        t21378 = $tmp1379;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1379));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1380));
        panda$core$Bit $tmp1383 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t11374);
        bool $tmp1382 = $tmp1383.value;
        if (!$tmp1382) goto $l1384;
        panda$core$Bit $tmp1385 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t21378);
        $tmp1382 = $tmp1385.value;
        $l1384:;
        panda$core$Bit $tmp1386 = { $tmp1382 };
        if ($tmp1386.value) {
        {
            int $tmp1389;
            {
                panda$collections$HashSet* $tmp1393 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
                panda$collections$HashSet$init($tmp1393);
                $tmp1392 = $tmp1393;
                $tmp1391 = $tmp1392;
                ancestors1390 = $tmp1391;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1391));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1392));
                $tmp1395 = self;
                t1394 = $tmp1395;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1395));
                org$pandalanguage$pandac$ClassDecl* $tmp1399 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t11374);
                $tmp1398 = $tmp1399;
                $tmp1397 = $tmp1398;
                cl1396 = $tmp1397;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1397));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1398));
                $l1400:;
                bool $tmp1402 = ((panda$core$Bit) { cl1396 != NULL }).value;
                if (!$tmp1402) goto $l1401;
                {
                    panda$collections$HashSet$add$panda$collections$HashSet$T(ancestors1390, ((panda$collections$Key*) t1394));
                    if (((panda$core$Bit) { cl1396->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1403 = t1394;
                            org$pandalanguage$pandac$Type* $tmp1406 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1394, cl1396->rawSuper);
                            $tmp1405 = $tmp1406;
                            $tmp1404 = $tmp1405;
                            t1394 = $tmp1404;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1404));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1405));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1403));
                        }
                        {
                            $tmp1407 = cl1396;
                            org$pandalanguage$pandac$ClassDecl* $tmp1410 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1394);
                            $tmp1409 = $tmp1410;
                            $tmp1408 = $tmp1409;
                            cl1396 = $tmp1408;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1408));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1409));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1407));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1411 = cl1396;
                            $tmp1412 = NULL;
                            cl1396 = $tmp1412;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1412));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1411));
                        }
                    }
                    }
                }
                goto $l1400;
                $l1401:;
                {
                    $tmp1413 = t1394;
                    $tmp1414 = p_other;
                    t1394 = $tmp1414;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1414));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1413));
                }
                {
                    $tmp1415 = cl1396;
                    org$pandalanguage$pandac$ClassDecl* $tmp1418 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t21378);
                    $tmp1417 = $tmp1418;
                    $tmp1416 = $tmp1417;
                    cl1396 = $tmp1416;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1415));
                }
                $l1419:;
                bool $tmp1421 = ((panda$core$Bit) { cl1396 != NULL }).value;
                if (!$tmp1421) goto $l1420;
                {
                    panda$core$Bit $tmp1422 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(ancestors1390, ((panda$collections$Key*) t1394));
                    if ($tmp1422.value) {
                    {
                        $tmp1423 = t1394;
                        $returnValue1256 = $tmp1423;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1423));
                        $tmp1389 = 0;
                        goto $l1387;
                        $l1424:;
                        $tmp1254 = 15;
                        goto $l1252;
                        $l1425:;
                        return $returnValue1256;
                    }
                    }
                    if (((panda$core$Bit) { cl1396->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1427 = t1394;
                            org$pandalanguage$pandac$Type* $tmp1430 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1394, cl1396->rawSuper);
                            $tmp1429 = $tmp1430;
                            $tmp1428 = $tmp1429;
                            t1394 = $tmp1428;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1428));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1429));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1427));
                        }
                        {
                            $tmp1431 = cl1396;
                            org$pandalanguage$pandac$ClassDecl* $tmp1434 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1394);
                            $tmp1433 = $tmp1434;
                            $tmp1432 = $tmp1433;
                            cl1396 = $tmp1432;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1432));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1433));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1431));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1435 = cl1396;
                            $tmp1436 = NULL;
                            cl1396 = $tmp1436;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1436));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1435));
                        }
                    }
                    }
                }
                goto $l1419;
                $l1420:;
            }
            $tmp1389 = -1;
            goto $l1387;
            $l1387:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) cl1396));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t1394));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ancestors1390));
            ancestors1390 = NULL;
            t1394 = NULL;
            cl1396 = NULL;
            switch ($tmp1389) {
                case 0: goto $l1424;
                case -1: goto $l1437;
            }
            $l1437:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1440 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp1439 = $tmp1440;
        $tmp1438 = $tmp1439;
        $returnValue1256 = $tmp1438;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1438));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1439));
        $tmp1254 = 16;
        goto $l1252;
        $l1441:;
        return $returnValue1256;
    }
    $l1252:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t21378));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t11374));
    t11374 = NULL;
    t21378 = NULL;
    switch ($tmp1254) {
        case 6: goto $l1302;
        case 16: goto $l1441;
        case 14: goto $l1372;
        case 3: goto $l1279;
        case 15: goto $l1425;
        case 9: goto $l1326;
        case 13: goto $l1361;
        case 8: goto $l1321;
        case 12: goto $l1350;
        case 1: goto $l1266;
        case 2: goto $l1271;
        case 5: goto $l1293;
        case 4: goto $l1284;
        case 10: goto $l1337;
        case 0: goto $l1258;
        case 7: goto $l1313;
        case 11: goto $l1345;
    }
    $l1443:;
    if (false) goto $l1444; else goto $l1445;
    $l1445:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1446, (panda$core$Int64) { 531 }, &$s1447);
    abort();
    $l1444:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    panda$core$Int64 $tmp1451;
    panda$core$Int64 $tmp1461;
    org$pandalanguage$pandac$Type* $returnValue1463;
    org$pandalanguage$pandac$Type* $tmp1464;
    org$pandalanguage$pandac$Type$Kind $match$621_91467;
    panda$core$Int64 $tmp1468;
    org$pandalanguage$pandac$Type* found1473 = NULL;
    org$pandalanguage$pandac$Type* $tmp1474;
    panda$core$Object* $tmp1475;
    org$pandalanguage$pandac$Type* $tmp1477;
    org$pandalanguage$pandac$Type* $tmp1481;
    panda$core$Int64 $tmp1486;
    org$pandalanguage$pandac$Type* base1491 = NULL;
    org$pandalanguage$pandac$Type* $tmp1492;
    org$pandalanguage$pandac$Type* $tmp1493;
    panda$core$Object* $tmp1494;
    panda$core$Int64 $tmp1495;
    panda$collections$Array* remappedArgs1498 = NULL;
    panda$collections$Array* $tmp1499;
    panda$collections$Array* $tmp1500;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1502;
    panda$core$Int64 $tmp1503;
    panda$core$Bit $tmp1508;
    org$pandalanguage$pandac$Type* $tmp1522;
    panda$core$Object* $tmp1523;
    org$pandalanguage$pandac$Type* $tmp1532;
    org$pandalanguage$pandac$Type* $tmp1533;
    panda$core$Int64 $tmp1539;
    org$pandalanguage$pandac$Type* $tmp1541;
    org$pandalanguage$pandac$Type* $tmp1542;
    org$pandalanguage$pandac$Type* $tmp1543;
    org$pandalanguage$pandac$Type* $tmp1544;
    panda$core$Int64 $tmp1553;
    panda$core$Int64 $tmp1556;
    panda$core$Int64 $tmp1560;
    panda$core$Int64 $tmp1564;
    panda$collections$Array* parameters1570 = NULL;
    panda$collections$Array* $tmp1571;
    panda$collections$Array* $tmp1572;
    panda$core$Int64 $tmp1578;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1583;
    panda$core$Int64 $tmp1584;
    panda$core$Int64 $tmp1589;
    panda$core$Bit $tmp1591;
    org$pandalanguage$pandac$Type* $tmp1605;
    panda$core$Object* $tmp1606;
    org$pandalanguage$pandac$Type* $tmp1615;
    org$pandalanguage$pandac$Type* $tmp1616;
    org$pandalanguage$pandac$Type* $tmp1617;
    panda$core$Object* $tmp1618;
    panda$core$Int64 $tmp1623;
    org$pandalanguage$pandac$Type* $tmp1632;
    panda$core$Int64 $tmp1640;
    int $tmp1450;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1451, 6);
        panda$core$Bit $tmp1452 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1451);
        if ($tmp1452.value) goto $l1453; else goto $l1454;
        $l1454:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1455, (panda$core$Int64) { 617 }, &$s1456);
        abort();
        $l1453:;
        ITable* $tmp1457 = ((panda$collections$MapView*) p_types)->$class->itable;
        while ($tmp1457->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp1457 = $tmp1457->next;
        }
        $fn1459 $tmp1458 = $tmp1457->methods[0];
        panda$core$Int64 $tmp1460 = $tmp1458(((panda$collections$MapView*) p_types));
        panda$core$Int64$init$builtin_int64(&$tmp1461, 0);
        panda$core$Bit $tmp1462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1460, $tmp1461);
        if ($tmp1462.value) {
        {
            $tmp1464 = self;
            $returnValue1463 = $tmp1464;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1464));
            $tmp1450 = 0;
            goto $l1448;
            $l1465:;
            return $returnValue1463;
        }
        }
        {
            $match$621_91467 = self->typeKind;
            panda$core$Int64$init$builtin_int64(&$tmp1468, 12);
            panda$core$Bit $tmp1469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$621_91467.$rawValue, $tmp1468);
            if ($tmp1469.value) {
            {
                int $tmp1472;
                {
                    panda$core$Object* $tmp1476 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                    $tmp1475 = $tmp1476;
                    $tmp1474 = ((org$pandalanguage$pandac$Type*) $tmp1475);
                    found1473 = $tmp1474;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1474));
                    panda$core$Panda$unref$panda$core$Object$Q($tmp1475);
                    if (((panda$core$Bit) { found1473 != NULL }).value) {
                    {
                        $tmp1477 = found1473;
                        $returnValue1463 = $tmp1477;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1477));
                        $tmp1472 = 0;
                        goto $l1470;
                        $l1478:;
                        $tmp1450 = 1;
                        goto $l1448;
                        $l1479:;
                        return $returnValue1463;
                    }
                    }
                    $tmp1481 = self;
                    $returnValue1463 = $tmp1481;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1481));
                    $tmp1472 = 1;
                    goto $l1470;
                    $l1482:;
                    $tmp1450 = 2;
                    goto $l1448;
                    $l1483:;
                    return $returnValue1463;
                }
                $l1470:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) found1473));
                found1473 = NULL;
                switch ($tmp1472) {
                    case 1: goto $l1482;
                    case 0: goto $l1478;
                }
                $l1485:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1486, 11);
            panda$core$Bit $tmp1487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$621_91467.$rawValue, $tmp1486);
            if ($tmp1487.value) {
            {
                int $tmp1490;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1495, 0);
                    panda$core$Object* $tmp1496 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1495);
                    $tmp1494 = $tmp1496;
                    org$pandalanguage$pandac$Type* $tmp1497 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1494), p_types);
                    $tmp1493 = $tmp1497;
                    $tmp1492 = $tmp1493;
                    base1491 = $tmp1492;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1493));
                    panda$core$Panda$unref$panda$core$Object$Q($tmp1494);
                    panda$collections$Array* $tmp1501 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1501);
                    $tmp1500 = $tmp1501;
                    $tmp1499 = $tmp1500;
                    remappedArgs1498 = $tmp1499;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1499));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1500));
                    panda$core$Int64$init$builtin_int64(&$tmp1503, 1);
                    ITable* $tmp1504 = ((panda$collections$CollectionView*) self->subtypes)->$class->itable;
                    while ($tmp1504->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1504 = $tmp1504->next;
                    }
                    $fn1506 $tmp1505 = $tmp1504->methods[0];
                    panda$core$Int64 $tmp1507 = $tmp1505(((panda$collections$CollectionView*) self->subtypes));
                    panda$core$Bit$init$builtin_bit(&$tmp1508, false);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1502, $tmp1503, $tmp1507, $tmp1508);
                    int64_t $tmp1510 = $tmp1502.min.value;
                    panda$core$Int64 i1509 = { $tmp1510 };
                    int64_t $tmp1512 = $tmp1502.max.value;
                    bool $tmp1513 = $tmp1502.inclusive.value;
                    if ($tmp1513) goto $l1520; else goto $l1521;
                    $l1520:;
                    if ($tmp1510 <= $tmp1512) goto $l1514; else goto $l1516;
                    $l1521:;
                    if ($tmp1510 < $tmp1512) goto $l1514; else goto $l1516;
                    $l1514:;
                    {
                        panda$core$Object* $tmp1524 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1509);
                        $tmp1523 = $tmp1524;
                        org$pandalanguage$pandac$Type* $tmp1525 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1523), p_types);
                        $tmp1522 = $tmp1525;
                        panda$collections$Array$add$panda$collections$Array$T(remappedArgs1498, ((panda$core$Object*) $tmp1522));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1522));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp1523);
                    }
                    $l1517:;
                    int64_t $tmp1527 = $tmp1512 - i1509.value;
                    if ($tmp1513) goto $l1528; else goto $l1529;
                    $l1528:;
                    if ((uint64_t) $tmp1527 >= 1) goto $l1526; else goto $l1516;
                    $l1529:;
                    if ((uint64_t) $tmp1527 > 1) goto $l1526; else goto $l1516;
                    $l1526:;
                    i1509.value += 1;
                    goto $l1514;
                    $l1516:;
                    org$pandalanguage$pandac$Type* $tmp1534 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base1491, ((panda$collections$ListView*) remappedArgs1498));
                    $tmp1533 = $tmp1534;
                    $tmp1532 = $tmp1533;
                    $returnValue1463 = $tmp1532;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1532));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1533));
                    $tmp1490 = 0;
                    goto $l1488;
                    $l1535:;
                    $tmp1450 = 3;
                    goto $l1448;
                    $l1536:;
                    return $returnValue1463;
                }
                $l1488:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) remappedArgs1498));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) base1491));
                base1491 = NULL;
                remappedArgs1498 = NULL;
                switch ($tmp1490) {
                    case 0: goto $l1535;
                }
                $l1538:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1539, 1);
            panda$core$Bit $tmp1540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$621_91467.$rawValue, $tmp1539);
            if ($tmp1540.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1545 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(self);
                $tmp1544 = $tmp1545;
                org$pandalanguage$pandac$Type* $tmp1546 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp1544, p_types);
                $tmp1543 = $tmp1546;
                org$pandalanguage$pandac$Type* $tmp1547 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1543);
                $tmp1542 = $tmp1547;
                $tmp1541 = $tmp1542;
                $returnValue1463 = $tmp1541;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1541));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1542));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1543));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1544));
                $tmp1450 = 4;
                goto $l1448;
                $l1548:;
                return $returnValue1463;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1553, 15);
            panda$core$Bit $tmp1554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$621_91467.$rawValue, $tmp1553);
            bool $tmp1552 = $tmp1554.value;
            if ($tmp1552) goto $l1555;
            panda$core$Int64$init$builtin_int64(&$tmp1556, 14);
            panda$core$Bit $tmp1557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$621_91467.$rawValue, $tmp1556);
            $tmp1552 = $tmp1557.value;
            $l1555:;
            panda$core$Bit $tmp1558 = { $tmp1552 };
            bool $tmp1551 = $tmp1558.value;
            if ($tmp1551) goto $l1559;
            panda$core$Int64$init$builtin_int64(&$tmp1560, 17);
            panda$core$Bit $tmp1561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$621_91467.$rawValue, $tmp1560);
            $tmp1551 = $tmp1561.value;
            $l1559:;
            panda$core$Bit $tmp1562 = { $tmp1551 };
            bool $tmp1550 = $tmp1562.value;
            if ($tmp1550) goto $l1563;
            panda$core$Int64$init$builtin_int64(&$tmp1564, 16);
            panda$core$Bit $tmp1565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$621_91467.$rawValue, $tmp1564);
            $tmp1550 = $tmp1565.value;
            $l1563:;
            panda$core$Bit $tmp1566 = { $tmp1550 };
            if ($tmp1566.value) {
            {
                int $tmp1569;
                {
                    panda$collections$Array* $tmp1573 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1573);
                    $tmp1572 = $tmp1573;
                    $tmp1571 = $tmp1572;
                    parameters1570 = $tmp1571;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1572));
                    ITable* $tmp1574 = ((panda$collections$CollectionView*) self->subtypes)->$class->itable;
                    while ($tmp1574->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1574 = $tmp1574->next;
                    }
                    $fn1576 $tmp1575 = $tmp1574->methods[0];
                    panda$core$Int64 $tmp1577 = $tmp1575(((panda$collections$CollectionView*) self->subtypes));
                    panda$core$Int64$init$builtin_int64(&$tmp1578, 1);
                    panda$core$Bit $tmp1579 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1577, $tmp1578);
                    if ($tmp1579.value) goto $l1580; else goto $l1581;
                    $l1581:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1582, (panda$core$Int64) { 639 });
                    abort();
                    $l1580:;
                    panda$core$Int64$init$builtin_int64(&$tmp1584, 0);
                    ITable* $tmp1585 = ((panda$collections$CollectionView*) self->subtypes)->$class->itable;
                    while ($tmp1585->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1585 = $tmp1585->next;
                    }
                    $fn1587 $tmp1586 = $tmp1585->methods[0];
                    panda$core$Int64 $tmp1588 = $tmp1586(((panda$collections$CollectionView*) self->subtypes));
                    panda$core$Int64$init$builtin_int64(&$tmp1589, 1);
                    panda$core$Int64 $tmp1590 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1588, $tmp1589);
                    panda$core$Bit$init$builtin_bit(&$tmp1591, false);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1583, $tmp1584, $tmp1590, $tmp1591);
                    int64_t $tmp1593 = $tmp1583.min.value;
                    panda$core$Int64 i1592 = { $tmp1593 };
                    int64_t $tmp1595 = $tmp1583.max.value;
                    bool $tmp1596 = $tmp1583.inclusive.value;
                    if ($tmp1596) goto $l1603; else goto $l1604;
                    $l1603:;
                    if ($tmp1593 <= $tmp1595) goto $l1597; else goto $l1599;
                    $l1604:;
                    if ($tmp1593 < $tmp1595) goto $l1597; else goto $l1599;
                    $l1597:;
                    {
                        panda$core$Object* $tmp1607 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1592);
                        $tmp1606 = $tmp1607;
                        org$pandalanguage$pandac$Type* $tmp1608 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1606), p_types);
                        $tmp1605 = $tmp1608;
                        panda$collections$Array$add$panda$collections$Array$T(parameters1570, ((panda$core$Object*) $tmp1605));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1605));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp1606);
                    }
                    $l1600:;
                    int64_t $tmp1610 = $tmp1595 - i1592.value;
                    if ($tmp1596) goto $l1611; else goto $l1612;
                    $l1611:;
                    if ((uint64_t) $tmp1610 >= 1) goto $l1609; else goto $l1599;
                    $l1612:;
                    if ((uint64_t) $tmp1610 > 1) goto $l1609; else goto $l1599;
                    $l1609:;
                    i1592.value += 1;
                    goto $l1597;
                    $l1599:;
                    ITable* $tmp1619 = ((panda$collections$CollectionView*) self->subtypes)->$class->itable;
                    while ($tmp1619->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1619 = $tmp1619->next;
                    }
                    $fn1621 $tmp1620 = $tmp1619->methods[0];
                    panda$core$Int64 $tmp1622 = $tmp1620(((panda$collections$CollectionView*) self->subtypes));
                    panda$core$Int64$init$builtin_int64(&$tmp1623, 1);
                    panda$core$Int64 $tmp1624 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1622, $tmp1623);
                    panda$core$Object* $tmp1625 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1624);
                    $tmp1618 = $tmp1625;
                    org$pandalanguage$pandac$Type* $tmp1626 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1618), p_types);
                    $tmp1617 = $tmp1626;
                    org$pandalanguage$pandac$Type* $tmp1627 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->position, self->typeKind, ((panda$collections$ListView*) parameters1570), $tmp1617);
                    $tmp1616 = $tmp1627;
                    $tmp1615 = $tmp1616;
                    $returnValue1463 = $tmp1615;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1615));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1616));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1617));
                    panda$core$Panda$unref$panda$core$Object$Q($tmp1618);
                    $tmp1569 = 0;
                    goto $l1567;
                    $l1628:;
                    $tmp1450 = 5;
                    goto $l1448;
                    $l1629:;
                    return $returnValue1463;
                }
                $l1567:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) parameters1570));
                parameters1570 = NULL;
                switch ($tmp1569) {
                    case 0: goto $l1628;
                }
                $l1631:;
            }
            }
            else {
            {
                $tmp1632 = self;
                $returnValue1463 = $tmp1632;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1632));
                $tmp1450 = 6;
                goto $l1448;
                $l1633:;
                return $returnValue1463;
            }
            }
            }
            }
            }
        }
        if (false) goto $l1635; else goto $l1636;
        $l1636:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1637, (panda$core$Int64) { 617 }, &$s1638);
        abort();
        $l1635:;
    }
    $tmp1450 = -1;
    goto $l1448;
    $l1448:;
    panda$core$Int64$init$builtin_int64(&$tmp1640, 6);
    panda$core$Bit $tmp1641 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($returnValue1463->typeKind.$rawValue, $tmp1640);
    if ($tmp1641.value) goto $l1642; else goto $l1643;
    $l1643:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1644, (panda$core$Int64) { 617 }, &$s1645);
    abort();
    $l1642:;
    switch ($tmp1450) {
        case 6: goto $l1633;
        case 4: goto $l1548;
        case 1: goto $l1479;
        case -1: goto $l1639;
        case 3: goto $l1536;
        case 0: goto $l1465;
        case 2: goto $l1483;
        case 5: goto $l1629;
    }
    $l1639:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue1646;
    panda$core$Int64 $tmp1647 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $returnValue1646 = $tmp1647;
    return $returnValue1646;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $returnValue1649;
    panda$core$String* $tmp1650;
    $tmp1650 = self->name;
    $returnValue1649 = $tmp1650;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1650));
    return $returnValue1649;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1654;
    {
    }
    $tmp1654 = -1;
    goto $l1652;
    $l1652:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1654) {
        case -1: goto $l1655;
    }
    $l1655:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->parameter));
}

