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
typedef panda$collections$Iterator* (*$fn266)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn273)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn284)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn356)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1180)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1391)(panda$collections$MapView*);
typedef panda$core$Int64 (*$fn1438)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1509)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1520)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1554)(panda$collections$CollectionView*);

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
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5895082338763246016, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static panda$core$String $s717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -1180377256514028899, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s950 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 106, -1489654704582770111, NULL };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 180, -8366325379630919520, NULL };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 181, -4388988894214124261, NULL };

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
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type$Kind p_kind, panda$collections$ListView* p_parameterTypes, org$pandalanguage$pandac$Type* p_returnType) {
    panda$core$Bit resolved245;
    panda$core$MutableString* name246 = NULL;
    panda$core$MutableString* $tmp247;
    panda$core$MutableString* $tmp248;
    panda$collections$Array* subtypes251 = NULL;
    panda$collections$Array* $tmp252;
    panda$collections$Array* $tmp253;
    panda$core$String* separator255 = NULL;
    panda$core$String* $tmp256;
    panda$collections$Iterator* Iter$121$9261 = NULL;
    panda$collections$Iterator* $tmp262;
    panda$collections$Iterator* $tmp263;
    org$pandalanguage$pandac$Type* p279 = NULL;
    org$pandalanguage$pandac$Type* $tmp280;
    panda$core$Object* $tmp281;
    panda$core$String* $tmp289;
    panda$core$String* $tmp290;
    org$pandalanguage$pandac$Type$Kind $match$128_9294;
    panda$core$Int64 $tmp295;
    panda$core$Int64 $tmp298;
    panda$core$Int64 $tmp301;
    panda$core$Int64 $tmp304;
    panda$core$Bit $tmp307;
    org$pandalanguage$pandac$Type* $tmp311;
    panda$core$Char8 $tmp314;
    panda$core$UInt8 $tmp315;
    org$pandalanguage$pandac$Type* $returnValue316;
    org$pandalanguage$pandac$Type* $tmp317;
    org$pandalanguage$pandac$Type* $tmp318;
    panda$core$String* $tmp320;
    panda$collections$ImmutableArray* $tmp322;
    int $tmp244;
    {
        resolved245 = p_returnType->resolved;
        panda$core$MutableString* $tmp249 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp249, &$s250);
        $tmp248 = $tmp249;
        $tmp247 = $tmp248;
        name246 = $tmp247;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp247));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
        panda$collections$Array* $tmp254 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp254);
        $tmp253 = $tmp254;
        $tmp252 = $tmp253;
        subtypes251 = $tmp252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp252));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp253));
        $tmp256 = &$s257;
        separator255 = $tmp256;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
        {
            int $tmp260;
            {
                ITable* $tmp264 = ((panda$collections$Iterable*) p_parameterTypes)->$class->itable;
                while ($tmp264->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp264 = $tmp264->next;
                }
                $fn266 $tmp265 = $tmp264->methods[0];
                panda$collections$Iterator* $tmp267 = $tmp265(((panda$collections$Iterable*) p_parameterTypes));
                $tmp263 = $tmp267;
                $tmp262 = $tmp263;
                Iter$121$9261 = $tmp262;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
                $l268:;
                ITable* $tmp271 = Iter$121$9261->$class->itable;
                while ($tmp271->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp271 = $tmp271->next;
                }
                $fn273 $tmp272 = $tmp271->methods[0];
                panda$core$Bit $tmp274 = $tmp272(Iter$121$9261);
                panda$core$Bit $tmp275 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp274);
                bool $tmp270 = $tmp275.value;
                if (!$tmp270) goto $l269;
                {
                    int $tmp278;
                    {
                        ITable* $tmp282 = Iter$121$9261->$class->itable;
                        while ($tmp282->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp282 = $tmp282->next;
                        }
                        $fn284 $tmp283 = $tmp282->methods[1];
                        panda$core$Object* $tmp285 = $tmp283(Iter$121$9261);
                        $tmp281 = $tmp285;
                        $tmp280 = ((org$pandalanguage$pandac$Type*) $tmp281);
                        p279 = $tmp280;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp280));
                        panda$core$Panda$unref$panda$core$Object($tmp281);
                        panda$collections$Array$add$panda$collections$Array$T(subtypes251, ((panda$core$Object*) p279));
                        bool $tmp286 = resolved245.value;
                        if (!$tmp286) goto $l287;
                        $tmp286 = p279->resolved.value;
                        $l287:;
                        panda$core$Bit $tmp288 = { $tmp286 };
                        resolved245 = $tmp288;
                        panda$core$MutableString$append$panda$core$String(name246, separator255);
                        panda$core$MutableString$append$panda$core$String(name246, ((org$pandalanguage$pandac$Symbol*) p279)->name);
                        {
                            $tmp289 = separator255;
                            $tmp290 = &$s291;
                            separator255 = $tmp290;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
                        }
                    }
                    $tmp278 = -1;
                    goto $l276;
                    $l276:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p279));
                    p279 = NULL;
                    switch ($tmp278) {
                        case -1: goto $l292;
                    }
                    $l292:;
                }
                goto $l268;
                $l269:;
            }
            $tmp260 = -1;
            goto $l258;
            $l258:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$121$9261));
            Iter$121$9261 = NULL;
            switch ($tmp260) {
                case -1: goto $l293;
            }
            $l293:;
        }
        {
            $match$128_9294 = p_kind;
            panda$core$Int64$init$builtin_int64(&$tmp295, 14);
            panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9294.$rawValue, $tmp295);
            if ($tmp296.value) {
            {
                panda$core$MutableString$append$panda$core$String(name246, &$s297);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp298, 15);
            panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9294.$rawValue, $tmp298);
            if ($tmp299.value) {
            {
                panda$core$MutableString$append$panda$core$String(name246, &$s300);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp301, 16);
            panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9294.$rawValue, $tmp301);
            if ($tmp302.value) {
            {
                panda$core$MutableString$append$panda$core$String(name246, &$s303);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp304, 17);
            panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9294.$rawValue, $tmp304);
            if ($tmp305.value) {
            {
                panda$core$MutableString$append$panda$core$String(name246, &$s306);
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp307, false);
                if ($tmp307.value) goto $l308; else goto $l309;
                $l309:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s310, (panda$core$Int64) { 138 });
                abort();
                $l308:;
            }
            }
            }
            }
            }
        }
        panda$collections$Array$add$panda$collections$Array$T(subtypes251, ((panda$core$Object*) p_returnType));
        org$pandalanguage$pandac$Type* $tmp312 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp311 = $tmp312;
        panda$core$Bit $tmp313 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_returnType, $tmp311);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp311));
        if ($tmp313.value) {
        {
            panda$core$MutableString$append$panda$core$String(name246, ((org$pandalanguage$pandac$Symbol*) p_returnType)->name);
        }
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp315, 41);
        panda$core$Char8$init$panda$core$UInt8(&$tmp314, $tmp315);
        panda$core$MutableString$append$panda$core$Char8(name246, $tmp314);
        org$pandalanguage$pandac$Type* $tmp319 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp321 = panda$core$MutableString$finish$R$panda$core$String(name246);
        $tmp320 = $tmp321;
        panda$collections$ImmutableArray* $tmp323 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes251);
        $tmp322 = $tmp323;
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp319, $tmp320, p_kind, p_position, ((panda$collections$ListView*) $tmp322), resolved245);
        $tmp318 = $tmp319;
        $tmp317 = $tmp318;
        $returnValue316 = $tmp317;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
        $tmp244 = 0;
        goto $l242;
        $l324:;
        return $returnValue316;
    }
    $l242:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator255));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes251));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name246));
    name246 = NULL;
    subtypes251 = NULL;
    separator255 = NULL;
    switch ($tmp244) {
        case 0: goto $l324;
    }
    $l326:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp329;
    panda$core$Int64 $tmp332;
    panda$core$Int64 $tmp336;
    panda$core$String* $tmp342;
    panda$core$String* $tmp343;
    panda$core$Int64 $returnValue348;
    panda$core$Int64$init$builtin_int64(&$tmp329, 2);
    panda$core$Bit $tmp330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp329);
    bool $tmp328 = $tmp330.value;
    if ($tmp328) goto $l331;
    panda$core$Int64$init$builtin_int64(&$tmp332, 3);
    panda$core$Bit $tmp333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp332);
    $tmp328 = $tmp333.value;
    $l331:;
    panda$core$Bit $tmp334 = { $tmp328 };
    bool $tmp327 = $tmp334.value;
    if ($tmp327) goto $l335;
    panda$core$Int64$init$builtin_int64(&$tmp336, 10);
    panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp336);
    $tmp327 = $tmp337.value;
    $l335:;
    panda$core$Bit $tmp338 = { $tmp327 };
    if ($tmp338.value) goto $l339; else goto $l340;
    $l340:;
    panda$core$String* $tmp345 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s344, ((panda$core$Object*) self));
    $tmp343 = $tmp345;
    panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, &$s346);
    $tmp342 = $tmp347;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s341, (panda$core$Int64) { 149 }, $tmp342);
    abort();
    $l339:;
    $returnValue348 = self->position.line;
    return $returnValue348;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue350;
    panda$core$Bit $tmp351 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue350 = $tmp351;
    return $returnValue350;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue353;
    ITable* $tmp354 = ((panda$core$Equatable*) self->name)->$class->itable;
    while ($tmp354->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp354 = $tmp354->next;
    }
    $fn356 $tmp355 = $tmp354->methods[1];
    panda$core$Bit $tmp357 = $tmp355(((panda$core$Equatable*) self->name), ((panda$core$Equatable*) ((org$pandalanguage$pandac$Symbol*) p_other)->name));
    $returnValue353 = $tmp357;
    return $returnValue353;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue359;
    org$pandalanguage$pandac$Type* $tmp360;
    org$pandalanguage$pandac$Type* $tmp361;
    org$pandalanguage$pandac$Type$Kind $tmp364;
    panda$core$Int64 $tmp365;
    org$pandalanguage$pandac$Position $tmp366;
    panda$core$Bit $tmp367;
    org$pandalanguage$pandac$Type* $tmp362 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp365, 4);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp364, $tmp365);
    org$pandalanguage$pandac$Position$init(&$tmp366);
    panda$core$Bit$init$builtin_bit(&$tmp367, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp362, &$s363, $tmp364, $tmp366, $tmp367);
    $tmp361 = $tmp362;
    $tmp360 = $tmp361;
    $returnValue359 = $tmp360;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp360));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp361));
    return $returnValue359;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue369;
    org$pandalanguage$pandac$Type* $tmp370;
    org$pandalanguage$pandac$Type* $tmp371;
    org$pandalanguage$pandac$Type$Kind $tmp374;
    panda$core$Int64 $tmp375;
    org$pandalanguage$pandac$Position $tmp376;
    panda$core$Bit $tmp377;
    org$pandalanguage$pandac$Type* $tmp372 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp375, 13);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp374, $tmp375);
    org$pandalanguage$pandac$Position$init(&$tmp376);
    panda$core$Bit$init$builtin_bit(&$tmp377, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp372, &$s373, $tmp374, $tmp376, $tmp377);
    $tmp371 = $tmp372;
    $tmp370 = $tmp371;
    $returnValue369 = $tmp370;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp370));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp371));
    return $returnValue369;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue379;
    org$pandalanguage$pandac$Type* $tmp380;
    org$pandalanguage$pandac$Type* $tmp381;
    org$pandalanguage$pandac$Type$Kind $tmp384;
    panda$core$Int64 $tmp385;
    org$pandalanguage$pandac$Position $tmp386;
    panda$core$Bit $tmp387;
    org$pandalanguage$pandac$Type* $tmp382 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp385, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp384, $tmp385);
    org$pandalanguage$pandac$Position$init(&$tmp386);
    panda$core$Bit$init$builtin_bit(&$tmp387, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp382, &$s383, $tmp384, $tmp386, $tmp387);
    $tmp381 = $tmp382;
    $tmp380 = $tmp381;
    $returnValue379 = $tmp380;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
    return $returnValue379;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes392 = NULL;
    panda$collections$Array* $tmp393;
    panda$collections$Array* $tmp394;
    org$pandalanguage$pandac$Type* $tmp396;
    org$pandalanguage$pandac$Type* $returnValue398;
    org$pandalanguage$pandac$Type* $tmp399;
    org$pandalanguage$pandac$Type* $tmp400;
    org$pandalanguage$pandac$Type$Kind $tmp403;
    panda$core$Int64 $tmp404;
    org$pandalanguage$pandac$Position $tmp405;
    panda$core$Bit $tmp406;
    int $tmp391;
    {
        panda$collections$Array* $tmp395 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp395);
        $tmp394 = $tmp395;
        $tmp393 = $tmp394;
        subtypes392 = $tmp393;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp393));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
        org$pandalanguage$pandac$Type* $tmp397 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp396 = $tmp397;
        panda$collections$Array$add$panda$collections$Array$T(subtypes392, ((panda$core$Object*) $tmp396));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
        org$pandalanguage$pandac$Type* $tmp401 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp404, 1);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp403, $tmp404);
        org$pandalanguage$pandac$Position$init(&$tmp405);
        panda$core$Bit$init$builtin_bit(&$tmp406, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp401, &$s402, $tmp403, $tmp405, ((panda$collections$ListView*) subtypes392), $tmp406);
        $tmp400 = $tmp401;
        $tmp399 = $tmp400;
        $returnValue398 = $tmp399;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp399));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp400));
        $tmp391 = 0;
        goto $l389;
        $l407:;
        return $returnValue398;
    }
    $l389:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes392));
    subtypes392 = NULL;
    switch ($tmp391) {
        case 0: goto $l407;
    }
    $l409:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue410;
    org$pandalanguage$pandac$Type* $tmp411;
    org$pandalanguage$pandac$Type* $tmp412;
    org$pandalanguage$pandac$Type$Kind $tmp415;
    panda$core$Int64 $tmp416;
    org$pandalanguage$pandac$Position $tmp417;
    panda$core$Bit $tmp418;
    org$pandalanguage$pandac$Type* $tmp413 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp416, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp415, $tmp416);
    org$pandalanguage$pandac$Position$init(&$tmp417);
    panda$core$Bit$init$builtin_bit(&$tmp418, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp413, &$s414, $tmp415, $tmp417, $tmp418);
    $tmp412 = $tmp413;
    $tmp411 = $tmp412;
    $returnValue410 = $tmp411;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp411));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
    return $returnValue410;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue420;
    org$pandalanguage$pandac$Type* $tmp421;
    org$pandalanguage$pandac$Type* $tmp422;
    org$pandalanguage$pandac$Type$Kind $tmp425;
    panda$core$Int64 $tmp426;
    org$pandalanguage$pandac$Position $tmp427;
    panda$core$Bit $tmp428;
    org$pandalanguage$pandac$Type* $tmp423 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp426, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp425, $tmp426);
    org$pandalanguage$pandac$Position$init(&$tmp427);
    panda$core$Bit$init$builtin_bit(&$tmp428, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp423, &$s424, $tmp425, $tmp427, $tmp428);
    $tmp422 = $tmp423;
    $tmp421 = $tmp422;
    $returnValue420 = $tmp421;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp421));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
    return $returnValue420;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue430;
    org$pandalanguage$pandac$Type* $tmp431;
    org$pandalanguage$pandac$Type* $tmp432;
    org$pandalanguage$pandac$Type$Kind $tmp435;
    panda$core$Int64 $tmp436;
    org$pandalanguage$pandac$Position $tmp437;
    panda$core$Bit $tmp438;
    org$pandalanguage$pandac$Type* $tmp433 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp436, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp435, $tmp436);
    org$pandalanguage$pandac$Position$init(&$tmp437);
    panda$core$Bit$init$builtin_bit(&$tmp438, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp433, &$s434, $tmp435, $tmp437, $tmp438);
    $tmp432 = $tmp433;
    $tmp431 = $tmp432;
    $returnValue430 = $tmp431;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp431));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
    return $returnValue430;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue440;
    org$pandalanguage$pandac$Type* $tmp441;
    org$pandalanguage$pandac$Type* $tmp442;
    org$pandalanguage$pandac$Type$Kind $tmp445;
    panda$core$Int64 $tmp446;
    org$pandalanguage$pandac$Position $tmp447;
    panda$core$Bit $tmp448;
    org$pandalanguage$pandac$Type* $tmp443 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp446, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp445, $tmp446);
    org$pandalanguage$pandac$Position$init(&$tmp447);
    panda$core$Bit$init$builtin_bit(&$tmp448, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp443, &$s444, $tmp445, $tmp447, $tmp448);
    $tmp442 = $tmp443;
    $tmp441 = $tmp442;
    $returnValue440 = $tmp441;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp441));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp442));
    return $returnValue440;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RegularExpression$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue450;
    org$pandalanguage$pandac$Type* $tmp451;
    org$pandalanguage$pandac$Type* $tmp452;
    org$pandalanguage$pandac$Type$Kind $tmp455;
    panda$core$Int64 $tmp456;
    org$pandalanguage$pandac$Position $tmp457;
    panda$core$Bit $tmp458;
    org$pandalanguage$pandac$Type* $tmp453 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp456, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp455, $tmp456);
    org$pandalanguage$pandac$Position$init(&$tmp457);
    panda$core$Bit$init$builtin_bit(&$tmp458, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp453, &$s454, $tmp455, $tmp457, $tmp458);
    $tmp452 = $tmp453;
    $tmp451 = $tmp452;
    $returnValue450 = $tmp451;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp451));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
    return $returnValue450;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue460;
    org$pandalanguage$pandac$Type* $tmp461;
    org$pandalanguage$pandac$Type* $tmp462;
    org$pandalanguage$pandac$Type$Kind $tmp465;
    panda$core$Int64 $tmp466;
    panda$core$Int64 $tmp467;
    org$pandalanguage$pandac$Type* $tmp463 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp466, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp465, $tmp466);
    panda$core$Int64$init$builtin_int64(&$tmp467, 8);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp463, &$s464, $tmp465, $tmp467);
    $tmp462 = $tmp463;
    $tmp461 = $tmp462;
    $returnValue460 = $tmp461;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp461));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp462));
    return $returnValue460;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue469;
    org$pandalanguage$pandac$Type* $tmp470;
    org$pandalanguage$pandac$Type* $tmp471;
    org$pandalanguage$pandac$Type$Kind $tmp474;
    panda$core$Int64 $tmp475;
    panda$core$Int64 $tmp476;
    org$pandalanguage$pandac$Type* $tmp472 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp475, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp474, $tmp475);
    panda$core$Int64$init$builtin_int64(&$tmp476, 16);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp472, &$s473, $tmp474, $tmp476);
    $tmp471 = $tmp472;
    $tmp470 = $tmp471;
    $returnValue469 = $tmp470;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp470));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
    return $returnValue469;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue478;
    org$pandalanguage$pandac$Type* $tmp479;
    org$pandalanguage$pandac$Type* $tmp480;
    org$pandalanguage$pandac$Type$Kind $tmp483;
    panda$core$Int64 $tmp484;
    panda$core$Int64 $tmp485;
    org$pandalanguage$pandac$Type* $tmp481 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp484, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp483, $tmp484);
    panda$core$Int64$init$builtin_int64(&$tmp485, 32);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp481, &$s482, $tmp483, $tmp485);
    $tmp480 = $tmp481;
    $tmp479 = $tmp480;
    $returnValue478 = $tmp479;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp479));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
    return $returnValue478;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue487;
    org$pandalanguage$pandac$Type* $tmp488;
    org$pandalanguage$pandac$Type* $tmp489;
    org$pandalanguage$pandac$Type$Kind $tmp492;
    panda$core$Int64 $tmp493;
    panda$core$Int64 $tmp494;
    org$pandalanguage$pandac$Type* $tmp490 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp493, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp492, $tmp493);
    panda$core$Int64$init$builtin_int64(&$tmp494, 64);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp490, &$s491, $tmp492, $tmp494);
    $tmp489 = $tmp490;
    $tmp488 = $tmp489;
    $returnValue487 = $tmp488;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp488));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
    return $returnValue487;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue496;
    org$pandalanguage$pandac$Type* $tmp497;
    org$pandalanguage$pandac$Type* $tmp498;
    org$pandalanguage$pandac$Type$Kind $tmp501;
    panda$core$Int64 $tmp502;
    panda$core$Int64 $tmp503;
    org$pandalanguage$pandac$Type* $tmp499 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp502, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp501, $tmp502);
    panda$core$Int64$init$builtin_int64(&$tmp503, 8);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp499, &$s500, $tmp501, $tmp503);
    $tmp498 = $tmp499;
    $tmp497 = $tmp498;
    $returnValue496 = $tmp497;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp497));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp498));
    return $returnValue496;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue505;
    org$pandalanguage$pandac$Type* $tmp506;
    org$pandalanguage$pandac$Type* $tmp507;
    org$pandalanguage$pandac$Type$Kind $tmp510;
    panda$core$Int64 $tmp511;
    panda$core$Int64 $tmp512;
    org$pandalanguage$pandac$Type* $tmp508 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp511, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp510, $tmp511);
    panda$core$Int64$init$builtin_int64(&$tmp512, 16);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp508, &$s509, $tmp510, $tmp512);
    $tmp507 = $tmp508;
    $tmp506 = $tmp507;
    $returnValue505 = $tmp506;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp506));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
    return $returnValue505;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue514;
    org$pandalanguage$pandac$Type* $tmp515;
    org$pandalanguage$pandac$Type* $tmp516;
    org$pandalanguage$pandac$Type$Kind $tmp519;
    panda$core$Int64 $tmp520;
    panda$core$Int64 $tmp521;
    org$pandalanguage$pandac$Type* $tmp517 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp520, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp519, $tmp520);
    panda$core$Int64$init$builtin_int64(&$tmp521, 32);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp517, &$s518, $tmp519, $tmp521);
    $tmp516 = $tmp517;
    $tmp515 = $tmp516;
    $returnValue514 = $tmp515;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp515));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
    return $returnValue514;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue523;
    org$pandalanguage$pandac$Type* $tmp524;
    org$pandalanguage$pandac$Type* $tmp525;
    org$pandalanguage$pandac$Type$Kind $tmp528;
    panda$core$Int64 $tmp529;
    panda$core$Int64 $tmp530;
    org$pandalanguage$pandac$Type* $tmp526 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp529, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp528, $tmp529);
    panda$core$Int64$init$builtin_int64(&$tmp530, 64);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp526, &$s527, $tmp528, $tmp530);
    $tmp525 = $tmp526;
    $tmp524 = $tmp525;
    $returnValue523 = $tmp524;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp524));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp525));
    return $returnValue523;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue532;
    org$pandalanguage$pandac$Type* $tmp533;
    org$pandalanguage$pandac$Type* $tmp534;
    org$pandalanguage$pandac$Type$Kind $tmp537;
    panda$core$Int64 $tmp538;
    panda$core$Int64 $tmp539;
    org$pandalanguage$pandac$Type* $tmp535 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp538, 10);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp537, $tmp538);
    panda$core$Int64$init$builtin_int64(&$tmp539, 32);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp535, &$s536, $tmp537, $tmp539);
    $tmp534 = $tmp535;
    $tmp533 = $tmp534;
    $returnValue532 = $tmp533;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp533));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
    return $returnValue532;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue541;
    org$pandalanguage$pandac$Type* $tmp542;
    org$pandalanguage$pandac$Type* $tmp543;
    org$pandalanguage$pandac$Type$Kind $tmp546;
    panda$core$Int64 $tmp547;
    panda$core$Int64 $tmp548;
    org$pandalanguage$pandac$Type* $tmp544 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp547, 10);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp546, $tmp547);
    panda$core$Int64$init$builtin_int64(&$tmp548, 64);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp544, &$s545, $tmp546, $tmp548);
    $tmp543 = $tmp544;
    $tmp542 = $tmp543;
    $returnValue541 = $tmp542;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp542));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
    return $returnValue541;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue550;
    org$pandalanguage$pandac$Type* $tmp551;
    org$pandalanguage$pandac$Type* $tmp552;
    org$pandalanguage$pandac$Type$Kind $tmp555;
    panda$core$Int64 $tmp556;
    org$pandalanguage$pandac$Position $tmp557;
    panda$core$Bit $tmp558;
    org$pandalanguage$pandac$Type* $tmp553 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp556, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp555, $tmp556);
    org$pandalanguage$pandac$Position$init(&$tmp557);
    panda$core$Bit$init$builtin_bit(&$tmp558, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp553, &$s554, $tmp555, $tmp557, $tmp558);
    $tmp552 = $tmp553;
    $tmp551 = $tmp552;
    $returnValue550 = $tmp551;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp551));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
    return $returnValue550;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue560;
    org$pandalanguage$pandac$Type* $tmp561;
    org$pandalanguage$pandac$Type* $tmp562;
    org$pandalanguage$pandac$Type$Kind $tmp565;
    panda$core$Int64 $tmp566;
    org$pandalanguage$pandac$Position $tmp567;
    panda$core$Bit $tmp568;
    org$pandalanguage$pandac$Type* $tmp563 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp566, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp565, $tmp566);
    org$pandalanguage$pandac$Position$init(&$tmp567);
    panda$core$Bit$init$builtin_bit(&$tmp568, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp563, &$s564, $tmp565, $tmp567, $tmp568);
    $tmp562 = $tmp563;
    $tmp561 = $tmp562;
    $returnValue560 = $tmp561;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp561));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp562));
    return $returnValue560;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue570;
    org$pandalanguage$pandac$Type* $tmp571;
    org$pandalanguage$pandac$Type* $tmp572;
    org$pandalanguage$pandac$Type$Kind $tmp575;
    panda$core$Int64 $tmp576;
    org$pandalanguage$pandac$Position $tmp577;
    panda$core$Bit $tmp578;
    org$pandalanguage$pandac$Type* $tmp573 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp576, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp575, $tmp576);
    org$pandalanguage$pandac$Position$init(&$tmp577);
    panda$core$Bit$init$builtin_bit(&$tmp578, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp573, &$s574, $tmp575, $tmp577, $tmp578);
    $tmp572 = $tmp573;
    $tmp571 = $tmp572;
    $returnValue570 = $tmp571;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp571));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
    return $returnValue570;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue580;
    org$pandalanguage$pandac$Type* $tmp581;
    org$pandalanguage$pandac$Type* $tmp582;
    org$pandalanguage$pandac$Type$Kind $tmp585;
    panda$core$Int64 $tmp586;
    org$pandalanguage$pandac$Position $tmp587;
    panda$core$Bit $tmp588;
    org$pandalanguage$pandac$Type* $tmp583 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp586, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp585, $tmp586);
    org$pandalanguage$pandac$Position$init(&$tmp587);
    panda$core$Bit$init$builtin_bit(&$tmp588, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp583, &$s584, $tmp585, $tmp587, $tmp588);
    $tmp582 = $tmp583;
    $tmp581 = $tmp582;
    $returnValue580 = $tmp581;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp581));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
    return $returnValue580;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue590;
    org$pandalanguage$pandac$Type* $tmp591;
    org$pandalanguage$pandac$Type* $tmp592;
    org$pandalanguage$pandac$Type$Kind $tmp595;
    panda$core$Int64 $tmp596;
    org$pandalanguage$pandac$Position $tmp597;
    panda$core$Bit $tmp598;
    org$pandalanguage$pandac$Type* $tmp593 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp596, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp595, $tmp596);
    org$pandalanguage$pandac$Position$init(&$tmp597);
    panda$core$Bit$init$builtin_bit(&$tmp598, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp593, &$s594, $tmp595, $tmp597, $tmp598);
    $tmp592 = $tmp593;
    $tmp591 = $tmp592;
    $returnValue590 = $tmp591;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp591));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
    return $returnValue590;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue600;
    org$pandalanguage$pandac$Type* $tmp601;
    org$pandalanguage$pandac$Type* $tmp602;
    org$pandalanguage$pandac$Type$Kind $tmp605;
    panda$core$Int64 $tmp606;
    org$pandalanguage$pandac$Position $tmp607;
    panda$core$Bit $tmp608;
    org$pandalanguage$pandac$Type* $tmp603 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp606, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp605, $tmp606);
    org$pandalanguage$pandac$Position$init(&$tmp607);
    panda$core$Bit$init$builtin_bit(&$tmp608, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp603, &$s604, $tmp605, $tmp607, $tmp608);
    $tmp602 = $tmp603;
    $tmp601 = $tmp602;
    $returnValue600 = $tmp601;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp601));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp602));
    return $returnValue600;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue610;
    org$pandalanguage$pandac$Type* $tmp611;
    org$pandalanguage$pandac$Type* $tmp612;
    org$pandalanguage$pandac$Type$Kind $tmp615;
    panda$core$Int64 $tmp616;
    org$pandalanguage$pandac$Position $tmp617;
    panda$core$Bit $tmp618;
    org$pandalanguage$pandac$Type* $tmp613 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp616, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp615, $tmp616);
    org$pandalanguage$pandac$Position$init(&$tmp617);
    panda$core$Bit$init$builtin_bit(&$tmp618, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp613, &$s614, $tmp615, $tmp617, $tmp618);
    $tmp612 = $tmp613;
    $tmp611 = $tmp612;
    $returnValue610 = $tmp611;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp611));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp612));
    return $returnValue610;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue620;
    org$pandalanguage$pandac$Type* $tmp621;
    org$pandalanguage$pandac$Type* $tmp622;
    org$pandalanguage$pandac$Type$Kind $tmp625;
    panda$core$Int64 $tmp626;
    org$pandalanguage$pandac$Position $tmp627;
    panda$core$Bit $tmp628;
    org$pandalanguage$pandac$Type* $tmp623 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp626, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp625, $tmp626);
    org$pandalanguage$pandac$Position$init(&$tmp627);
    panda$core$Bit$init$builtin_bit(&$tmp628, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp623, &$s624, $tmp625, $tmp627, $tmp628);
    $tmp622 = $tmp623;
    $tmp621 = $tmp622;
    $returnValue620 = $tmp621;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp621));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp622));
    return $returnValue620;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue630;
    org$pandalanguage$pandac$Type* $tmp631;
    org$pandalanguage$pandac$Type* $tmp632;
    org$pandalanguage$pandac$Type$Kind $tmp635;
    panda$core$Int64 $tmp636;
    org$pandalanguage$pandac$Position $tmp637;
    panda$core$Bit $tmp638;
    org$pandalanguage$pandac$Type* $tmp633 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp636, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp635, $tmp636);
    org$pandalanguage$pandac$Position$init(&$tmp637);
    panda$core$Bit$init$builtin_bit(&$tmp638, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp633, &$s634, $tmp635, $tmp637, $tmp638);
    $tmp632 = $tmp633;
    $tmp631 = $tmp632;
    $returnValue630 = $tmp631;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp631));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
    return $returnValue630;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue640;
    org$pandalanguage$pandac$Type* $tmp641;
    org$pandalanguage$pandac$Type* $tmp642;
    org$pandalanguage$pandac$Type$Kind $tmp645;
    panda$core$Int64 $tmp646;
    org$pandalanguage$pandac$Position $tmp647;
    panda$core$Bit $tmp648;
    org$pandalanguage$pandac$Type* $tmp643 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp646, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp645, $tmp646);
    org$pandalanguage$pandac$Position$init(&$tmp647);
    panda$core$Bit$init$builtin_bit(&$tmp648, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp643, &$s644, $tmp645, $tmp647, $tmp648);
    $tmp642 = $tmp643;
    $tmp641 = $tmp642;
    $returnValue640 = $tmp641;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp641));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
    return $returnValue640;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue650;
    org$pandalanguage$pandac$Type* $tmp651;
    org$pandalanguage$pandac$Type* $tmp652;
    org$pandalanguage$pandac$Type$Kind $tmp655;
    panda$core$Int64 $tmp656;
    org$pandalanguage$pandac$Position $tmp657;
    panda$core$Bit $tmp658;
    org$pandalanguage$pandac$Type* $tmp653 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp656, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp655, $tmp656);
    org$pandalanguage$pandac$Position$init(&$tmp657);
    panda$core$Bit$init$builtin_bit(&$tmp658, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp653, &$s654, $tmp655, $tmp657, $tmp658);
    $tmp652 = $tmp653;
    $tmp651 = $tmp652;
    $returnValue650 = $tmp651;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp651));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp652));
    return $returnValue650;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue660;
    org$pandalanguage$pandac$Type* $tmp661;
    org$pandalanguage$pandac$Type* $tmp662;
    org$pandalanguage$pandac$Type$Kind $tmp665;
    panda$core$Int64 $tmp666;
    org$pandalanguage$pandac$Position $tmp667;
    panda$core$Bit $tmp668;
    org$pandalanguage$pandac$Type* $tmp663 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp666, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp665, $tmp666);
    org$pandalanguage$pandac$Position$init(&$tmp667);
    panda$core$Bit$init$builtin_bit(&$tmp668, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp663, &$s664, $tmp665, $tmp667, $tmp668);
    $tmp662 = $tmp663;
    $tmp661 = $tmp662;
    $returnValue660 = $tmp661;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp661));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp662));
    return $returnValue660;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue670;
    org$pandalanguage$pandac$Type* $tmp671;
    org$pandalanguage$pandac$Type* $tmp672;
    org$pandalanguage$pandac$Type$Kind $tmp675;
    panda$core$Int64 $tmp676;
    org$pandalanguage$pandac$Position $tmp677;
    panda$core$Bit $tmp678;
    org$pandalanguage$pandac$Type* $tmp673 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp676, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp675, $tmp676);
    org$pandalanguage$pandac$Position$init(&$tmp677);
    panda$core$Bit$init$builtin_bit(&$tmp678, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp673, &$s674, $tmp675, $tmp677, $tmp678);
    $tmp672 = $tmp673;
    $tmp671 = $tmp672;
    $returnValue670 = $tmp671;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp671));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
    return $returnValue670;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue680;
    org$pandalanguage$pandac$Type* $tmp681;
    org$pandalanguage$pandac$Type* $tmp682;
    org$pandalanguage$pandac$Type$Kind $tmp685;
    panda$core$Int64 $tmp686;
    org$pandalanguage$pandac$Position $tmp687;
    panda$core$Bit $tmp688;
    org$pandalanguage$pandac$Type* $tmp683 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp686, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp685, $tmp686);
    org$pandalanguage$pandac$Position$init(&$tmp687);
    panda$core$Bit$init$builtin_bit(&$tmp688, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp683, &$s684, $tmp685, $tmp687, $tmp688);
    $tmp682 = $tmp683;
    $tmp681 = $tmp682;
    $returnValue680 = $tmp681;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp681));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp682));
    return $returnValue680;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue690;
    org$pandalanguage$pandac$Type* $tmp691;
    org$pandalanguage$pandac$Type* $tmp692;
    panda$core$String* $tmp694;
    panda$core$String* $tmp695;
    panda$core$Object* $tmp697;
    org$pandalanguage$pandac$Type$Kind $tmp702;
    panda$core$Int64 $tmp703;
    org$pandalanguage$pandac$Position $tmp704;
    panda$core$Bit $tmp705;
    org$pandalanguage$pandac$Type* $tmp693 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$UInt64$wrapper* $tmp698;
    $tmp698 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
    $tmp698->value = p_value;
    $tmp697 = ((panda$core$Object*) $tmp698);
    panda$core$String* $tmp699 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s696, $tmp697);
    $tmp695 = $tmp699;
    panda$core$String* $tmp701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp695, &$s700);
    $tmp694 = $tmp701;
    panda$core$Int64$init$builtin_int64(&$tmp703, 5);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp702, $tmp703);
    org$pandalanguage$pandac$Position$init(&$tmp704);
    panda$core$Bit$init$builtin_bit(&$tmp705, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp693, $tmp694, $tmp702, $tmp704, $tmp705);
    $tmp692 = $tmp693;
    $tmp691 = $tmp692;
    $returnValue690 = $tmp691;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp691));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp692));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp695));
    panda$core$Panda$unref$panda$core$Object($tmp697);
    return $returnValue690;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue707;
    org$pandalanguage$pandac$Type* $tmp708;
    org$pandalanguage$pandac$Type* $tmp709;
    panda$core$String* $tmp711;
    panda$core$String* $tmp712;
    panda$core$String* $tmp714;
    org$pandalanguage$pandac$Type$Kind $tmp719;
    panda$core$Int64 $tmp720;
    org$pandalanguage$pandac$Position $tmp721;
    panda$core$Bit $tmp722;
    org$pandalanguage$pandac$Type* $tmp710 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp715 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp714 = $tmp715;
    panda$core$String* $tmp716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s713, $tmp714);
    $tmp712 = $tmp716;
    panda$core$String* $tmp718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp712, &$s717);
    $tmp711 = $tmp718;
    panda$core$Int64$init$builtin_int64(&$tmp720, 5);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp719, $tmp720);
    org$pandalanguage$pandac$Position$init(&$tmp721);
    panda$core$Bit$init$builtin_bit(&$tmp722, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp710, $tmp711, $tmp719, $tmp721, $tmp722);
    $tmp709 = $tmp710;
    $tmp708 = $tmp709;
    $returnValue707 = $tmp708;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp708));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp709));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp711));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp712));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp714));
    return $returnValue707;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue724;
    org$pandalanguage$pandac$Type* $tmp725;
    org$pandalanguage$pandac$Type* $tmp726;
    panda$core$String* $tmp728;
    panda$core$String* $tmp729;
    panda$core$String* $tmp731;
    org$pandalanguage$pandac$Type$Kind $tmp736;
    panda$core$Int64 $tmp737;
    org$pandalanguage$pandac$Position $tmp738;
    panda$core$Bit $tmp739;
    org$pandalanguage$pandac$Type* $tmp727 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp732 = panda$core$Real64$convert$R$panda$core$String(p_value);
    $tmp731 = $tmp732;
    panda$core$String* $tmp733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s730, $tmp731);
    $tmp729 = $tmp733;
    panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp729, &$s734);
    $tmp728 = $tmp735;
    panda$core$Int64$init$builtin_int64(&$tmp737, 18);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp736, $tmp737);
    org$pandalanguage$pandac$Position$init(&$tmp738);
    panda$core$Bit$init$builtin_bit(&$tmp739, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp727, $tmp728, $tmp736, $tmp738, $tmp739);
    $tmp726 = $tmp727;
    $tmp725 = $tmp726;
    $returnValue724 = $tmp725;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp725));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp726));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp729));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp731));
    return $returnValue724;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue741;
    org$pandalanguage$pandac$Type* $tmp742;
    org$pandalanguage$pandac$Type* $tmp743;
    org$pandalanguage$pandac$Type$Kind $tmp746;
    panda$core$Int64 $tmp747;
    org$pandalanguage$pandac$Position $tmp748;
    panda$core$Bit $tmp749;
    org$pandalanguage$pandac$Type* $tmp744 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp747, 8);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp746, $tmp747);
    org$pandalanguage$pandac$Position$init(&$tmp748);
    panda$core$Bit$init$builtin_bit(&$tmp749, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp744, &$s745, $tmp746, $tmp748, $tmp749);
    $tmp743 = $tmp744;
    $tmp742 = $tmp743;
    $returnValue741 = $tmp742;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp742));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp743));
    return $returnValue741;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue751;
    org$pandalanguage$pandac$Type* $tmp752;
    org$pandalanguage$pandac$Type* $tmp753;
    org$pandalanguage$pandac$Type$Kind $tmp756;
    panda$core$Int64 $tmp757;
    org$pandalanguage$pandac$Position $tmp758;
    panda$core$Bit $tmp759;
    org$pandalanguage$pandac$Type* $tmp754 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp757, 9);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp756, $tmp757);
    org$pandalanguage$pandac$Position$init(&$tmp758);
    panda$core$Bit$init$builtin_bit(&$tmp759, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp754, &$s755, $tmp756, $tmp758, $tmp759);
    $tmp753 = $tmp754;
    $tmp752 = $tmp753;
    $returnValue751 = $tmp752;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp752));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp753));
    return $returnValue751;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue761;
    org$pandalanguage$pandac$Type* $tmp762;
    org$pandalanguage$pandac$Type* $tmp763;
    org$pandalanguage$pandac$Type$Kind $tmp766;
    panda$core$Int64 $tmp767;
    org$pandalanguage$pandac$Position $tmp768;
    panda$core$Bit $tmp769;
    org$pandalanguage$pandac$Type* $tmp764 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp767, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp766, $tmp767);
    org$pandalanguage$pandac$Position$init(&$tmp768);
    panda$core$Bit$init$builtin_bit(&$tmp769, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp764, &$s765, $tmp766, $tmp768, $tmp769);
    $tmp763 = $tmp764;
    $tmp762 = $tmp763;
    $returnValue761 = $tmp762;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp762));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp763));
    return $returnValue761;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue771;
    org$pandalanguage$pandac$Type* $tmp772;
    org$pandalanguage$pandac$Type* $tmp773;
    org$pandalanguage$pandac$Type$Kind $tmp776;
    panda$core$Int64 $tmp777;
    org$pandalanguage$pandac$Position $tmp778;
    panda$core$Bit $tmp779;
    org$pandalanguage$pandac$Type* $tmp774 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp777, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp776, $tmp777);
    org$pandalanguage$pandac$Position$init(&$tmp778);
    panda$core$Bit$init$builtin_bit(&$tmp779, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp774, &$s775, $tmp776, $tmp778, $tmp779);
    $tmp773 = $tmp774;
    $tmp772 = $tmp773;
    $returnValue771 = $tmp772;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp772));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
    return $returnValue771;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue781;
    org$pandalanguage$pandac$Type* $tmp782;
    org$pandalanguage$pandac$Type* $tmp783;
    org$pandalanguage$pandac$Type$Kind $tmp786;
    panda$core$Int64 $tmp787;
    org$pandalanguage$pandac$Position $tmp788;
    panda$core$Bit $tmp789;
    org$pandalanguage$pandac$Type* $tmp784 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp787, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp786, $tmp787);
    org$pandalanguage$pandac$Position$init(&$tmp788);
    panda$core$Bit$init$builtin_bit(&$tmp789, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp784, &$s785, $tmp786, $tmp788, $tmp789);
    $tmp783 = $tmp784;
    $tmp782 = $tmp783;
    $returnValue781 = $tmp782;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp782));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp783));
    return $returnValue781;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue791;
    org$pandalanguage$pandac$Type* $tmp792;
    org$pandalanguage$pandac$Type* $tmp793;
    org$pandalanguage$pandac$Type$Kind $tmp796;
    panda$core$Int64 $tmp797;
    org$pandalanguage$pandac$Position $tmp798;
    panda$core$Bit $tmp799;
    org$pandalanguage$pandac$Type* $tmp794 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp797, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp796, $tmp797);
    org$pandalanguage$pandac$Position$init(&$tmp798);
    panda$core$Bit$init$builtin_bit(&$tmp799, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp794, &$s795, $tmp796, $tmp798, $tmp799);
    $tmp793 = $tmp794;
    $tmp792 = $tmp793;
    $returnValue791 = $tmp792;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp792));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp793));
    return $returnValue791;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue801;
    org$pandalanguage$pandac$Type* $tmp802;
    org$pandalanguage$pandac$Type* $tmp803;
    org$pandalanguage$pandac$Type$Kind $tmp806;
    panda$core$Int64 $tmp807;
    org$pandalanguage$pandac$Position $tmp808;
    panda$core$Bit $tmp809;
    org$pandalanguage$pandac$Type* $tmp804 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp807, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp806, $tmp807);
    org$pandalanguage$pandac$Position$init(&$tmp808);
    panda$core$Bit$init$builtin_bit(&$tmp809, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp804, &$s805, $tmp806, $tmp808, $tmp809);
    $tmp803 = $tmp804;
    $tmp802 = $tmp803;
    $returnValue801 = $tmp802;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp802));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp803));
    return $returnValue801;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children814 = NULL;
    panda$collections$Array* $tmp815;
    panda$collections$Array* $tmp816;
    org$pandalanguage$pandac$Type* $tmp818;
    org$pandalanguage$pandac$Type$Kind $tmp821;
    panda$core$Int64 $tmp822;
    org$pandalanguage$pandac$Position $tmp823;
    panda$core$Bit $tmp824;
    org$pandalanguage$pandac$Type* $returnValue825;
    org$pandalanguage$pandac$Type* $tmp826;
    org$pandalanguage$pandac$Type* $tmp827;
    panda$core$String* $tmp829;
    panda$core$String* $tmp830;
    panda$core$String* $tmp831;
    panda$core$String* $tmp832;
    org$pandalanguage$pandac$Type$Kind $tmp840;
    panda$core$Int64 $tmp841;
    int $tmp813;
    {
        panda$collections$Array* $tmp817 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp817);
        $tmp816 = $tmp817;
        $tmp815 = $tmp816;
        children814 = $tmp815;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp815));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp816));
        org$pandalanguage$pandac$Type* $tmp819 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp822, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp821, $tmp822);
        org$pandalanguage$pandac$Position$init(&$tmp823);
        panda$core$Bit$init$builtin_bit(&$tmp824, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp819, &$s820, $tmp821, $tmp823, $tmp824);
        $tmp818 = $tmp819;
        panda$collections$Array$add$panda$collections$Array$T(children814, ((panda$core$Object*) $tmp818));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp818));
        panda$collections$Array$add$panda$collections$Array$T(children814, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp828 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp834 = panda$core$String$convert$R$panda$core$String(&$s833);
        $tmp832 = $tmp834;
        panda$core$String* $tmp836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp832, &$s835);
        $tmp831 = $tmp836;
        panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp831, ((panda$core$Object*) p_t));
        $tmp830 = $tmp837;
        panda$core$String* $tmp839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp830, &$s838);
        $tmp829 = $tmp839;
        panda$core$Int64$init$builtin_int64(&$tmp841, 11);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp840, $tmp841);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp828, $tmp829, $tmp840, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children814), p_t->resolved);
        $tmp827 = $tmp828;
        $tmp826 = $tmp827;
        $returnValue825 = $tmp826;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp826));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp827));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp829));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp830));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp831));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp832));
        $tmp813 = 0;
        goto $l811;
        $l842:;
        return $returnValue825;
    }
    $l811:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children814));
    children814 = NULL;
    switch ($tmp813) {
        case 0: goto $l842;
    }
    $l844:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children848 = NULL;
    panda$collections$Array* $tmp849;
    panda$collections$Array* $tmp850;
    org$pandalanguage$pandac$Type* $returnValue852;
    org$pandalanguage$pandac$Type* $tmp853;
    org$pandalanguage$pandac$Type* $tmp854;
    org$pandalanguage$pandac$Type* $tmp855;
    org$pandalanguage$pandac$Type$Kind $tmp858;
    panda$core$Int64 $tmp859;
    org$pandalanguage$pandac$Position $tmp860;
    panda$core$Bit $tmp861;
    int $tmp847;
    {
        panda$collections$Array* $tmp851 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp851);
        $tmp850 = $tmp851;
        $tmp849 = $tmp850;
        children848 = $tmp849;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp849));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
        panda$collections$Array$add$panda$collections$Array$T(children848, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp856 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp859, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp858, $tmp859);
        org$pandalanguage$pandac$Position$init(&$tmp860);
        panda$core$Bit$init$builtin_bit(&$tmp861, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp856, &$s857, $tmp858, $tmp860, $tmp861);
        $tmp855 = $tmp856;
        org$pandalanguage$pandac$Type* $tmp862 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp855, ((panda$collections$ListView*) children848));
        $tmp854 = $tmp862;
        $tmp853 = $tmp854;
        $returnValue852 = $tmp853;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp853));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp854));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp855));
        $tmp847 = 0;
        goto $l845;
        $l863:;
        return $returnValue852;
    }
    $l845:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children848));
    children848 = NULL;
    switch ($tmp847) {
        case 0: goto $l863;
    }
    $l865:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children869 = NULL;
    panda$collections$Array* $tmp870;
    panda$collections$Array* $tmp871;
    org$pandalanguage$pandac$Type* $returnValue873;
    org$pandalanguage$pandac$Type* $tmp874;
    org$pandalanguage$pandac$Type* $tmp875;
    org$pandalanguage$pandac$Type* $tmp876;
    org$pandalanguage$pandac$Type$Kind $tmp879;
    panda$core$Int64 $tmp880;
    org$pandalanguage$pandac$Position $tmp881;
    panda$core$Bit $tmp882;
    int $tmp868;
    {
        panda$collections$Array* $tmp872 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp872);
        $tmp871 = $tmp872;
        $tmp870 = $tmp871;
        children869 = $tmp870;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp870));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
        panda$collections$Array$add$panda$collections$Array$T(children869, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp877 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp880, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp879, $tmp880);
        org$pandalanguage$pandac$Position$init(&$tmp881);
        panda$core$Bit$init$builtin_bit(&$tmp882, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp877, &$s878, $tmp879, $tmp881, $tmp882);
        $tmp876 = $tmp877;
        org$pandalanguage$pandac$Type* $tmp883 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp876, ((panda$collections$ListView*) children869));
        $tmp875 = $tmp883;
        $tmp874 = $tmp875;
        $returnValue873 = $tmp874;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp874));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp875));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp876));
        $tmp868 = 0;
        goto $l866;
        $l884:;
        return $returnValue873;
    }
    $l866:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children869));
    children869 = NULL;
    switch ($tmp868) {
        case 0: goto $l884;
    }
    $l886:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children890 = NULL;
    panda$collections$Array* $tmp891;
    panda$collections$Array* $tmp892;
    org$pandalanguage$pandac$Type* $tmp894;
    org$pandalanguage$pandac$Type* $tmp897;
    org$pandalanguage$pandac$Type* $tmp899;
    org$pandalanguage$pandac$Type* $tmp902;
    org$pandalanguage$pandac$Type* $tmp904;
    org$pandalanguage$pandac$Type* $tmp907;
    org$pandalanguage$pandac$Type* $tmp909;
    org$pandalanguage$pandac$Type* $returnValue911;
    org$pandalanguage$pandac$Type* $tmp912;
    org$pandalanguage$pandac$Type* $tmp913;
    org$pandalanguage$pandac$Type* $tmp914;
    org$pandalanguage$pandac$Type$Kind $tmp917;
    panda$core$Int64 $tmp918;
    org$pandalanguage$pandac$Position $tmp919;
    panda$core$Bit $tmp920;
    int $tmp889;
    {
        panda$collections$Array* $tmp893 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp893);
        $tmp892 = $tmp893;
        $tmp891 = $tmp892;
        children890 = $tmp891;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp891));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp892));
        panda$collections$Array$add$panda$collections$Array$T(children890, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp895 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp894 = $tmp895;
        panda$core$Bit $tmp896 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp894);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp894));
        if ($tmp896.value) {
        {
            org$pandalanguage$pandac$Type* $tmp898 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp897 = $tmp898;
            panda$collections$Array$add$panda$collections$Array$T(children890, ((panda$core$Object*) $tmp897));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp897));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp900 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp899 = $tmp900;
        panda$core$Bit $tmp901 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp899);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp899));
        if ($tmp901.value) {
        {
            org$pandalanguage$pandac$Type* $tmp903 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp902 = $tmp903;
            panda$collections$Array$add$panda$collections$Array$T(children890, ((panda$core$Object*) $tmp902));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp902));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp905 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp904 = $tmp905;
        panda$core$Bit $tmp906 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp904);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp904));
        if ($tmp906.value) {
        {
            org$pandalanguage$pandac$Type* $tmp908 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp907 = $tmp908;
            panda$collections$Array$add$panda$collections$Array$T(children890, ((panda$core$Object*) $tmp907));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp907));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp910 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp909 = $tmp910;
            panda$collections$Array$add$panda$collections$Array$T(children890, ((panda$core$Object*) $tmp909));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
        }
        }
        }
        }
        org$pandalanguage$pandac$Type* $tmp915 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp918, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp917, $tmp918);
        org$pandalanguage$pandac$Position$init(&$tmp919);
        panda$core$Bit$init$builtin_bit(&$tmp920, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp915, &$s916, $tmp917, $tmp919, $tmp920);
        $tmp914 = $tmp915;
        org$pandalanguage$pandac$Type* $tmp921 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp914, ((panda$collections$ListView*) children890));
        $tmp913 = $tmp921;
        $tmp912 = $tmp913;
        $returnValue911 = $tmp912;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp912));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp913));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp914));
        $tmp889 = 0;
        goto $l887;
        $l922:;
        return $returnValue911;
    }
    $l887:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children890));
    children890 = NULL;
    switch ($tmp889) {
        case 0: goto $l922;
    }
    $l924:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue925;
    org$pandalanguage$pandac$Type* $tmp926;
    org$pandalanguage$pandac$Type* $tmp927;
    org$pandalanguage$pandac$Type$Kind $tmp930;
    panda$core$Int64 $tmp931;
    org$pandalanguage$pandac$Position $tmp932;
    panda$core$Bit $tmp933;
    org$pandalanguage$pandac$Type* $tmp928 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp931, 6);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp930, $tmp931);
    org$pandalanguage$pandac$Position$init(&$tmp932);
    panda$core$Bit$init$builtin_bit(&$tmp933, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp928, &$s929, $tmp930, $tmp932, $tmp933);
    $tmp927 = $tmp928;
    $tmp926 = $tmp927;
    $returnValue925 = $tmp926;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp926));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp927));
    return $returnValue925;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue935;
    org$pandalanguage$pandac$Type* $tmp936;
    org$pandalanguage$pandac$Type* $tmp937;
    org$pandalanguage$pandac$Type$Kind $tmp940;
    panda$core$Int64 $tmp941;
    org$pandalanguage$pandac$Position $tmp942;
    panda$core$Bit $tmp943;
    org$pandalanguage$pandac$Type* $tmp938 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp941, 6);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp940, $tmp941);
    org$pandalanguage$pandac$Position$init(&$tmp942);
    panda$core$Bit$init$builtin_bit(&$tmp943, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp938, &$s939, $tmp940, $tmp942, $tmp943);
    $tmp937 = $tmp938;
    $tmp936 = $tmp937;
    $returnValue935 = $tmp936;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp936));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp937));
    return $returnValue935;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue945;
    panda$core$Int64 $tmp961;
    panda$core$Int64 $tmp965;
    panda$core$Bit $tmp951 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s950);
    bool $tmp949 = $tmp951.value;
    if ($tmp949) goto $l952;
    panda$core$Bit $tmp954 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s953);
    $tmp949 = $tmp954.value;
    $l952:;
    panda$core$Bit $tmp955 = { $tmp949 };
    bool $tmp948 = $tmp955.value;
    if ($tmp948) goto $l956;
    panda$core$Bit $tmp958 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s957);
    $tmp948 = $tmp958.value;
    $l956:;
    panda$core$Bit $tmp959 = { $tmp948 };
    bool $tmp947 = $tmp959.value;
    if ($tmp947) goto $l960;
    panda$core$Int64$init$builtin_int64(&$tmp961, 5);
    panda$core$Bit $tmp962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp961);
    $tmp947 = $tmp962.value;
    $l960:;
    panda$core$Bit $tmp963 = { $tmp947 };
    bool $tmp946 = $tmp963.value;
    if ($tmp946) goto $l964;
    panda$core$Int64$init$builtin_int64(&$tmp965, 18);
    panda$core$Bit $tmp966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp965);
    $tmp946 = $tmp966.value;
    $l964:;
    panda$core$Bit $tmp967 = { $tmp946 };
    $returnValue945 = $tmp967;
    return $returnValue945;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue969;
    panda$core$Int64 $tmp973;
    panda$core$Int64 $tmp976;
    panda$core$Int64 $tmp980;
    panda$core$Int64 $tmp984;
    panda$core$Int64$init$builtin_int64(&$tmp973, 2);
    panda$core$Bit $tmp974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp973);
    bool $tmp972 = $tmp974.value;
    if ($tmp972) goto $l975;
    panda$core$Int64$init$builtin_int64(&$tmp976, 3);
    panda$core$Bit $tmp977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp976);
    $tmp972 = $tmp977.value;
    $l975:;
    panda$core$Bit $tmp978 = { $tmp972 };
    bool $tmp971 = $tmp978.value;
    if ($tmp971) goto $l979;
    panda$core$Int64$init$builtin_int64(&$tmp980, 10);
    panda$core$Bit $tmp981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp980);
    $tmp971 = $tmp981.value;
    $l979:;
    panda$core$Bit $tmp982 = { $tmp971 };
    bool $tmp970 = $tmp982.value;
    if ($tmp970) goto $l983;
    panda$core$Int64$init$builtin_int64(&$tmp984, 5);
    panda$core$Bit $tmp985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp984);
    $tmp970 = $tmp985.value;
    $l983:;
    panda$core$Bit $tmp986 = { $tmp970 };
    $returnValue969 = $tmp986;
    return $returnValue969;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue988;
    panda$core$Int64 $tmp990;
    panda$core$Int64$init$builtin_int64(&$tmp990, 18);
    panda$core$Bit $tmp991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp990);
    bool $tmp989 = $tmp991.value;
    if ($tmp989) goto $l992;
    panda$core$Bit $tmp994 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s993);
    $tmp989 = $tmp994.value;
    $l992:;
    panda$core$Bit $tmp995 = { $tmp989 };
    $returnValue988 = $tmp995;
    return $returnValue988;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue997;
    panda$core$Bit $tmp999 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s998);
    $returnValue997 = $tmp999;
    return $returnValue997;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue1001;
    panda$core$Bit $tmp1003 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp1002 = $tmp1003.value;
    if ($tmp1002) goto $l1004;
    panda$core$Bit $tmp1005 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp1002 = $tmp1005.value;
    $l1004:;
    panda$core$Bit $tmp1006 = { $tmp1002 };
    $returnValue1001 = $tmp1006;
    return $returnValue1001;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$456_91008;
    panda$core$Int64 $tmp1016;
    panda$core$Int64 $tmp1019;
    panda$core$Int64 $tmp1023;
    panda$core$Int64 $tmp1027;
    panda$core$Int64 $tmp1031;
    panda$core$Int64 $tmp1035;
    panda$core$Int64 $tmp1039;
    panda$core$Int64 $tmp1043;
    panda$core$Bit $returnValue1046;
    panda$core$Bit $tmp1047;
    panda$core$Bit $tmp1049;
    {
        $match$456_91008 = self->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp1016, 0);
        panda$core$Bit $tmp1017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91008.$rawValue, $tmp1016);
        bool $tmp1015 = $tmp1017.value;
        if ($tmp1015) goto $l1018;
        panda$core$Int64$init$builtin_int64(&$tmp1019, 1);
        panda$core$Bit $tmp1020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91008.$rawValue, $tmp1019);
        $tmp1015 = $tmp1020.value;
        $l1018:;
        panda$core$Bit $tmp1021 = { $tmp1015 };
        bool $tmp1014 = $tmp1021.value;
        if ($tmp1014) goto $l1022;
        panda$core$Int64$init$builtin_int64(&$tmp1023, 11);
        panda$core$Bit $tmp1024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91008.$rawValue, $tmp1023);
        $tmp1014 = $tmp1024.value;
        $l1022:;
        panda$core$Bit $tmp1025 = { $tmp1014 };
        bool $tmp1013 = $tmp1025.value;
        if ($tmp1013) goto $l1026;
        panda$core$Int64$init$builtin_int64(&$tmp1027, 12);
        panda$core$Bit $tmp1028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91008.$rawValue, $tmp1027);
        $tmp1013 = $tmp1028.value;
        $l1026:;
        panda$core$Bit $tmp1029 = { $tmp1013 };
        bool $tmp1012 = $tmp1029.value;
        if ($tmp1012) goto $l1030;
        panda$core$Int64$init$builtin_int64(&$tmp1031, 15);
        panda$core$Bit $tmp1032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91008.$rawValue, $tmp1031);
        $tmp1012 = $tmp1032.value;
        $l1030:;
        panda$core$Bit $tmp1033 = { $tmp1012 };
        bool $tmp1011 = $tmp1033.value;
        if ($tmp1011) goto $l1034;
        panda$core$Int64$init$builtin_int64(&$tmp1035, 14);
        panda$core$Bit $tmp1036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91008.$rawValue, $tmp1035);
        $tmp1011 = $tmp1036.value;
        $l1034:;
        panda$core$Bit $tmp1037 = { $tmp1011 };
        bool $tmp1010 = $tmp1037.value;
        if ($tmp1010) goto $l1038;
        panda$core$Int64$init$builtin_int64(&$tmp1039, 17);
        panda$core$Bit $tmp1040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91008.$rawValue, $tmp1039);
        $tmp1010 = $tmp1040.value;
        $l1038:;
        panda$core$Bit $tmp1041 = { $tmp1010 };
        bool $tmp1009 = $tmp1041.value;
        if ($tmp1009) goto $l1042;
        panda$core$Int64$init$builtin_int64(&$tmp1043, 16);
        panda$core$Bit $tmp1044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91008.$rawValue, $tmp1043);
        $tmp1009 = $tmp1044.value;
        $l1042:;
        panda$core$Bit $tmp1045 = { $tmp1009 };
        if ($tmp1045.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1047, true);
            $returnValue1046 = $tmp1047;
            return $returnValue1046;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1049, false);
            $returnValue1046 = $tmp1049;
            return $returnValue1046;
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$466_91051;
    panda$core$Int64 $tmp1055;
    panda$core$Int64 $tmp1058;
    panda$core$Int64 $tmp1062;
    panda$core$Int64 $tmp1066;
    panda$core$Bit $returnValue1069;
    panda$core$Bit $tmp1070;
    panda$core$Bit $tmp1072;
    {
        $match$466_91051 = self->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp1055, 15);
        panda$core$Bit $tmp1056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91051.$rawValue, $tmp1055);
        bool $tmp1054 = $tmp1056.value;
        if ($tmp1054) goto $l1057;
        panda$core$Int64$init$builtin_int64(&$tmp1058, 14);
        panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91051.$rawValue, $tmp1058);
        $tmp1054 = $tmp1059.value;
        $l1057:;
        panda$core$Bit $tmp1060 = { $tmp1054 };
        bool $tmp1053 = $tmp1060.value;
        if ($tmp1053) goto $l1061;
        panda$core$Int64$init$builtin_int64(&$tmp1062, 17);
        panda$core$Bit $tmp1063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91051.$rawValue, $tmp1062);
        $tmp1053 = $tmp1063.value;
        $l1061:;
        panda$core$Bit $tmp1064 = { $tmp1053 };
        bool $tmp1052 = $tmp1064.value;
        if ($tmp1052) goto $l1065;
        panda$core$Int64$init$builtin_int64(&$tmp1066, 16);
        panda$core$Bit $tmp1067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91051.$rawValue, $tmp1066);
        $tmp1052 = $tmp1067.value;
        $l1065:;
        panda$core$Bit $tmp1068 = { $tmp1052 };
        if ($tmp1068.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1070, true);
            $returnValue1069 = $tmp1070;
            return $returnValue1069;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1072, false);
            $returnValue1069 = $tmp1072;
            return $returnValue1069;
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue1074;
    panda$core$Bit $tmp1076 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1075);
    $returnValue1074 = $tmp1076;
    return $returnValue1074;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1078;
    panda$core$Bit $returnValue1080;
    panda$core$Object* $tmp1081;
    panda$core$Int64 $tmp1082;
    panda$core$Int64 $tmp1087;
    panda$core$Object* $tmp1090;
    panda$core$Int64 $tmp1091;
    panda$core$Int64$init$builtin_int64(&$tmp1078, 1);
    panda$core$Bit $tmp1079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1078);
    if ($tmp1079.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1082, 0);
        panda$core$Object* $tmp1083 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1082);
        $tmp1081 = $tmp1083;
        panda$core$Bit $tmp1084 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1081));
        $returnValue1080 = $tmp1084;
        panda$core$Panda$unref$panda$core$Object($tmp1081);
        return $returnValue1080;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1087, 11);
    panda$core$Bit $tmp1088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1087);
    bool $tmp1086 = $tmp1088.value;
    if (!$tmp1086) goto $l1089;
    panda$core$Int64$init$builtin_int64(&$tmp1091, 0);
    panda$core$Object* $tmp1092 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1091);
    $tmp1090 = $tmp1092;
    panda$core$Bit $tmp1094 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp1090))->name, &$s1093);
    $tmp1086 = $tmp1094.value;
    panda$core$Panda$unref$panda$core$Object($tmp1090);
    $l1089:;
    panda$core$Bit $tmp1095 = { $tmp1086 };
    $returnValue1080 = $tmp1095;
    return $returnValue1080;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1097;
    panda$core$Bit $returnValue1099;
    panda$core$Object* $tmp1100;
    panda$core$Int64 $tmp1101;
    panda$core$Int64 $tmp1106;
    panda$core$Object* $tmp1109;
    panda$core$Int64 $tmp1110;
    panda$core$Int64$init$builtin_int64(&$tmp1097, 1);
    panda$core$Bit $tmp1098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1097);
    if ($tmp1098.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1101, 0);
        panda$core$Object* $tmp1102 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1101);
        $tmp1100 = $tmp1102;
        panda$core$Bit $tmp1103 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1100));
        $returnValue1099 = $tmp1103;
        panda$core$Panda$unref$panda$core$Object($tmp1100);
        return $returnValue1099;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1106, 11);
    panda$core$Bit $tmp1107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1106);
    bool $tmp1105 = $tmp1107.value;
    if (!$tmp1105) goto $l1108;
    panda$core$Int64$init$builtin_int64(&$tmp1110, 0);
    panda$core$Object* $tmp1111 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1110);
    $tmp1109 = $tmp1111;
    panda$core$Bit $tmp1113 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp1109))->name, &$s1112);
    $tmp1105 = $tmp1113.value;
    panda$core$Panda$unref$panda$core$Object($tmp1109);
    $l1108:;
    panda$core$Bit $tmp1114 = { $tmp1105 };
    $returnValue1099 = $tmp1114;
    return $returnValue1099;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1119;
    org$pandalanguage$pandac$Type* $returnValue1121;
    org$pandalanguage$pandac$Type* $tmp1122;
    panda$collections$Array* subtypes1125 = NULL;
    panda$collections$Array* $tmp1126;
    panda$collections$Array* $tmp1127;
    org$pandalanguage$pandac$Type* $tmp1129;
    org$pandalanguage$pandac$Type* $tmp1130;
    panda$core$String* $tmp1132;
    panda$core$String* $tmp1133;
    org$pandalanguage$pandac$Type$Kind $tmp1137;
    panda$core$Int64 $tmp1138;
    org$pandalanguage$pandac$Position $tmp1139;
    panda$core$Bit $tmp1140;
    int $tmp1118;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1119, 1);
        panda$core$Bit $tmp1120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1119);
        if ($tmp1120.value) {
        {
            $tmp1122 = self;
            $returnValue1121 = $tmp1122;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1122));
            $tmp1118 = 0;
            goto $l1116;
            $l1123:;
            return $returnValue1121;
        }
        }
        panda$collections$Array* $tmp1128 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1128);
        $tmp1127 = $tmp1128;
        $tmp1126 = $tmp1127;
        subtypes1125 = $tmp1126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1127));
        panda$collections$Array$add$panda$collections$Array$T(subtypes1125, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp1131 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp1134 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp1133 = $tmp1134;
        panda$core$String* $tmp1136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1133, &$s1135);
        $tmp1132 = $tmp1136;
        panda$core$Int64$init$builtin_int64(&$tmp1138, 1);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp1137, $tmp1138);
        org$pandalanguage$pandac$Position$init(&$tmp1139);
        panda$core$Bit$init$builtin_bit(&$tmp1140, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1131, $tmp1132, $tmp1137, $tmp1139, ((panda$collections$ListView*) subtypes1125), $tmp1140);
        $tmp1130 = $tmp1131;
        $tmp1129 = $tmp1130;
        $returnValue1121 = $tmp1129;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1129));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1132));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1133));
        $tmp1118 = 1;
        goto $l1116;
        $l1141:;
        return $returnValue1121;
    }
    $l1116:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1125));
    subtypes1125 = NULL;
    switch ($tmp1118) {
        case 1: goto $l1141;
        case 0: goto $l1123;
    }
    $l1143:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1144;
    org$pandalanguage$pandac$Type* $returnValue1146;
    org$pandalanguage$pandac$Type* $tmp1147;
    org$pandalanguage$pandac$Type* $tmp1149;
    panda$core$Object* $tmp1150;
    panda$core$Int64 $tmp1151;
    panda$core$Int64$init$builtin_int64(&$tmp1144, 1);
    panda$core$Bit $tmp1145 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1144);
    if ($tmp1145.value) {
    {
        $tmp1147 = self;
        $returnValue1146 = $tmp1147;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1147));
        return $returnValue1146;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1151, 0);
    panda$core$Object* $tmp1152 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1151);
    $tmp1150 = $tmp1152;
    $tmp1149 = ((org$pandalanguage$pandac$Type*) $tmp1150);
    $returnValue1146 = $tmp1149;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1149));
    panda$core$Panda$unref$panda$core$Object($tmp1150);
    return $returnValue1146;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1157;
    panda$core$Int64 $tmp1160;
    panda$core$Int64 $tmp1164;
    panda$core$Int64 $tmp1168;
    org$pandalanguage$pandac$Type* $returnValue1175;
    org$pandalanguage$pandac$Type* $tmp1176;
    panda$core$Object* $tmp1177;
    panda$core$Int64 $tmp1182;
    panda$core$Int64$init$builtin_int64(&$tmp1157, 14);
    panda$core$Bit $tmp1158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1157);
    bool $tmp1156 = $tmp1158.value;
    if ($tmp1156) goto $l1159;
    panda$core$Int64$init$builtin_int64(&$tmp1160, 15);
    panda$core$Bit $tmp1161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1160);
    $tmp1156 = $tmp1161.value;
    $l1159:;
    panda$core$Bit $tmp1162 = { $tmp1156 };
    bool $tmp1155 = $tmp1162.value;
    if ($tmp1155) goto $l1163;
    panda$core$Int64$init$builtin_int64(&$tmp1164, 16);
    panda$core$Bit $tmp1165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1164);
    $tmp1155 = $tmp1165.value;
    $l1163:;
    panda$core$Bit $tmp1166 = { $tmp1155 };
    bool $tmp1154 = $tmp1166.value;
    if ($tmp1154) goto $l1167;
    panda$core$Int64$init$builtin_int64(&$tmp1168, 17);
    panda$core$Bit $tmp1169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1168);
    $tmp1154 = $tmp1169.value;
    $l1167:;
    panda$core$Bit $tmp1170 = { $tmp1154 };
    if ($tmp1170.value) goto $l1171; else goto $l1172;
    $l1172:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1173, (panda$core$Int64) { 510 }, &$s1174);
    abort();
    $l1171:;
    ITable* $tmp1178 = ((panda$collections$CollectionView*) self->subtypes)->$class->itable;
    while ($tmp1178->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1178 = $tmp1178->next;
    }
    $fn1180 $tmp1179 = $tmp1178->methods[0];
    panda$core$Int64 $tmp1181 = $tmp1179(((panda$collections$CollectionView*) self->subtypes));
    panda$core$Int64$init$builtin_int64(&$tmp1182, 1);
    panda$core$Int64 $tmp1183 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1181, $tmp1182);
    panda$core$Object* $tmp1184 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1183);
    $tmp1177 = $tmp1184;
    $tmp1176 = ((org$pandalanguage$pandac$Type*) $tmp1177);
    $returnValue1175 = $tmp1176;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1176));
    panda$core$Panda$unref$panda$core$Object($tmp1177);
    return $returnValue1175;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $returnValue1190;
    org$pandalanguage$pandac$Type* $tmp1191;
    org$pandalanguage$pandac$Type* $tmp1194;
    panda$core$Int64 $tmp1197;
    org$pandalanguage$pandac$Type* $tmp1199;
    org$pandalanguage$pandac$Type* $tmp1202;
    org$pandalanguage$pandac$Type* $tmp1203;
    org$pandalanguage$pandac$Type* $tmp1207;
    panda$core$Int64 $tmp1210;
    org$pandalanguage$pandac$Type* $tmp1212;
    org$pandalanguage$pandac$Type* $tmp1215;
    org$pandalanguage$pandac$Type* $tmp1216;
    panda$core$Int64 $tmp1221;
    org$pandalanguage$pandac$Type* $tmp1226;
    panda$core$Int64 $tmp1232;
    org$pandalanguage$pandac$Type* $tmp1235;
    panda$core$Int64 $tmp1240;
    panda$core$Int64 $tmp1243;
    org$pandalanguage$pandac$Type* $tmp1246;
    org$pandalanguage$pandac$Type* $tmp1252;
    org$pandalanguage$pandac$Type* $tmp1253;
    org$pandalanguage$pandac$Type* $tmp1257;
    org$pandalanguage$pandac$Type* $tmp1258;
    panda$core$Int64 $tmp1264;
    panda$core$Int64 $tmp1267;
    org$pandalanguage$pandac$Type* $tmp1270;
    org$pandalanguage$pandac$Type* $tmp1276;
    org$pandalanguage$pandac$Type* $tmp1277;
    org$pandalanguage$pandac$Type* $tmp1281;
    org$pandalanguage$pandac$Type* $tmp1282;
    panda$core$Int64 $tmp1286;
    org$pandalanguage$pandac$Type* $tmp1288;
    org$pandalanguage$pandac$Type* $tmp1289;
    org$pandalanguage$pandac$Type* $tmp1290;
    panda$core$Object* $tmp1291;
    panda$core$Int64 $tmp1292;
    panda$core$Int64 $tmp1298;
    org$pandalanguage$pandac$Type* $tmp1300;
    org$pandalanguage$pandac$Type* $tmp1301;
    org$pandalanguage$pandac$Type* $tmp1302;
    panda$core$Object* $tmp1303;
    panda$core$Int64 $tmp1304;
    org$pandalanguage$pandac$Type* t11310 = NULL;
    org$pandalanguage$pandac$Type* $tmp1311;
    org$pandalanguage$pandac$Type* $tmp1312;
    org$pandalanguage$pandac$Type* t21314 = NULL;
    org$pandalanguage$pandac$Type* $tmp1315;
    org$pandalanguage$pandac$Type* $tmp1316;
    panda$collections$HashSet* ancestors1326 = NULL;
    panda$collections$HashSet* $tmp1327;
    panda$collections$HashSet* $tmp1328;
    org$pandalanguage$pandac$Type* t1330 = NULL;
    org$pandalanguage$pandac$Type* $tmp1331;
    org$pandalanguage$pandac$ClassDecl* cl1332 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1333;
    org$pandalanguage$pandac$ClassDecl* $tmp1334;
    org$pandalanguage$pandac$Type* $tmp1339;
    org$pandalanguage$pandac$Type* $tmp1340;
    org$pandalanguage$pandac$Type* $tmp1341;
    org$pandalanguage$pandac$ClassDecl* $tmp1343;
    org$pandalanguage$pandac$ClassDecl* $tmp1344;
    org$pandalanguage$pandac$ClassDecl* $tmp1345;
    org$pandalanguage$pandac$ClassDecl* $tmp1347;
    org$pandalanguage$pandac$ClassDecl* $tmp1348;
    org$pandalanguage$pandac$Type* $tmp1349;
    org$pandalanguage$pandac$Type* $tmp1350;
    org$pandalanguage$pandac$ClassDecl* $tmp1351;
    org$pandalanguage$pandac$ClassDecl* $tmp1352;
    org$pandalanguage$pandac$ClassDecl* $tmp1353;
    org$pandalanguage$pandac$Type* $tmp1359;
    org$pandalanguage$pandac$Type* $tmp1363;
    org$pandalanguage$pandac$Type* $tmp1364;
    org$pandalanguage$pandac$Type* $tmp1365;
    org$pandalanguage$pandac$ClassDecl* $tmp1367;
    org$pandalanguage$pandac$ClassDecl* $tmp1368;
    org$pandalanguage$pandac$ClassDecl* $tmp1369;
    org$pandalanguage$pandac$ClassDecl* $tmp1371;
    org$pandalanguage$pandac$ClassDecl* $tmp1372;
    org$pandalanguage$pandac$Type* $tmp1374;
    org$pandalanguage$pandac$Type* $tmp1375;
    int $tmp1188;
    {
        panda$core$Bit $tmp1189 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp1189.value) {
        {
            $tmp1191 = self;
            $returnValue1190 = $tmp1191;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1191));
            $tmp1188 = 0;
            goto $l1186;
            $l1192:;
            return $returnValue1190;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1195 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp1194 = $tmp1195;
        panda$core$Bit $tmp1196 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp1194);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1194));
        if ($tmp1196.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1197, 1);
            panda$core$Bit $tmp1198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1197);
            if ($tmp1198.value) {
            {
                $tmp1199 = p_other;
                $returnValue1190 = $tmp1199;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1199));
                $tmp1188 = 1;
                goto $l1186;
                $l1200:;
                return $returnValue1190;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1204 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp1203 = $tmp1204;
            $tmp1202 = $tmp1203;
            $returnValue1190 = $tmp1202;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1202));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1203));
            $tmp1188 = 2;
            goto $l1186;
            $l1205:;
            return $returnValue1190;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1208 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp1207 = $tmp1208;
        panda$core$Bit $tmp1209 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp1207);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1207));
        if ($tmp1209.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1210, 1);
            panda$core$Bit $tmp1211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1210);
            if ($tmp1211.value) {
            {
                $tmp1212 = self;
                $returnValue1190 = $tmp1212;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1212));
                $tmp1188 = 3;
                goto $l1186;
                $l1213:;
                return $returnValue1190;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1217 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp1216 = $tmp1217;
            $tmp1215 = $tmp1216;
            $returnValue1190 = $tmp1215;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1215));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1216));
            $tmp1188 = 4;
            goto $l1186;
            $l1218:;
            return $returnValue1190;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1221, 5);
        panda$core$Bit $tmp1222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1221);
        bool $tmp1220 = $tmp1222.value;
        if (!$tmp1220) goto $l1223;
        panda$core$Bit $tmp1224 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp1220 = $tmp1224.value;
        $l1223:;
        panda$core$Bit $tmp1225 = { $tmp1220 };
        if ($tmp1225.value) {
        {
            $tmp1226 = p_other;
            $returnValue1190 = $tmp1226;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1226));
            $tmp1188 = 5;
            goto $l1186;
            $l1227:;
            return $returnValue1190;
        }
        }
        panda$core$Bit $tmp1230 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp1229 = $tmp1230.value;
        if (!$tmp1229) goto $l1231;
        panda$core$Int64$init$builtin_int64(&$tmp1232, 5);
        panda$core$Bit $tmp1233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1232);
        $tmp1229 = $tmp1233.value;
        $l1231:;
        panda$core$Bit $tmp1234 = { $tmp1229 };
        if ($tmp1234.value) {
        {
            $tmp1235 = self;
            $returnValue1190 = $tmp1235;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1235));
            $tmp1188 = 6;
            goto $l1186;
            $l1236:;
            return $returnValue1190;
        }
        }
        panda$core$Bit $tmp1238 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp1238.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1240, 5);
            panda$core$Bit $tmp1241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1240);
            bool $tmp1239 = $tmp1241.value;
            if ($tmp1239) goto $l1242;
            panda$core$Int64$init$builtin_int64(&$tmp1243, 18);
            panda$core$Bit $tmp1244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1243);
            $tmp1239 = $tmp1244.value;
            $l1242:;
            panda$core$Bit $tmp1245 = { $tmp1239 };
            if ($tmp1245.value) {
            {
                $tmp1246 = self;
                $returnValue1190 = $tmp1246;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1246));
                $tmp1188 = 7;
                goto $l1186;
                $l1247:;
                return $returnValue1190;
            }
            }
            panda$core$Bit $tmp1249 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp1249.value) {
            {
                panda$core$Bit $tmp1251 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s1250);
                if ($tmp1251.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1254 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp1253 = $tmp1254;
                    $tmp1252 = $tmp1253;
                    $returnValue1190 = $tmp1252;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1252));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1253));
                    $tmp1188 = 8;
                    goto $l1186;
                    $l1255:;
                    return $returnValue1190;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1259 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp1258 = $tmp1259;
                $tmp1257 = $tmp1258;
                $returnValue1190 = $tmp1257;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1257));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1258));
                $tmp1188 = 9;
                goto $l1186;
                $l1260:;
                return $returnValue1190;
            }
            }
        }
        }
        panda$core$Bit $tmp1262 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp1262.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1264, 5);
            panda$core$Bit $tmp1265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1264);
            bool $tmp1263 = $tmp1265.value;
            if ($tmp1263) goto $l1266;
            panda$core$Int64$init$builtin_int64(&$tmp1267, 18);
            panda$core$Bit $tmp1268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1267);
            $tmp1263 = $tmp1268.value;
            $l1266:;
            panda$core$Bit $tmp1269 = { $tmp1263 };
            if ($tmp1269.value) {
            {
                $tmp1270 = p_other;
                $returnValue1190 = $tmp1270;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1270));
                $tmp1188 = 10;
                goto $l1186;
                $l1271:;
                return $returnValue1190;
            }
            }
            panda$core$Bit $tmp1273 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp1273.value) {
            {
                panda$core$Bit $tmp1275 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1274);
                if ($tmp1275.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1278 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp1277 = $tmp1278;
                    $tmp1276 = $tmp1277;
                    $returnValue1190 = $tmp1276;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1276));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1277));
                    $tmp1188 = 11;
                    goto $l1186;
                    $l1279:;
                    return $returnValue1190;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1283 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp1282 = $tmp1283;
                $tmp1281 = $tmp1282;
                $returnValue1190 = $tmp1281;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1281));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1282));
                $tmp1188 = 12;
                goto $l1186;
                $l1284:;
                return $returnValue1190;
            }
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1286, 1);
        panda$core$Bit $tmp1287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1286);
        if ($tmp1287.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1292, 0);
            panda$core$Object* $tmp1293 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1292);
            $tmp1291 = $tmp1293;
            org$pandalanguage$pandac$Type* $tmp1294 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1291), p_compiler, p_other);
            $tmp1290 = $tmp1294;
            org$pandalanguage$pandac$Type* $tmp1295 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1290);
            $tmp1289 = $tmp1295;
            $tmp1288 = $tmp1289;
            $returnValue1190 = $tmp1288;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1288));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1289));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1290));
            panda$core$Panda$unref$panda$core$Object($tmp1291);
            $tmp1188 = 13;
            goto $l1186;
            $l1296:;
            return $returnValue1190;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1298, 1);
        panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1298);
        if ($tmp1299.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1304, 0);
            panda$core$Object* $tmp1305 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, $tmp1304);
            $tmp1303 = $tmp1305;
            org$pandalanguage$pandac$Type* $tmp1306 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp1303));
            $tmp1302 = $tmp1306;
            org$pandalanguage$pandac$Type* $tmp1307 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1302);
            $tmp1301 = $tmp1307;
            $tmp1300 = $tmp1301;
            $returnValue1190 = $tmp1300;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1300));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1301));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1302));
            panda$core$Panda$unref$panda$core$Object($tmp1303);
            $tmp1188 = 14;
            goto $l1186;
            $l1308:;
            return $returnValue1190;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1313 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp1312 = $tmp1313;
        $tmp1311 = $tmp1312;
        t11310 = $tmp1311;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1312));
        org$pandalanguage$pandac$Type* $tmp1317 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp1316 = $tmp1317;
        $tmp1315 = $tmp1316;
        t21314 = $tmp1315;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1315));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1316));
        panda$core$Bit $tmp1319 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t11310);
        bool $tmp1318 = $tmp1319.value;
        if (!$tmp1318) goto $l1320;
        panda$core$Bit $tmp1321 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t21314);
        $tmp1318 = $tmp1321.value;
        $l1320:;
        panda$core$Bit $tmp1322 = { $tmp1318 };
        if ($tmp1322.value) {
        {
            int $tmp1325;
            {
                panda$collections$HashSet* $tmp1329 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
                panda$collections$HashSet$init($tmp1329);
                $tmp1328 = $tmp1329;
                $tmp1327 = $tmp1328;
                ancestors1326 = $tmp1327;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1327));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1328));
                $tmp1331 = self;
                t1330 = $tmp1331;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1331));
                org$pandalanguage$pandac$ClassDecl* $tmp1335 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t11310);
                $tmp1334 = $tmp1335;
                $tmp1333 = $tmp1334;
                cl1332 = $tmp1333;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1333));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1334));
                $l1336:;
                bool $tmp1338 = ((panda$core$Bit) { cl1332 != NULL }).value;
                if (!$tmp1338) goto $l1337;
                {
                    panda$collections$HashSet$add$panda$collections$HashSet$T(ancestors1326, ((panda$collections$Key*) t1330));
                    if (((panda$core$Bit) { cl1332->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1339 = t1330;
                            org$pandalanguage$pandac$Type* $tmp1342 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1330, cl1332->rawSuper);
                            $tmp1341 = $tmp1342;
                            $tmp1340 = $tmp1341;
                            t1330 = $tmp1340;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1340));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1339));
                        }
                        {
                            $tmp1343 = cl1332;
                            org$pandalanguage$pandac$ClassDecl* $tmp1346 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1330);
                            $tmp1345 = $tmp1346;
                            $tmp1344 = $tmp1345;
                            cl1332 = $tmp1344;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1344));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1345));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1347 = cl1332;
                            $tmp1348 = NULL;
                            cl1332 = $tmp1348;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1348));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1347));
                        }
                    }
                    }
                }
                goto $l1336;
                $l1337:;
                {
                    $tmp1349 = t1330;
                    $tmp1350 = p_other;
                    t1330 = $tmp1350;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1350));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1349));
                }
                {
                    $tmp1351 = cl1332;
                    org$pandalanguage$pandac$ClassDecl* $tmp1354 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t21314);
                    $tmp1353 = $tmp1354;
                    $tmp1352 = $tmp1353;
                    cl1332 = $tmp1352;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1352));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1351));
                }
                $l1355:;
                bool $tmp1357 = ((panda$core$Bit) { cl1332 != NULL }).value;
                if (!$tmp1357) goto $l1356;
                {
                    panda$core$Bit $tmp1358 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(ancestors1326, ((panda$collections$Key*) t1330));
                    if ($tmp1358.value) {
                    {
                        $tmp1359 = t1330;
                        $returnValue1190 = $tmp1359;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1359));
                        $tmp1325 = 0;
                        goto $l1323;
                        $l1360:;
                        $tmp1188 = 15;
                        goto $l1186;
                        $l1361:;
                        return $returnValue1190;
                    }
                    }
                    if (((panda$core$Bit) { cl1332->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1363 = t1330;
                            org$pandalanguage$pandac$Type* $tmp1366 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1330, cl1332->rawSuper);
                            $tmp1365 = $tmp1366;
                            $tmp1364 = $tmp1365;
                            t1330 = $tmp1364;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1364));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1365));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1363));
                        }
                        {
                            $tmp1367 = cl1332;
                            org$pandalanguage$pandac$ClassDecl* $tmp1370 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1330);
                            $tmp1369 = $tmp1370;
                            $tmp1368 = $tmp1369;
                            cl1332 = $tmp1368;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1368));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1369));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1371 = cl1332;
                            $tmp1372 = NULL;
                            cl1332 = $tmp1372;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1372));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1371));
                        }
                    }
                    }
                }
                goto $l1355;
                $l1356:;
            }
            $tmp1325 = -1;
            goto $l1323;
            $l1323:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1332));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1330));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors1326));
            ancestors1326 = NULL;
            t1330 = NULL;
            cl1332 = NULL;
            switch ($tmp1325) {
                case 0: goto $l1360;
                case -1: goto $l1373;
            }
            $l1373:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1376 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp1375 = $tmp1376;
        $tmp1374 = $tmp1375;
        $returnValue1190 = $tmp1374;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1374));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1375));
        $tmp1188 = 16;
        goto $l1186;
        $l1377:;
        return $returnValue1190;
    }
    $l1186:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t21314));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t11310));
    t11310 = NULL;
    t21314 = NULL;
    switch ($tmp1188) {
        case 6: goto $l1236;
        case 11: goto $l1279;
        case 7: goto $l1247;
        case 14: goto $l1308;
        case 5: goto $l1227;
        case 2: goto $l1205;
        case 3: goto $l1213;
        case 1: goto $l1200;
        case 13: goto $l1296;
        case 10: goto $l1271;
        case 9: goto $l1260;
        case 12: goto $l1284;
        case 8: goto $l1255;
        case 16: goto $l1377;
        case 15: goto $l1361;
        case 4: goto $l1218;
        case 0: goto $l1192;
    }
    $l1379:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    panda$core$Int64 $tmp1383;
    panda$core$Int64 $tmp1393;
    org$pandalanguage$pandac$Type* $returnValue1395;
    org$pandalanguage$pandac$Type* $tmp1396;
    org$pandalanguage$pandac$Type$Kind $match$605_91399;
    panda$core$Int64 $tmp1400;
    org$pandalanguage$pandac$Type* found1405 = NULL;
    org$pandalanguage$pandac$Type* $tmp1406;
    panda$core$Object* $tmp1407;
    org$pandalanguage$pandac$Type* $tmp1409;
    org$pandalanguage$pandac$Type* $tmp1413;
    panda$core$Int64 $tmp1418;
    org$pandalanguage$pandac$Type* base1423 = NULL;
    org$pandalanguage$pandac$Type* $tmp1424;
    org$pandalanguage$pandac$Type* $tmp1425;
    panda$core$Object* $tmp1426;
    panda$core$Int64 $tmp1427;
    panda$collections$Array* remappedArgs1430 = NULL;
    panda$collections$Array* $tmp1431;
    panda$collections$Array* $tmp1432;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1434;
    panda$core$Int64 $tmp1435;
    panda$core$Bit $tmp1440;
    org$pandalanguage$pandac$Type* $tmp1454;
    panda$core$Object* $tmp1455;
    org$pandalanguage$pandac$Type* $tmp1464;
    org$pandalanguage$pandac$Type* $tmp1465;
    panda$core$Int64 $tmp1471;
    org$pandalanguage$pandac$Type* $tmp1473;
    org$pandalanguage$pandac$Type* $tmp1474;
    org$pandalanguage$pandac$Type* $tmp1475;
    panda$core$Object* $tmp1476;
    panda$core$Int64 $tmp1477;
    panda$core$Int64 $tmp1486;
    panda$core$Int64 $tmp1489;
    panda$core$Int64 $tmp1493;
    panda$core$Int64 $tmp1497;
    panda$collections$Array* parameters1503 = NULL;
    panda$collections$Array* $tmp1504;
    panda$collections$Array* $tmp1505;
    panda$core$Int64 $tmp1511;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1516;
    panda$core$Int64 $tmp1517;
    panda$core$Int64 $tmp1522;
    panda$core$Bit $tmp1524;
    org$pandalanguage$pandac$Type* $tmp1538;
    panda$core$Object* $tmp1539;
    org$pandalanguage$pandac$Type* $tmp1548;
    org$pandalanguage$pandac$Type* $tmp1549;
    org$pandalanguage$pandac$Type* $tmp1550;
    panda$core$Object* $tmp1551;
    panda$core$Int64 $tmp1556;
    org$pandalanguage$pandac$Type* $tmp1565;
    panda$core$Int64 $tmp1569;
    int $tmp1382;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1383, 6);
        panda$core$Bit $tmp1384 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1383);
        if ($tmp1384.value) goto $l1385; else goto $l1386;
        $l1386:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1387, (panda$core$Int64) { 601 }, &$s1388);
        abort();
        $l1385:;
        ITable* $tmp1389 = ((panda$collections$MapView*) p_types)->$class->itable;
        while ($tmp1389->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp1389 = $tmp1389->next;
        }
        $fn1391 $tmp1390 = $tmp1389->methods[0];
        panda$core$Int64 $tmp1392 = $tmp1390(((panda$collections$MapView*) p_types));
        panda$core$Int64$init$builtin_int64(&$tmp1393, 0);
        panda$core$Bit $tmp1394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1392, $tmp1393);
        if ($tmp1394.value) {
        {
            $tmp1396 = self;
            $returnValue1395 = $tmp1396;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1396));
            $tmp1382 = 0;
            goto $l1380;
            $l1397:;
            return $returnValue1395;
        }
        }
        {
            $match$605_91399 = self->typeKind;
            panda$core$Int64$init$builtin_int64(&$tmp1400, 12);
            panda$core$Bit $tmp1401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91399.$rawValue, $tmp1400);
            if ($tmp1401.value) {
            {
                int $tmp1404;
                {
                    panda$core$Object* $tmp1408 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                    $tmp1407 = $tmp1408;
                    $tmp1406 = ((org$pandalanguage$pandac$Type*) $tmp1407);
                    found1405 = $tmp1406;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1406));
                    panda$core$Panda$unref$panda$core$Object($tmp1407);
                    if (((panda$core$Bit) { found1405 != NULL }).value) {
                    {
                        $tmp1409 = found1405;
                        $returnValue1395 = $tmp1409;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1409));
                        $tmp1404 = 0;
                        goto $l1402;
                        $l1410:;
                        $tmp1382 = 1;
                        goto $l1380;
                        $l1411:;
                        return $returnValue1395;
                    }
                    }
                    $tmp1413 = self;
                    $returnValue1395 = $tmp1413;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1413));
                    $tmp1404 = 1;
                    goto $l1402;
                    $l1414:;
                    $tmp1382 = 2;
                    goto $l1380;
                    $l1415:;
                    return $returnValue1395;
                }
                $l1402:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found1405));
                found1405 = NULL;
                switch ($tmp1404) {
                    case 0: goto $l1410;
                    case 1: goto $l1414;
                }
                $l1417:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1418, 11);
            panda$core$Bit $tmp1419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91399.$rawValue, $tmp1418);
            if ($tmp1419.value) {
            {
                int $tmp1422;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1427, 0);
                    panda$core$Object* $tmp1428 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1427);
                    $tmp1426 = $tmp1428;
                    org$pandalanguage$pandac$Type* $tmp1429 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1426), p_types);
                    $tmp1425 = $tmp1429;
                    $tmp1424 = $tmp1425;
                    base1423 = $tmp1424;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1424));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1425));
                    panda$core$Panda$unref$panda$core$Object($tmp1426);
                    panda$collections$Array* $tmp1433 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1433);
                    $tmp1432 = $tmp1433;
                    $tmp1431 = $tmp1432;
                    remappedArgs1430 = $tmp1431;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1431));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1432));
                    panda$core$Int64$init$builtin_int64(&$tmp1435, 1);
                    ITable* $tmp1436 = ((panda$collections$CollectionView*) self->subtypes)->$class->itable;
                    while ($tmp1436->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1436 = $tmp1436->next;
                    }
                    $fn1438 $tmp1437 = $tmp1436->methods[0];
                    panda$core$Int64 $tmp1439 = $tmp1437(((panda$collections$CollectionView*) self->subtypes));
                    panda$core$Bit$init$builtin_bit(&$tmp1440, false);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1434, $tmp1435, $tmp1439, $tmp1440);
                    int64_t $tmp1442 = $tmp1434.min.value;
                    panda$core$Int64 i1441 = { $tmp1442 };
                    int64_t $tmp1444 = $tmp1434.max.value;
                    bool $tmp1445 = $tmp1434.inclusive.value;
                    if ($tmp1445) goto $l1452; else goto $l1453;
                    $l1452:;
                    if ($tmp1442 <= $tmp1444) goto $l1446; else goto $l1448;
                    $l1453:;
                    if ($tmp1442 < $tmp1444) goto $l1446; else goto $l1448;
                    $l1446:;
                    {
                        panda$core$Object* $tmp1456 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1441);
                        $tmp1455 = $tmp1456;
                        org$pandalanguage$pandac$Type* $tmp1457 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1455), p_types);
                        $tmp1454 = $tmp1457;
                        panda$collections$Array$add$panda$collections$Array$T(remappedArgs1430, ((panda$core$Object*) $tmp1454));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1454));
                        panda$core$Panda$unref$panda$core$Object($tmp1455);
                    }
                    $l1449:;
                    int64_t $tmp1459 = $tmp1444 - i1441.value;
                    if ($tmp1445) goto $l1460; else goto $l1461;
                    $l1460:;
                    if ((uint64_t) $tmp1459 >= 1) goto $l1458; else goto $l1448;
                    $l1461:;
                    if ((uint64_t) $tmp1459 > 1) goto $l1458; else goto $l1448;
                    $l1458:;
                    i1441.value += 1;
                    goto $l1446;
                    $l1448:;
                    org$pandalanguage$pandac$Type* $tmp1466 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base1423, ((panda$collections$ListView*) remappedArgs1430));
                    $tmp1465 = $tmp1466;
                    $tmp1464 = $tmp1465;
                    $returnValue1395 = $tmp1464;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1464));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1465));
                    $tmp1422 = 0;
                    goto $l1420;
                    $l1467:;
                    $tmp1382 = 3;
                    goto $l1380;
                    $l1468:;
                    return $returnValue1395;
                }
                $l1420:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remappedArgs1430));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1423));
                base1423 = NULL;
                remappedArgs1430 = NULL;
                switch ($tmp1422) {
                    case 0: goto $l1467;
                }
                $l1470:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1471, 1);
            panda$core$Bit $tmp1472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91399.$rawValue, $tmp1471);
            if ($tmp1472.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp1477, 0);
                panda$core$Object* $tmp1478 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1477);
                $tmp1476 = $tmp1478;
                org$pandalanguage$pandac$Type* $tmp1479 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1476), p_types);
                $tmp1475 = $tmp1479;
                org$pandalanguage$pandac$Type* $tmp1480 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1475);
                $tmp1474 = $tmp1480;
                $tmp1473 = $tmp1474;
                $returnValue1395 = $tmp1473;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1473));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1474));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1475));
                panda$core$Panda$unref$panda$core$Object($tmp1476);
                $tmp1382 = 4;
                goto $l1380;
                $l1481:;
                return $returnValue1395;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1486, 15);
            panda$core$Bit $tmp1487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91399.$rawValue, $tmp1486);
            bool $tmp1485 = $tmp1487.value;
            if ($tmp1485) goto $l1488;
            panda$core$Int64$init$builtin_int64(&$tmp1489, 14);
            panda$core$Bit $tmp1490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91399.$rawValue, $tmp1489);
            $tmp1485 = $tmp1490.value;
            $l1488:;
            panda$core$Bit $tmp1491 = { $tmp1485 };
            bool $tmp1484 = $tmp1491.value;
            if ($tmp1484) goto $l1492;
            panda$core$Int64$init$builtin_int64(&$tmp1493, 17);
            panda$core$Bit $tmp1494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91399.$rawValue, $tmp1493);
            $tmp1484 = $tmp1494.value;
            $l1492:;
            panda$core$Bit $tmp1495 = { $tmp1484 };
            bool $tmp1483 = $tmp1495.value;
            if ($tmp1483) goto $l1496;
            panda$core$Int64$init$builtin_int64(&$tmp1497, 16);
            panda$core$Bit $tmp1498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91399.$rawValue, $tmp1497);
            $tmp1483 = $tmp1498.value;
            $l1496:;
            panda$core$Bit $tmp1499 = { $tmp1483 };
            if ($tmp1499.value) {
            {
                int $tmp1502;
                {
                    panda$collections$Array* $tmp1506 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1506);
                    $tmp1505 = $tmp1506;
                    $tmp1504 = $tmp1505;
                    parameters1503 = $tmp1504;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1504));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1505));
                    ITable* $tmp1507 = ((panda$collections$CollectionView*) self->subtypes)->$class->itable;
                    while ($tmp1507->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1507 = $tmp1507->next;
                    }
                    $fn1509 $tmp1508 = $tmp1507->methods[0];
                    panda$core$Int64 $tmp1510 = $tmp1508(((panda$collections$CollectionView*) self->subtypes));
                    panda$core$Int64$init$builtin_int64(&$tmp1511, 1);
                    panda$core$Bit $tmp1512 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1510, $tmp1511);
                    if ($tmp1512.value) goto $l1513; else goto $l1514;
                    $l1514:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1515, (panda$core$Int64) { 623 });
                    abort();
                    $l1513:;
                    panda$core$Int64$init$builtin_int64(&$tmp1517, 0);
                    ITable* $tmp1518 = ((panda$collections$CollectionView*) self->subtypes)->$class->itable;
                    while ($tmp1518->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1518 = $tmp1518->next;
                    }
                    $fn1520 $tmp1519 = $tmp1518->methods[0];
                    panda$core$Int64 $tmp1521 = $tmp1519(((panda$collections$CollectionView*) self->subtypes));
                    panda$core$Int64$init$builtin_int64(&$tmp1522, 1);
                    panda$core$Int64 $tmp1523 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1521, $tmp1522);
                    panda$core$Bit$init$builtin_bit(&$tmp1524, false);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1516, $tmp1517, $tmp1523, $tmp1524);
                    int64_t $tmp1526 = $tmp1516.min.value;
                    panda$core$Int64 i1525 = { $tmp1526 };
                    int64_t $tmp1528 = $tmp1516.max.value;
                    bool $tmp1529 = $tmp1516.inclusive.value;
                    if ($tmp1529) goto $l1536; else goto $l1537;
                    $l1536:;
                    if ($tmp1526 <= $tmp1528) goto $l1530; else goto $l1532;
                    $l1537:;
                    if ($tmp1526 < $tmp1528) goto $l1530; else goto $l1532;
                    $l1530:;
                    {
                        panda$core$Object* $tmp1540 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1525);
                        $tmp1539 = $tmp1540;
                        org$pandalanguage$pandac$Type* $tmp1541 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1539), p_types);
                        $tmp1538 = $tmp1541;
                        panda$collections$Array$add$panda$collections$Array$T(parameters1503, ((panda$core$Object*) $tmp1538));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1538));
                        panda$core$Panda$unref$panda$core$Object($tmp1539);
                    }
                    $l1533:;
                    int64_t $tmp1543 = $tmp1528 - i1525.value;
                    if ($tmp1529) goto $l1544; else goto $l1545;
                    $l1544:;
                    if ((uint64_t) $tmp1543 >= 1) goto $l1542; else goto $l1532;
                    $l1545:;
                    if ((uint64_t) $tmp1543 > 1) goto $l1542; else goto $l1532;
                    $l1542:;
                    i1525.value += 1;
                    goto $l1530;
                    $l1532:;
                    ITable* $tmp1552 = ((panda$collections$CollectionView*) self->subtypes)->$class->itable;
                    while ($tmp1552->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1552 = $tmp1552->next;
                    }
                    $fn1554 $tmp1553 = $tmp1552->methods[0];
                    panda$core$Int64 $tmp1555 = $tmp1553(((panda$collections$CollectionView*) self->subtypes));
                    panda$core$Int64$init$builtin_int64(&$tmp1556, 1);
                    panda$core$Int64 $tmp1557 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1555, $tmp1556);
                    panda$core$Object* $tmp1558 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1557);
                    $tmp1551 = $tmp1558;
                    org$pandalanguage$pandac$Type* $tmp1559 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1551), p_types);
                    $tmp1550 = $tmp1559;
                    org$pandalanguage$pandac$Type* $tmp1560 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->position, self->typeKind, ((panda$collections$ListView*) parameters1503), $tmp1550);
                    $tmp1549 = $tmp1560;
                    $tmp1548 = $tmp1549;
                    $returnValue1395 = $tmp1548;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1548));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1549));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1550));
                    panda$core$Panda$unref$panda$core$Object($tmp1551);
                    $tmp1502 = 0;
                    goto $l1500;
                    $l1561:;
                    $tmp1382 = 5;
                    goto $l1380;
                    $l1562:;
                    return $returnValue1395;
                }
                $l1500:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1503));
                parameters1503 = NULL;
                switch ($tmp1502) {
                    case 0: goto $l1561;
                }
                $l1564:;
            }
            }
            else {
            {
                $tmp1565 = self;
                $returnValue1395 = $tmp1565;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1565));
                $tmp1382 = 6;
                goto $l1380;
                $l1566:;
                return $returnValue1395;
            }
            }
            }
            }
            }
        }
    }
    $tmp1382 = -1;
    goto $l1380;
    $l1380:;
    panda$core$Int64$init$builtin_int64(&$tmp1569, 6);
    panda$core$Bit $tmp1570 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($returnValue1395->typeKind.$rawValue, $tmp1569);
    if ($tmp1570.value) goto $l1571; else goto $l1572;
    $l1572:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1573, (panda$core$Int64) { 601 }, &$s1574);
    abort();
    $l1571:;
    switch ($tmp1382) {
        case -1: goto $l1568;
        case 6: goto $l1566;
        case 5: goto $l1562;
        case 0: goto $l1397;
        case 1: goto $l1411;
        case 2: goto $l1415;
        case 3: goto $l1468;
        case 4: goto $l1481;
    }
    $l1568:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue1575;
    panda$core$Int64 $tmp1576 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $returnValue1575 = $tmp1576;
    return $returnValue1575;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $returnValue1578;
    panda$core$String* $tmp1579;
    $tmp1579 = self->name;
    $returnValue1578 = $tmp1579;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1579));
    return $returnValue1578;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1583;
    {
    }
    $tmp1583 = -1;
    goto $l1581;
    $l1581:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1583) {
        case -1: goto $l1584;
    }
    $l1584:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

