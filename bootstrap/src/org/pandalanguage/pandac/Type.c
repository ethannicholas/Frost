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
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5895082338763246016, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -1180377256514028899, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s1071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s1108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 106, -1489654704582770111, NULL };
static panda$core$String $s1243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 180, -8366325379630919520, NULL };
static panda$core$String $s1499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x74\x79\x70\x65\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 181, -4388988894214124261, NULL };

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
    panda$core$Bit $tmp353 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue352 = $tmp353;
    return $returnValue352;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue355;
    org$pandalanguage$pandac$Type* $tmp356;
    org$pandalanguage$pandac$Type* $tmp357;
    org$pandalanguage$pandac$Type$Kind $tmp360;
    panda$core$Int64 $tmp361;
    org$pandalanguage$pandac$Position $tmp362;
    panda$core$Bit $tmp363;
    org$pandalanguage$pandac$Type* $tmp358 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp361, 4);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp360, $tmp361);
    org$pandalanguage$pandac$Position$init(&$tmp362);
    panda$core$Bit$init$builtin_bit(&$tmp363, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp358, &$s359, $tmp360, $tmp362, $tmp363);
    $tmp357 = $tmp358;
    $tmp356 = $tmp357;
    $returnValue355 = $tmp356;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp356));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
    return $returnValue355;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue365;
    org$pandalanguage$pandac$Type* $tmp366;
    org$pandalanguage$pandac$Type* $tmp367;
    org$pandalanguage$pandac$Type$Kind $tmp370;
    panda$core$Int64 $tmp371;
    org$pandalanguage$pandac$Position $tmp372;
    panda$core$Bit $tmp373;
    org$pandalanguage$pandac$Type* $tmp368 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp371, 13);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp370, $tmp371);
    org$pandalanguage$pandac$Position$init(&$tmp372);
    panda$core$Bit$init$builtin_bit(&$tmp373, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp368, &$s369, $tmp370, $tmp372, $tmp373);
    $tmp367 = $tmp368;
    $tmp366 = $tmp367;
    $returnValue365 = $tmp366;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp366));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
    return $returnValue365;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue375;
    org$pandalanguage$pandac$Type* $tmp376;
    org$pandalanguage$pandac$Type* $tmp377;
    org$pandalanguage$pandac$Type$Kind $tmp380;
    panda$core$Int64 $tmp381;
    org$pandalanguage$pandac$Position $tmp382;
    panda$core$Bit $tmp383;
    org$pandalanguage$pandac$Type* $tmp378 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp381, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp380, $tmp381);
    org$pandalanguage$pandac$Position$init(&$tmp382);
    panda$core$Bit$init$builtin_bit(&$tmp383, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp378, &$s379, $tmp380, $tmp382, $tmp383);
    $tmp377 = $tmp378;
    $tmp376 = $tmp377;
    $returnValue375 = $tmp376;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp376));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
    return $returnValue375;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes388 = NULL;
    panda$collections$Array* $tmp389;
    panda$collections$Array* $tmp390;
    org$pandalanguage$pandac$Type* $tmp392;
    org$pandalanguage$pandac$Type* $returnValue394;
    org$pandalanguage$pandac$Type* $tmp395;
    org$pandalanguage$pandac$Type* $tmp396;
    org$pandalanguage$pandac$Type$Kind $tmp399;
    panda$core$Int64 $tmp400;
    org$pandalanguage$pandac$Position $tmp401;
    panda$core$Bit $tmp402;
    int $tmp387;
    {
        panda$collections$Array* $tmp391 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp391);
        $tmp390 = $tmp391;
        $tmp389 = $tmp390;
        subtypes388 = $tmp389;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp389));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp390));
        org$pandalanguage$pandac$Type* $tmp393 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp392 = $tmp393;
        panda$collections$Array$add$panda$collections$Array$T(subtypes388, ((panda$core$Object*) $tmp392));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp392));
        org$pandalanguage$pandac$Type* $tmp397 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp400, 1);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp399, $tmp400);
        org$pandalanguage$pandac$Position$init(&$tmp401);
        panda$core$Bit$init$builtin_bit(&$tmp402, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp397, &$s398, $tmp399, $tmp401, ((panda$collections$ListView*) subtypes388), $tmp402);
        $tmp396 = $tmp397;
        $tmp395 = $tmp396;
        $returnValue394 = $tmp395;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp395));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
        $tmp387 = 0;
        goto $l385;
        $l403:;
        return $returnValue394;
    }
    $l385:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes388));
    subtypes388 = NULL;
    switch ($tmp387) {
        case 0: goto $l403;
    }
    $l405:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue406;
    org$pandalanguage$pandac$Type* $tmp407;
    org$pandalanguage$pandac$Type* $tmp408;
    org$pandalanguage$pandac$Type$Kind $tmp411;
    panda$core$Int64 $tmp412;
    org$pandalanguage$pandac$Position $tmp413;
    panda$core$Bit $tmp414;
    org$pandalanguage$pandac$Type* $tmp409 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp412, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp411, $tmp412);
    org$pandalanguage$pandac$Position$init(&$tmp413);
    panda$core$Bit$init$builtin_bit(&$tmp414, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp409, &$s410, $tmp411, $tmp413, $tmp414);
    $tmp408 = $tmp409;
    $tmp407 = $tmp408;
    $returnValue406 = $tmp407;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp407));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp408));
    return $returnValue406;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue416;
    org$pandalanguage$pandac$Type* $tmp417;
    org$pandalanguage$pandac$Type* $tmp418;
    org$pandalanguage$pandac$Type$Kind $tmp421;
    panda$core$Int64 $tmp422;
    org$pandalanguage$pandac$Position $tmp423;
    panda$core$Bit $tmp424;
    org$pandalanguage$pandac$Type* $tmp419 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp422, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp421, $tmp422);
    org$pandalanguage$pandac$Position$init(&$tmp423);
    panda$core$Bit$init$builtin_bit(&$tmp424, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp419, &$s420, $tmp421, $tmp423, $tmp424);
    $tmp418 = $tmp419;
    $tmp417 = $tmp418;
    $returnValue416 = $tmp417;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp417));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp418));
    return $returnValue416;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue426;
    org$pandalanguage$pandac$Type* $tmp427;
    org$pandalanguage$pandac$Type* $tmp428;
    org$pandalanguage$pandac$Type$Kind $tmp431;
    panda$core$Int64 $tmp432;
    org$pandalanguage$pandac$Position $tmp433;
    panda$core$Bit $tmp434;
    org$pandalanguage$pandac$Type* $tmp429 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp432, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp431, $tmp432);
    org$pandalanguage$pandac$Position$init(&$tmp433);
    panda$core$Bit$init$builtin_bit(&$tmp434, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp429, &$s430, $tmp431, $tmp433, $tmp434);
    $tmp428 = $tmp429;
    $tmp427 = $tmp428;
    $returnValue426 = $tmp427;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp427));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
    return $returnValue426;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue436;
    org$pandalanguage$pandac$Type* $tmp437;
    org$pandalanguage$pandac$Type* $tmp438;
    org$pandalanguage$pandac$Type$Kind $tmp441;
    panda$core$Int64 $tmp442;
    org$pandalanguage$pandac$Position $tmp443;
    panda$core$Bit $tmp444;
    org$pandalanguage$pandac$Type* $tmp439 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp442, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp441, $tmp442);
    org$pandalanguage$pandac$Position$init(&$tmp443);
    panda$core$Bit$init$builtin_bit(&$tmp444, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp439, &$s440, $tmp441, $tmp443, $tmp444);
    $tmp438 = $tmp439;
    $tmp437 = $tmp438;
    $returnValue436 = $tmp437;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp437));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
    return $returnValue436;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RegularExpression$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue446;
    org$pandalanguage$pandac$Type* $tmp447;
    org$pandalanguage$pandac$Type* $tmp448;
    org$pandalanguage$pandac$Type$Kind $tmp451;
    panda$core$Int64 $tmp452;
    org$pandalanguage$pandac$Position $tmp453;
    panda$core$Bit $tmp454;
    org$pandalanguage$pandac$Type* $tmp449 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp452, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp451, $tmp452);
    org$pandalanguage$pandac$Position$init(&$tmp453);
    panda$core$Bit$init$builtin_bit(&$tmp454, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp449, &$s450, $tmp451, $tmp453, $tmp454);
    $tmp448 = $tmp449;
    $tmp447 = $tmp448;
    $returnValue446 = $tmp447;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp447));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
    return $returnValue446;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue456;
    org$pandalanguage$pandac$Type* $tmp457;
    org$pandalanguage$pandac$Type* $tmp458;
    org$pandalanguage$pandac$Type$Kind $tmp461;
    panda$core$Int64 $tmp462;
    panda$core$Int64 $tmp463;
    org$pandalanguage$pandac$Type* $tmp459 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp462, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp461, $tmp462);
    panda$core$Int64$init$builtin_int64(&$tmp463, 8);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp459, &$s460, $tmp461, $tmp463);
    $tmp458 = $tmp459;
    $tmp457 = $tmp458;
    $returnValue456 = $tmp457;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp457));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
    return $returnValue456;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue465;
    org$pandalanguage$pandac$Type* $tmp466;
    org$pandalanguage$pandac$Type* $tmp467;
    org$pandalanguage$pandac$Type$Kind $tmp470;
    panda$core$Int64 $tmp471;
    panda$core$Int64 $tmp472;
    org$pandalanguage$pandac$Type* $tmp468 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp471, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp470, $tmp471);
    panda$core$Int64$init$builtin_int64(&$tmp472, 16);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp468, &$s469, $tmp470, $tmp472);
    $tmp467 = $tmp468;
    $tmp466 = $tmp467;
    $returnValue465 = $tmp466;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp466));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
    return $returnValue465;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue474;
    org$pandalanguage$pandac$Type* $tmp475;
    org$pandalanguage$pandac$Type* $tmp476;
    org$pandalanguage$pandac$Type$Kind $tmp479;
    panda$core$Int64 $tmp480;
    panda$core$Int64 $tmp481;
    org$pandalanguage$pandac$Type* $tmp477 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp480, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp479, $tmp480);
    panda$core$Int64$init$builtin_int64(&$tmp481, 32);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp477, &$s478, $tmp479, $tmp481);
    $tmp476 = $tmp477;
    $tmp475 = $tmp476;
    $returnValue474 = $tmp475;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp475));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp476));
    return $returnValue474;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue483;
    org$pandalanguage$pandac$Type* $tmp484;
    org$pandalanguage$pandac$Type* $tmp485;
    org$pandalanguage$pandac$Type$Kind $tmp488;
    panda$core$Int64 $tmp489;
    panda$core$Int64 $tmp490;
    org$pandalanguage$pandac$Type* $tmp486 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp489, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp488, $tmp489);
    panda$core$Int64$init$builtin_int64(&$tmp490, 64);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp486, &$s487, $tmp488, $tmp490);
    $tmp485 = $tmp486;
    $tmp484 = $tmp485;
    $returnValue483 = $tmp484;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp484));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
    return $returnValue483;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue492;
    org$pandalanguage$pandac$Type* $tmp493;
    org$pandalanguage$pandac$Type* $tmp494;
    org$pandalanguage$pandac$Type$Kind $tmp497;
    panda$core$Int64 $tmp498;
    panda$core$Int64 $tmp499;
    org$pandalanguage$pandac$Type* $tmp495 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp498, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp497, $tmp498);
    panda$core$Int64$init$builtin_int64(&$tmp499, 8);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp495, &$s496, $tmp497, $tmp499);
    $tmp494 = $tmp495;
    $tmp493 = $tmp494;
    $returnValue492 = $tmp493;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp493));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp494));
    return $returnValue492;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue501;
    org$pandalanguage$pandac$Type* $tmp502;
    org$pandalanguage$pandac$Type* $tmp503;
    org$pandalanguage$pandac$Type$Kind $tmp506;
    panda$core$Int64 $tmp507;
    panda$core$Int64 $tmp508;
    org$pandalanguage$pandac$Type* $tmp504 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp507, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp506, $tmp507);
    panda$core$Int64$init$builtin_int64(&$tmp508, 16);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp504, &$s505, $tmp506, $tmp508);
    $tmp503 = $tmp504;
    $tmp502 = $tmp503;
    $returnValue501 = $tmp502;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp502));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
    return $returnValue501;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue510;
    org$pandalanguage$pandac$Type* $tmp511;
    org$pandalanguage$pandac$Type* $tmp512;
    org$pandalanguage$pandac$Type$Kind $tmp515;
    panda$core$Int64 $tmp516;
    panda$core$Int64 $tmp517;
    org$pandalanguage$pandac$Type* $tmp513 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp516, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp515, $tmp516);
    panda$core$Int64$init$builtin_int64(&$tmp517, 32);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp513, &$s514, $tmp515, $tmp517);
    $tmp512 = $tmp513;
    $tmp511 = $tmp512;
    $returnValue510 = $tmp511;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp511));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp512));
    return $returnValue510;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue519;
    org$pandalanguage$pandac$Type* $tmp520;
    org$pandalanguage$pandac$Type* $tmp521;
    org$pandalanguage$pandac$Type$Kind $tmp524;
    panda$core$Int64 $tmp525;
    panda$core$Int64 $tmp526;
    org$pandalanguage$pandac$Type* $tmp522 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp525, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp524, $tmp525);
    panda$core$Int64$init$builtin_int64(&$tmp526, 64);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp522, &$s523, $tmp524, $tmp526);
    $tmp521 = $tmp522;
    $tmp520 = $tmp521;
    $returnValue519 = $tmp520;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp520));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp521));
    return $returnValue519;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue528;
    org$pandalanguage$pandac$Type* $tmp529;
    org$pandalanguage$pandac$Type* $tmp530;
    org$pandalanguage$pandac$Type$Kind $tmp533;
    panda$core$Int64 $tmp534;
    panda$core$Int64 $tmp535;
    org$pandalanguage$pandac$Type* $tmp531 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp534, 10);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp533, $tmp534);
    panda$core$Int64$init$builtin_int64(&$tmp535, 32);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp531, &$s532, $tmp533, $tmp535);
    $tmp530 = $tmp531;
    $tmp529 = $tmp530;
    $returnValue528 = $tmp529;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp529));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp530));
    return $returnValue528;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue537;
    org$pandalanguage$pandac$Type* $tmp538;
    org$pandalanguage$pandac$Type* $tmp539;
    org$pandalanguage$pandac$Type$Kind $tmp542;
    panda$core$Int64 $tmp543;
    panda$core$Int64 $tmp544;
    org$pandalanguage$pandac$Type* $tmp540 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp543, 10);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp542, $tmp543);
    panda$core$Int64$init$builtin_int64(&$tmp544, 64);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp540, &$s541, $tmp542, $tmp544);
    $tmp539 = $tmp540;
    $tmp538 = $tmp539;
    $returnValue537 = $tmp538;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp538));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp539));
    return $returnValue537;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue546;
    org$pandalanguage$pandac$Type* $tmp547;
    org$pandalanguage$pandac$Type* $tmp548;
    org$pandalanguage$pandac$Type$Kind $tmp551;
    panda$core$Int64 $tmp552;
    org$pandalanguage$pandac$Position $tmp553;
    panda$core$Bit $tmp554;
    org$pandalanguage$pandac$Type* $tmp549 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp552, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp551, $tmp552);
    org$pandalanguage$pandac$Position$init(&$tmp553);
    panda$core$Bit$init$builtin_bit(&$tmp554, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp549, &$s550, $tmp551, $tmp553, $tmp554);
    $tmp548 = $tmp549;
    $tmp547 = $tmp548;
    $returnValue546 = $tmp547;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp547));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
    return $returnValue546;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue556;
    org$pandalanguage$pandac$Type* $tmp557;
    org$pandalanguage$pandac$Type* $tmp558;
    org$pandalanguage$pandac$Type$Kind $tmp561;
    panda$core$Int64 $tmp562;
    org$pandalanguage$pandac$Position $tmp563;
    panda$core$Bit $tmp564;
    org$pandalanguage$pandac$Type* $tmp559 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp562, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp561, $tmp562);
    org$pandalanguage$pandac$Position$init(&$tmp563);
    panda$core$Bit$init$builtin_bit(&$tmp564, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp559, &$s560, $tmp561, $tmp563, $tmp564);
    $tmp558 = $tmp559;
    $tmp557 = $tmp558;
    $returnValue556 = $tmp557;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp557));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
    return $returnValue556;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue566;
    org$pandalanguage$pandac$Type* $tmp567;
    org$pandalanguage$pandac$Type* $tmp568;
    org$pandalanguage$pandac$Type$Kind $tmp571;
    panda$core$Int64 $tmp572;
    org$pandalanguage$pandac$Position $tmp573;
    panda$core$Bit $tmp574;
    org$pandalanguage$pandac$Type* $tmp569 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp572, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp571, $tmp572);
    org$pandalanguage$pandac$Position$init(&$tmp573);
    panda$core$Bit$init$builtin_bit(&$tmp574, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp569, &$s570, $tmp571, $tmp573, $tmp574);
    $tmp568 = $tmp569;
    $tmp567 = $tmp568;
    $returnValue566 = $tmp567;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp567));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
    return $returnValue566;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue576;
    org$pandalanguage$pandac$Type* $tmp577;
    org$pandalanguage$pandac$Type* $tmp578;
    org$pandalanguage$pandac$Type$Kind $tmp581;
    panda$core$Int64 $tmp582;
    org$pandalanguage$pandac$Position $tmp583;
    panda$core$Bit $tmp584;
    org$pandalanguage$pandac$Type* $tmp579 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp582, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp581, $tmp582);
    org$pandalanguage$pandac$Position$init(&$tmp583);
    panda$core$Bit$init$builtin_bit(&$tmp584, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp579, &$s580, $tmp581, $tmp583, $tmp584);
    $tmp578 = $tmp579;
    $tmp577 = $tmp578;
    $returnValue576 = $tmp577;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp577));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp578));
    return $returnValue576;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue586;
    org$pandalanguage$pandac$Type* $tmp587;
    org$pandalanguage$pandac$Type* $tmp588;
    org$pandalanguage$pandac$Type$Kind $tmp591;
    panda$core$Int64 $tmp592;
    org$pandalanguage$pandac$Position $tmp593;
    panda$core$Bit $tmp594;
    org$pandalanguage$pandac$Type* $tmp589 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp592, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp591, $tmp592);
    org$pandalanguage$pandac$Position$init(&$tmp593);
    panda$core$Bit$init$builtin_bit(&$tmp594, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp589, &$s590, $tmp591, $tmp593, $tmp594);
    $tmp588 = $tmp589;
    $tmp587 = $tmp588;
    $returnValue586 = $tmp587;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp587));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp588));
    return $returnValue586;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue596;
    org$pandalanguage$pandac$Type* $tmp597;
    org$pandalanguage$pandac$Type* $tmp598;
    org$pandalanguage$pandac$Type$Kind $tmp601;
    panda$core$Int64 $tmp602;
    org$pandalanguage$pandac$Position $tmp603;
    panda$core$Bit $tmp604;
    org$pandalanguage$pandac$Type* $tmp599 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp602, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp601, $tmp602);
    org$pandalanguage$pandac$Position$init(&$tmp603);
    panda$core$Bit$init$builtin_bit(&$tmp604, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp599, &$s600, $tmp601, $tmp603, $tmp604);
    $tmp598 = $tmp599;
    $tmp597 = $tmp598;
    $returnValue596 = $tmp597;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp597));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
    return $returnValue596;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue606;
    org$pandalanguage$pandac$Type* $tmp607;
    org$pandalanguage$pandac$Type* $tmp608;
    org$pandalanguage$pandac$Type$Kind $tmp611;
    panda$core$Int64 $tmp612;
    org$pandalanguage$pandac$Position $tmp613;
    panda$core$Bit $tmp614;
    org$pandalanguage$pandac$Type* $tmp609 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp612, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp611, $tmp612);
    org$pandalanguage$pandac$Position$init(&$tmp613);
    panda$core$Bit$init$builtin_bit(&$tmp614, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp609, &$s610, $tmp611, $tmp613, $tmp614);
    $tmp608 = $tmp609;
    $tmp607 = $tmp608;
    $returnValue606 = $tmp607;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp607));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
    return $returnValue606;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue616;
    org$pandalanguage$pandac$Type* $tmp617;
    org$pandalanguage$pandac$Type* $tmp618;
    org$pandalanguage$pandac$Type$Kind $tmp621;
    panda$core$Int64 $tmp622;
    org$pandalanguage$pandac$Position $tmp623;
    panda$core$Bit $tmp624;
    org$pandalanguage$pandac$Type* $tmp619 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp622, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp621, $tmp622);
    org$pandalanguage$pandac$Position$init(&$tmp623);
    panda$core$Bit$init$builtin_bit(&$tmp624, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp619, &$s620, $tmp621, $tmp623, $tmp624);
    $tmp618 = $tmp619;
    $tmp617 = $tmp618;
    $returnValue616 = $tmp617;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
    return $returnValue616;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue626;
    org$pandalanguage$pandac$Type* $tmp627;
    org$pandalanguage$pandac$Type* $tmp628;
    org$pandalanguage$pandac$Type$Kind $tmp631;
    panda$core$Int64 $tmp632;
    org$pandalanguage$pandac$Position $tmp633;
    panda$core$Bit $tmp634;
    org$pandalanguage$pandac$Type* $tmp629 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp632, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp631, $tmp632);
    org$pandalanguage$pandac$Position$init(&$tmp633);
    panda$core$Bit$init$builtin_bit(&$tmp634, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp629, &$s630, $tmp631, $tmp633, $tmp634);
    $tmp628 = $tmp629;
    $tmp627 = $tmp628;
    $returnValue626 = $tmp627;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp627));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
    return $returnValue626;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue636;
    org$pandalanguage$pandac$Type* $tmp637;
    org$pandalanguage$pandac$Type* $tmp638;
    org$pandalanguage$pandac$Type$Kind $tmp641;
    panda$core$Int64 $tmp642;
    org$pandalanguage$pandac$Position $tmp643;
    panda$core$Bit $tmp644;
    org$pandalanguage$pandac$Type* $tmp639 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp642, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp641, $tmp642);
    org$pandalanguage$pandac$Position$init(&$tmp643);
    panda$core$Bit$init$builtin_bit(&$tmp644, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp639, &$s640, $tmp641, $tmp643, $tmp644);
    $tmp638 = $tmp639;
    $tmp637 = $tmp638;
    $returnValue636 = $tmp637;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp637));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
    return $returnValue636;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue646;
    org$pandalanguage$pandac$Type* $tmp647;
    org$pandalanguage$pandac$Type* $tmp648;
    org$pandalanguage$pandac$Type$Kind $tmp651;
    panda$core$Int64 $tmp652;
    org$pandalanguage$pandac$Position $tmp653;
    panda$core$Bit $tmp654;
    org$pandalanguage$pandac$Type* $tmp649 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp652, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp651, $tmp652);
    org$pandalanguage$pandac$Position$init(&$tmp653);
    panda$core$Bit$init$builtin_bit(&$tmp654, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp649, &$s650, $tmp651, $tmp653, $tmp654);
    $tmp648 = $tmp649;
    $tmp647 = $tmp648;
    $returnValue646 = $tmp647;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp647));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp648));
    return $returnValue646;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue656;
    org$pandalanguage$pandac$Type* $tmp657;
    org$pandalanguage$pandac$Type* $tmp658;
    org$pandalanguage$pandac$Type$Kind $tmp661;
    panda$core$Int64 $tmp662;
    org$pandalanguage$pandac$Position $tmp663;
    panda$core$Bit $tmp664;
    org$pandalanguage$pandac$Type* $tmp659 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp662, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp661, $tmp662);
    org$pandalanguage$pandac$Position$init(&$tmp663);
    panda$core$Bit$init$builtin_bit(&$tmp664, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp659, &$s660, $tmp661, $tmp663, $tmp664);
    $tmp658 = $tmp659;
    $tmp657 = $tmp658;
    $returnValue656 = $tmp657;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp657));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp658));
    return $returnValue656;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue666;
    org$pandalanguage$pandac$Type* $tmp667;
    org$pandalanguage$pandac$Type* $tmp668;
    org$pandalanguage$pandac$Type$Kind $tmp671;
    panda$core$Int64 $tmp672;
    org$pandalanguage$pandac$Position $tmp673;
    panda$core$Bit $tmp674;
    org$pandalanguage$pandac$Type* $tmp669 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp672, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp671, $tmp672);
    org$pandalanguage$pandac$Position$init(&$tmp673);
    panda$core$Bit$init$builtin_bit(&$tmp674, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp669, &$s670, $tmp671, $tmp673, $tmp674);
    $tmp668 = $tmp669;
    $tmp667 = $tmp668;
    $returnValue666 = $tmp667;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp667));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp668));
    return $returnValue666;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue676;
    org$pandalanguage$pandac$Type* $tmp677;
    org$pandalanguage$pandac$Type* $tmp678;
    org$pandalanguage$pandac$Type$Kind $tmp681;
    panda$core$Int64 $tmp682;
    org$pandalanguage$pandac$Position $tmp683;
    panda$core$Bit $tmp684;
    org$pandalanguage$pandac$Type* $tmp679 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp682, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp681, $tmp682);
    org$pandalanguage$pandac$Position$init(&$tmp683);
    panda$core$Bit$init$builtin_bit(&$tmp684, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp679, &$s680, $tmp681, $tmp683, $tmp684);
    $tmp678 = $tmp679;
    $tmp677 = $tmp678;
    $returnValue676 = $tmp677;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp677));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp678));
    return $returnValue676;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue686;
    org$pandalanguage$pandac$Type* $tmp687;
    org$pandalanguage$pandac$Type* $tmp688;
    panda$core$String* $tmp690;
    panda$core$String* $tmp691;
    panda$core$Object* $tmp693;
    org$pandalanguage$pandac$Type$Kind $tmp698;
    panda$core$Int64 $tmp699;
    org$pandalanguage$pandac$Position $tmp700;
    panda$core$Bit $tmp701;
    org$pandalanguage$pandac$Type* $tmp689 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$UInt64$wrapper* $tmp694;
    $tmp694 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
    $tmp694->value = p_value;
    $tmp693 = ((panda$core$Object*) $tmp694);
    panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s692, $tmp693);
    $tmp691 = $tmp695;
    panda$core$String* $tmp697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp691, &$s696);
    $tmp690 = $tmp697;
    panda$core$Int64$init$builtin_int64(&$tmp699, 5);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp698, $tmp699);
    org$pandalanguage$pandac$Position$init(&$tmp700);
    panda$core$Bit$init$builtin_bit(&$tmp701, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp689, $tmp690, $tmp698, $tmp700, $tmp701);
    $tmp688 = $tmp689;
    $tmp687 = $tmp688;
    $returnValue686 = $tmp687;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp687));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp688));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
    panda$core$Panda$unref$panda$core$Object($tmp693);
    return $returnValue686;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue703;
    org$pandalanguage$pandac$Type* $tmp704;
    org$pandalanguage$pandac$Type* $tmp705;
    panda$core$String* $tmp707;
    panda$core$String* $tmp708;
    panda$core$String* $tmp710;
    org$pandalanguage$pandac$Type$Kind $tmp715;
    panda$core$Int64 $tmp716;
    org$pandalanguage$pandac$Position $tmp717;
    panda$core$Bit $tmp718;
    org$pandalanguage$pandac$Type* $tmp706 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp711 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp710 = $tmp711;
    panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s709, $tmp710);
    $tmp708 = $tmp712;
    panda$core$String* $tmp714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp708, &$s713);
    $tmp707 = $tmp714;
    panda$core$Int64$init$builtin_int64(&$tmp716, 5);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp715, $tmp716);
    org$pandalanguage$pandac$Position$init(&$tmp717);
    panda$core$Bit$init$builtin_bit(&$tmp718, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp706, $tmp707, $tmp715, $tmp717, $tmp718);
    $tmp705 = $tmp706;
    $tmp704 = $tmp705;
    $returnValue703 = $tmp704;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp704));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp705));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp707));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp708));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp710));
    return $returnValue703;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue720;
    org$pandalanguage$pandac$Type* $tmp721;
    org$pandalanguage$pandac$Type* $tmp722;
    panda$core$String* $tmp724;
    panda$core$String* $tmp725;
    panda$core$String* $tmp727;
    org$pandalanguage$pandac$Type$Kind $tmp732;
    panda$core$Int64 $tmp733;
    org$pandalanguage$pandac$Position $tmp734;
    panda$core$Bit $tmp735;
    org$pandalanguage$pandac$Type* $tmp723 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp728 = panda$core$Real64$convert$R$panda$core$String(p_value);
    $tmp727 = $tmp728;
    panda$core$String* $tmp729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s726, $tmp727);
    $tmp725 = $tmp729;
    panda$core$String* $tmp731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp725, &$s730);
    $tmp724 = $tmp731;
    panda$core$Int64$init$builtin_int64(&$tmp733, 18);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp732, $tmp733);
    org$pandalanguage$pandac$Position$init(&$tmp734);
    panda$core$Bit$init$builtin_bit(&$tmp735, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp723, $tmp724, $tmp732, $tmp734, $tmp735);
    $tmp722 = $tmp723;
    $tmp721 = $tmp722;
    $returnValue720 = $tmp721;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp721));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp722));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp727));
    return $returnValue720;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue737;
    org$pandalanguage$pandac$Type* $tmp738;
    org$pandalanguage$pandac$Type* $tmp739;
    org$pandalanguage$pandac$Type$Kind $tmp742;
    panda$core$Int64 $tmp743;
    org$pandalanguage$pandac$Position $tmp744;
    panda$core$Bit $tmp745;
    org$pandalanguage$pandac$Type* $tmp740 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp743, 8);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp742, $tmp743);
    org$pandalanguage$pandac$Position$init(&$tmp744);
    panda$core$Bit$init$builtin_bit(&$tmp745, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp740, &$s741, $tmp742, $tmp744, $tmp745);
    $tmp739 = $tmp740;
    $tmp738 = $tmp739;
    $returnValue737 = $tmp738;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp738));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp739));
    return $returnValue737;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue747;
    org$pandalanguage$pandac$Type* $tmp748;
    org$pandalanguage$pandac$Type* $tmp749;
    org$pandalanguage$pandac$Type$Kind $tmp752;
    panda$core$Int64 $tmp753;
    org$pandalanguage$pandac$Position $tmp754;
    panda$core$Bit $tmp755;
    org$pandalanguage$pandac$Type* $tmp750 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp753, 9);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp752, $tmp753);
    org$pandalanguage$pandac$Position$init(&$tmp754);
    panda$core$Bit$init$builtin_bit(&$tmp755, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp750, &$s751, $tmp752, $tmp754, $tmp755);
    $tmp749 = $tmp750;
    $tmp748 = $tmp749;
    $returnValue747 = $tmp748;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp748));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp749));
    return $returnValue747;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue757;
    org$pandalanguage$pandac$Type* $tmp758;
    org$pandalanguage$pandac$Type* $tmp759;
    org$pandalanguage$pandac$Type$Kind $tmp762;
    panda$core$Int64 $tmp763;
    org$pandalanguage$pandac$Position $tmp764;
    panda$core$Bit $tmp765;
    org$pandalanguage$pandac$Type* $tmp760 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp763, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp762, $tmp763);
    org$pandalanguage$pandac$Position$init(&$tmp764);
    panda$core$Bit$init$builtin_bit(&$tmp765, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp760, &$s761, $tmp762, $tmp764, $tmp765);
    $tmp759 = $tmp760;
    $tmp758 = $tmp759;
    $returnValue757 = $tmp758;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp758));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp759));
    return $returnValue757;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue767;
    org$pandalanguage$pandac$Type* $tmp768;
    org$pandalanguage$pandac$Type* $tmp769;
    org$pandalanguage$pandac$Type$Kind $tmp772;
    panda$core$Int64 $tmp773;
    org$pandalanguage$pandac$Position $tmp774;
    panda$core$Bit $tmp775;
    org$pandalanguage$pandac$Type* $tmp770 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp773, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp772, $tmp773);
    org$pandalanguage$pandac$Position$init(&$tmp774);
    panda$core$Bit$init$builtin_bit(&$tmp775, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp770, &$s771, $tmp772, $tmp774, $tmp775);
    $tmp769 = $tmp770;
    $tmp768 = $tmp769;
    $returnValue767 = $tmp768;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp768));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp769));
    return $returnValue767;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue777;
    org$pandalanguage$pandac$Type* $tmp778;
    org$pandalanguage$pandac$Type* $tmp779;
    org$pandalanguage$pandac$Type$Kind $tmp782;
    panda$core$Int64 $tmp783;
    org$pandalanguage$pandac$Position $tmp784;
    panda$core$Bit $tmp785;
    org$pandalanguage$pandac$Type* $tmp780 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp783, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp782, $tmp783);
    org$pandalanguage$pandac$Position$init(&$tmp784);
    panda$core$Bit$init$builtin_bit(&$tmp785, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp780, &$s781, $tmp782, $tmp784, $tmp785);
    $tmp779 = $tmp780;
    $tmp778 = $tmp779;
    $returnValue777 = $tmp778;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp778));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp779));
    return $returnValue777;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue787;
    org$pandalanguage$pandac$Type* $tmp788;
    org$pandalanguage$pandac$Type* $tmp789;
    org$pandalanguage$pandac$Type$Kind $tmp792;
    panda$core$Int64 $tmp793;
    org$pandalanguage$pandac$Position $tmp794;
    panda$core$Bit $tmp795;
    org$pandalanguage$pandac$Type* $tmp790 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp793, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp792, $tmp793);
    org$pandalanguage$pandac$Position$init(&$tmp794);
    panda$core$Bit$init$builtin_bit(&$tmp795, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp790, &$s791, $tmp792, $tmp794, $tmp795);
    $tmp789 = $tmp790;
    $tmp788 = $tmp789;
    $returnValue787 = $tmp788;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp788));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp789));
    return $returnValue787;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue797;
    org$pandalanguage$pandac$Type* $tmp798;
    org$pandalanguage$pandac$Type* $tmp799;
    org$pandalanguage$pandac$Type$Kind $tmp802;
    panda$core$Int64 $tmp803;
    org$pandalanguage$pandac$Position $tmp804;
    panda$core$Bit $tmp805;
    org$pandalanguage$pandac$Type* $tmp800 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp803, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp802, $tmp803);
    org$pandalanguage$pandac$Position$init(&$tmp804);
    panda$core$Bit$init$builtin_bit(&$tmp805, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp800, &$s801, $tmp802, $tmp804, $tmp805);
    $tmp799 = $tmp800;
    $tmp798 = $tmp799;
    $returnValue797 = $tmp798;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp798));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
    return $returnValue797;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children810 = NULL;
    panda$collections$Array* $tmp811;
    panda$collections$Array* $tmp812;
    org$pandalanguage$pandac$Type* $tmp814;
    org$pandalanguage$pandac$Type$Kind $tmp817;
    panda$core$Int64 $tmp818;
    org$pandalanguage$pandac$Position $tmp819;
    panda$core$Bit $tmp820;
    org$pandalanguage$pandac$Type* $returnValue821;
    org$pandalanguage$pandac$Type* $tmp822;
    org$pandalanguage$pandac$Type* $tmp823;
    panda$core$String* $tmp825;
    panda$core$String* $tmp826;
    panda$core$String* $tmp827;
    panda$core$String* $tmp828;
    org$pandalanguage$pandac$Type$Kind $tmp836;
    panda$core$Int64 $tmp837;
    int $tmp809;
    {
        panda$collections$Array* $tmp813 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp813);
        $tmp812 = $tmp813;
        $tmp811 = $tmp812;
        children810 = $tmp811;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp811));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
        org$pandalanguage$pandac$Type* $tmp815 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp818, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp817, $tmp818);
        org$pandalanguage$pandac$Position$init(&$tmp819);
        panda$core$Bit$init$builtin_bit(&$tmp820, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp815, &$s816, $tmp817, $tmp819, $tmp820);
        $tmp814 = $tmp815;
        panda$collections$Array$add$panda$collections$Array$T(children810, ((panda$core$Object*) $tmp814));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp814));
        panda$collections$Array$add$panda$collections$Array$T(children810, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp824 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp830 = panda$core$String$convert$R$panda$core$String(&$s829);
        $tmp828 = $tmp830;
        panda$core$String* $tmp832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp828, &$s831);
        $tmp827 = $tmp832;
        panda$core$String* $tmp833 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp827, ((panda$core$Object*) p_t));
        $tmp826 = $tmp833;
        panda$core$String* $tmp835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp826, &$s834);
        $tmp825 = $tmp835;
        panda$core$Int64$init$builtin_int64(&$tmp837, 11);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp836, $tmp837);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp824, $tmp825, $tmp836, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children810), p_t->resolved);
        $tmp823 = $tmp824;
        $tmp822 = $tmp823;
        $returnValue821 = $tmp822;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp822));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp823));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp825));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp826));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp827));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp828));
        $tmp809 = 0;
        goto $l807;
        $l838:;
        return $returnValue821;
    }
    $l807:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children810));
    children810 = NULL;
    switch ($tmp809) {
        case 0: goto $l838;
    }
    $l840:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children844 = NULL;
    panda$collections$Array* $tmp845;
    panda$collections$Array* $tmp846;
    org$pandalanguage$pandac$Type* $returnValue848;
    org$pandalanguage$pandac$Type* $tmp849;
    org$pandalanguage$pandac$Type* $tmp850;
    org$pandalanguage$pandac$Type* $tmp851;
    org$pandalanguage$pandac$Type$Kind $tmp854;
    panda$core$Int64 $tmp855;
    org$pandalanguage$pandac$Position $tmp856;
    panda$core$Bit $tmp857;
    int $tmp843;
    {
        panda$collections$Array* $tmp847 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp847);
        $tmp846 = $tmp847;
        $tmp845 = $tmp846;
        children844 = $tmp845;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp845));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp846));
        panda$collections$Array$add$panda$collections$Array$T(children844, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp852 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp855, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp854, $tmp855);
        org$pandalanguage$pandac$Position$init(&$tmp856);
        panda$core$Bit$init$builtin_bit(&$tmp857, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp852, &$s853, $tmp854, $tmp856, $tmp857);
        $tmp851 = $tmp852;
        org$pandalanguage$pandac$Type* $tmp858 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp851, ((panda$collections$ListView*) children844));
        $tmp850 = $tmp858;
        $tmp849 = $tmp850;
        $returnValue848 = $tmp849;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp849));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp851));
        $tmp843 = 0;
        goto $l841;
        $l859:;
        return $returnValue848;
    }
    $l841:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children844));
    children844 = NULL;
    switch ($tmp843) {
        case 0: goto $l859;
    }
    $l861:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children865 = NULL;
    panda$collections$Array* $tmp866;
    panda$collections$Array* $tmp867;
    org$pandalanguage$pandac$Type* $returnValue869;
    org$pandalanguage$pandac$Type* $tmp870;
    org$pandalanguage$pandac$Type* $tmp871;
    org$pandalanguage$pandac$Type* $tmp872;
    org$pandalanguage$pandac$Type$Kind $tmp875;
    panda$core$Int64 $tmp876;
    org$pandalanguage$pandac$Position $tmp877;
    panda$core$Bit $tmp878;
    int $tmp864;
    {
        panda$collections$Array* $tmp868 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp868);
        $tmp867 = $tmp868;
        $tmp866 = $tmp867;
        children865 = $tmp866;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp866));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp867));
        panda$collections$Array$add$panda$collections$Array$T(children865, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp873 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp876, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp875, $tmp876);
        org$pandalanguage$pandac$Position$init(&$tmp877);
        panda$core$Bit$init$builtin_bit(&$tmp878, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp873, &$s874, $tmp875, $tmp877, $tmp878);
        $tmp872 = $tmp873;
        org$pandalanguage$pandac$Type* $tmp879 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp872, ((panda$collections$ListView*) children865));
        $tmp871 = $tmp879;
        $tmp870 = $tmp871;
        $returnValue869 = $tmp870;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp870));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp872));
        $tmp864 = 0;
        goto $l862;
        $l880:;
        return $returnValue869;
    }
    $l862:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children865));
    children865 = NULL;
    switch ($tmp864) {
        case 0: goto $l880;
    }
    $l882:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children886 = NULL;
    panda$collections$Array* $tmp887;
    panda$collections$Array* $tmp888;
    org$pandalanguage$pandac$Type* $tmp890;
    org$pandalanguage$pandac$Type* $tmp893;
    org$pandalanguage$pandac$Type* $tmp895;
    org$pandalanguage$pandac$Type* $tmp898;
    org$pandalanguage$pandac$Type* $tmp900;
    org$pandalanguage$pandac$Type* $tmp903;
    org$pandalanguage$pandac$Type* $tmp905;
    org$pandalanguage$pandac$Type* $returnValue907;
    org$pandalanguage$pandac$Type* $tmp908;
    org$pandalanguage$pandac$Type* $tmp909;
    org$pandalanguage$pandac$Type* $tmp910;
    org$pandalanguage$pandac$Type$Kind $tmp913;
    panda$core$Int64 $tmp914;
    org$pandalanguage$pandac$Position $tmp915;
    panda$core$Bit $tmp916;
    int $tmp885;
    {
        panda$collections$Array* $tmp889 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp889);
        $tmp888 = $tmp889;
        $tmp887 = $tmp888;
        children886 = $tmp887;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp887));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
        panda$collections$Array$add$panda$collections$Array$T(children886, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp891 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp890 = $tmp891;
        panda$core$Bit $tmp892 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp890);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp890));
        if ($tmp892.value) {
        {
            org$pandalanguage$pandac$Type* $tmp894 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp893 = $tmp894;
            panda$collections$Array$add$panda$collections$Array$T(children886, ((panda$core$Object*) $tmp893));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp893));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp896 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp895 = $tmp896;
        panda$core$Bit $tmp897 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp895);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp895));
        if ($tmp897.value) {
        {
            org$pandalanguage$pandac$Type* $tmp899 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp898 = $tmp899;
            panda$collections$Array$add$panda$collections$Array$T(children886, ((panda$core$Object*) $tmp898));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp898));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp901 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp900 = $tmp901;
        panda$core$Bit $tmp902 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp900);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp900));
        if ($tmp902.value) {
        {
            org$pandalanguage$pandac$Type* $tmp904 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp903 = $tmp904;
            panda$collections$Array$add$panda$collections$Array$T(children886, ((panda$core$Object*) $tmp903));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp903));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp906 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp905 = $tmp906;
            panda$collections$Array$add$panda$collections$Array$T(children886, ((panda$core$Object*) $tmp905));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp905));
        }
        }
        }
        }
        org$pandalanguage$pandac$Type* $tmp911 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp914, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp913, $tmp914);
        org$pandalanguage$pandac$Position$init(&$tmp915);
        panda$core$Bit$init$builtin_bit(&$tmp916, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp911, &$s912, $tmp913, $tmp915, $tmp916);
        $tmp910 = $tmp911;
        org$pandalanguage$pandac$Type* $tmp917 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp910, ((panda$collections$ListView*) children886));
        $tmp909 = $tmp917;
        $tmp908 = $tmp909;
        $returnValue907 = $tmp908;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp908));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp910));
        $tmp885 = 0;
        goto $l883;
        $l918:;
        return $returnValue907;
    }
    $l883:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children886));
    children886 = NULL;
    switch ($tmp885) {
        case 0: goto $l918;
    }
    $l920:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue921;
    org$pandalanguage$pandac$Type* $tmp922;
    org$pandalanguage$pandac$Type* $tmp923;
    org$pandalanguage$pandac$Type$Kind $tmp926;
    panda$core$Int64 $tmp927;
    org$pandalanguage$pandac$Position $tmp928;
    panda$core$Bit $tmp929;
    org$pandalanguage$pandac$Type* $tmp924 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp927, 6);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp926, $tmp927);
    org$pandalanguage$pandac$Position$init(&$tmp928);
    panda$core$Bit$init$builtin_bit(&$tmp929, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp924, &$s925, $tmp926, $tmp928, $tmp929);
    $tmp923 = $tmp924;
    $tmp922 = $tmp923;
    $returnValue921 = $tmp922;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp922));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp923));
    return $returnValue921;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue931;
    org$pandalanguage$pandac$Type* $tmp932;
    org$pandalanguage$pandac$Type* $tmp933;
    org$pandalanguage$pandac$Type$Kind $tmp936;
    panda$core$Int64 $tmp937;
    org$pandalanguage$pandac$Position $tmp938;
    panda$core$Bit $tmp939;
    org$pandalanguage$pandac$Type* $tmp934 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp937, 6);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp936, $tmp937);
    org$pandalanguage$pandac$Position$init(&$tmp938);
    panda$core$Bit$init$builtin_bit(&$tmp939, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp934, &$s935, $tmp936, $tmp938, $tmp939);
    $tmp933 = $tmp934;
    $tmp932 = $tmp933;
    $returnValue931 = $tmp932;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp932));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp933));
    return $returnValue931;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue941;
    panda$core$Int64 $tmp957;
    panda$core$Int64 $tmp961;
    panda$core$Bit $tmp947 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s946);
    bool $tmp945 = $tmp947.value;
    if ($tmp945) goto $l948;
    panda$core$Bit $tmp950 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s949);
    $tmp945 = $tmp950.value;
    $l948:;
    panda$core$Bit $tmp951 = { $tmp945 };
    bool $tmp944 = $tmp951.value;
    if ($tmp944) goto $l952;
    panda$core$Bit $tmp954 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s953);
    $tmp944 = $tmp954.value;
    $l952:;
    panda$core$Bit $tmp955 = { $tmp944 };
    bool $tmp943 = $tmp955.value;
    if ($tmp943) goto $l956;
    panda$core$Int64$init$builtin_int64(&$tmp957, 5);
    panda$core$Bit $tmp958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp957);
    $tmp943 = $tmp958.value;
    $l956:;
    panda$core$Bit $tmp959 = { $tmp943 };
    bool $tmp942 = $tmp959.value;
    if ($tmp942) goto $l960;
    panda$core$Int64$init$builtin_int64(&$tmp961, 18);
    panda$core$Bit $tmp962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp961);
    $tmp942 = $tmp962.value;
    $l960:;
    panda$core$Bit $tmp963 = { $tmp942 };
    $returnValue941 = $tmp963;
    return $returnValue941;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue965;
    panda$core$Int64 $tmp969;
    panda$core$Int64 $tmp972;
    panda$core$Int64 $tmp976;
    panda$core$Int64 $tmp980;
    panda$core$Int64$init$builtin_int64(&$tmp969, 2);
    panda$core$Bit $tmp970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp969);
    bool $tmp968 = $tmp970.value;
    if ($tmp968) goto $l971;
    panda$core$Int64$init$builtin_int64(&$tmp972, 3);
    panda$core$Bit $tmp973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp972);
    $tmp968 = $tmp973.value;
    $l971:;
    panda$core$Bit $tmp974 = { $tmp968 };
    bool $tmp967 = $tmp974.value;
    if ($tmp967) goto $l975;
    panda$core$Int64$init$builtin_int64(&$tmp976, 10);
    panda$core$Bit $tmp977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp976);
    $tmp967 = $tmp977.value;
    $l975:;
    panda$core$Bit $tmp978 = { $tmp967 };
    bool $tmp966 = $tmp978.value;
    if ($tmp966) goto $l979;
    panda$core$Int64$init$builtin_int64(&$tmp980, 5);
    panda$core$Bit $tmp981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp980);
    $tmp966 = $tmp981.value;
    $l979:;
    panda$core$Bit $tmp982 = { $tmp966 };
    $returnValue965 = $tmp982;
    return $returnValue965;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue984;
    panda$core$Int64 $tmp986;
    panda$core$Int64$init$builtin_int64(&$tmp986, 18);
    panda$core$Bit $tmp987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp986);
    bool $tmp985 = $tmp987.value;
    if ($tmp985) goto $l988;
    panda$core$Bit $tmp990 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s989);
    $tmp985 = $tmp990.value;
    $l988:;
    panda$core$Bit $tmp991 = { $tmp985 };
    $returnValue984 = $tmp991;
    return $returnValue984;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue993;
    panda$core$Bit $tmp995 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s994);
    $returnValue993 = $tmp995;
    return $returnValue993;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue997;
    panda$core$Bit $tmp999 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp998 = $tmp999.value;
    if ($tmp998) goto $l1000;
    panda$core$Bit $tmp1001 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp998 = $tmp1001.value;
    $l1000:;
    panda$core$Bit $tmp1002 = { $tmp998 };
    $returnValue997 = $tmp1002;
    return $returnValue997;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$456_91004;
    panda$core$Int64 $tmp1012;
    panda$core$Int64 $tmp1015;
    panda$core$Int64 $tmp1019;
    panda$core$Int64 $tmp1023;
    panda$core$Int64 $tmp1027;
    panda$core$Int64 $tmp1031;
    panda$core$Int64 $tmp1035;
    panda$core$Int64 $tmp1039;
    panda$core$Bit $returnValue1042;
    panda$core$Bit $tmp1043;
    panda$core$Bit $tmp1045;
    {
        $match$456_91004 = self->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp1012, 0);
        panda$core$Bit $tmp1013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91004.$rawValue, $tmp1012);
        bool $tmp1011 = $tmp1013.value;
        if ($tmp1011) goto $l1014;
        panda$core$Int64$init$builtin_int64(&$tmp1015, 1);
        panda$core$Bit $tmp1016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91004.$rawValue, $tmp1015);
        $tmp1011 = $tmp1016.value;
        $l1014:;
        panda$core$Bit $tmp1017 = { $tmp1011 };
        bool $tmp1010 = $tmp1017.value;
        if ($tmp1010) goto $l1018;
        panda$core$Int64$init$builtin_int64(&$tmp1019, 11);
        panda$core$Bit $tmp1020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91004.$rawValue, $tmp1019);
        $tmp1010 = $tmp1020.value;
        $l1018:;
        panda$core$Bit $tmp1021 = { $tmp1010 };
        bool $tmp1009 = $tmp1021.value;
        if ($tmp1009) goto $l1022;
        panda$core$Int64$init$builtin_int64(&$tmp1023, 12);
        panda$core$Bit $tmp1024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91004.$rawValue, $tmp1023);
        $tmp1009 = $tmp1024.value;
        $l1022:;
        panda$core$Bit $tmp1025 = { $tmp1009 };
        bool $tmp1008 = $tmp1025.value;
        if ($tmp1008) goto $l1026;
        panda$core$Int64$init$builtin_int64(&$tmp1027, 15);
        panda$core$Bit $tmp1028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91004.$rawValue, $tmp1027);
        $tmp1008 = $tmp1028.value;
        $l1026:;
        panda$core$Bit $tmp1029 = { $tmp1008 };
        bool $tmp1007 = $tmp1029.value;
        if ($tmp1007) goto $l1030;
        panda$core$Int64$init$builtin_int64(&$tmp1031, 14);
        panda$core$Bit $tmp1032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91004.$rawValue, $tmp1031);
        $tmp1007 = $tmp1032.value;
        $l1030:;
        panda$core$Bit $tmp1033 = { $tmp1007 };
        bool $tmp1006 = $tmp1033.value;
        if ($tmp1006) goto $l1034;
        panda$core$Int64$init$builtin_int64(&$tmp1035, 17);
        panda$core$Bit $tmp1036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91004.$rawValue, $tmp1035);
        $tmp1006 = $tmp1036.value;
        $l1034:;
        panda$core$Bit $tmp1037 = { $tmp1006 };
        bool $tmp1005 = $tmp1037.value;
        if ($tmp1005) goto $l1038;
        panda$core$Int64$init$builtin_int64(&$tmp1039, 16);
        panda$core$Bit $tmp1040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_91004.$rawValue, $tmp1039);
        $tmp1005 = $tmp1040.value;
        $l1038:;
        panda$core$Bit $tmp1041 = { $tmp1005 };
        if ($tmp1041.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1043, true);
            $returnValue1042 = $tmp1043;
            return $returnValue1042;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1045, false);
            $returnValue1042 = $tmp1045;
            return $returnValue1042;
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$466_91047;
    panda$core$Int64 $tmp1051;
    panda$core$Int64 $tmp1054;
    panda$core$Int64 $tmp1058;
    panda$core$Int64 $tmp1062;
    panda$core$Bit $returnValue1065;
    panda$core$Bit $tmp1066;
    panda$core$Bit $tmp1068;
    {
        $match$466_91047 = self->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp1051, 15);
        panda$core$Bit $tmp1052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91047.$rawValue, $tmp1051);
        bool $tmp1050 = $tmp1052.value;
        if ($tmp1050) goto $l1053;
        panda$core$Int64$init$builtin_int64(&$tmp1054, 14);
        panda$core$Bit $tmp1055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91047.$rawValue, $tmp1054);
        $tmp1050 = $tmp1055.value;
        $l1053:;
        panda$core$Bit $tmp1056 = { $tmp1050 };
        bool $tmp1049 = $tmp1056.value;
        if ($tmp1049) goto $l1057;
        panda$core$Int64$init$builtin_int64(&$tmp1058, 17);
        panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91047.$rawValue, $tmp1058);
        $tmp1049 = $tmp1059.value;
        $l1057:;
        panda$core$Bit $tmp1060 = { $tmp1049 };
        bool $tmp1048 = $tmp1060.value;
        if ($tmp1048) goto $l1061;
        panda$core$Int64$init$builtin_int64(&$tmp1062, 16);
        panda$core$Bit $tmp1063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91047.$rawValue, $tmp1062);
        $tmp1048 = $tmp1063.value;
        $l1061:;
        panda$core$Bit $tmp1064 = { $tmp1048 };
        if ($tmp1064.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1066, true);
            $returnValue1065 = $tmp1066;
            return $returnValue1065;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1068, false);
            $returnValue1065 = $tmp1068;
            return $returnValue1065;
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue1070;
    panda$core$Bit $tmp1072 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1071);
    $returnValue1070 = $tmp1072;
    return $returnValue1070;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1074;
    panda$core$Bit $returnValue1076;
    panda$core$Object* $tmp1077;
    panda$core$Int64 $tmp1078;
    panda$core$Int64 $tmp1083;
    panda$core$Object* $tmp1086;
    panda$core$Int64 $tmp1087;
    panda$core$Int64$init$builtin_int64(&$tmp1074, 1);
    panda$core$Bit $tmp1075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1074);
    if ($tmp1075.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1078, 0);
        panda$core$Object* $tmp1079 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1078);
        $tmp1077 = $tmp1079;
        panda$core$Bit $tmp1080 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1077));
        $returnValue1076 = $tmp1080;
        panda$core$Panda$unref$panda$core$Object($tmp1077);
        return $returnValue1076;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1083, 11);
    panda$core$Bit $tmp1084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1083);
    bool $tmp1082 = $tmp1084.value;
    if (!$tmp1082) goto $l1085;
    panda$core$Int64$init$builtin_int64(&$tmp1087, 0);
    panda$core$Object* $tmp1088 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1087);
    $tmp1086 = $tmp1088;
    panda$core$Bit $tmp1090 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp1086))->name, &$s1089);
    $tmp1082 = $tmp1090.value;
    panda$core$Panda$unref$panda$core$Object($tmp1086);
    $l1085:;
    panda$core$Bit $tmp1091 = { $tmp1082 };
    $returnValue1076 = $tmp1091;
    return $returnValue1076;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1093;
    panda$core$Bit $returnValue1095;
    panda$core$Object* $tmp1096;
    panda$core$Int64 $tmp1097;
    panda$core$Int64 $tmp1102;
    panda$core$Object* $tmp1105;
    panda$core$Int64 $tmp1106;
    panda$core$Int64$init$builtin_int64(&$tmp1093, 1);
    panda$core$Bit $tmp1094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1093);
    if ($tmp1094.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1097, 0);
        panda$core$Object* $tmp1098 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1097);
        $tmp1096 = $tmp1098;
        panda$core$Bit $tmp1099 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1096));
        $returnValue1095 = $tmp1099;
        panda$core$Panda$unref$panda$core$Object($tmp1096);
        return $returnValue1095;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1102, 11);
    panda$core$Bit $tmp1103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1102);
    bool $tmp1101 = $tmp1103.value;
    if (!$tmp1101) goto $l1104;
    panda$core$Int64$init$builtin_int64(&$tmp1106, 0);
    panda$core$Object* $tmp1107 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1106);
    $tmp1105 = $tmp1107;
    panda$core$Bit $tmp1109 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp1105))->name, &$s1108);
    $tmp1101 = $tmp1109.value;
    panda$core$Panda$unref$panda$core$Object($tmp1105);
    $l1104:;
    panda$core$Bit $tmp1110 = { $tmp1101 };
    $returnValue1095 = $tmp1110;
    return $returnValue1095;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1115;
    org$pandalanguage$pandac$Type* $returnValue1117;
    org$pandalanguage$pandac$Type* $tmp1118;
    panda$collections$Array* subtypes1121 = NULL;
    panda$collections$Array* $tmp1122;
    panda$collections$Array* $tmp1123;
    org$pandalanguage$pandac$Type* $tmp1125;
    org$pandalanguage$pandac$Type* $tmp1126;
    panda$core$String* $tmp1128;
    panda$core$String* $tmp1129;
    org$pandalanguage$pandac$Type$Kind $tmp1133;
    panda$core$Int64 $tmp1134;
    org$pandalanguage$pandac$Position $tmp1135;
    panda$core$Bit $tmp1136;
    int $tmp1114;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1115, 1);
        panda$core$Bit $tmp1116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1115);
        if ($tmp1116.value) {
        {
            $tmp1118 = self;
            $returnValue1117 = $tmp1118;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1118));
            $tmp1114 = 0;
            goto $l1112;
            $l1119:;
            return $returnValue1117;
        }
        }
        panda$collections$Array* $tmp1124 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1124);
        $tmp1123 = $tmp1124;
        $tmp1122 = $tmp1123;
        subtypes1121 = $tmp1122;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1122));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1123));
        panda$collections$Array$add$panda$collections$Array$T(subtypes1121, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp1127 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp1130 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp1129 = $tmp1130;
        panda$core$String* $tmp1132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1129, &$s1131);
        $tmp1128 = $tmp1132;
        panda$core$Int64$init$builtin_int64(&$tmp1134, 1);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp1133, $tmp1134);
        org$pandalanguage$pandac$Position$init(&$tmp1135);
        panda$core$Bit$init$builtin_bit(&$tmp1136, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1127, $tmp1128, $tmp1133, $tmp1135, ((panda$collections$ListView*) subtypes1121), $tmp1136);
        $tmp1126 = $tmp1127;
        $tmp1125 = $tmp1126;
        $returnValue1117 = $tmp1125;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1125));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1128));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1129));
        $tmp1114 = 1;
        goto $l1112;
        $l1137:;
        return $returnValue1117;
    }
    $l1112:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1121));
    subtypes1121 = NULL;
    switch ($tmp1114) {
        case 1: goto $l1137;
        case 0: goto $l1119;
    }
    $l1139:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1140;
    org$pandalanguage$pandac$Type* $returnValue1142;
    org$pandalanguage$pandac$Type* $tmp1143;
    org$pandalanguage$pandac$Type* $tmp1145;
    panda$core$Object* $tmp1146;
    panda$core$Int64 $tmp1147;
    panda$core$Int64$init$builtin_int64(&$tmp1140, 1);
    panda$core$Bit $tmp1141 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1140);
    if ($tmp1141.value) {
    {
        $tmp1143 = self;
        $returnValue1142 = $tmp1143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1143));
        return $returnValue1142;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1147, 0);
    panda$core$Object* $tmp1148 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1147);
    $tmp1146 = $tmp1148;
    $tmp1145 = ((org$pandalanguage$pandac$Type*) $tmp1146);
    $returnValue1142 = $tmp1145;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1145));
    panda$core$Panda$unref$panda$core$Object($tmp1146);
    return $returnValue1142;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1153;
    panda$core$Int64 $tmp1156;
    panda$core$Int64 $tmp1160;
    panda$core$Int64 $tmp1164;
    org$pandalanguage$pandac$Type* $returnValue1171;
    org$pandalanguage$pandac$Type* $tmp1172;
    panda$core$Object* $tmp1173;
    panda$core$Int64 $tmp1175;
    panda$core$Int64$init$builtin_int64(&$tmp1153, 14);
    panda$core$Bit $tmp1154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1153);
    bool $tmp1152 = $tmp1154.value;
    if ($tmp1152) goto $l1155;
    panda$core$Int64$init$builtin_int64(&$tmp1156, 15);
    panda$core$Bit $tmp1157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1156);
    $tmp1152 = $tmp1157.value;
    $l1155:;
    panda$core$Bit $tmp1158 = { $tmp1152 };
    bool $tmp1151 = $tmp1158.value;
    if ($tmp1151) goto $l1159;
    panda$core$Int64$init$builtin_int64(&$tmp1160, 16);
    panda$core$Bit $tmp1161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1160);
    $tmp1151 = $tmp1161.value;
    $l1159:;
    panda$core$Bit $tmp1162 = { $tmp1151 };
    bool $tmp1150 = $tmp1162.value;
    if ($tmp1150) goto $l1163;
    panda$core$Int64$init$builtin_int64(&$tmp1164, 17);
    panda$core$Bit $tmp1165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1164);
    $tmp1150 = $tmp1165.value;
    $l1163:;
    panda$core$Bit $tmp1166 = { $tmp1150 };
    if ($tmp1166.value) goto $l1167; else goto $l1168;
    $l1168:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1169, (panda$core$Int64) { 510 }, &$s1170);
    abort();
    $l1167:;
    panda$core$Int64 $tmp1174 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
    panda$core$Int64$init$builtin_int64(&$tmp1175, 1);
    panda$core$Int64 $tmp1176 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1174, $tmp1175);
    panda$core$Object* $tmp1177 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1176);
    $tmp1173 = $tmp1177;
    $tmp1172 = ((org$pandalanguage$pandac$Type*) $tmp1173);
    $returnValue1171 = $tmp1172;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1172));
    panda$core$Panda$unref$panda$core$Object($tmp1173);
    return $returnValue1171;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $returnValue1183;
    org$pandalanguage$pandac$Type* $tmp1184;
    org$pandalanguage$pandac$Type* $tmp1187;
    panda$core$Int64 $tmp1190;
    org$pandalanguage$pandac$Type* $tmp1192;
    org$pandalanguage$pandac$Type* $tmp1195;
    org$pandalanguage$pandac$Type* $tmp1196;
    org$pandalanguage$pandac$Type* $tmp1200;
    panda$core$Int64 $tmp1203;
    org$pandalanguage$pandac$Type* $tmp1205;
    org$pandalanguage$pandac$Type* $tmp1208;
    org$pandalanguage$pandac$Type* $tmp1209;
    panda$core$Int64 $tmp1214;
    org$pandalanguage$pandac$Type* $tmp1219;
    panda$core$Int64 $tmp1225;
    org$pandalanguage$pandac$Type* $tmp1228;
    panda$core$Int64 $tmp1233;
    panda$core$Int64 $tmp1236;
    org$pandalanguage$pandac$Type* $tmp1239;
    org$pandalanguage$pandac$Type* $tmp1245;
    org$pandalanguage$pandac$Type* $tmp1246;
    org$pandalanguage$pandac$Type* $tmp1250;
    org$pandalanguage$pandac$Type* $tmp1251;
    panda$core$Int64 $tmp1257;
    panda$core$Int64 $tmp1260;
    org$pandalanguage$pandac$Type* $tmp1263;
    org$pandalanguage$pandac$Type* $tmp1269;
    org$pandalanguage$pandac$Type* $tmp1270;
    org$pandalanguage$pandac$Type* $tmp1274;
    org$pandalanguage$pandac$Type* $tmp1275;
    panda$core$Int64 $tmp1279;
    org$pandalanguage$pandac$Type* $tmp1281;
    org$pandalanguage$pandac$Type* $tmp1282;
    org$pandalanguage$pandac$Type* $tmp1283;
    panda$core$Object* $tmp1284;
    panda$core$Int64 $tmp1285;
    panda$core$Int64 $tmp1291;
    org$pandalanguage$pandac$Type* $tmp1293;
    org$pandalanguage$pandac$Type* $tmp1294;
    org$pandalanguage$pandac$Type* $tmp1295;
    panda$core$Object* $tmp1296;
    panda$core$Int64 $tmp1297;
    org$pandalanguage$pandac$Type* t11303 = NULL;
    org$pandalanguage$pandac$Type* $tmp1304;
    org$pandalanguage$pandac$Type* $tmp1305;
    org$pandalanguage$pandac$Type* t21307 = NULL;
    org$pandalanguage$pandac$Type* $tmp1308;
    org$pandalanguage$pandac$Type* $tmp1309;
    panda$collections$HashSet* ancestors1319 = NULL;
    panda$collections$HashSet* $tmp1320;
    panda$collections$HashSet* $tmp1321;
    org$pandalanguage$pandac$Type* t1323 = NULL;
    org$pandalanguage$pandac$Type* $tmp1324;
    org$pandalanguage$pandac$ClassDecl* cl1325 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1326;
    org$pandalanguage$pandac$ClassDecl* $tmp1327;
    org$pandalanguage$pandac$Type* $tmp1332;
    org$pandalanguage$pandac$Type* $tmp1333;
    org$pandalanguage$pandac$Type* $tmp1334;
    org$pandalanguage$pandac$ClassDecl* $tmp1336;
    org$pandalanguage$pandac$ClassDecl* $tmp1337;
    org$pandalanguage$pandac$ClassDecl* $tmp1338;
    org$pandalanguage$pandac$ClassDecl* $tmp1340;
    org$pandalanguage$pandac$ClassDecl* $tmp1341;
    org$pandalanguage$pandac$Type* $tmp1342;
    org$pandalanguage$pandac$Type* $tmp1343;
    org$pandalanguage$pandac$ClassDecl* $tmp1344;
    org$pandalanguage$pandac$ClassDecl* $tmp1345;
    org$pandalanguage$pandac$ClassDecl* $tmp1346;
    org$pandalanguage$pandac$Type* $tmp1352;
    org$pandalanguage$pandac$Type* $tmp1356;
    org$pandalanguage$pandac$Type* $tmp1357;
    org$pandalanguage$pandac$Type* $tmp1358;
    org$pandalanguage$pandac$ClassDecl* $tmp1360;
    org$pandalanguage$pandac$ClassDecl* $tmp1361;
    org$pandalanguage$pandac$ClassDecl* $tmp1362;
    org$pandalanguage$pandac$ClassDecl* $tmp1364;
    org$pandalanguage$pandac$ClassDecl* $tmp1365;
    org$pandalanguage$pandac$Type* $tmp1367;
    org$pandalanguage$pandac$Type* $tmp1368;
    int $tmp1181;
    {
        panda$core$Bit $tmp1182 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp1182.value) {
        {
            $tmp1184 = self;
            $returnValue1183 = $tmp1184;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1184));
            $tmp1181 = 0;
            goto $l1179;
            $l1185:;
            return $returnValue1183;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1188 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp1187 = $tmp1188;
        panda$core$Bit $tmp1189 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp1187);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1187));
        if ($tmp1189.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1190, 1);
            panda$core$Bit $tmp1191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1190);
            if ($tmp1191.value) {
            {
                $tmp1192 = p_other;
                $returnValue1183 = $tmp1192;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1192));
                $tmp1181 = 1;
                goto $l1179;
                $l1193:;
                return $returnValue1183;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1197 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp1196 = $tmp1197;
            $tmp1195 = $tmp1196;
            $returnValue1183 = $tmp1195;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1195));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1196));
            $tmp1181 = 2;
            goto $l1179;
            $l1198:;
            return $returnValue1183;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1201 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp1200 = $tmp1201;
        panda$core$Bit $tmp1202 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp1200);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1200));
        if ($tmp1202.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1203, 1);
            panda$core$Bit $tmp1204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1203);
            if ($tmp1204.value) {
            {
                $tmp1205 = self;
                $returnValue1183 = $tmp1205;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1205));
                $tmp1181 = 3;
                goto $l1179;
                $l1206:;
                return $returnValue1183;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1210 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp1209 = $tmp1210;
            $tmp1208 = $tmp1209;
            $returnValue1183 = $tmp1208;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1208));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1209));
            $tmp1181 = 4;
            goto $l1179;
            $l1211:;
            return $returnValue1183;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1214, 5);
        panda$core$Bit $tmp1215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1214);
        bool $tmp1213 = $tmp1215.value;
        if (!$tmp1213) goto $l1216;
        panda$core$Bit $tmp1217 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp1213 = $tmp1217.value;
        $l1216:;
        panda$core$Bit $tmp1218 = { $tmp1213 };
        if ($tmp1218.value) {
        {
            $tmp1219 = p_other;
            $returnValue1183 = $tmp1219;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1219));
            $tmp1181 = 5;
            goto $l1179;
            $l1220:;
            return $returnValue1183;
        }
        }
        panda$core$Bit $tmp1223 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp1222 = $tmp1223.value;
        if (!$tmp1222) goto $l1224;
        panda$core$Int64$init$builtin_int64(&$tmp1225, 5);
        panda$core$Bit $tmp1226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1225);
        $tmp1222 = $tmp1226.value;
        $l1224:;
        panda$core$Bit $tmp1227 = { $tmp1222 };
        if ($tmp1227.value) {
        {
            $tmp1228 = self;
            $returnValue1183 = $tmp1228;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1228));
            $tmp1181 = 6;
            goto $l1179;
            $l1229:;
            return $returnValue1183;
        }
        }
        panda$core$Bit $tmp1231 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp1231.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1233, 5);
            panda$core$Bit $tmp1234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1233);
            bool $tmp1232 = $tmp1234.value;
            if ($tmp1232) goto $l1235;
            panda$core$Int64$init$builtin_int64(&$tmp1236, 18);
            panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1236);
            $tmp1232 = $tmp1237.value;
            $l1235:;
            panda$core$Bit $tmp1238 = { $tmp1232 };
            if ($tmp1238.value) {
            {
                $tmp1239 = self;
                $returnValue1183 = $tmp1239;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1239));
                $tmp1181 = 7;
                goto $l1179;
                $l1240:;
                return $returnValue1183;
            }
            }
            panda$core$Bit $tmp1242 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp1242.value) {
            {
                panda$core$Bit $tmp1244 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s1243);
                if ($tmp1244.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1247 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp1246 = $tmp1247;
                    $tmp1245 = $tmp1246;
                    $returnValue1183 = $tmp1245;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1245));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1246));
                    $tmp1181 = 8;
                    goto $l1179;
                    $l1248:;
                    return $returnValue1183;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1252 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp1251 = $tmp1252;
                $tmp1250 = $tmp1251;
                $returnValue1183 = $tmp1250;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1250));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1251));
                $tmp1181 = 9;
                goto $l1179;
                $l1253:;
                return $returnValue1183;
            }
            }
        }
        }
        panda$core$Bit $tmp1255 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp1255.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1257, 5);
            panda$core$Bit $tmp1258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1257);
            bool $tmp1256 = $tmp1258.value;
            if ($tmp1256) goto $l1259;
            panda$core$Int64$init$builtin_int64(&$tmp1260, 18);
            panda$core$Bit $tmp1261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1260);
            $tmp1256 = $tmp1261.value;
            $l1259:;
            panda$core$Bit $tmp1262 = { $tmp1256 };
            if ($tmp1262.value) {
            {
                $tmp1263 = p_other;
                $returnValue1183 = $tmp1263;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1263));
                $tmp1181 = 10;
                goto $l1179;
                $l1264:;
                return $returnValue1183;
            }
            }
            panda$core$Bit $tmp1266 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp1266.value) {
            {
                panda$core$Bit $tmp1268 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1267);
                if ($tmp1268.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1271 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp1270 = $tmp1271;
                    $tmp1269 = $tmp1270;
                    $returnValue1183 = $tmp1269;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1269));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1270));
                    $tmp1181 = 11;
                    goto $l1179;
                    $l1272:;
                    return $returnValue1183;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1276 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp1275 = $tmp1276;
                $tmp1274 = $tmp1275;
                $returnValue1183 = $tmp1274;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1274));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1275));
                $tmp1181 = 12;
                goto $l1179;
                $l1277:;
                return $returnValue1183;
            }
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1279, 1);
        panda$core$Bit $tmp1280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1279);
        if ($tmp1280.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1285, 0);
            panda$core$Object* $tmp1286 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1285);
            $tmp1284 = $tmp1286;
            org$pandalanguage$pandac$Type* $tmp1287 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1284), p_compiler, p_other);
            $tmp1283 = $tmp1287;
            org$pandalanguage$pandac$Type* $tmp1288 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1283);
            $tmp1282 = $tmp1288;
            $tmp1281 = $tmp1282;
            $returnValue1183 = $tmp1281;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1281));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1282));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1283));
            panda$core$Panda$unref$panda$core$Object($tmp1284);
            $tmp1181 = 13;
            goto $l1179;
            $l1289:;
            return $returnValue1183;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1291, 1);
        panda$core$Bit $tmp1292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1291);
        if ($tmp1292.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1297, 0);
            panda$core$Object* $tmp1298 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, $tmp1297);
            $tmp1296 = $tmp1298;
            org$pandalanguage$pandac$Type* $tmp1299 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp1296));
            $tmp1295 = $tmp1299;
            org$pandalanguage$pandac$Type* $tmp1300 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1295);
            $tmp1294 = $tmp1300;
            $tmp1293 = $tmp1294;
            $returnValue1183 = $tmp1293;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1293));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1294));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1295));
            panda$core$Panda$unref$panda$core$Object($tmp1296);
            $tmp1181 = 14;
            goto $l1179;
            $l1301:;
            return $returnValue1183;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1306 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp1305 = $tmp1306;
        $tmp1304 = $tmp1305;
        t11303 = $tmp1304;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1304));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1305));
        org$pandalanguage$pandac$Type* $tmp1310 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp1309 = $tmp1310;
        $tmp1308 = $tmp1309;
        t21307 = $tmp1308;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1308));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1309));
        panda$core$Bit $tmp1312 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t11303);
        bool $tmp1311 = $tmp1312.value;
        if (!$tmp1311) goto $l1313;
        panda$core$Bit $tmp1314 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t21307);
        $tmp1311 = $tmp1314.value;
        $l1313:;
        panda$core$Bit $tmp1315 = { $tmp1311 };
        if ($tmp1315.value) {
        {
            int $tmp1318;
            {
                panda$collections$HashSet* $tmp1322 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
                panda$collections$HashSet$init($tmp1322);
                $tmp1321 = $tmp1322;
                $tmp1320 = $tmp1321;
                ancestors1319 = $tmp1320;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1320));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1321));
                $tmp1324 = self;
                t1323 = $tmp1324;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1324));
                org$pandalanguage$pandac$ClassDecl* $tmp1328 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t11303);
                $tmp1327 = $tmp1328;
                $tmp1326 = $tmp1327;
                cl1325 = $tmp1326;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1326));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1327));
                $l1329:;
                bool $tmp1331 = ((panda$core$Bit) { cl1325 != NULL }).value;
                if (!$tmp1331) goto $l1330;
                {
                    panda$collections$HashSet$add$panda$collections$HashSet$T(ancestors1319, ((panda$collections$Key*) t1323));
                    if (((panda$core$Bit) { cl1325->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1332 = t1323;
                            org$pandalanguage$pandac$Type* $tmp1335 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1323, cl1325->rawSuper);
                            $tmp1334 = $tmp1335;
                            $tmp1333 = $tmp1334;
                            t1323 = $tmp1333;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1333));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1334));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1332));
                        }
                        {
                            $tmp1336 = cl1325;
                            org$pandalanguage$pandac$ClassDecl* $tmp1339 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1323);
                            $tmp1338 = $tmp1339;
                            $tmp1337 = $tmp1338;
                            cl1325 = $tmp1337;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1337));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1338));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1336));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1340 = cl1325;
                            $tmp1341 = NULL;
                            cl1325 = $tmp1341;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1341));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1340));
                        }
                    }
                    }
                }
                goto $l1329;
                $l1330:;
                {
                    $tmp1342 = t1323;
                    $tmp1343 = p_other;
                    t1323 = $tmp1343;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1343));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1342));
                }
                {
                    $tmp1344 = cl1325;
                    org$pandalanguage$pandac$ClassDecl* $tmp1347 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t21307);
                    $tmp1346 = $tmp1347;
                    $tmp1345 = $tmp1346;
                    cl1325 = $tmp1345;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1345));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1346));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1344));
                }
                $l1348:;
                bool $tmp1350 = ((panda$core$Bit) { cl1325 != NULL }).value;
                if (!$tmp1350) goto $l1349;
                {
                    panda$core$Bit $tmp1351 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(ancestors1319, ((panda$collections$Key*) t1323));
                    if ($tmp1351.value) {
                    {
                        $tmp1352 = t1323;
                        $returnValue1183 = $tmp1352;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1352));
                        $tmp1318 = 0;
                        goto $l1316;
                        $l1353:;
                        $tmp1181 = 15;
                        goto $l1179;
                        $l1354:;
                        return $returnValue1183;
                    }
                    }
                    if (((panda$core$Bit) { cl1325->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1356 = t1323;
                            org$pandalanguage$pandac$Type* $tmp1359 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1323, cl1325->rawSuper);
                            $tmp1358 = $tmp1359;
                            $tmp1357 = $tmp1358;
                            t1323 = $tmp1357;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1357));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1358));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1356));
                        }
                        {
                            $tmp1360 = cl1325;
                            org$pandalanguage$pandac$ClassDecl* $tmp1363 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1323);
                            $tmp1362 = $tmp1363;
                            $tmp1361 = $tmp1362;
                            cl1325 = $tmp1361;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1361));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1362));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1360));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1364 = cl1325;
                            $tmp1365 = NULL;
                            cl1325 = $tmp1365;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1365));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1364));
                        }
                    }
                    }
                }
                goto $l1348;
                $l1349:;
            }
            $tmp1318 = -1;
            goto $l1316;
            $l1316:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1325));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1323));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors1319));
            ancestors1319 = NULL;
            t1323 = NULL;
            cl1325 = NULL;
            switch ($tmp1318) {
                case -1: goto $l1366;
                case 0: goto $l1353;
            }
            $l1366:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1369 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp1368 = $tmp1369;
        $tmp1367 = $tmp1368;
        $returnValue1183 = $tmp1367;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1367));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1368));
        $tmp1181 = 16;
        goto $l1179;
        $l1370:;
        return $returnValue1183;
    }
    $l1179:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t21307));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t11303));
    t11303 = NULL;
    t21307 = NULL;
    switch ($tmp1181) {
        case 16: goto $l1370;
        case 7: goto $l1240;
        case 12: goto $l1277;
        case 6: goto $l1229;
        case 8: goto $l1248;
        case 1: goto $l1193;
        case 3: goto $l1206;
        case 4: goto $l1211;
        case 2: goto $l1198;
        case 10: goto $l1264;
        case 15: goto $l1354;
        case 14: goto $l1301;
        case 5: goto $l1220;
        case 13: goto $l1289;
        case 0: goto $l1185;
        case 9: goto $l1253;
        case 11: goto $l1272;
    }
    $l1372:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    panda$core$Int64 $tmp1376;
    panda$core$Int64 $tmp1383;
    org$pandalanguage$pandac$Type* $returnValue1385;
    org$pandalanguage$pandac$Type* $tmp1386;
    org$pandalanguage$pandac$Type$Kind $match$605_91389;
    panda$core$Int64 $tmp1390;
    org$pandalanguage$pandac$Type* found1395 = NULL;
    org$pandalanguage$pandac$Type* $tmp1396;
    panda$core$Object* $tmp1397;
    org$pandalanguage$pandac$Type* $tmp1399;
    org$pandalanguage$pandac$Type* $tmp1403;
    panda$core$Int64 $tmp1408;
    org$pandalanguage$pandac$Type* base1413 = NULL;
    org$pandalanguage$pandac$Type* $tmp1414;
    org$pandalanguage$pandac$Type* $tmp1415;
    panda$core$Object* $tmp1416;
    panda$core$Int64 $tmp1417;
    panda$collections$Array* remappedArgs1420 = NULL;
    panda$collections$Array* $tmp1421;
    panda$collections$Array* $tmp1422;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1424;
    panda$core$Int64 $tmp1425;
    panda$core$Bit $tmp1427;
    org$pandalanguage$pandac$Type* $tmp1441;
    panda$core$Object* $tmp1442;
    org$pandalanguage$pandac$Type* $tmp1451;
    org$pandalanguage$pandac$Type* $tmp1452;
    panda$core$Int64 $tmp1458;
    org$pandalanguage$pandac$Type* $tmp1460;
    org$pandalanguage$pandac$Type* $tmp1461;
    org$pandalanguage$pandac$Type* $tmp1462;
    panda$core$Object* $tmp1463;
    panda$core$Int64 $tmp1464;
    panda$core$Int64 $tmp1473;
    panda$core$Int64 $tmp1476;
    panda$core$Int64 $tmp1480;
    panda$core$Int64 $tmp1484;
    panda$collections$Array* parameters1490 = NULL;
    panda$collections$Array* $tmp1491;
    panda$collections$Array* $tmp1492;
    panda$core$Int64 $tmp1495;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1500;
    panda$core$Int64 $tmp1501;
    panda$core$Int64 $tmp1503;
    panda$core$Bit $tmp1505;
    org$pandalanguage$pandac$Type* $tmp1519;
    panda$core$Object* $tmp1520;
    org$pandalanguage$pandac$Type* $tmp1529;
    org$pandalanguage$pandac$Type* $tmp1530;
    org$pandalanguage$pandac$Type* $tmp1531;
    panda$core$Object* $tmp1532;
    panda$core$Int64 $tmp1534;
    org$pandalanguage$pandac$Type* $tmp1543;
    panda$core$Int64 $tmp1547;
    int $tmp1375;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1376, 6);
        panda$core$Bit $tmp1377 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1376);
        if ($tmp1377.value) goto $l1378; else goto $l1379;
        $l1379:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1380, (panda$core$Int64) { 601 }, &$s1381);
        abort();
        $l1378:;
        panda$core$Int64 $tmp1382 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
        panda$core$Int64$init$builtin_int64(&$tmp1383, 0);
        panda$core$Bit $tmp1384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1382, $tmp1383);
        if ($tmp1384.value) {
        {
            $tmp1386 = self;
            $returnValue1385 = $tmp1386;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1386));
            $tmp1375 = 0;
            goto $l1373;
            $l1387:;
            return $returnValue1385;
        }
        }
        {
            $match$605_91389 = self->typeKind;
            panda$core$Int64$init$builtin_int64(&$tmp1390, 12);
            panda$core$Bit $tmp1391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91389.$rawValue, $tmp1390);
            if ($tmp1391.value) {
            {
                int $tmp1394;
                {
                    panda$core$Object* $tmp1398 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                    $tmp1397 = $tmp1398;
                    $tmp1396 = ((org$pandalanguage$pandac$Type*) $tmp1397);
                    found1395 = $tmp1396;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1396));
                    panda$core$Panda$unref$panda$core$Object($tmp1397);
                    if (((panda$core$Bit) { found1395 != NULL }).value) {
                    {
                        $tmp1399 = found1395;
                        $returnValue1385 = $tmp1399;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1399));
                        $tmp1394 = 0;
                        goto $l1392;
                        $l1400:;
                        $tmp1375 = 1;
                        goto $l1373;
                        $l1401:;
                        return $returnValue1385;
                    }
                    }
                    $tmp1403 = self;
                    $returnValue1385 = $tmp1403;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1403));
                    $tmp1394 = 1;
                    goto $l1392;
                    $l1404:;
                    $tmp1375 = 2;
                    goto $l1373;
                    $l1405:;
                    return $returnValue1385;
                }
                $l1392:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found1395));
                found1395 = NULL;
                switch ($tmp1394) {
                    case 0: goto $l1400;
                    case 1: goto $l1404;
                }
                $l1407:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1408, 11);
            panda$core$Bit $tmp1409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91389.$rawValue, $tmp1408);
            if ($tmp1409.value) {
            {
                int $tmp1412;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1417, 0);
                    panda$core$Object* $tmp1418 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1417);
                    $tmp1416 = $tmp1418;
                    org$pandalanguage$pandac$Type* $tmp1419 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1416), p_types);
                    $tmp1415 = $tmp1419;
                    $tmp1414 = $tmp1415;
                    base1413 = $tmp1414;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1414));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1415));
                    panda$core$Panda$unref$panda$core$Object($tmp1416);
                    panda$collections$Array* $tmp1423 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1423);
                    $tmp1422 = $tmp1423;
                    $tmp1421 = $tmp1422;
                    remappedArgs1420 = $tmp1421;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1421));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1422));
                    panda$core$Int64$init$builtin_int64(&$tmp1425, 1);
                    panda$core$Int64 $tmp1426 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                    panda$core$Bit$init$builtin_bit(&$tmp1427, false);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1424, $tmp1425, $tmp1426, $tmp1427);
                    int64_t $tmp1429 = $tmp1424.min.value;
                    panda$core$Int64 i1428 = { $tmp1429 };
                    int64_t $tmp1431 = $tmp1424.max.value;
                    bool $tmp1432 = $tmp1424.inclusive.value;
                    if ($tmp1432) goto $l1439; else goto $l1440;
                    $l1439:;
                    if ($tmp1429 <= $tmp1431) goto $l1433; else goto $l1435;
                    $l1440:;
                    if ($tmp1429 < $tmp1431) goto $l1433; else goto $l1435;
                    $l1433:;
                    {
                        panda$core$Object* $tmp1443 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1428);
                        $tmp1442 = $tmp1443;
                        org$pandalanguage$pandac$Type* $tmp1444 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1442), p_types);
                        $tmp1441 = $tmp1444;
                        panda$collections$Array$add$panda$collections$Array$T(remappedArgs1420, ((panda$core$Object*) $tmp1441));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1441));
                        panda$core$Panda$unref$panda$core$Object($tmp1442);
                    }
                    $l1436:;
                    int64_t $tmp1446 = $tmp1431 - i1428.value;
                    if ($tmp1432) goto $l1447; else goto $l1448;
                    $l1447:;
                    if ((uint64_t) $tmp1446 >= 1) goto $l1445; else goto $l1435;
                    $l1448:;
                    if ((uint64_t) $tmp1446 > 1) goto $l1445; else goto $l1435;
                    $l1445:;
                    i1428.value += 1;
                    goto $l1433;
                    $l1435:;
                    org$pandalanguage$pandac$Type* $tmp1453 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base1413, ((panda$collections$ListView*) remappedArgs1420));
                    $tmp1452 = $tmp1453;
                    $tmp1451 = $tmp1452;
                    $returnValue1385 = $tmp1451;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1451));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1452));
                    $tmp1412 = 0;
                    goto $l1410;
                    $l1454:;
                    $tmp1375 = 3;
                    goto $l1373;
                    $l1455:;
                    return $returnValue1385;
                }
                $l1410:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remappedArgs1420));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1413));
                base1413 = NULL;
                remappedArgs1420 = NULL;
                switch ($tmp1412) {
                    case 0: goto $l1454;
                }
                $l1457:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1458, 1);
            panda$core$Bit $tmp1459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91389.$rawValue, $tmp1458);
            if ($tmp1459.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp1464, 0);
                panda$core$Object* $tmp1465 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1464);
                $tmp1463 = $tmp1465;
                org$pandalanguage$pandac$Type* $tmp1466 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1463), p_types);
                $tmp1462 = $tmp1466;
                org$pandalanguage$pandac$Type* $tmp1467 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1462);
                $tmp1461 = $tmp1467;
                $tmp1460 = $tmp1461;
                $returnValue1385 = $tmp1460;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1460));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1461));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1462));
                panda$core$Panda$unref$panda$core$Object($tmp1463);
                $tmp1375 = 4;
                goto $l1373;
                $l1468:;
                return $returnValue1385;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1473, 15);
            panda$core$Bit $tmp1474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91389.$rawValue, $tmp1473);
            bool $tmp1472 = $tmp1474.value;
            if ($tmp1472) goto $l1475;
            panda$core$Int64$init$builtin_int64(&$tmp1476, 14);
            panda$core$Bit $tmp1477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91389.$rawValue, $tmp1476);
            $tmp1472 = $tmp1477.value;
            $l1475:;
            panda$core$Bit $tmp1478 = { $tmp1472 };
            bool $tmp1471 = $tmp1478.value;
            if ($tmp1471) goto $l1479;
            panda$core$Int64$init$builtin_int64(&$tmp1480, 17);
            panda$core$Bit $tmp1481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91389.$rawValue, $tmp1480);
            $tmp1471 = $tmp1481.value;
            $l1479:;
            panda$core$Bit $tmp1482 = { $tmp1471 };
            bool $tmp1470 = $tmp1482.value;
            if ($tmp1470) goto $l1483;
            panda$core$Int64$init$builtin_int64(&$tmp1484, 16);
            panda$core$Bit $tmp1485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$605_91389.$rawValue, $tmp1484);
            $tmp1470 = $tmp1485.value;
            $l1483:;
            panda$core$Bit $tmp1486 = { $tmp1470 };
            if ($tmp1486.value) {
            {
                int $tmp1489;
                {
                    panda$collections$Array* $tmp1493 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1493);
                    $tmp1492 = $tmp1493;
                    $tmp1491 = $tmp1492;
                    parameters1490 = $tmp1491;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1491));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1492));
                    panda$core$Int64 $tmp1494 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                    panda$core$Int64$init$builtin_int64(&$tmp1495, 1);
                    panda$core$Bit $tmp1496 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1494, $tmp1495);
                    if ($tmp1496.value) goto $l1497; else goto $l1498;
                    $l1498:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1499, (panda$core$Int64) { 623 });
                    abort();
                    $l1497:;
                    panda$core$Int64$init$builtin_int64(&$tmp1501, 0);
                    panda$core$Int64 $tmp1502 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                    panda$core$Int64$init$builtin_int64(&$tmp1503, 1);
                    panda$core$Int64 $tmp1504 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1502, $tmp1503);
                    panda$core$Bit$init$builtin_bit(&$tmp1505, false);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1500, $tmp1501, $tmp1504, $tmp1505);
                    int64_t $tmp1507 = $tmp1500.min.value;
                    panda$core$Int64 i1506 = { $tmp1507 };
                    int64_t $tmp1509 = $tmp1500.max.value;
                    bool $tmp1510 = $tmp1500.inclusive.value;
                    if ($tmp1510) goto $l1517; else goto $l1518;
                    $l1517:;
                    if ($tmp1507 <= $tmp1509) goto $l1511; else goto $l1513;
                    $l1518:;
                    if ($tmp1507 < $tmp1509) goto $l1511; else goto $l1513;
                    $l1511:;
                    {
                        panda$core$Object* $tmp1521 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1506);
                        $tmp1520 = $tmp1521;
                        org$pandalanguage$pandac$Type* $tmp1522 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1520), p_types);
                        $tmp1519 = $tmp1522;
                        panda$collections$Array$add$panda$collections$Array$T(parameters1490, ((panda$core$Object*) $tmp1519));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1519));
                        panda$core$Panda$unref$panda$core$Object($tmp1520);
                    }
                    $l1514:;
                    int64_t $tmp1524 = $tmp1509 - i1506.value;
                    if ($tmp1510) goto $l1525; else goto $l1526;
                    $l1525:;
                    if ((uint64_t) $tmp1524 >= 1) goto $l1523; else goto $l1513;
                    $l1526:;
                    if ((uint64_t) $tmp1524 > 1) goto $l1523; else goto $l1513;
                    $l1523:;
                    i1506.value += 1;
                    goto $l1511;
                    $l1513:;
                    panda$core$Int64 $tmp1533 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                    panda$core$Int64$init$builtin_int64(&$tmp1534, 1);
                    panda$core$Int64 $tmp1535 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1533, $tmp1534);
                    panda$core$Object* $tmp1536 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1535);
                    $tmp1532 = $tmp1536;
                    org$pandalanguage$pandac$Type* $tmp1537 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1532), p_types);
                    $tmp1531 = $tmp1537;
                    org$pandalanguage$pandac$Type* $tmp1538 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->position, self->typeKind, ((panda$collections$ListView*) parameters1490), $tmp1531);
                    $tmp1530 = $tmp1538;
                    $tmp1529 = $tmp1530;
                    $returnValue1385 = $tmp1529;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1529));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1530));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1531));
                    panda$core$Panda$unref$panda$core$Object($tmp1532);
                    $tmp1489 = 0;
                    goto $l1487;
                    $l1539:;
                    $tmp1375 = 5;
                    goto $l1373;
                    $l1540:;
                    return $returnValue1385;
                }
                $l1487:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1490));
                parameters1490 = NULL;
                switch ($tmp1489) {
                    case 0: goto $l1539;
                }
                $l1542:;
            }
            }
            else {
            {
                $tmp1543 = self;
                $returnValue1385 = $tmp1543;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1543));
                $tmp1375 = 6;
                goto $l1373;
                $l1544:;
                return $returnValue1385;
            }
            }
            }
            }
            }
        }
    }
    $tmp1375 = -1;
    goto $l1373;
    $l1373:;
    panda$core$Int64$init$builtin_int64(&$tmp1547, 6);
    panda$core$Bit $tmp1548 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($returnValue1385->typeKind.$rawValue, $tmp1547);
    if ($tmp1548.value) goto $l1549; else goto $l1550;
    $l1550:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1551, (panda$core$Int64) { 601 }, &$s1552);
    abort();
    $l1549:;
    switch ($tmp1375) {
        case 0: goto $l1387;
        case 5: goto $l1540;
        case 4: goto $l1468;
        case 3: goto $l1455;
        case 1: goto $l1401;
        case 6: goto $l1544;
        case 2: goto $l1405;
        case -1: goto $l1546;
    }
    $l1546:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue1553;
    panda$core$Int64 $tmp1554 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $returnValue1553 = $tmp1554;
    return $returnValue1553;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $returnValue1556;
    panda$core$String* $tmp1557;
    $tmp1557 = self->name;
    $returnValue1556 = $tmp1557;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1557));
    return $returnValue1556;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1561;
    {
    }
    $tmp1561 = -1;
    goto $l1559;
    $l1559:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1561) {
        case -1: goto $l1562;
    }
    $l1562:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

