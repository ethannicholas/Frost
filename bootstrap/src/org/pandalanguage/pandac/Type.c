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
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* self, panda$core$Equatable* p0) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Type*) p0));
    return result;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* self, panda$core$Equatable* p0) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Type*) p0));
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Type$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Type$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$collections$Key, { org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim} };

static panda$core$String $s1;
org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, org$pandalanguage$pandac$Type$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit, org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit, org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit, org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn50)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn57)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn68)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn122)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn129)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn140)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn191)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn198)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn209)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 29, -3248623696866231612, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s1167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };

void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position) {
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit(self, p_name, p_typeKind, p_position, ((panda$core$Bit) { false }));
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_resolved) {
    panda$collections$Array* $tmp2;
    panda$collections$Array* $tmp3;
    org$pandalanguage$pandac$Symbol$Kind $tmp4;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        $tmp2 = self->subtypes;
        $tmp3 = NULL;
        self->subtypes = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp4, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp4, p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, panda$core$Int64 p_size) {
    org$pandalanguage$pandac$Position $tmp8;
    panda$collections$Array* $tmp9;
    panda$collections$Array* $tmp10;
    org$pandalanguage$pandac$Symbol$Kind $tmp11;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Bit $tmp6 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s5);
    panda$core$Bit $tmp7 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6);
    PANDA_ASSERT($tmp7.value);
    self->typeKind = p_typeKind;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp8, p_size, p_size);
    ((org$pandalanguage$pandac$Symbol*) self)->position = $tmp8;
    self->resolved = ((panda$core$Bit) { true });
    {
        $tmp9 = self->subtypes;
        $tmp10 = NULL;
        self->subtypes = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    }
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp11, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp11, self->position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_subtypes, panda$core$Bit p_resolved) {
    panda$collections$Array* $tmp21;
    panda$collections$Array* $tmp22;
    panda$collections$Array* $tmp23;
    org$pandalanguage$pandac$Symbol$Kind $tmp25;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp14 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s13);
    panda$core$Bit $tmp15 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp12, $tmp14);
    PANDA_ASSERT($tmp15.value);
    panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    panda$core$Bit $tmp18 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s17);
    panda$core$Bit $tmp19 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp16, $tmp18);
    PANDA_ASSERT($tmp19.value);
    panda$core$Bit $tmp20 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, ((panda$core$Int64) { 12 }));
    PANDA_ASSERT($tmp20.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        $tmp21 = self->subtypes;
        panda$collections$Array* $tmp24 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp24, p_subtypes);
        $tmp23 = $tmp24;
        $tmp22 = $tmp23;
        self->subtypes = $tmp22;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    }
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp25, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp25, p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    org$pandalanguage$pandac$Type$Kind $tmp29;
    panda$collections$Array* $tmp30;
    panda$collections$Array* $tmp31;
    panda$collections$Array* $tmp32;
    panda$core$MutableString* name34 = NULL;
    panda$core$MutableString* $tmp35;
    panda$core$MutableString* $tmp36;
    panda$core$String* separator39 = NULL;
    panda$core$String* $tmp40;
    panda$collections$Iterator* Iter$74$945 = NULL;
    panda$collections$Iterator* $tmp46;
    panda$collections$Iterator* $tmp47;
    org$pandalanguage$pandac$Type* t63 = NULL;
    org$pandalanguage$pandac$Type* $tmp64;
    panda$core$Object* $tmp65;
    panda$core$String* $tmp70;
    panda$core$String* $tmp71;
    panda$core$Char8 $tmp78;
    org$pandalanguage$pandac$Symbol$Kind $tmp79;
    panda$core$String* $tmp80;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    int $tmp28;
    {
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp29, ((panda$core$Int64) { 7 }));
        self->typeKind = $tmp29;
        {
            $tmp30 = self->subtypes;
            panda$collections$Array* $tmp33 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp33, p_subtypes);
            $tmp32 = $tmp33;
            $tmp31 = $tmp32;
            self->subtypes = $tmp31;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp31));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
        }
        panda$core$MutableString* $tmp37 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp37, &$s38);
        $tmp36 = $tmp37;
        $tmp35 = $tmp36;
        name34 = $tmp35;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
        $tmp40 = &$s41;
        separator39 = $tmp40;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
        self->resolved = ((panda$core$Bit) { true });
        {
            int $tmp44;
            {
                ITable* $tmp48 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
                while ($tmp48->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp48 = $tmp48->next;
                }
                $fn50 $tmp49 = $tmp48->methods[0];
                panda$collections$Iterator* $tmp51 = $tmp49(((panda$collections$Iterable*) p_subtypes));
                $tmp47 = $tmp51;
                $tmp46 = $tmp47;
                Iter$74$945 = $tmp46;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp46));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
                $l52:;
                ITable* $tmp55 = Iter$74$945->$class->itable;
                while ($tmp55->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp55 = $tmp55->next;
                }
                $fn57 $tmp56 = $tmp55->methods[0];
                panda$core$Bit $tmp58 = $tmp56(Iter$74$945);
                panda$core$Bit $tmp59 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp58);
                bool $tmp54 = $tmp59.value;
                if (!$tmp54) goto $l53;
                {
                    int $tmp62;
                    {
                        ITable* $tmp66 = Iter$74$945->$class->itable;
                        while ($tmp66->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp66 = $tmp66->next;
                        }
                        $fn68 $tmp67 = $tmp66->methods[1];
                        panda$core$Object* $tmp69 = $tmp67(Iter$74$945);
                        $tmp65 = $tmp69;
                        $tmp64 = ((org$pandalanguage$pandac$Type*) $tmp65);
                        t63 = $tmp64;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
                        panda$core$Panda$unref$panda$core$Object($tmp65);
                        panda$core$MutableString$append$panda$core$String(name34, separator39);
                        panda$core$MutableString$append$panda$core$Object(name34, ((panda$core$Object*) t63));
                        {
                            $tmp70 = separator39;
                            $tmp71 = &$s72;
                            separator39 = $tmp71;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
                        }
                        bool $tmp73 = self->resolved.value;
                        if (!$tmp73) goto $l74;
                        $tmp73 = t63->resolved.value;
                        $l74:;
                        panda$core$Bit $tmp75 = { $tmp73 };
                        self->resolved = $tmp75;
                    }
                    $tmp62 = -1;
                    goto $l60;
                    $l60:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t63));
                    t63 = NULL;
                    switch ($tmp62) {
                        case -1: goto $l76;
                    }
                    $l76:;
                }
                goto $l52;
                $l53:;
            }
            $tmp44 = -1;
            goto $l42;
            $l42:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$74$945));
            Iter$74$945 = NULL;
            switch ($tmp44) {
                case -1: goto $l77;
            }
            $l77:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp78, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name34, $tmp78);
        org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp79, ((panda$core$Int64) { 6 }));
        panda$core$String* $tmp81 = panda$core$MutableString$finish$R$panda$core$String(name34);
        $tmp80 = $tmp81;
        org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp79, self->position, $tmp80);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
    }
    $tmp28 = -1;
    goto $l26;
    $l26:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name34));
    name34 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator39));
    separator39 = NULL;
    switch ($tmp28) {
        case -1: goto $l82;
    }
    $l82:;
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    panda$core$String* $tmp83;
    panda$core$String* $tmp84;
    panda$core$String* $tmp85;
    panda$core$String* $tmp86;
    panda$core$String* $tmp87;
    panda$core$String* $tmp88;
    org$pandalanguage$pandac$Type$Kind $tmp95;
    panda$core$Weak* $tmp96;
    panda$core$Weak* $tmp97;
    panda$core$Weak* $tmp98;
    panda$collections$Array* $tmp100;
    panda$collections$Array* $tmp101;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    {
        $tmp83 = ((org$pandalanguage$pandac$Symbol*) self)->name;
        panda$core$String* $tmp89 = panda$core$String$convert$R$panda$core$String(p_param->owner);
        $tmp88 = $tmp89;
        panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp88, &$s90);
        $tmp87 = $tmp91;
        panda$core$String* $tmp92 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp87, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
        $tmp86 = $tmp92;
        panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp86, &$s93);
        $tmp85 = $tmp94;
        $tmp84 = $tmp85;
        ((org$pandalanguage$pandac$Symbol*) self)->name = $tmp84;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
    }
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp95, ((panda$core$Int64) { 12 }));
    self->typeKind = $tmp95;
    {
        $tmp96 = self->parameter;
        panda$core$Weak* $tmp99 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp99, ((panda$core$Object*) p_param));
        $tmp98 = $tmp99;
        $tmp97 = $tmp98;
        self->parameter = $tmp97;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
    }
    self->resolved = ((panda$core$Bit) { true });
    {
        $tmp100 = self->subtypes;
        $tmp101 = NULL;
        self->subtypes = $tmp101;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp101));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_base, panda$collections$ListView* p_arguments) {
    panda$core$Bit resolved105;
    panda$core$MutableString* name106 = NULL;
    panda$core$MutableString* $tmp107;
    panda$core$MutableString* $tmp108;
    panda$core$Char8 $tmp110;
    panda$core$String* separator111 = NULL;
    panda$core$String* $tmp112;
    panda$collections$Iterator* Iter$99$9117 = NULL;
    panda$collections$Iterator* $tmp118;
    panda$collections$Iterator* $tmp119;
    org$pandalanguage$pandac$Type* a135 = NULL;
    org$pandalanguage$pandac$Type* $tmp136;
    panda$core$Object* $tmp137;
    panda$core$String* $tmp145;
    panda$core$String* $tmp146;
    panda$core$Char8 $tmp150;
    panda$collections$Array* subtypes151 = NULL;
    panda$collections$Array* $tmp152;
    panda$collections$Array* $tmp153;
    org$pandalanguage$pandac$Type* $returnValue155;
    org$pandalanguage$pandac$Type* $tmp156;
    org$pandalanguage$pandac$Type* $tmp157;
    panda$core$String* $tmp159;
    org$pandalanguage$pandac$Type$Kind $tmp161;
    panda$collections$ImmutableArray* $tmp162;
    int $tmp104;
    {
        resolved105 = p_base->resolved;
        panda$core$MutableString* $tmp109 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp109);
        $tmp108 = $tmp109;
        $tmp107 = $tmp108;
        name106 = $tmp107;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
        panda$core$MutableString$append$panda$core$String(name106, ((org$pandalanguage$pandac$Symbol*) p_base)->name);
        panda$core$Char8$init$panda$core$UInt8(&$tmp110, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name106, $tmp110);
        $tmp112 = &$s113;
        separator111 = $tmp112;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
        {
            int $tmp116;
            {
                ITable* $tmp120 = ((panda$collections$Iterable*) p_arguments)->$class->itable;
                while ($tmp120->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp120 = $tmp120->next;
                }
                $fn122 $tmp121 = $tmp120->methods[0];
                panda$collections$Iterator* $tmp123 = $tmp121(((panda$collections$Iterable*) p_arguments));
                $tmp119 = $tmp123;
                $tmp118 = $tmp119;
                Iter$99$9117 = $tmp118;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
                $l124:;
                ITable* $tmp127 = Iter$99$9117->$class->itable;
                while ($tmp127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp127 = $tmp127->next;
                }
                $fn129 $tmp128 = $tmp127->methods[0];
                panda$core$Bit $tmp130 = $tmp128(Iter$99$9117);
                panda$core$Bit $tmp131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp130);
                bool $tmp126 = $tmp131.value;
                if (!$tmp126) goto $l125;
                {
                    int $tmp134;
                    {
                        ITable* $tmp138 = Iter$99$9117->$class->itable;
                        while ($tmp138->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp138 = $tmp138->next;
                        }
                        $fn140 $tmp139 = $tmp138->methods[1];
                        panda$core$Object* $tmp141 = $tmp139(Iter$99$9117);
                        $tmp137 = $tmp141;
                        $tmp136 = ((org$pandalanguage$pandac$Type*) $tmp137);
                        a135 = $tmp136;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
                        panda$core$Panda$unref$panda$core$Object($tmp137);
                        bool $tmp142 = resolved105.value;
                        if (!$tmp142) goto $l143;
                        $tmp142 = a135->resolved.value;
                        $l143:;
                        panda$core$Bit $tmp144 = { $tmp142 };
                        resolved105 = $tmp144;
                        panda$core$MutableString$append$panda$core$String(name106, separator111);
                        panda$core$MutableString$append$panda$core$String(name106, ((org$pandalanguage$pandac$Symbol*) a135)->name);
                        {
                            $tmp145 = separator111;
                            $tmp146 = &$s147;
                            separator111 = $tmp146;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
                        }
                    }
                    $tmp134 = -1;
                    goto $l132;
                    $l132:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a135));
                    a135 = NULL;
                    switch ($tmp134) {
                        case -1: goto $l148;
                    }
                    $l148:;
                }
                goto $l124;
                $l125:;
            }
            $tmp116 = -1;
            goto $l114;
            $l114:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$99$9117));
            Iter$99$9117 = NULL;
            switch ($tmp116) {
                case -1: goto $l149;
            }
            $l149:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp150, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name106, $tmp150);
        panda$collections$Array* $tmp154 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp154);
        $tmp153 = $tmp154;
        $tmp152 = $tmp153;
        subtypes151 = $tmp152;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
        panda$collections$Array$add$panda$collections$Array$T(subtypes151, ((panda$core$Object*) p_base));
        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(subtypes151, ((panda$collections$CollectionView*) p_arguments));
        org$pandalanguage$pandac$Type* $tmp158 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp160 = panda$core$MutableString$finish$R$panda$core$String(name106);
        $tmp159 = $tmp160;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp161, ((panda$core$Int64) { 11 }));
        panda$collections$ImmutableArray* $tmp163 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes151);
        $tmp162 = $tmp163;
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp158, $tmp159, $tmp161, ((org$pandalanguage$pandac$Symbol*) p_base)->position, ((panda$collections$ListView*) $tmp162), resolved105);
        $tmp157 = $tmp158;
        $tmp156 = $tmp157;
        $returnValue155 = $tmp156;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp159));
        $tmp104 = 0;
        goto $l102;
        $l164:;
        return $returnValue155;
    }
    $l102:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name106));
    name106 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator111));
    separator111 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes151));
    subtypes151 = NULL;
    switch ($tmp104) {
        case 0: goto $l164;
    }
    $l166:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type$Kind p_kind, panda$collections$ListView* p_parameterTypes, org$pandalanguage$pandac$Type* p_returnType) {
    panda$core$Bit resolved170;
    panda$core$MutableString* name171 = NULL;
    panda$core$MutableString* $tmp172;
    panda$core$MutableString* $tmp173;
    panda$collections$Array* subtypes176 = NULL;
    panda$collections$Array* $tmp177;
    panda$collections$Array* $tmp178;
    panda$core$String* separator180 = NULL;
    panda$core$String* $tmp181;
    panda$collections$Iterator* Iter$119$9186 = NULL;
    panda$collections$Iterator* $tmp187;
    panda$collections$Iterator* $tmp188;
    org$pandalanguage$pandac$Type* p204 = NULL;
    org$pandalanguage$pandac$Type* $tmp205;
    panda$core$Object* $tmp206;
    panda$core$String* $tmp214;
    panda$core$String* $tmp215;
    org$pandalanguage$pandac$Type$Kind $match$126_9219;
    org$pandalanguage$pandac$Type* $tmp224;
    panda$core$Char8 $tmp227;
    org$pandalanguage$pandac$Type* $returnValue228;
    org$pandalanguage$pandac$Type* $tmp229;
    org$pandalanguage$pandac$Type* $tmp230;
    panda$core$String* $tmp232;
    panda$collections$ImmutableArray* $tmp234;
    int $tmp169;
    {
        resolved170 = p_returnType->resolved;
        panda$core$MutableString* $tmp174 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp174, &$s175);
        $tmp173 = $tmp174;
        $tmp172 = $tmp173;
        name171 = $tmp172;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
        panda$collections$Array* $tmp179 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp179);
        $tmp178 = $tmp179;
        $tmp177 = $tmp178;
        subtypes176 = $tmp177;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
        $tmp181 = &$s182;
        separator180 = $tmp181;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
        {
            int $tmp185;
            {
                ITable* $tmp189 = ((panda$collections$Iterable*) p_parameterTypes)->$class->itable;
                while ($tmp189->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp189 = $tmp189->next;
                }
                $fn191 $tmp190 = $tmp189->methods[0];
                panda$collections$Iterator* $tmp192 = $tmp190(((panda$collections$Iterable*) p_parameterTypes));
                $tmp188 = $tmp192;
                $tmp187 = $tmp188;
                Iter$119$9186 = $tmp187;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp187));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
                $l193:;
                ITable* $tmp196 = Iter$119$9186->$class->itable;
                while ($tmp196->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp196 = $tmp196->next;
                }
                $fn198 $tmp197 = $tmp196->methods[0];
                panda$core$Bit $tmp199 = $tmp197(Iter$119$9186);
                panda$core$Bit $tmp200 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp199);
                bool $tmp195 = $tmp200.value;
                if (!$tmp195) goto $l194;
                {
                    int $tmp203;
                    {
                        ITable* $tmp207 = Iter$119$9186->$class->itable;
                        while ($tmp207->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp207 = $tmp207->next;
                        }
                        $fn209 $tmp208 = $tmp207->methods[1];
                        panda$core$Object* $tmp210 = $tmp208(Iter$119$9186);
                        $tmp206 = $tmp210;
                        $tmp205 = ((org$pandalanguage$pandac$Type*) $tmp206);
                        p204 = $tmp205;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
                        panda$core$Panda$unref$panda$core$Object($tmp206);
                        panda$collections$Array$add$panda$collections$Array$T(subtypes176, ((panda$core$Object*) p204));
                        bool $tmp211 = resolved170.value;
                        if (!$tmp211) goto $l212;
                        $tmp211 = p204->resolved.value;
                        $l212:;
                        panda$core$Bit $tmp213 = { $tmp211 };
                        resolved170 = $tmp213;
                        panda$core$MutableString$append$panda$core$String(name171, separator180);
                        panda$core$MutableString$append$panda$core$String(name171, ((org$pandalanguage$pandac$Symbol*) p204)->name);
                        {
                            $tmp214 = separator180;
                            $tmp215 = &$s216;
                            separator180 = $tmp215;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp215));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
                        }
                    }
                    $tmp203 = -1;
                    goto $l201;
                    $l201:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p204));
                    p204 = NULL;
                    switch ($tmp203) {
                        case -1: goto $l217;
                    }
                    $l217:;
                }
                goto $l193;
                $l194:;
            }
            $tmp185 = -1;
            goto $l183;
            $l183:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$119$9186));
            Iter$119$9186 = NULL;
            switch ($tmp185) {
                case -1: goto $l218;
            }
            $l218:;
        }
        {
            $match$126_9219 = p_kind;
            panda$core$Bit $tmp220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9219.$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp220.value) {
            {
                panda$core$MutableString$append$panda$core$String(name171, &$s221);
            }
            }
            else {
            panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9219.$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp222.value) {
            {
                panda$core$MutableString$append$panda$core$String(name171, &$s223);
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
            }
        }
        panda$collections$Array$add$panda$collections$Array$T(subtypes176, ((panda$core$Object*) p_returnType));
        org$pandalanguage$pandac$Type* $tmp225 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp224 = $tmp225;
        panda$core$Bit $tmp226 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_returnType, $tmp224);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
        if ($tmp226.value) {
        {
            panda$core$MutableString$append$panda$core$String(name171, ((org$pandalanguage$pandac$Symbol*) p_returnType)->name);
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp227, ((panda$core$UInt8) { 41 }));
        panda$core$MutableString$append$panda$core$Char8(name171, $tmp227);
        org$pandalanguage$pandac$Type* $tmp231 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp233 = panda$core$MutableString$finish$R$panda$core$String(name171);
        $tmp232 = $tmp233;
        panda$collections$ImmutableArray* $tmp235 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes176);
        $tmp234 = $tmp235;
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp231, $tmp232, p_kind, p_position, ((panda$collections$ListView*) $tmp234), resolved170);
        $tmp230 = $tmp231;
        $tmp229 = $tmp230;
        $returnValue228 = $tmp229;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp229));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp234));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
        $tmp169 = 0;
        goto $l167;
        $l236:;
        return $returnValue228;
    }
    $l167:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name171));
    name171 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes176));
    subtypes176 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator180));
    separator180 = NULL;
    switch ($tmp169) {
        case 0: goto $l236;
    }
    $l238:;
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue248;
    panda$core$Bit $tmp241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp240 = $tmp241.value;
    if ($tmp240) goto $l242;
    panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 3 }));
    $tmp240 = $tmp243.value;
    $l242:;
    panda$core$Bit $tmp244 = { $tmp240 };
    bool $tmp239 = $tmp244.value;
    if ($tmp239) goto $l245;
    panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 10 }));
    $tmp239 = $tmp246.value;
    $l245:;
    panda$core$Bit $tmp247 = { $tmp239 };
    PANDA_ASSERT($tmp247.value);
    $returnValue248 = self->position.line;
    return $returnValue248;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue250;
    panda$core$Bit $tmp251 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue250 = $tmp251;
    return $returnValue250;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue253;
    panda$core$Bit $tmp254 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue253 = $tmp254;
    return $returnValue253;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue256;
    org$pandalanguage$pandac$Type* $tmp257;
    org$pandalanguage$pandac$Type* $tmp258;
    org$pandalanguage$pandac$Type$Kind $tmp261;
    org$pandalanguage$pandac$Position $tmp262;
    org$pandalanguage$pandac$Type* $tmp259 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp261, ((panda$core$Int64) { 4 }));
    org$pandalanguage$pandac$Position$init(&$tmp262);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp259, &$s260, $tmp261, $tmp262, ((panda$core$Bit) { true }));
    $tmp258 = $tmp259;
    $tmp257 = $tmp258;
    $returnValue256 = $tmp257;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
    return $returnValue256;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue264;
    org$pandalanguage$pandac$Type* $tmp265;
    org$pandalanguage$pandac$Type* $tmp266;
    org$pandalanguage$pandac$Type$Kind $tmp269;
    org$pandalanguage$pandac$Position $tmp270;
    org$pandalanguage$pandac$Type* $tmp267 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp269, ((panda$core$Int64) { 13 }));
    org$pandalanguage$pandac$Position$init(&$tmp270);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp267, &$s268, $tmp269, $tmp270, ((panda$core$Bit) { true }));
    $tmp266 = $tmp267;
    $tmp265 = $tmp266;
    $returnValue264 = $tmp265;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
    return $returnValue264;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue272;
    org$pandalanguage$pandac$Type* $tmp273;
    org$pandalanguage$pandac$Type* $tmp274;
    org$pandalanguage$pandac$Type$Kind $tmp277;
    org$pandalanguage$pandac$Position $tmp278;
    org$pandalanguage$pandac$Type* $tmp275 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp277, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp278);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp275, &$s276, $tmp277, $tmp278, ((panda$core$Bit) { true }));
    $tmp274 = $tmp275;
    $tmp273 = $tmp274;
    $returnValue272 = $tmp273;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp273));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
    return $returnValue272;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes283 = NULL;
    panda$collections$Array* $tmp284;
    panda$collections$Array* $tmp285;
    org$pandalanguage$pandac$Type* $tmp287;
    org$pandalanguage$pandac$Type* $returnValue289;
    org$pandalanguage$pandac$Type* $tmp290;
    org$pandalanguage$pandac$Type* $tmp291;
    org$pandalanguage$pandac$Type$Kind $tmp294;
    org$pandalanguage$pandac$Position $tmp295;
    int $tmp282;
    {
        panda$collections$Array* $tmp286 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp286);
        $tmp285 = $tmp286;
        $tmp284 = $tmp285;
        subtypes283 = $tmp284;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp284));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
        org$pandalanguage$pandac$Type* $tmp288 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp287 = $tmp288;
        panda$collections$Array$add$panda$collections$Array$T(subtypes283, ((panda$core$Object*) $tmp287));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp287));
        org$pandalanguage$pandac$Type* $tmp292 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp294, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Position$init(&$tmp295);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp292, &$s293, $tmp294, $tmp295, ((panda$collections$ListView*) subtypes283), ((panda$core$Bit) { true }));
        $tmp291 = $tmp292;
        $tmp290 = $tmp291;
        $returnValue289 = $tmp290;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
        $tmp282 = 0;
        goto $l280;
        $l296:;
        return $returnValue289;
    }
    $l280:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes283));
    subtypes283 = NULL;
    switch ($tmp282) {
        case 0: goto $l296;
    }
    $l298:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue299;
    org$pandalanguage$pandac$Type* $tmp300;
    org$pandalanguage$pandac$Type* $tmp301;
    org$pandalanguage$pandac$Type$Kind $tmp304;
    org$pandalanguage$pandac$Position $tmp305;
    org$pandalanguage$pandac$Type* $tmp302 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp304, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp305);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp302, &$s303, $tmp304, $tmp305, ((panda$core$Bit) { true }));
    $tmp301 = $tmp302;
    $tmp300 = $tmp301;
    $returnValue299 = $tmp300;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
    return $returnValue299;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue307;
    org$pandalanguage$pandac$Type* $tmp308;
    org$pandalanguage$pandac$Type* $tmp309;
    org$pandalanguage$pandac$Type$Kind $tmp312;
    org$pandalanguage$pandac$Position $tmp313;
    org$pandalanguage$pandac$Type* $tmp310 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp312, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp313);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp310, &$s311, $tmp312, $tmp313, ((panda$core$Bit) { true }));
    $tmp309 = $tmp310;
    $tmp308 = $tmp309;
    $returnValue307 = $tmp308;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
    return $returnValue307;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue315;
    org$pandalanguage$pandac$Type* $tmp316;
    org$pandalanguage$pandac$Type* $tmp317;
    org$pandalanguage$pandac$Type$Kind $tmp320;
    org$pandalanguage$pandac$Position $tmp321;
    org$pandalanguage$pandac$Type* $tmp318 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp320, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp321);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp318, &$s319, $tmp320, $tmp321, ((panda$core$Bit) { true }));
    $tmp317 = $tmp318;
    $tmp316 = $tmp317;
    $returnValue315 = $tmp316;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp316));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
    return $returnValue315;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue323;
    org$pandalanguage$pandac$Type* $tmp324;
    org$pandalanguage$pandac$Type* $tmp325;
    org$pandalanguage$pandac$Type$Kind $tmp328;
    org$pandalanguage$pandac$Type* $tmp326 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp328, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp326, &$s327, $tmp328, ((panda$core$Int64) { 8 }));
    $tmp325 = $tmp326;
    $tmp324 = $tmp325;
    $returnValue323 = $tmp324;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp324));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
    return $returnValue323;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue330;
    org$pandalanguage$pandac$Type* $tmp331;
    org$pandalanguage$pandac$Type* $tmp332;
    org$pandalanguage$pandac$Type$Kind $tmp335;
    org$pandalanguage$pandac$Type* $tmp333 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp335, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp333, &$s334, $tmp335, ((panda$core$Int64) { 16 }));
    $tmp332 = $tmp333;
    $tmp331 = $tmp332;
    $returnValue330 = $tmp331;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
    return $returnValue330;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue337;
    org$pandalanguage$pandac$Type* $tmp338;
    org$pandalanguage$pandac$Type* $tmp339;
    org$pandalanguage$pandac$Type$Kind $tmp342;
    org$pandalanguage$pandac$Type* $tmp340 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp342, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp340, &$s341, $tmp342, ((panda$core$Int64) { 32 }));
    $tmp339 = $tmp340;
    $tmp338 = $tmp339;
    $returnValue337 = $tmp338;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp338));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
    return $returnValue337;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue344;
    org$pandalanguage$pandac$Type* $tmp345;
    org$pandalanguage$pandac$Type* $tmp346;
    org$pandalanguage$pandac$Type$Kind $tmp349;
    org$pandalanguage$pandac$Type* $tmp347 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp349, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp347, &$s348, $tmp349, ((panda$core$Int64) { 64 }));
    $tmp346 = $tmp347;
    $tmp345 = $tmp346;
    $returnValue344 = $tmp345;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp345));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
    return $returnValue344;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue351;
    org$pandalanguage$pandac$Type* $tmp352;
    org$pandalanguage$pandac$Type* $tmp353;
    org$pandalanguage$pandac$Type$Kind $tmp356;
    org$pandalanguage$pandac$Type* $tmp354 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp356, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp354, &$s355, $tmp356, ((panda$core$Int64) { 8 }));
    $tmp353 = $tmp354;
    $tmp352 = $tmp353;
    $returnValue351 = $tmp352;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
    return $returnValue351;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue358;
    org$pandalanguage$pandac$Type* $tmp359;
    org$pandalanguage$pandac$Type* $tmp360;
    org$pandalanguage$pandac$Type$Kind $tmp363;
    org$pandalanguage$pandac$Type* $tmp361 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp363, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp361, &$s362, $tmp363, ((panda$core$Int64) { 16 }));
    $tmp360 = $tmp361;
    $tmp359 = $tmp360;
    $returnValue358 = $tmp359;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp359));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp360));
    return $returnValue358;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue365;
    org$pandalanguage$pandac$Type* $tmp366;
    org$pandalanguage$pandac$Type* $tmp367;
    org$pandalanguage$pandac$Type$Kind $tmp370;
    org$pandalanguage$pandac$Type* $tmp368 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp370, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp368, &$s369, $tmp370, ((panda$core$Int64) { 32 }));
    $tmp367 = $tmp368;
    $tmp366 = $tmp367;
    $returnValue365 = $tmp366;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp366));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
    return $returnValue365;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue372;
    org$pandalanguage$pandac$Type* $tmp373;
    org$pandalanguage$pandac$Type* $tmp374;
    org$pandalanguage$pandac$Type$Kind $tmp377;
    org$pandalanguage$pandac$Type* $tmp375 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp377, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp375, &$s376, $tmp377, ((panda$core$Int64) { 64 }));
    $tmp374 = $tmp375;
    $tmp373 = $tmp374;
    $returnValue372 = $tmp373;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp373));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp374));
    return $returnValue372;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue379;
    org$pandalanguage$pandac$Type* $tmp380;
    org$pandalanguage$pandac$Type* $tmp381;
    org$pandalanguage$pandac$Type$Kind $tmp384;
    org$pandalanguage$pandac$Type* $tmp382 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp384, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp382, &$s383, $tmp384, ((panda$core$Int64) { 32 }));
    $tmp381 = $tmp382;
    $tmp380 = $tmp381;
    $returnValue379 = $tmp380;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
    return $returnValue379;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue386;
    org$pandalanguage$pandac$Type* $tmp387;
    org$pandalanguage$pandac$Type* $tmp388;
    org$pandalanguage$pandac$Type$Kind $tmp391;
    org$pandalanguage$pandac$Type* $tmp389 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp391, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp389, &$s390, $tmp391, ((panda$core$Int64) { 64 }));
    $tmp388 = $tmp389;
    $tmp387 = $tmp388;
    $returnValue386 = $tmp387;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp387));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp388));
    return $returnValue386;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue393;
    org$pandalanguage$pandac$Type* $tmp394;
    org$pandalanguage$pandac$Type* $tmp395;
    org$pandalanguage$pandac$Type$Kind $tmp398;
    org$pandalanguage$pandac$Position $tmp399;
    org$pandalanguage$pandac$Type* $tmp396 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp398, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp399);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp396, &$s397, $tmp398, $tmp399, ((panda$core$Bit) { true }));
    $tmp395 = $tmp396;
    $tmp394 = $tmp395;
    $returnValue393 = $tmp394;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp394));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp395));
    return $returnValue393;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue401;
    org$pandalanguage$pandac$Type* $tmp402;
    org$pandalanguage$pandac$Type* $tmp403;
    org$pandalanguage$pandac$Type$Kind $tmp406;
    org$pandalanguage$pandac$Position $tmp407;
    org$pandalanguage$pandac$Type* $tmp404 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp406, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp407);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp404, &$s405, $tmp406, $tmp407, ((panda$core$Bit) { true }));
    $tmp403 = $tmp404;
    $tmp402 = $tmp403;
    $returnValue401 = $tmp402;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
    return $returnValue401;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue409;
    org$pandalanguage$pandac$Type* $tmp410;
    org$pandalanguage$pandac$Type* $tmp411;
    org$pandalanguage$pandac$Type$Kind $tmp414;
    org$pandalanguage$pandac$Position $tmp415;
    org$pandalanguage$pandac$Type* $tmp412 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp414, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp415);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp412, &$s413, $tmp414, $tmp415, ((panda$core$Bit) { true }));
    $tmp411 = $tmp412;
    $tmp410 = $tmp411;
    $returnValue409 = $tmp410;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp410));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp411));
    return $returnValue409;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue417;
    org$pandalanguage$pandac$Type* $tmp418;
    org$pandalanguage$pandac$Type* $tmp419;
    org$pandalanguage$pandac$Type$Kind $tmp422;
    org$pandalanguage$pandac$Position $tmp423;
    org$pandalanguage$pandac$Type* $tmp420 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp422, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp423);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp420, &$s421, $tmp422, $tmp423, ((panda$core$Bit) { true }));
    $tmp419 = $tmp420;
    $tmp418 = $tmp419;
    $returnValue417 = $tmp418;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp418));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
    return $returnValue417;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue425;
    org$pandalanguage$pandac$Type* $tmp426;
    org$pandalanguage$pandac$Type* $tmp427;
    org$pandalanguage$pandac$Type$Kind $tmp430;
    org$pandalanguage$pandac$Position $tmp431;
    org$pandalanguage$pandac$Type* $tmp428 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp430, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp431);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp428, &$s429, $tmp430, $tmp431, ((panda$core$Bit) { true }));
    $tmp427 = $tmp428;
    $tmp426 = $tmp427;
    $returnValue425 = $tmp426;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp426));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
    return $returnValue425;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue433;
    org$pandalanguage$pandac$Type* $tmp434;
    org$pandalanguage$pandac$Type* $tmp435;
    org$pandalanguage$pandac$Type$Kind $tmp438;
    org$pandalanguage$pandac$Position $tmp439;
    org$pandalanguage$pandac$Type* $tmp436 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp438, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp439);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp436, &$s437, $tmp438, $tmp439, ((panda$core$Bit) { true }));
    $tmp435 = $tmp436;
    $tmp434 = $tmp435;
    $returnValue433 = $tmp434;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp435));
    return $returnValue433;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue441;
    org$pandalanguage$pandac$Type* $tmp442;
    org$pandalanguage$pandac$Type* $tmp443;
    org$pandalanguage$pandac$Type$Kind $tmp446;
    org$pandalanguage$pandac$Position $tmp447;
    org$pandalanguage$pandac$Type* $tmp444 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp446, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp447);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp444, &$s445, $tmp446, $tmp447, ((panda$core$Bit) { true }));
    $tmp443 = $tmp444;
    $tmp442 = $tmp443;
    $returnValue441 = $tmp442;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp442));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
    return $returnValue441;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue449;
    org$pandalanguage$pandac$Type* $tmp450;
    org$pandalanguage$pandac$Type* $tmp451;
    org$pandalanguage$pandac$Type$Kind $tmp454;
    org$pandalanguage$pandac$Position $tmp455;
    org$pandalanguage$pandac$Type* $tmp452 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp454, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp455);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp452, &$s453, $tmp454, $tmp455, ((panda$core$Bit) { true }));
    $tmp451 = $tmp452;
    $tmp450 = $tmp451;
    $returnValue449 = $tmp450;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp450));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
    return $returnValue449;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue457;
    org$pandalanguage$pandac$Type* $tmp458;
    org$pandalanguage$pandac$Type* $tmp459;
    org$pandalanguage$pandac$Type$Kind $tmp462;
    org$pandalanguage$pandac$Position $tmp463;
    org$pandalanguage$pandac$Type* $tmp460 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp462, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp463);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp460, &$s461, $tmp462, $tmp463, ((panda$core$Bit) { true }));
    $tmp459 = $tmp460;
    $tmp458 = $tmp459;
    $returnValue457 = $tmp458;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp458));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
    return $returnValue457;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue465;
    org$pandalanguage$pandac$Type* $tmp466;
    org$pandalanguage$pandac$Type* $tmp467;
    org$pandalanguage$pandac$Type$Kind $tmp470;
    org$pandalanguage$pandac$Position $tmp471;
    org$pandalanguage$pandac$Type* $tmp468 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp470, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp471);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp468, &$s469, $tmp470, $tmp471, ((panda$core$Bit) { true }));
    $tmp467 = $tmp468;
    $tmp466 = $tmp467;
    $returnValue465 = $tmp466;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp466));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
    return $returnValue465;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue473;
    org$pandalanguage$pandac$Type* $tmp474;
    org$pandalanguage$pandac$Type* $tmp475;
    org$pandalanguage$pandac$Type$Kind $tmp478;
    org$pandalanguage$pandac$Position $tmp479;
    org$pandalanguage$pandac$Type* $tmp476 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp478, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp479);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp476, &$s477, $tmp478, $tmp479, ((panda$core$Bit) { true }));
    $tmp475 = $tmp476;
    $tmp474 = $tmp475;
    $returnValue473 = $tmp474;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp474));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp475));
    return $returnValue473;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue481;
    org$pandalanguage$pandac$Type* $tmp482;
    org$pandalanguage$pandac$Type* $tmp483;
    org$pandalanguage$pandac$Type$Kind $tmp486;
    org$pandalanguage$pandac$Position $tmp487;
    org$pandalanguage$pandac$Type* $tmp484 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp486, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp487);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp484, &$s485, $tmp486, $tmp487, ((panda$core$Bit) { true }));
    $tmp483 = $tmp484;
    $tmp482 = $tmp483;
    $returnValue481 = $tmp482;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp482));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
    return $returnValue481;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue489;
    org$pandalanguage$pandac$Type* $tmp490;
    org$pandalanguage$pandac$Type* $tmp491;
    org$pandalanguage$pandac$Type$Kind $tmp494;
    org$pandalanguage$pandac$Position $tmp495;
    org$pandalanguage$pandac$Type* $tmp492 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp494, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp495);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp492, &$s493, $tmp494, $tmp495, ((panda$core$Bit) { true }));
    $tmp491 = $tmp492;
    $tmp490 = $tmp491;
    $returnValue489 = $tmp490;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp490));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp491));
    return $returnValue489;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue497;
    org$pandalanguage$pandac$Type* $tmp498;
    org$pandalanguage$pandac$Type* $tmp499;
    org$pandalanguage$pandac$Type$Kind $tmp502;
    org$pandalanguage$pandac$Position $tmp503;
    org$pandalanguage$pandac$Type* $tmp500 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp502, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp503);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp500, &$s501, $tmp502, $tmp503, ((panda$core$Bit) { true }));
    $tmp499 = $tmp500;
    $tmp498 = $tmp499;
    $returnValue497 = $tmp498;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp498));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp499));
    return $returnValue497;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue505;
    org$pandalanguage$pandac$Type* $tmp506;
    org$pandalanguage$pandac$Type* $tmp507;
    panda$core$String* $tmp509;
    org$pandalanguage$pandac$Type$Kind $tmp511;
    org$pandalanguage$pandac$Position $tmp512;
    org$pandalanguage$pandac$Type* $tmp508 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp510 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp509 = $tmp510;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp511, ((panda$core$Int64) { 5 }));
    org$pandalanguage$pandac$Position$init(&$tmp512);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp508, $tmp509, $tmp511, $tmp512, ((panda$core$Bit) { true }));
    $tmp507 = $tmp508;
    $tmp506 = $tmp507;
    $returnValue505 = $tmp506;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp506));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
    return $returnValue505;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue514;
    org$pandalanguage$pandac$Type* $tmp515;
    org$pandalanguage$pandac$Type* $tmp516;
    panda$core$String* $tmp518;
    panda$core$String* $tmp520;
    org$pandalanguage$pandac$Type$Kind $tmp523;
    org$pandalanguage$pandac$Position $tmp524;
    org$pandalanguage$pandac$Type* $tmp517 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp521 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp520 = $tmp521;
    panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s519, $tmp520);
    $tmp518 = $tmp522;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp523, ((panda$core$Int64) { 5 }));
    org$pandalanguage$pandac$Position$init(&$tmp524);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp517, $tmp518, $tmp523, $tmp524, ((panda$core$Bit) { true }));
    $tmp516 = $tmp517;
    $tmp515 = $tmp516;
    $returnValue514 = $tmp515;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp515));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp518));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp520));
    return $returnValue514;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue526;
    org$pandalanguage$pandac$Type* $tmp527;
    org$pandalanguage$pandac$Type* $tmp528;
    panda$core$String* $tmp530;
    org$pandalanguage$pandac$Type$Kind $tmp532;
    org$pandalanguage$pandac$Position $tmp533;
    org$pandalanguage$pandac$Type* $tmp529 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp531 = panda$core$Real64$convert$R$panda$core$String(p_value);
    $tmp530 = $tmp531;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp532, ((panda$core$Int64) { 16 }));
    org$pandalanguage$pandac$Position$init(&$tmp533);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp529, $tmp530, $tmp532, $tmp533, ((panda$core$Bit) { true }));
    $tmp528 = $tmp529;
    $tmp527 = $tmp528;
    $returnValue526 = $tmp527;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp527));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp528));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp530));
    return $returnValue526;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue535;
    org$pandalanguage$pandac$Type* $tmp536;
    org$pandalanguage$pandac$Type* $tmp537;
    org$pandalanguage$pandac$Type$Kind $tmp540;
    org$pandalanguage$pandac$Position $tmp541;
    org$pandalanguage$pandac$Type* $tmp538 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp540, ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$Position$init(&$tmp541);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp538, &$s539, $tmp540, $tmp541, ((panda$core$Bit) { true }));
    $tmp537 = $tmp538;
    $tmp536 = $tmp537;
    $returnValue535 = $tmp536;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp536));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
    return $returnValue535;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue543;
    org$pandalanguage$pandac$Type* $tmp544;
    org$pandalanguage$pandac$Type* $tmp545;
    org$pandalanguage$pandac$Type$Kind $tmp548;
    org$pandalanguage$pandac$Position $tmp549;
    org$pandalanguage$pandac$Type* $tmp546 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp548, ((panda$core$Int64) { 9 }));
    org$pandalanguage$pandac$Position$init(&$tmp549);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp546, &$s547, $tmp548, $tmp549, ((panda$core$Bit) { true }));
    $tmp545 = $tmp546;
    $tmp544 = $tmp545;
    $returnValue543 = $tmp544;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp544));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
    return $returnValue543;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue551;
    org$pandalanguage$pandac$Type* $tmp552;
    org$pandalanguage$pandac$Type* $tmp553;
    org$pandalanguage$pandac$Type$Kind $tmp556;
    org$pandalanguage$pandac$Position $tmp557;
    org$pandalanguage$pandac$Type* $tmp554 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp556, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp557);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp554, &$s555, $tmp556, $tmp557, ((panda$core$Bit) { true }));
    $tmp553 = $tmp554;
    $tmp552 = $tmp553;
    $returnValue551 = $tmp552;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp552));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp553));
    return $returnValue551;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue559;
    org$pandalanguage$pandac$Type* $tmp560;
    org$pandalanguage$pandac$Type* $tmp561;
    org$pandalanguage$pandac$Type$Kind $tmp564;
    org$pandalanguage$pandac$Position $tmp565;
    org$pandalanguage$pandac$Type* $tmp562 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp564, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp565);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp562, &$s563, $tmp564, $tmp565, ((panda$core$Bit) { true }));
    $tmp561 = $tmp562;
    $tmp560 = $tmp561;
    $returnValue559 = $tmp560;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp560));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp561));
    return $returnValue559;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue567;
    org$pandalanguage$pandac$Type* $tmp568;
    org$pandalanguage$pandac$Type* $tmp569;
    org$pandalanguage$pandac$Type$Kind $tmp572;
    org$pandalanguage$pandac$Position $tmp573;
    org$pandalanguage$pandac$Type* $tmp570 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp572, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp573);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp570, &$s571, $tmp572, $tmp573, ((panda$core$Bit) { true }));
    $tmp569 = $tmp570;
    $tmp568 = $tmp569;
    $returnValue567 = $tmp568;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp568));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
    return $returnValue567;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue575;
    org$pandalanguage$pandac$Type* $tmp576;
    org$pandalanguage$pandac$Type* $tmp577;
    org$pandalanguage$pandac$Type$Kind $tmp580;
    org$pandalanguage$pandac$Position $tmp581;
    org$pandalanguage$pandac$Type* $tmp578 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp580, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp581);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp578, &$s579, $tmp580, $tmp581, ((panda$core$Bit) { true }));
    $tmp577 = $tmp578;
    $tmp576 = $tmp577;
    $returnValue575 = $tmp576;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp576));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp577));
    return $returnValue575;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children586 = NULL;
    panda$collections$Array* $tmp587;
    panda$collections$Array* $tmp588;
    org$pandalanguage$pandac$Type* $tmp590;
    org$pandalanguage$pandac$Type$Kind $tmp593;
    org$pandalanguage$pandac$Position $tmp594;
    org$pandalanguage$pandac$Type* $returnValue595;
    org$pandalanguage$pandac$Type* $tmp596;
    org$pandalanguage$pandac$Type* $tmp597;
    panda$core$String* $tmp599;
    panda$core$String* $tmp600;
    panda$core$String* $tmp601;
    panda$core$String* $tmp602;
    org$pandalanguage$pandac$Type$Kind $tmp610;
    int $tmp585;
    {
        panda$collections$Array* $tmp589 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp589);
        $tmp588 = $tmp589;
        $tmp587 = $tmp588;
        children586 = $tmp587;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp587));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp588));
        org$pandalanguage$pandac$Type* $tmp591 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp593, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp594);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp591, &$s592, $tmp593, $tmp594, ((panda$core$Bit) { true }));
        $tmp590 = $tmp591;
        panda$collections$Array$add$panda$collections$Array$T(children586, ((panda$core$Object*) $tmp590));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
        panda$collections$Array$add$panda$collections$Array$T(children586, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp598 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp604 = panda$core$String$convert$R$panda$core$String(&$s603);
        $tmp602 = $tmp604;
        panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp602, &$s605);
        $tmp601 = $tmp606;
        panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp601, ((panda$core$Object*) p_t));
        $tmp600 = $tmp607;
        panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp600, &$s608);
        $tmp599 = $tmp609;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp610, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp598, $tmp599, $tmp610, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children586), p_t->resolved);
        $tmp597 = $tmp598;
        $tmp596 = $tmp597;
        $returnValue595 = $tmp596;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp596));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp597));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp600));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp602));
        $tmp585 = 0;
        goto $l583;
        $l611:;
        return $returnValue595;
    }
    $l583:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children586));
    children586 = NULL;
    switch ($tmp585) {
        case 0: goto $l611;
    }
    $l613:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children617 = NULL;
    panda$collections$Array* $tmp618;
    panda$collections$Array* $tmp619;
    org$pandalanguage$pandac$Type* $returnValue621;
    org$pandalanguage$pandac$Type* $tmp622;
    org$pandalanguage$pandac$Type* $tmp623;
    org$pandalanguage$pandac$Type* $tmp624;
    org$pandalanguage$pandac$Type$Kind $tmp627;
    org$pandalanguage$pandac$Position $tmp628;
    int $tmp616;
    {
        panda$collections$Array* $tmp620 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp620);
        $tmp619 = $tmp620;
        $tmp618 = $tmp619;
        children617 = $tmp618;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp618));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
        panda$collections$Array$add$panda$collections$Array$T(children617, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp625 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp627, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp628);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp625, &$s626, $tmp627, $tmp628, ((panda$core$Bit) { true }));
        $tmp624 = $tmp625;
        org$pandalanguage$pandac$Type* $tmp629 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp624, ((panda$collections$ListView*) children617));
        $tmp623 = $tmp629;
        $tmp622 = $tmp623;
        $returnValue621 = $tmp622;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp622));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
        $tmp616 = 0;
        goto $l614;
        $l630:;
        return $returnValue621;
    }
    $l614:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children617));
    children617 = NULL;
    switch ($tmp616) {
        case 0: goto $l630;
    }
    $l632:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children636 = NULL;
    panda$collections$Array* $tmp637;
    panda$collections$Array* $tmp638;
    org$pandalanguage$pandac$Type* $returnValue640;
    org$pandalanguage$pandac$Type* $tmp641;
    org$pandalanguage$pandac$Type* $tmp642;
    org$pandalanguage$pandac$Type* $tmp643;
    org$pandalanguage$pandac$Type$Kind $tmp646;
    org$pandalanguage$pandac$Position $tmp647;
    int $tmp635;
    {
        panda$collections$Array* $tmp639 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp639);
        $tmp638 = $tmp639;
        $tmp637 = $tmp638;
        children636 = $tmp637;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp637));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
        panda$collections$Array$add$panda$collections$Array$T(children636, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp644 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp646, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp647);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp644, &$s645, $tmp646, $tmp647, ((panda$core$Bit) { true }));
        $tmp643 = $tmp644;
        org$pandalanguage$pandac$Type* $tmp648 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp643, ((panda$collections$ListView*) children636));
        $tmp642 = $tmp648;
        $tmp641 = $tmp642;
        $returnValue640 = $tmp641;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp641));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp643));
        $tmp635 = 0;
        goto $l633;
        $l649:;
        return $returnValue640;
    }
    $l633:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children636));
    children636 = NULL;
    switch ($tmp635) {
        case 0: goto $l649;
    }
    $l651:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children655 = NULL;
    panda$collections$Array* $tmp656;
    panda$collections$Array* $tmp657;
    org$pandalanguage$pandac$Type* $tmp659;
    org$pandalanguage$pandac$Type* $tmp662;
    org$pandalanguage$pandac$Type* $tmp664;
    org$pandalanguage$pandac$Type* $tmp667;
    org$pandalanguage$pandac$Type* $tmp669;
    org$pandalanguage$pandac$Type* $tmp672;
    org$pandalanguage$pandac$Type* $tmp674;
    org$pandalanguage$pandac$Type* $returnValue676;
    org$pandalanguage$pandac$Type* $tmp677;
    org$pandalanguage$pandac$Type* $tmp678;
    org$pandalanguage$pandac$Type* $tmp679;
    org$pandalanguage$pandac$Type$Kind $tmp682;
    org$pandalanguage$pandac$Position $tmp683;
    int $tmp654;
    {
        panda$collections$Array* $tmp658 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp658);
        $tmp657 = $tmp658;
        $tmp656 = $tmp657;
        children655 = $tmp656;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp656));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp657));
        panda$collections$Array$add$panda$collections$Array$T(children655, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp660 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp659 = $tmp660;
        panda$core$Bit $tmp661 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp659);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp659));
        if ($tmp661.value) {
        {
            org$pandalanguage$pandac$Type* $tmp663 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp662 = $tmp663;
            panda$collections$Array$add$panda$collections$Array$T(children655, ((panda$core$Object*) $tmp662));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp662));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp665 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp664 = $tmp665;
        panda$core$Bit $tmp666 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp664);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp664));
        if ($tmp666.value) {
        {
            org$pandalanguage$pandac$Type* $tmp668 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp667 = $tmp668;
            panda$collections$Array$add$panda$collections$Array$T(children655, ((panda$core$Object*) $tmp667));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp667));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp670 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp669 = $tmp670;
        panda$core$Bit $tmp671 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp669);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp669));
        if ($tmp671.value) {
        {
            org$pandalanguage$pandac$Type* $tmp673 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp672 = $tmp673;
            panda$collections$Array$add$panda$collections$Array$T(children655, ((panda$core$Object*) $tmp672));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp675 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp674 = $tmp675;
            panda$collections$Array$add$panda$collections$Array$T(children655, ((panda$core$Object*) $tmp674));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp674));
        }
        }
        }
        }
        org$pandalanguage$pandac$Type* $tmp680 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp682, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp683);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp680, &$s681, $tmp682, $tmp683, ((panda$core$Bit) { true }));
        $tmp679 = $tmp680;
        org$pandalanguage$pandac$Type* $tmp684 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp679, ((panda$collections$ListView*) children655));
        $tmp678 = $tmp684;
        $tmp677 = $tmp678;
        $returnValue676 = $tmp677;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp677));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp678));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
        $tmp654 = 0;
        goto $l652;
        $l685:;
        return $returnValue676;
    }
    $l652:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children655));
    children655 = NULL;
    switch ($tmp654) {
        case 0: goto $l685;
    }
    $l687:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue688;
    org$pandalanguage$pandac$Type* $tmp689;
    org$pandalanguage$pandac$Type* $tmp690;
    org$pandalanguage$pandac$Type$Kind $tmp693;
    org$pandalanguage$pandac$Position $tmp694;
    org$pandalanguage$pandac$Type* $tmp691 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp693, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Position$init(&$tmp694);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp691, &$s692, $tmp693, $tmp694, ((panda$core$Bit) { true }));
    $tmp690 = $tmp691;
    $tmp689 = $tmp690;
    $returnValue688 = $tmp689;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp689));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
    return $returnValue688;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue696;
    org$pandalanguage$pandac$Type* $tmp697;
    org$pandalanguage$pandac$Type* $tmp698;
    org$pandalanguage$pandac$Type$Kind $tmp701;
    org$pandalanguage$pandac$Position $tmp702;
    org$pandalanguage$pandac$Type* $tmp699 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp701, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Position$init(&$tmp702);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp699, &$s700, $tmp701, $tmp702, ((panda$core$Bit) { true }));
    $tmp698 = $tmp699;
    $tmp697 = $tmp698;
    $returnValue696 = $tmp697;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp697));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp698));
    return $returnValue696;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue704;
    panda$core$Bit $tmp710 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s709);
    bool $tmp708 = $tmp710.value;
    if ($tmp708) goto $l711;
    panda$core$Bit $tmp713 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s712);
    $tmp708 = $tmp713.value;
    $l711:;
    panda$core$Bit $tmp714 = { $tmp708 };
    bool $tmp707 = $tmp714.value;
    if ($tmp707) goto $l715;
    panda$core$Bit $tmp717 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s716);
    $tmp707 = $tmp717.value;
    $l715:;
    panda$core$Bit $tmp718 = { $tmp707 };
    bool $tmp706 = $tmp718.value;
    if ($tmp706) goto $l719;
    panda$core$Bit $tmp720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
    $tmp706 = $tmp720.value;
    $l719:;
    panda$core$Bit $tmp721 = { $tmp706 };
    bool $tmp705 = $tmp721.value;
    if ($tmp705) goto $l722;
    panda$core$Bit $tmp723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
    $tmp705 = $tmp723.value;
    $l722:;
    panda$core$Bit $tmp724 = { $tmp705 };
    $returnValue704 = $tmp724;
    return $returnValue704;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue726;
    panda$core$Bit $tmp730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp729 = $tmp730.value;
    if ($tmp729) goto $l731;
    panda$core$Bit $tmp732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 3 }));
    $tmp729 = $tmp732.value;
    $l731:;
    panda$core$Bit $tmp733 = { $tmp729 };
    bool $tmp728 = $tmp733.value;
    if ($tmp728) goto $l734;
    panda$core$Bit $tmp735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 10 }));
    $tmp728 = $tmp735.value;
    $l734:;
    panda$core$Bit $tmp736 = { $tmp728 };
    bool $tmp727 = $tmp736.value;
    if ($tmp727) goto $l737;
    panda$core$Bit $tmp738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
    $tmp727 = $tmp738.value;
    $l737:;
    panda$core$Bit $tmp739 = { $tmp727 };
    $returnValue726 = $tmp739;
    return $returnValue726;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue741;
    panda$core$Bit $tmp743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
    bool $tmp742 = $tmp743.value;
    if ($tmp742) goto $l744;
    panda$core$Bit $tmp746 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s745);
    $tmp742 = $tmp746.value;
    $l744:;
    panda$core$Bit $tmp747 = { $tmp742 };
    $returnValue741 = $tmp747;
    return $returnValue741;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue749;
    panda$core$Bit $tmp751 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s750);
    $returnValue749 = $tmp751;
    return $returnValue749;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue753;
    panda$core$Bit $tmp755 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp754 = $tmp755.value;
    if ($tmp754) goto $l756;
    panda$core$Bit $tmp757 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp754 = $tmp757.value;
    $l756:;
    panda$core$Bit $tmp758 = { $tmp754 };
    $returnValue753 = $tmp758;
    return $returnValue753;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$435_9760;
    panda$core$Bit $returnValue774;
    {
        $match$435_9760 = self->typeKind;
        panda$core$Bit $tmp764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435_9760.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp763 = $tmp764.value;
        if ($tmp763) goto $l765;
        panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435_9760.$rawValue, ((panda$core$Int64) { 1 }));
        $tmp763 = $tmp766.value;
        $l765:;
        panda$core$Bit $tmp767 = { $tmp763 };
        bool $tmp762 = $tmp767.value;
        if ($tmp762) goto $l768;
        panda$core$Bit $tmp769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435_9760.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp762 = $tmp769.value;
        $l768:;
        panda$core$Bit $tmp770 = { $tmp762 };
        bool $tmp761 = $tmp770.value;
        if ($tmp761) goto $l771;
        panda$core$Bit $tmp772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435_9760.$rawValue, ((panda$core$Int64) { 12 }));
        $tmp761 = $tmp772.value;
        $l771:;
        panda$core$Bit $tmp773 = { $tmp761 };
        if ($tmp773.value) {
        {
            $returnValue774 = ((panda$core$Bit) { true });
            return $returnValue774;
        }
        }
        else {
        {
            $returnValue774 = ((panda$core$Bit) { false });
            return $returnValue774;
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue777;
    panda$core$Bit $tmp779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 15 }));
    bool $tmp778 = $tmp779.value;
    if ($tmp778) goto $l780;
    panda$core$Bit $tmp781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 14 }));
    $tmp778 = $tmp781.value;
    $l780:;
    panda$core$Bit $tmp782 = { $tmp778 };
    $returnValue777 = $tmp782;
    return $returnValue777;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue784;
    panda$core$Bit $tmp786 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s785);
    $returnValue784 = $tmp786;
    return $returnValue784;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue789;
    panda$core$Object* $tmp790;
    panda$core$Object* $tmp797;
    panda$core$Bit $tmp788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp788.value) {
    {
        panda$core$Object* $tmp791 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp790 = $tmp791;
        panda$core$Bit $tmp792 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp790));
        $returnValue789 = $tmp792;
        panda$core$Panda$unref$panda$core$Object($tmp790);
        return $returnValue789;
    }
    }
    panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp794 = $tmp795.value;
    if (!$tmp794) goto $l796;
    panda$core$Object* $tmp798 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp797 = $tmp798;
    panda$core$Bit $tmp800 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp797))->name, &$s799);
    $tmp794 = $tmp800.value;
    panda$core$Panda$unref$panda$core$Object($tmp797);
    $l796:;
    panda$core$Bit $tmp801 = { $tmp794 };
    $returnValue789 = $tmp801;
    return $returnValue789;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue804;
    panda$core$Object* $tmp805;
    panda$core$Object* $tmp812;
    panda$core$Bit $tmp803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp803.value) {
    {
        panda$core$Object* $tmp806 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp805 = $tmp806;
        panda$core$Bit $tmp807 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp805));
        $returnValue804 = $tmp807;
        panda$core$Panda$unref$panda$core$Object($tmp805);
        return $returnValue804;
    }
    }
    panda$core$Bit $tmp810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp809 = $tmp810.value;
    if (!$tmp809) goto $l811;
    panda$core$Object* $tmp813 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp812 = $tmp813;
    panda$core$Bit $tmp815 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp812))->name, &$s814);
    $tmp809 = $tmp815.value;
    panda$core$Panda$unref$panda$core$Object($tmp812);
    $l811:;
    panda$core$Bit $tmp816 = { $tmp809 };
    $returnValue804 = $tmp816;
    return $returnValue804;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue822;
    org$pandalanguage$pandac$Type* $tmp823;
    panda$collections$Array* subtypes826 = NULL;
    panda$collections$Array* $tmp827;
    panda$collections$Array* $tmp828;
    org$pandalanguage$pandac$Type* $tmp830;
    org$pandalanguage$pandac$Type* $tmp831;
    panda$core$String* $tmp833;
    panda$core$String* $tmp834;
    org$pandalanguage$pandac$Type$Kind $tmp838;
    org$pandalanguage$pandac$Position $tmp839;
    int $tmp820;
    {
        panda$core$Bit $tmp821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp821.value) {
        {
            $tmp823 = self;
            $returnValue822 = $tmp823;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp823));
            $tmp820 = 0;
            goto $l818;
            $l824:;
            return $returnValue822;
        }
        }
        panda$collections$Array* $tmp829 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp829);
        $tmp828 = $tmp829;
        $tmp827 = $tmp828;
        subtypes826 = $tmp827;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp827));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp828));
        panda$collections$Array$add$panda$collections$Array$T(subtypes826, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp832 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp835 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp834 = $tmp835;
        panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp834, &$s836);
        $tmp833 = $tmp837;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp838, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Position$init(&$tmp839);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp832, $tmp833, $tmp838, $tmp839, ((panda$collections$ListView*) subtypes826), ((panda$core$Bit) { true }));
        $tmp831 = $tmp832;
        $tmp830 = $tmp831;
        $returnValue822 = $tmp830;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp830));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp831));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp833));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp834));
        $tmp820 = 1;
        goto $l818;
        $l840:;
        return $returnValue822;
    }
    $l818:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes826));
    subtypes826 = NULL;
    switch ($tmp820) {
        case 1: goto $l840;
        case 0: goto $l824;
    }
    $l842:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue844;
    org$pandalanguage$pandac$Type* $tmp845;
    org$pandalanguage$pandac$Type* $tmp847;
    panda$core$Object* $tmp848;
    panda$core$Bit $tmp843 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp843.value) {
    {
        $tmp845 = self;
        $returnValue844 = $tmp845;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp845));
        return $returnValue844;
    }
    }
    panda$core$Object* $tmp849 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp848 = $tmp849;
    $tmp847 = ((org$pandalanguage$pandac$Type*) $tmp848);
    $returnValue844 = $tmp847;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp847));
    panda$core$Panda$unref$panda$core$Object($tmp848);
    return $returnValue844;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $returnValue855;
    org$pandalanguage$pandac$Type* $tmp856;
    org$pandalanguage$pandac$Type* $tmp859;
    org$pandalanguage$pandac$Type* $tmp863;
    org$pandalanguage$pandac$Type* $tmp866;
    org$pandalanguage$pandac$Type* $tmp867;
    org$pandalanguage$pandac$Type* $tmp871;
    org$pandalanguage$pandac$Type* $tmp875;
    org$pandalanguage$pandac$Type* $tmp878;
    org$pandalanguage$pandac$Type* $tmp879;
    org$pandalanguage$pandac$Type* $tmp888;
    org$pandalanguage$pandac$Type* $tmp896;
    org$pandalanguage$pandac$Type* $tmp905;
    org$pandalanguage$pandac$Type* $tmp911;
    org$pandalanguage$pandac$Type* $tmp912;
    org$pandalanguage$pandac$Type* $tmp916;
    org$pandalanguage$pandac$Type* $tmp917;
    org$pandalanguage$pandac$Type* $tmp927;
    org$pandalanguage$pandac$Type* $tmp933;
    org$pandalanguage$pandac$Type* $tmp934;
    org$pandalanguage$pandac$Type* $tmp938;
    org$pandalanguage$pandac$Type* $tmp939;
    org$pandalanguage$pandac$Type* $tmp944;
    org$pandalanguage$pandac$Type* $tmp945;
    org$pandalanguage$pandac$Type* $tmp946;
    panda$core$Object* $tmp947;
    org$pandalanguage$pandac$Type* $tmp954;
    org$pandalanguage$pandac$Type* $tmp955;
    org$pandalanguage$pandac$Type* $tmp956;
    panda$core$Object* $tmp957;
    org$pandalanguage$pandac$Type* t1963 = NULL;
    org$pandalanguage$pandac$Type* $tmp964;
    org$pandalanguage$pandac$Type* $tmp965;
    org$pandalanguage$pandac$Type* t2967 = NULL;
    org$pandalanguage$pandac$Type* $tmp968;
    org$pandalanguage$pandac$Type* $tmp969;
    panda$collections$Set* ancestors979 = NULL;
    panda$collections$Set* $tmp980;
    panda$collections$Set* $tmp981;
    org$pandalanguage$pandac$Type* t983 = NULL;
    org$pandalanguage$pandac$Type* $tmp984;
    org$pandalanguage$pandac$ClassDecl* cl985 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp986;
    org$pandalanguage$pandac$ClassDecl* $tmp987;
    org$pandalanguage$pandac$Type* $tmp992;
    org$pandalanguage$pandac$Type* $tmp993;
    org$pandalanguage$pandac$Type* $tmp994;
    org$pandalanguage$pandac$ClassDecl* $tmp996;
    org$pandalanguage$pandac$ClassDecl* $tmp997;
    org$pandalanguage$pandac$ClassDecl* $tmp998;
    org$pandalanguage$pandac$ClassDecl* $tmp1000;
    org$pandalanguage$pandac$ClassDecl* $tmp1001;
    org$pandalanguage$pandac$Type* $tmp1002;
    org$pandalanguage$pandac$Type* $tmp1003;
    org$pandalanguage$pandac$ClassDecl* $tmp1004;
    org$pandalanguage$pandac$ClassDecl* $tmp1005;
    org$pandalanguage$pandac$ClassDecl* $tmp1006;
    org$pandalanguage$pandac$Type* $tmp1012;
    org$pandalanguage$pandac$Type* $tmp1016;
    org$pandalanguage$pandac$Type* $tmp1017;
    org$pandalanguage$pandac$Type* $tmp1018;
    org$pandalanguage$pandac$ClassDecl* $tmp1020;
    org$pandalanguage$pandac$ClassDecl* $tmp1021;
    org$pandalanguage$pandac$ClassDecl* $tmp1022;
    org$pandalanguage$pandac$ClassDecl* $tmp1024;
    org$pandalanguage$pandac$ClassDecl* $tmp1025;
    org$pandalanguage$pandac$Type* $tmp1027;
    org$pandalanguage$pandac$Type* $tmp1028;
    int $tmp853;
    {
        panda$core$Bit $tmp854 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp854.value) {
        {
            $tmp856 = self;
            $returnValue855 = $tmp856;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp856));
            $tmp853 = 0;
            goto $l851;
            $l857:;
            return $returnValue855;
        }
        }
        org$pandalanguage$pandac$Type* $tmp860 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp859 = $tmp860;
        panda$core$Bit $tmp861 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp859);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp859));
        if ($tmp861.value) {
        {
            panda$core$Bit $tmp862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp862.value) {
            {
                $tmp863 = p_other;
                $returnValue855 = $tmp863;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp863));
                $tmp853 = 1;
                goto $l851;
                $l864:;
                return $returnValue855;
            }
            }
            org$pandalanguage$pandac$Type* $tmp868 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp867 = $tmp868;
            $tmp866 = $tmp867;
            $returnValue855 = $tmp866;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp866));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp867));
            $tmp853 = 2;
            goto $l851;
            $l869:;
            return $returnValue855;
        }
        }
        org$pandalanguage$pandac$Type* $tmp872 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp871 = $tmp872;
        panda$core$Bit $tmp873 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp871);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
        if ($tmp873.value) {
        {
            panda$core$Bit $tmp874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp874.value) {
            {
                $tmp875 = self;
                $returnValue855 = $tmp875;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp875));
                $tmp853 = 3;
                goto $l851;
                $l876:;
                return $returnValue855;
            }
            }
            org$pandalanguage$pandac$Type* $tmp880 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp879 = $tmp880;
            $tmp878 = $tmp879;
            $returnValue855 = $tmp878;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp878));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp879));
            $tmp853 = 4;
            goto $l851;
            $l881:;
            return $returnValue855;
        }
        }
        panda$core$Bit $tmp884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        bool $tmp883 = $tmp884.value;
        if (!$tmp883) goto $l885;
        panda$core$Bit $tmp886 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp883 = $tmp886.value;
        $l885:;
        panda$core$Bit $tmp887 = { $tmp883 };
        if ($tmp887.value) {
        {
            $tmp888 = p_other;
            $returnValue855 = $tmp888;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp888));
            $tmp853 = 5;
            goto $l851;
            $l889:;
            return $returnValue855;
        }
        }
        panda$core$Bit $tmp892 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp891 = $tmp892.value;
        if (!$tmp891) goto $l893;
        panda$core$Bit $tmp894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        $tmp891 = $tmp894.value;
        $l893:;
        panda$core$Bit $tmp895 = { $tmp891 };
        if ($tmp895.value) {
        {
            $tmp896 = self;
            $returnValue855 = $tmp896;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp896));
            $tmp853 = 6;
            goto $l851;
            $l897:;
            return $returnValue855;
        }
        }
        panda$core$Bit $tmp899 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp899.value) {
        {
            panda$core$Bit $tmp901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp900 = $tmp901.value;
            if ($tmp900) goto $l902;
            panda$core$Bit $tmp903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
            $tmp900 = $tmp903.value;
            $l902:;
            panda$core$Bit $tmp904 = { $tmp900 };
            if ($tmp904.value) {
            {
                $tmp905 = self;
                $returnValue855 = $tmp905;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp905));
                $tmp853 = 7;
                goto $l851;
                $l906:;
                return $returnValue855;
            }
            }
            panda$core$Bit $tmp908 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp908.value) {
            {
                panda$core$Bit $tmp910 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s909);
                if ($tmp910.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp913 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp912 = $tmp913;
                    $tmp911 = $tmp912;
                    $returnValue855 = $tmp911;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp911));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
                    $tmp853 = 8;
                    goto $l851;
                    $l914:;
                    return $returnValue855;
                }
                }
                org$pandalanguage$pandac$Type* $tmp918 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp917 = $tmp918;
                $tmp916 = $tmp917;
                $returnValue855 = $tmp916;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp916));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp917));
                $tmp853 = 9;
                goto $l851;
                $l919:;
                return $returnValue855;
            }
            }
        }
        }
        panda$core$Bit $tmp921 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp921.value) {
        {
            panda$core$Bit $tmp923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp922 = $tmp923.value;
            if ($tmp922) goto $l924;
            panda$core$Bit $tmp925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
            $tmp922 = $tmp925.value;
            $l924:;
            panda$core$Bit $tmp926 = { $tmp922 };
            if ($tmp926.value) {
            {
                $tmp927 = p_other;
                $returnValue855 = $tmp927;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp927));
                $tmp853 = 10;
                goto $l851;
                $l928:;
                return $returnValue855;
            }
            }
            panda$core$Bit $tmp930 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp930.value) {
            {
                panda$core$Bit $tmp932 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s931);
                if ($tmp932.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp935 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp934 = $tmp935;
                    $tmp933 = $tmp934;
                    $returnValue855 = $tmp933;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp933));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp934));
                    $tmp853 = 11;
                    goto $l851;
                    $l936:;
                    return $returnValue855;
                }
                }
                org$pandalanguage$pandac$Type* $tmp940 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp939 = $tmp940;
                $tmp938 = $tmp939;
                $returnValue855 = $tmp938;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp938));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp939));
                $tmp853 = 12;
                goto $l851;
                $l941:;
                return $returnValue855;
            }
            }
        }
        }
        panda$core$Bit $tmp943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp943.value) {
        {
            panda$core$Object* $tmp948 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp947 = $tmp948;
            org$pandalanguage$pandac$Type* $tmp949 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp947), p_compiler, p_other);
            $tmp946 = $tmp949;
            org$pandalanguage$pandac$Type* $tmp950 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp946);
            $tmp945 = $tmp950;
            $tmp944 = $tmp945;
            $returnValue855 = $tmp944;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp944));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp945));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp946));
            panda$core$Panda$unref$panda$core$Object($tmp947);
            $tmp853 = 13;
            goto $l851;
            $l951:;
            return $returnValue855;
        }
        }
        panda$core$Bit $tmp953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp953.value) {
        {
            panda$core$Object* $tmp958 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
            $tmp957 = $tmp958;
            org$pandalanguage$pandac$Type* $tmp959 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp957));
            $tmp956 = $tmp959;
            org$pandalanguage$pandac$Type* $tmp960 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp956);
            $tmp955 = $tmp960;
            $tmp954 = $tmp955;
            $returnValue855 = $tmp954;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp954));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp955));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp956));
            panda$core$Panda$unref$panda$core$Object($tmp957);
            $tmp853 = 14;
            goto $l851;
            $l961:;
            return $returnValue855;
        }
        }
        org$pandalanguage$pandac$Type* $tmp966 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp965 = $tmp966;
        $tmp964 = $tmp965;
        t1963 = $tmp964;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp964));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp965));
        org$pandalanguage$pandac$Type* $tmp970 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp969 = $tmp970;
        $tmp968 = $tmp969;
        t2967 = $tmp968;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp968));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
        panda$core$Bit $tmp972 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t1963);
        bool $tmp971 = $tmp972.value;
        if (!$tmp971) goto $l973;
        panda$core$Bit $tmp974 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t2967);
        $tmp971 = $tmp974.value;
        $l973:;
        panda$core$Bit $tmp975 = { $tmp971 };
        if ($tmp975.value) {
        {
            int $tmp978;
            {
                panda$collections$Set* $tmp982 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
                panda$collections$Set$init($tmp982);
                $tmp981 = $tmp982;
                $tmp980 = $tmp981;
                ancestors979 = $tmp980;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp980));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp981));
                $tmp984 = self;
                t983 = $tmp984;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp984));
                org$pandalanguage$pandac$ClassDecl* $tmp988 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1963);
                $tmp987 = $tmp988;
                $tmp986 = $tmp987;
                cl985 = $tmp986;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp986));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp987));
                $l989:;
                bool $tmp991 = ((panda$core$Bit) { cl985 != NULL }).value;
                if (!$tmp991) goto $l990;
                {
                    panda$collections$Set$add$panda$collections$Set$T(ancestors979, ((panda$collections$Key*) t983));
                    if (((panda$core$Bit) { cl985->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp992 = t983;
                            org$pandalanguage$pandac$Type* $tmp995 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t983, cl985->rawSuper);
                            $tmp994 = $tmp995;
                            $tmp993 = $tmp994;
                            t983 = $tmp993;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp993));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp994));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp992));
                        }
                        {
                            $tmp996 = cl985;
                            org$pandalanguage$pandac$ClassDecl* $tmp999 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t983);
                            $tmp998 = $tmp999;
                            $tmp997 = $tmp998;
                            cl985 = $tmp997;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp997));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp998));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp996));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1000 = cl985;
                            $tmp1001 = NULL;
                            cl985 = $tmp1001;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1001));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1000));
                        }
                    }
                    }
                }
                goto $l989;
                $l990:;
                {
                    $tmp1002 = t983;
                    $tmp1003 = p_other;
                    t983 = $tmp1003;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1003));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1002));
                }
                {
                    $tmp1004 = cl985;
                    org$pandalanguage$pandac$ClassDecl* $tmp1007 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t2967);
                    $tmp1006 = $tmp1007;
                    $tmp1005 = $tmp1006;
                    cl985 = $tmp1005;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1005));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1006));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1004));
                }
                $l1008:;
                bool $tmp1010 = ((panda$core$Bit) { cl985 != NULL }).value;
                if (!$tmp1010) goto $l1009;
                {
                    panda$core$Bit $tmp1011 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors979, ((panda$collections$Key*) t983));
                    if ($tmp1011.value) {
                    {
                        $tmp1012 = t983;
                        $returnValue855 = $tmp1012;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1012));
                        $tmp978 = 0;
                        goto $l976;
                        $l1013:;
                        $tmp853 = 15;
                        goto $l851;
                        $l1014:;
                        return $returnValue855;
                    }
                    }
                    if (((panda$core$Bit) { cl985->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1016 = t983;
                            org$pandalanguage$pandac$Type* $tmp1019 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t983, cl985->rawSuper);
                            $tmp1018 = $tmp1019;
                            $tmp1017 = $tmp1018;
                            t983 = $tmp1017;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1017));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1018));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1016));
                        }
                        {
                            $tmp1020 = cl985;
                            org$pandalanguage$pandac$ClassDecl* $tmp1023 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t983);
                            $tmp1022 = $tmp1023;
                            $tmp1021 = $tmp1022;
                            cl985 = $tmp1021;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1021));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1022));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1020));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1024 = cl985;
                            $tmp1025 = NULL;
                            cl985 = $tmp1025;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1025));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1024));
                        }
                    }
                    }
                }
                goto $l1008;
                $l1009:;
            }
            $tmp978 = -1;
            goto $l976;
            $l976:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors979));
            ancestors979 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t983));
            t983 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl985));
            cl985 = NULL;
            switch ($tmp978) {
                case 0: goto $l1013;
                case -1: goto $l1026;
            }
            $l1026:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1029 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp1028 = $tmp1029;
        $tmp1027 = $tmp1028;
        $returnValue855 = $tmp1027;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1027));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1028));
        $tmp853 = 16;
        goto $l851;
        $l1030:;
        return $returnValue855;
    }
    $l851:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1963));
    t1963 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2967));
    t2967 = NULL;
    switch ($tmp853) {
        case 14: goto $l961;
        case 6: goto $l897;
        case 8: goto $l914;
        case 12: goto $l941;
        case 2: goto $l869;
        case 7: goto $l906;
        case 10: goto $l928;
        case 16: goto $l1030;
        case 11: goto $l936;
        case 4: goto $l881;
        case 13: goto $l951;
        case 15: goto $l1014;
        case 3: goto $l876;
        case 5: goto $l889;
        case 9: goto $l919;
        case 1: goto $l864;
        case 0: goto $l857;
    }
    $l1032:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* $returnValue1035;
    org$pandalanguage$pandac$Type* $tmp1036;
    org$pandalanguage$pandac$Type$Kind $match$570_91038;
    org$pandalanguage$pandac$Type* found1043 = NULL;
    org$pandalanguage$pandac$Type* $tmp1044;
    panda$core$Object* $tmp1045;
    org$pandalanguage$pandac$Type* $tmp1047;
    org$pandalanguage$pandac$Type* $tmp1050;
    org$pandalanguage$pandac$Type* base1058 = NULL;
    org$pandalanguage$pandac$Type* $tmp1059;
    org$pandalanguage$pandac$Type* $tmp1060;
    panda$core$Object* $tmp1061;
    panda$collections$Array* remappedArgs1064 = NULL;
    panda$collections$Array* $tmp1065;
    panda$collections$Array* $tmp1066;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1068;
    org$pandalanguage$pandac$Type* $tmp1083;
    panda$core$Object* $tmp1084;
    org$pandalanguage$pandac$Type* $tmp1093;
    org$pandalanguage$pandac$Type* $tmp1094;
    org$pandalanguage$pandac$Type* $tmp1100;
    org$pandalanguage$pandac$Type* $tmp1101;
    org$pandalanguage$pandac$Type* $tmp1102;
    panda$core$Object* $tmp1103;
    panda$collections$Array* remapped1116 = NULL;
    panda$collections$Array* $tmp1117;
    panda$collections$Array* $tmp1118;
    panda$core$MutableString* name1120 = NULL;
    panda$core$MutableString* $tmp1121;
    panda$core$MutableString* $tmp1122;
    panda$core$String* separator1125 = NULL;
    panda$core$String* $tmp1126;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1130;
    org$pandalanguage$pandac$Type* child1149 = NULL;
    org$pandalanguage$pandac$Type* $tmp1150;
    org$pandalanguage$pandac$Type* $tmp1151;
    panda$core$Object* $tmp1152;
    panda$core$String* $tmp1155;
    panda$core$String* $tmp1156;
    panda$core$Object* $tmp1168;
    org$pandalanguage$pandac$Type* $tmp1172;
    org$pandalanguage$pandac$Type* child1178 = NULL;
    org$pandalanguage$pandac$Type* $tmp1179;
    org$pandalanguage$pandac$Type* $tmp1180;
    panda$core$Object* $tmp1181;
    org$pandalanguage$pandac$Type* $tmp1187;
    panda$core$Char8 $tmp1189;
    org$pandalanguage$pandac$Type* $tmp1190;
    org$pandalanguage$pandac$Type* $tmp1191;
    panda$core$String* $tmp1193;
    org$pandalanguage$pandac$Type* $tmp1198;
    panda$core$Int64 $tmp1033 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp1034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1033, ((panda$core$Int64) { 0 }));
    if ($tmp1034.value) {
    {
        $tmp1036 = self;
        $returnValue1035 = $tmp1036;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1036));
        return $returnValue1035;
    }
    }
    {
        $match$570_91038 = self->typeKind;
        panda$core$Bit $tmp1039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$570_91038.$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1039.value) {
        {
            int $tmp1042;
            {
                panda$core$Object* $tmp1046 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                $tmp1045 = $tmp1046;
                $tmp1044 = ((org$pandalanguage$pandac$Type*) $tmp1045);
                found1043 = $tmp1044;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1044));
                panda$core$Panda$unref$panda$core$Object($tmp1045);
                if (((panda$core$Bit) { found1043 != NULL }).value) {
                {
                    $tmp1047 = found1043;
                    $returnValue1035 = $tmp1047;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1047));
                    $tmp1042 = 0;
                    goto $l1040;
                    $l1048:;
                    return $returnValue1035;
                }
                }
                $tmp1050 = self;
                $returnValue1035 = $tmp1050;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1050));
                $tmp1042 = 1;
                goto $l1040;
                $l1051:;
                return $returnValue1035;
            }
            $l1040:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found1043));
            found1043 = NULL;
            switch ($tmp1042) {
                case 1: goto $l1051;
                case 0: goto $l1048;
            }
            $l1053:;
        }
        }
        else {
        panda$core$Bit $tmp1054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$570_91038.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1054.value) {
        {
            int $tmp1057;
            {
                panda$core$Object* $tmp1062 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
                $tmp1061 = $tmp1062;
                org$pandalanguage$pandac$Type* $tmp1063 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1061), p_types);
                $tmp1060 = $tmp1063;
                $tmp1059 = $tmp1060;
                base1058 = $tmp1059;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1059));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1060));
                panda$core$Panda$unref$panda$core$Object($tmp1061);
                panda$collections$Array* $tmp1067 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1067);
                $tmp1066 = $tmp1067;
                $tmp1065 = $tmp1066;
                remappedArgs1064 = $tmp1065;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1065));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1066));
                panda$core$Int64 $tmp1069 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1068, ((panda$core$Int64) { 1 }), $tmp1069, ((panda$core$Bit) { false }));
                int64_t $tmp1071 = $tmp1068.min.value;
                panda$core$Int64 i1070 = { $tmp1071 };
                int64_t $tmp1073 = $tmp1068.max.value;
                bool $tmp1074 = $tmp1068.inclusive.value;
                if ($tmp1074) goto $l1081; else goto $l1082;
                $l1081:;
                if ($tmp1071 <= $tmp1073) goto $l1075; else goto $l1077;
                $l1082:;
                if ($tmp1071 < $tmp1073) goto $l1075; else goto $l1077;
                $l1075:;
                {
                    panda$core$Object* $tmp1085 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1070);
                    $tmp1084 = $tmp1085;
                    org$pandalanguage$pandac$Type* $tmp1086 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1084), p_types);
                    $tmp1083 = $tmp1086;
                    panda$collections$Array$add$panda$collections$Array$T(remappedArgs1064, ((panda$core$Object*) $tmp1083));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1083));
                    panda$core$Panda$unref$panda$core$Object($tmp1084);
                }
                $l1078:;
                int64_t $tmp1088 = $tmp1073 - i1070.value;
                if ($tmp1074) goto $l1089; else goto $l1090;
                $l1089:;
                if ((uint64_t) $tmp1088 >= 1) goto $l1087; else goto $l1077;
                $l1090:;
                if ((uint64_t) $tmp1088 > 1) goto $l1087; else goto $l1077;
                $l1087:;
                i1070.value += 1;
                goto $l1075;
                $l1077:;
                org$pandalanguage$pandac$Type* $tmp1095 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base1058, ((panda$collections$ListView*) remappedArgs1064));
                $tmp1094 = $tmp1095;
                $tmp1093 = $tmp1094;
                $returnValue1035 = $tmp1093;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1093));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1094));
                $tmp1057 = 0;
                goto $l1055;
                $l1096:;
                return $returnValue1035;
            }
            $l1055:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1058));
            base1058 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remappedArgs1064));
            remappedArgs1064 = NULL;
            switch ($tmp1057) {
                case 0: goto $l1096;
            }
            $l1098:;
        }
        }
        else {
        panda$core$Bit $tmp1099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$570_91038.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1099.value) {
        {
            panda$core$Object* $tmp1104 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1103 = $tmp1104;
            org$pandalanguage$pandac$Type* $tmp1105 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1103), p_types);
            $tmp1102 = $tmp1105;
            org$pandalanguage$pandac$Type* $tmp1106 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1102);
            $tmp1101 = $tmp1106;
            $tmp1100 = $tmp1101;
            $returnValue1035 = $tmp1100;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1100));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1101));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1102));
            panda$core$Panda$unref$panda$core$Object($tmp1103);
            return $returnValue1035;
        }
        }
        else {
        panda$core$Bit $tmp1109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$570_91038.$rawValue, ((panda$core$Int64) { 15 }));
        bool $tmp1108 = $tmp1109.value;
        if ($tmp1108) goto $l1110;
        panda$core$Bit $tmp1111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$570_91038.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp1108 = $tmp1111.value;
        $l1110:;
        panda$core$Bit $tmp1112 = { $tmp1108 };
        if ($tmp1112.value) {
        {
            int $tmp1115;
            {
                panda$collections$Array* $tmp1119 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1119);
                $tmp1118 = $tmp1119;
                $tmp1117 = $tmp1118;
                remapped1116 = $tmp1117;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1117));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1118));
                panda$core$MutableString* $tmp1123 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1123, &$s1124);
                $tmp1122 = $tmp1123;
                $tmp1121 = $tmp1122;
                name1120 = $tmp1121;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1121));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1122));
                $tmp1126 = &$s1127;
                separator1125 = $tmp1126;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1126));
                panda$core$Int64 $tmp1128 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Bit $tmp1129 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1128, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1129.value);
                panda$core$Int64 $tmp1131 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1132 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1131, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1130, ((panda$core$Int64) { 0 }), $tmp1132, ((panda$core$Bit) { false }));
                int64_t $tmp1134 = $tmp1130.min.value;
                panda$core$Int64 i1133 = { $tmp1134 };
                int64_t $tmp1136 = $tmp1130.max.value;
                bool $tmp1137 = $tmp1130.inclusive.value;
                if ($tmp1137) goto $l1144; else goto $l1145;
                $l1144:;
                if ($tmp1134 <= $tmp1136) goto $l1138; else goto $l1140;
                $l1145:;
                if ($tmp1134 < $tmp1136) goto $l1138; else goto $l1140;
                $l1138:;
                {
                    int $tmp1148;
                    {
                        panda$core$Object* $tmp1153 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1133);
                        $tmp1152 = $tmp1153;
                        org$pandalanguage$pandac$Type* $tmp1154 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1152), p_types);
                        $tmp1151 = $tmp1154;
                        $tmp1150 = $tmp1151;
                        child1149 = $tmp1150;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1150));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1151));
                        panda$core$Panda$unref$panda$core$Object($tmp1152);
                        panda$core$MutableString$append$panda$core$String(name1120, separator1125);
                        panda$core$MutableString$append$panda$core$String(name1120, ((org$pandalanguage$pandac$Symbol*) child1149)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1116, ((panda$core$Object*) child1149));
                        {
                            $tmp1155 = separator1125;
                            $tmp1156 = &$s1157;
                            separator1125 = $tmp1156;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1156));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1155));
                        }
                    }
                    $tmp1148 = -1;
                    goto $l1146;
                    $l1146:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1149));
                    child1149 = NULL;
                    switch ($tmp1148) {
                        case -1: goto $l1158;
                    }
                    $l1158:;
                }
                $l1141:;
                int64_t $tmp1160 = $tmp1136 - i1133.value;
                if ($tmp1137) goto $l1161; else goto $l1162;
                $l1161:;
                if ((uint64_t) $tmp1160 >= 1) goto $l1159; else goto $l1140;
                $l1162:;
                if ((uint64_t) $tmp1160 > 1) goto $l1159; else goto $l1140;
                $l1159:;
                i1133.value += 1;
                goto $l1138;
                $l1140:;
                panda$core$Bit $tmp1165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 14 }));
                if ($tmp1165.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name1120, &$s1166);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(name1120, &$s1167);
                }
                }
                panda$core$Int64 $tmp1169 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1170 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1169, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1171 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1170);
                $tmp1168 = $tmp1171;
                org$pandalanguage$pandac$Type* $tmp1173 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1172 = $tmp1173;
                panda$core$Bit $tmp1174 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1168), $tmp1172);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1172));
                panda$core$Panda$unref$panda$core$Object($tmp1168);
                if ($tmp1174.value) {
                {
                    int $tmp1177;
                    {
                        panda$core$Int64 $tmp1182 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                        panda$core$Int64 $tmp1183 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1182, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1184 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1183);
                        $tmp1181 = $tmp1184;
                        org$pandalanguage$pandac$Type* $tmp1185 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1181), p_types);
                        $tmp1180 = $tmp1185;
                        $tmp1179 = $tmp1180;
                        child1178 = $tmp1179;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1179));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1180));
                        panda$core$Panda$unref$panda$core$Object($tmp1181);
                        panda$core$MutableString$append$panda$core$String(name1120, ((org$pandalanguage$pandac$Symbol*) child1178)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1116, ((panda$core$Object*) child1178));
                    }
                    $tmp1177 = -1;
                    goto $l1175;
                    $l1175:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1178));
                    child1178 = NULL;
                    switch ($tmp1177) {
                        case -1: goto $l1186;
                    }
                    $l1186:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1188 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                    $tmp1187 = $tmp1188;
                    panda$collections$Array$add$panda$collections$Array$T(remapped1116, ((panda$core$Object*) $tmp1187));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1187));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1189, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(name1120, $tmp1189);
                org$pandalanguage$pandac$Type* $tmp1192 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp1194 = panda$core$MutableString$finish$R$panda$core$String(name1120);
                $tmp1193 = $tmp1194;
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1192, $tmp1193, self->typeKind, self->position, ((panda$collections$ListView*) remapped1116), self->resolved);
                $tmp1191 = $tmp1192;
                $tmp1190 = $tmp1191;
                $returnValue1035 = $tmp1190;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1190));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1191));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1193));
                $tmp1115 = 0;
                goto $l1113;
                $l1195:;
                return $returnValue1035;
            }
            $l1113:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped1116));
            remapped1116 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1120));
            name1120 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1125));
            separator1125 = NULL;
            switch ($tmp1115) {
                case 0: goto $l1195;
            }
            $l1197:;
        }
        }
        else {
        {
            $tmp1198 = self;
            $returnValue1035 = $tmp1198;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1198));
            return $returnValue1035;
        }
        }
        }
        }
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue1200;
    panda$core$Int64 $tmp1201 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $returnValue1200 = $tmp1201;
    return $returnValue1200;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $returnValue1203;
    panda$core$String* $tmp1204;
    $tmp1204 = self->name;
    $returnValue1203 = $tmp1204;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1204));
    return $returnValue1203;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1208;
    {
    }
    $tmp1208 = -1;
    goto $l1206;
    $l1206:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1208) {
        case -1: goto $l1209;
    }
    $l1209:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

