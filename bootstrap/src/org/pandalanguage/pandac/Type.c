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
typedef panda$collections$Iterator* (*$fn194)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn201)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn212)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn265)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn272)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn283)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn355)(panda$core$Equatable*, panda$core$Equatable*);

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
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5895082338763246016, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -1180377256514028899, NULL };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s1074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 106, -1489654704582770111, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 180, -8366325379630919520, NULL };
static panda$core$String $s1502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 181, -4388988894214124261, NULL };

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
    panda$core$Int64$init$builtin_int64(&$tmp9, 6);
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
    panda$core$Int64$init$builtin_int64(&$tmp24, 6);
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
    panda$core$Int64$init$builtin_int64(&$tmp84, 6);
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
    panda$core$Char8 $tmp142;
    panda$core$UInt8 $tmp143;
    org$pandalanguage$pandac$Symbol$Kind $tmp144;
    panda$core$Int64 $tmp145;
    panda$core$String* $tmp146;
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
                        bool $tmp137 = self->resolved.value;
                        if (!$tmp137) goto $l138;
                        $tmp137 = t127->resolved.value;
                        $l138:;
                        panda$core$Bit $tmp139 = { $tmp137 };
                        self->resolved = $tmp139;
                    }
                    $tmp126 = -1;
                    goto $l124;
                    $l124:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t127));
                    t127 = NULL;
                    switch ($tmp126) {
                        case -1: goto $l140;
                    }
                    $l140:;
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
                case -1: goto $l141;
            }
            $l141:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp143, 62);
        panda$core$Char8$init$panda$core$UInt8(&$tmp142, $tmp143);
        panda$core$MutableString$append$panda$core$Char8(name97, $tmp142);
        panda$core$Int64$init$builtin_int64(&$tmp145, 6);
        org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp144, $tmp145);
        panda$core$String* $tmp147 = panda$core$MutableString$finish$R$panda$core$String(name97);
        $tmp146 = $tmp147;
        org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp144, self->position, $tmp146);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
    }
    $tmp90 = -1;
    goto $l88;
    $l88:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator102));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name97));
    name97 = NULL;
    separator102 = NULL;
    switch ($tmp90) {
        case -1: goto $l148;
    }
    $l148:;
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    panda$core$Weak* $tmp149;
    panda$core$Weak* $tmp150;
    org$pandalanguage$pandac$Type$Kind $tmp152;
    panda$core$Int64 $tmp153;
    panda$core$Weak* $tmp154;
    panda$core$Weak* $tmp155;
    panda$core$Weak* $tmp156;
    panda$core$Bit $tmp158;
    panda$collections$Array* $tmp159;
    panda$collections$Array* $tmp160;
    org$pandalanguage$pandac$Symbol$Kind $tmp161;
    panda$core$Int64 $tmp162;
    panda$core$String* $tmp163;
    panda$core$String* $tmp164;
    panda$core$String* $tmp165;
    panda$core$String* $tmp166;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Weak* $tmp151 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp151, ((panda$core$Object*) NULL));
    $tmp150 = $tmp151;
    $tmp149 = $tmp150;
    self->parameter = $tmp149;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
    panda$core$Int64$init$builtin_int64(&$tmp153, 12);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp152, $tmp153);
    self->typeKind = $tmp152;
    {
        $tmp154 = self->parameter;
        panda$core$Weak* $tmp157 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp157, ((panda$core$Object*) p_param));
        $tmp156 = $tmp157;
        $tmp155 = $tmp156;
        self->parameter = $tmp155;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
    }
    panda$core$Bit$init$builtin_bit(&$tmp158, true);
    self->resolved = $tmp158;
    {
        $tmp159 = self->subtypes;
        $tmp160 = NULL;
        self->subtypes = $tmp160;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp159));
    }
    panda$core$Int64$init$builtin_int64(&$tmp162, 6);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp161, $tmp162);
    panda$core$String* $tmp167 = panda$core$String$convert$R$panda$core$String(p_param->owner);
    $tmp166 = $tmp167;
    panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp166, &$s168);
    $tmp165 = $tmp169;
    panda$core$String* $tmp170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp165, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
    $tmp164 = $tmp170;
    panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp164, &$s171);
    $tmp163 = $tmp172;
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp161, self->position, $tmp163);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp163));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_base, panda$collections$ListView* p_arguments) {
    panda$core$Bit resolved176;
    panda$core$MutableString* name177 = NULL;
    panda$core$MutableString* $tmp178;
    panda$core$MutableString* $tmp179;
    panda$core$Char8 $tmp181;
    panda$core$UInt8 $tmp182;
    panda$core$String* separator183 = NULL;
    panda$core$String* $tmp184;
    panda$collections$Iterator* Iter$101$9189 = NULL;
    panda$collections$Iterator* $tmp190;
    panda$collections$Iterator* $tmp191;
    org$pandalanguage$pandac$Type* a207 = NULL;
    org$pandalanguage$pandac$Type* $tmp208;
    panda$core$Object* $tmp209;
    panda$core$String* $tmp217;
    panda$core$String* $tmp218;
    panda$core$Char8 $tmp222;
    panda$core$UInt8 $tmp223;
    panda$collections$Array* subtypes224 = NULL;
    panda$collections$Array* $tmp225;
    panda$collections$Array* $tmp226;
    org$pandalanguage$pandac$Type* $returnValue228;
    org$pandalanguage$pandac$Type* $tmp229;
    org$pandalanguage$pandac$Type* $tmp230;
    panda$core$String* $tmp232;
    org$pandalanguage$pandac$Type$Kind $tmp234;
    panda$core$Int64 $tmp235;
    panda$collections$ImmutableArray* $tmp236;
    int $tmp175;
    {
        resolved176 = p_base->resolved;
        panda$core$MutableString* $tmp180 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp180);
        $tmp179 = $tmp180;
        $tmp178 = $tmp179;
        name177 = $tmp178;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
        panda$core$MutableString$append$panda$core$String(name177, ((org$pandalanguage$pandac$Symbol*) p_base)->name);
        panda$core$UInt8$init$builtin_uint8(&$tmp182, 60);
        panda$core$Char8$init$panda$core$UInt8(&$tmp181, $tmp182);
        panda$core$MutableString$append$panda$core$Char8(name177, $tmp181);
        $tmp184 = &$s185;
        separator183 = $tmp184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
        {
            int $tmp188;
            {
                ITable* $tmp192 = ((panda$collections$Iterable*) p_arguments)->$class->itable;
                while ($tmp192->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp192 = $tmp192->next;
                }
                $fn194 $tmp193 = $tmp192->methods[0];
                panda$collections$Iterator* $tmp195 = $tmp193(((panda$collections$Iterable*) p_arguments));
                $tmp191 = $tmp195;
                $tmp190 = $tmp191;
                Iter$101$9189 = $tmp190;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp190));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
                $l196:;
                ITable* $tmp199 = Iter$101$9189->$class->itable;
                while ($tmp199->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp199 = $tmp199->next;
                }
                $fn201 $tmp200 = $tmp199->methods[0];
                panda$core$Bit $tmp202 = $tmp200(Iter$101$9189);
                panda$core$Bit $tmp203 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp202);
                bool $tmp198 = $tmp203.value;
                if (!$tmp198) goto $l197;
                {
                    int $tmp206;
                    {
                        ITable* $tmp210 = Iter$101$9189->$class->itable;
                        while ($tmp210->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp210 = $tmp210->next;
                        }
                        $fn212 $tmp211 = $tmp210->methods[1];
                        panda$core$Object* $tmp213 = $tmp211(Iter$101$9189);
                        $tmp209 = $tmp213;
                        $tmp208 = ((org$pandalanguage$pandac$Type*) $tmp209);
                        a207 = $tmp208;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
                        panda$core$Panda$unref$panda$core$Object($tmp209);
                        bool $tmp214 = resolved176.value;
                        if (!$tmp214) goto $l215;
                        $tmp214 = a207->resolved.value;
                        $l215:;
                        panda$core$Bit $tmp216 = { $tmp214 };
                        resolved176 = $tmp216;
                        panda$core$MutableString$append$panda$core$String(name177, separator183);
                        panda$core$MutableString$append$panda$core$String(name177, ((org$pandalanguage$pandac$Symbol*) a207)->name);
                        {
                            $tmp217 = separator183;
                            $tmp218 = &$s219;
                            separator183 = $tmp218;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp218));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
                        }
                    }
                    $tmp206 = -1;
                    goto $l204;
                    $l204:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a207));
                    a207 = NULL;
                    switch ($tmp206) {
                        case -1: goto $l220;
                    }
                    $l220:;
                }
                goto $l196;
                $l197:;
            }
            $tmp188 = -1;
            goto $l186;
            $l186:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$101$9189));
            Iter$101$9189 = NULL;
            switch ($tmp188) {
                case -1: goto $l221;
            }
            $l221:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp223, 62);
        panda$core$Char8$init$panda$core$UInt8(&$tmp222, $tmp223);
        panda$core$MutableString$append$panda$core$Char8(name177, $tmp222);
        panda$collections$Array* $tmp227 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp227);
        $tmp226 = $tmp227;
        $tmp225 = $tmp226;
        subtypes224 = $tmp225;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp225));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226));
        panda$collections$Array$add$panda$collections$Array$T(subtypes224, ((panda$core$Object*) p_base));
        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(subtypes224, ((panda$collections$CollectionView*) p_arguments));
        org$pandalanguage$pandac$Type* $tmp231 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp233 = panda$core$MutableString$finish$R$panda$core$String(name177);
        $tmp232 = $tmp233;
        panda$core$Int64$init$builtin_int64(&$tmp235, 11);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp234, $tmp235);
        panda$collections$ImmutableArray* $tmp237 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes224);
        $tmp236 = $tmp237;
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp231, $tmp232, $tmp234, ((org$pandalanguage$pandac$Symbol*) p_base)->position, ((panda$collections$ListView*) $tmp236), resolved176);
        $tmp230 = $tmp231;
        $tmp229 = $tmp230;
        $returnValue228 = $tmp229;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp229));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
        $tmp175 = 0;
        goto $l173;
        $l238:;
        return $returnValue228;
    }
    $l173:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes224));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator183));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name177));
    name177 = NULL;
    separator183 = NULL;
    subtypes224 = NULL;
    switch ($tmp175) {
        case 0: goto $l238;
    }
    $l240:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type$Kind p_kind, panda$collections$ListView* p_parameterTypes, org$pandalanguage$pandac$Type* p_returnType) {
    panda$core$Bit resolved244;
    panda$core$MutableString* name245 = NULL;
    panda$core$MutableString* $tmp246;
    panda$core$MutableString* $tmp247;
    panda$collections$Array* subtypes250 = NULL;
    panda$collections$Array* $tmp251;
    panda$collections$Array* $tmp252;
    panda$core$String* separator254 = NULL;
    panda$core$String* $tmp255;
    panda$collections$Iterator* Iter$121$9260 = NULL;
    panda$collections$Iterator* $tmp261;
    panda$collections$Iterator* $tmp262;
    org$pandalanguage$pandac$Type* p278 = NULL;
    org$pandalanguage$pandac$Type* $tmp279;
    panda$core$Object* $tmp280;
    panda$core$String* $tmp288;
    panda$core$String* $tmp289;
    org$pandalanguage$pandac$Type$Kind $match$128_9293;
    panda$core$Int64 $tmp294;
    panda$core$Int64 $tmp297;
    panda$core$Int64 $tmp300;
    panda$core$Int64 $tmp303;
    panda$core$Bit $tmp306;
    org$pandalanguage$pandac$Type* $tmp310;
    panda$core$Char8 $tmp313;
    panda$core$UInt8 $tmp314;
    org$pandalanguage$pandac$Type* $returnValue315;
    org$pandalanguage$pandac$Type* $tmp316;
    org$pandalanguage$pandac$Type* $tmp317;
    panda$core$String* $tmp319;
    panda$collections$ImmutableArray* $tmp321;
    int $tmp243;
    {
        resolved244 = p_returnType->resolved;
        panda$core$MutableString* $tmp248 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp248, &$s249);
        $tmp247 = $tmp248;
        $tmp246 = $tmp247;
        name245 = $tmp246;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
        panda$collections$Array* $tmp253 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp253);
        $tmp252 = $tmp253;
        $tmp251 = $tmp252;
        subtypes250 = $tmp251;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp251));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp252));
        $tmp255 = &$s256;
        separator254 = $tmp255;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
        {
            int $tmp259;
            {
                ITable* $tmp263 = ((panda$collections$Iterable*) p_parameterTypes)->$class->itable;
                while ($tmp263->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp263 = $tmp263->next;
                }
                $fn265 $tmp264 = $tmp263->methods[0];
                panda$collections$Iterator* $tmp266 = $tmp264(((panda$collections$Iterable*) p_parameterTypes));
                $tmp262 = $tmp266;
                $tmp261 = $tmp262;
                Iter$121$9260 = $tmp261;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
                $l267:;
                ITable* $tmp270 = Iter$121$9260->$class->itable;
                while ($tmp270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp270 = $tmp270->next;
                }
                $fn272 $tmp271 = $tmp270->methods[0];
                panda$core$Bit $tmp273 = $tmp271(Iter$121$9260);
                panda$core$Bit $tmp274 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp273);
                bool $tmp269 = $tmp274.value;
                if (!$tmp269) goto $l268;
                {
                    int $tmp277;
                    {
                        ITable* $tmp281 = Iter$121$9260->$class->itable;
                        while ($tmp281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp281 = $tmp281->next;
                        }
                        $fn283 $tmp282 = $tmp281->methods[1];
                        panda$core$Object* $tmp284 = $tmp282(Iter$121$9260);
                        $tmp280 = $tmp284;
                        $tmp279 = ((org$pandalanguage$pandac$Type*) $tmp280);
                        p278 = $tmp279;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
                        panda$core$Panda$unref$panda$core$Object($tmp280);
                        panda$collections$Array$add$panda$collections$Array$T(subtypes250, ((panda$core$Object*) p278));
                        bool $tmp285 = resolved244.value;
                        if (!$tmp285) goto $l286;
                        $tmp285 = p278->resolved.value;
                        $l286:;
                        panda$core$Bit $tmp287 = { $tmp285 };
                        resolved244 = $tmp287;
                        panda$core$MutableString$append$panda$core$String(name245, separator254);
                        panda$core$MutableString$append$panda$core$String(name245, ((org$pandalanguage$pandac$Symbol*) p278)->name);
                        {
                            $tmp288 = separator254;
                            $tmp289 = &$s290;
                            separator254 = $tmp289;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp289));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
                        }
                    }
                    $tmp277 = -1;
                    goto $l275;
                    $l275:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p278));
                    p278 = NULL;
                    switch ($tmp277) {
                        case -1: goto $l291;
                    }
                    $l291:;
                }
                goto $l267;
                $l268:;
            }
            $tmp259 = -1;
            goto $l257;
            $l257:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$121$9260));
            Iter$121$9260 = NULL;
            switch ($tmp259) {
                case -1: goto $l292;
            }
            $l292:;
        }
        {
            $match$128_9293 = p_kind;
            panda$core$Int64$init$builtin_int64(&$tmp294, 14);
            panda$core$Bit $tmp295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9293.$rawValue, $tmp294);
            if ($tmp295.value) {
            {
                panda$core$MutableString$append$panda$core$String(name245, &$s296);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp297, 15);
            panda$core$Bit $tmp298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9293.$rawValue, $tmp297);
            if ($tmp298.value) {
            {
                panda$core$MutableString$append$panda$core$String(name245, &$s299);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp300, 16);
            panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9293.$rawValue, $tmp300);
            if ($tmp301.value) {
            {
                panda$core$MutableString$append$panda$core$String(name245, &$s302);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp303, 17);
            panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9293.$rawValue, $tmp303);
            if ($tmp304.value) {
            {
                panda$core$MutableString$append$panda$core$String(name245, &$s305);
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp306, false);
                if ($tmp306.value) goto $l307; else goto $l308;
                $l308:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s309, (panda$core$Int64) { 138 });
                abort();
                $l307:;
            }
            }
            }
            }
            }
        }
        panda$collections$Array$add$panda$collections$Array$T(subtypes250, ((panda$core$Object*) p_returnType));
        org$pandalanguage$pandac$Type* $tmp311 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp310 = $tmp311;
        panda$core$Bit $tmp312 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_returnType, $tmp310);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
        if ($tmp312.value) {
        {
            panda$core$MutableString$append$panda$core$String(name245, ((org$pandalanguage$pandac$Symbol*) p_returnType)->name);
        }
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp314, 41);
        panda$core$Char8$init$panda$core$UInt8(&$tmp313, $tmp314);
        panda$core$MutableString$append$panda$core$Char8(name245, $tmp313);
        org$pandalanguage$pandac$Type* $tmp318 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp320 = panda$core$MutableString$finish$R$panda$core$String(name245);
        $tmp319 = $tmp320;
        panda$collections$ImmutableArray* $tmp322 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes250);
        $tmp321 = $tmp322;
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp318, $tmp319, p_kind, p_position, ((panda$collections$ListView*) $tmp321), resolved244);
        $tmp317 = $tmp318;
        $tmp316 = $tmp317;
        $returnValue315 = $tmp316;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp316));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
        $tmp243 = 0;
        goto $l241;
        $l323:;
        return $returnValue315;
    }
    $l241:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator254));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes250));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name245));
    name245 = NULL;
    subtypes250 = NULL;
    separator254 = NULL;
    switch ($tmp243) {
        case 0: goto $l323;
    }
    $l325:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp328;
    panda$core$Int64 $tmp331;
    panda$core$Int64 $tmp335;
    panda$core$String* $tmp341;
    panda$core$String* $tmp342;
    panda$core$Int64 $returnValue347;
    panda$core$Int64$init$builtin_int64(&$tmp328, 2);
    panda$core$Bit $tmp329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp328);
    bool $tmp327 = $tmp329.value;
    if ($tmp327) goto $l330;
    panda$core$Int64$init$builtin_int64(&$tmp331, 3);
    panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp331);
    $tmp327 = $tmp332.value;
    $l330:;
    panda$core$Bit $tmp333 = { $tmp327 };
    bool $tmp326 = $tmp333.value;
    if ($tmp326) goto $l334;
    panda$core$Int64$init$builtin_int64(&$tmp335, 10);
    panda$core$Bit $tmp336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp335);
    $tmp326 = $tmp336.value;
    $l334:;
    panda$core$Bit $tmp337 = { $tmp326 };
    if ($tmp337.value) goto $l338; else goto $l339;
    $l339:;
    panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s343, ((panda$core$Object*) self));
    $tmp342 = $tmp344;
    panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp342, &$s345);
    $tmp341 = $tmp346;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s340, (panda$core$Int64) { 149 }, $tmp341);
    abort();
    $l338:;
    $returnValue347 = self->position.line;
    return $returnValue347;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue349;
    panda$core$Bit $tmp350 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue349 = $tmp350;
    return $returnValue349;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue352;
    ITable* $tmp353 = ((panda$core$Equatable*) self->name)->$class->itable;
    while ($tmp353->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp353 = $tmp353->next;
    }
    $fn355 $tmp354 = $tmp353->methods[1];
    panda$core$Bit $tmp356 = $tmp354(((panda$core$Equatable*) self->name), ((panda$core$Equatable*) ((org$pandalanguage$pandac$Symbol*) p_other)->name));
    $returnValue352 = $tmp356;
    return $returnValue352;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue358;
    org$pandalanguage$pandac$Type* $tmp359;
    org$pandalanguage$pandac$Type* $tmp360;
    org$pandalanguage$pandac$Type$Kind $tmp363;
    panda$core$Int64 $tmp364;
    org$pandalanguage$pandac$Position $tmp365;
    panda$core$Bit $tmp366;
    org$pandalanguage$pandac$Type* $tmp361 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp364, 4);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp363, $tmp364);
    org$pandalanguage$pandac$Position$init(&$tmp365);
    panda$core$Bit$init$builtin_bit(&$tmp366, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp361, &$s362, $tmp363, $tmp365, $tmp366);
    $tmp360 = $tmp361;
    $tmp359 = $tmp360;
    $returnValue358 = $tmp359;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp359));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp360));
    return $returnValue358;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue368;
    org$pandalanguage$pandac$Type* $tmp369;
    org$pandalanguage$pandac$Type* $tmp370;
    org$pandalanguage$pandac$Type$Kind $tmp373;
    panda$core$Int64 $tmp374;
    org$pandalanguage$pandac$Position $tmp375;
    panda$core$Bit $tmp376;
    org$pandalanguage$pandac$Type* $tmp371 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp374, 13);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp373, $tmp374);
    org$pandalanguage$pandac$Position$init(&$tmp375);
    panda$core$Bit$init$builtin_bit(&$tmp376, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp371, &$s372, $tmp373, $tmp375, $tmp376);
    $tmp370 = $tmp371;
    $tmp369 = $tmp370;
    $returnValue368 = $tmp369;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp369));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
    return $returnValue368;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue378;
    org$pandalanguage$pandac$Type* $tmp379;
    org$pandalanguage$pandac$Type* $tmp380;
    org$pandalanguage$pandac$Type$Kind $tmp383;
    panda$core$Int64 $tmp384;
    org$pandalanguage$pandac$Position $tmp385;
    panda$core$Bit $tmp386;
    org$pandalanguage$pandac$Type* $tmp381 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp384, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp383, $tmp384);
    org$pandalanguage$pandac$Position$init(&$tmp385);
    panda$core$Bit$init$builtin_bit(&$tmp386, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp381, &$s382, $tmp383, $tmp385, $tmp386);
    $tmp380 = $tmp381;
    $tmp379 = $tmp380;
    $returnValue378 = $tmp379;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp379));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
    return $returnValue378;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes391 = NULL;
    panda$collections$Array* $tmp392;
    panda$collections$Array* $tmp393;
    org$pandalanguage$pandac$Type* $tmp395;
    org$pandalanguage$pandac$Type* $returnValue397;
    org$pandalanguage$pandac$Type* $tmp398;
    org$pandalanguage$pandac$Type* $tmp399;
    org$pandalanguage$pandac$Type$Kind $tmp402;
    panda$core$Int64 $tmp403;
    org$pandalanguage$pandac$Position $tmp404;
    panda$core$Bit $tmp405;
    int $tmp390;
    {
        panda$collections$Array* $tmp394 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp394);
        $tmp393 = $tmp394;
        $tmp392 = $tmp393;
        subtypes391 = $tmp392;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp392));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
        org$pandalanguage$pandac$Type* $tmp396 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp395 = $tmp396;
        panda$collections$Array$add$panda$collections$Array$T(subtypes391, ((panda$core$Object*) $tmp395));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp395));
        org$pandalanguage$pandac$Type* $tmp400 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp403, 1);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp402, $tmp403);
        org$pandalanguage$pandac$Position$init(&$tmp404);
        panda$core$Bit$init$builtin_bit(&$tmp405, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp400, &$s401, $tmp402, $tmp404, ((panda$collections$ListView*) subtypes391), $tmp405);
        $tmp399 = $tmp400;
        $tmp398 = $tmp399;
        $returnValue397 = $tmp398;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp399));
        $tmp390 = 0;
        goto $l388;
        $l406:;
        return $returnValue397;
    }
    $l388:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes391));
    subtypes391 = NULL;
    switch ($tmp390) {
        case 0: goto $l406;
    }
    $l408:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue409;
    org$pandalanguage$pandac$Type* $tmp410;
    org$pandalanguage$pandac$Type* $tmp411;
    org$pandalanguage$pandac$Type$Kind $tmp414;
    panda$core$Int64 $tmp415;
    org$pandalanguage$pandac$Position $tmp416;
    panda$core$Bit $tmp417;
    org$pandalanguage$pandac$Type* $tmp412 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp415, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp414, $tmp415);
    org$pandalanguage$pandac$Position$init(&$tmp416);
    panda$core$Bit$init$builtin_bit(&$tmp417, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp412, &$s413, $tmp414, $tmp416, $tmp417);
    $tmp411 = $tmp412;
    $tmp410 = $tmp411;
    $returnValue409 = $tmp410;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp410));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp411));
    return $returnValue409;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue419;
    org$pandalanguage$pandac$Type* $tmp420;
    org$pandalanguage$pandac$Type* $tmp421;
    org$pandalanguage$pandac$Type$Kind $tmp424;
    panda$core$Int64 $tmp425;
    org$pandalanguage$pandac$Position $tmp426;
    panda$core$Bit $tmp427;
    org$pandalanguage$pandac$Type* $tmp422 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp425, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp424, $tmp425);
    org$pandalanguage$pandac$Position$init(&$tmp426);
    panda$core$Bit$init$builtin_bit(&$tmp427, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp422, &$s423, $tmp424, $tmp426, $tmp427);
    $tmp421 = $tmp422;
    $tmp420 = $tmp421;
    $returnValue419 = $tmp420;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp420));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
    return $returnValue419;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue429;
    org$pandalanguage$pandac$Type* $tmp430;
    org$pandalanguage$pandac$Type* $tmp431;
    org$pandalanguage$pandac$Type$Kind $tmp434;
    panda$core$Int64 $tmp435;
    org$pandalanguage$pandac$Position $tmp436;
    panda$core$Bit $tmp437;
    org$pandalanguage$pandac$Type* $tmp432 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp435, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp434, $tmp435);
    org$pandalanguage$pandac$Position$init(&$tmp436);
    panda$core$Bit$init$builtin_bit(&$tmp437, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp432, &$s433, $tmp434, $tmp436, $tmp437);
    $tmp431 = $tmp432;
    $tmp430 = $tmp431;
    $returnValue429 = $tmp430;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
    return $returnValue429;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue439;
    org$pandalanguage$pandac$Type* $tmp440;
    org$pandalanguage$pandac$Type* $tmp441;
    org$pandalanguage$pandac$Type$Kind $tmp444;
    panda$core$Int64 $tmp445;
    org$pandalanguage$pandac$Position $tmp446;
    panda$core$Bit $tmp447;
    org$pandalanguage$pandac$Type* $tmp442 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp445, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp444, $tmp445);
    org$pandalanguage$pandac$Position$init(&$tmp446);
    panda$core$Bit$init$builtin_bit(&$tmp447, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp442, &$s443, $tmp444, $tmp446, $tmp447);
    $tmp441 = $tmp442;
    $tmp440 = $tmp441;
    $returnValue439 = $tmp440;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp440));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp441));
    return $returnValue439;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RegularExpression$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue449;
    org$pandalanguage$pandac$Type* $tmp450;
    org$pandalanguage$pandac$Type* $tmp451;
    org$pandalanguage$pandac$Type$Kind $tmp454;
    panda$core$Int64 $tmp455;
    org$pandalanguage$pandac$Position $tmp456;
    panda$core$Bit $tmp457;
    org$pandalanguage$pandac$Type* $tmp452 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp455, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp454, $tmp455);
    org$pandalanguage$pandac$Position$init(&$tmp456);
    panda$core$Bit$init$builtin_bit(&$tmp457, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp452, &$s453, $tmp454, $tmp456, $tmp457);
    $tmp451 = $tmp452;
    $tmp450 = $tmp451;
    $returnValue449 = $tmp450;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp450));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
    return $returnValue449;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue459;
    org$pandalanguage$pandac$Type* $tmp460;
    org$pandalanguage$pandac$Type* $tmp461;
    org$pandalanguage$pandac$Type$Kind $tmp464;
    panda$core$Int64 $tmp465;
    panda$core$Int64 $tmp466;
    org$pandalanguage$pandac$Type* $tmp462 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp465, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp464, $tmp465);
    panda$core$Int64$init$builtin_int64(&$tmp466, 8);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp462, &$s463, $tmp464, $tmp466);
    $tmp461 = $tmp462;
    $tmp460 = $tmp461;
    $returnValue459 = $tmp460;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp460));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
    return $returnValue459;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue468;
    org$pandalanguage$pandac$Type* $tmp469;
    org$pandalanguage$pandac$Type* $tmp470;
    org$pandalanguage$pandac$Type$Kind $tmp473;
    panda$core$Int64 $tmp474;
    panda$core$Int64 $tmp475;
    org$pandalanguage$pandac$Type* $tmp471 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp474, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp473, $tmp474);
    panda$core$Int64$init$builtin_int64(&$tmp475, 16);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp471, &$s472, $tmp473, $tmp475);
    $tmp470 = $tmp471;
    $tmp469 = $tmp470;
    $returnValue468 = $tmp469;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp469));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
    return $returnValue468;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue477;
    org$pandalanguage$pandac$Type* $tmp478;
    org$pandalanguage$pandac$Type* $tmp479;
    org$pandalanguage$pandac$Type$Kind $tmp482;
    panda$core$Int64 $tmp483;
    panda$core$Int64 $tmp484;
    org$pandalanguage$pandac$Type* $tmp480 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp483, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp482, $tmp483);
    panda$core$Int64$init$builtin_int64(&$tmp484, 32);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp480, &$s481, $tmp482, $tmp484);
    $tmp479 = $tmp480;
    $tmp478 = $tmp479;
    $returnValue477 = $tmp478;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp478));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
    return $returnValue477;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue486;
    org$pandalanguage$pandac$Type* $tmp487;
    org$pandalanguage$pandac$Type* $tmp488;
    org$pandalanguage$pandac$Type$Kind $tmp491;
    panda$core$Int64 $tmp492;
    panda$core$Int64 $tmp493;
    org$pandalanguage$pandac$Type* $tmp489 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp492, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp491, $tmp492);
    panda$core$Int64$init$builtin_int64(&$tmp493, 64);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp489, &$s490, $tmp491, $tmp493);
    $tmp488 = $tmp489;
    $tmp487 = $tmp488;
    $returnValue486 = $tmp487;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp487));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp488));
    return $returnValue486;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue495;
    org$pandalanguage$pandac$Type* $tmp496;
    org$pandalanguage$pandac$Type* $tmp497;
    org$pandalanguage$pandac$Type$Kind $tmp500;
    panda$core$Int64 $tmp501;
    panda$core$Int64 $tmp502;
    org$pandalanguage$pandac$Type* $tmp498 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp501, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp500, $tmp501);
    panda$core$Int64$init$builtin_int64(&$tmp502, 8);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp498, &$s499, $tmp500, $tmp502);
    $tmp497 = $tmp498;
    $tmp496 = $tmp497;
    $returnValue495 = $tmp496;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp496));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp497));
    return $returnValue495;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue504;
    org$pandalanguage$pandac$Type* $tmp505;
    org$pandalanguage$pandac$Type* $tmp506;
    org$pandalanguage$pandac$Type$Kind $tmp509;
    panda$core$Int64 $tmp510;
    panda$core$Int64 $tmp511;
    org$pandalanguage$pandac$Type* $tmp507 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp510, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp509, $tmp510);
    panda$core$Int64$init$builtin_int64(&$tmp511, 16);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp507, &$s508, $tmp509, $tmp511);
    $tmp506 = $tmp507;
    $tmp505 = $tmp506;
    $returnValue504 = $tmp505;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp505));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
    return $returnValue504;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue513;
    org$pandalanguage$pandac$Type* $tmp514;
    org$pandalanguage$pandac$Type* $tmp515;
    org$pandalanguage$pandac$Type$Kind $tmp518;
    panda$core$Int64 $tmp519;
    panda$core$Int64 $tmp520;
    org$pandalanguage$pandac$Type* $tmp516 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp519, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp518, $tmp519);
    panda$core$Int64$init$builtin_int64(&$tmp520, 32);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp516, &$s517, $tmp518, $tmp520);
    $tmp515 = $tmp516;
    $tmp514 = $tmp515;
    $returnValue513 = $tmp514;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp514));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp515));
    return $returnValue513;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue522;
    org$pandalanguage$pandac$Type* $tmp523;
    org$pandalanguage$pandac$Type* $tmp524;
    org$pandalanguage$pandac$Type$Kind $tmp527;
    panda$core$Int64 $tmp528;
    panda$core$Int64 $tmp529;
    org$pandalanguage$pandac$Type* $tmp525 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp528, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp527, $tmp528);
    panda$core$Int64$init$builtin_int64(&$tmp529, 64);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp525, &$s526, $tmp527, $tmp529);
    $tmp524 = $tmp525;
    $tmp523 = $tmp524;
    $returnValue522 = $tmp523;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp523));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp524));
    return $returnValue522;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue531;
    org$pandalanguage$pandac$Type* $tmp532;
    org$pandalanguage$pandac$Type* $tmp533;
    org$pandalanguage$pandac$Type$Kind $tmp536;
    panda$core$Int64 $tmp537;
    panda$core$Int64 $tmp538;
    org$pandalanguage$pandac$Type* $tmp534 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp537, 10);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp536, $tmp537);
    panda$core$Int64$init$builtin_int64(&$tmp538, 32);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp534, &$s535, $tmp536, $tmp538);
    $tmp533 = $tmp534;
    $tmp532 = $tmp533;
    $returnValue531 = $tmp532;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp532));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
    return $returnValue531;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue540;
    org$pandalanguage$pandac$Type* $tmp541;
    org$pandalanguage$pandac$Type* $tmp542;
    org$pandalanguage$pandac$Type$Kind $tmp545;
    panda$core$Int64 $tmp546;
    panda$core$Int64 $tmp547;
    org$pandalanguage$pandac$Type* $tmp543 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp546, 10);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp545, $tmp546);
    panda$core$Int64$init$builtin_int64(&$tmp547, 64);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp543, &$s544, $tmp545, $tmp547);
    $tmp542 = $tmp543;
    $tmp541 = $tmp542;
    $returnValue540 = $tmp541;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp541));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
    return $returnValue540;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue549;
    org$pandalanguage$pandac$Type* $tmp550;
    org$pandalanguage$pandac$Type* $tmp551;
    org$pandalanguage$pandac$Type$Kind $tmp554;
    panda$core$Int64 $tmp555;
    org$pandalanguage$pandac$Position $tmp556;
    panda$core$Bit $tmp557;
    org$pandalanguage$pandac$Type* $tmp552 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp555, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp554, $tmp555);
    org$pandalanguage$pandac$Position$init(&$tmp556);
    panda$core$Bit$init$builtin_bit(&$tmp557, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp552, &$s553, $tmp554, $tmp556, $tmp557);
    $tmp551 = $tmp552;
    $tmp550 = $tmp551;
    $returnValue549 = $tmp550;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp550));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp551));
    return $returnValue549;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue559;
    org$pandalanguage$pandac$Type* $tmp560;
    org$pandalanguage$pandac$Type* $tmp561;
    org$pandalanguage$pandac$Type$Kind $tmp564;
    panda$core$Int64 $tmp565;
    org$pandalanguage$pandac$Position $tmp566;
    panda$core$Bit $tmp567;
    org$pandalanguage$pandac$Type* $tmp562 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp565, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp564, $tmp565);
    org$pandalanguage$pandac$Position$init(&$tmp566);
    panda$core$Bit$init$builtin_bit(&$tmp567, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp562, &$s563, $tmp564, $tmp566, $tmp567);
    $tmp561 = $tmp562;
    $tmp560 = $tmp561;
    $returnValue559 = $tmp560;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp560));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp561));
    return $returnValue559;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue569;
    org$pandalanguage$pandac$Type* $tmp570;
    org$pandalanguage$pandac$Type* $tmp571;
    org$pandalanguage$pandac$Type$Kind $tmp574;
    panda$core$Int64 $tmp575;
    org$pandalanguage$pandac$Position $tmp576;
    panda$core$Bit $tmp577;
    org$pandalanguage$pandac$Type* $tmp572 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp575, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp574, $tmp575);
    org$pandalanguage$pandac$Position$init(&$tmp576);
    panda$core$Bit$init$builtin_bit(&$tmp577, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp572, &$s573, $tmp574, $tmp576, $tmp577);
    $tmp571 = $tmp572;
    $tmp570 = $tmp571;
    $returnValue569 = $tmp570;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp570));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp571));
    return $returnValue569;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue579;
    org$pandalanguage$pandac$Type* $tmp580;
    org$pandalanguage$pandac$Type* $tmp581;
    org$pandalanguage$pandac$Type$Kind $tmp584;
    panda$core$Int64 $tmp585;
    org$pandalanguage$pandac$Position $tmp586;
    panda$core$Bit $tmp587;
    org$pandalanguage$pandac$Type* $tmp582 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp585, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp584, $tmp585);
    org$pandalanguage$pandac$Position$init(&$tmp586);
    panda$core$Bit$init$builtin_bit(&$tmp587, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp582, &$s583, $tmp584, $tmp586, $tmp587);
    $tmp581 = $tmp582;
    $tmp580 = $tmp581;
    $returnValue579 = $tmp580;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp580));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
    return $returnValue579;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue589;
    org$pandalanguage$pandac$Type* $tmp590;
    org$pandalanguage$pandac$Type* $tmp591;
    org$pandalanguage$pandac$Type$Kind $tmp594;
    panda$core$Int64 $tmp595;
    org$pandalanguage$pandac$Position $tmp596;
    panda$core$Bit $tmp597;
    org$pandalanguage$pandac$Type* $tmp592 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp595, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp594, $tmp595);
    org$pandalanguage$pandac$Position$init(&$tmp596);
    panda$core$Bit$init$builtin_bit(&$tmp597, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp592, &$s593, $tmp594, $tmp596, $tmp597);
    $tmp591 = $tmp592;
    $tmp590 = $tmp591;
    $returnValue589 = $tmp590;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp590));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp591));
    return $returnValue589;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue599;
    org$pandalanguage$pandac$Type* $tmp600;
    org$pandalanguage$pandac$Type* $tmp601;
    org$pandalanguage$pandac$Type$Kind $tmp604;
    panda$core$Int64 $tmp605;
    org$pandalanguage$pandac$Position $tmp606;
    panda$core$Bit $tmp607;
    org$pandalanguage$pandac$Type* $tmp602 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp605, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp604, $tmp605);
    org$pandalanguage$pandac$Position$init(&$tmp606);
    panda$core$Bit$init$builtin_bit(&$tmp607, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp602, &$s603, $tmp604, $tmp606, $tmp607);
    $tmp601 = $tmp602;
    $tmp600 = $tmp601;
    $returnValue599 = $tmp600;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp600));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
    return $returnValue599;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue609;
    org$pandalanguage$pandac$Type* $tmp610;
    org$pandalanguage$pandac$Type* $tmp611;
    org$pandalanguage$pandac$Type$Kind $tmp614;
    panda$core$Int64 $tmp615;
    org$pandalanguage$pandac$Position $tmp616;
    panda$core$Bit $tmp617;
    org$pandalanguage$pandac$Type* $tmp612 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp615, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp614, $tmp615);
    org$pandalanguage$pandac$Position$init(&$tmp616);
    panda$core$Bit$init$builtin_bit(&$tmp617, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp612, &$s613, $tmp614, $tmp616, $tmp617);
    $tmp611 = $tmp612;
    $tmp610 = $tmp611;
    $returnValue609 = $tmp610;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp610));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp611));
    return $returnValue609;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue619;
    org$pandalanguage$pandac$Type* $tmp620;
    org$pandalanguage$pandac$Type* $tmp621;
    org$pandalanguage$pandac$Type$Kind $tmp624;
    panda$core$Int64 $tmp625;
    org$pandalanguage$pandac$Position $tmp626;
    panda$core$Bit $tmp627;
    org$pandalanguage$pandac$Type* $tmp622 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp625, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp624, $tmp625);
    org$pandalanguage$pandac$Position$init(&$tmp626);
    panda$core$Bit$init$builtin_bit(&$tmp627, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp622, &$s623, $tmp624, $tmp626, $tmp627);
    $tmp621 = $tmp622;
    $tmp620 = $tmp621;
    $returnValue619 = $tmp620;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp620));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp621));
    return $returnValue619;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue629;
    org$pandalanguage$pandac$Type* $tmp630;
    org$pandalanguage$pandac$Type* $tmp631;
    org$pandalanguage$pandac$Type$Kind $tmp634;
    panda$core$Int64 $tmp635;
    org$pandalanguage$pandac$Position $tmp636;
    panda$core$Bit $tmp637;
    org$pandalanguage$pandac$Type* $tmp632 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp635, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp634, $tmp635);
    org$pandalanguage$pandac$Position$init(&$tmp636);
    panda$core$Bit$init$builtin_bit(&$tmp637, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp632, &$s633, $tmp634, $tmp636, $tmp637);
    $tmp631 = $tmp632;
    $tmp630 = $tmp631;
    $returnValue629 = $tmp630;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp630));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp631));
    return $returnValue629;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue639;
    org$pandalanguage$pandac$Type* $tmp640;
    org$pandalanguage$pandac$Type* $tmp641;
    org$pandalanguage$pandac$Type$Kind $tmp644;
    panda$core$Int64 $tmp645;
    org$pandalanguage$pandac$Position $tmp646;
    panda$core$Bit $tmp647;
    org$pandalanguage$pandac$Type* $tmp642 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp645, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp644, $tmp645);
    org$pandalanguage$pandac$Position$init(&$tmp646);
    panda$core$Bit$init$builtin_bit(&$tmp647, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp642, &$s643, $tmp644, $tmp646, $tmp647);
    $tmp641 = $tmp642;
    $tmp640 = $tmp641;
    $returnValue639 = $tmp640;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp640));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp641));
    return $returnValue639;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue649;
    org$pandalanguage$pandac$Type* $tmp650;
    org$pandalanguage$pandac$Type* $tmp651;
    org$pandalanguage$pandac$Type$Kind $tmp654;
    panda$core$Int64 $tmp655;
    org$pandalanguage$pandac$Position $tmp656;
    panda$core$Bit $tmp657;
    org$pandalanguage$pandac$Type* $tmp652 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp655, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp654, $tmp655);
    org$pandalanguage$pandac$Position$init(&$tmp656);
    panda$core$Bit$init$builtin_bit(&$tmp657, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp652, &$s653, $tmp654, $tmp656, $tmp657);
    $tmp651 = $tmp652;
    $tmp650 = $tmp651;
    $returnValue649 = $tmp650;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp650));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp651));
    return $returnValue649;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue659;
    org$pandalanguage$pandac$Type* $tmp660;
    org$pandalanguage$pandac$Type* $tmp661;
    org$pandalanguage$pandac$Type$Kind $tmp664;
    panda$core$Int64 $tmp665;
    org$pandalanguage$pandac$Position $tmp666;
    panda$core$Bit $tmp667;
    org$pandalanguage$pandac$Type* $tmp662 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp665, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp664, $tmp665);
    org$pandalanguage$pandac$Position$init(&$tmp666);
    panda$core$Bit$init$builtin_bit(&$tmp667, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp662, &$s663, $tmp664, $tmp666, $tmp667);
    $tmp661 = $tmp662;
    $tmp660 = $tmp661;
    $returnValue659 = $tmp660;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp660));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp661));
    return $returnValue659;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue669;
    org$pandalanguage$pandac$Type* $tmp670;
    org$pandalanguage$pandac$Type* $tmp671;
    org$pandalanguage$pandac$Type$Kind $tmp674;
    panda$core$Int64 $tmp675;
    org$pandalanguage$pandac$Position $tmp676;
    panda$core$Bit $tmp677;
    org$pandalanguage$pandac$Type* $tmp672 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp675, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp674, $tmp675);
    org$pandalanguage$pandac$Position$init(&$tmp676);
    panda$core$Bit$init$builtin_bit(&$tmp677, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp672, &$s673, $tmp674, $tmp676, $tmp677);
    $tmp671 = $tmp672;
    $tmp670 = $tmp671;
    $returnValue669 = $tmp670;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp670));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
    return $returnValue669;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue679;
    org$pandalanguage$pandac$Type* $tmp680;
    org$pandalanguage$pandac$Type* $tmp681;
    org$pandalanguage$pandac$Type$Kind $tmp684;
    panda$core$Int64 $tmp685;
    org$pandalanguage$pandac$Position $tmp686;
    panda$core$Bit $tmp687;
    org$pandalanguage$pandac$Type* $tmp682 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp685, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp684, $tmp685);
    org$pandalanguage$pandac$Position$init(&$tmp686);
    panda$core$Bit$init$builtin_bit(&$tmp687, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp682, &$s683, $tmp684, $tmp686, $tmp687);
    $tmp681 = $tmp682;
    $tmp680 = $tmp681;
    $returnValue679 = $tmp680;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp680));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp681));
    return $returnValue679;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue689;
    org$pandalanguage$pandac$Type* $tmp690;
    org$pandalanguage$pandac$Type* $tmp691;
    panda$core$String* $tmp693;
    panda$core$String* $tmp694;
    panda$core$Object* $tmp696;
    org$pandalanguage$pandac$Type$Kind $tmp701;
    panda$core$Int64 $tmp702;
    org$pandalanguage$pandac$Position $tmp703;
    panda$core$Bit $tmp704;
    org$pandalanguage$pandac$Type* $tmp692 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$UInt64$wrapper* $tmp697;
    $tmp697 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
    $tmp697->value = p_value;
    $tmp696 = ((panda$core$Object*) $tmp697);
    panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s695, $tmp696);
    $tmp694 = $tmp698;
    panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp694, &$s699);
    $tmp693 = $tmp700;
    panda$core$Int64$init$builtin_int64(&$tmp702, 5);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp701, $tmp702);
    org$pandalanguage$pandac$Position$init(&$tmp703);
    panda$core$Bit$init$builtin_bit(&$tmp704, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp692, $tmp693, $tmp701, $tmp703, $tmp704);
    $tmp691 = $tmp692;
    $tmp690 = $tmp691;
    $returnValue689 = $tmp690;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp690));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
    panda$core$Panda$unref$panda$core$Object($tmp696);
    return $returnValue689;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue706;
    org$pandalanguage$pandac$Type* $tmp707;
    org$pandalanguage$pandac$Type* $tmp708;
    panda$core$String* $tmp710;
    panda$core$String* $tmp711;
    panda$core$String* $tmp713;
    org$pandalanguage$pandac$Type$Kind $tmp718;
    panda$core$Int64 $tmp719;
    org$pandalanguage$pandac$Position $tmp720;
    panda$core$Bit $tmp721;
    org$pandalanguage$pandac$Type* $tmp709 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp714 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp713 = $tmp714;
    panda$core$String* $tmp715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s712, $tmp713);
    $tmp711 = $tmp715;
    panda$core$String* $tmp717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp711, &$s716);
    $tmp710 = $tmp717;
    panda$core$Int64$init$builtin_int64(&$tmp719, 5);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp718, $tmp719);
    org$pandalanguage$pandac$Position$init(&$tmp720);
    panda$core$Bit$init$builtin_bit(&$tmp721, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp709, $tmp710, $tmp718, $tmp720, $tmp721);
    $tmp708 = $tmp709;
    $tmp707 = $tmp708;
    $returnValue706 = $tmp707;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp707));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp708));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp710));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp711));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp713));
    return $returnValue706;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue723;
    org$pandalanguage$pandac$Type* $tmp724;
    org$pandalanguage$pandac$Type* $tmp725;
    panda$core$String* $tmp727;
    panda$core$String* $tmp728;
    panda$core$String* $tmp730;
    org$pandalanguage$pandac$Type$Kind $tmp735;
    panda$core$Int64 $tmp736;
    org$pandalanguage$pandac$Position $tmp737;
    panda$core$Bit $tmp738;
    org$pandalanguage$pandac$Type* $tmp726 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp731 = panda$core$Real64$convert$R$panda$core$String(p_value);
    $tmp730 = $tmp731;
    panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s729, $tmp730);
    $tmp728 = $tmp732;
    panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp728, &$s733);
    $tmp727 = $tmp734;
    panda$core$Int64$init$builtin_int64(&$tmp736, 18);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp735, $tmp736);
    org$pandalanguage$pandac$Position$init(&$tmp737);
    panda$core$Bit$init$builtin_bit(&$tmp738, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp726, $tmp727, $tmp735, $tmp737, $tmp738);
    $tmp725 = $tmp726;
    $tmp724 = $tmp725;
    $returnValue723 = $tmp724;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp724));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp727));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp730));
    return $returnValue723;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue740;
    org$pandalanguage$pandac$Type* $tmp741;
    org$pandalanguage$pandac$Type* $tmp742;
    org$pandalanguage$pandac$Type$Kind $tmp745;
    panda$core$Int64 $tmp746;
    org$pandalanguage$pandac$Position $tmp747;
    panda$core$Bit $tmp748;
    org$pandalanguage$pandac$Type* $tmp743 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp746, 8);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp745, $tmp746);
    org$pandalanguage$pandac$Position$init(&$tmp747);
    panda$core$Bit$init$builtin_bit(&$tmp748, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp743, &$s744, $tmp745, $tmp747, $tmp748);
    $tmp742 = $tmp743;
    $tmp741 = $tmp742;
    $returnValue740 = $tmp741;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp741));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp742));
    return $returnValue740;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue750;
    org$pandalanguage$pandac$Type* $tmp751;
    org$pandalanguage$pandac$Type* $tmp752;
    org$pandalanguage$pandac$Type$Kind $tmp755;
    panda$core$Int64 $tmp756;
    org$pandalanguage$pandac$Position $tmp757;
    panda$core$Bit $tmp758;
    org$pandalanguage$pandac$Type* $tmp753 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp756, 9);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp755, $tmp756);
    org$pandalanguage$pandac$Position$init(&$tmp757);
    panda$core$Bit$init$builtin_bit(&$tmp758, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp753, &$s754, $tmp755, $tmp757, $tmp758);
    $tmp752 = $tmp753;
    $tmp751 = $tmp752;
    $returnValue750 = $tmp751;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp751));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp752));
    return $returnValue750;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue760;
    org$pandalanguage$pandac$Type* $tmp761;
    org$pandalanguage$pandac$Type* $tmp762;
    org$pandalanguage$pandac$Type$Kind $tmp765;
    panda$core$Int64 $tmp766;
    org$pandalanguage$pandac$Position $tmp767;
    panda$core$Bit $tmp768;
    org$pandalanguage$pandac$Type* $tmp763 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp766, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp765, $tmp766);
    org$pandalanguage$pandac$Position$init(&$tmp767);
    panda$core$Bit$init$builtin_bit(&$tmp768, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp763, &$s764, $tmp765, $tmp767, $tmp768);
    $tmp762 = $tmp763;
    $tmp761 = $tmp762;
    $returnValue760 = $tmp761;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp761));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
    return $returnValue760;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue770;
    org$pandalanguage$pandac$Type* $tmp771;
    org$pandalanguage$pandac$Type* $tmp772;
    org$pandalanguage$pandac$Type$Kind $tmp775;
    panda$core$Int64 $tmp776;
    org$pandalanguage$pandac$Position $tmp777;
    panda$core$Bit $tmp778;
    org$pandalanguage$pandac$Type* $tmp773 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp776, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp775, $tmp776);
    org$pandalanguage$pandac$Position$init(&$tmp777);
    panda$core$Bit$init$builtin_bit(&$tmp778, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp773, &$s774, $tmp775, $tmp777, $tmp778);
    $tmp772 = $tmp773;
    $tmp771 = $tmp772;
    $returnValue770 = $tmp771;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp771));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp772));
    return $returnValue770;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue780;
    org$pandalanguage$pandac$Type* $tmp781;
    org$pandalanguage$pandac$Type* $tmp782;
    org$pandalanguage$pandac$Type$Kind $tmp785;
    panda$core$Int64 $tmp786;
    org$pandalanguage$pandac$Position $tmp787;
    panda$core$Bit $tmp788;
    org$pandalanguage$pandac$Type* $tmp783 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp786, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp785, $tmp786);
    org$pandalanguage$pandac$Position$init(&$tmp787);
    panda$core$Bit$init$builtin_bit(&$tmp788, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp783, &$s784, $tmp785, $tmp787, $tmp788);
    $tmp782 = $tmp783;
    $tmp781 = $tmp782;
    $returnValue780 = $tmp781;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp781));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp782));
    return $returnValue780;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue790;
    org$pandalanguage$pandac$Type* $tmp791;
    org$pandalanguage$pandac$Type* $tmp792;
    org$pandalanguage$pandac$Type$Kind $tmp795;
    panda$core$Int64 $tmp796;
    org$pandalanguage$pandac$Position $tmp797;
    panda$core$Bit $tmp798;
    org$pandalanguage$pandac$Type* $tmp793 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp796, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp795, $tmp796);
    org$pandalanguage$pandac$Position$init(&$tmp797);
    panda$core$Bit$init$builtin_bit(&$tmp798, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp793, &$s794, $tmp795, $tmp797, $tmp798);
    $tmp792 = $tmp793;
    $tmp791 = $tmp792;
    $returnValue790 = $tmp791;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp791));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp792));
    return $returnValue790;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue800;
    org$pandalanguage$pandac$Type* $tmp801;
    org$pandalanguage$pandac$Type* $tmp802;
    org$pandalanguage$pandac$Type$Kind $tmp805;
    panda$core$Int64 $tmp806;
    org$pandalanguage$pandac$Position $tmp807;
    panda$core$Bit $tmp808;
    org$pandalanguage$pandac$Type* $tmp803 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp806, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp805, $tmp806);
    org$pandalanguage$pandac$Position$init(&$tmp807);
    panda$core$Bit$init$builtin_bit(&$tmp808, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp803, &$s804, $tmp805, $tmp807, $tmp808);
    $tmp802 = $tmp803;
    $tmp801 = $tmp802;
    $returnValue800 = $tmp801;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp801));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp802));
    return $returnValue800;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children813 = NULL;
    panda$collections$Array* $tmp814;
    panda$collections$Array* $tmp815;
    org$pandalanguage$pandac$Type* $tmp817;
    org$pandalanguage$pandac$Type$Kind $tmp820;
    panda$core$Int64 $tmp821;
    org$pandalanguage$pandac$Position $tmp822;
    panda$core$Bit $tmp823;
    org$pandalanguage$pandac$Type* $returnValue824;
    org$pandalanguage$pandac$Type* $tmp825;
    org$pandalanguage$pandac$Type* $tmp826;
    panda$core$String* $tmp828;
    panda$core$String* $tmp829;
    panda$core$String* $tmp830;
    panda$core$String* $tmp831;
    org$pandalanguage$pandac$Type$Kind $tmp839;
    panda$core$Int64 $tmp840;
    int $tmp812;
    {
        panda$collections$Array* $tmp816 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp816);
        $tmp815 = $tmp816;
        $tmp814 = $tmp815;
        children813 = $tmp814;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp814));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp815));
        org$pandalanguage$pandac$Type* $tmp818 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp821, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp820, $tmp821);
        org$pandalanguage$pandac$Position$init(&$tmp822);
        panda$core$Bit$init$builtin_bit(&$tmp823, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp818, &$s819, $tmp820, $tmp822, $tmp823);
        $tmp817 = $tmp818;
        panda$collections$Array$add$panda$collections$Array$T(children813, ((panda$core$Object*) $tmp817));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp817));
        panda$collections$Array$add$panda$collections$Array$T(children813, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp827 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp833 = panda$core$String$convert$R$panda$core$String(&$s832);
        $tmp831 = $tmp833;
        panda$core$String* $tmp835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp831, &$s834);
        $tmp830 = $tmp835;
        panda$core$String* $tmp836 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp830, ((panda$core$Object*) p_t));
        $tmp829 = $tmp836;
        panda$core$String* $tmp838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp829, &$s837);
        $tmp828 = $tmp838;
        panda$core$Int64$init$builtin_int64(&$tmp840, 11);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp839, $tmp840);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp827, $tmp828, $tmp839, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children813), p_t->resolved);
        $tmp826 = $tmp827;
        $tmp825 = $tmp826;
        $returnValue824 = $tmp825;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp825));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp826));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp828));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp829));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp830));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp831));
        $tmp812 = 0;
        goto $l810;
        $l841:;
        return $returnValue824;
    }
    $l810:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children813));
    children813 = NULL;
    switch ($tmp812) {
        case 0: goto $l841;
    }
    $l843:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children847 = NULL;
    panda$collections$Array* $tmp848;
    panda$collections$Array* $tmp849;
    org$pandalanguage$pandac$Type* $returnValue851;
    org$pandalanguage$pandac$Type* $tmp852;
    org$pandalanguage$pandac$Type* $tmp853;
    org$pandalanguage$pandac$Type* $tmp854;
    org$pandalanguage$pandac$Type$Kind $tmp857;
    panda$core$Int64 $tmp858;
    org$pandalanguage$pandac$Position $tmp859;
    panda$core$Bit $tmp860;
    int $tmp846;
    {
        panda$collections$Array* $tmp850 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp850);
        $tmp849 = $tmp850;
        $tmp848 = $tmp849;
        children847 = $tmp848;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp848));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp849));
        panda$collections$Array$add$panda$collections$Array$T(children847, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp855 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp858, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp857, $tmp858);
        org$pandalanguage$pandac$Position$init(&$tmp859);
        panda$core$Bit$init$builtin_bit(&$tmp860, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp855, &$s856, $tmp857, $tmp859, $tmp860);
        $tmp854 = $tmp855;
        org$pandalanguage$pandac$Type* $tmp861 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp854, ((panda$collections$ListView*) children847));
        $tmp853 = $tmp861;
        $tmp852 = $tmp853;
        $returnValue851 = $tmp852;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp852));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp853));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp854));
        $tmp846 = 0;
        goto $l844;
        $l862:;
        return $returnValue851;
    }
    $l844:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children847));
    children847 = NULL;
    switch ($tmp846) {
        case 0: goto $l862;
    }
    $l864:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children868 = NULL;
    panda$collections$Array* $tmp869;
    panda$collections$Array* $tmp870;
    org$pandalanguage$pandac$Type* $returnValue872;
    org$pandalanguage$pandac$Type* $tmp873;
    org$pandalanguage$pandac$Type* $tmp874;
    org$pandalanguage$pandac$Type* $tmp875;
    org$pandalanguage$pandac$Type$Kind $tmp878;
    panda$core$Int64 $tmp879;
    org$pandalanguage$pandac$Position $tmp880;
    panda$core$Bit $tmp881;
    int $tmp867;
    {
        panda$collections$Array* $tmp871 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp871);
        $tmp870 = $tmp871;
        $tmp869 = $tmp870;
        children868 = $tmp869;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp869));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp870));
        panda$collections$Array$add$panda$collections$Array$T(children868, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp876 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp879, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp878, $tmp879);
        org$pandalanguage$pandac$Position$init(&$tmp880);
        panda$core$Bit$init$builtin_bit(&$tmp881, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp876, &$s877, $tmp878, $tmp880, $tmp881);
        $tmp875 = $tmp876;
        org$pandalanguage$pandac$Type* $tmp882 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp875, ((panda$collections$ListView*) children868));
        $tmp874 = $tmp882;
        $tmp873 = $tmp874;
        $returnValue872 = $tmp873;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp873));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp874));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp875));
        $tmp867 = 0;
        goto $l865;
        $l883:;
        return $returnValue872;
    }
    $l865:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children868));
    children868 = NULL;
    switch ($tmp867) {
        case 0: goto $l883;
    }
    $l885:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children889 = NULL;
    panda$collections$Array* $tmp890;
    panda$collections$Array* $tmp891;
    org$pandalanguage$pandac$Type* $tmp893;
    org$pandalanguage$pandac$Type* $tmp896;
    org$pandalanguage$pandac$Type* $tmp898;
    org$pandalanguage$pandac$Type* $tmp901;
    org$pandalanguage$pandac$Type* $tmp903;
    org$pandalanguage$pandac$Type* $tmp906;
    org$pandalanguage$pandac$Type* $tmp908;
    org$pandalanguage$pandac$Type* $returnValue910;
    org$pandalanguage$pandac$Type* $tmp911;
    org$pandalanguage$pandac$Type* $tmp912;
    org$pandalanguage$pandac$Type* $tmp913;
    org$pandalanguage$pandac$Type$Kind $tmp916;
    panda$core$Int64 $tmp917;
    org$pandalanguage$pandac$Position $tmp918;
    panda$core$Bit $tmp919;
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
        org$pandalanguage$pandac$Type* $tmp894 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp893 = $tmp894;
        panda$core$Bit $tmp895 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp893);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp893));
        if ($tmp895.value) {
        {
            org$pandalanguage$pandac$Type* $tmp897 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp896 = $tmp897;
            panda$collections$Array$add$panda$collections$Array$T(children889, ((panda$core$Object*) $tmp896));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp896));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp899 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp898 = $tmp899;
        panda$core$Bit $tmp900 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp898);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp898));
        if ($tmp900.value) {
        {
            org$pandalanguage$pandac$Type* $tmp902 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp901 = $tmp902;
            panda$collections$Array$add$panda$collections$Array$T(children889, ((panda$core$Object*) $tmp901));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp901));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp904 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp903 = $tmp904;
        panda$core$Bit $tmp905 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp903);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp903));
        if ($tmp905.value) {
        {
            org$pandalanguage$pandac$Type* $tmp907 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp906 = $tmp907;
            panda$collections$Array$add$panda$collections$Array$T(children889, ((panda$core$Object*) $tmp906));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp906));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp909 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp908 = $tmp909;
            panda$collections$Array$add$panda$collections$Array$T(children889, ((panda$core$Object*) $tmp908));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp908));
        }
        }
        }
        }
        org$pandalanguage$pandac$Type* $tmp914 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp917, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp916, $tmp917);
        org$pandalanguage$pandac$Position$init(&$tmp918);
        panda$core$Bit$init$builtin_bit(&$tmp919, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp914, &$s915, $tmp916, $tmp918, $tmp919);
        $tmp913 = $tmp914;
        org$pandalanguage$pandac$Type* $tmp920 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp913, ((panda$collections$ListView*) children889));
        $tmp912 = $tmp920;
        $tmp911 = $tmp912;
        $returnValue910 = $tmp911;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp911));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp913));
        $tmp888 = 0;
        goto $l886;
        $l921:;
        return $returnValue910;
    }
    $l886:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children889));
    children889 = NULL;
    switch ($tmp888) {
        case 0: goto $l921;
    }
    $l923:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue924;
    org$pandalanguage$pandac$Type* $tmp925;
    org$pandalanguage$pandac$Type* $tmp926;
    org$pandalanguage$pandac$Type$Kind $tmp929;
    panda$core$Int64 $tmp930;
    org$pandalanguage$pandac$Position $tmp931;
    panda$core$Bit $tmp932;
    org$pandalanguage$pandac$Type* $tmp927 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp930, 6);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp929, $tmp930);
    org$pandalanguage$pandac$Position$init(&$tmp931);
    panda$core$Bit$init$builtin_bit(&$tmp932, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp927, &$s928, $tmp929, $tmp931, $tmp932);
    $tmp926 = $tmp927;
    $tmp925 = $tmp926;
    $returnValue924 = $tmp925;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp925));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp926));
    return $returnValue924;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue934;
    org$pandalanguage$pandac$Type* $tmp935;
    org$pandalanguage$pandac$Type* $tmp936;
    org$pandalanguage$pandac$Type$Kind $tmp939;
    panda$core$Int64 $tmp940;
    org$pandalanguage$pandac$Position $tmp941;
    panda$core$Bit $tmp942;
    org$pandalanguage$pandac$Type* $tmp937 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp940, 6);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp939, $tmp940);
    org$pandalanguage$pandac$Position$init(&$tmp941);
    panda$core$Bit$init$builtin_bit(&$tmp942, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp937, &$s938, $tmp939, $tmp941, $tmp942);
    $tmp936 = $tmp937;
    $tmp935 = $tmp936;
    $returnValue934 = $tmp935;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp935));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp936));
    return $returnValue934;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue944;
    panda$core$Int64 $tmp960;
    panda$core$Int64 $tmp964;
    panda$core$Bit $tmp950 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s949);
    bool $tmp948 = $tmp950.value;
    if ($tmp948) goto $l951;
    panda$core$Bit $tmp953 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s952);
    $tmp948 = $tmp953.value;
    $l951:;
    panda$core$Bit $tmp954 = { $tmp948 };
    bool $tmp947 = $tmp954.value;
    if ($tmp947) goto $l955;
    panda$core$Bit $tmp957 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s956);
    $tmp947 = $tmp957.value;
    $l955:;
    panda$core$Bit $tmp958 = { $tmp947 };
    bool $tmp946 = $tmp958.value;
    if ($tmp946) goto $l959;
    panda$core$Int64$init$builtin_int64(&$tmp960, 5);
    panda$core$Bit $tmp961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp960);
    $tmp946 = $tmp961.value;
    $l959:;
    panda$core$Bit $tmp962 = { $tmp946 };
    bool $tmp945 = $tmp962.value;
    if ($tmp945) goto $l963;
    panda$core$Int64$init$builtin_int64(&$tmp964, 18);
    panda$core$Bit $tmp965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp964);
    $tmp945 = $tmp965.value;
    $l963:;
    panda$core$Bit $tmp966 = { $tmp945 };
    $returnValue944 = $tmp966;
    return $returnValue944;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue968;
    panda$core$Int64 $tmp972;
    panda$core$Int64 $tmp975;
    panda$core$Int64 $tmp979;
    panda$core$Int64 $tmp983;
    panda$core$Int64$init$builtin_int64(&$tmp972, 2);
    panda$core$Bit $tmp973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp972);
    bool $tmp971 = $tmp973.value;
    if ($tmp971) goto $l974;
    panda$core$Int64$init$builtin_int64(&$tmp975, 3);
    panda$core$Bit $tmp976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp975);
    $tmp971 = $tmp976.value;
    $l974:;
    panda$core$Bit $tmp977 = { $tmp971 };
    bool $tmp970 = $tmp977.value;
    if ($tmp970) goto $l978;
    panda$core$Int64$init$builtin_int64(&$tmp979, 10);
    panda$core$Bit $tmp980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp979);
    $tmp970 = $tmp980.value;
    $l978:;
    panda$core$Bit $tmp981 = { $tmp970 };
    bool $tmp969 = $tmp981.value;
    if ($tmp969) goto $l982;
    panda$core$Int64$init$builtin_int64(&$tmp983, 5);
    panda$core$Bit $tmp984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp983);
    $tmp969 = $tmp984.value;
    $l982:;
    panda$core$Bit $tmp985 = { $tmp969 };
    $returnValue968 = $tmp985;
    return $returnValue968;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue987;
    panda$core$Int64 $tmp989;
    panda$core$Int64$init$builtin_int64(&$tmp989, 18);
    panda$core$Bit $tmp990 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp989);
    bool $tmp988 = $tmp990.value;
    if ($tmp988) goto $l991;
    panda$core$Bit $tmp993 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s992);
    $tmp988 = $tmp993.value;
    $l991:;
    panda$core$Bit $tmp994 = { $tmp988 };
    $returnValue987 = $tmp994;
    return $returnValue987;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue996;
    panda$core$Bit $tmp998 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s997);
    $returnValue996 = $tmp998;
    return $returnValue996;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue1000;
    panda$core$Bit $tmp1002 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp1001 = $tmp1002.value;
    if ($tmp1001) goto $l1003;
    panda$core$Bit $tmp1004 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp1001 = $tmp1004.value;
    $l1003:;
    panda$core$Bit $tmp1005 = { $tmp1001 };
    $returnValue1000 = $tmp1005;
    return $returnValue1000;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$456_91007;
    panda$core$Int64 $tmp1015;
    panda$core$Int64 $tmp1018;
    panda$core$Int64 $tmp1022;
    panda$core$Int64 $tmp1026;
    panda$core$Int64 $tmp1030;
    panda$core$Int64 $tmp1034;
    panda$core$Int64 $tmp1038;
    panda$core$Int64 $tmp1042;
    panda$core$Bit $returnValue1045;
    panda$core$Bit $tmp1046;
    panda$core$Bit $tmp1048;
    {
        $match$456_91007 = self->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp1015, 0);
        panda$core$Bit $tmp1016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91007.$rawValue, $tmp1015);
        bool $tmp1014 = $tmp1016.value;
        if ($tmp1014) goto $l1017;
        panda$core$Int64$init$builtin_int64(&$tmp1018, 1);
        panda$core$Bit $tmp1019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91007.$rawValue, $tmp1018);
        $tmp1014 = $tmp1019.value;
        $l1017:;
        panda$core$Bit $tmp1020 = { $tmp1014 };
        bool $tmp1013 = $tmp1020.value;
        if ($tmp1013) goto $l1021;
        panda$core$Int64$init$builtin_int64(&$tmp1022, 11);
        panda$core$Bit $tmp1023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91007.$rawValue, $tmp1022);
        $tmp1013 = $tmp1023.value;
        $l1021:;
        panda$core$Bit $tmp1024 = { $tmp1013 };
        bool $tmp1012 = $tmp1024.value;
        if ($tmp1012) goto $l1025;
        panda$core$Int64$init$builtin_int64(&$tmp1026, 12);
        panda$core$Bit $tmp1027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91007.$rawValue, $tmp1026);
        $tmp1012 = $tmp1027.value;
        $l1025:;
        panda$core$Bit $tmp1028 = { $tmp1012 };
        bool $tmp1011 = $tmp1028.value;
        if ($tmp1011) goto $l1029;
        panda$core$Int64$init$builtin_int64(&$tmp1030, 15);
        panda$core$Bit $tmp1031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91007.$rawValue, $tmp1030);
        $tmp1011 = $tmp1031.value;
        $l1029:;
        panda$core$Bit $tmp1032 = { $tmp1011 };
        bool $tmp1010 = $tmp1032.value;
        if ($tmp1010) goto $l1033;
        panda$core$Int64$init$builtin_int64(&$tmp1034, 14);
        panda$core$Bit $tmp1035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91007.$rawValue, $tmp1034);
        $tmp1010 = $tmp1035.value;
        $l1033:;
        panda$core$Bit $tmp1036 = { $tmp1010 };
        bool $tmp1009 = $tmp1036.value;
        if ($tmp1009) goto $l1037;
        panda$core$Int64$init$builtin_int64(&$tmp1038, 17);
        panda$core$Bit $tmp1039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91007.$rawValue, $tmp1038);
        $tmp1009 = $tmp1039.value;
        $l1037:;
        panda$core$Bit $tmp1040 = { $tmp1009 };
        bool $tmp1008 = $tmp1040.value;
        if ($tmp1008) goto $l1041;
        panda$core$Int64$init$builtin_int64(&$tmp1042, 16);
        panda$core$Bit $tmp1043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91007.$rawValue, $tmp1042);
        $tmp1008 = $tmp1043.value;
        $l1041:;
        panda$core$Bit $tmp1044 = { $tmp1008 };
        if ($tmp1044.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1046, true);
            $returnValue1045 = $tmp1046;
            return $returnValue1045;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1048, false);
            $returnValue1045 = $tmp1048;
            return $returnValue1045;
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$466_91050;
    panda$core$Int64 $tmp1054;
    panda$core$Int64 $tmp1057;
    panda$core$Int64 $tmp1061;
    panda$core$Int64 $tmp1065;
    panda$core$Bit $returnValue1068;
    panda$core$Bit $tmp1069;
    panda$core$Bit $tmp1071;
    {
        $match$466_91050 = self->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp1054, 15);
        panda$core$Bit $tmp1055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91050.$rawValue, $tmp1054);
        bool $tmp1053 = $tmp1055.value;
        if ($tmp1053) goto $l1056;
        panda$core$Int64$init$builtin_int64(&$tmp1057, 14);
        panda$core$Bit $tmp1058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91050.$rawValue, $tmp1057);
        $tmp1053 = $tmp1058.value;
        $l1056:;
        panda$core$Bit $tmp1059 = { $tmp1053 };
        bool $tmp1052 = $tmp1059.value;
        if ($tmp1052) goto $l1060;
        panda$core$Int64$init$builtin_int64(&$tmp1061, 17);
        panda$core$Bit $tmp1062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91050.$rawValue, $tmp1061);
        $tmp1052 = $tmp1062.value;
        $l1060:;
        panda$core$Bit $tmp1063 = { $tmp1052 };
        bool $tmp1051 = $tmp1063.value;
        if ($tmp1051) goto $l1064;
        panda$core$Int64$init$builtin_int64(&$tmp1065, 16);
        panda$core$Bit $tmp1066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91050.$rawValue, $tmp1065);
        $tmp1051 = $tmp1066.value;
        $l1064:;
        panda$core$Bit $tmp1067 = { $tmp1051 };
        if ($tmp1067.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1069, true);
            $returnValue1068 = $tmp1069;
            return $returnValue1068;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1071, false);
            $returnValue1068 = $tmp1071;
            return $returnValue1068;
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue1073;
    panda$core$Bit $tmp1075 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1074);
    $returnValue1073 = $tmp1075;
    return $returnValue1073;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1077;
    panda$core$Bit $returnValue1079;
    panda$core$Object* $tmp1080;
    panda$core$Int64 $tmp1081;
    panda$core$Int64 $tmp1086;
    panda$core$Object* $tmp1089;
    panda$core$Int64 $tmp1090;
    panda$core$Int64$init$builtin_int64(&$tmp1077, 1);
    panda$core$Bit $tmp1078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1077);
    if ($tmp1078.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1081, 0);
        panda$core$Object* $tmp1082 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1081);
        $tmp1080 = $tmp1082;
        panda$core$Bit $tmp1083 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1080));
        $returnValue1079 = $tmp1083;
        panda$core$Panda$unref$panda$core$Object($tmp1080);
        return $returnValue1079;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1086, 11);
    panda$core$Bit $tmp1087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1086);
    bool $tmp1085 = $tmp1087.value;
    if (!$tmp1085) goto $l1088;
    panda$core$Int64$init$builtin_int64(&$tmp1090, 0);
    panda$core$Object* $tmp1091 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1090);
    $tmp1089 = $tmp1091;
    panda$core$Bit $tmp1093 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp1089))->name, &$s1092);
    $tmp1085 = $tmp1093.value;
    panda$core$Panda$unref$panda$core$Object($tmp1089);
    $l1088:;
    panda$core$Bit $tmp1094 = { $tmp1085 };
    $returnValue1079 = $tmp1094;
    return $returnValue1079;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1096;
    panda$core$Bit $returnValue1098;
    panda$core$Object* $tmp1099;
    panda$core$Int64 $tmp1100;
    panda$core$Int64 $tmp1105;
    panda$core$Object* $tmp1108;
    panda$core$Int64 $tmp1109;
    panda$core$Int64$init$builtin_int64(&$tmp1096, 1);
    panda$core$Bit $tmp1097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1096);
    if ($tmp1097.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1100, 0);
        panda$core$Object* $tmp1101 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1100);
        $tmp1099 = $tmp1101;
        panda$core$Bit $tmp1102 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1099));
        $returnValue1098 = $tmp1102;
        panda$core$Panda$unref$panda$core$Object($tmp1099);
        return $returnValue1098;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1105, 11);
    panda$core$Bit $tmp1106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1105);
    bool $tmp1104 = $tmp1106.value;
    if (!$tmp1104) goto $l1107;
    panda$core$Int64$init$builtin_int64(&$tmp1109, 0);
    panda$core$Object* $tmp1110 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1109);
    $tmp1108 = $tmp1110;
    panda$core$Bit $tmp1112 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp1108))->name, &$s1111);
    $tmp1104 = $tmp1112.value;
    panda$core$Panda$unref$panda$core$Object($tmp1108);
    $l1107:;
    panda$core$Bit $tmp1113 = { $tmp1104 };
    $returnValue1098 = $tmp1113;
    return $returnValue1098;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1118;
    org$pandalanguage$pandac$Type* $returnValue1120;
    org$pandalanguage$pandac$Type* $tmp1121;
    panda$collections$Array* subtypes1124 = NULL;
    panda$collections$Array* $tmp1125;
    panda$collections$Array* $tmp1126;
    org$pandalanguage$pandac$Type* $tmp1128;
    org$pandalanguage$pandac$Type* $tmp1129;
    panda$core$String* $tmp1131;
    panda$core$String* $tmp1132;
    org$pandalanguage$pandac$Type$Kind $tmp1136;
    panda$core$Int64 $tmp1137;
    org$pandalanguage$pandac$Position $tmp1138;
    panda$core$Bit $tmp1139;
    int $tmp1117;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1118, 1);
        panda$core$Bit $tmp1119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1118);
        if ($tmp1119.value) {
        {
            $tmp1121 = self;
            $returnValue1120 = $tmp1121;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1121));
            $tmp1117 = 0;
            goto $l1115;
            $l1122:;
            return $returnValue1120;
        }
        }
        panda$collections$Array* $tmp1127 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1127);
        $tmp1126 = $tmp1127;
        $tmp1125 = $tmp1126;
        subtypes1124 = $tmp1125;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1125));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1126));
        panda$collections$Array$add$panda$collections$Array$T(subtypes1124, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp1130 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp1133 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp1132 = $tmp1133;
        panda$core$String* $tmp1135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1132, &$s1134);
        $tmp1131 = $tmp1135;
        panda$core$Int64$init$builtin_int64(&$tmp1137, 1);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp1136, $tmp1137);
        org$pandalanguage$pandac$Position$init(&$tmp1138);
        panda$core$Bit$init$builtin_bit(&$tmp1139, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1130, $tmp1131, $tmp1136, $tmp1138, ((panda$collections$ListView*) subtypes1124), $tmp1139);
        $tmp1129 = $tmp1130;
        $tmp1128 = $tmp1129;
        $returnValue1120 = $tmp1128;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1128));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1129));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1131));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1132));
        $tmp1117 = 1;
        goto $l1115;
        $l1140:;
        return $returnValue1120;
    }
    $l1115:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1124));
    subtypes1124 = NULL;
    switch ($tmp1117) {
        case 1: goto $l1140;
        case 0: goto $l1122;
    }
    $l1142:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1143;
    org$pandalanguage$pandac$Type* $returnValue1145;
    org$pandalanguage$pandac$Type* $tmp1146;
    org$pandalanguage$pandac$Type* $tmp1148;
    panda$core$Object* $tmp1149;
    panda$core$Int64 $tmp1150;
    panda$core$Int64$init$builtin_int64(&$tmp1143, 1);
    panda$core$Bit $tmp1144 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1143);
    if ($tmp1144.value) {
    {
        $tmp1146 = self;
        $returnValue1145 = $tmp1146;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1146));
        return $returnValue1145;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1150, 0);
    panda$core$Object* $tmp1151 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1150);
    $tmp1149 = $tmp1151;
    $tmp1148 = ((org$pandalanguage$pandac$Type*) $tmp1149);
    $returnValue1145 = $tmp1148;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1148));
    panda$core$Panda$unref$panda$core$Object($tmp1149);
    return $returnValue1145;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1156;
    panda$core$Int64 $tmp1159;
    panda$core$Int64 $tmp1163;
    panda$core$Int64 $tmp1167;
    org$pandalanguage$pandac$Type* $returnValue1174;
    org$pandalanguage$pandac$Type* $tmp1175;
    panda$core$Object* $tmp1176;
    panda$core$Int64 $tmp1178;
    panda$core$Int64$init$builtin_int64(&$tmp1156, 14);
    panda$core$Bit $tmp1157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1156);
    bool $tmp1155 = $tmp1157.value;
    if ($tmp1155) goto $l1158;
    panda$core$Int64$init$builtin_int64(&$tmp1159, 15);
    panda$core$Bit $tmp1160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1159);
    $tmp1155 = $tmp1160.value;
    $l1158:;
    panda$core$Bit $tmp1161 = { $tmp1155 };
    bool $tmp1154 = $tmp1161.value;
    if ($tmp1154) goto $l1162;
    panda$core$Int64$init$builtin_int64(&$tmp1163, 16);
    panda$core$Bit $tmp1164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1163);
    $tmp1154 = $tmp1164.value;
    $l1162:;
    panda$core$Bit $tmp1165 = { $tmp1154 };
    bool $tmp1153 = $tmp1165.value;
    if ($tmp1153) goto $l1166;
    panda$core$Int64$init$builtin_int64(&$tmp1167, 17);
    panda$core$Bit $tmp1168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1167);
    $tmp1153 = $tmp1168.value;
    $l1166:;
    panda$core$Bit $tmp1169 = { $tmp1153 };
    if ($tmp1169.value) goto $l1170; else goto $l1171;
    $l1171:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1172, (panda$core$Int64) { 510 }, &$s1173);
    abort();
    $l1170:;
    panda$core$Int64 $tmp1177 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
    panda$core$Int64$init$builtin_int64(&$tmp1178, 1);
    panda$core$Int64 $tmp1179 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1177, $tmp1178);
    panda$core$Object* $tmp1180 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1179);
    $tmp1176 = $tmp1180;
    $tmp1175 = ((org$pandalanguage$pandac$Type*) $tmp1176);
    $returnValue1174 = $tmp1175;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1175));
    panda$core$Panda$unref$panda$core$Object($tmp1176);
    return $returnValue1174;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $returnValue1186;
    org$pandalanguage$pandac$Type* $tmp1187;
    org$pandalanguage$pandac$Type* $tmp1190;
    panda$core$Int64 $tmp1193;
    org$pandalanguage$pandac$Type* $tmp1195;
    org$pandalanguage$pandac$Type* $tmp1198;
    org$pandalanguage$pandac$Type* $tmp1199;
    org$pandalanguage$pandac$Type* $tmp1203;
    panda$core$Int64 $tmp1206;
    org$pandalanguage$pandac$Type* $tmp1208;
    org$pandalanguage$pandac$Type* $tmp1211;
    org$pandalanguage$pandac$Type* $tmp1212;
    panda$core$Int64 $tmp1217;
    org$pandalanguage$pandac$Type* $tmp1222;
    panda$core$Int64 $tmp1228;
    org$pandalanguage$pandac$Type* $tmp1231;
    panda$core$Int64 $tmp1236;
    panda$core$Int64 $tmp1239;
    org$pandalanguage$pandac$Type* $tmp1242;
    org$pandalanguage$pandac$Type* $tmp1248;
    org$pandalanguage$pandac$Type* $tmp1249;
    org$pandalanguage$pandac$Type* $tmp1253;
    org$pandalanguage$pandac$Type* $tmp1254;
    panda$core$Int64 $tmp1260;
    panda$core$Int64 $tmp1263;
    org$pandalanguage$pandac$Type* $tmp1266;
    org$pandalanguage$pandac$Type* $tmp1272;
    org$pandalanguage$pandac$Type* $tmp1273;
    org$pandalanguage$pandac$Type* $tmp1277;
    org$pandalanguage$pandac$Type* $tmp1278;
    panda$core$Int64 $tmp1282;
    org$pandalanguage$pandac$Type* $tmp1284;
    org$pandalanguage$pandac$Type* $tmp1285;
    org$pandalanguage$pandac$Type* $tmp1286;
    panda$core$Object* $tmp1287;
    panda$core$Int64 $tmp1288;
    panda$core$Int64 $tmp1294;
    org$pandalanguage$pandac$Type* $tmp1296;
    org$pandalanguage$pandac$Type* $tmp1297;
    org$pandalanguage$pandac$Type* $tmp1298;
    panda$core$Object* $tmp1299;
    panda$core$Int64 $tmp1300;
    org$pandalanguage$pandac$Type* t11306 = NULL;
    org$pandalanguage$pandac$Type* $tmp1307;
    org$pandalanguage$pandac$Type* $tmp1308;
    org$pandalanguage$pandac$Type* t21310 = NULL;
    org$pandalanguage$pandac$Type* $tmp1311;
    org$pandalanguage$pandac$Type* $tmp1312;
    panda$collections$HashSet* ancestors1322 = NULL;
    panda$collections$HashSet* $tmp1323;
    panda$collections$HashSet* $tmp1324;
    org$pandalanguage$pandac$Type* t1326 = NULL;
    org$pandalanguage$pandac$Type* $tmp1327;
    org$pandalanguage$pandac$ClassDecl* cl1328 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1329;
    org$pandalanguage$pandac$ClassDecl* $tmp1330;
    org$pandalanguage$pandac$Type* $tmp1335;
    org$pandalanguage$pandac$Type* $tmp1336;
    org$pandalanguage$pandac$Type* $tmp1337;
    org$pandalanguage$pandac$ClassDecl* $tmp1339;
    org$pandalanguage$pandac$ClassDecl* $tmp1340;
    org$pandalanguage$pandac$ClassDecl* $tmp1341;
    org$pandalanguage$pandac$ClassDecl* $tmp1343;
    org$pandalanguage$pandac$ClassDecl* $tmp1344;
    org$pandalanguage$pandac$Type* $tmp1345;
    org$pandalanguage$pandac$Type* $tmp1346;
    org$pandalanguage$pandac$ClassDecl* $tmp1347;
    org$pandalanguage$pandac$ClassDecl* $tmp1348;
    org$pandalanguage$pandac$ClassDecl* $tmp1349;
    org$pandalanguage$pandac$Type* $tmp1355;
    org$pandalanguage$pandac$Type* $tmp1359;
    org$pandalanguage$pandac$Type* $tmp1360;
    org$pandalanguage$pandac$Type* $tmp1361;
    org$pandalanguage$pandac$ClassDecl* $tmp1363;
    org$pandalanguage$pandac$ClassDecl* $tmp1364;
    org$pandalanguage$pandac$ClassDecl* $tmp1365;
    org$pandalanguage$pandac$ClassDecl* $tmp1367;
    org$pandalanguage$pandac$ClassDecl* $tmp1368;
    org$pandalanguage$pandac$Type* $tmp1370;
    org$pandalanguage$pandac$Type* $tmp1371;
    int $tmp1184;
    {
        panda$core$Bit $tmp1185 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp1185.value) {
        {
            $tmp1187 = self;
            $returnValue1186 = $tmp1187;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1187));
            $tmp1184 = 0;
            goto $l1182;
            $l1188:;
            return $returnValue1186;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1191 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp1190 = $tmp1191;
        panda$core$Bit $tmp1192 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp1190);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1190));
        if ($tmp1192.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1193, 1);
            panda$core$Bit $tmp1194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1193);
            if ($tmp1194.value) {
            {
                $tmp1195 = p_other;
                $returnValue1186 = $tmp1195;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1195));
                $tmp1184 = 1;
                goto $l1182;
                $l1196:;
                return $returnValue1186;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1200 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp1199 = $tmp1200;
            $tmp1198 = $tmp1199;
            $returnValue1186 = $tmp1198;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1198));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1199));
            $tmp1184 = 2;
            goto $l1182;
            $l1201:;
            return $returnValue1186;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1204 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp1203 = $tmp1204;
        panda$core$Bit $tmp1205 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp1203);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1203));
        if ($tmp1205.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1206, 1);
            panda$core$Bit $tmp1207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1206);
            if ($tmp1207.value) {
            {
                $tmp1208 = self;
                $returnValue1186 = $tmp1208;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1208));
                $tmp1184 = 3;
                goto $l1182;
                $l1209:;
                return $returnValue1186;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1213 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp1212 = $tmp1213;
            $tmp1211 = $tmp1212;
            $returnValue1186 = $tmp1211;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1211));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1212));
            $tmp1184 = 4;
            goto $l1182;
            $l1214:;
            return $returnValue1186;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1217, 5);
        panda$core$Bit $tmp1218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1217);
        bool $tmp1216 = $tmp1218.value;
        if (!$tmp1216) goto $l1219;
        panda$core$Bit $tmp1220 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp1216 = $tmp1220.value;
        $l1219:;
        panda$core$Bit $tmp1221 = { $tmp1216 };
        if ($tmp1221.value) {
        {
            $tmp1222 = p_other;
            $returnValue1186 = $tmp1222;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1222));
            $tmp1184 = 5;
            goto $l1182;
            $l1223:;
            return $returnValue1186;
        }
        }
        panda$core$Bit $tmp1226 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp1225 = $tmp1226.value;
        if (!$tmp1225) goto $l1227;
        panda$core$Int64$init$builtin_int64(&$tmp1228, 5);
        panda$core$Bit $tmp1229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1228);
        $tmp1225 = $tmp1229.value;
        $l1227:;
        panda$core$Bit $tmp1230 = { $tmp1225 };
        if ($tmp1230.value) {
        {
            $tmp1231 = self;
            $returnValue1186 = $tmp1231;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1231));
            $tmp1184 = 6;
            goto $l1182;
            $l1232:;
            return $returnValue1186;
        }
        }
        panda$core$Bit $tmp1234 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp1234.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1236, 5);
            panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1236);
            bool $tmp1235 = $tmp1237.value;
            if ($tmp1235) goto $l1238;
            panda$core$Int64$init$builtin_int64(&$tmp1239, 18);
            panda$core$Bit $tmp1240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1239);
            $tmp1235 = $tmp1240.value;
            $l1238:;
            panda$core$Bit $tmp1241 = { $tmp1235 };
            if ($tmp1241.value) {
            {
                $tmp1242 = self;
                $returnValue1186 = $tmp1242;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1242));
                $tmp1184 = 7;
                goto $l1182;
                $l1243:;
                return $returnValue1186;
            }
            }
            panda$core$Bit $tmp1245 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp1245.value) {
            {
                panda$core$Bit $tmp1247 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s1246);
                if ($tmp1247.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1250 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp1249 = $tmp1250;
                    $tmp1248 = $tmp1249;
                    $returnValue1186 = $tmp1248;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1248));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1249));
                    $tmp1184 = 8;
                    goto $l1182;
                    $l1251:;
                    return $returnValue1186;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1255 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp1254 = $tmp1255;
                $tmp1253 = $tmp1254;
                $returnValue1186 = $tmp1253;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1253));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1254));
                $tmp1184 = 9;
                goto $l1182;
                $l1256:;
                return $returnValue1186;
            }
            }
        }
        }
        panda$core$Bit $tmp1258 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp1258.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1260, 5);
            panda$core$Bit $tmp1261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1260);
            bool $tmp1259 = $tmp1261.value;
            if ($tmp1259) goto $l1262;
            panda$core$Int64$init$builtin_int64(&$tmp1263, 18);
            panda$core$Bit $tmp1264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1263);
            $tmp1259 = $tmp1264.value;
            $l1262:;
            panda$core$Bit $tmp1265 = { $tmp1259 };
            if ($tmp1265.value) {
            {
                $tmp1266 = p_other;
                $returnValue1186 = $tmp1266;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1266));
                $tmp1184 = 10;
                goto $l1182;
                $l1267:;
                return $returnValue1186;
            }
            }
            panda$core$Bit $tmp1269 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp1269.value) {
            {
                panda$core$Bit $tmp1271 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1270);
                if ($tmp1271.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1274 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp1273 = $tmp1274;
                    $tmp1272 = $tmp1273;
                    $returnValue1186 = $tmp1272;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1272));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1273));
                    $tmp1184 = 11;
                    goto $l1182;
                    $l1275:;
                    return $returnValue1186;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1279 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp1278 = $tmp1279;
                $tmp1277 = $tmp1278;
                $returnValue1186 = $tmp1277;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1277));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1278));
                $tmp1184 = 12;
                goto $l1182;
                $l1280:;
                return $returnValue1186;
            }
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1282, 1);
        panda$core$Bit $tmp1283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1282);
        if ($tmp1283.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1288, 0);
            panda$core$Object* $tmp1289 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1288);
            $tmp1287 = $tmp1289;
            org$pandalanguage$pandac$Type* $tmp1290 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1287), p_compiler, p_other);
            $tmp1286 = $tmp1290;
            org$pandalanguage$pandac$Type* $tmp1291 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1286);
            $tmp1285 = $tmp1291;
            $tmp1284 = $tmp1285;
            $returnValue1186 = $tmp1284;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1284));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1285));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1286));
            panda$core$Panda$unref$panda$core$Object($tmp1287);
            $tmp1184 = 13;
            goto $l1182;
            $l1292:;
            return $returnValue1186;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1294, 1);
        panda$core$Bit $tmp1295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1294);
        if ($tmp1295.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1300, 0);
            panda$core$Object* $tmp1301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, $tmp1300);
            $tmp1299 = $tmp1301;
            org$pandalanguage$pandac$Type* $tmp1302 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp1299));
            $tmp1298 = $tmp1302;
            org$pandalanguage$pandac$Type* $tmp1303 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1298);
            $tmp1297 = $tmp1303;
            $tmp1296 = $tmp1297;
            $returnValue1186 = $tmp1296;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1296));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1297));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1298));
            panda$core$Panda$unref$panda$core$Object($tmp1299);
            $tmp1184 = 14;
            goto $l1182;
            $l1304:;
            return $returnValue1186;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1309 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp1308 = $tmp1309;
        $tmp1307 = $tmp1308;
        t11306 = $tmp1307;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1307));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1308));
        org$pandalanguage$pandac$Type* $tmp1313 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp1312 = $tmp1313;
        $tmp1311 = $tmp1312;
        t21310 = $tmp1311;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1312));
        panda$core$Bit $tmp1315 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t11306);
        bool $tmp1314 = $tmp1315.value;
        if (!$tmp1314) goto $l1316;
        panda$core$Bit $tmp1317 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t21310);
        $tmp1314 = $tmp1317.value;
        $l1316:;
        panda$core$Bit $tmp1318 = { $tmp1314 };
        if ($tmp1318.value) {
        {
            int $tmp1321;
            {
                panda$collections$HashSet* $tmp1325 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
                panda$collections$HashSet$init($tmp1325);
                $tmp1324 = $tmp1325;
                $tmp1323 = $tmp1324;
                ancestors1322 = $tmp1323;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1323));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1324));
                $tmp1327 = self;
                t1326 = $tmp1327;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1327));
                org$pandalanguage$pandac$ClassDecl* $tmp1331 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t11306);
                $tmp1330 = $tmp1331;
                $tmp1329 = $tmp1330;
                cl1328 = $tmp1329;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1329));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1330));
                $l1332:;
                bool $tmp1334 = ((panda$core$Bit) { cl1328 != NULL }).value;
                if (!$tmp1334) goto $l1333;
                {
                    panda$collections$HashSet$add$panda$collections$HashSet$T(ancestors1322, ((panda$collections$Key*) t1326));
                    if (((panda$core$Bit) { cl1328->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1335 = t1326;
                            org$pandalanguage$pandac$Type* $tmp1338 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1326, cl1328->rawSuper);
                            $tmp1337 = $tmp1338;
                            $tmp1336 = $tmp1337;
                            t1326 = $tmp1336;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1336));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1337));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1335));
                        }
                        {
                            $tmp1339 = cl1328;
                            org$pandalanguage$pandac$ClassDecl* $tmp1342 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1326);
                            $tmp1341 = $tmp1342;
                            $tmp1340 = $tmp1341;
                            cl1328 = $tmp1340;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1340));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1339));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1343 = cl1328;
                            $tmp1344 = NULL;
                            cl1328 = $tmp1344;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1344));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
                        }
                    }
                    }
                }
                goto $l1332;
                $l1333:;
                {
                    $tmp1345 = t1326;
                    $tmp1346 = p_other;
                    t1326 = $tmp1346;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1346));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1345));
                }
                {
                    $tmp1347 = cl1328;
                    org$pandalanguage$pandac$ClassDecl* $tmp1350 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t21310);
                    $tmp1349 = $tmp1350;
                    $tmp1348 = $tmp1349;
                    cl1328 = $tmp1348;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1348));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1349));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1347));
                }
                $l1351:;
                bool $tmp1353 = ((panda$core$Bit) { cl1328 != NULL }).value;
                if (!$tmp1353) goto $l1352;
                {
                    panda$core$Bit $tmp1354 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(ancestors1322, ((panda$collections$Key*) t1326));
                    if ($tmp1354.value) {
                    {
                        $tmp1355 = t1326;
                        $returnValue1186 = $tmp1355;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1355));
                        $tmp1321 = 0;
                        goto $l1319;
                        $l1356:;
                        $tmp1184 = 15;
                        goto $l1182;
                        $l1357:;
                        return $returnValue1186;
                    }
                    }
                    if (((panda$core$Bit) { cl1328->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1359 = t1326;
                            org$pandalanguage$pandac$Type* $tmp1362 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1326, cl1328->rawSuper);
                            $tmp1361 = $tmp1362;
                            $tmp1360 = $tmp1361;
                            t1326 = $tmp1360;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1360));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1361));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1359));
                        }
                        {
                            $tmp1363 = cl1328;
                            org$pandalanguage$pandac$ClassDecl* $tmp1366 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1326);
                            $tmp1365 = $tmp1366;
                            $tmp1364 = $tmp1365;
                            cl1328 = $tmp1364;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1364));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1365));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1363));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1367 = cl1328;
                            $tmp1368 = NULL;
                            cl1328 = $tmp1368;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1368));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
                        }
                    }
                    }
                }
                goto $l1351;
                $l1352:;
            }
            $tmp1321 = -1;
            goto $l1319;
            $l1319:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1328));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1326));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors1322));
            ancestors1322 = NULL;
            t1326 = NULL;
            cl1328 = NULL;
            switch ($tmp1321) {
                case 0: goto $l1356;
                case -1: goto $l1369;
            }
            $l1369:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1372 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp1371 = $tmp1372;
        $tmp1370 = $tmp1371;
        $returnValue1186 = $tmp1370;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1370));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1371));
        $tmp1184 = 16;
        goto $l1182;
        $l1373:;
        return $returnValue1186;
    }
    $l1182:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t21310));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t11306));
    t11306 = NULL;
    t21310 = NULL;
    switch ($tmp1184) {
        case 7: goto $l1243;
        case 8: goto $l1251;
        case 15: goto $l1357;
        case 1: goto $l1196;
        case 3: goto $l1209;
        case 14: goto $l1304;
        case 6: goto $l1232;
        case 16: goto $l1373;
        case 2: goto $l1201;
        case 13: goto $l1292;
        case 11: goto $l1275;
        case 4: goto $l1214;
        case 10: goto $l1267;
        case 0: goto $l1188;
        case 5: goto $l1223;
        case 9: goto $l1256;
        case 12: goto $l1280;
    }
    $l1375:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    panda$core$Int64 $tmp1379;
    panda$core$Int64 $tmp1386;
    org$pandalanguage$pandac$Type* $returnValue1388;
    org$pandalanguage$pandac$Type* $tmp1389;
    org$pandalanguage$pandac$Type$Kind $match$605_91392;
    panda$core$Int64 $tmp1393;
    org$pandalanguage$pandac$Type* found1398 = NULL;
    org$pandalanguage$pandac$Type* $tmp1399;
    panda$core$Object* $tmp1400;
    org$pandalanguage$pandac$Type* $tmp1402;
    org$pandalanguage$pandac$Type* $tmp1406;
    panda$core$Int64 $tmp1411;
    org$pandalanguage$pandac$Type* base1416 = NULL;
    org$pandalanguage$pandac$Type* $tmp1417;
    org$pandalanguage$pandac$Type* $tmp1418;
    panda$core$Object* $tmp1419;
    panda$core$Int64 $tmp1420;
    panda$collections$Array* remappedArgs1423 = NULL;
    panda$collections$Array* $tmp1424;
    panda$collections$Array* $tmp1425;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1427;
    panda$core$Int64 $tmp1428;
    panda$core$Bit $tmp1430;
    org$pandalanguage$pandac$Type* $tmp1444;
    panda$core$Object* $tmp1445;
    org$pandalanguage$pandac$Type* $tmp1454;
    org$pandalanguage$pandac$Type* $tmp1455;
    panda$core$Int64 $tmp1461;
    org$pandalanguage$pandac$Type* $tmp1463;
    org$pandalanguage$pandac$Type* $tmp1464;
    org$pandalanguage$pandac$Type* $tmp1465;
    panda$core$Object* $tmp1466;
    panda$core$Int64 $tmp1467;
    panda$core$Int64 $tmp1476;
    panda$core$Int64 $tmp1479;
    panda$core$Int64 $tmp1483;
    panda$core$Int64 $tmp1487;
    panda$collections$Array* parameters1493 = NULL;
    panda$collections$Array* $tmp1494;
    panda$collections$Array* $tmp1495;
    panda$core$Int64 $tmp1498;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1503;
    panda$core$Int64 $tmp1504;
    panda$core$Int64 $tmp1506;
    panda$core$Bit $tmp1508;
    org$pandalanguage$pandac$Type* $tmp1522;
    panda$core$Object* $tmp1523;
    org$pandalanguage$pandac$Type* $tmp1532;
    org$pandalanguage$pandac$Type* $tmp1533;
    org$pandalanguage$pandac$Type* $tmp1534;
    panda$core$Object* $tmp1535;
    panda$core$Int64 $tmp1537;
    org$pandalanguage$pandac$Type* $tmp1546;
    panda$core$Int64 $tmp1550;
    int $tmp1378;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1379, 6);
        panda$core$Bit $tmp1380 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1379);
        if ($tmp1380.value) goto $l1381; else goto $l1382;
        $l1382:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1383, (panda$core$Int64) { 601 }, &$s1384);
        abort();
        $l1381:;
        panda$core$Int64 $tmp1385 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
        panda$core$Int64$init$builtin_int64(&$tmp1386, 0);
        panda$core$Bit $tmp1387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1385, $tmp1386);
        if ($tmp1387.value) {
        {
            $tmp1389 = self;
            $returnValue1388 = $tmp1389;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1389));
            $tmp1378 = 0;
            goto $l1376;
            $l1390:;
            return $returnValue1388;
        }
        }
        {
            $match$605_91392 = self->typeKind;
            panda$core$Int64$init$builtin_int64(&$tmp1393, 12);
            panda$core$Bit $tmp1394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91392.$rawValue, $tmp1393);
            if ($tmp1394.value) {
            {
                int $tmp1397;
                {
                    panda$core$Object* $tmp1401 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                    $tmp1400 = $tmp1401;
                    $tmp1399 = ((org$pandalanguage$pandac$Type*) $tmp1400);
                    found1398 = $tmp1399;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1399));
                    panda$core$Panda$unref$panda$core$Object($tmp1400);
                    if (((panda$core$Bit) { found1398 != NULL }).value) {
                    {
                        $tmp1402 = found1398;
                        $returnValue1388 = $tmp1402;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1402));
                        $tmp1397 = 0;
                        goto $l1395;
                        $l1403:;
                        $tmp1378 = 1;
                        goto $l1376;
                        $l1404:;
                        return $returnValue1388;
                    }
                    }
                    $tmp1406 = self;
                    $returnValue1388 = $tmp1406;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1406));
                    $tmp1397 = 1;
                    goto $l1395;
                    $l1407:;
                    $tmp1378 = 2;
                    goto $l1376;
                    $l1408:;
                    return $returnValue1388;
                }
                $l1395:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found1398));
                found1398 = NULL;
                switch ($tmp1397) {
                    case 1: goto $l1407;
                    case 0: goto $l1403;
                }
                $l1410:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1411, 11);
            panda$core$Bit $tmp1412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91392.$rawValue, $tmp1411);
            if ($tmp1412.value) {
            {
                int $tmp1415;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1420, 0);
                    panda$core$Object* $tmp1421 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1420);
                    $tmp1419 = $tmp1421;
                    org$pandalanguage$pandac$Type* $tmp1422 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1419), p_types);
                    $tmp1418 = $tmp1422;
                    $tmp1417 = $tmp1418;
                    base1416 = $tmp1417;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1417));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1418));
                    panda$core$Panda$unref$panda$core$Object($tmp1419);
                    panda$collections$Array* $tmp1426 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1426);
                    $tmp1425 = $tmp1426;
                    $tmp1424 = $tmp1425;
                    remappedArgs1423 = $tmp1424;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1424));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1425));
                    panda$core$Int64$init$builtin_int64(&$tmp1428, 1);
                    panda$core$Int64 $tmp1429 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                    panda$core$Bit$init$builtin_bit(&$tmp1430, false);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1427, $tmp1428, $tmp1429, $tmp1430);
                    int64_t $tmp1432 = $tmp1427.min.value;
                    panda$core$Int64 i1431 = { $tmp1432 };
                    int64_t $tmp1434 = $tmp1427.max.value;
                    bool $tmp1435 = $tmp1427.inclusive.value;
                    if ($tmp1435) goto $l1442; else goto $l1443;
                    $l1442:;
                    if ($tmp1432 <= $tmp1434) goto $l1436; else goto $l1438;
                    $l1443:;
                    if ($tmp1432 < $tmp1434) goto $l1436; else goto $l1438;
                    $l1436:;
                    {
                        panda$core$Object* $tmp1446 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1431);
                        $tmp1445 = $tmp1446;
                        org$pandalanguage$pandac$Type* $tmp1447 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1445), p_types);
                        $tmp1444 = $tmp1447;
                        panda$collections$Array$add$panda$collections$Array$T(remappedArgs1423, ((panda$core$Object*) $tmp1444));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1444));
                        panda$core$Panda$unref$panda$core$Object($tmp1445);
                    }
                    $l1439:;
                    int64_t $tmp1449 = $tmp1434 - i1431.value;
                    if ($tmp1435) goto $l1450; else goto $l1451;
                    $l1450:;
                    if ((uint64_t) $tmp1449 >= 1) goto $l1448; else goto $l1438;
                    $l1451:;
                    if ((uint64_t) $tmp1449 > 1) goto $l1448; else goto $l1438;
                    $l1448:;
                    i1431.value += 1;
                    goto $l1436;
                    $l1438:;
                    org$pandalanguage$pandac$Type* $tmp1456 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base1416, ((panda$collections$ListView*) remappedArgs1423));
                    $tmp1455 = $tmp1456;
                    $tmp1454 = $tmp1455;
                    $returnValue1388 = $tmp1454;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1454));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1455));
                    $tmp1415 = 0;
                    goto $l1413;
                    $l1457:;
                    $tmp1378 = 3;
                    goto $l1376;
                    $l1458:;
                    return $returnValue1388;
                }
                $l1413:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remappedArgs1423));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1416));
                base1416 = NULL;
                remappedArgs1423 = NULL;
                switch ($tmp1415) {
                    case 0: goto $l1457;
                }
                $l1460:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1461, 1);
            panda$core$Bit $tmp1462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91392.$rawValue, $tmp1461);
            if ($tmp1462.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp1467, 0);
                panda$core$Object* $tmp1468 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1467);
                $tmp1466 = $tmp1468;
                org$pandalanguage$pandac$Type* $tmp1469 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1466), p_types);
                $tmp1465 = $tmp1469;
                org$pandalanguage$pandac$Type* $tmp1470 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1465);
                $tmp1464 = $tmp1470;
                $tmp1463 = $tmp1464;
                $returnValue1388 = $tmp1463;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1463));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1464));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1465));
                panda$core$Panda$unref$panda$core$Object($tmp1466);
                $tmp1378 = 4;
                goto $l1376;
                $l1471:;
                return $returnValue1388;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1476, 15);
            panda$core$Bit $tmp1477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91392.$rawValue, $tmp1476);
            bool $tmp1475 = $tmp1477.value;
            if ($tmp1475) goto $l1478;
            panda$core$Int64$init$builtin_int64(&$tmp1479, 14);
            panda$core$Bit $tmp1480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91392.$rawValue, $tmp1479);
            $tmp1475 = $tmp1480.value;
            $l1478:;
            panda$core$Bit $tmp1481 = { $tmp1475 };
            bool $tmp1474 = $tmp1481.value;
            if ($tmp1474) goto $l1482;
            panda$core$Int64$init$builtin_int64(&$tmp1483, 17);
            panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91392.$rawValue, $tmp1483);
            $tmp1474 = $tmp1484.value;
            $l1482:;
            panda$core$Bit $tmp1485 = { $tmp1474 };
            bool $tmp1473 = $tmp1485.value;
            if ($tmp1473) goto $l1486;
            panda$core$Int64$init$builtin_int64(&$tmp1487, 16);
            panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91392.$rawValue, $tmp1487);
            $tmp1473 = $tmp1488.value;
            $l1486:;
            panda$core$Bit $tmp1489 = { $tmp1473 };
            if ($tmp1489.value) {
            {
                int $tmp1492;
                {
                    panda$collections$Array* $tmp1496 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1496);
                    $tmp1495 = $tmp1496;
                    $tmp1494 = $tmp1495;
                    parameters1493 = $tmp1494;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1494));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1495));
                    panda$core$Int64 $tmp1497 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                    panda$core$Int64$init$builtin_int64(&$tmp1498, 1);
                    panda$core$Bit $tmp1499 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1497, $tmp1498);
                    if ($tmp1499.value) goto $l1500; else goto $l1501;
                    $l1501:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1502, (panda$core$Int64) { 623 });
                    abort();
                    $l1500:;
                    panda$core$Int64$init$builtin_int64(&$tmp1504, 0);
                    panda$core$Int64 $tmp1505 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                    panda$core$Int64$init$builtin_int64(&$tmp1506, 1);
                    panda$core$Int64 $tmp1507 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1505, $tmp1506);
                    panda$core$Bit$init$builtin_bit(&$tmp1508, false);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1503, $tmp1504, $tmp1507, $tmp1508);
                    int64_t $tmp1510 = $tmp1503.min.value;
                    panda$core$Int64 i1509 = { $tmp1510 };
                    int64_t $tmp1512 = $tmp1503.max.value;
                    bool $tmp1513 = $tmp1503.inclusive.value;
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
                        panda$collections$Array$add$panda$collections$Array$T(parameters1493, ((panda$core$Object*) $tmp1522));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1522));
                        panda$core$Panda$unref$panda$core$Object($tmp1523);
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
                    panda$core$Int64 $tmp1536 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                    panda$core$Int64$init$builtin_int64(&$tmp1537, 1);
                    panda$core$Int64 $tmp1538 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1536, $tmp1537);
                    panda$core$Object* $tmp1539 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1538);
                    $tmp1535 = $tmp1539;
                    org$pandalanguage$pandac$Type* $tmp1540 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1535), p_types);
                    $tmp1534 = $tmp1540;
                    org$pandalanguage$pandac$Type* $tmp1541 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->position, self->typeKind, ((panda$collections$ListView*) parameters1493), $tmp1534);
                    $tmp1533 = $tmp1541;
                    $tmp1532 = $tmp1533;
                    $returnValue1388 = $tmp1532;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1532));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1533));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1534));
                    panda$core$Panda$unref$panda$core$Object($tmp1535);
                    $tmp1492 = 0;
                    goto $l1490;
                    $l1542:;
                    $tmp1378 = 5;
                    goto $l1376;
                    $l1543:;
                    return $returnValue1388;
                }
                $l1490:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1493));
                parameters1493 = NULL;
                switch ($tmp1492) {
                    case 0: goto $l1542;
                }
                $l1545:;
            }
            }
            else {
            {
                $tmp1546 = self;
                $returnValue1388 = $tmp1546;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1546));
                $tmp1378 = 6;
                goto $l1376;
                $l1547:;
                return $returnValue1388;
            }
            }
            }
            }
            }
        }
    }
    $tmp1378 = -1;
    goto $l1376;
    $l1376:;
    panda$core$Int64$init$builtin_int64(&$tmp1550, 6);
    panda$core$Bit $tmp1551 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($returnValue1388->typeKind.$rawValue, $tmp1550);
    if ($tmp1551.value) goto $l1552; else goto $l1553;
    $l1553:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1554, (panda$core$Int64) { 601 }, &$s1555);
    abort();
    $l1552:;
    switch ($tmp1378) {
        case 0: goto $l1390;
        case 2: goto $l1408;
        case 3: goto $l1458;
        case 6: goto $l1547;
        case -1: goto $l1549;
        case 5: goto $l1543;
        case 4: goto $l1471;
        case 1: goto $l1404;
    }
    $l1549:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue1556;
    panda$core$Int64 $tmp1557 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $returnValue1556 = $tmp1557;
    return $returnValue1556;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $returnValue1559;
    panda$core$String* $tmp1560;
    $tmp1560 = self->name;
    $returnValue1559 = $tmp1560;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1560));
    return $returnValue1559;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1564;
    {
    }
    $tmp1564 = -1;
    goto $l1562;
    $l1562:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1564) {
        case -1: goto $l1565;
    }
    $l1565:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

