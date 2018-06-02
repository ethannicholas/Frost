#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/core/Weak.h"
#include "panda/collections/CollectionView.h"
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

typedef panda$collections$Iterator* (*$fn102)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn109)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn120)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn179)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn186)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn197)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn250)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn257)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn268)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 29, -3248623696866231612, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3d", 11, 4555205210328637565, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x3d", 10, -7078666603951044273, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5895082338763246016, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static panda$core$String $s698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -1180377256514028899, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s1056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 106, -1489654704582770111, NULL };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s1523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };

void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position) {
    panda$core$Bit $tmp2;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Bit$init$builtin_bit(&$tmp2, false);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit(self, p_name, p_typeKind, p_position, $tmp2);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_resolved) {
    panda$collections$Array* $tmp3;
    panda$collections$Array* $tmp4;
    org$pandalanguage$pandac$Symbol$Kind $tmp5;
    panda$core$Int64 $tmp6;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        $tmp3 = self->subtypes;
        $tmp4 = NULL;
        self->subtypes = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
    panda$core$Int64$init$builtin_int64(&$tmp6, 6);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp5, $tmp6);
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp5, p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, panda$core$Int64 p_size) {
    org$pandalanguage$pandac$Position $tmp13;
    panda$core$Bit $tmp14;
    panda$collections$Array* $tmp15;
    panda$collections$Array* $tmp16;
    org$pandalanguage$pandac$Symbol$Kind $tmp17;
    panda$core$Int64 $tmp18;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Bit $tmp8 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s7);
    panda$core$Bit $tmp9 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp8);
    if ($tmp9.value) goto $l10; else goto $l11;
    $l11:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s12, (panda$core$Int64) { 49 });
    abort();
    $l10:;
    self->typeKind = p_typeKind;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp13, p_size, p_size);
    ((org$pandalanguage$pandac$Symbol*) self)->position = $tmp13;
    panda$core$Bit$init$builtin_bit(&$tmp14, true);
    self->resolved = $tmp14;
    {
        $tmp15 = self->subtypes;
        $tmp16 = NULL;
        self->subtypes = $tmp16;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    }
    panda$core$Int64$init$builtin_int64(&$tmp18, 6);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp17, $tmp18);
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp17, self->position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_subtypes, panda$core$Bit p_resolved) {
    panda$core$Int64 $tmp19;
    panda$core$String* $tmp27;
    panda$core$String* $tmp28;
    panda$core$String* $tmp29;
    panda$core$String* $tmp30;
    panda$core$Object* $tmp35;
    panda$core$Int64 $tmp36;
    panda$core$Int64 $tmp42;
    panda$core$String* $tmp50;
    panda$core$String* $tmp51;
    panda$core$String* $tmp52;
    panda$core$String* $tmp53;
    panda$core$Object* $tmp58;
    panda$core$Int64 $tmp59;
    panda$core$Int64 $tmp65;
    panda$collections$Array* $tmp70;
    panda$collections$Array* $tmp71;
    panda$collections$Array* $tmp72;
    org$pandalanguage$pandac$Symbol$Kind $tmp74;
    panda$core$Int64 $tmp75;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp19, 1);
    panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, $tmp19);
    panda$core$Bit $tmp22 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s21);
    panda$core$Bit $tmp23 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp20, $tmp22);
    if ($tmp23.value) goto $l24; else goto $l25;
    $l25:;
    panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s31, p_name);
    $tmp30 = $tmp32;
    panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp30, &$s33);
    $tmp29 = $tmp34;
    panda$core$Int64$init$builtin_int64(&$tmp36, 1);
    panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, $tmp36);
    panda$core$Bit$wrapper* $tmp38;
    $tmp38 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp38->value = $tmp37;
    $tmp35 = ((panda$core$Object*) $tmp38);
    panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp29, $tmp35);
    $tmp28 = $tmp39;
    panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp28, &$s40);
    $tmp27 = $tmp41;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s26, (panda$core$Int64) { 58 }, $tmp27);
    abort();
    $l24:;
    panda$core$Int64$init$builtin_int64(&$tmp42, 11);
    panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, $tmp42);
    panda$core$Bit $tmp45 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s44);
    panda$core$Bit $tmp46 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp43, $tmp45);
    if ($tmp46.value) goto $l47; else goto $l48;
    $l48:;
    panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s54, p_name);
    $tmp53 = $tmp55;
    panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp53, &$s56);
    $tmp52 = $tmp57;
    panda$core$Int64$init$builtin_int64(&$tmp59, 11);
    panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, $tmp59);
    panda$core$Bit$wrapper* $tmp61;
    $tmp61 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp61->value = $tmp60;
    $tmp58 = ((panda$core$Object*) $tmp61);
    panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp52, $tmp58);
    $tmp51 = $tmp62;
    panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp51, &$s63);
    $tmp50 = $tmp64;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s49, (panda$core$Int64) { 60 }, $tmp50);
    abort();
    $l47:;
    panda$core$Int64$init$builtin_int64(&$tmp65, 12);
    panda$core$Bit $tmp66 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, $tmp65);
    if ($tmp66.value) goto $l67; else goto $l68;
    $l68:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s69, (panda$core$Int64) { 62 });
    abort();
    $l67:;
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        $tmp70 = self->subtypes;
        panda$collections$Array* $tmp73 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp73, p_subtypes);
        $tmp72 = $tmp73;
        $tmp71 = $tmp72;
        self->subtypes = $tmp71;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
    }
    panda$core$Int64$init$builtin_int64(&$tmp75, 6);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp74, $tmp75);
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp74, p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    org$pandalanguage$pandac$Type$Kind $tmp79;
    panda$core$Int64 $tmp80;
    panda$collections$Array* $tmp81;
    panda$collections$Array* $tmp82;
    panda$collections$Array* $tmp83;
    panda$core$MutableString* name85 = NULL;
    panda$core$MutableString* $tmp86;
    panda$core$MutableString* $tmp87;
    panda$core$String* separator90 = NULL;
    panda$core$String* $tmp91;
    panda$core$Bit $tmp93;
    panda$collections$Iterator* Iter$76$997 = NULL;
    panda$collections$Iterator* $tmp98;
    panda$collections$Iterator* $tmp99;
    org$pandalanguage$pandac$Type* t115 = NULL;
    org$pandalanguage$pandac$Type* $tmp116;
    panda$core$Object* $tmp117;
    panda$core$String* $tmp122;
    panda$core$String* $tmp123;
    panda$core$Char8 $tmp130;
    panda$core$UInt8 $tmp131;
    org$pandalanguage$pandac$Symbol$Kind $tmp132;
    panda$core$Int64 $tmp133;
    panda$core$String* $tmp134;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    int $tmp78;
    {
        panda$core$Int64$init$builtin_int64(&$tmp80, 7);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp79, $tmp80);
        self->typeKind = $tmp79;
        {
            $tmp81 = self->subtypes;
            panda$collections$Array* $tmp84 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp84, p_subtypes);
            $tmp83 = $tmp84;
            $tmp82 = $tmp83;
            self->subtypes = $tmp82;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp82));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
        }
        panda$core$MutableString* $tmp88 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp88, &$s89);
        $tmp87 = $tmp88;
        $tmp86 = $tmp87;
        name85 = $tmp86;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
        $tmp91 = &$s92;
        separator90 = $tmp91;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp91));
        panda$core$Bit$init$builtin_bit(&$tmp93, true);
        self->resolved = $tmp93;
        {
            int $tmp96;
            {
                ITable* $tmp100 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
                while ($tmp100->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp100 = $tmp100->next;
                }
                $fn102 $tmp101 = $tmp100->methods[0];
                panda$collections$Iterator* $tmp103 = $tmp101(((panda$collections$Iterable*) p_subtypes));
                $tmp99 = $tmp103;
                $tmp98 = $tmp99;
                Iter$76$997 = $tmp98;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp98));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp99));
                $l104:;
                ITable* $tmp107 = Iter$76$997->$class->itable;
                while ($tmp107->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp107 = $tmp107->next;
                }
                $fn109 $tmp108 = $tmp107->methods[0];
                panda$core$Bit $tmp110 = $tmp108(Iter$76$997);
                panda$core$Bit $tmp111 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp110);
                bool $tmp106 = $tmp111.value;
                if (!$tmp106) goto $l105;
                {
                    int $tmp114;
                    {
                        ITable* $tmp118 = Iter$76$997->$class->itable;
                        while ($tmp118->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp118 = $tmp118->next;
                        }
                        $fn120 $tmp119 = $tmp118->methods[1];
                        panda$core$Object* $tmp121 = $tmp119(Iter$76$997);
                        $tmp117 = $tmp121;
                        $tmp116 = ((org$pandalanguage$pandac$Type*) $tmp117);
                        t115 = $tmp116;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
                        panda$core$Panda$unref$panda$core$Object($tmp117);
                        panda$core$MutableString$append$panda$core$String(name85, separator90);
                        panda$core$MutableString$append$panda$core$Object(name85, ((panda$core$Object*) t115));
                        {
                            $tmp122 = separator90;
                            $tmp123 = &$s124;
                            separator90 = $tmp123;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp123));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
                        }
                        bool $tmp125 = self->resolved.value;
                        if (!$tmp125) goto $l126;
                        $tmp125 = t115->resolved.value;
                        $l126:;
                        panda$core$Bit $tmp127 = { $tmp125 };
                        self->resolved = $tmp127;
                    }
                    $tmp114 = -1;
                    goto $l112;
                    $l112:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t115));
                    t115 = NULL;
                    switch ($tmp114) {
                        case -1: goto $l128;
                    }
                    $l128:;
                }
                goto $l104;
                $l105:;
            }
            $tmp96 = -1;
            goto $l94;
            $l94:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$76$997));
            Iter$76$997 = NULL;
            switch ($tmp96) {
                case -1: goto $l129;
            }
            $l129:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp131, 62);
        panda$core$Char8$init$panda$core$UInt8(&$tmp130, $tmp131);
        panda$core$MutableString$append$panda$core$Char8(name85, $tmp130);
        panda$core$Int64$init$builtin_int64(&$tmp133, 6);
        org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp132, $tmp133);
        panda$core$String* $tmp135 = panda$core$MutableString$finish$R$panda$core$String(name85);
        $tmp134 = $tmp135;
        org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp132, self->position, $tmp134);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
    }
    $tmp78 = -1;
    goto $l76;
    $l76:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator90));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name85));
    name85 = NULL;
    separator90 = NULL;
    switch ($tmp78) {
        case -1: goto $l136;
    }
    $l136:;
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    org$pandalanguage$pandac$Type$Kind $tmp137;
    panda$core$Int64 $tmp138;
    panda$core$Weak* $tmp139;
    panda$core$Weak* $tmp140;
    panda$core$Weak* $tmp141;
    panda$core$Bit $tmp143;
    panda$collections$Array* $tmp144;
    panda$collections$Array* $tmp145;
    org$pandalanguage$pandac$Symbol$Kind $tmp146;
    panda$core$Int64 $tmp147;
    panda$core$String* $tmp148;
    panda$core$String* $tmp149;
    panda$core$String* $tmp150;
    panda$core$String* $tmp151;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp138, 12);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp137, $tmp138);
    self->typeKind = $tmp137;
    {
        $tmp139 = self->parameter;
        panda$core$Weak* $tmp142 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp142, ((panda$core$Object*) p_param));
        $tmp141 = $tmp142;
        $tmp140 = $tmp141;
        self->parameter = $tmp140;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp140));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp141));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp139));
    }
    panda$core$Bit$init$builtin_bit(&$tmp143, true);
    self->resolved = $tmp143;
    {
        $tmp144 = self->subtypes;
        $tmp145 = NULL;
        self->subtypes = $tmp145;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp145));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
    }
    panda$core$Int64$init$builtin_int64(&$tmp147, 6);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp146, $tmp147);
    panda$core$String* $tmp152 = panda$core$String$convert$R$panda$core$String(p_param->owner);
    $tmp151 = $tmp152;
    panda$core$String* $tmp154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp151, &$s153);
    $tmp150 = $tmp154;
    panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp150, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
    $tmp149 = $tmp155;
    panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp149, &$s156);
    $tmp148 = $tmp157;
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp146, self->position, $tmp148);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_base, panda$collections$ListView* p_arguments) {
    panda$core$Bit resolved161;
    panda$core$MutableString* name162 = NULL;
    panda$core$MutableString* $tmp163;
    panda$core$MutableString* $tmp164;
    panda$core$Char8 $tmp166;
    panda$core$UInt8 $tmp167;
    panda$core$String* separator168 = NULL;
    panda$core$String* $tmp169;
    panda$collections$Iterator* Iter$101$9174 = NULL;
    panda$collections$Iterator* $tmp175;
    panda$collections$Iterator* $tmp176;
    org$pandalanguage$pandac$Type* a192 = NULL;
    org$pandalanguage$pandac$Type* $tmp193;
    panda$core$Object* $tmp194;
    panda$core$String* $tmp202;
    panda$core$String* $tmp203;
    panda$core$Char8 $tmp207;
    panda$core$UInt8 $tmp208;
    panda$collections$Array* subtypes209 = NULL;
    panda$collections$Array* $tmp210;
    panda$collections$Array* $tmp211;
    org$pandalanguage$pandac$Type* $returnValue213;
    org$pandalanguage$pandac$Type* $tmp214;
    org$pandalanguage$pandac$Type* $tmp215;
    panda$core$String* $tmp217;
    org$pandalanguage$pandac$Type$Kind $tmp219;
    panda$core$Int64 $tmp220;
    panda$collections$ImmutableArray* $tmp221;
    int $tmp160;
    {
        resolved161 = p_base->resolved;
        panda$core$MutableString* $tmp165 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp165);
        $tmp164 = $tmp165;
        $tmp163 = $tmp164;
        name162 = $tmp163;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
        panda$core$MutableString$append$panda$core$String(name162, ((org$pandalanguage$pandac$Symbol*) p_base)->name);
        panda$core$UInt8$init$builtin_uint8(&$tmp167, 60);
        panda$core$Char8$init$panda$core$UInt8(&$tmp166, $tmp167);
        panda$core$MutableString$append$panda$core$Char8(name162, $tmp166);
        $tmp169 = &$s170;
        separator168 = $tmp169;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp169));
        {
            int $tmp173;
            {
                ITable* $tmp177 = ((panda$collections$Iterable*) p_arguments)->$class->itable;
                while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp177 = $tmp177->next;
                }
                $fn179 $tmp178 = $tmp177->methods[0];
                panda$collections$Iterator* $tmp180 = $tmp178(((panda$collections$Iterable*) p_arguments));
                $tmp176 = $tmp180;
                $tmp175 = $tmp176;
                Iter$101$9174 = $tmp175;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
                $l181:;
                ITable* $tmp184 = Iter$101$9174->$class->itable;
                while ($tmp184->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp184 = $tmp184->next;
                }
                $fn186 $tmp185 = $tmp184->methods[0];
                panda$core$Bit $tmp187 = $tmp185(Iter$101$9174);
                panda$core$Bit $tmp188 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp187);
                bool $tmp183 = $tmp188.value;
                if (!$tmp183) goto $l182;
                {
                    int $tmp191;
                    {
                        ITable* $tmp195 = Iter$101$9174->$class->itable;
                        while ($tmp195->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp195 = $tmp195->next;
                        }
                        $fn197 $tmp196 = $tmp195->methods[1];
                        panda$core$Object* $tmp198 = $tmp196(Iter$101$9174);
                        $tmp194 = $tmp198;
                        $tmp193 = ((org$pandalanguage$pandac$Type*) $tmp194);
                        a192 = $tmp193;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
                        panda$core$Panda$unref$panda$core$Object($tmp194);
                        bool $tmp199 = resolved161.value;
                        if (!$tmp199) goto $l200;
                        $tmp199 = a192->resolved.value;
                        $l200:;
                        panda$core$Bit $tmp201 = { $tmp199 };
                        resolved161 = $tmp201;
                        panda$core$MutableString$append$panda$core$String(name162, separator168);
                        panda$core$MutableString$append$panda$core$String(name162, ((org$pandalanguage$pandac$Symbol*) a192)->name);
                        {
                            $tmp202 = separator168;
                            $tmp203 = &$s204;
                            separator168 = $tmp203;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp203));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
                        }
                    }
                    $tmp191 = -1;
                    goto $l189;
                    $l189:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a192));
                    a192 = NULL;
                    switch ($tmp191) {
                        case -1: goto $l205;
                    }
                    $l205:;
                }
                goto $l181;
                $l182:;
            }
            $tmp173 = -1;
            goto $l171;
            $l171:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$101$9174));
            Iter$101$9174 = NULL;
            switch ($tmp173) {
                case -1: goto $l206;
            }
            $l206:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp208, 62);
        panda$core$Char8$init$panda$core$UInt8(&$tmp207, $tmp208);
        panda$core$MutableString$append$panda$core$Char8(name162, $tmp207);
        panda$collections$Array* $tmp212 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp212);
        $tmp211 = $tmp212;
        $tmp210 = $tmp211;
        subtypes209 = $tmp210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
        panda$collections$Array$add$panda$collections$Array$T(subtypes209, ((panda$core$Object*) p_base));
        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(subtypes209, ((panda$collections$CollectionView*) p_arguments));
        org$pandalanguage$pandac$Type* $tmp216 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp218 = panda$core$MutableString$finish$R$panda$core$String(name162);
        $tmp217 = $tmp218;
        panda$core$Int64$init$builtin_int64(&$tmp220, 11);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp219, $tmp220);
        panda$collections$ImmutableArray* $tmp222 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes209);
        $tmp221 = $tmp222;
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp216, $tmp217, $tmp219, ((org$pandalanguage$pandac$Symbol*) p_base)->position, ((panda$collections$ListView*) $tmp221), resolved161);
        $tmp215 = $tmp216;
        $tmp214 = $tmp215;
        $returnValue213 = $tmp214;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
        $tmp160 = 0;
        goto $l158;
        $l223:;
        return $returnValue213;
    }
    $l158:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes209));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator168));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name162));
    name162 = NULL;
    separator168 = NULL;
    subtypes209 = NULL;
    switch ($tmp160) {
        case 0: goto $l223;
    }
    $l225:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type$Kind p_kind, panda$collections$ListView* p_parameterTypes, org$pandalanguage$pandac$Type* p_returnType) {
    panda$core$Bit resolved229;
    panda$core$MutableString* name230 = NULL;
    panda$core$MutableString* $tmp231;
    panda$core$MutableString* $tmp232;
    panda$collections$Array* subtypes235 = NULL;
    panda$collections$Array* $tmp236;
    panda$collections$Array* $tmp237;
    panda$core$String* separator239 = NULL;
    panda$core$String* $tmp240;
    panda$collections$Iterator* Iter$121$9245 = NULL;
    panda$collections$Iterator* $tmp246;
    panda$collections$Iterator* $tmp247;
    org$pandalanguage$pandac$Type* p263 = NULL;
    org$pandalanguage$pandac$Type* $tmp264;
    panda$core$Object* $tmp265;
    panda$core$String* $tmp273;
    panda$core$String* $tmp274;
    org$pandalanguage$pandac$Type$Kind $match$128_9278;
    panda$core$Int64 $tmp279;
    panda$core$Int64 $tmp282;
    panda$core$Int64 $tmp285;
    panda$core$Int64 $tmp288;
    panda$core$Bit $tmp291;
    org$pandalanguage$pandac$Type* $tmp295;
    panda$core$Char8 $tmp298;
    panda$core$UInt8 $tmp299;
    org$pandalanguage$pandac$Type* $returnValue300;
    org$pandalanguage$pandac$Type* $tmp301;
    org$pandalanguage$pandac$Type* $tmp302;
    panda$core$String* $tmp304;
    panda$collections$ImmutableArray* $tmp306;
    int $tmp228;
    {
        resolved229 = p_returnType->resolved;
        panda$core$MutableString* $tmp233 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp233, &$s234);
        $tmp232 = $tmp233;
        $tmp231 = $tmp232;
        name230 = $tmp231;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
        panda$collections$Array* $tmp238 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp238);
        $tmp237 = $tmp238;
        $tmp236 = $tmp237;
        subtypes235 = $tmp236;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
        $tmp240 = &$s241;
        separator239 = $tmp240;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp240));
        {
            int $tmp244;
            {
                ITable* $tmp248 = ((panda$collections$Iterable*) p_parameterTypes)->$class->itable;
                while ($tmp248->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp248 = $tmp248->next;
                }
                $fn250 $tmp249 = $tmp248->methods[0];
                panda$collections$Iterator* $tmp251 = $tmp249(((panda$collections$Iterable*) p_parameterTypes));
                $tmp247 = $tmp251;
                $tmp246 = $tmp247;
                Iter$121$9245 = $tmp246;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
                $l252:;
                ITable* $tmp255 = Iter$121$9245->$class->itable;
                while ($tmp255->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp255 = $tmp255->next;
                }
                $fn257 $tmp256 = $tmp255->methods[0];
                panda$core$Bit $tmp258 = $tmp256(Iter$121$9245);
                panda$core$Bit $tmp259 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp258);
                bool $tmp254 = $tmp259.value;
                if (!$tmp254) goto $l253;
                {
                    int $tmp262;
                    {
                        ITable* $tmp266 = Iter$121$9245->$class->itable;
                        while ($tmp266->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp266 = $tmp266->next;
                        }
                        $fn268 $tmp267 = $tmp266->methods[1];
                        panda$core$Object* $tmp269 = $tmp267(Iter$121$9245);
                        $tmp265 = $tmp269;
                        $tmp264 = ((org$pandalanguage$pandac$Type*) $tmp265);
                        p263 = $tmp264;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp264));
                        panda$core$Panda$unref$panda$core$Object($tmp265);
                        panda$collections$Array$add$panda$collections$Array$T(subtypes235, ((panda$core$Object*) p263));
                        bool $tmp270 = resolved229.value;
                        if (!$tmp270) goto $l271;
                        $tmp270 = p263->resolved.value;
                        $l271:;
                        panda$core$Bit $tmp272 = { $tmp270 };
                        resolved229 = $tmp272;
                        panda$core$MutableString$append$panda$core$String(name230, separator239);
                        panda$core$MutableString$append$panda$core$String(name230, ((org$pandalanguage$pandac$Symbol*) p263)->name);
                        {
                            $tmp273 = separator239;
                            $tmp274 = &$s275;
                            separator239 = $tmp274;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp273));
                        }
                    }
                    $tmp262 = -1;
                    goto $l260;
                    $l260:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p263));
                    p263 = NULL;
                    switch ($tmp262) {
                        case -1: goto $l276;
                    }
                    $l276:;
                }
                goto $l252;
                $l253:;
            }
            $tmp244 = -1;
            goto $l242;
            $l242:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$121$9245));
            Iter$121$9245 = NULL;
            switch ($tmp244) {
                case -1: goto $l277;
            }
            $l277:;
        }
        {
            $match$128_9278 = p_kind;
            panda$core$Int64$init$builtin_int64(&$tmp279, 14);
            panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9278.$rawValue, $tmp279);
            if ($tmp280.value) {
            {
                panda$core$MutableString$append$panda$core$String(name230, &$s281);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp282, 15);
            panda$core$Bit $tmp283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9278.$rawValue, $tmp282);
            if ($tmp283.value) {
            {
                panda$core$MutableString$append$panda$core$String(name230, &$s284);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp285, 16);
            panda$core$Bit $tmp286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9278.$rawValue, $tmp285);
            if ($tmp286.value) {
            {
                panda$core$MutableString$append$panda$core$String(name230, &$s287);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp288, 17);
            panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9278.$rawValue, $tmp288);
            if ($tmp289.value) {
            {
                panda$core$MutableString$append$panda$core$String(name230, &$s290);
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp291, false);
                if ($tmp291.value) goto $l292; else goto $l293;
                $l293:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s294, (panda$core$Int64) { 138 });
                abort();
                $l292:;
            }
            }
            }
            }
            }
        }
        panda$collections$Array$add$panda$collections$Array$T(subtypes235, ((panda$core$Object*) p_returnType));
        org$pandalanguage$pandac$Type* $tmp296 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp295 = $tmp296;
        panda$core$Bit $tmp297 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_returnType, $tmp295);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp295));
        if ($tmp297.value) {
        {
            panda$core$MutableString$append$panda$core$String(name230, ((org$pandalanguage$pandac$Symbol*) p_returnType)->name);
        }
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp299, 41);
        panda$core$Char8$init$panda$core$UInt8(&$tmp298, $tmp299);
        panda$core$MutableString$append$panda$core$Char8(name230, $tmp298);
        org$pandalanguage$pandac$Type* $tmp303 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp305 = panda$core$MutableString$finish$R$panda$core$String(name230);
        $tmp304 = $tmp305;
        panda$collections$ImmutableArray* $tmp307 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes235);
        $tmp306 = $tmp307;
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp303, $tmp304, p_kind, p_position, ((panda$collections$ListView*) $tmp306), resolved229);
        $tmp302 = $tmp303;
        $tmp301 = $tmp302;
        $returnValue300 = $tmp301;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp301));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
        $tmp228 = 0;
        goto $l226;
        $l308:;
        return $returnValue300;
    }
    $l226:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator239));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes235));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name230));
    name230 = NULL;
    subtypes235 = NULL;
    separator239 = NULL;
    switch ($tmp228) {
        case 0: goto $l308;
    }
    $l310:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp313;
    panda$core$Int64 $tmp316;
    panda$core$Int64 $tmp320;
    panda$core$String* $tmp326;
    panda$core$String* $tmp327;
    panda$core$Int64 $returnValue332;
    panda$core$Int64$init$builtin_int64(&$tmp313, 2);
    panda$core$Bit $tmp314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp313);
    bool $tmp312 = $tmp314.value;
    if ($tmp312) goto $l315;
    panda$core$Int64$init$builtin_int64(&$tmp316, 3);
    panda$core$Bit $tmp317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp316);
    $tmp312 = $tmp317.value;
    $l315:;
    panda$core$Bit $tmp318 = { $tmp312 };
    bool $tmp311 = $tmp318.value;
    if ($tmp311) goto $l319;
    panda$core$Int64$init$builtin_int64(&$tmp320, 10);
    panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp320);
    $tmp311 = $tmp321.value;
    $l319:;
    panda$core$Bit $tmp322 = { $tmp311 };
    if ($tmp322.value) goto $l323; else goto $l324;
    $l324:;
    panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s328, ((panda$core$Object*) self));
    $tmp327 = $tmp329;
    panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp327, &$s330);
    $tmp326 = $tmp331;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s325, (panda$core$Int64) { 149 }, $tmp326);
    abort();
    $l323:;
    $returnValue332 = self->position.line;
    return $returnValue332;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue334;
    panda$core$Bit $tmp335 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue334 = $tmp335;
    return $returnValue334;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue337;
    panda$core$Bit $tmp338 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue337 = $tmp338;
    return $returnValue337;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue340;
    org$pandalanguage$pandac$Type* $tmp341;
    org$pandalanguage$pandac$Type* $tmp342;
    org$pandalanguage$pandac$Type$Kind $tmp345;
    panda$core$Int64 $tmp346;
    org$pandalanguage$pandac$Position $tmp347;
    panda$core$Bit $tmp348;
    org$pandalanguage$pandac$Type* $tmp343 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp346, 4);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp345, $tmp346);
    org$pandalanguage$pandac$Position$init(&$tmp347);
    panda$core$Bit$init$builtin_bit(&$tmp348, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp343, &$s344, $tmp345, $tmp347, $tmp348);
    $tmp342 = $tmp343;
    $tmp341 = $tmp342;
    $returnValue340 = $tmp341;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp341));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
    return $returnValue340;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue350;
    org$pandalanguage$pandac$Type* $tmp351;
    org$pandalanguage$pandac$Type* $tmp352;
    org$pandalanguage$pandac$Type$Kind $tmp355;
    panda$core$Int64 $tmp356;
    org$pandalanguage$pandac$Position $tmp357;
    panda$core$Bit $tmp358;
    org$pandalanguage$pandac$Type* $tmp353 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp356, 13);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp355, $tmp356);
    org$pandalanguage$pandac$Position$init(&$tmp357);
    panda$core$Bit$init$builtin_bit(&$tmp358, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp353, &$s354, $tmp355, $tmp357, $tmp358);
    $tmp352 = $tmp353;
    $tmp351 = $tmp352;
    $returnValue350 = $tmp351;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp351));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
    return $returnValue350;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue360;
    org$pandalanguage$pandac$Type* $tmp361;
    org$pandalanguage$pandac$Type* $tmp362;
    org$pandalanguage$pandac$Type$Kind $tmp365;
    panda$core$Int64 $tmp366;
    org$pandalanguage$pandac$Position $tmp367;
    panda$core$Bit $tmp368;
    org$pandalanguage$pandac$Type* $tmp363 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp366, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp365, $tmp366);
    org$pandalanguage$pandac$Position$init(&$tmp367);
    panda$core$Bit$init$builtin_bit(&$tmp368, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp363, &$s364, $tmp365, $tmp367, $tmp368);
    $tmp362 = $tmp363;
    $tmp361 = $tmp362;
    $returnValue360 = $tmp361;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp361));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
    return $returnValue360;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes373 = NULL;
    panda$collections$Array* $tmp374;
    panda$collections$Array* $tmp375;
    org$pandalanguage$pandac$Type* $tmp377;
    org$pandalanguage$pandac$Type* $returnValue379;
    org$pandalanguage$pandac$Type* $tmp380;
    org$pandalanguage$pandac$Type* $tmp381;
    org$pandalanguage$pandac$Type$Kind $tmp384;
    panda$core$Int64 $tmp385;
    org$pandalanguage$pandac$Position $tmp386;
    panda$core$Bit $tmp387;
    int $tmp372;
    {
        panda$collections$Array* $tmp376 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp376);
        $tmp375 = $tmp376;
        $tmp374 = $tmp375;
        subtypes373 = $tmp374;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp374));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp375));
        org$pandalanguage$pandac$Type* $tmp378 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp377 = $tmp378;
        panda$collections$Array$add$panda$collections$Array$T(subtypes373, ((panda$core$Object*) $tmp377));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
        org$pandalanguage$pandac$Type* $tmp382 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp385, 1);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp384, $tmp385);
        org$pandalanguage$pandac$Position$init(&$tmp386);
        panda$core$Bit$init$builtin_bit(&$tmp387, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp382, &$s383, $tmp384, $tmp386, ((panda$collections$ListView*) subtypes373), $tmp387);
        $tmp381 = $tmp382;
        $tmp380 = $tmp381;
        $returnValue379 = $tmp380;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
        $tmp372 = 0;
        goto $l370;
        $l388:;
        return $returnValue379;
    }
    $l370:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes373));
    subtypes373 = NULL;
    switch ($tmp372) {
        case 0: goto $l388;
    }
    $l390:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue391;
    org$pandalanguage$pandac$Type* $tmp392;
    org$pandalanguage$pandac$Type* $tmp393;
    org$pandalanguage$pandac$Type$Kind $tmp396;
    panda$core$Int64 $tmp397;
    org$pandalanguage$pandac$Position $tmp398;
    panda$core$Bit $tmp399;
    org$pandalanguage$pandac$Type* $tmp394 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp397, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp396, $tmp397);
    org$pandalanguage$pandac$Position$init(&$tmp398);
    panda$core$Bit$init$builtin_bit(&$tmp399, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp394, &$s395, $tmp396, $tmp398, $tmp399);
    $tmp393 = $tmp394;
    $tmp392 = $tmp393;
    $returnValue391 = $tmp392;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp392));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
    return $returnValue391;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue401;
    org$pandalanguage$pandac$Type* $tmp402;
    org$pandalanguage$pandac$Type* $tmp403;
    org$pandalanguage$pandac$Type$Kind $tmp406;
    panda$core$Int64 $tmp407;
    org$pandalanguage$pandac$Position $tmp408;
    panda$core$Bit $tmp409;
    org$pandalanguage$pandac$Type* $tmp404 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp407, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp406, $tmp407);
    org$pandalanguage$pandac$Position$init(&$tmp408);
    panda$core$Bit$init$builtin_bit(&$tmp409, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp404, &$s405, $tmp406, $tmp408, $tmp409);
    $tmp403 = $tmp404;
    $tmp402 = $tmp403;
    $returnValue401 = $tmp402;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
    return $returnValue401;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue411;
    org$pandalanguage$pandac$Type* $tmp412;
    org$pandalanguage$pandac$Type* $tmp413;
    org$pandalanguage$pandac$Type$Kind $tmp416;
    panda$core$Int64 $tmp417;
    org$pandalanguage$pandac$Position $tmp418;
    panda$core$Bit $tmp419;
    org$pandalanguage$pandac$Type* $tmp414 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp417, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp416, $tmp417);
    org$pandalanguage$pandac$Position$init(&$tmp418);
    panda$core$Bit$init$builtin_bit(&$tmp419, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp414, &$s415, $tmp416, $tmp418, $tmp419);
    $tmp413 = $tmp414;
    $tmp412 = $tmp413;
    $returnValue411 = $tmp412;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp412));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
    return $returnValue411;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue421;
    org$pandalanguage$pandac$Type* $tmp422;
    org$pandalanguage$pandac$Type* $tmp423;
    org$pandalanguage$pandac$Type$Kind $tmp426;
    panda$core$Int64 $tmp427;
    org$pandalanguage$pandac$Position $tmp428;
    panda$core$Bit $tmp429;
    org$pandalanguage$pandac$Type* $tmp424 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp427, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp426, $tmp427);
    org$pandalanguage$pandac$Position$init(&$tmp428);
    panda$core$Bit$init$builtin_bit(&$tmp429, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp424, &$s425, $tmp426, $tmp428, $tmp429);
    $tmp423 = $tmp424;
    $tmp422 = $tmp423;
    $returnValue421 = $tmp422;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp422));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
    return $returnValue421;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RegularExpression$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue431;
    org$pandalanguage$pandac$Type* $tmp432;
    org$pandalanguage$pandac$Type* $tmp433;
    org$pandalanguage$pandac$Type$Kind $tmp436;
    panda$core$Int64 $tmp437;
    org$pandalanguage$pandac$Position $tmp438;
    panda$core$Bit $tmp439;
    org$pandalanguage$pandac$Type* $tmp434 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp437, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp436, $tmp437);
    org$pandalanguage$pandac$Position$init(&$tmp438);
    panda$core$Bit$init$builtin_bit(&$tmp439, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp434, &$s435, $tmp436, $tmp438, $tmp439);
    $tmp433 = $tmp434;
    $tmp432 = $tmp433;
    $returnValue431 = $tmp432;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp432));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
    return $returnValue431;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue441;
    org$pandalanguage$pandac$Type* $tmp442;
    org$pandalanguage$pandac$Type* $tmp443;
    org$pandalanguage$pandac$Type$Kind $tmp446;
    panda$core$Int64 $tmp447;
    panda$core$Int64 $tmp448;
    org$pandalanguage$pandac$Type* $tmp444 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp447, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp446, $tmp447);
    panda$core$Int64$init$builtin_int64(&$tmp448, 8);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp444, &$s445, $tmp446, $tmp448);
    $tmp443 = $tmp444;
    $tmp442 = $tmp443;
    $returnValue441 = $tmp442;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp442));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
    return $returnValue441;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue450;
    org$pandalanguage$pandac$Type* $tmp451;
    org$pandalanguage$pandac$Type* $tmp452;
    org$pandalanguage$pandac$Type$Kind $tmp455;
    panda$core$Int64 $tmp456;
    panda$core$Int64 $tmp457;
    org$pandalanguage$pandac$Type* $tmp453 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp456, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp455, $tmp456);
    panda$core$Int64$init$builtin_int64(&$tmp457, 16);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp453, &$s454, $tmp455, $tmp457);
    $tmp452 = $tmp453;
    $tmp451 = $tmp452;
    $returnValue450 = $tmp451;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp451));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
    return $returnValue450;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue459;
    org$pandalanguage$pandac$Type* $tmp460;
    org$pandalanguage$pandac$Type* $tmp461;
    org$pandalanguage$pandac$Type$Kind $tmp464;
    panda$core$Int64 $tmp465;
    panda$core$Int64 $tmp466;
    org$pandalanguage$pandac$Type* $tmp462 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp465, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp464, $tmp465);
    panda$core$Int64$init$builtin_int64(&$tmp466, 32);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp462, &$s463, $tmp464, $tmp466);
    $tmp461 = $tmp462;
    $tmp460 = $tmp461;
    $returnValue459 = $tmp460;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp460));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
    return $returnValue459;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue468;
    org$pandalanguage$pandac$Type* $tmp469;
    org$pandalanguage$pandac$Type* $tmp470;
    org$pandalanguage$pandac$Type$Kind $tmp473;
    panda$core$Int64 $tmp474;
    panda$core$Int64 $tmp475;
    org$pandalanguage$pandac$Type* $tmp471 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp474, 2);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp473, $tmp474);
    panda$core$Int64$init$builtin_int64(&$tmp475, 64);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp471, &$s472, $tmp473, $tmp475);
    $tmp470 = $tmp471;
    $tmp469 = $tmp470;
    $returnValue468 = $tmp469;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp469));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
    return $returnValue468;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue477;
    org$pandalanguage$pandac$Type* $tmp478;
    org$pandalanguage$pandac$Type* $tmp479;
    org$pandalanguage$pandac$Type$Kind $tmp482;
    panda$core$Int64 $tmp483;
    panda$core$Int64 $tmp484;
    org$pandalanguage$pandac$Type* $tmp480 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp483, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp482, $tmp483);
    panda$core$Int64$init$builtin_int64(&$tmp484, 8);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp480, &$s481, $tmp482, $tmp484);
    $tmp479 = $tmp480;
    $tmp478 = $tmp479;
    $returnValue477 = $tmp478;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp478));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
    return $returnValue477;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue486;
    org$pandalanguage$pandac$Type* $tmp487;
    org$pandalanguage$pandac$Type* $tmp488;
    org$pandalanguage$pandac$Type$Kind $tmp491;
    panda$core$Int64 $tmp492;
    panda$core$Int64 $tmp493;
    org$pandalanguage$pandac$Type* $tmp489 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp492, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp491, $tmp492);
    panda$core$Int64$init$builtin_int64(&$tmp493, 16);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp489, &$s490, $tmp491, $tmp493);
    $tmp488 = $tmp489;
    $tmp487 = $tmp488;
    $returnValue486 = $tmp487;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp487));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp488));
    return $returnValue486;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue495;
    org$pandalanguage$pandac$Type* $tmp496;
    org$pandalanguage$pandac$Type* $tmp497;
    org$pandalanguage$pandac$Type$Kind $tmp500;
    panda$core$Int64 $tmp501;
    panda$core$Int64 $tmp502;
    org$pandalanguage$pandac$Type* $tmp498 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp501, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp500, $tmp501);
    panda$core$Int64$init$builtin_int64(&$tmp502, 32);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp498, &$s499, $tmp500, $tmp502);
    $tmp497 = $tmp498;
    $tmp496 = $tmp497;
    $returnValue495 = $tmp496;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp496));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp497));
    return $returnValue495;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue504;
    org$pandalanguage$pandac$Type* $tmp505;
    org$pandalanguage$pandac$Type* $tmp506;
    org$pandalanguage$pandac$Type$Kind $tmp509;
    panda$core$Int64 $tmp510;
    panda$core$Int64 $tmp511;
    org$pandalanguage$pandac$Type* $tmp507 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp510, 3);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp509, $tmp510);
    panda$core$Int64$init$builtin_int64(&$tmp511, 64);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp507, &$s508, $tmp509, $tmp511);
    $tmp506 = $tmp507;
    $tmp505 = $tmp506;
    $returnValue504 = $tmp505;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp505));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
    return $returnValue504;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue513;
    org$pandalanguage$pandac$Type* $tmp514;
    org$pandalanguage$pandac$Type* $tmp515;
    org$pandalanguage$pandac$Type$Kind $tmp518;
    panda$core$Int64 $tmp519;
    panda$core$Int64 $tmp520;
    org$pandalanguage$pandac$Type* $tmp516 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp519, 10);
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue522;
    org$pandalanguage$pandac$Type* $tmp523;
    org$pandalanguage$pandac$Type* $tmp524;
    org$pandalanguage$pandac$Type$Kind $tmp527;
    panda$core$Int64 $tmp528;
    panda$core$Int64 $tmp529;
    org$pandalanguage$pandac$Type* $tmp525 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp528, 10);
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue531;
    org$pandalanguage$pandac$Type* $tmp532;
    org$pandalanguage$pandac$Type* $tmp533;
    org$pandalanguage$pandac$Type$Kind $tmp536;
    panda$core$Int64 $tmp537;
    org$pandalanguage$pandac$Position $tmp538;
    panda$core$Bit $tmp539;
    org$pandalanguage$pandac$Type* $tmp534 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp537, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp536, $tmp537);
    org$pandalanguage$pandac$Position$init(&$tmp538);
    panda$core$Bit$init$builtin_bit(&$tmp539, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp534, &$s535, $tmp536, $tmp538, $tmp539);
    $tmp533 = $tmp534;
    $tmp532 = $tmp533;
    $returnValue531 = $tmp532;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp532));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
    return $returnValue531;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue541;
    org$pandalanguage$pandac$Type* $tmp542;
    org$pandalanguage$pandac$Type* $tmp543;
    org$pandalanguage$pandac$Type$Kind $tmp546;
    panda$core$Int64 $tmp547;
    org$pandalanguage$pandac$Position $tmp548;
    panda$core$Bit $tmp549;
    org$pandalanguage$pandac$Type* $tmp544 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp547, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp546, $tmp547);
    org$pandalanguage$pandac$Position$init(&$tmp548);
    panda$core$Bit$init$builtin_bit(&$tmp549, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp544, &$s545, $tmp546, $tmp548, $tmp549);
    $tmp543 = $tmp544;
    $tmp542 = $tmp543;
    $returnValue541 = $tmp542;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp542));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
    return $returnValue541;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue551;
    org$pandalanguage$pandac$Type* $tmp552;
    org$pandalanguage$pandac$Type* $tmp553;
    org$pandalanguage$pandac$Type$Kind $tmp556;
    panda$core$Int64 $tmp557;
    org$pandalanguage$pandac$Position $tmp558;
    panda$core$Bit $tmp559;
    org$pandalanguage$pandac$Type* $tmp554 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp557, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp556, $tmp557);
    org$pandalanguage$pandac$Position$init(&$tmp558);
    panda$core$Bit$init$builtin_bit(&$tmp559, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp554, &$s555, $tmp556, $tmp558, $tmp559);
    $tmp553 = $tmp554;
    $tmp552 = $tmp553;
    $returnValue551 = $tmp552;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp552));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp553));
    return $returnValue551;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue561;
    org$pandalanguage$pandac$Type* $tmp562;
    org$pandalanguage$pandac$Type* $tmp563;
    org$pandalanguage$pandac$Type$Kind $tmp566;
    panda$core$Int64 $tmp567;
    org$pandalanguage$pandac$Position $tmp568;
    panda$core$Bit $tmp569;
    org$pandalanguage$pandac$Type* $tmp564 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp567, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp566, $tmp567);
    org$pandalanguage$pandac$Position$init(&$tmp568);
    panda$core$Bit$init$builtin_bit(&$tmp569, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp564, &$s565, $tmp566, $tmp568, $tmp569);
    $tmp563 = $tmp564;
    $tmp562 = $tmp563;
    $returnValue561 = $tmp562;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp562));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp563));
    return $returnValue561;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue571;
    org$pandalanguage$pandac$Type* $tmp572;
    org$pandalanguage$pandac$Type* $tmp573;
    org$pandalanguage$pandac$Type$Kind $tmp576;
    panda$core$Int64 $tmp577;
    org$pandalanguage$pandac$Position $tmp578;
    panda$core$Bit $tmp579;
    org$pandalanguage$pandac$Type* $tmp574 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp577, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp576, $tmp577);
    org$pandalanguage$pandac$Position$init(&$tmp578);
    panda$core$Bit$init$builtin_bit(&$tmp579, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp574, &$s575, $tmp576, $tmp578, $tmp579);
    $tmp573 = $tmp574;
    $tmp572 = $tmp573;
    $returnValue571 = $tmp572;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp572));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
    return $returnValue571;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue581;
    org$pandalanguage$pandac$Type* $tmp582;
    org$pandalanguage$pandac$Type* $tmp583;
    org$pandalanguage$pandac$Type$Kind $tmp586;
    panda$core$Int64 $tmp587;
    org$pandalanguage$pandac$Position $tmp588;
    panda$core$Bit $tmp589;
    org$pandalanguage$pandac$Type* $tmp584 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp587, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp586, $tmp587);
    org$pandalanguage$pandac$Position$init(&$tmp588);
    panda$core$Bit$init$builtin_bit(&$tmp589, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp584, &$s585, $tmp586, $tmp588, $tmp589);
    $tmp583 = $tmp584;
    $tmp582 = $tmp583;
    $returnValue581 = $tmp582;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp582));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
    return $returnValue581;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue591;
    org$pandalanguage$pandac$Type* $tmp592;
    org$pandalanguage$pandac$Type* $tmp593;
    org$pandalanguage$pandac$Type$Kind $tmp596;
    panda$core$Int64 $tmp597;
    org$pandalanguage$pandac$Position $tmp598;
    panda$core$Bit $tmp599;
    org$pandalanguage$pandac$Type* $tmp594 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp597, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp596, $tmp597);
    org$pandalanguage$pandac$Position$init(&$tmp598);
    panda$core$Bit$init$builtin_bit(&$tmp599, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp594, &$s595, $tmp596, $tmp598, $tmp599);
    $tmp593 = $tmp594;
    $tmp592 = $tmp593;
    $returnValue591 = $tmp592;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp592));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
    return $returnValue591;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue601;
    org$pandalanguage$pandac$Type* $tmp602;
    org$pandalanguage$pandac$Type* $tmp603;
    org$pandalanguage$pandac$Type$Kind $tmp606;
    panda$core$Int64 $tmp607;
    org$pandalanguage$pandac$Position $tmp608;
    panda$core$Bit $tmp609;
    org$pandalanguage$pandac$Type* $tmp604 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp607, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp606, $tmp607);
    org$pandalanguage$pandac$Position$init(&$tmp608);
    panda$core$Bit$init$builtin_bit(&$tmp609, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp604, &$s605, $tmp606, $tmp608, $tmp609);
    $tmp603 = $tmp604;
    $tmp602 = $tmp603;
    $returnValue601 = $tmp602;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp602));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp603));
    return $returnValue601;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue611;
    org$pandalanguage$pandac$Type* $tmp612;
    org$pandalanguage$pandac$Type* $tmp613;
    org$pandalanguage$pandac$Type$Kind $tmp616;
    panda$core$Int64 $tmp617;
    org$pandalanguage$pandac$Position $tmp618;
    panda$core$Bit $tmp619;
    org$pandalanguage$pandac$Type* $tmp614 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp617, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp616, $tmp617);
    org$pandalanguage$pandac$Position$init(&$tmp618);
    panda$core$Bit$init$builtin_bit(&$tmp619, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp614, &$s615, $tmp616, $tmp618, $tmp619);
    $tmp613 = $tmp614;
    $tmp612 = $tmp613;
    $returnValue611 = $tmp612;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp612));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp613));
    return $returnValue611;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue621;
    org$pandalanguage$pandac$Type* $tmp622;
    org$pandalanguage$pandac$Type* $tmp623;
    org$pandalanguage$pandac$Type$Kind $tmp626;
    panda$core$Int64 $tmp627;
    org$pandalanguage$pandac$Position $tmp628;
    panda$core$Bit $tmp629;
    org$pandalanguage$pandac$Type* $tmp624 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp627, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp626, $tmp627);
    org$pandalanguage$pandac$Position$init(&$tmp628);
    panda$core$Bit$init$builtin_bit(&$tmp629, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp624, &$s625, $tmp626, $tmp628, $tmp629);
    $tmp623 = $tmp624;
    $tmp622 = $tmp623;
    $returnValue621 = $tmp622;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp622));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
    return $returnValue621;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue631;
    org$pandalanguage$pandac$Type* $tmp632;
    org$pandalanguage$pandac$Type* $tmp633;
    org$pandalanguage$pandac$Type$Kind $tmp636;
    panda$core$Int64 $tmp637;
    org$pandalanguage$pandac$Position $tmp638;
    panda$core$Bit $tmp639;
    org$pandalanguage$pandac$Type* $tmp634 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp637, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp636, $tmp637);
    org$pandalanguage$pandac$Position$init(&$tmp638);
    panda$core$Bit$init$builtin_bit(&$tmp639, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp634, &$s635, $tmp636, $tmp638, $tmp639);
    $tmp633 = $tmp634;
    $tmp632 = $tmp633;
    $returnValue631 = $tmp632;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp632));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp633));
    return $returnValue631;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue641;
    org$pandalanguage$pandac$Type* $tmp642;
    org$pandalanguage$pandac$Type* $tmp643;
    org$pandalanguage$pandac$Type$Kind $tmp646;
    panda$core$Int64 $tmp647;
    org$pandalanguage$pandac$Position $tmp648;
    panda$core$Bit $tmp649;
    org$pandalanguage$pandac$Type* $tmp644 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp647, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp646, $tmp647);
    org$pandalanguage$pandac$Position$init(&$tmp648);
    panda$core$Bit$init$builtin_bit(&$tmp649, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp644, &$s645, $tmp646, $tmp648, $tmp649);
    $tmp643 = $tmp644;
    $tmp642 = $tmp643;
    $returnValue641 = $tmp642;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp642));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp643));
    return $returnValue641;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue651;
    org$pandalanguage$pandac$Type* $tmp652;
    org$pandalanguage$pandac$Type* $tmp653;
    org$pandalanguage$pandac$Type$Kind $tmp656;
    panda$core$Int64 $tmp657;
    org$pandalanguage$pandac$Position $tmp658;
    panda$core$Bit $tmp659;
    org$pandalanguage$pandac$Type* $tmp654 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp657, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp656, $tmp657);
    org$pandalanguage$pandac$Position$init(&$tmp658);
    panda$core$Bit$init$builtin_bit(&$tmp659, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp654, &$s655, $tmp656, $tmp658, $tmp659);
    $tmp653 = $tmp654;
    $tmp652 = $tmp653;
    $returnValue651 = $tmp652;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp652));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp653));
    return $returnValue651;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue661;
    org$pandalanguage$pandac$Type* $tmp662;
    org$pandalanguage$pandac$Type* $tmp663;
    org$pandalanguage$pandac$Type$Kind $tmp666;
    panda$core$Int64 $tmp667;
    org$pandalanguage$pandac$Position $tmp668;
    panda$core$Bit $tmp669;
    org$pandalanguage$pandac$Type* $tmp664 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp667, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp666, $tmp667);
    org$pandalanguage$pandac$Position$init(&$tmp668);
    panda$core$Bit$init$builtin_bit(&$tmp669, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp664, &$s665, $tmp666, $tmp668, $tmp669);
    $tmp663 = $tmp664;
    $tmp662 = $tmp663;
    $returnValue661 = $tmp662;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp662));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp663));
    return $returnValue661;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue671;
    org$pandalanguage$pandac$Type* $tmp672;
    org$pandalanguage$pandac$Type* $tmp673;
    panda$core$String* $tmp675;
    panda$core$String* $tmp676;
    panda$core$Object* $tmp678;
    org$pandalanguage$pandac$Type$Kind $tmp683;
    panda$core$Int64 $tmp684;
    org$pandalanguage$pandac$Position $tmp685;
    panda$core$Bit $tmp686;
    org$pandalanguage$pandac$Type* $tmp674 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$UInt64$wrapper* $tmp679;
    $tmp679 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
    $tmp679->value = p_value;
    $tmp678 = ((panda$core$Object*) $tmp679);
    panda$core$String* $tmp680 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s677, $tmp678);
    $tmp676 = $tmp680;
    panda$core$String* $tmp682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp676, &$s681);
    $tmp675 = $tmp682;
    panda$core$Int64$init$builtin_int64(&$tmp684, 5);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp683, $tmp684);
    org$pandalanguage$pandac$Position$init(&$tmp685);
    panda$core$Bit$init$builtin_bit(&$tmp686, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp674, $tmp675, $tmp683, $tmp685, $tmp686);
    $tmp673 = $tmp674;
    $tmp672 = $tmp673;
    $returnValue671 = $tmp672;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp672));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp673));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp675));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp676));
    panda$core$Panda$unref$panda$core$Object($tmp678);
    return $returnValue671;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue688;
    org$pandalanguage$pandac$Type* $tmp689;
    org$pandalanguage$pandac$Type* $tmp690;
    panda$core$String* $tmp692;
    panda$core$String* $tmp693;
    panda$core$String* $tmp695;
    org$pandalanguage$pandac$Type$Kind $tmp700;
    panda$core$Int64 $tmp701;
    org$pandalanguage$pandac$Position $tmp702;
    panda$core$Bit $tmp703;
    org$pandalanguage$pandac$Type* $tmp691 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp696 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp695 = $tmp696;
    panda$core$String* $tmp697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s694, $tmp695);
    $tmp693 = $tmp697;
    panda$core$String* $tmp699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp693, &$s698);
    $tmp692 = $tmp699;
    panda$core$Int64$init$builtin_int64(&$tmp701, 5);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp700, $tmp701);
    org$pandalanguage$pandac$Position$init(&$tmp702);
    panda$core$Bit$init$builtin_bit(&$tmp703, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp691, $tmp692, $tmp700, $tmp702, $tmp703);
    $tmp690 = $tmp691;
    $tmp689 = $tmp690;
    $returnValue688 = $tmp689;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp689));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp692));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp695));
    return $returnValue688;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue705;
    org$pandalanguage$pandac$Type* $tmp706;
    org$pandalanguage$pandac$Type* $tmp707;
    panda$core$String* $tmp709;
    panda$core$String* $tmp710;
    panda$core$String* $tmp712;
    org$pandalanguage$pandac$Type$Kind $tmp717;
    panda$core$Int64 $tmp718;
    org$pandalanguage$pandac$Position $tmp719;
    panda$core$Bit $tmp720;
    org$pandalanguage$pandac$Type* $tmp708 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp713 = panda$core$Real64$convert$R$panda$core$String(p_value);
    $tmp712 = $tmp713;
    panda$core$String* $tmp714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s711, $tmp712);
    $tmp710 = $tmp714;
    panda$core$String* $tmp716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp710, &$s715);
    $tmp709 = $tmp716;
    panda$core$Int64$init$builtin_int64(&$tmp718, 18);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp717, $tmp718);
    org$pandalanguage$pandac$Position$init(&$tmp719);
    panda$core$Bit$init$builtin_bit(&$tmp720, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp708, $tmp709, $tmp717, $tmp719, $tmp720);
    $tmp707 = $tmp708;
    $tmp706 = $tmp707;
    $returnValue705 = $tmp706;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp706));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp707));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp709));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp710));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp712));
    return $returnValue705;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue722;
    org$pandalanguage$pandac$Type* $tmp723;
    org$pandalanguage$pandac$Type* $tmp724;
    org$pandalanguage$pandac$Type$Kind $tmp727;
    panda$core$Int64 $tmp728;
    org$pandalanguage$pandac$Position $tmp729;
    panda$core$Bit $tmp730;
    org$pandalanguage$pandac$Type* $tmp725 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp728, 8);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp727, $tmp728);
    org$pandalanguage$pandac$Position$init(&$tmp729);
    panda$core$Bit$init$builtin_bit(&$tmp730, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp725, &$s726, $tmp727, $tmp729, $tmp730);
    $tmp724 = $tmp725;
    $tmp723 = $tmp724;
    $returnValue722 = $tmp723;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp723));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
    return $returnValue722;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue732;
    org$pandalanguage$pandac$Type* $tmp733;
    org$pandalanguage$pandac$Type* $tmp734;
    org$pandalanguage$pandac$Type$Kind $tmp737;
    panda$core$Int64 $tmp738;
    org$pandalanguage$pandac$Position $tmp739;
    panda$core$Bit $tmp740;
    org$pandalanguage$pandac$Type* $tmp735 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp738, 9);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp737, $tmp738);
    org$pandalanguage$pandac$Position$init(&$tmp739);
    panda$core$Bit$init$builtin_bit(&$tmp740, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp735, &$s736, $tmp737, $tmp739, $tmp740);
    $tmp734 = $tmp735;
    $tmp733 = $tmp734;
    $returnValue732 = $tmp733;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp733));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp734));
    return $returnValue732;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue742;
    org$pandalanguage$pandac$Type* $tmp743;
    org$pandalanguage$pandac$Type* $tmp744;
    org$pandalanguage$pandac$Type$Kind $tmp747;
    panda$core$Int64 $tmp748;
    org$pandalanguage$pandac$Position $tmp749;
    panda$core$Bit $tmp750;
    org$pandalanguage$pandac$Type* $tmp745 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp748, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp747, $tmp748);
    org$pandalanguage$pandac$Position$init(&$tmp749);
    panda$core$Bit$init$builtin_bit(&$tmp750, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp745, &$s746, $tmp747, $tmp749, $tmp750);
    $tmp744 = $tmp745;
    $tmp743 = $tmp744;
    $returnValue742 = $tmp743;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp743));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp744));
    return $returnValue742;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue752;
    org$pandalanguage$pandac$Type* $tmp753;
    org$pandalanguage$pandac$Type* $tmp754;
    org$pandalanguage$pandac$Type$Kind $tmp757;
    panda$core$Int64 $tmp758;
    org$pandalanguage$pandac$Position $tmp759;
    panda$core$Bit $tmp760;
    org$pandalanguage$pandac$Type* $tmp755 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp758, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp757, $tmp758);
    org$pandalanguage$pandac$Position$init(&$tmp759);
    panda$core$Bit$init$builtin_bit(&$tmp760, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp755, &$s756, $tmp757, $tmp759, $tmp760);
    $tmp754 = $tmp755;
    $tmp753 = $tmp754;
    $returnValue752 = $tmp753;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp753));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp754));
    return $returnValue752;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue762;
    org$pandalanguage$pandac$Type* $tmp763;
    org$pandalanguage$pandac$Type* $tmp764;
    org$pandalanguage$pandac$Type$Kind $tmp767;
    panda$core$Int64 $tmp768;
    org$pandalanguage$pandac$Position $tmp769;
    panda$core$Bit $tmp770;
    org$pandalanguage$pandac$Type* $tmp765 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp768, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp767, $tmp768);
    org$pandalanguage$pandac$Position$init(&$tmp769);
    panda$core$Bit$init$builtin_bit(&$tmp770, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp765, &$s766, $tmp767, $tmp769, $tmp770);
    $tmp764 = $tmp765;
    $tmp763 = $tmp764;
    $returnValue762 = $tmp763;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp763));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp764));
    return $returnValue762;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue772;
    org$pandalanguage$pandac$Type* $tmp773;
    org$pandalanguage$pandac$Type* $tmp774;
    org$pandalanguage$pandac$Type$Kind $tmp777;
    panda$core$Int64 $tmp778;
    org$pandalanguage$pandac$Position $tmp779;
    panda$core$Bit $tmp780;
    org$pandalanguage$pandac$Type* $tmp775 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp778, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp777, $tmp778);
    org$pandalanguage$pandac$Position$init(&$tmp779);
    panda$core$Bit$init$builtin_bit(&$tmp780, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp775, &$s776, $tmp777, $tmp779, $tmp780);
    $tmp774 = $tmp775;
    $tmp773 = $tmp774;
    $returnValue772 = $tmp773;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp773));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp774));
    return $returnValue772;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue782;
    org$pandalanguage$pandac$Type* $tmp783;
    org$pandalanguage$pandac$Type* $tmp784;
    org$pandalanguage$pandac$Type$Kind $tmp787;
    panda$core$Int64 $tmp788;
    org$pandalanguage$pandac$Position $tmp789;
    panda$core$Bit $tmp790;
    org$pandalanguage$pandac$Type* $tmp785 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp788, 0);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp787, $tmp788);
    org$pandalanguage$pandac$Position$init(&$tmp789);
    panda$core$Bit$init$builtin_bit(&$tmp790, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp785, &$s786, $tmp787, $tmp789, $tmp790);
    $tmp784 = $tmp785;
    $tmp783 = $tmp784;
    $returnValue782 = $tmp783;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp783));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp784));
    return $returnValue782;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children795 = NULL;
    panda$collections$Array* $tmp796;
    panda$collections$Array* $tmp797;
    org$pandalanguage$pandac$Type* $tmp799;
    org$pandalanguage$pandac$Type$Kind $tmp802;
    panda$core$Int64 $tmp803;
    org$pandalanguage$pandac$Position $tmp804;
    panda$core$Bit $tmp805;
    org$pandalanguage$pandac$Type* $returnValue806;
    org$pandalanguage$pandac$Type* $tmp807;
    org$pandalanguage$pandac$Type* $tmp808;
    panda$core$String* $tmp810;
    panda$core$String* $tmp811;
    panda$core$String* $tmp812;
    panda$core$String* $tmp813;
    org$pandalanguage$pandac$Type$Kind $tmp821;
    panda$core$Int64 $tmp822;
    int $tmp794;
    {
        panda$collections$Array* $tmp798 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp798);
        $tmp797 = $tmp798;
        $tmp796 = $tmp797;
        children795 = $tmp796;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp796));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp797));
        org$pandalanguage$pandac$Type* $tmp800 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp803, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp802, $tmp803);
        org$pandalanguage$pandac$Position$init(&$tmp804);
        panda$core$Bit$init$builtin_bit(&$tmp805, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp800, &$s801, $tmp802, $tmp804, $tmp805);
        $tmp799 = $tmp800;
        panda$collections$Array$add$panda$collections$Array$T(children795, ((panda$core$Object*) $tmp799));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
        panda$collections$Array$add$panda$collections$Array$T(children795, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp809 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp815 = panda$core$String$convert$R$panda$core$String(&$s814);
        $tmp813 = $tmp815;
        panda$core$String* $tmp817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp813, &$s816);
        $tmp812 = $tmp817;
        panda$core$String* $tmp818 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp812, ((panda$core$Object*) p_t));
        $tmp811 = $tmp818;
        panda$core$String* $tmp820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp811, &$s819);
        $tmp810 = $tmp820;
        panda$core$Int64$init$builtin_int64(&$tmp822, 11);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp821, $tmp822);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp809, $tmp810, $tmp821, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children795), p_t->resolved);
        $tmp808 = $tmp809;
        $tmp807 = $tmp808;
        $returnValue806 = $tmp807;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp807));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp808));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp810));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp811));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp813));
        $tmp794 = 0;
        goto $l792;
        $l823:;
        return $returnValue806;
    }
    $l792:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children795));
    children795 = NULL;
    switch ($tmp794) {
        case 0: goto $l823;
    }
    $l825:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children829 = NULL;
    panda$collections$Array* $tmp830;
    panda$collections$Array* $tmp831;
    org$pandalanguage$pandac$Type* $returnValue833;
    org$pandalanguage$pandac$Type* $tmp834;
    org$pandalanguage$pandac$Type* $tmp835;
    org$pandalanguage$pandac$Type* $tmp836;
    org$pandalanguage$pandac$Type$Kind $tmp839;
    panda$core$Int64 $tmp840;
    org$pandalanguage$pandac$Position $tmp841;
    panda$core$Bit $tmp842;
    int $tmp828;
    {
        panda$collections$Array* $tmp832 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp832);
        $tmp831 = $tmp832;
        $tmp830 = $tmp831;
        children829 = $tmp830;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp830));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp831));
        panda$collections$Array$add$panda$collections$Array$T(children829, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp837 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp840, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp839, $tmp840);
        org$pandalanguage$pandac$Position$init(&$tmp841);
        panda$core$Bit$init$builtin_bit(&$tmp842, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp837, &$s838, $tmp839, $tmp841, $tmp842);
        $tmp836 = $tmp837;
        org$pandalanguage$pandac$Type* $tmp843 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp836, ((panda$collections$ListView*) children829));
        $tmp835 = $tmp843;
        $tmp834 = $tmp835;
        $returnValue833 = $tmp834;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp834));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp835));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp836));
        $tmp828 = 0;
        goto $l826;
        $l844:;
        return $returnValue833;
    }
    $l826:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children829));
    children829 = NULL;
    switch ($tmp828) {
        case 0: goto $l844;
    }
    $l846:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children850 = NULL;
    panda$collections$Array* $tmp851;
    panda$collections$Array* $tmp852;
    org$pandalanguage$pandac$Type* $returnValue854;
    org$pandalanguage$pandac$Type* $tmp855;
    org$pandalanguage$pandac$Type* $tmp856;
    org$pandalanguage$pandac$Type* $tmp857;
    org$pandalanguage$pandac$Type$Kind $tmp860;
    panda$core$Int64 $tmp861;
    org$pandalanguage$pandac$Position $tmp862;
    panda$core$Bit $tmp863;
    int $tmp849;
    {
        panda$collections$Array* $tmp853 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp853);
        $tmp852 = $tmp853;
        $tmp851 = $tmp852;
        children850 = $tmp851;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp851));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp852));
        panda$collections$Array$add$panda$collections$Array$T(children850, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp858 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp861, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp860, $tmp861);
        org$pandalanguage$pandac$Position$init(&$tmp862);
        panda$core$Bit$init$builtin_bit(&$tmp863, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp858, &$s859, $tmp860, $tmp862, $tmp863);
        $tmp857 = $tmp858;
        org$pandalanguage$pandac$Type* $tmp864 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp857, ((panda$collections$ListView*) children850));
        $tmp856 = $tmp864;
        $tmp855 = $tmp856;
        $returnValue854 = $tmp855;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp855));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp856));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp857));
        $tmp849 = 0;
        goto $l847;
        $l865:;
        return $returnValue854;
    }
    $l847:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children850));
    children850 = NULL;
    switch ($tmp849) {
        case 0: goto $l865;
    }
    $l867:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children871 = NULL;
    panda$collections$Array* $tmp872;
    panda$collections$Array* $tmp873;
    org$pandalanguage$pandac$Type* $tmp875;
    org$pandalanguage$pandac$Type* $tmp878;
    org$pandalanguage$pandac$Type* $tmp880;
    org$pandalanguage$pandac$Type* $tmp883;
    org$pandalanguage$pandac$Type* $tmp885;
    org$pandalanguage$pandac$Type* $tmp888;
    org$pandalanguage$pandac$Type* $tmp890;
    org$pandalanguage$pandac$Type* $returnValue892;
    org$pandalanguage$pandac$Type* $tmp893;
    org$pandalanguage$pandac$Type* $tmp894;
    org$pandalanguage$pandac$Type* $tmp895;
    org$pandalanguage$pandac$Type$Kind $tmp898;
    panda$core$Int64 $tmp899;
    org$pandalanguage$pandac$Position $tmp900;
    panda$core$Bit $tmp901;
    int $tmp870;
    {
        panda$collections$Array* $tmp874 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp874);
        $tmp873 = $tmp874;
        $tmp872 = $tmp873;
        children871 = $tmp872;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp872));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp873));
        panda$collections$Array$add$panda$collections$Array$T(children871, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp876 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp875 = $tmp876;
        panda$core$Bit $tmp877 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp875);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp875));
        if ($tmp877.value) {
        {
            org$pandalanguage$pandac$Type* $tmp879 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp878 = $tmp879;
            panda$collections$Array$add$panda$collections$Array$T(children871, ((panda$core$Object*) $tmp878));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp878));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp881 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp880 = $tmp881;
        panda$core$Bit $tmp882 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp880);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp880));
        if ($tmp882.value) {
        {
            org$pandalanguage$pandac$Type* $tmp884 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp883 = $tmp884;
            panda$collections$Array$add$panda$collections$Array$T(children871, ((panda$core$Object*) $tmp883));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp883));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp886 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp885 = $tmp886;
        panda$core$Bit $tmp887 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp885);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp885));
        if ($tmp887.value) {
        {
            org$pandalanguage$pandac$Type* $tmp889 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp888 = $tmp889;
            panda$collections$Array$add$panda$collections$Array$T(children871, ((panda$core$Object*) $tmp888));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp891 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp890 = $tmp891;
            panda$collections$Array$add$panda$collections$Array$T(children871, ((panda$core$Object*) $tmp890));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp890));
        }
        }
        }
        }
        org$pandalanguage$pandac$Type* $tmp896 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$Int64$init$builtin_int64(&$tmp899, 0);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp898, $tmp899);
        org$pandalanguage$pandac$Position$init(&$tmp900);
        panda$core$Bit$init$builtin_bit(&$tmp901, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp896, &$s897, $tmp898, $tmp900, $tmp901);
        $tmp895 = $tmp896;
        org$pandalanguage$pandac$Type* $tmp902 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp895, ((panda$collections$ListView*) children871));
        $tmp894 = $tmp902;
        $tmp893 = $tmp894;
        $returnValue892 = $tmp893;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp893));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp894));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp895));
        $tmp870 = 0;
        goto $l868;
        $l903:;
        return $returnValue892;
    }
    $l868:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children871));
    children871 = NULL;
    switch ($tmp870) {
        case 0: goto $l903;
    }
    $l905:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue906;
    org$pandalanguage$pandac$Type* $tmp907;
    org$pandalanguage$pandac$Type* $tmp908;
    org$pandalanguage$pandac$Type$Kind $tmp911;
    panda$core$Int64 $tmp912;
    org$pandalanguage$pandac$Position $tmp913;
    panda$core$Bit $tmp914;
    org$pandalanguage$pandac$Type* $tmp909 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp912, 6);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp911, $tmp912);
    org$pandalanguage$pandac$Position$init(&$tmp913);
    panda$core$Bit$init$builtin_bit(&$tmp914, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp909, &$s910, $tmp911, $tmp913, $tmp914);
    $tmp908 = $tmp909;
    $tmp907 = $tmp908;
    $returnValue906 = $tmp907;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp907));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp908));
    return $returnValue906;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue916;
    org$pandalanguage$pandac$Type* $tmp917;
    org$pandalanguage$pandac$Type* $tmp918;
    org$pandalanguage$pandac$Type$Kind $tmp921;
    panda$core$Int64 $tmp922;
    org$pandalanguage$pandac$Position $tmp923;
    panda$core$Bit $tmp924;
    org$pandalanguage$pandac$Type* $tmp919 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$Int64$init$builtin_int64(&$tmp922, 6);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp921, $tmp922);
    org$pandalanguage$pandac$Position$init(&$tmp923);
    panda$core$Bit$init$builtin_bit(&$tmp924, true);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp919, &$s920, $tmp921, $tmp923, $tmp924);
    $tmp918 = $tmp919;
    $tmp917 = $tmp918;
    $returnValue916 = $tmp917;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp917));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp918));
    return $returnValue916;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue926;
    panda$core$Int64 $tmp942;
    panda$core$Int64 $tmp946;
    panda$core$Bit $tmp932 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s931);
    bool $tmp930 = $tmp932.value;
    if ($tmp930) goto $l933;
    panda$core$Bit $tmp935 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s934);
    $tmp930 = $tmp935.value;
    $l933:;
    panda$core$Bit $tmp936 = { $tmp930 };
    bool $tmp929 = $tmp936.value;
    if ($tmp929) goto $l937;
    panda$core$Bit $tmp939 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s938);
    $tmp929 = $tmp939.value;
    $l937:;
    panda$core$Bit $tmp940 = { $tmp929 };
    bool $tmp928 = $tmp940.value;
    if ($tmp928) goto $l941;
    panda$core$Int64$init$builtin_int64(&$tmp942, 5);
    panda$core$Bit $tmp943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp942);
    $tmp928 = $tmp943.value;
    $l941:;
    panda$core$Bit $tmp944 = { $tmp928 };
    bool $tmp927 = $tmp944.value;
    if ($tmp927) goto $l945;
    panda$core$Int64$init$builtin_int64(&$tmp946, 18);
    panda$core$Bit $tmp947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp946);
    $tmp927 = $tmp947.value;
    $l945:;
    panda$core$Bit $tmp948 = { $tmp927 };
    $returnValue926 = $tmp948;
    return $returnValue926;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue950;
    panda$core$Int64 $tmp954;
    panda$core$Int64 $tmp957;
    panda$core$Int64 $tmp961;
    panda$core$Int64 $tmp965;
    panda$core$Int64$init$builtin_int64(&$tmp954, 2);
    panda$core$Bit $tmp955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp954);
    bool $tmp953 = $tmp955.value;
    if ($tmp953) goto $l956;
    panda$core$Int64$init$builtin_int64(&$tmp957, 3);
    panda$core$Bit $tmp958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp957);
    $tmp953 = $tmp958.value;
    $l956:;
    panda$core$Bit $tmp959 = { $tmp953 };
    bool $tmp952 = $tmp959.value;
    if ($tmp952) goto $l960;
    panda$core$Int64$init$builtin_int64(&$tmp961, 10);
    panda$core$Bit $tmp962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp961);
    $tmp952 = $tmp962.value;
    $l960:;
    panda$core$Bit $tmp963 = { $tmp952 };
    bool $tmp951 = $tmp963.value;
    if ($tmp951) goto $l964;
    panda$core$Int64$init$builtin_int64(&$tmp965, 5);
    panda$core$Bit $tmp966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp965);
    $tmp951 = $tmp966.value;
    $l964:;
    panda$core$Bit $tmp967 = { $tmp951 };
    $returnValue950 = $tmp967;
    return $returnValue950;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue969;
    panda$core$Int64 $tmp971;
    panda$core$Int64$init$builtin_int64(&$tmp971, 18);
    panda$core$Bit $tmp972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp971);
    bool $tmp970 = $tmp972.value;
    if ($tmp970) goto $l973;
    panda$core$Bit $tmp975 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s974);
    $tmp970 = $tmp975.value;
    $l973:;
    panda$core$Bit $tmp976 = { $tmp970 };
    $returnValue969 = $tmp976;
    return $returnValue969;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue978;
    panda$core$Bit $tmp980 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s979);
    $returnValue978 = $tmp980;
    return $returnValue978;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue982;
    panda$core$Bit $tmp984 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp983 = $tmp984.value;
    if ($tmp983) goto $l985;
    panda$core$Bit $tmp986 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp983 = $tmp986.value;
    $l985:;
    panda$core$Bit $tmp987 = { $tmp983 };
    $returnValue982 = $tmp987;
    return $returnValue982;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$456_9989;
    panda$core$Int64 $tmp997;
    panda$core$Int64 $tmp1000;
    panda$core$Int64 $tmp1004;
    panda$core$Int64 $tmp1008;
    panda$core$Int64 $tmp1012;
    panda$core$Int64 $tmp1016;
    panda$core$Int64 $tmp1020;
    panda$core$Int64 $tmp1024;
    panda$core$Bit $returnValue1027;
    panda$core$Bit $tmp1028;
    panda$core$Bit $tmp1030;
    {
        $match$456_9989 = self->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp997, 0);
        panda$core$Bit $tmp998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9989.$rawValue, $tmp997);
        bool $tmp996 = $tmp998.value;
        if ($tmp996) goto $l999;
        panda$core$Int64$init$builtin_int64(&$tmp1000, 1);
        panda$core$Bit $tmp1001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9989.$rawValue, $tmp1000);
        $tmp996 = $tmp1001.value;
        $l999:;
        panda$core$Bit $tmp1002 = { $tmp996 };
        bool $tmp995 = $tmp1002.value;
        if ($tmp995) goto $l1003;
        panda$core$Int64$init$builtin_int64(&$tmp1004, 11);
        panda$core$Bit $tmp1005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9989.$rawValue, $tmp1004);
        $tmp995 = $tmp1005.value;
        $l1003:;
        panda$core$Bit $tmp1006 = { $tmp995 };
        bool $tmp994 = $tmp1006.value;
        if ($tmp994) goto $l1007;
        panda$core$Int64$init$builtin_int64(&$tmp1008, 12);
        panda$core$Bit $tmp1009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9989.$rawValue, $tmp1008);
        $tmp994 = $tmp1009.value;
        $l1007:;
        panda$core$Bit $tmp1010 = { $tmp994 };
        bool $tmp993 = $tmp1010.value;
        if ($tmp993) goto $l1011;
        panda$core$Int64$init$builtin_int64(&$tmp1012, 15);
        panda$core$Bit $tmp1013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9989.$rawValue, $tmp1012);
        $tmp993 = $tmp1013.value;
        $l1011:;
        panda$core$Bit $tmp1014 = { $tmp993 };
        bool $tmp992 = $tmp1014.value;
        if ($tmp992) goto $l1015;
        panda$core$Int64$init$builtin_int64(&$tmp1016, 14);
        panda$core$Bit $tmp1017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9989.$rawValue, $tmp1016);
        $tmp992 = $tmp1017.value;
        $l1015:;
        panda$core$Bit $tmp1018 = { $tmp992 };
        bool $tmp991 = $tmp1018.value;
        if ($tmp991) goto $l1019;
        panda$core$Int64$init$builtin_int64(&$tmp1020, 17);
        panda$core$Bit $tmp1021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9989.$rawValue, $tmp1020);
        $tmp991 = $tmp1021.value;
        $l1019:;
        panda$core$Bit $tmp1022 = { $tmp991 };
        bool $tmp990 = $tmp1022.value;
        if ($tmp990) goto $l1023;
        panda$core$Int64$init$builtin_int64(&$tmp1024, 16);
        panda$core$Bit $tmp1025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9989.$rawValue, $tmp1024);
        $tmp990 = $tmp1025.value;
        $l1023:;
        panda$core$Bit $tmp1026 = { $tmp990 };
        if ($tmp1026.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1028, true);
            $returnValue1027 = $tmp1028;
            return $returnValue1027;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1030, false);
            $returnValue1027 = $tmp1030;
            return $returnValue1027;
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$466_91032;
    panda$core$Int64 $tmp1036;
    panda$core$Int64 $tmp1039;
    panda$core$Int64 $tmp1043;
    panda$core$Int64 $tmp1047;
    panda$core$Bit $returnValue1050;
    panda$core$Bit $tmp1051;
    panda$core$Bit $tmp1053;
    {
        $match$466_91032 = self->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp1036, 15);
        panda$core$Bit $tmp1037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91032.$rawValue, $tmp1036);
        bool $tmp1035 = $tmp1037.value;
        if ($tmp1035) goto $l1038;
        panda$core$Int64$init$builtin_int64(&$tmp1039, 14);
        panda$core$Bit $tmp1040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91032.$rawValue, $tmp1039);
        $tmp1035 = $tmp1040.value;
        $l1038:;
        panda$core$Bit $tmp1041 = { $tmp1035 };
        bool $tmp1034 = $tmp1041.value;
        if ($tmp1034) goto $l1042;
        panda$core$Int64$init$builtin_int64(&$tmp1043, 17);
        panda$core$Bit $tmp1044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91032.$rawValue, $tmp1043);
        $tmp1034 = $tmp1044.value;
        $l1042:;
        panda$core$Bit $tmp1045 = { $tmp1034 };
        bool $tmp1033 = $tmp1045.value;
        if ($tmp1033) goto $l1046;
        panda$core$Int64$init$builtin_int64(&$tmp1047, 16);
        panda$core$Bit $tmp1048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_91032.$rawValue, $tmp1047);
        $tmp1033 = $tmp1048.value;
        $l1046:;
        panda$core$Bit $tmp1049 = { $tmp1033 };
        if ($tmp1049.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1051, true);
            $returnValue1050 = $tmp1051;
            return $returnValue1050;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1053, false);
            $returnValue1050 = $tmp1053;
            return $returnValue1050;
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue1055;
    panda$core$Bit $tmp1057 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1056);
    $returnValue1055 = $tmp1057;
    return $returnValue1055;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1059;
    panda$core$Bit $returnValue1061;
    panda$core$Object* $tmp1062;
    panda$core$Int64 $tmp1063;
    panda$core$Int64 $tmp1068;
    panda$core$Object* $tmp1071;
    panda$core$Int64 $tmp1072;
    panda$core$Int64$init$builtin_int64(&$tmp1059, 1);
    panda$core$Bit $tmp1060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1059);
    if ($tmp1060.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1063, 0);
        panda$core$Object* $tmp1064 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1063);
        $tmp1062 = $tmp1064;
        panda$core$Bit $tmp1065 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1062));
        $returnValue1061 = $tmp1065;
        panda$core$Panda$unref$panda$core$Object($tmp1062);
        return $returnValue1061;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1068, 11);
    panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1068);
    bool $tmp1067 = $tmp1069.value;
    if (!$tmp1067) goto $l1070;
    panda$core$Int64$init$builtin_int64(&$tmp1072, 0);
    panda$core$Object* $tmp1073 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1072);
    $tmp1071 = $tmp1073;
    panda$core$Bit $tmp1075 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp1071))->name, &$s1074);
    $tmp1067 = $tmp1075.value;
    panda$core$Panda$unref$panda$core$Object($tmp1071);
    $l1070:;
    panda$core$Bit $tmp1076 = { $tmp1067 };
    $returnValue1061 = $tmp1076;
    return $returnValue1061;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
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
        panda$core$Bit $tmp1084 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1081));
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1100;
    org$pandalanguage$pandac$Type* $returnValue1102;
    org$pandalanguage$pandac$Type* $tmp1103;
    panda$collections$Array* subtypes1106 = NULL;
    panda$collections$Array* $tmp1107;
    panda$collections$Array* $tmp1108;
    org$pandalanguage$pandac$Type* $tmp1110;
    org$pandalanguage$pandac$Type* $tmp1111;
    panda$core$String* $tmp1113;
    panda$core$String* $tmp1114;
    org$pandalanguage$pandac$Type$Kind $tmp1118;
    panda$core$Int64 $tmp1119;
    org$pandalanguage$pandac$Position $tmp1120;
    panda$core$Bit $tmp1121;
    int $tmp1099;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1100, 1);
        panda$core$Bit $tmp1101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1100);
        if ($tmp1101.value) {
        {
            $tmp1103 = self;
            $returnValue1102 = $tmp1103;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1103));
            $tmp1099 = 0;
            goto $l1097;
            $l1104:;
            return $returnValue1102;
        }
        }
        panda$collections$Array* $tmp1109 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1109);
        $tmp1108 = $tmp1109;
        $tmp1107 = $tmp1108;
        subtypes1106 = $tmp1107;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1108));
        panda$collections$Array$add$panda$collections$Array$T(subtypes1106, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp1112 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp1115 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp1114 = $tmp1115;
        panda$core$String* $tmp1117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1114, &$s1116);
        $tmp1113 = $tmp1117;
        panda$core$Int64$init$builtin_int64(&$tmp1119, 1);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp1118, $tmp1119);
        org$pandalanguage$pandac$Position$init(&$tmp1120);
        panda$core$Bit$init$builtin_bit(&$tmp1121, true);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1112, $tmp1113, $tmp1118, $tmp1120, ((panda$collections$ListView*) subtypes1106), $tmp1121);
        $tmp1111 = $tmp1112;
        $tmp1110 = $tmp1111;
        $returnValue1102 = $tmp1110;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1110));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1114));
        $tmp1099 = 1;
        goto $l1097;
        $l1122:;
        return $returnValue1102;
    }
    $l1097:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1106));
    subtypes1106 = NULL;
    switch ($tmp1099) {
        case 1: goto $l1122;
        case 0: goto $l1104;
    }
    $l1124:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1125;
    org$pandalanguage$pandac$Type* $returnValue1127;
    org$pandalanguage$pandac$Type* $tmp1128;
    org$pandalanguage$pandac$Type* $tmp1130;
    panda$core$Object* $tmp1131;
    panda$core$Int64 $tmp1132;
    panda$core$Int64$init$builtin_int64(&$tmp1125, 1);
    panda$core$Bit $tmp1126 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1125);
    if ($tmp1126.value) {
    {
        $tmp1128 = self;
        $returnValue1127 = $tmp1128;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1128));
        return $returnValue1127;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp1132, 0);
    panda$core$Object* $tmp1133 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1132);
    $tmp1131 = $tmp1133;
    $tmp1130 = ((org$pandalanguage$pandac$Type*) $tmp1131);
    $returnValue1127 = $tmp1130;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1130));
    panda$core$Panda$unref$panda$core$Object($tmp1131);
    return $returnValue1127;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp1138;
    panda$core$Int64 $tmp1141;
    panda$core$Int64 $tmp1145;
    panda$core$Int64 $tmp1149;
    org$pandalanguage$pandac$Type* $returnValue1156;
    org$pandalanguage$pandac$Type* $tmp1157;
    panda$core$Object* $tmp1158;
    panda$core$Int64 $tmp1160;
    panda$core$Int64$init$builtin_int64(&$tmp1138, 14);
    panda$core$Bit $tmp1139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1138);
    bool $tmp1137 = $tmp1139.value;
    if ($tmp1137) goto $l1140;
    panda$core$Int64$init$builtin_int64(&$tmp1141, 15);
    panda$core$Bit $tmp1142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1141);
    $tmp1137 = $tmp1142.value;
    $l1140:;
    panda$core$Bit $tmp1143 = { $tmp1137 };
    bool $tmp1136 = $tmp1143.value;
    if ($tmp1136) goto $l1144;
    panda$core$Int64$init$builtin_int64(&$tmp1145, 16);
    panda$core$Bit $tmp1146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1145);
    $tmp1136 = $tmp1146.value;
    $l1144:;
    panda$core$Bit $tmp1147 = { $tmp1136 };
    bool $tmp1135 = $tmp1147.value;
    if ($tmp1135) goto $l1148;
    panda$core$Int64$init$builtin_int64(&$tmp1149, 17);
    panda$core$Bit $tmp1150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1149);
    $tmp1135 = $tmp1150.value;
    $l1148:;
    panda$core$Bit $tmp1151 = { $tmp1135 };
    if ($tmp1151.value) goto $l1152; else goto $l1153;
    $l1153:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1154, (panda$core$Int64) { 510 }, &$s1155);
    abort();
    $l1152:;
    panda$core$Int64 $tmp1159 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
    panda$core$Int64$init$builtin_int64(&$tmp1160, 1);
    panda$core$Int64 $tmp1161 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1159, $tmp1160);
    panda$core$Object* $tmp1162 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1161);
    $tmp1158 = $tmp1162;
    $tmp1157 = ((org$pandalanguage$pandac$Type*) $tmp1158);
    $returnValue1156 = $tmp1157;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1157));
    panda$core$Panda$unref$panda$core$Object($tmp1158);
    return $returnValue1156;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $returnValue1168;
    org$pandalanguage$pandac$Type* $tmp1169;
    org$pandalanguage$pandac$Type* $tmp1172;
    panda$core$Int64 $tmp1175;
    org$pandalanguage$pandac$Type* $tmp1177;
    org$pandalanguage$pandac$Type* $tmp1180;
    org$pandalanguage$pandac$Type* $tmp1181;
    org$pandalanguage$pandac$Type* $tmp1185;
    panda$core$Int64 $tmp1188;
    org$pandalanguage$pandac$Type* $tmp1190;
    org$pandalanguage$pandac$Type* $tmp1193;
    org$pandalanguage$pandac$Type* $tmp1194;
    panda$core$Int64 $tmp1199;
    org$pandalanguage$pandac$Type* $tmp1204;
    panda$core$Int64 $tmp1210;
    org$pandalanguage$pandac$Type* $tmp1213;
    panda$core$Int64 $tmp1218;
    panda$core$Int64 $tmp1221;
    org$pandalanguage$pandac$Type* $tmp1224;
    org$pandalanguage$pandac$Type* $tmp1230;
    org$pandalanguage$pandac$Type* $tmp1231;
    org$pandalanguage$pandac$Type* $tmp1235;
    org$pandalanguage$pandac$Type* $tmp1236;
    panda$core$Int64 $tmp1242;
    panda$core$Int64 $tmp1245;
    org$pandalanguage$pandac$Type* $tmp1248;
    org$pandalanguage$pandac$Type* $tmp1254;
    org$pandalanguage$pandac$Type* $tmp1255;
    org$pandalanguage$pandac$Type* $tmp1259;
    org$pandalanguage$pandac$Type* $tmp1260;
    panda$core$Int64 $tmp1264;
    org$pandalanguage$pandac$Type* $tmp1266;
    org$pandalanguage$pandac$Type* $tmp1267;
    org$pandalanguage$pandac$Type* $tmp1268;
    panda$core$Object* $tmp1269;
    panda$core$Int64 $tmp1270;
    panda$core$Int64 $tmp1276;
    org$pandalanguage$pandac$Type* $tmp1278;
    org$pandalanguage$pandac$Type* $tmp1279;
    org$pandalanguage$pandac$Type* $tmp1280;
    panda$core$Object* $tmp1281;
    panda$core$Int64 $tmp1282;
    org$pandalanguage$pandac$Type* t11288 = NULL;
    org$pandalanguage$pandac$Type* $tmp1289;
    org$pandalanguage$pandac$Type* $tmp1290;
    org$pandalanguage$pandac$Type* t21292 = NULL;
    org$pandalanguage$pandac$Type* $tmp1293;
    org$pandalanguage$pandac$Type* $tmp1294;
    panda$collections$HashSet* ancestors1304 = NULL;
    panda$collections$HashSet* $tmp1305;
    panda$collections$HashSet* $tmp1306;
    org$pandalanguage$pandac$Type* t1308 = NULL;
    org$pandalanguage$pandac$Type* $tmp1309;
    org$pandalanguage$pandac$ClassDecl* cl1310 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1311;
    org$pandalanguage$pandac$ClassDecl* $tmp1312;
    org$pandalanguage$pandac$Type* $tmp1317;
    org$pandalanguage$pandac$Type* $tmp1318;
    org$pandalanguage$pandac$Type* $tmp1319;
    org$pandalanguage$pandac$ClassDecl* $tmp1321;
    org$pandalanguage$pandac$ClassDecl* $tmp1322;
    org$pandalanguage$pandac$ClassDecl* $tmp1323;
    org$pandalanguage$pandac$ClassDecl* $tmp1325;
    org$pandalanguage$pandac$ClassDecl* $tmp1326;
    org$pandalanguage$pandac$Type* $tmp1327;
    org$pandalanguage$pandac$Type* $tmp1328;
    org$pandalanguage$pandac$ClassDecl* $tmp1329;
    org$pandalanguage$pandac$ClassDecl* $tmp1330;
    org$pandalanguage$pandac$ClassDecl* $tmp1331;
    org$pandalanguage$pandac$Type* $tmp1337;
    org$pandalanguage$pandac$Type* $tmp1341;
    org$pandalanguage$pandac$Type* $tmp1342;
    org$pandalanguage$pandac$Type* $tmp1343;
    org$pandalanguage$pandac$ClassDecl* $tmp1345;
    org$pandalanguage$pandac$ClassDecl* $tmp1346;
    org$pandalanguage$pandac$ClassDecl* $tmp1347;
    org$pandalanguage$pandac$ClassDecl* $tmp1349;
    org$pandalanguage$pandac$ClassDecl* $tmp1350;
    org$pandalanguage$pandac$Type* $tmp1352;
    org$pandalanguage$pandac$Type* $tmp1353;
    int $tmp1166;
    {
        panda$core$Bit $tmp1167 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp1167.value) {
        {
            $tmp1169 = self;
            $returnValue1168 = $tmp1169;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1169));
            $tmp1166 = 0;
            goto $l1164;
            $l1170:;
            return $returnValue1168;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1173 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp1172 = $tmp1173;
        panda$core$Bit $tmp1174 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp1172);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1172));
        if ($tmp1174.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1175, 1);
            panda$core$Bit $tmp1176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1175);
            if ($tmp1176.value) {
            {
                $tmp1177 = p_other;
                $returnValue1168 = $tmp1177;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1177));
                $tmp1166 = 1;
                goto $l1164;
                $l1178:;
                return $returnValue1168;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1182 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp1181 = $tmp1182;
            $tmp1180 = $tmp1181;
            $returnValue1168 = $tmp1180;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1180));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1181));
            $tmp1166 = 2;
            goto $l1164;
            $l1183:;
            return $returnValue1168;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1186 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp1185 = $tmp1186;
        panda$core$Bit $tmp1187 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp1185);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1185));
        if ($tmp1187.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1188, 1);
            panda$core$Bit $tmp1189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1188);
            if ($tmp1189.value) {
            {
                $tmp1190 = self;
                $returnValue1168 = $tmp1190;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1190));
                $tmp1166 = 3;
                goto $l1164;
                $l1191:;
                return $returnValue1168;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1195 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp1194 = $tmp1195;
            $tmp1193 = $tmp1194;
            $returnValue1168 = $tmp1193;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1193));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1194));
            $tmp1166 = 4;
            goto $l1164;
            $l1196:;
            return $returnValue1168;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1199, 5);
        panda$core$Bit $tmp1200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1199);
        bool $tmp1198 = $tmp1200.value;
        if (!$tmp1198) goto $l1201;
        panda$core$Bit $tmp1202 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp1198 = $tmp1202.value;
        $l1201:;
        panda$core$Bit $tmp1203 = { $tmp1198 };
        if ($tmp1203.value) {
        {
            $tmp1204 = p_other;
            $returnValue1168 = $tmp1204;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1204));
            $tmp1166 = 5;
            goto $l1164;
            $l1205:;
            return $returnValue1168;
        }
        }
        panda$core$Bit $tmp1208 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp1207 = $tmp1208.value;
        if (!$tmp1207) goto $l1209;
        panda$core$Int64$init$builtin_int64(&$tmp1210, 5);
        panda$core$Bit $tmp1211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1210);
        $tmp1207 = $tmp1211.value;
        $l1209:;
        panda$core$Bit $tmp1212 = { $tmp1207 };
        if ($tmp1212.value) {
        {
            $tmp1213 = self;
            $returnValue1168 = $tmp1213;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1213));
            $tmp1166 = 6;
            goto $l1164;
            $l1214:;
            return $returnValue1168;
        }
        }
        panda$core$Bit $tmp1216 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp1216.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1218, 5);
            panda$core$Bit $tmp1219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1218);
            bool $tmp1217 = $tmp1219.value;
            if ($tmp1217) goto $l1220;
            panda$core$Int64$init$builtin_int64(&$tmp1221, 18);
            panda$core$Bit $tmp1222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1221);
            $tmp1217 = $tmp1222.value;
            $l1220:;
            panda$core$Bit $tmp1223 = { $tmp1217 };
            if ($tmp1223.value) {
            {
                $tmp1224 = self;
                $returnValue1168 = $tmp1224;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1224));
                $tmp1166 = 7;
                goto $l1164;
                $l1225:;
                return $returnValue1168;
            }
            }
            panda$core$Bit $tmp1227 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp1227.value) {
            {
                panda$core$Bit $tmp1229 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s1228);
                if ($tmp1229.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1232 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp1231 = $tmp1232;
                    $tmp1230 = $tmp1231;
                    $returnValue1168 = $tmp1230;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1230));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1231));
                    $tmp1166 = 8;
                    goto $l1164;
                    $l1233:;
                    return $returnValue1168;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1237 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp1236 = $tmp1237;
                $tmp1235 = $tmp1236;
                $returnValue1168 = $tmp1235;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1235));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1236));
                $tmp1166 = 9;
                goto $l1164;
                $l1238:;
                return $returnValue1168;
            }
            }
        }
        }
        panda$core$Bit $tmp1240 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp1240.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1242, 5);
            panda$core$Bit $tmp1243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1242);
            bool $tmp1241 = $tmp1243.value;
            if ($tmp1241) goto $l1244;
            panda$core$Int64$init$builtin_int64(&$tmp1245, 18);
            panda$core$Bit $tmp1246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1245);
            $tmp1241 = $tmp1246.value;
            $l1244:;
            panda$core$Bit $tmp1247 = { $tmp1241 };
            if ($tmp1247.value) {
            {
                $tmp1248 = p_other;
                $returnValue1168 = $tmp1248;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1248));
                $tmp1166 = 10;
                goto $l1164;
                $l1249:;
                return $returnValue1168;
            }
            }
            panda$core$Bit $tmp1251 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp1251.value) {
            {
                panda$core$Bit $tmp1253 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1252);
                if ($tmp1253.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1256 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp1255 = $tmp1256;
                    $tmp1254 = $tmp1255;
                    $returnValue1168 = $tmp1254;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1254));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1255));
                    $tmp1166 = 11;
                    goto $l1164;
                    $l1257:;
                    return $returnValue1168;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1261 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp1260 = $tmp1261;
                $tmp1259 = $tmp1260;
                $returnValue1168 = $tmp1259;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1259));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1260));
                $tmp1166 = 12;
                goto $l1164;
                $l1262:;
                return $returnValue1168;
            }
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1264, 1);
        panda$core$Bit $tmp1265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, $tmp1264);
        if ($tmp1265.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1270, 0);
            panda$core$Object* $tmp1271 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1270);
            $tmp1269 = $tmp1271;
            org$pandalanguage$pandac$Type* $tmp1272 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1269), p_compiler, p_other);
            $tmp1268 = $tmp1272;
            org$pandalanguage$pandac$Type* $tmp1273 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1268);
            $tmp1267 = $tmp1273;
            $tmp1266 = $tmp1267;
            $returnValue1168 = $tmp1266;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1266));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1267));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1268));
            panda$core$Panda$unref$panda$core$Object($tmp1269);
            $tmp1166 = 13;
            goto $l1164;
            $l1274:;
            return $returnValue1168;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1276, 1);
        panda$core$Bit $tmp1277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, $tmp1276);
        if ($tmp1277.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1282, 0);
            panda$core$Object* $tmp1283 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, $tmp1282);
            $tmp1281 = $tmp1283;
            org$pandalanguage$pandac$Type* $tmp1284 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp1281));
            $tmp1280 = $tmp1284;
            org$pandalanguage$pandac$Type* $tmp1285 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1280);
            $tmp1279 = $tmp1285;
            $tmp1278 = $tmp1279;
            $returnValue1168 = $tmp1278;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1278));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1279));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1280));
            panda$core$Panda$unref$panda$core$Object($tmp1281);
            $tmp1166 = 14;
            goto $l1164;
            $l1286:;
            return $returnValue1168;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1291 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp1290 = $tmp1291;
        $tmp1289 = $tmp1290;
        t11288 = $tmp1289;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1289));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1290));
        org$pandalanguage$pandac$Type* $tmp1295 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp1294 = $tmp1295;
        $tmp1293 = $tmp1294;
        t21292 = $tmp1293;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1293));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1294));
        panda$core$Bit $tmp1297 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t11288);
        bool $tmp1296 = $tmp1297.value;
        if (!$tmp1296) goto $l1298;
        panda$core$Bit $tmp1299 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t21292);
        $tmp1296 = $tmp1299.value;
        $l1298:;
        panda$core$Bit $tmp1300 = { $tmp1296 };
        if ($tmp1300.value) {
        {
            int $tmp1303;
            {
                panda$collections$HashSet* $tmp1307 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
                panda$collections$HashSet$init($tmp1307);
                $tmp1306 = $tmp1307;
                $tmp1305 = $tmp1306;
                ancestors1304 = $tmp1305;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1305));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1306));
                $tmp1309 = self;
                t1308 = $tmp1309;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1309));
                org$pandalanguage$pandac$ClassDecl* $tmp1313 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t11288);
                $tmp1312 = $tmp1313;
                $tmp1311 = $tmp1312;
                cl1310 = $tmp1311;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1312));
                $l1314:;
                bool $tmp1316 = ((panda$core$Bit) { cl1310 != NULL }).value;
                if (!$tmp1316) goto $l1315;
                {
                    panda$collections$HashSet$add$panda$collections$HashSet$T(ancestors1304, ((panda$collections$Key*) t1308));
                    if (((panda$core$Bit) { cl1310->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1317 = t1308;
                            org$pandalanguage$pandac$Type* $tmp1320 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1308, cl1310->rawSuper);
                            $tmp1319 = $tmp1320;
                            $tmp1318 = $tmp1319;
                            t1308 = $tmp1318;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1318));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1317));
                        }
                        {
                            $tmp1321 = cl1310;
                            org$pandalanguage$pandac$ClassDecl* $tmp1324 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1308);
                            $tmp1323 = $tmp1324;
                            $tmp1322 = $tmp1323;
                            cl1310 = $tmp1322;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1322));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1323));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1321));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1325 = cl1310;
                            $tmp1326 = NULL;
                            cl1310 = $tmp1326;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1326));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1325));
                        }
                    }
                    }
                }
                goto $l1314;
                $l1315:;
                {
                    $tmp1327 = t1308;
                    $tmp1328 = p_other;
                    t1308 = $tmp1328;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1328));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1327));
                }
                {
                    $tmp1329 = cl1310;
                    org$pandalanguage$pandac$ClassDecl* $tmp1332 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t21292);
                    $tmp1331 = $tmp1332;
                    $tmp1330 = $tmp1331;
                    cl1310 = $tmp1330;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1330));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1331));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1329));
                }
                $l1333:;
                bool $tmp1335 = ((panda$core$Bit) { cl1310 != NULL }).value;
                if (!$tmp1335) goto $l1334;
                {
                    panda$core$Bit $tmp1336 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(ancestors1304, ((panda$collections$Key*) t1308));
                    if ($tmp1336.value) {
                    {
                        $tmp1337 = t1308;
                        $returnValue1168 = $tmp1337;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1337));
                        $tmp1303 = 0;
                        goto $l1301;
                        $l1338:;
                        $tmp1166 = 15;
                        goto $l1164;
                        $l1339:;
                        return $returnValue1168;
                    }
                    }
                    if (((panda$core$Bit) { cl1310->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1341 = t1308;
                            org$pandalanguage$pandac$Type* $tmp1344 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1308, cl1310->rawSuper);
                            $tmp1343 = $tmp1344;
                            $tmp1342 = $tmp1343;
                            t1308 = $tmp1342;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1342));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
                        }
                        {
                            $tmp1345 = cl1310;
                            org$pandalanguage$pandac$ClassDecl* $tmp1348 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1308);
                            $tmp1347 = $tmp1348;
                            $tmp1346 = $tmp1347;
                            cl1310 = $tmp1346;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1346));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1347));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1345));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1349 = cl1310;
                            $tmp1350 = NULL;
                            cl1310 = $tmp1350;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1350));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1349));
                        }
                    }
                    }
                }
                goto $l1333;
                $l1334:;
            }
            $tmp1303 = -1;
            goto $l1301;
            $l1301:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1310));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1308));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors1304));
            ancestors1304 = NULL;
            t1308 = NULL;
            cl1310 = NULL;
            switch ($tmp1303) {
                case 0: goto $l1338;
                case -1: goto $l1351;
            }
            $l1351:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1354 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp1353 = $tmp1354;
        $tmp1352 = $tmp1353;
        $returnValue1168 = $tmp1352;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1352));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
        $tmp1166 = 16;
        goto $l1164;
        $l1355:;
        return $returnValue1168;
    }
    $l1164:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t21292));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t11288));
    t11288 = NULL;
    t21292 = NULL;
    switch ($tmp1166) {
        case 7: goto $l1225;
        case 2: goto $l1183;
        case 8: goto $l1233;
        case 14: goto $l1286;
        case 9: goto $l1238;
        case 5: goto $l1205;
        case 1: goto $l1178;
        case 3: goto $l1191;
        case 16: goto $l1355;
        case 15: goto $l1339;
        case 4: goto $l1196;
        case 12: goto $l1262;
        case 10: goto $l1249;
        case 13: goto $l1274;
        case 6: goto $l1214;
        case 11: goto $l1257;
        case 0: goto $l1170;
    }
    $l1357:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    panda$core$Int64 $tmp1359;
    org$pandalanguage$pandac$Type* $returnValue1361;
    org$pandalanguage$pandac$Type* $tmp1362;
    org$pandalanguage$pandac$Type$Kind $match$603_91364;
    panda$core$Int64 $tmp1365;
    org$pandalanguage$pandac$Type* found1370 = NULL;
    org$pandalanguage$pandac$Type* $tmp1371;
    panda$core$Object* $tmp1372;
    org$pandalanguage$pandac$Type* $tmp1374;
    org$pandalanguage$pandac$Type* $tmp1377;
    panda$core$Int64 $tmp1381;
    org$pandalanguage$pandac$Type* base1386 = NULL;
    org$pandalanguage$pandac$Type* $tmp1387;
    org$pandalanguage$pandac$Type* $tmp1388;
    panda$core$Object* $tmp1389;
    panda$core$Int64 $tmp1390;
    panda$collections$Array* remappedArgs1393 = NULL;
    panda$collections$Array* $tmp1394;
    panda$collections$Array* $tmp1395;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1397;
    panda$core$Int64 $tmp1398;
    panda$core$Bit $tmp1400;
    org$pandalanguage$pandac$Type* $tmp1414;
    panda$core$Object* $tmp1415;
    org$pandalanguage$pandac$Type* $tmp1424;
    org$pandalanguage$pandac$Type* $tmp1425;
    panda$core$Int64 $tmp1430;
    org$pandalanguage$pandac$Type* $tmp1432;
    org$pandalanguage$pandac$Type* $tmp1433;
    org$pandalanguage$pandac$Type* $tmp1434;
    panda$core$Object* $tmp1435;
    panda$core$Int64 $tmp1436;
    panda$core$Int64 $tmp1444;
    panda$core$Int64 $tmp1447;
    panda$core$Int64 $tmp1451;
    panda$core$Int64 $tmp1455;
    panda$collections$Array* remapped1461 = NULL;
    panda$collections$Array* $tmp1462;
    panda$collections$Array* $tmp1463;
    panda$core$MutableString* name1465 = NULL;
    panda$core$MutableString* $tmp1466;
    panda$core$MutableString* $tmp1467;
    panda$core$String* separator1470 = NULL;
    panda$core$String* $tmp1471;
    panda$core$Int64 $tmp1474;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1479;
    panda$core$Int64 $tmp1480;
    panda$core$Int64 $tmp1482;
    panda$core$Bit $tmp1484;
    org$pandalanguage$pandac$Type* child1501 = NULL;
    org$pandalanguage$pandac$Type* $tmp1502;
    org$pandalanguage$pandac$Type* $tmp1503;
    panda$core$Object* $tmp1504;
    panda$core$String* $tmp1507;
    panda$core$String* $tmp1508;
    org$pandalanguage$pandac$Type$Kind $match$631_171517;
    panda$core$Int64 $tmp1518;
    panda$core$Int64 $tmp1521;
    panda$core$Int64 $tmp1524;
    panda$core$Int64 $tmp1527;
    panda$core$Object* $tmp1530;
    panda$core$Int64 $tmp1532;
    org$pandalanguage$pandac$Type* $tmp1535;
    org$pandalanguage$pandac$Type* child1541 = NULL;
    org$pandalanguage$pandac$Type* $tmp1542;
    org$pandalanguage$pandac$Type* $tmp1543;
    panda$core$Object* $tmp1544;
    panda$core$Int64 $tmp1546;
    org$pandalanguage$pandac$Type* $tmp1551;
    panda$core$Char8 $tmp1553;
    panda$core$UInt8 $tmp1554;
    org$pandalanguage$pandac$Type* $tmp1555;
    org$pandalanguage$pandac$Type* $tmp1556;
    panda$core$String* $tmp1558;
    org$pandalanguage$pandac$Type* $tmp1563;
    panda$core$Int64 $tmp1358 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Int64$init$builtin_int64(&$tmp1359, 0);
    panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1358, $tmp1359);
    if ($tmp1360.value) {
    {
        $tmp1362 = self;
        $returnValue1361 = $tmp1362;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1362));
        return $returnValue1361;
    }
    }
    {
        $match$603_91364 = self->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp1365, 12);
        panda$core$Bit $tmp1366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91364.$rawValue, $tmp1365);
        if ($tmp1366.value) {
        {
            int $tmp1369;
            {
                panda$core$Object* $tmp1373 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                $tmp1372 = $tmp1373;
                $tmp1371 = ((org$pandalanguage$pandac$Type*) $tmp1372);
                found1370 = $tmp1371;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1371));
                panda$core$Panda$unref$panda$core$Object($tmp1372);
                if (((panda$core$Bit) { found1370 != NULL }).value) {
                {
                    $tmp1374 = found1370;
                    $returnValue1361 = $tmp1374;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1374));
                    $tmp1369 = 0;
                    goto $l1367;
                    $l1375:;
                    return $returnValue1361;
                }
                }
                $tmp1377 = self;
                $returnValue1361 = $tmp1377;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1377));
                $tmp1369 = 1;
                goto $l1367;
                $l1378:;
                return $returnValue1361;
            }
            $l1367:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found1370));
            found1370 = NULL;
            switch ($tmp1369) {
                case 1: goto $l1378;
                case 0: goto $l1375;
            }
            $l1380:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1381, 11);
        panda$core$Bit $tmp1382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91364.$rawValue, $tmp1381);
        if ($tmp1382.value) {
        {
            int $tmp1385;
            {
                panda$core$Int64$init$builtin_int64(&$tmp1390, 0);
                panda$core$Object* $tmp1391 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1390);
                $tmp1389 = $tmp1391;
                org$pandalanguage$pandac$Type* $tmp1392 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1389), p_types);
                $tmp1388 = $tmp1392;
                $tmp1387 = $tmp1388;
                base1386 = $tmp1387;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1387));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1388));
                panda$core$Panda$unref$panda$core$Object($tmp1389);
                panda$collections$Array* $tmp1396 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1396);
                $tmp1395 = $tmp1396;
                $tmp1394 = $tmp1395;
                remappedArgs1393 = $tmp1394;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1394));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1395));
                panda$core$Int64$init$builtin_int64(&$tmp1398, 1);
                panda$core$Int64 $tmp1399 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Bit$init$builtin_bit(&$tmp1400, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1397, $tmp1398, $tmp1399, $tmp1400);
                int64_t $tmp1402 = $tmp1397.min.value;
                panda$core$Int64 i1401 = { $tmp1402 };
                int64_t $tmp1404 = $tmp1397.max.value;
                bool $tmp1405 = $tmp1397.inclusive.value;
                if ($tmp1405) goto $l1412; else goto $l1413;
                $l1412:;
                if ($tmp1402 <= $tmp1404) goto $l1406; else goto $l1408;
                $l1413:;
                if ($tmp1402 < $tmp1404) goto $l1406; else goto $l1408;
                $l1406:;
                {
                    panda$core$Object* $tmp1416 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1401);
                    $tmp1415 = $tmp1416;
                    org$pandalanguage$pandac$Type* $tmp1417 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1415), p_types);
                    $tmp1414 = $tmp1417;
                    panda$collections$Array$add$panda$collections$Array$T(remappedArgs1393, ((panda$core$Object*) $tmp1414));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1414));
                    panda$core$Panda$unref$panda$core$Object($tmp1415);
                }
                $l1409:;
                int64_t $tmp1419 = $tmp1404 - i1401.value;
                if ($tmp1405) goto $l1420; else goto $l1421;
                $l1420:;
                if ((uint64_t) $tmp1419 >= 1) goto $l1418; else goto $l1408;
                $l1421:;
                if ((uint64_t) $tmp1419 > 1) goto $l1418; else goto $l1408;
                $l1418:;
                i1401.value += 1;
                goto $l1406;
                $l1408:;
                org$pandalanguage$pandac$Type* $tmp1426 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base1386, ((panda$collections$ListView*) remappedArgs1393));
                $tmp1425 = $tmp1426;
                $tmp1424 = $tmp1425;
                $returnValue1361 = $tmp1424;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1424));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1425));
                $tmp1385 = 0;
                goto $l1383;
                $l1427:;
                return $returnValue1361;
            }
            $l1383:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remappedArgs1393));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1386));
            base1386 = NULL;
            remappedArgs1393 = NULL;
            switch ($tmp1385) {
                case 0: goto $l1427;
            }
            $l1429:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1430, 1);
        panda$core$Bit $tmp1431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91364.$rawValue, $tmp1430);
        if ($tmp1431.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1436, 0);
            panda$core$Object* $tmp1437 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1436);
            $tmp1435 = $tmp1437;
            org$pandalanguage$pandac$Type* $tmp1438 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1435), p_types);
            $tmp1434 = $tmp1438;
            org$pandalanguage$pandac$Type* $tmp1439 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1434);
            $tmp1433 = $tmp1439;
            $tmp1432 = $tmp1433;
            $returnValue1361 = $tmp1432;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1432));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1434));
            panda$core$Panda$unref$panda$core$Object($tmp1435);
            return $returnValue1361;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1444, 15);
        panda$core$Bit $tmp1445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91364.$rawValue, $tmp1444);
        bool $tmp1443 = $tmp1445.value;
        if ($tmp1443) goto $l1446;
        panda$core$Int64$init$builtin_int64(&$tmp1447, 14);
        panda$core$Bit $tmp1448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91364.$rawValue, $tmp1447);
        $tmp1443 = $tmp1448.value;
        $l1446:;
        panda$core$Bit $tmp1449 = { $tmp1443 };
        bool $tmp1442 = $tmp1449.value;
        if ($tmp1442) goto $l1450;
        panda$core$Int64$init$builtin_int64(&$tmp1451, 17);
        panda$core$Bit $tmp1452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91364.$rawValue, $tmp1451);
        $tmp1442 = $tmp1452.value;
        $l1450:;
        panda$core$Bit $tmp1453 = { $tmp1442 };
        bool $tmp1441 = $tmp1453.value;
        if ($tmp1441) goto $l1454;
        panda$core$Int64$init$builtin_int64(&$tmp1455, 16);
        panda$core$Bit $tmp1456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91364.$rawValue, $tmp1455);
        $tmp1441 = $tmp1456.value;
        $l1454:;
        panda$core$Bit $tmp1457 = { $tmp1441 };
        if ($tmp1457.value) {
        {
            int $tmp1460;
            {
                panda$collections$Array* $tmp1464 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1464);
                $tmp1463 = $tmp1464;
                $tmp1462 = $tmp1463;
                remapped1461 = $tmp1462;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1462));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1463));
                panda$core$MutableString* $tmp1468 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1468, &$s1469);
                $tmp1467 = $tmp1468;
                $tmp1466 = $tmp1467;
                name1465 = $tmp1466;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1466));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1467));
                $tmp1471 = &$s1472;
                separator1470 = $tmp1471;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1471));
                panda$core$Int64 $tmp1473 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64$init$builtin_int64(&$tmp1474, 1);
                panda$core$Bit $tmp1475 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1473, $tmp1474);
                if ($tmp1475.value) goto $l1476; else goto $l1477;
                $l1477:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1478, (panda$core$Int64) { 623 });
                abort();
                $l1476:;
                panda$core$Int64$init$builtin_int64(&$tmp1480, 0);
                panda$core$Int64 $tmp1481 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64$init$builtin_int64(&$tmp1482, 1);
                panda$core$Int64 $tmp1483 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1481, $tmp1482);
                panda$core$Bit$init$builtin_bit(&$tmp1484, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1479, $tmp1480, $tmp1483, $tmp1484);
                int64_t $tmp1486 = $tmp1479.min.value;
                panda$core$Int64 i1485 = { $tmp1486 };
                int64_t $tmp1488 = $tmp1479.max.value;
                bool $tmp1489 = $tmp1479.inclusive.value;
                if ($tmp1489) goto $l1496; else goto $l1497;
                $l1496:;
                if ($tmp1486 <= $tmp1488) goto $l1490; else goto $l1492;
                $l1497:;
                if ($tmp1486 < $tmp1488) goto $l1490; else goto $l1492;
                $l1490:;
                {
                    int $tmp1500;
                    {
                        panda$core$Object* $tmp1505 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1485);
                        $tmp1504 = $tmp1505;
                        org$pandalanguage$pandac$Type* $tmp1506 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1504), p_types);
                        $tmp1503 = $tmp1506;
                        $tmp1502 = $tmp1503;
                        child1501 = $tmp1502;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1502));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1503));
                        panda$core$Panda$unref$panda$core$Object($tmp1504);
                        panda$core$MutableString$append$panda$core$String(name1465, separator1470);
                        panda$core$MutableString$append$panda$core$String(name1465, ((org$pandalanguage$pandac$Symbol*) child1501)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1461, ((panda$core$Object*) child1501));
                        {
                            $tmp1507 = separator1470;
                            $tmp1508 = &$s1509;
                            separator1470 = $tmp1508;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1508));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1507));
                        }
                    }
                    $tmp1500 = -1;
                    goto $l1498;
                    $l1498:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1501));
                    child1501 = NULL;
                    switch ($tmp1500) {
                        case -1: goto $l1510;
                    }
                    $l1510:;
                }
                $l1493:;
                int64_t $tmp1512 = $tmp1488 - i1485.value;
                if ($tmp1489) goto $l1513; else goto $l1514;
                $l1513:;
                if ((uint64_t) $tmp1512 >= 1) goto $l1511; else goto $l1492;
                $l1514:;
                if ((uint64_t) $tmp1512 > 1) goto $l1511; else goto $l1492;
                $l1511:;
                i1485.value += 1;
                goto $l1490;
                $l1492:;
                {
                    $match$631_171517 = self->typeKind;
                    panda$core$Int64$init$builtin_int64(&$tmp1518, 14);
                    panda$core$Bit $tmp1519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$631_171517.$rawValue, $tmp1518);
                    if ($tmp1519.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1465, &$s1520);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1521, 15);
                    panda$core$Bit $tmp1522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$631_171517.$rawValue, $tmp1521);
                    if ($tmp1522.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1465, &$s1523);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1524, 16);
                    panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$631_171517.$rawValue, $tmp1524);
                    if ($tmp1525.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1465, &$s1526);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1527, 17);
                    panda$core$Bit $tmp1528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$631_171517.$rawValue, $tmp1527);
                    if ($tmp1528.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1465, &$s1529);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$Int64 $tmp1531 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64$init$builtin_int64(&$tmp1532, 1);
                panda$core$Int64 $tmp1533 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1531, $tmp1532);
                panda$core$Object* $tmp1534 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1533);
                $tmp1530 = $tmp1534;
                org$pandalanguage$pandac$Type* $tmp1536 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1535 = $tmp1536;
                panda$core$Bit $tmp1537 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1530), $tmp1535);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
                panda$core$Panda$unref$panda$core$Object($tmp1530);
                if ($tmp1537.value) {
                {
                    int $tmp1540;
                    {
                        panda$core$Int64 $tmp1545 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                        panda$core$Int64$init$builtin_int64(&$tmp1546, 1);
                        panda$core$Int64 $tmp1547 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1545, $tmp1546);
                        panda$core$Object* $tmp1548 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1547);
                        $tmp1544 = $tmp1548;
                        org$pandalanguage$pandac$Type* $tmp1549 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1544), p_types);
                        $tmp1543 = $tmp1549;
                        $tmp1542 = $tmp1543;
                        child1541 = $tmp1542;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1542));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1543));
                        panda$core$Panda$unref$panda$core$Object($tmp1544);
                        panda$core$MutableString$append$panda$core$String(name1465, ((org$pandalanguage$pandac$Symbol*) child1541)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1461, ((panda$core$Object*) child1541));
                    }
                    $tmp1540 = -1;
                    goto $l1538;
                    $l1538:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1541));
                    child1541 = NULL;
                    switch ($tmp1540) {
                        case -1: goto $l1550;
                    }
                    $l1550:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1552 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                    $tmp1551 = $tmp1552;
                    panda$collections$Array$add$panda$collections$Array$T(remapped1461, ((panda$core$Object*) $tmp1551));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
                }
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1554, 41);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1553, $tmp1554);
                panda$core$MutableString$append$panda$core$Char8(name1465, $tmp1553);
                org$pandalanguage$pandac$Type* $tmp1557 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp1559 = panda$core$MutableString$finish$R$panda$core$String(name1465);
                $tmp1558 = $tmp1559;
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1557, $tmp1558, self->typeKind, self->position, ((panda$collections$ListView*) remapped1461), self->resolved);
                $tmp1556 = $tmp1557;
                $tmp1555 = $tmp1556;
                $returnValue1361 = $tmp1555;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1555));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1556));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1558));
                $tmp1460 = 0;
                goto $l1458;
                $l1560:;
                return $returnValue1361;
            }
            $l1458:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1470));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1465));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped1461));
            remapped1461 = NULL;
            name1465 = NULL;
            separator1470 = NULL;
            switch ($tmp1460) {
                case 0: goto $l1560;
            }
            $l1562:;
        }
        }
        else {
        {
            $tmp1563 = self;
            $returnValue1361 = $tmp1563;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1563));
            return $returnValue1361;
        }
        }
        }
        }
        }
    }
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue1565;
    panda$core$Int64 $tmp1566 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $returnValue1565 = $tmp1566;
    return $returnValue1565;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $returnValue1568;
    panda$core$String* $tmp1569;
    $tmp1569 = self->name;
    $returnValue1568 = $tmp1569;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1569));
    return $returnValue1568;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1573;
    {
    }
    $tmp1573 = -1;
    goto $l1571;
    $l1571:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1573) {
        case -1: goto $l1574;
    }
    $l1574:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

