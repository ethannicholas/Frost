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
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };

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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children578 = NULL;
    panda$collections$Array* $tmp579;
    panda$collections$Array* $tmp580;
    org$pandalanguage$pandac$Type* $tmp582;
    org$pandalanguage$pandac$Type$Kind $tmp585;
    org$pandalanguage$pandac$Position $tmp586;
    org$pandalanguage$pandac$Type* $returnValue587;
    org$pandalanguage$pandac$Type* $tmp588;
    org$pandalanguage$pandac$Type* $tmp589;
    panda$core$String* $tmp591;
    panda$core$String* $tmp592;
    panda$core$String* $tmp593;
    panda$core$String* $tmp594;
    org$pandalanguage$pandac$Type$Kind $tmp602;
    int $tmp577;
    {
        panda$collections$Array* $tmp581 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp581);
        $tmp580 = $tmp581;
        $tmp579 = $tmp580;
        children578 = $tmp579;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp579));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
        org$pandalanguage$pandac$Type* $tmp583 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp585, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp586);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp583, &$s584, $tmp585, $tmp586, ((panda$core$Bit) { true }));
        $tmp582 = $tmp583;
        panda$collections$Array$add$panda$collections$Array$T(children578, ((panda$core$Object*) $tmp582));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
        panda$collections$Array$add$panda$collections$Array$T(children578, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp590 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp596 = panda$core$String$convert$R$panda$core$String(&$s595);
        $tmp594 = $tmp596;
        panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp594, &$s597);
        $tmp593 = $tmp598;
        panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp593, ((panda$core$Object*) p_t));
        $tmp592 = $tmp599;
        panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp592, &$s600);
        $tmp591 = $tmp601;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp602, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp590, $tmp591, $tmp602, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children578), p_t->resolved);
        $tmp589 = $tmp590;
        $tmp588 = $tmp589;
        $returnValue587 = $tmp588;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp588));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp589));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp591));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
        $tmp577 = 0;
        goto $l575;
        $l603:;
        return $returnValue587;
    }
    $l575:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children578));
    children578 = NULL;
    switch ($tmp577) {
        case 0: goto $l603;
    }
    $l605:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children609 = NULL;
    panda$collections$Array* $tmp610;
    panda$collections$Array* $tmp611;
    org$pandalanguage$pandac$Type* $tmp613;
    org$pandalanguage$pandac$Type$Kind $tmp616;
    org$pandalanguage$pandac$Position $tmp617;
    org$pandalanguage$pandac$Type* $returnValue618;
    org$pandalanguage$pandac$Type* $tmp619;
    org$pandalanguage$pandac$Type* $tmp620;
    panda$core$String* $tmp622;
    panda$core$String* $tmp623;
    panda$core$String* $tmp624;
    panda$core$String* $tmp625;
    org$pandalanguage$pandac$Type$Kind $tmp633;
    int $tmp608;
    {
        panda$collections$Array* $tmp612 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp612);
        $tmp611 = $tmp612;
        $tmp610 = $tmp611;
        children609 = $tmp610;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp610));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp611));
        org$pandalanguage$pandac$Type* $tmp614 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp616, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp617);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp614, &$s615, $tmp616, $tmp617, ((panda$core$Bit) { true }));
        $tmp613 = $tmp614;
        panda$collections$Array$add$panda$collections$Array$T(children609, ((panda$core$Object*) $tmp613));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp613));
        panda$collections$Array$add$panda$collections$Array$T(children609, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp621 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp627 = panda$core$String$convert$R$panda$core$String(&$s626);
        $tmp625 = $tmp627;
        panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp625, &$s628);
        $tmp624 = $tmp629;
        panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp624, ((panda$core$Object*) p_t));
        $tmp623 = $tmp630;
        panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp623, &$s631);
        $tmp622 = $tmp632;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp633, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp621, $tmp622, $tmp633, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children609), p_t->resolved);
        $tmp620 = $tmp621;
        $tmp619 = $tmp620;
        $returnValue618 = $tmp619;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp619));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp622));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
        $tmp608 = 0;
        goto $l606;
        $l634:;
        return $returnValue618;
    }
    $l606:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children609));
    children609 = NULL;
    switch ($tmp608) {
        case 0: goto $l634;
    }
    $l636:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children640 = NULL;
    panda$collections$Array* $tmp641;
    panda$collections$Array* $tmp642;
    org$pandalanguage$pandac$Type* $tmp644;
    org$pandalanguage$pandac$Type$Kind $tmp647;
    org$pandalanguage$pandac$Position $tmp648;
    org$pandalanguage$pandac$Type* $tmp649;
    org$pandalanguage$pandac$Type* $tmp652;
    org$pandalanguage$pandac$Type* $tmp654;
    org$pandalanguage$pandac$Type* $tmp657;
    org$pandalanguage$pandac$Type* $tmp659;
    org$pandalanguage$pandac$Type* $tmp662;
    org$pandalanguage$pandac$Type* $tmp664;
    org$pandalanguage$pandac$Type* $returnValue666;
    org$pandalanguage$pandac$Type* $tmp667;
    org$pandalanguage$pandac$Type* $tmp668;
    panda$core$String* $tmp670;
    panda$core$String* $tmp671;
    panda$core$String* $tmp672;
    panda$core$String* $tmp673;
    panda$core$String* $tmp674;
    panda$core$String* $tmp675;
    org$pandalanguage$pandac$Type* $tmp683;
    org$pandalanguage$pandac$Type$Kind $tmp688;
    int $tmp639;
    {
        panda$collections$Array* $tmp643 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp643);
        $tmp642 = $tmp643;
        $tmp641 = $tmp642;
        children640 = $tmp641;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp641));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
        org$pandalanguage$pandac$Type* $tmp645 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp647, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp648);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp645, &$s646, $tmp647, $tmp648, ((panda$core$Bit) { true }));
        $tmp644 = $tmp645;
        panda$collections$Array$add$panda$collections$Array$T(children640, ((panda$core$Object*) $tmp644));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
        panda$collections$Array$add$panda$collections$Array$T(children640, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp650 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp649 = $tmp650;
        panda$core$Bit $tmp651 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp649);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp649));
        if ($tmp651.value) {
        {
            org$pandalanguage$pandac$Type* $tmp653 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp652 = $tmp653;
            panda$collections$Array$add$panda$collections$Array$T(children640, ((panda$core$Object*) $tmp652));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp652));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp655 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp654 = $tmp655;
        panda$core$Bit $tmp656 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp654);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp654));
        if ($tmp656.value) {
        {
            org$pandalanguage$pandac$Type* $tmp658 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp657 = $tmp658;
            panda$collections$Array$add$panda$collections$Array$T(children640, ((panda$core$Object*) $tmp657));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp657));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp660 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp659 = $tmp660;
        panda$core$Bit $tmp661 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp659);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp659));
        if ($tmp661.value) {
        {
            org$pandalanguage$pandac$Type* $tmp663 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp662 = $tmp663;
            panda$collections$Array$add$panda$collections$Array$T(children640, ((panda$core$Object*) $tmp662));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp662));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp665 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp664 = $tmp665;
            panda$collections$Array$add$panda$collections$Array$T(children640, ((panda$core$Object*) $tmp664));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp664));
        }
        }
        }
        }
        org$pandalanguage$pandac$Type* $tmp669 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp677 = panda$core$String$convert$R$panda$core$String(&$s676);
        $tmp675 = $tmp677;
        panda$core$String* $tmp679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp675, &$s678);
        $tmp674 = $tmp679;
        panda$core$String* $tmp680 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp674, ((panda$core$Object*) p_t));
        $tmp673 = $tmp680;
        panda$core$String* $tmp682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp673, &$s681);
        $tmp672 = $tmp682;
        org$pandalanguage$pandac$Type* $tmp684 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
        $tmp683 = $tmp684;
        panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp672, ((panda$core$Object*) $tmp683));
        $tmp671 = $tmp685;
        panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp671, &$s686);
        $tmp670 = $tmp687;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp688, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp669, $tmp670, $tmp688, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children640), p_t->resolved);
        $tmp668 = $tmp669;
        $tmp667 = $tmp668;
        $returnValue666 = $tmp667;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp667));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp668));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp670));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp683));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp673));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp674));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp675));
        $tmp639 = 0;
        goto $l637;
        $l689:;
        return $returnValue666;
    }
    $l637:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children640));
    children640 = NULL;
    switch ($tmp639) {
        case 0: goto $l689;
    }
    $l691:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue692;
    org$pandalanguage$pandac$Type* $tmp693;
    org$pandalanguage$pandac$Type* $tmp694;
    org$pandalanguage$pandac$Type$Kind $tmp697;
    org$pandalanguage$pandac$Position $tmp698;
    org$pandalanguage$pandac$Type* $tmp695 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp697, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Position$init(&$tmp698);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp695, &$s696, $tmp697, $tmp698, ((panda$core$Bit) { true }));
    $tmp694 = $tmp695;
    $tmp693 = $tmp694;
    $returnValue692 = $tmp693;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp693));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
    return $returnValue692;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue700;
    org$pandalanguage$pandac$Type* $tmp701;
    org$pandalanguage$pandac$Type* $tmp702;
    org$pandalanguage$pandac$Type$Kind $tmp705;
    org$pandalanguage$pandac$Position $tmp706;
    org$pandalanguage$pandac$Type* $tmp703 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp705, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Position$init(&$tmp706);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp703, &$s704, $tmp705, $tmp706, ((panda$core$Bit) { true }));
    $tmp702 = $tmp703;
    $tmp701 = $tmp702;
    $returnValue700 = $tmp701;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp701));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp702));
    return $returnValue700;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue708;
    panda$core$Bit $tmp714 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s713);
    bool $tmp712 = $tmp714.value;
    if ($tmp712) goto $l715;
    panda$core$Bit $tmp717 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s716);
    $tmp712 = $tmp717.value;
    $l715:;
    panda$core$Bit $tmp718 = { $tmp712 };
    bool $tmp711 = $tmp718.value;
    if ($tmp711) goto $l719;
    panda$core$Bit $tmp721 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s720);
    $tmp711 = $tmp721.value;
    $l719:;
    panda$core$Bit $tmp722 = { $tmp711 };
    bool $tmp710 = $tmp722.value;
    if ($tmp710) goto $l723;
    panda$core$Bit $tmp724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
    $tmp710 = $tmp724.value;
    $l723:;
    panda$core$Bit $tmp725 = { $tmp710 };
    bool $tmp709 = $tmp725.value;
    if ($tmp709) goto $l726;
    panda$core$Bit $tmp727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
    $tmp709 = $tmp727.value;
    $l726:;
    panda$core$Bit $tmp728 = { $tmp709 };
    $returnValue708 = $tmp728;
    return $returnValue708;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue730;
    panda$core$Bit $tmp734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp733 = $tmp734.value;
    if ($tmp733) goto $l735;
    panda$core$Bit $tmp736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 3 }));
    $tmp733 = $tmp736.value;
    $l735:;
    panda$core$Bit $tmp737 = { $tmp733 };
    bool $tmp732 = $tmp737.value;
    if ($tmp732) goto $l738;
    panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 10 }));
    $tmp732 = $tmp739.value;
    $l738:;
    panda$core$Bit $tmp740 = { $tmp732 };
    bool $tmp731 = $tmp740.value;
    if ($tmp731) goto $l741;
    panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
    $tmp731 = $tmp742.value;
    $l741:;
    panda$core$Bit $tmp743 = { $tmp731 };
    $returnValue730 = $tmp743;
    return $returnValue730;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue745;
    panda$core$Bit $tmp747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
    bool $tmp746 = $tmp747.value;
    if ($tmp746) goto $l748;
    panda$core$Bit $tmp750 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s749);
    $tmp746 = $tmp750.value;
    $l748:;
    panda$core$Bit $tmp751 = { $tmp746 };
    $returnValue745 = $tmp751;
    return $returnValue745;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue753;
    panda$core$Bit $tmp755 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s754);
    $returnValue753 = $tmp755;
    return $returnValue753;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue757;
    panda$core$Bit $tmp759 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp758 = $tmp759.value;
    if ($tmp758) goto $l760;
    panda$core$Bit $tmp761 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp758 = $tmp761.value;
    $l760:;
    panda$core$Bit $tmp762 = { $tmp758 };
    $returnValue757 = $tmp762;
    return $returnValue757;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$426_9764;
    panda$core$Bit $returnValue778;
    {
        $match$426_9764 = self->typeKind;
        panda$core$Bit $tmp768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$426_9764.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp767 = $tmp768.value;
        if ($tmp767) goto $l769;
        panda$core$Bit $tmp770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$426_9764.$rawValue, ((panda$core$Int64) { 1 }));
        $tmp767 = $tmp770.value;
        $l769:;
        panda$core$Bit $tmp771 = { $tmp767 };
        bool $tmp766 = $tmp771.value;
        if ($tmp766) goto $l772;
        panda$core$Bit $tmp773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$426_9764.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp766 = $tmp773.value;
        $l772:;
        panda$core$Bit $tmp774 = { $tmp766 };
        bool $tmp765 = $tmp774.value;
        if ($tmp765) goto $l775;
        panda$core$Bit $tmp776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$426_9764.$rawValue, ((panda$core$Int64) { 12 }));
        $tmp765 = $tmp776.value;
        $l775:;
        panda$core$Bit $tmp777 = { $tmp765 };
        if ($tmp777.value) {
        {
            $returnValue778 = ((panda$core$Bit) { true });
            return $returnValue778;
        }
        }
        else {
        {
            $returnValue778 = ((panda$core$Bit) { false });
            return $returnValue778;
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue781;
    panda$core$Bit $tmp783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 15 }));
    bool $tmp782 = $tmp783.value;
    if ($tmp782) goto $l784;
    panda$core$Bit $tmp785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 14 }));
    $tmp782 = $tmp785.value;
    $l784:;
    panda$core$Bit $tmp786 = { $tmp782 };
    $returnValue781 = $tmp786;
    return $returnValue781;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue788;
    panda$core$Bit $tmp790 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s789);
    $returnValue788 = $tmp790;
    return $returnValue788;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue793;
    panda$core$Object* $tmp794;
    panda$core$Object* $tmp801;
    panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp792.value) {
    {
        panda$core$Object* $tmp795 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp794 = $tmp795;
        panda$core$Bit $tmp796 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp794));
        $returnValue793 = $tmp796;
        panda$core$Panda$unref$panda$core$Object($tmp794);
        return $returnValue793;
    }
    }
    panda$core$Bit $tmp799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp798 = $tmp799.value;
    if (!$tmp798) goto $l800;
    panda$core$Object* $tmp802 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp801 = $tmp802;
    panda$core$Bit $tmp804 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp801))->name, &$s803);
    $tmp798 = $tmp804.value;
    panda$core$Panda$unref$panda$core$Object($tmp801);
    $l800:;
    panda$core$Bit $tmp805 = { $tmp798 };
    $returnValue793 = $tmp805;
    return $returnValue793;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue808;
    panda$core$Object* $tmp809;
    panda$core$Object* $tmp816;
    panda$core$Bit $tmp807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp807.value) {
    {
        panda$core$Object* $tmp810 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp809 = $tmp810;
        panda$core$Bit $tmp811 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp809));
        $returnValue808 = $tmp811;
        panda$core$Panda$unref$panda$core$Object($tmp809);
        return $returnValue808;
    }
    }
    panda$core$Bit $tmp814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp813 = $tmp814.value;
    if (!$tmp813) goto $l815;
    panda$core$Object* $tmp817 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp816 = $tmp817;
    panda$core$Bit $tmp819 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp816))->name, &$s818);
    $tmp813 = $tmp819.value;
    panda$core$Panda$unref$panda$core$Object($tmp816);
    $l815:;
    panda$core$Bit $tmp820 = { $tmp813 };
    $returnValue808 = $tmp820;
    return $returnValue808;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue826;
    org$pandalanguage$pandac$Type* $tmp827;
    panda$collections$Array* subtypes830 = NULL;
    panda$collections$Array* $tmp831;
    panda$collections$Array* $tmp832;
    org$pandalanguage$pandac$Type* $tmp834;
    org$pandalanguage$pandac$Type* $tmp835;
    panda$core$String* $tmp837;
    panda$core$String* $tmp838;
    org$pandalanguage$pandac$Type$Kind $tmp842;
    org$pandalanguage$pandac$Position $tmp843;
    int $tmp824;
    {
        panda$core$Bit $tmp825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp825.value) {
        {
            $tmp827 = self;
            $returnValue826 = $tmp827;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp827));
            $tmp824 = 0;
            goto $l822;
            $l828:;
            return $returnValue826;
        }
        }
        panda$collections$Array* $tmp833 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp833);
        $tmp832 = $tmp833;
        $tmp831 = $tmp832;
        subtypes830 = $tmp831;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp831));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp832));
        panda$collections$Array$add$panda$collections$Array$T(subtypes830, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp836 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp839 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp838 = $tmp839;
        panda$core$String* $tmp841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp838, &$s840);
        $tmp837 = $tmp841;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp842, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Position$init(&$tmp843);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp836, $tmp837, $tmp842, $tmp843, ((panda$collections$ListView*) subtypes830), ((panda$core$Bit) { true }));
        $tmp835 = $tmp836;
        $tmp834 = $tmp835;
        $returnValue826 = $tmp834;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp834));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp835));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp837));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp838));
        $tmp824 = 1;
        goto $l822;
        $l844:;
        return $returnValue826;
    }
    $l822:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes830));
    subtypes830 = NULL;
    switch ($tmp824) {
        case 1: goto $l844;
        case 0: goto $l828;
    }
    $l846:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue848;
    org$pandalanguage$pandac$Type* $tmp849;
    org$pandalanguage$pandac$Type* $tmp851;
    panda$core$Object* $tmp852;
    panda$core$Bit $tmp847 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp847.value) {
    {
        $tmp849 = self;
        $returnValue848 = $tmp849;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp849));
        return $returnValue848;
    }
    }
    panda$core$Object* $tmp853 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp852 = $tmp853;
    $tmp851 = ((org$pandalanguage$pandac$Type*) $tmp852);
    $returnValue848 = $tmp851;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp851));
    panda$core$Panda$unref$panda$core$Object($tmp852);
    return $returnValue848;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $returnValue859;
    org$pandalanguage$pandac$Type* $tmp860;
    org$pandalanguage$pandac$Type* $tmp863;
    org$pandalanguage$pandac$Type* $tmp867;
    org$pandalanguage$pandac$Type* $tmp870;
    org$pandalanguage$pandac$Type* $tmp871;
    org$pandalanguage$pandac$Type* $tmp875;
    org$pandalanguage$pandac$Type* $tmp879;
    org$pandalanguage$pandac$Type* $tmp882;
    org$pandalanguage$pandac$Type* $tmp883;
    org$pandalanguage$pandac$Type* $tmp892;
    org$pandalanguage$pandac$Type* $tmp900;
    org$pandalanguage$pandac$Type* $tmp909;
    org$pandalanguage$pandac$Type* $tmp915;
    org$pandalanguage$pandac$Type* $tmp916;
    org$pandalanguage$pandac$Type* $tmp920;
    org$pandalanguage$pandac$Type* $tmp921;
    org$pandalanguage$pandac$Type* $tmp931;
    org$pandalanguage$pandac$Type* $tmp937;
    org$pandalanguage$pandac$Type* $tmp938;
    org$pandalanguage$pandac$Type* $tmp942;
    org$pandalanguage$pandac$Type* $tmp943;
    org$pandalanguage$pandac$Type* $tmp948;
    org$pandalanguage$pandac$Type* $tmp949;
    org$pandalanguage$pandac$Type* $tmp950;
    panda$core$Object* $tmp951;
    org$pandalanguage$pandac$Type* $tmp958;
    org$pandalanguage$pandac$Type* $tmp959;
    org$pandalanguage$pandac$Type* $tmp960;
    panda$core$Object* $tmp961;
    org$pandalanguage$pandac$Type* t1967 = NULL;
    org$pandalanguage$pandac$Type* $tmp968;
    org$pandalanguage$pandac$Type* $tmp969;
    org$pandalanguage$pandac$Type* t2971 = NULL;
    org$pandalanguage$pandac$Type* $tmp972;
    org$pandalanguage$pandac$Type* $tmp973;
    panda$collections$Set* ancestors983 = NULL;
    panda$collections$Set* $tmp984;
    panda$collections$Set* $tmp985;
    org$pandalanguage$pandac$Type* t987 = NULL;
    org$pandalanguage$pandac$Type* $tmp988;
    org$pandalanguage$pandac$ClassDecl* cl989 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp990;
    org$pandalanguage$pandac$ClassDecl* $tmp991;
    org$pandalanguage$pandac$Type* $tmp996;
    org$pandalanguage$pandac$Type* $tmp997;
    org$pandalanguage$pandac$Type* $tmp998;
    org$pandalanguage$pandac$ClassDecl* $tmp1000;
    org$pandalanguage$pandac$ClassDecl* $tmp1001;
    org$pandalanguage$pandac$ClassDecl* $tmp1002;
    org$pandalanguage$pandac$ClassDecl* $tmp1004;
    org$pandalanguage$pandac$ClassDecl* $tmp1005;
    org$pandalanguage$pandac$Type* $tmp1006;
    org$pandalanguage$pandac$Type* $tmp1007;
    org$pandalanguage$pandac$ClassDecl* $tmp1008;
    org$pandalanguage$pandac$ClassDecl* $tmp1009;
    org$pandalanguage$pandac$ClassDecl* $tmp1010;
    org$pandalanguage$pandac$Type* $tmp1016;
    org$pandalanguage$pandac$Type* $tmp1020;
    org$pandalanguage$pandac$Type* $tmp1021;
    org$pandalanguage$pandac$Type* $tmp1022;
    org$pandalanguage$pandac$ClassDecl* $tmp1024;
    org$pandalanguage$pandac$ClassDecl* $tmp1025;
    org$pandalanguage$pandac$ClassDecl* $tmp1026;
    org$pandalanguage$pandac$ClassDecl* $tmp1028;
    org$pandalanguage$pandac$ClassDecl* $tmp1029;
    org$pandalanguage$pandac$Type* $tmp1031;
    org$pandalanguage$pandac$Type* $tmp1032;
    int $tmp857;
    {
        panda$core$Bit $tmp858 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp858.value) {
        {
            $tmp860 = self;
            $returnValue859 = $tmp860;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp860));
            $tmp857 = 0;
            goto $l855;
            $l861:;
            return $returnValue859;
        }
        }
        org$pandalanguage$pandac$Type* $tmp864 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp863 = $tmp864;
        panda$core$Bit $tmp865 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp863);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp863));
        if ($tmp865.value) {
        {
            panda$core$Bit $tmp866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp866.value) {
            {
                $tmp867 = p_other;
                $returnValue859 = $tmp867;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp867));
                $tmp857 = 1;
                goto $l855;
                $l868:;
                return $returnValue859;
            }
            }
            org$pandalanguage$pandac$Type* $tmp872 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp871 = $tmp872;
            $tmp870 = $tmp871;
            $returnValue859 = $tmp870;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp870));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
            $tmp857 = 2;
            goto $l855;
            $l873:;
            return $returnValue859;
        }
        }
        org$pandalanguage$pandac$Type* $tmp876 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp875 = $tmp876;
        panda$core$Bit $tmp877 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp875);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp875));
        if ($tmp877.value) {
        {
            panda$core$Bit $tmp878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp878.value) {
            {
                $tmp879 = self;
                $returnValue859 = $tmp879;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp879));
                $tmp857 = 3;
                goto $l855;
                $l880:;
                return $returnValue859;
            }
            }
            org$pandalanguage$pandac$Type* $tmp884 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp883 = $tmp884;
            $tmp882 = $tmp883;
            $returnValue859 = $tmp882;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp882));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp883));
            $tmp857 = 4;
            goto $l855;
            $l885:;
            return $returnValue859;
        }
        }
        panda$core$Bit $tmp888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        bool $tmp887 = $tmp888.value;
        if (!$tmp887) goto $l889;
        panda$core$Bit $tmp890 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp887 = $tmp890.value;
        $l889:;
        panda$core$Bit $tmp891 = { $tmp887 };
        if ($tmp891.value) {
        {
            $tmp892 = p_other;
            $returnValue859 = $tmp892;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp892));
            $tmp857 = 5;
            goto $l855;
            $l893:;
            return $returnValue859;
        }
        }
        panda$core$Bit $tmp896 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp895 = $tmp896.value;
        if (!$tmp895) goto $l897;
        panda$core$Bit $tmp898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        $tmp895 = $tmp898.value;
        $l897:;
        panda$core$Bit $tmp899 = { $tmp895 };
        if ($tmp899.value) {
        {
            $tmp900 = self;
            $returnValue859 = $tmp900;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp900));
            $tmp857 = 6;
            goto $l855;
            $l901:;
            return $returnValue859;
        }
        }
        panda$core$Bit $tmp903 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp903.value) {
        {
            panda$core$Bit $tmp905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp904 = $tmp905.value;
            if ($tmp904) goto $l906;
            panda$core$Bit $tmp907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
            $tmp904 = $tmp907.value;
            $l906:;
            panda$core$Bit $tmp908 = { $tmp904 };
            if ($tmp908.value) {
            {
                $tmp909 = self;
                $returnValue859 = $tmp909;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp909));
                $tmp857 = 7;
                goto $l855;
                $l910:;
                return $returnValue859;
            }
            }
            panda$core$Bit $tmp912 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp912.value) {
            {
                panda$core$Bit $tmp914 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s913);
                if ($tmp914.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp917 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp916 = $tmp917;
                    $tmp915 = $tmp916;
                    $returnValue859 = $tmp915;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp915));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
                    $tmp857 = 8;
                    goto $l855;
                    $l918:;
                    return $returnValue859;
                }
                }
                org$pandalanguage$pandac$Type* $tmp922 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp921 = $tmp922;
                $tmp920 = $tmp921;
                $returnValue859 = $tmp920;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp920));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp921));
                $tmp857 = 9;
                goto $l855;
                $l923:;
                return $returnValue859;
            }
            }
        }
        }
        panda$core$Bit $tmp925 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp925.value) {
        {
            panda$core$Bit $tmp927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp926 = $tmp927.value;
            if ($tmp926) goto $l928;
            panda$core$Bit $tmp929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
            $tmp926 = $tmp929.value;
            $l928:;
            panda$core$Bit $tmp930 = { $tmp926 };
            if ($tmp930.value) {
            {
                $tmp931 = p_other;
                $returnValue859 = $tmp931;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp931));
                $tmp857 = 10;
                goto $l855;
                $l932:;
                return $returnValue859;
            }
            }
            panda$core$Bit $tmp934 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp934.value) {
            {
                panda$core$Bit $tmp936 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s935);
                if ($tmp936.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp939 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp938 = $tmp939;
                    $tmp937 = $tmp938;
                    $returnValue859 = $tmp937;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp937));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp938));
                    $tmp857 = 11;
                    goto $l855;
                    $l940:;
                    return $returnValue859;
                }
                }
                org$pandalanguage$pandac$Type* $tmp944 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp943 = $tmp944;
                $tmp942 = $tmp943;
                $returnValue859 = $tmp942;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp942));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp943));
                $tmp857 = 12;
                goto $l855;
                $l945:;
                return $returnValue859;
            }
            }
        }
        }
        panda$core$Bit $tmp947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp947.value) {
        {
            panda$core$Object* $tmp952 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp951 = $tmp952;
            org$pandalanguage$pandac$Type* $tmp953 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp951), p_compiler, p_other);
            $tmp950 = $tmp953;
            org$pandalanguage$pandac$Type* $tmp954 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp950);
            $tmp949 = $tmp954;
            $tmp948 = $tmp949;
            $returnValue859 = $tmp948;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp948));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp949));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp950));
            panda$core$Panda$unref$panda$core$Object($tmp951);
            $tmp857 = 13;
            goto $l855;
            $l955:;
            return $returnValue859;
        }
        }
        panda$core$Bit $tmp957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp957.value) {
        {
            panda$core$Object* $tmp962 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
            $tmp961 = $tmp962;
            org$pandalanguage$pandac$Type* $tmp963 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp961));
            $tmp960 = $tmp963;
            org$pandalanguage$pandac$Type* $tmp964 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp960);
            $tmp959 = $tmp964;
            $tmp958 = $tmp959;
            $returnValue859 = $tmp958;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp958));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp959));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp960));
            panda$core$Panda$unref$panda$core$Object($tmp961);
            $tmp857 = 14;
            goto $l855;
            $l965:;
            return $returnValue859;
        }
        }
        org$pandalanguage$pandac$Type* $tmp970 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp969 = $tmp970;
        $tmp968 = $tmp969;
        t1967 = $tmp968;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp968));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
        org$pandalanguage$pandac$Type* $tmp974 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp973 = $tmp974;
        $tmp972 = $tmp973;
        t2971 = $tmp972;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp972));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp973));
        panda$core$Bit $tmp976 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t1967);
        bool $tmp975 = $tmp976.value;
        if (!$tmp975) goto $l977;
        panda$core$Bit $tmp978 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t2971);
        $tmp975 = $tmp978.value;
        $l977:;
        panda$core$Bit $tmp979 = { $tmp975 };
        if ($tmp979.value) {
        {
            int $tmp982;
            {
                panda$collections$Set* $tmp986 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
                panda$collections$Set$init($tmp986);
                $tmp985 = $tmp986;
                $tmp984 = $tmp985;
                ancestors983 = $tmp984;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp984));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp985));
                $tmp988 = self;
                t987 = $tmp988;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp988));
                org$pandalanguage$pandac$ClassDecl* $tmp992 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1967);
                $tmp991 = $tmp992;
                $tmp990 = $tmp991;
                cl989 = $tmp990;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp990));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp991));
                $l993:;
                bool $tmp995 = ((panda$core$Bit) { cl989 != NULL }).value;
                if (!$tmp995) goto $l994;
                {
                    panda$collections$Set$add$panda$collections$Set$T(ancestors983, ((panda$collections$Key*) t987));
                    if (((panda$core$Bit) { cl989->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp996 = t987;
                            org$pandalanguage$pandac$Type* $tmp999 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t987, cl989->rawSuper);
                            $tmp998 = $tmp999;
                            $tmp997 = $tmp998;
                            t987 = $tmp997;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp997));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp998));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp996));
                        }
                        {
                            $tmp1000 = cl989;
                            org$pandalanguage$pandac$ClassDecl* $tmp1003 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t987);
                            $tmp1002 = $tmp1003;
                            $tmp1001 = $tmp1002;
                            cl989 = $tmp1001;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1001));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1002));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1000));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1004 = cl989;
                            $tmp1005 = NULL;
                            cl989 = $tmp1005;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1005));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1004));
                        }
                    }
                    }
                }
                goto $l993;
                $l994:;
                {
                    $tmp1006 = t987;
                    $tmp1007 = p_other;
                    t987 = $tmp1007;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1007));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1006));
                }
                {
                    $tmp1008 = cl989;
                    org$pandalanguage$pandac$ClassDecl* $tmp1011 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t2971);
                    $tmp1010 = $tmp1011;
                    $tmp1009 = $tmp1010;
                    cl989 = $tmp1009;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1009));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1010));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1008));
                }
                $l1012:;
                bool $tmp1014 = ((panda$core$Bit) { cl989 != NULL }).value;
                if (!$tmp1014) goto $l1013;
                {
                    panda$core$Bit $tmp1015 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors983, ((panda$collections$Key*) t987));
                    if ($tmp1015.value) {
                    {
                        $tmp1016 = t987;
                        $returnValue859 = $tmp1016;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1016));
                        $tmp982 = 0;
                        goto $l980;
                        $l1017:;
                        $tmp857 = 15;
                        goto $l855;
                        $l1018:;
                        return $returnValue859;
                    }
                    }
                    if (((panda$core$Bit) { cl989->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1020 = t987;
                            org$pandalanguage$pandac$Type* $tmp1023 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t987, cl989->rawSuper);
                            $tmp1022 = $tmp1023;
                            $tmp1021 = $tmp1022;
                            t987 = $tmp1021;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1021));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1022));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1020));
                        }
                        {
                            $tmp1024 = cl989;
                            org$pandalanguage$pandac$ClassDecl* $tmp1027 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t987);
                            $tmp1026 = $tmp1027;
                            $tmp1025 = $tmp1026;
                            cl989 = $tmp1025;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1025));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1026));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1024));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1028 = cl989;
                            $tmp1029 = NULL;
                            cl989 = $tmp1029;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1029));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1028));
                        }
                    }
                    }
                }
                goto $l1012;
                $l1013:;
            }
            $tmp982 = -1;
            goto $l980;
            $l980:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors983));
            ancestors983 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t987));
            t987 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl989));
            cl989 = NULL;
            switch ($tmp982) {
                case -1: goto $l1030;
                case 0: goto $l1017;
            }
            $l1030:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1033 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp1032 = $tmp1033;
        $tmp1031 = $tmp1032;
        $returnValue859 = $tmp1031;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1031));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1032));
        $tmp857 = 16;
        goto $l855;
        $l1034:;
        return $returnValue859;
    }
    $l855:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1967));
    t1967 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2971));
    t2971 = NULL;
    switch ($tmp857) {
        case 1: goto $l868;
        case 7: goto $l910;
        case 16: goto $l1034;
        case 14: goto $l965;
        case 9: goto $l923;
        case 15: goto $l1018;
        case 10: goto $l932;
        case 11: goto $l940;
        case 12: goto $l945;
        case 3: goto $l880;
        case 4: goto $l885;
        case 13: goto $l955;
        case 0: goto $l861;
        case 2: goto $l873;
        case 5: goto $l893;
        case 8: goto $l918;
        case 6: goto $l901;
    }
    $l1036:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* $returnValue1039;
    org$pandalanguage$pandac$Type* $tmp1040;
    org$pandalanguage$pandac$Type$Kind $match$561_91042;
    org$pandalanguage$pandac$Type* found1047 = NULL;
    org$pandalanguage$pandac$Type* $tmp1048;
    panda$core$Object* $tmp1049;
    org$pandalanguage$pandac$Type* $tmp1051;
    org$pandalanguage$pandac$Type* $tmp1054;
    org$pandalanguage$pandac$Type* base1062 = NULL;
    org$pandalanguage$pandac$Type* $tmp1063;
    org$pandalanguage$pandac$Type* $tmp1064;
    panda$core$Object* $tmp1065;
    panda$collections$Array* remappedArgs1068 = NULL;
    panda$collections$Array* $tmp1069;
    panda$collections$Array* $tmp1070;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1072;
    org$pandalanguage$pandac$Type* $tmp1087;
    panda$core$Object* $tmp1088;
    org$pandalanguage$pandac$Type* $tmp1097;
    org$pandalanguage$pandac$Type* $tmp1098;
    org$pandalanguage$pandac$Type* $tmp1104;
    org$pandalanguage$pandac$Type* $tmp1105;
    org$pandalanguage$pandac$Type* $tmp1106;
    panda$core$Object* $tmp1107;
    panda$collections$Array* remapped1120 = NULL;
    panda$collections$Array* $tmp1121;
    panda$collections$Array* $tmp1122;
    panda$core$MutableString* name1124 = NULL;
    panda$core$MutableString* $tmp1125;
    panda$core$MutableString* $tmp1126;
    panda$core$String* separator1129 = NULL;
    panda$core$String* $tmp1130;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1134;
    org$pandalanguage$pandac$Type* child1153 = NULL;
    org$pandalanguage$pandac$Type* $tmp1154;
    org$pandalanguage$pandac$Type* $tmp1155;
    panda$core$Object* $tmp1156;
    panda$core$String* $tmp1159;
    panda$core$String* $tmp1160;
    panda$core$Object* $tmp1172;
    org$pandalanguage$pandac$Type* $tmp1176;
    org$pandalanguage$pandac$Type* child1182 = NULL;
    org$pandalanguage$pandac$Type* $tmp1183;
    org$pandalanguage$pandac$Type* $tmp1184;
    panda$core$Object* $tmp1185;
    org$pandalanguage$pandac$Type* $tmp1191;
    panda$core$Char8 $tmp1193;
    org$pandalanguage$pandac$Type* $tmp1194;
    org$pandalanguage$pandac$Type* $tmp1195;
    panda$core$String* $tmp1197;
    org$pandalanguage$pandac$Type* $tmp1202;
    panda$core$Int64 $tmp1037 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp1038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1037, ((panda$core$Int64) { 0 }));
    if ($tmp1038.value) {
    {
        $tmp1040 = self;
        $returnValue1039 = $tmp1040;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1040));
        return $returnValue1039;
    }
    }
    {
        $match$561_91042 = self->typeKind;
        panda$core$Bit $tmp1043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$561_91042.$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1043.value) {
        {
            int $tmp1046;
            {
                panda$core$Object* $tmp1050 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                $tmp1049 = $tmp1050;
                $tmp1048 = ((org$pandalanguage$pandac$Type*) $tmp1049);
                found1047 = $tmp1048;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1048));
                panda$core$Panda$unref$panda$core$Object($tmp1049);
                if (((panda$core$Bit) { found1047 != NULL }).value) {
                {
                    $tmp1051 = found1047;
                    $returnValue1039 = $tmp1051;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1051));
                    $tmp1046 = 0;
                    goto $l1044;
                    $l1052:;
                    return $returnValue1039;
                }
                }
                $tmp1054 = self;
                $returnValue1039 = $tmp1054;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1054));
                $tmp1046 = 1;
                goto $l1044;
                $l1055:;
                return $returnValue1039;
            }
            $l1044:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found1047));
            found1047 = NULL;
            switch ($tmp1046) {
                case 1: goto $l1055;
                case 0: goto $l1052;
            }
            $l1057:;
        }
        }
        else {
        panda$core$Bit $tmp1058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$561_91042.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1058.value) {
        {
            int $tmp1061;
            {
                panda$core$Object* $tmp1066 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
                $tmp1065 = $tmp1066;
                org$pandalanguage$pandac$Type* $tmp1067 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1065), p_types);
                $tmp1064 = $tmp1067;
                $tmp1063 = $tmp1064;
                base1062 = $tmp1063;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1063));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1064));
                panda$core$Panda$unref$panda$core$Object($tmp1065);
                panda$collections$Array* $tmp1071 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1071);
                $tmp1070 = $tmp1071;
                $tmp1069 = $tmp1070;
                remappedArgs1068 = $tmp1069;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1069));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1070));
                panda$core$Int64 $tmp1073 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1072, ((panda$core$Int64) { 1 }), $tmp1073, ((panda$core$Bit) { false }));
                int64_t $tmp1075 = $tmp1072.min.value;
                panda$core$Int64 i1074 = { $tmp1075 };
                int64_t $tmp1077 = $tmp1072.max.value;
                bool $tmp1078 = $tmp1072.inclusive.value;
                if ($tmp1078) goto $l1085; else goto $l1086;
                $l1085:;
                if ($tmp1075 <= $tmp1077) goto $l1079; else goto $l1081;
                $l1086:;
                if ($tmp1075 < $tmp1077) goto $l1079; else goto $l1081;
                $l1079:;
                {
                    panda$core$Object* $tmp1089 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1074);
                    $tmp1088 = $tmp1089;
                    org$pandalanguage$pandac$Type* $tmp1090 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1088), p_types);
                    $tmp1087 = $tmp1090;
                    panda$collections$Array$add$panda$collections$Array$T(remappedArgs1068, ((panda$core$Object*) $tmp1087));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1087));
                    panda$core$Panda$unref$panda$core$Object($tmp1088);
                }
                $l1082:;
                int64_t $tmp1092 = $tmp1077 - i1074.value;
                if ($tmp1078) goto $l1093; else goto $l1094;
                $l1093:;
                if ((uint64_t) $tmp1092 >= 1) goto $l1091; else goto $l1081;
                $l1094:;
                if ((uint64_t) $tmp1092 > 1) goto $l1091; else goto $l1081;
                $l1091:;
                i1074.value += 1;
                goto $l1079;
                $l1081:;
                org$pandalanguage$pandac$Type* $tmp1099 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base1062, ((panda$collections$ListView*) remappedArgs1068));
                $tmp1098 = $tmp1099;
                $tmp1097 = $tmp1098;
                $returnValue1039 = $tmp1097;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1097));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1098));
                $tmp1061 = 0;
                goto $l1059;
                $l1100:;
                return $returnValue1039;
            }
            $l1059:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1062));
            base1062 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remappedArgs1068));
            remappedArgs1068 = NULL;
            switch ($tmp1061) {
                case 0: goto $l1100;
            }
            $l1102:;
        }
        }
        else {
        panda$core$Bit $tmp1103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$561_91042.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1103.value) {
        {
            panda$core$Object* $tmp1108 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1107 = $tmp1108;
            org$pandalanguage$pandac$Type* $tmp1109 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1107), p_types);
            $tmp1106 = $tmp1109;
            org$pandalanguage$pandac$Type* $tmp1110 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1106);
            $tmp1105 = $tmp1110;
            $tmp1104 = $tmp1105;
            $returnValue1039 = $tmp1104;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1104));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1105));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1106));
            panda$core$Panda$unref$panda$core$Object($tmp1107);
            return $returnValue1039;
        }
        }
        else {
        panda$core$Bit $tmp1113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$561_91042.$rawValue, ((panda$core$Int64) { 15 }));
        bool $tmp1112 = $tmp1113.value;
        if ($tmp1112) goto $l1114;
        panda$core$Bit $tmp1115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$561_91042.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp1112 = $tmp1115.value;
        $l1114:;
        panda$core$Bit $tmp1116 = { $tmp1112 };
        if ($tmp1116.value) {
        {
            int $tmp1119;
            {
                panda$collections$Array* $tmp1123 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1123);
                $tmp1122 = $tmp1123;
                $tmp1121 = $tmp1122;
                remapped1120 = $tmp1121;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1121));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1122));
                panda$core$MutableString* $tmp1127 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1127, &$s1128);
                $tmp1126 = $tmp1127;
                $tmp1125 = $tmp1126;
                name1124 = $tmp1125;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1126));
                $tmp1130 = &$s1131;
                separator1129 = $tmp1130;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1130));
                panda$core$Int64 $tmp1132 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Bit $tmp1133 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1132, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1133.value);
                panda$core$Int64 $tmp1135 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1136 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1135, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1134, ((panda$core$Int64) { 0 }), $tmp1136, ((panda$core$Bit) { false }));
                int64_t $tmp1138 = $tmp1134.min.value;
                panda$core$Int64 i1137 = { $tmp1138 };
                int64_t $tmp1140 = $tmp1134.max.value;
                bool $tmp1141 = $tmp1134.inclusive.value;
                if ($tmp1141) goto $l1148; else goto $l1149;
                $l1148:;
                if ($tmp1138 <= $tmp1140) goto $l1142; else goto $l1144;
                $l1149:;
                if ($tmp1138 < $tmp1140) goto $l1142; else goto $l1144;
                $l1142:;
                {
                    int $tmp1152;
                    {
                        panda$core$Object* $tmp1157 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1137);
                        $tmp1156 = $tmp1157;
                        org$pandalanguage$pandac$Type* $tmp1158 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1156), p_types);
                        $tmp1155 = $tmp1158;
                        $tmp1154 = $tmp1155;
                        child1153 = $tmp1154;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1154));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1155));
                        panda$core$Panda$unref$panda$core$Object($tmp1156);
                        panda$core$MutableString$append$panda$core$String(name1124, separator1129);
                        panda$core$MutableString$append$panda$core$String(name1124, ((org$pandalanguage$pandac$Symbol*) child1153)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1120, ((panda$core$Object*) child1153));
                        {
                            $tmp1159 = separator1129;
                            $tmp1160 = &$s1161;
                            separator1129 = $tmp1160;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1160));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1159));
                        }
                    }
                    $tmp1152 = -1;
                    goto $l1150;
                    $l1150:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1153));
                    child1153 = NULL;
                    switch ($tmp1152) {
                        case -1: goto $l1162;
                    }
                    $l1162:;
                }
                $l1145:;
                int64_t $tmp1164 = $tmp1140 - i1137.value;
                if ($tmp1141) goto $l1165; else goto $l1166;
                $l1165:;
                if ((uint64_t) $tmp1164 >= 1) goto $l1163; else goto $l1144;
                $l1166:;
                if ((uint64_t) $tmp1164 > 1) goto $l1163; else goto $l1144;
                $l1163:;
                i1137.value += 1;
                goto $l1142;
                $l1144:;
                panda$core$Bit $tmp1169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 14 }));
                if ($tmp1169.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name1124, &$s1170);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(name1124, &$s1171);
                }
                }
                panda$core$Int64 $tmp1173 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1174 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1173, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1175 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1174);
                $tmp1172 = $tmp1175;
                org$pandalanguage$pandac$Type* $tmp1177 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1176 = $tmp1177;
                panda$core$Bit $tmp1178 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1172), $tmp1176);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1176));
                panda$core$Panda$unref$panda$core$Object($tmp1172);
                if ($tmp1178.value) {
                {
                    int $tmp1181;
                    {
                        panda$core$Int64 $tmp1186 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                        panda$core$Int64 $tmp1187 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1186, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1188 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1187);
                        $tmp1185 = $tmp1188;
                        org$pandalanguage$pandac$Type* $tmp1189 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1185), p_types);
                        $tmp1184 = $tmp1189;
                        $tmp1183 = $tmp1184;
                        child1182 = $tmp1183;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1183));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1184));
                        panda$core$Panda$unref$panda$core$Object($tmp1185);
                        panda$core$MutableString$append$panda$core$String(name1124, ((org$pandalanguage$pandac$Symbol*) child1182)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1120, ((panda$core$Object*) child1182));
                    }
                    $tmp1181 = -1;
                    goto $l1179;
                    $l1179:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1182));
                    child1182 = NULL;
                    switch ($tmp1181) {
                        case -1: goto $l1190;
                    }
                    $l1190:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1192 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                    $tmp1191 = $tmp1192;
                    panda$collections$Array$add$panda$collections$Array$T(remapped1120, ((panda$core$Object*) $tmp1191));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1191));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1193, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(name1124, $tmp1193);
                org$pandalanguage$pandac$Type* $tmp1196 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp1198 = panda$core$MutableString$finish$R$panda$core$String(name1124);
                $tmp1197 = $tmp1198;
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1196, $tmp1197, self->typeKind, self->position, ((panda$collections$ListView*) remapped1120), self->resolved);
                $tmp1195 = $tmp1196;
                $tmp1194 = $tmp1195;
                $returnValue1039 = $tmp1194;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1194));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1195));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1197));
                $tmp1119 = 0;
                goto $l1117;
                $l1199:;
                return $returnValue1039;
            }
            $l1117:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped1120));
            remapped1120 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1124));
            name1124 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1129));
            separator1129 = NULL;
            switch ($tmp1119) {
                case 0: goto $l1199;
            }
            $l1201:;
        }
        }
        else {
        {
            $tmp1202 = self;
            $returnValue1039 = $tmp1202;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1202));
            return $returnValue1039;
        }
        }
        }
        }
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue1204;
    panda$core$Int64 $tmp1205 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $returnValue1204 = $tmp1205;
    return $returnValue1204;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $returnValue1207;
    panda$core$String* $tmp1208;
    $tmp1208 = self->name;
    $returnValue1207 = $tmp1208;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1208));
    return $returnValue1207;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1212;
    {
    }
    $tmp1212 = -1;
    goto $l1210;
    $l1210:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1212) {
        case -1: goto $l1213;
    }
    $l1213:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

