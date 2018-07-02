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
org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, org$pandalanguage$pandac$Type$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit, org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit, org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit, org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$returnType$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

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
typedef panda$core$Int64 (*$fn1220)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1435)(panda$collections$MapView*);
typedef panda$core$Int64 (*$fn1482)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1553)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1564)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1598)(panda$collections$CollectionView*);

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
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s1021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s1148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 106, -1489654704582770111, NULL };
static panda$core$String $s1290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 180, -8366325379630919520, NULL };
static panda$core$String $s1559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 181, -4388988894214124261, NULL };

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
    panda$core$Weak$init$panda$core$Weak$T($tmp5, ((panda$core$Object*) NULL));
    $tmp4 = $tmp5;
    $tmp3 = $tmp4;
    self->parameter = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        $tmp6 = self->subtypes;
        $tmp7 = NULL;
        self->subtypes = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
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
    panda$core$Weak$init$panda$core$Weak$T($tmp12, ((panda$core$Object*) NULL));
    $tmp11 = $tmp12;
    $tmp10 = $tmp11;
    self->parameter = $tmp10;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
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
    panda$core$Weak$init$panda$core$Weak$T($tmp27, ((panda$core$Object*) NULL));
    $tmp26 = $tmp27;
    $tmp25 = $tmp26;
    self->parameter = $tmp25;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
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
    panda$core$Weak$init$panda$core$Weak$T($tmp87, ((panda$core$Object*) NULL));
    $tmp86 = $tmp87;
    $tmp85 = $tmp86;
    self->parameter = $tmp85;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
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
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp94));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp95));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
        }
        panda$core$MutableString* $tmp100 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp100, &$s101);
        $tmp99 = $tmp100;
        $tmp98 = $tmp99;
        name97 = $tmp98;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp98));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp99));
        $tmp103 = &$s104;
        separator102 = $tmp103;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp103));
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
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
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
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
                        panda$core$Panda$unref$panda$core$Object($tmp129);
                        panda$core$MutableString$append$panda$core$String(name97, separator102);
                        panda$core$MutableString$append$panda$core$Object(name97, ((panda$core$Object*) t127));
                        {
                            $tmp134 = separator102;
                            $tmp135 = &$s136;
                            separator102 = $tmp135;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp135));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t127));
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$76$9109));
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
    }
    $tmp90 = -1;
    goto $l88;
    $l88:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator102));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name97));
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
    panda$core$Weak$init$panda$core$Weak$T($tmp152, ((panda$core$Object*) NULL));
    $tmp151 = $tmp152;
    $tmp150 = $tmp151;
    self->parameter = $tmp150;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
    panda$core$Int64$init$builtin_int64(&$tmp154, 12);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp153, $tmp154);
    self->typeKind = $tmp153;
    {
        $tmp155 = self->parameter;
        panda$core$Weak* $tmp158 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp158, ((panda$core$Object*) p_param));
        $tmp157 = $tmp158;
        $tmp156 = $tmp157;
        self->parameter = $tmp156;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
    }
    panda$core$Bit$init$builtin_bit(&$tmp159, true);
    self->resolved = $tmp159;
    {
        $tmp160 = self->subtypes;
        $tmp161 = NULL;
        self->subtypes = $tmp161;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp161));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp167));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp179));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp180));
        panda$core$MutableString$append$panda$core$String(name178, ((org$pandalanguage$pandac$Symbol*) p_base)->name);
        panda$core$UInt8$init$builtin_uint8(&$tmp183, 60);
        panda$core$Char8$init$panda$core$UInt8(&$tmp182, $tmp183);
        panda$core$MutableString$append$panda$core$Char8(name178, $tmp182);
        $tmp185 = &$s186;
        separator184 = $tmp185;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
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
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp191));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
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
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp209));
                        panda$core$Panda$unref$panda$core$Object($tmp210);
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
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp219));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
                        }
                    }
                    $tmp207 = -1;
                    goto $l205;
                    $l205:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a208));
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$101$9190));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp230));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp231));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp233));
        $tmp176 = 0;
        goto $l174;
        $l239:;
        return $returnValue229;
    }
    $l174:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes225));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator184));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name178));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp251));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp252));
        panda$collections$Array* $tmp258 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp258);
        $tmp257 = $tmp258;
        $tmp256 = $tmp257;
        subtypes255 = $tmp256;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
        $tmp260 = &$s261;
        separator259 = $tmp260;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp260));
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
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
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
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp284));
                        panda$core$Panda$unref$panda$core$Object($tmp285);
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
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp294));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
                        }
                    }
                    $tmp282 = -1;
                    goto $l280;
                    $l280:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p283));
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$121$9265));
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp321));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
        $tmp248 = 0;
        goto $l246;
        $l328:;
        return $returnValue320;
    }
    $l246:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator259));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes255));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name250));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp368));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp388));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp402));
        org$pandalanguage$pandac$Type* $tmp405 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp404 = $tmp405;
        panda$collections$Array$add$panda$collections$Array$T(subtypes400, ((panda$core$Object*) $tmp404));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
        org$pandalanguage$pandac$Type* $tmp409 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp412, 1);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp411, $tmp412);
        org$pandalanguage$pandac$Position$init(&$tmp413);
        panda$core$Bit$init$builtin_bit(&$tmp414, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp409, &$s410, $tmp411, $tmp413, ((panda$collections$ListView*) subtypes400), $tmp414);
        $tmp408 = $tmp409;
        $tmp407 = $tmp408;
        $returnValue406 = $tmp407;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp407));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp408));
        $tmp399 = 0;
        goto $l397;
        $l415:;
        return $returnValue406;
    }
    $l397:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes400));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp423));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp424));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp433));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp434));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp453));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp463));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp464));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp473));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp482));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp491));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp492));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp500));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp509));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp510));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp518));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp519));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp527));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp528));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp536));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp545));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp554));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp563));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp564));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp573));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp574));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp583));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp593));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp603));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp604));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp613));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp614));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp623));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp633));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp643));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp653));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp654));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp663));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp664));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp673));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp674));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp683));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp693));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp703));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp704));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp706));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp707));
    panda$core$Panda$unref$panda$core$Object($tmp709);
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp720));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp721));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp723));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp726));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp737));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp738));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp740));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp741));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp743));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp754));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp755));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp764));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp765));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp774));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp775));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp784));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp794));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp795));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp804));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp805));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp814));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp815));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp827));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp828));
        org$pandalanguage$pandac$Type* $tmp831 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp834, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp833, $tmp834);
        org$pandalanguage$pandac$Position$init(&$tmp835);
        panda$core$Bit$init$builtin_bit(&$tmp836, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp831, &$s832, $tmp833, $tmp835, $tmp836);
        $tmp830 = $tmp831;
        panda$collections$Array$add$panda$collections$Array$T(children826, ((panda$core$Object*) $tmp830));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp830));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp838));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp839));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp841));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp842));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp843));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp844));
        $tmp825 = 0;
        goto $l823;
        $l854:;
        return $returnValue837;
    }
    $l823:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children826));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp865));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp866));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp869));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp870));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
        $tmp863 = 0;
        goto $l861;
        $l879:;
        return $returnValue868;
    }
    $l861:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children864));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp890));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp891));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp894));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp895));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp896));
        $tmp888 = 0;
        goto $l886;
        $l904:;
        return $returnValue893;
    }
    $l886:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children889));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp915));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
        panda$collections$Array$add$panda$collections$Array$T(children914, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp919 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp918 = $tmp919;
        panda$core$Bit $tmp920 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp918);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp918));
        if ($tmp920.value) {
        {
            org$pandalanguage$pandac$Type* $tmp922 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp921 = $tmp922;
            panda$collections$Array$add$panda$collections$Array$T(children914, ((panda$core$Object*) $tmp921));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp921));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp924 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp923 = $tmp924;
        panda$core$Bit $tmp925 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp923);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp923));
        if ($tmp925.value) {
        {
            org$pandalanguage$pandac$Type* $tmp927 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp926 = $tmp927;
            panda$collections$Array$add$panda$collections$Array$T(children914, ((panda$core$Object*) $tmp926));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp926));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp929 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp928 = $tmp929;
        panda$core$Bit $tmp930 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp928);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp928));
        if ($tmp930.value) {
        {
            org$pandalanguage$pandac$Type* $tmp932 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp931 = $tmp932;
            panda$collections$Array$add$panda$collections$Array$T(children914, ((panda$core$Object*) $tmp931));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp931));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp934 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp933 = $tmp934;
            panda$collections$Array$add$panda$collections$Array$T(children914, ((panda$core$Object*) $tmp933));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp933));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp936));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp937));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp938));
        $tmp913 = 0;
        goto $l911;
        $l946:;
        return $returnValue935;
    }
    $l911:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children914));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp954));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp955));
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp964));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp965));
    return $returnValue963;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue973;
    panda$core$Int64 $tmp989;
    panda$core$Int64 $tmp993;
    panda$core$Bit $tmp979 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s978);
    bool $tmp977 = $tmp979.value;
    if ($tmp977) goto $l980;
    panda$core$Bit $tmp982 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s981);
    $tmp977 = $tmp982.value;
    $l980:;
    panda$core$Bit $tmp983 = { $tmp977 };
    bool $tmp976 = $tmp983.value;
    if ($tmp976) goto $l984;
    panda$core$Bit $tmp986 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s985);
    $tmp976 = $tmp986.value;
    $l984:;
    panda$core$Bit $tmp987 = { $tmp976 };
    bool $tmp975 = $tmp987.value;
    if ($tmp975) goto $l988;
    panda$core$Int64$init$builtin_int64(&$tmp989, 5);
    panda$core$Bit $tmp990 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp989);
    $tmp975 = $tmp990.value;
    $l988:;
    panda$core$Bit $tmp991 = { $tmp975 };
    bool $tmp974 = $tmp991.value;
    if ($tmp974) goto $l992;
    panda$core$Int64$init$builtin_int64(&$tmp993, 18);
    panda$core$Bit $tmp994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp993);
    $tmp974 = $tmp994.value;
    $l992:;
    panda$core$Bit $tmp995 = { $tmp974 };
    $returnValue973 = $tmp995;
    return $returnValue973;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue997;
    panda$core$Int64 $tmp1001;
    panda$core$Int64 $tmp1004;
    panda$core$Int64 $tmp1008;
    panda$core$Int64 $tmp1012;
    panda$core$Int64$init$builtin_int64(&$tmp1001, 2);
    panda$core$Bit $tmp1002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1001);
    bool $tmp1000 = $tmp1002.value;
    if ($tmp1000) goto $l1003;
    panda$core$Int64$init$builtin_int64(&$tmp1004, 3);
    panda$core$Bit $tmp1005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1004);
    $tmp1000 = $tmp1005.value;
    $l1003:;
    panda$core$Bit $tmp1006 = { $tmp1000 };
    bool $tmp999 = $tmp1006.value;
    if ($tmp999) goto $l1007;
    panda$core$Int64$init$builtin_int64(&$tmp1008, 10);
    panda$core$Bit $tmp1009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1008);
    $tmp999 = $tmp1009.value;
    $l1007:;
    panda$core$Bit $tmp1010 = { $tmp999 };
    bool $tmp998 = $tmp1010.value;
    if ($tmp998) goto $l1011;
    panda$core$Int64$init$builtin_int64(&$tmp1012, 5);
    panda$core$Bit $tmp1013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1012);
    $tmp998 = $tmp1013.value;
    $l1011:;
    panda$core$Bit $tmp1014 = { $tmp998 };
    $returnValue997 = $tmp1014;
    return $returnValue997;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue1016;
    panda$core$Int64 $tmp1018;
    panda$core$Int64$init$builtin_int64(&$tmp1018, 18);
    panda$core$Bit $tmp1019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1018);
    bool $tmp1017 = $tmp1019.value;
    if ($tmp1017) goto $l1020;
    panda$core$Bit $tmp1022 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1021);
    $tmp1017 = $tmp1022.value;
    $l1020:;
    panda$core$Bit $tmp1023 = { $tmp1017 };
    $returnValue1016 = $tmp1023;
    return $returnValue1016;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue1025;
    panda$core$Bit $tmp1027 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1026);
    $returnValue1025 = $tmp1027;
    return $returnValue1025;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue1029;
    panda$core$Bit $tmp1031 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp1030 = $tmp1031.value;
    if ($tmp1030) goto $l1032;
    panda$core$Bit $tmp1033 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp1030 = $tmp1033.value;
    $l1032:;
    panda$core$Bit $tmp1034 = { $tmp1030 };
    $returnValue1029 = $tmp1034;
    return $returnValue1029;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$456_91036;
    panda$core$Int64 $tmp1044;
    panda$core$Int64 $tmp1047;
    panda$core$Int64 $tmp1051;
    panda$core$Int64 $tmp1055;
    panda$core$Int64 $tmp1059;
    panda$core$Int64 $tmp1063;
    panda$core$Int64 $tmp1067;
    panda$core$Int64 $tmp1071;
    panda$core$Bit $returnValue1074;
    panda$core$Bit $tmp1075;
    panda$core$Bit $tmp1077;
    {
        $match$456_91036 = self->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp1044, 0);
        panda$core$Bit $tmp1045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91036.$rawValue, $tmp1044);
        bool $tmp1043 = $tmp1045.value;
        if ($tmp1043) goto $l1046;
        panda$core$Int64$init$builtin_int64(&$tmp1047, 1);
        panda$core$Bit $tmp1048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91036.$rawValue, $tmp1047);
        $tmp1043 = $tmp1048.value;
        $l1046:;
        panda$core$Bit $tmp1049 = { $tmp1043 };
        bool $tmp1042 = $tmp1049.value;
        if ($tmp1042) goto $l1050;
        panda$core$Int64$init$builtin_int64(&$tmp1051, 11);
        panda$core$Bit $tmp1052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91036.$rawValue, $tmp1051);
        $tmp1042 = $tmp1052.value;
        $l1050:;
        panda$core$Bit $tmp1053 = { $tmp1042 };
        bool $tmp1041 = $tmp1053.value;
        if ($tmp1041) goto $l1054;
        panda$core$Int64$init$builtin_int64(&$tmp1055, 12);
        panda$core$Bit $tmp1056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91036.$rawValue, $tmp1055);
        $tmp1041 = $tmp1056.value;
        $l1054:;
        panda$core$Bit $tmp1057 = { $tmp1041 };
        bool $tmp1040 = $tmp1057.value;
        if ($tmp1040) goto $l1058;
        panda$core$Int64$init$builtin_int64(&$tmp1059, 15);
        panda$core$Bit $tmp1060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91036.$rawValue, $tmp1059);
        $tmp1040 = $tmp1060.value;
        $l1058:;
        panda$core$Bit $tmp1061 = { $tmp1040 };
        bool $tmp1039 = $tmp1061.value;
        if ($tmp1039) goto $l1062;
        panda$core$Int64$init$builtin_int64(&$tmp1063, 14);
        panda$core$Bit $tmp1064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91036.$rawValue, $tmp1063);
        $tmp1039 = $tmp1064.value;
        $l1062:;
        panda$core$Bit $tmp1065 = { $tmp1039 };
        bool $tmp1038 = $tmp1065.value;
        if ($tmp1038) goto $l1066;
        panda$core$Int64$init$builtin_int64(&$tmp1067, 17);
        panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91036.$rawValue, $tmp1067);
        $tmp1038 = $tmp1068.value;
        $l1066:;
        panda$core$Bit $tmp1069 = { $tmp1038 };
        bool $tmp1037 = $tmp1069.value;
        if ($tmp1037) goto $l1070;
        panda$core$Int64$init$builtin_int64(&$tmp1071, 16);
        panda$core$Bit $tmp1072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91036.$rawValue, $tmp1071);
        $tmp1037 = $tmp1072.value;
        $l1070:;
        panda$core$Bit $tmp1073 = { $tmp1037 };
        if ($tmp1073.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1075, true);
            $returnValue1074 = $tmp1075;
            return $returnValue1074;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1077, false);
            $returnValue1074 = $tmp1077;
            return $returnValue1074;
        }
        }
    }
    if (false) goto $l1079; else goto $l1080;
    $l1080:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1081, (panda$core$Int64) { 455 }, &$s1082);
    abort();
    $l1079:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$466_91083;
    panda$core$Int64 $tmp1087;
    panda$core$Int64 $tmp1090;
    panda$core$Int64 $tmp1094;
    panda$core$Int64 $tmp1098;
    panda$core$Bit $returnValue1101;
    panda$core$Bit $tmp1102;
    panda$core$Bit $tmp1104;
    {
        $match$466_91083 = self->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp1087, 15);
        panda$core$Bit $tmp1088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91083.$rawValue, $tmp1087);
        bool $tmp1086 = $tmp1088.value;
        if ($tmp1086) goto $l1089;
        panda$core$Int64$init$builtin_int64(&$tmp1090, 14);
        panda$core$Bit $tmp1091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91083.$rawValue, $tmp1090);
        $tmp1086 = $tmp1091.value;
        $l1089:;
        panda$core$Bit $tmp1092 = { $tmp1086 };
        bool $tmp1085 = $tmp1092.value;
        if ($tmp1085) goto $l1093;
        panda$core$Int64$init$builtin_int64(&$tmp1094, 17);
        panda$core$Bit $tmp1095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91083.$rawValue, $tmp1094);
        $tmp1085 = $tmp1095.value;
        $l1093:;
        panda$core$Bit $tmp1096 = { $tmp1085 };
        bool $tmp1084 = $tmp1096.value;
        if ($tmp1084) goto $l1097;
        panda$core$Int64$init$builtin_int64(&$tmp1098, 16);
        panda$core$Bit $tmp1099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91083.$rawValue, $tmp1098);
        $tmp1084 = $tmp1099.value;
        $l1097:;
        panda$core$Bit $tmp1100 = { $tmp1084 };
        if ($tmp1100.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1102, true);
            $returnValue1101 = $tmp1102;
            return $returnValue1101;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1104, false);
            $returnValue1101 = $tmp1104;
            return $returnValue1101;
        }
        }
    }
    if (false) goto $l1106; else goto $l1107;
    $l1107:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1108, (panda$core$Int64) { 465 }, &$s1109);
    abort();
    $l1106:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue1110;
    panda$core$Bit $tmp1112 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1111);
    $returnValue1110 = $tmp1112;
    return $returnValue1110;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1114;
    panda$core$Bit $returnValue1116;
    panda$core$Object* $tmp1117;
    panda$core$Int64 $tmp1118;
    panda$core$Int64 $tmp1123;
    panda$core$Object* $tmp1126;
    panda$core$Int64 $tmp1127;
    panda$core$Int64$init$builtin_int64(&$tmp1114, 1);
    panda$core$Bit $tmp1115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1114);
    if ($tmp1115.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1118, 0);
        panda$core$Object* $tmp1119 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1118);
        $tmp1117 = $tmp1119;
        panda$core$Bit $tmp1120 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1117));
        $returnValue1116 = $tmp1120;
        panda$core$Panda$unref$panda$core$Object($tmp1117);
        return $returnValue1116;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1123, 11);
    panda$core$Bit $tmp1124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1123);
    bool $tmp1122 = $tmp1124.value;
    if (!$tmp1122) goto $l1125;
    panda$core$Int64$init$builtin_int64(&$tmp1127, 0);
    panda$core$Object* $tmp1128 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1127);
    $tmp1126 = $tmp1128;
    panda$core$Bit $tmp1130 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp1126))->name, &$s1129);
    $tmp1122 = $tmp1130.value;
    panda$core$Panda$unref$panda$core$Object($tmp1126);
    $l1125:;
    panda$core$Bit $tmp1131 = { $tmp1122 };
    $returnValue1116 = $tmp1131;
    return $returnValue1116;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1133;
    panda$core$Bit $returnValue1135;
    panda$core$Object* $tmp1136;
    panda$core$Int64 $tmp1137;
    panda$core$Int64 $tmp1142;
    panda$core$Object* $tmp1145;
    panda$core$Int64 $tmp1146;
    panda$core$Int64$init$builtin_int64(&$tmp1133, 1);
    panda$core$Bit $tmp1134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1133);
    if ($tmp1134.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1137, 0);
        panda$core$Object* $tmp1138 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1137);
        $tmp1136 = $tmp1138;
        panda$core$Bit $tmp1139 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1136));
        $returnValue1135 = $tmp1139;
        panda$core$Panda$unref$panda$core$Object($tmp1136);
        return $returnValue1135;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1142, 11);
    panda$core$Bit $tmp1143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1142);
    bool $tmp1141 = $tmp1143.value;
    if (!$tmp1141) goto $l1144;
    panda$core$Int64$init$builtin_int64(&$tmp1146, 0);
    panda$core$Object* $tmp1147 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1146);
    $tmp1145 = $tmp1147;
    panda$core$Bit $tmp1149 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp1145))->name, &$s1148);
    $tmp1141 = $tmp1149.value;
    panda$core$Panda$unref$panda$core$Object($tmp1145);
    $l1144:;
    panda$core$Bit $tmp1150 = { $tmp1141 };
    $returnValue1135 = $tmp1150;
    return $returnValue1135;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1155;
    org$pandalanguage$pandac$Type* $returnValue1157;
    org$pandalanguage$pandac$Type* $tmp1158;
    panda$collections$Array* subtypes1161 = NULL;
    panda$collections$Array* $tmp1162;
    panda$collections$Array* $tmp1163;
    org$pandalanguage$pandac$Type* $tmp1165;
    org$pandalanguage$pandac$Type* $tmp1166;
    panda$core$String* $tmp1168;
    panda$core$String* $tmp1169;
    org$pandalanguage$pandac$Type$Kind $tmp1173;
    panda$core$Int64 $tmp1174;
    org$pandalanguage$pandac$Position $tmp1175;
    panda$core$Bit $tmp1176;
    int $tmp1154;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1155, 1);
        panda$core$Bit $tmp1156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1155);
        if ($tmp1156.value) {
        {
            $tmp1158 = self;
            $returnValue1157 = $tmp1158;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1158));
            $tmp1154 = 0;
            goto $l1152;
            $l1159:;
            return $returnValue1157;
        }
        }
        panda$collections$Array* $tmp1164 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1164);
        $tmp1163 = $tmp1164;
        $tmp1162 = $tmp1163;
        subtypes1161 = $tmp1162;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1162));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1163));
        panda$collections$Array$add$panda$collections$Array$T(subtypes1161, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp1167 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp1170 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp1169 = $tmp1170;
        panda$core$String* $tmp1172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1169, &$s1171);
        $tmp1168 = $tmp1172;
        panda$core$Int64$init$builtin_int64(&$tmp1174, 1);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp1173, $tmp1174);
        org$pandalanguage$pandac$Position$init(&$tmp1175);
        panda$core$Bit$init$builtin_bit(&$tmp1176, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1167, $tmp1168, $tmp1173, $tmp1175, ((panda$collections$ListView*) subtypes1161), $tmp1176);
        $tmp1166 = $tmp1167;
        $tmp1165 = $tmp1166;
        $returnValue1157 = $tmp1165;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1165));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1166));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1168));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1169));
        $tmp1154 = 1;
        goto $l1152;
        $l1177:;
        return $returnValue1157;
    }
    $l1152:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1161));
    subtypes1161 = NULL;
    switch ($tmp1154) {
        case 1: goto $l1177;
        case 0: goto $l1159;
    }
    $l1179:;
    if (false) goto $l1180; else goto $l1181;
    $l1181:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1182, (panda$core$Int64) { 492 }, &$s1183);
    abort();
    $l1180:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1184;
    org$pandalanguage$pandac$Type* $returnValue1186;
    org$pandalanguage$pandac$Type* $tmp1187;
    org$pandalanguage$pandac$Type* $tmp1189;
    panda$core$Object* $tmp1190;
    panda$core$Int64 $tmp1191;
    panda$core$Int64$init$builtin_int64(&$tmp1184, 1);
    panda$core$Bit $tmp1185 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1184);
    if ($tmp1185.value) {
    {
        $tmp1187 = self;
        $returnValue1186 = $tmp1187;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1187));
        return $returnValue1186;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1191, 0);
    panda$core$Object* $tmp1192 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1191);
    $tmp1190 = $tmp1192;
    $tmp1189 = ((org$pandalanguage$pandac$Type*) $tmp1190);
    $returnValue1186 = $tmp1189;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1189));
    panda$core$Panda$unref$panda$core$Object($tmp1190);
    return $returnValue1186;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1197;
    panda$core$Int64 $tmp1200;
    panda$core$Int64 $tmp1204;
    panda$core$Int64 $tmp1208;
    org$pandalanguage$pandac$Type* $returnValue1215;
    org$pandalanguage$pandac$Type* $tmp1216;
    panda$core$Object* $tmp1217;
    panda$core$Int64 $tmp1222;
    panda$core$Int64$init$builtin_int64(&$tmp1197, 14);
    panda$core$Bit $tmp1198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1197);
    bool $tmp1196 = $tmp1198.value;
    if ($tmp1196) goto $l1199;
    panda$core$Int64$init$builtin_int64(&$tmp1200, 15);
    panda$core$Bit $tmp1201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1200);
    $tmp1196 = $tmp1201.value;
    $l1199:;
    panda$core$Bit $tmp1202 = { $tmp1196 };
    bool $tmp1195 = $tmp1202.value;
    if ($tmp1195) goto $l1203;
    panda$core$Int64$init$builtin_int64(&$tmp1204, 16);
    panda$core$Bit $tmp1205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1204);
    $tmp1195 = $tmp1205.value;
    $l1203:;
    panda$core$Bit $tmp1206 = { $tmp1195 };
    bool $tmp1194 = $tmp1206.value;
    if ($tmp1194) goto $l1207;
    panda$core$Int64$init$builtin_int64(&$tmp1208, 17);
    panda$core$Bit $tmp1209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1208);
    $tmp1194 = $tmp1209.value;
    $l1207:;
    panda$core$Bit $tmp1210 = { $tmp1194 };
    if ($tmp1210.value) goto $l1211; else goto $l1212;
    $l1212:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1213, (panda$core$Int64) { 510 }, &$s1214);
    abort();
    $l1211:;
    ITable* $tmp1218 = ((panda$collections$CollectionView*) self->subtypes)->$class->itable;
    while ($tmp1218->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1218 = $tmp1218->next;
    }
    $fn1220 $tmp1219 = $tmp1218->methods[0];
    panda$core$Int64 $tmp1221 = $tmp1219(((panda$collections$CollectionView*) self->subtypes));
    panda$core$Int64$init$builtin_int64(&$tmp1222, 1);
    panda$core$Int64 $tmp1223 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1221, $tmp1222);
    panda$core$Object* $tmp1224 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1223);
    $tmp1217 = $tmp1224;
    $tmp1216 = ((org$pandalanguage$pandac$Type*) $tmp1217);
    $returnValue1215 = $tmp1216;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1216));
    panda$core$Panda$unref$panda$core$Object($tmp1217);
    return $returnValue1215;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $returnValue1230;
    org$pandalanguage$pandac$Type* $tmp1231;
    org$pandalanguage$pandac$Type* $tmp1234;
    panda$core$Int64 $tmp1237;
    org$pandalanguage$pandac$Type* $tmp1239;
    org$pandalanguage$pandac$Type* $tmp1242;
    org$pandalanguage$pandac$Type* $tmp1243;
    org$pandalanguage$pandac$Type* $tmp1247;
    panda$core$Int64 $tmp1250;
    org$pandalanguage$pandac$Type* $tmp1252;
    org$pandalanguage$pandac$Type* $tmp1255;
    org$pandalanguage$pandac$Type* $tmp1256;
    panda$core$Int64 $tmp1261;
    org$pandalanguage$pandac$Type* $tmp1266;
    panda$core$Int64 $tmp1272;
    org$pandalanguage$pandac$Type* $tmp1275;
    panda$core$Int64 $tmp1280;
    panda$core$Int64 $tmp1283;
    org$pandalanguage$pandac$Type* $tmp1286;
    org$pandalanguage$pandac$Type* $tmp1292;
    org$pandalanguage$pandac$Type* $tmp1293;
    org$pandalanguage$pandac$Type* $tmp1297;
    org$pandalanguage$pandac$Type* $tmp1298;
    panda$core$Int64 $tmp1304;
    panda$core$Int64 $tmp1307;
    org$pandalanguage$pandac$Type* $tmp1310;
    org$pandalanguage$pandac$Type* $tmp1316;
    org$pandalanguage$pandac$Type* $tmp1317;
    org$pandalanguage$pandac$Type* $tmp1321;
    org$pandalanguage$pandac$Type* $tmp1322;
    panda$core$Int64 $tmp1326;
    org$pandalanguage$pandac$Type* $tmp1328;
    org$pandalanguage$pandac$Type* $tmp1329;
    org$pandalanguage$pandac$Type* $tmp1330;
    panda$core$Object* $tmp1331;
    panda$core$Int64 $tmp1332;
    panda$core$Int64 $tmp1338;
    org$pandalanguage$pandac$Type* $tmp1340;
    org$pandalanguage$pandac$Type* $tmp1341;
    org$pandalanguage$pandac$Type* $tmp1342;
    panda$core$Object* $tmp1343;
    panda$core$Int64 $tmp1344;
    org$pandalanguage$pandac$Type* t11350 = NULL;
    org$pandalanguage$pandac$Type* $tmp1351;
    org$pandalanguage$pandac$Type* $tmp1352;
    org$pandalanguage$pandac$Type* t21354 = NULL;
    org$pandalanguage$pandac$Type* $tmp1355;
    org$pandalanguage$pandac$Type* $tmp1356;
    panda$collections$HashSet* ancestors1366 = NULL;
    panda$collections$HashSet* $tmp1367;
    panda$collections$HashSet* $tmp1368;
    org$pandalanguage$pandac$Type* t1370 = NULL;
    org$pandalanguage$pandac$Type* $tmp1371;
    org$pandalanguage$pandac$ClassDecl* cl1372 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1373;
    org$pandalanguage$pandac$ClassDecl* $tmp1374;
    org$pandalanguage$pandac$Type* $tmp1379;
    org$pandalanguage$pandac$Type* $tmp1380;
    org$pandalanguage$pandac$Type* $tmp1381;
    org$pandalanguage$pandac$ClassDecl* $tmp1383;
    org$pandalanguage$pandac$ClassDecl* $tmp1384;
    org$pandalanguage$pandac$ClassDecl* $tmp1385;
    org$pandalanguage$pandac$ClassDecl* $tmp1387;
    org$pandalanguage$pandac$ClassDecl* $tmp1388;
    org$pandalanguage$pandac$Type* $tmp1389;
    org$pandalanguage$pandac$Type* $tmp1390;
    org$pandalanguage$pandac$ClassDecl* $tmp1391;
    org$pandalanguage$pandac$ClassDecl* $tmp1392;
    org$pandalanguage$pandac$ClassDecl* $tmp1393;
    org$pandalanguage$pandac$Type* $tmp1399;
    org$pandalanguage$pandac$Type* $tmp1403;
    org$pandalanguage$pandac$Type* $tmp1404;
    org$pandalanguage$pandac$Type* $tmp1405;
    org$pandalanguage$pandac$ClassDecl* $tmp1407;
    org$pandalanguage$pandac$ClassDecl* $tmp1408;
    org$pandalanguage$pandac$ClassDecl* $tmp1409;
    org$pandalanguage$pandac$ClassDecl* $tmp1411;
    org$pandalanguage$pandac$ClassDecl* $tmp1412;
    org$pandalanguage$pandac$Type* $tmp1414;
    org$pandalanguage$pandac$Type* $tmp1415;
    int $tmp1228;
    {
        panda$core$Bit $tmp1229 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp1229.value) {
        {
            $tmp1231 = self;
            $returnValue1230 = $tmp1231;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1231));
            $tmp1228 = 0;
            goto $l1226;
            $l1232:;
            return $returnValue1230;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1235 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp1234 = $tmp1235;
        panda$core$Bit $tmp1236 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp1234);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1234));
        if ($tmp1236.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1237, 1);
            panda$core$Bit $tmp1238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1237);
            if ($tmp1238.value) {
            {
                $tmp1239 = p_other;
                $returnValue1230 = $tmp1239;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1239));
                $tmp1228 = 1;
                goto $l1226;
                $l1240:;
                return $returnValue1230;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1244 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp1243 = $tmp1244;
            $tmp1242 = $tmp1243;
            $returnValue1230 = $tmp1242;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1242));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1243));
            $tmp1228 = 2;
            goto $l1226;
            $l1245:;
            return $returnValue1230;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1248 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp1247 = $tmp1248;
        panda$core$Bit $tmp1249 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp1247);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1247));
        if ($tmp1249.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1250, 1);
            panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1250);
            if ($tmp1251.value) {
            {
                $tmp1252 = self;
                $returnValue1230 = $tmp1252;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1252));
                $tmp1228 = 3;
                goto $l1226;
                $l1253:;
                return $returnValue1230;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1257 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp1256 = $tmp1257;
            $tmp1255 = $tmp1256;
            $returnValue1230 = $tmp1255;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1255));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1256));
            $tmp1228 = 4;
            goto $l1226;
            $l1258:;
            return $returnValue1230;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1261, 5);
        panda$core$Bit $tmp1262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1261);
        bool $tmp1260 = $tmp1262.value;
        if (!$tmp1260) goto $l1263;
        panda$core$Bit $tmp1264 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp1260 = $tmp1264.value;
        $l1263:;
        panda$core$Bit $tmp1265 = { $tmp1260 };
        if ($tmp1265.value) {
        {
            $tmp1266 = p_other;
            $returnValue1230 = $tmp1266;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1266));
            $tmp1228 = 5;
            goto $l1226;
            $l1267:;
            return $returnValue1230;
        }
        }
        panda$core$Bit $tmp1270 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp1269 = $tmp1270.value;
        if (!$tmp1269) goto $l1271;
        panda$core$Int64$init$builtin_int64(&$tmp1272, 5);
        panda$core$Bit $tmp1273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1272);
        $tmp1269 = $tmp1273.value;
        $l1271:;
        panda$core$Bit $tmp1274 = { $tmp1269 };
        if ($tmp1274.value) {
        {
            $tmp1275 = self;
            $returnValue1230 = $tmp1275;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1275));
            $tmp1228 = 6;
            goto $l1226;
            $l1276:;
            return $returnValue1230;
        }
        }
        panda$core$Bit $tmp1278 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp1278.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1280, 5);
            panda$core$Bit $tmp1281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1280);
            bool $tmp1279 = $tmp1281.value;
            if ($tmp1279) goto $l1282;
            panda$core$Int64$init$builtin_int64(&$tmp1283, 18);
            panda$core$Bit $tmp1284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1283);
            $tmp1279 = $tmp1284.value;
            $l1282:;
            panda$core$Bit $tmp1285 = { $tmp1279 };
            if ($tmp1285.value) {
            {
                $tmp1286 = self;
                $returnValue1230 = $tmp1286;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1286));
                $tmp1228 = 7;
                goto $l1226;
                $l1287:;
                return $returnValue1230;
            }
            }
            panda$core$Bit $tmp1289 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp1289.value) {
            {
                panda$core$Bit $tmp1291 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s1290);
                if ($tmp1291.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1294 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp1293 = $tmp1294;
                    $tmp1292 = $tmp1293;
                    $returnValue1230 = $tmp1292;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1292));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1293));
                    $tmp1228 = 8;
                    goto $l1226;
                    $l1295:;
                    return $returnValue1230;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1299 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp1298 = $tmp1299;
                $tmp1297 = $tmp1298;
                $returnValue1230 = $tmp1297;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1297));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1298));
                $tmp1228 = 9;
                goto $l1226;
                $l1300:;
                return $returnValue1230;
            }
            }
        }
        }
        panda$core$Bit $tmp1302 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp1302.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1304, 5);
            panda$core$Bit $tmp1305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1304);
            bool $tmp1303 = $tmp1305.value;
            if ($tmp1303) goto $l1306;
            panda$core$Int64$init$builtin_int64(&$tmp1307, 18);
            panda$core$Bit $tmp1308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1307);
            $tmp1303 = $tmp1308.value;
            $l1306:;
            panda$core$Bit $tmp1309 = { $tmp1303 };
            if ($tmp1309.value) {
            {
                $tmp1310 = p_other;
                $returnValue1230 = $tmp1310;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1310));
                $tmp1228 = 10;
                goto $l1226;
                $l1311:;
                return $returnValue1230;
            }
            }
            panda$core$Bit $tmp1313 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp1313.value) {
            {
                panda$core$Bit $tmp1315 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1314);
                if ($tmp1315.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1318 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp1317 = $tmp1318;
                    $tmp1316 = $tmp1317;
                    $returnValue1230 = $tmp1316;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1316));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1317));
                    $tmp1228 = 11;
                    goto $l1226;
                    $l1319:;
                    return $returnValue1230;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1323 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp1322 = $tmp1323;
                $tmp1321 = $tmp1322;
                $returnValue1230 = $tmp1321;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1321));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1322));
                $tmp1228 = 12;
                goto $l1226;
                $l1324:;
                return $returnValue1230;
            }
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1326, 1);
        panda$core$Bit $tmp1327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1326);
        if ($tmp1327.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1332, 0);
            panda$core$Object* $tmp1333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1332);
            $tmp1331 = $tmp1333;
            org$pandalanguage$pandac$Type* $tmp1334 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1331), p_compiler, p_other);
            $tmp1330 = $tmp1334;
            org$pandalanguage$pandac$Type* $tmp1335 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1330);
            $tmp1329 = $tmp1335;
            $tmp1328 = $tmp1329;
            $returnValue1230 = $tmp1328;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1328));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1329));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1330));
            panda$core$Panda$unref$panda$core$Object($tmp1331);
            $tmp1228 = 13;
            goto $l1226;
            $l1336:;
            return $returnValue1230;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1338, 1);
        panda$core$Bit $tmp1339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1338);
        if ($tmp1339.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1344, 0);
            panda$core$Object* $tmp1345 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, $tmp1344);
            $tmp1343 = $tmp1345;
            org$pandalanguage$pandac$Type* $tmp1346 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp1343));
            $tmp1342 = $tmp1346;
            org$pandalanguage$pandac$Type* $tmp1347 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1342);
            $tmp1341 = $tmp1347;
            $tmp1340 = $tmp1341;
            $returnValue1230 = $tmp1340;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1342));
            panda$core$Panda$unref$panda$core$Object($tmp1343);
            $tmp1228 = 14;
            goto $l1226;
            $l1348:;
            return $returnValue1230;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1353 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp1352 = $tmp1353;
        $tmp1351 = $tmp1352;
        t11350 = $tmp1351;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1351));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
        org$pandalanguage$pandac$Type* $tmp1357 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp1356 = $tmp1357;
        $tmp1355 = $tmp1356;
        t21354 = $tmp1355;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1355));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1356));
        panda$core$Bit $tmp1359 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t11350);
        bool $tmp1358 = $tmp1359.value;
        if (!$tmp1358) goto $l1360;
        panda$core$Bit $tmp1361 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t21354);
        $tmp1358 = $tmp1361.value;
        $l1360:;
        panda$core$Bit $tmp1362 = { $tmp1358 };
        if ($tmp1362.value) {
        {
            int $tmp1365;
            {
                panda$collections$HashSet* $tmp1369 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
                panda$collections$HashSet$init($tmp1369);
                $tmp1368 = $tmp1369;
                $tmp1367 = $tmp1368;
                ancestors1366 = $tmp1367;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1367));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1368));
                $tmp1371 = self;
                t1370 = $tmp1371;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1371));
                org$pandalanguage$pandac$ClassDecl* $tmp1375 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t11350);
                $tmp1374 = $tmp1375;
                $tmp1373 = $tmp1374;
                cl1372 = $tmp1373;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1373));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1374));
                $l1376:;
                bool $tmp1378 = ((panda$core$Bit) { cl1372 != NULL }).value;
                if (!$tmp1378) goto $l1377;
                {
                    panda$collections$HashSet$add$panda$collections$HashSet$T(ancestors1366, ((panda$collections$Key*) t1370));
                    if (((panda$core$Bit) { cl1372->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1379 = t1370;
                            org$pandalanguage$pandac$Type* $tmp1382 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1370, cl1372->rawSuper);
                            $tmp1381 = $tmp1382;
                            $tmp1380 = $tmp1381;
                            t1370 = $tmp1380;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1380));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1379));
                        }
                        {
                            $tmp1383 = cl1372;
                            org$pandalanguage$pandac$ClassDecl* $tmp1386 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1370);
                            $tmp1385 = $tmp1386;
                            $tmp1384 = $tmp1385;
                            cl1372 = $tmp1384;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1384));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1383));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1387 = cl1372;
                            $tmp1388 = NULL;
                            cl1372 = $tmp1388;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1388));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1387));
                        }
                    }
                    }
                }
                goto $l1376;
                $l1377:;
                {
                    $tmp1389 = t1370;
                    $tmp1390 = p_other;
                    t1370 = $tmp1390;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1390));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1389));
                }
                {
                    $tmp1391 = cl1372;
                    org$pandalanguage$pandac$ClassDecl* $tmp1394 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t21354);
                    $tmp1393 = $tmp1394;
                    $tmp1392 = $tmp1393;
                    cl1372 = $tmp1392;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1392));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1393));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1391));
                }
                $l1395:;
                bool $tmp1397 = ((panda$core$Bit) { cl1372 != NULL }).value;
                if (!$tmp1397) goto $l1396;
                {
                    panda$core$Bit $tmp1398 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(ancestors1366, ((panda$collections$Key*) t1370));
                    if ($tmp1398.value) {
                    {
                        $tmp1399 = t1370;
                        $returnValue1230 = $tmp1399;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1399));
                        $tmp1365 = 0;
                        goto $l1363;
                        $l1400:;
                        $tmp1228 = 15;
                        goto $l1226;
                        $l1401:;
                        return $returnValue1230;
                    }
                    }
                    if (((panda$core$Bit) { cl1372->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1403 = t1370;
                            org$pandalanguage$pandac$Type* $tmp1406 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1370, cl1372->rawSuper);
                            $tmp1405 = $tmp1406;
                            $tmp1404 = $tmp1405;
                            t1370 = $tmp1404;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1404));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1405));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1403));
                        }
                        {
                            $tmp1407 = cl1372;
                            org$pandalanguage$pandac$ClassDecl* $tmp1410 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1370);
                            $tmp1409 = $tmp1410;
                            $tmp1408 = $tmp1409;
                            cl1372 = $tmp1408;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1408));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1409));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1407));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1411 = cl1372;
                            $tmp1412 = NULL;
                            cl1372 = $tmp1412;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1412));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1411));
                        }
                    }
                    }
                }
                goto $l1395;
                $l1396:;
            }
            $tmp1365 = -1;
            goto $l1363;
            $l1363:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1372));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1370));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors1366));
            ancestors1366 = NULL;
            t1370 = NULL;
            cl1372 = NULL;
            switch ($tmp1365) {
                case 0: goto $l1400;
                case -1: goto $l1413;
            }
            $l1413:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1416 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp1415 = $tmp1416;
        $tmp1414 = $tmp1415;
        $returnValue1230 = $tmp1414;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1414));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1415));
        $tmp1228 = 16;
        goto $l1226;
        $l1417:;
        return $returnValue1230;
    }
    $l1226:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t21354));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t11350));
    t11350 = NULL;
    t21354 = NULL;
    switch ($tmp1228) {
        case 1: goto $l1240;
        case 2: goto $l1245;
        case 6: goto $l1276;
        case 9: goto $l1300;
        case 16: goto $l1417;
        case 13: goto $l1336;
        case 10: goto $l1311;
        case 7: goto $l1287;
        case 8: goto $l1295;
        case 12: goto $l1324;
        case 3: goto $l1253;
        case 15: goto $l1401;
        case 4: goto $l1258;
        case 0: goto $l1232;
        case 5: goto $l1267;
        case 14: goto $l1348;
        case 11: goto $l1319;
    }
    $l1419:;
    if (false) goto $l1420; else goto $l1421;
    $l1421:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1422, (panda$core$Int64) { 515 }, &$s1423);
    abort();
    $l1420:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    panda$core$Int64 $tmp1427;
    panda$core$Int64 $tmp1437;
    org$pandalanguage$pandac$Type* $returnValue1439;
    org$pandalanguage$pandac$Type* $tmp1440;
    org$pandalanguage$pandac$Type$Kind $match$605_91443;
    panda$core$Int64 $tmp1444;
    org$pandalanguage$pandac$Type* found1449 = NULL;
    org$pandalanguage$pandac$Type* $tmp1450;
    panda$core$Object* $tmp1451;
    org$pandalanguage$pandac$Type* $tmp1453;
    org$pandalanguage$pandac$Type* $tmp1457;
    panda$core$Int64 $tmp1462;
    org$pandalanguage$pandac$Type* base1467 = NULL;
    org$pandalanguage$pandac$Type* $tmp1468;
    org$pandalanguage$pandac$Type* $tmp1469;
    panda$core$Object* $tmp1470;
    panda$core$Int64 $tmp1471;
    panda$collections$Array* remappedArgs1474 = NULL;
    panda$collections$Array* $tmp1475;
    panda$collections$Array* $tmp1476;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1478;
    panda$core$Int64 $tmp1479;
    panda$core$Bit $tmp1484;
    org$pandalanguage$pandac$Type* $tmp1498;
    panda$core$Object* $tmp1499;
    org$pandalanguage$pandac$Type* $tmp1508;
    org$pandalanguage$pandac$Type* $tmp1509;
    panda$core$Int64 $tmp1515;
    org$pandalanguage$pandac$Type* $tmp1517;
    org$pandalanguage$pandac$Type* $tmp1518;
    org$pandalanguage$pandac$Type* $tmp1519;
    panda$core$Object* $tmp1520;
    panda$core$Int64 $tmp1521;
    panda$core$Int64 $tmp1530;
    panda$core$Int64 $tmp1533;
    panda$core$Int64 $tmp1537;
    panda$core$Int64 $tmp1541;
    panda$collections$Array* parameters1547 = NULL;
    panda$collections$Array* $tmp1548;
    panda$collections$Array* $tmp1549;
    panda$core$Int64 $tmp1555;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1560;
    panda$core$Int64 $tmp1561;
    panda$core$Int64 $tmp1566;
    panda$core$Bit $tmp1568;
    org$pandalanguage$pandac$Type* $tmp1582;
    panda$core$Object* $tmp1583;
    org$pandalanguage$pandac$Type* $tmp1592;
    org$pandalanguage$pandac$Type* $tmp1593;
    org$pandalanguage$pandac$Type* $tmp1594;
    panda$core$Object* $tmp1595;
    panda$core$Int64 $tmp1600;
    org$pandalanguage$pandac$Type* $tmp1609;
    panda$core$Int64 $tmp1617;
    int $tmp1426;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1427, 6);
        panda$core$Bit $tmp1428 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1427);
        if ($tmp1428.value) goto $l1429; else goto $l1430;
        $l1430:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1431, (panda$core$Int64) { 601 }, &$s1432);
        abort();
        $l1429:;
        ITable* $tmp1433 = ((panda$collections$MapView*) p_types)->$class->itable;
        while ($tmp1433->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp1433 = $tmp1433->next;
        }
        $fn1435 $tmp1434 = $tmp1433->methods[0];
        panda$core$Int64 $tmp1436 = $tmp1434(((panda$collections$MapView*) p_types));
        panda$core$Int64$init$builtin_int64(&$tmp1437, 0);
        panda$core$Bit $tmp1438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1436, $tmp1437);
        if ($tmp1438.value) {
        {
            $tmp1440 = self;
            $returnValue1439 = $tmp1440;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1440));
            $tmp1426 = 0;
            goto $l1424;
            $l1441:;
            return $returnValue1439;
        }
        }
        {
            $match$605_91443 = self->typeKind;
            panda$core$Int64$init$builtin_int64(&$tmp1444, 12);
            panda$core$Bit $tmp1445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91443.$rawValue, $tmp1444);
            if ($tmp1445.value) {
            {
                int $tmp1448;
                {
                    panda$core$Object* $tmp1452 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                    $tmp1451 = $tmp1452;
                    $tmp1450 = ((org$pandalanguage$pandac$Type*) $tmp1451);
                    found1449 = $tmp1450;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1450));
                    panda$core$Panda$unref$panda$core$Object($tmp1451);
                    if (((panda$core$Bit) { found1449 != NULL }).value) {
                    {
                        $tmp1453 = found1449;
                        $returnValue1439 = $tmp1453;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1453));
                        $tmp1448 = 0;
                        goto $l1446;
                        $l1454:;
                        $tmp1426 = 1;
                        goto $l1424;
                        $l1455:;
                        return $returnValue1439;
                    }
                    }
                    $tmp1457 = self;
                    $returnValue1439 = $tmp1457;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1457));
                    $tmp1448 = 1;
                    goto $l1446;
                    $l1458:;
                    $tmp1426 = 2;
                    goto $l1424;
                    $l1459:;
                    return $returnValue1439;
                }
                $l1446:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found1449));
                found1449 = NULL;
                switch ($tmp1448) {
                    case 0: goto $l1454;
                    case 1: goto $l1458;
                }
                $l1461:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1462, 11);
            panda$core$Bit $tmp1463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91443.$rawValue, $tmp1462);
            if ($tmp1463.value) {
            {
                int $tmp1466;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1471, 0);
                    panda$core$Object* $tmp1472 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1471);
                    $tmp1470 = $tmp1472;
                    org$pandalanguage$pandac$Type* $tmp1473 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1470), p_types);
                    $tmp1469 = $tmp1473;
                    $tmp1468 = $tmp1469;
                    base1467 = $tmp1468;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1468));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1469));
                    panda$core$Panda$unref$panda$core$Object($tmp1470);
                    panda$collections$Array* $tmp1477 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1477);
                    $tmp1476 = $tmp1477;
                    $tmp1475 = $tmp1476;
                    remappedArgs1474 = $tmp1475;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1475));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
                    panda$core$Int64$init$builtin_int64(&$tmp1479, 1);
                    ITable* $tmp1480 = ((panda$collections$CollectionView*) self->subtypes)->$class->itable;
                    while ($tmp1480->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1480 = $tmp1480->next;
                    }
                    $fn1482 $tmp1481 = $tmp1480->methods[0];
                    panda$core$Int64 $tmp1483 = $tmp1481(((panda$collections$CollectionView*) self->subtypes));
                    panda$core$Bit$init$builtin_bit(&$tmp1484, false);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1478, $tmp1479, $tmp1483, $tmp1484);
                    int64_t $tmp1486 = $tmp1478.min.value;
                    panda$core$Int64 i1485 = { $tmp1486 };
                    int64_t $tmp1488 = $tmp1478.max.value;
                    bool $tmp1489 = $tmp1478.inclusive.value;
                    if ($tmp1489) goto $l1496; else goto $l1497;
                    $l1496:;
                    if ($tmp1486 <= $tmp1488) goto $l1490; else goto $l1492;
                    $l1497:;
                    if ($tmp1486 < $tmp1488) goto $l1490; else goto $l1492;
                    $l1490:;
                    {
                        panda$core$Object* $tmp1500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1485);
                        $tmp1499 = $tmp1500;
                        org$pandalanguage$pandac$Type* $tmp1501 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1499), p_types);
                        $tmp1498 = $tmp1501;
                        panda$collections$Array$add$panda$collections$Array$T(remappedArgs1474, ((panda$core$Object*) $tmp1498));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1498));
                        panda$core$Panda$unref$panda$core$Object($tmp1499);
                    }
                    $l1493:;
                    int64_t $tmp1503 = $tmp1488 - i1485.value;
                    if ($tmp1489) goto $l1504; else goto $l1505;
                    $l1504:;
                    if ((uint64_t) $tmp1503 >= 1) goto $l1502; else goto $l1492;
                    $l1505:;
                    if ((uint64_t) $tmp1503 > 1) goto $l1502; else goto $l1492;
                    $l1502:;
                    i1485.value += 1;
                    goto $l1490;
                    $l1492:;
                    org$pandalanguage$pandac$Type* $tmp1510 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base1467, ((panda$collections$ListView*) remappedArgs1474));
                    $tmp1509 = $tmp1510;
                    $tmp1508 = $tmp1509;
                    $returnValue1439 = $tmp1508;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1508));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1509));
                    $tmp1466 = 0;
                    goto $l1464;
                    $l1511:;
                    $tmp1426 = 3;
                    goto $l1424;
                    $l1512:;
                    return $returnValue1439;
                }
                $l1464:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remappedArgs1474));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1467));
                base1467 = NULL;
                remappedArgs1474 = NULL;
                switch ($tmp1466) {
                    case 0: goto $l1511;
                }
                $l1514:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1515, 1);
            panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91443.$rawValue, $tmp1515);
            if ($tmp1516.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp1521, 0);
                panda$core$Object* $tmp1522 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1521);
                $tmp1520 = $tmp1522;
                org$pandalanguage$pandac$Type* $tmp1523 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1520), p_types);
                $tmp1519 = $tmp1523;
                org$pandalanguage$pandac$Type* $tmp1524 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1519);
                $tmp1518 = $tmp1524;
                $tmp1517 = $tmp1518;
                $returnValue1439 = $tmp1517;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1517));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1518));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1519));
                panda$core$Panda$unref$panda$core$Object($tmp1520);
                $tmp1426 = 4;
                goto $l1424;
                $l1525:;
                return $returnValue1439;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1530, 15);
            panda$core$Bit $tmp1531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91443.$rawValue, $tmp1530);
            bool $tmp1529 = $tmp1531.value;
            if ($tmp1529) goto $l1532;
            panda$core$Int64$init$builtin_int64(&$tmp1533, 14);
            panda$core$Bit $tmp1534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91443.$rawValue, $tmp1533);
            $tmp1529 = $tmp1534.value;
            $l1532:;
            panda$core$Bit $tmp1535 = { $tmp1529 };
            bool $tmp1528 = $tmp1535.value;
            if ($tmp1528) goto $l1536;
            panda$core$Int64$init$builtin_int64(&$tmp1537, 17);
            panda$core$Bit $tmp1538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91443.$rawValue, $tmp1537);
            $tmp1528 = $tmp1538.value;
            $l1536:;
            panda$core$Bit $tmp1539 = { $tmp1528 };
            bool $tmp1527 = $tmp1539.value;
            if ($tmp1527) goto $l1540;
            panda$core$Int64$init$builtin_int64(&$tmp1541, 16);
            panda$core$Bit $tmp1542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91443.$rawValue, $tmp1541);
            $tmp1527 = $tmp1542.value;
            $l1540:;
            panda$core$Bit $tmp1543 = { $tmp1527 };
            if ($tmp1543.value) {
            {
                int $tmp1546;
                {
                    panda$collections$Array* $tmp1550 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1550);
                    $tmp1549 = $tmp1550;
                    $tmp1548 = $tmp1549;
                    parameters1547 = $tmp1548;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1548));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1549));
                    ITable* $tmp1551 = ((panda$collections$CollectionView*) self->subtypes)->$class->itable;
                    while ($tmp1551->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1551 = $tmp1551->next;
                    }
                    $fn1553 $tmp1552 = $tmp1551->methods[0];
                    panda$core$Int64 $tmp1554 = $tmp1552(((panda$collections$CollectionView*) self->subtypes));
                    panda$core$Int64$init$builtin_int64(&$tmp1555, 1);
                    panda$core$Bit $tmp1556 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1554, $tmp1555);
                    if ($tmp1556.value) goto $l1557; else goto $l1558;
                    $l1558:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1559, (panda$core$Int64) { 623 });
                    abort();
                    $l1557:;
                    panda$core$Int64$init$builtin_int64(&$tmp1561, 0);
                    ITable* $tmp1562 = ((panda$collections$CollectionView*) self->subtypes)->$class->itable;
                    while ($tmp1562->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1562 = $tmp1562->next;
                    }
                    $fn1564 $tmp1563 = $tmp1562->methods[0];
                    panda$core$Int64 $tmp1565 = $tmp1563(((panda$collections$CollectionView*) self->subtypes));
                    panda$core$Int64$init$builtin_int64(&$tmp1566, 1);
                    panda$core$Int64 $tmp1567 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1565, $tmp1566);
                    panda$core$Bit$init$builtin_bit(&$tmp1568, false);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1560, $tmp1561, $tmp1567, $tmp1568);
                    int64_t $tmp1570 = $tmp1560.min.value;
                    panda$core$Int64 i1569 = { $tmp1570 };
                    int64_t $tmp1572 = $tmp1560.max.value;
                    bool $tmp1573 = $tmp1560.inclusive.value;
                    if ($tmp1573) goto $l1580; else goto $l1581;
                    $l1580:;
                    if ($tmp1570 <= $tmp1572) goto $l1574; else goto $l1576;
                    $l1581:;
                    if ($tmp1570 < $tmp1572) goto $l1574; else goto $l1576;
                    $l1574:;
                    {
                        panda$core$Object* $tmp1584 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1569);
                        $tmp1583 = $tmp1584;
                        org$pandalanguage$pandac$Type* $tmp1585 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1583), p_types);
                        $tmp1582 = $tmp1585;
                        panda$collections$Array$add$panda$collections$Array$T(parameters1547, ((panda$core$Object*) $tmp1582));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1582));
                        panda$core$Panda$unref$panda$core$Object($tmp1583);
                    }
                    $l1577:;
                    int64_t $tmp1587 = $tmp1572 - i1569.value;
                    if ($tmp1573) goto $l1588; else goto $l1589;
                    $l1588:;
                    if ((uint64_t) $tmp1587 >= 1) goto $l1586; else goto $l1576;
                    $l1589:;
                    if ((uint64_t) $tmp1587 > 1) goto $l1586; else goto $l1576;
                    $l1586:;
                    i1569.value += 1;
                    goto $l1574;
                    $l1576:;
                    ITable* $tmp1596 = ((panda$collections$CollectionView*) self->subtypes)->$class->itable;
                    while ($tmp1596->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1596 = $tmp1596->next;
                    }
                    $fn1598 $tmp1597 = $tmp1596->methods[0];
                    panda$core$Int64 $tmp1599 = $tmp1597(((panda$collections$CollectionView*) self->subtypes));
                    panda$core$Int64$init$builtin_int64(&$tmp1600, 1);
                    panda$core$Int64 $tmp1601 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1599, $tmp1600);
                    panda$core$Object* $tmp1602 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1601);
                    $tmp1595 = $tmp1602;
                    org$pandalanguage$pandac$Type* $tmp1603 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1595), p_types);
                    $tmp1594 = $tmp1603;
                    org$pandalanguage$pandac$Type* $tmp1604 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->position, self->typeKind, ((panda$collections$ListView*) parameters1547), $tmp1594);
                    $tmp1593 = $tmp1604;
                    $tmp1592 = $tmp1593;
                    $returnValue1439 = $tmp1592;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1592));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1593));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1594));
                    panda$core$Panda$unref$panda$core$Object($tmp1595);
                    $tmp1546 = 0;
                    goto $l1544;
                    $l1605:;
                    $tmp1426 = 5;
                    goto $l1424;
                    $l1606:;
                    return $returnValue1439;
                }
                $l1544:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1547));
                parameters1547 = NULL;
                switch ($tmp1546) {
                    case 0: goto $l1605;
                }
                $l1608:;
            }
            }
            else {
            {
                $tmp1609 = self;
                $returnValue1439 = $tmp1609;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1609));
                $tmp1426 = 6;
                goto $l1424;
                $l1610:;
                return $returnValue1439;
            }
            }
            }
            }
            }
        }
        if (false) goto $l1612; else goto $l1613;
        $l1613:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1614, (panda$core$Int64) { 601 }, &$s1615);
        abort();
        $l1612:;
    }
    $tmp1426 = -1;
    goto $l1424;
    $l1424:;
    panda$core$Int64$init$builtin_int64(&$tmp1617, 6);
    panda$core$Bit $tmp1618 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($returnValue1439->typeKind.$rawValue, $tmp1617);
    if ($tmp1618.value) goto $l1619; else goto $l1620;
    $l1620:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1621, (panda$core$Int64) { 601 }, &$s1622);
    abort();
    $l1619:;
    switch ($tmp1426) {
        case 3: goto $l1512;
        case 5: goto $l1606;
        case 0: goto $l1441;
        case 2: goto $l1459;
        case 4: goto $l1525;
        case 6: goto $l1610;
        case 1: goto $l1455;
        case -1: goto $l1616;
    }
    $l1616:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue1623;
    panda$core$Int64 $tmp1624 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $returnValue1623 = $tmp1624;
    return $returnValue1623;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $returnValue1626;
    panda$core$String* $tmp1627;
    $tmp1627 = self->name;
    $returnValue1626 = $tmp1627;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1627));
    return $returnValue1626;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1631;
    {
    }
    $tmp1631 = -1;
    goto $l1629;
    $l1629:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1631) {
        case -1: goto $l1632;
    }
    $l1632:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

