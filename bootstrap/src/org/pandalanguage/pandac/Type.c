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
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s1207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s1211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };

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
    panda$collections$Iterator* Iter$76$945 = NULL;
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
                Iter$76$945 = $tmp46;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp46));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
                $l52:;
                ITable* $tmp55 = Iter$76$945->$class->itable;
                while ($tmp55->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp55 = $tmp55->next;
                }
                $fn57 $tmp56 = $tmp55->methods[0];
                panda$core$Bit $tmp58 = $tmp56(Iter$76$945);
                panda$core$Bit $tmp59 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp58);
                bool $tmp54 = $tmp59.value;
                if (!$tmp54) goto $l53;
                {
                    int $tmp62;
                    {
                        ITable* $tmp66 = Iter$76$945->$class->itable;
                        while ($tmp66->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp66 = $tmp66->next;
                        }
                        $fn68 $tmp67 = $tmp66->methods[1];
                        panda$core$Object* $tmp69 = $tmp67(Iter$76$945);
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$76$945));
            Iter$76$945 = NULL;
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
    panda$collections$Iterator* Iter$101$9117 = NULL;
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
                Iter$101$9117 = $tmp118;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
                $l124:;
                ITable* $tmp127 = Iter$101$9117->$class->itable;
                while ($tmp127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp127 = $tmp127->next;
                }
                $fn129 $tmp128 = $tmp127->methods[0];
                panda$core$Bit $tmp130 = $tmp128(Iter$101$9117);
                panda$core$Bit $tmp131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp130);
                bool $tmp126 = $tmp131.value;
                if (!$tmp126) goto $l125;
                {
                    int $tmp134;
                    {
                        ITable* $tmp138 = Iter$101$9117->$class->itable;
                        while ($tmp138->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp138 = $tmp138->next;
                        }
                        $fn140 $tmp139 = $tmp138->methods[1];
                        panda$core$Object* $tmp141 = $tmp139(Iter$101$9117);
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$101$9117));
            Iter$101$9117 = NULL;
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
    panda$collections$Iterator* Iter$121$9186 = NULL;
    panda$collections$Iterator* $tmp187;
    panda$collections$Iterator* $tmp188;
    org$pandalanguage$pandac$Type* p204 = NULL;
    org$pandalanguage$pandac$Type* $tmp205;
    panda$core$Object* $tmp206;
    panda$core$String* $tmp214;
    panda$core$String* $tmp215;
    org$pandalanguage$pandac$Type$Kind $match$128_9219;
    org$pandalanguage$pandac$Type* $tmp228;
    panda$core$Char8 $tmp231;
    org$pandalanguage$pandac$Type* $returnValue232;
    org$pandalanguage$pandac$Type* $tmp233;
    org$pandalanguage$pandac$Type* $tmp234;
    panda$core$String* $tmp236;
    panda$collections$ImmutableArray* $tmp238;
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
                Iter$121$9186 = $tmp187;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp187));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
                $l193:;
                ITable* $tmp196 = Iter$121$9186->$class->itable;
                while ($tmp196->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp196 = $tmp196->next;
                }
                $fn198 $tmp197 = $tmp196->methods[0];
                panda$core$Bit $tmp199 = $tmp197(Iter$121$9186);
                panda$core$Bit $tmp200 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp199);
                bool $tmp195 = $tmp200.value;
                if (!$tmp195) goto $l194;
                {
                    int $tmp203;
                    {
                        ITable* $tmp207 = Iter$121$9186->$class->itable;
                        while ($tmp207->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp207 = $tmp207->next;
                        }
                        $fn209 $tmp208 = $tmp207->methods[1];
                        panda$core$Object* $tmp210 = $tmp208(Iter$121$9186);
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$121$9186));
            Iter$121$9186 = NULL;
            switch ($tmp185) {
                case -1: goto $l218;
            }
            $l218:;
        }
        {
            $match$128_9219 = p_kind;
            panda$core$Bit $tmp220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9219.$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp220.value) {
            {
                panda$core$MutableString$append$panda$core$String(name171, &$s221);
            }
            }
            else {
            panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9219.$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp222.value) {
            {
                panda$core$MutableString$append$panda$core$String(name171, &$s223);
            }
            }
            else {
            panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9219.$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp224.value) {
            {
                panda$core$MutableString$append$panda$core$String(name171, &$s225);
            }
            }
            else {
            panda$core$Bit $tmp226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9219.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp226.value) {
            {
                panda$core$MutableString$append$panda$core$String(name171, &$s227);
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
            }
            }
            }
        }
        panda$collections$Array$add$panda$collections$Array$T(subtypes176, ((panda$core$Object*) p_returnType));
        org$pandalanguage$pandac$Type* $tmp229 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp228 = $tmp229;
        panda$core$Bit $tmp230 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_returnType, $tmp228);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
        if ($tmp230.value) {
        {
            panda$core$MutableString$append$panda$core$String(name171, ((org$pandalanguage$pandac$Symbol*) p_returnType)->name);
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp231, ((panda$core$UInt8) { 41 }));
        panda$core$MutableString$append$panda$core$Char8(name171, $tmp231);
        org$pandalanguage$pandac$Type* $tmp235 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp237 = panda$core$MutableString$finish$R$panda$core$String(name171);
        $tmp236 = $tmp237;
        panda$collections$ImmutableArray* $tmp239 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes176);
        $tmp238 = $tmp239;
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp235, $tmp236, p_kind, p_position, ((panda$collections$ListView*) $tmp238), resolved170);
        $tmp234 = $tmp235;
        $tmp233 = $tmp234;
        $returnValue232 = $tmp233;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp233));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp234));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp238));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
        $tmp169 = 0;
        goto $l167;
        $l240:;
        return $returnValue232;
    }
    $l167:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name171));
    name171 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes176));
    subtypes176 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator180));
    separator180 = NULL;
    switch ($tmp169) {
        case 0: goto $l240;
    }
    $l242:;
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue252;
    panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp244 = $tmp245.value;
    if ($tmp244) goto $l246;
    panda$core$Bit $tmp247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 3 }));
    $tmp244 = $tmp247.value;
    $l246:;
    panda$core$Bit $tmp248 = { $tmp244 };
    bool $tmp243 = $tmp248.value;
    if ($tmp243) goto $l249;
    panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 10 }));
    $tmp243 = $tmp250.value;
    $l249:;
    panda$core$Bit $tmp251 = { $tmp243 };
    PANDA_ASSERT($tmp251.value);
    $returnValue252 = self->position.line;
    return $returnValue252;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue254;
    panda$core$Bit $tmp255 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue254 = $tmp255;
    return $returnValue254;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue257;
    panda$core$Bit $tmp258 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue257 = $tmp258;
    return $returnValue257;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue260;
    org$pandalanguage$pandac$Type* $tmp261;
    org$pandalanguage$pandac$Type* $tmp262;
    org$pandalanguage$pandac$Type$Kind $tmp265;
    org$pandalanguage$pandac$Position $tmp266;
    org$pandalanguage$pandac$Type* $tmp263 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp265, ((panda$core$Int64) { 4 }));
    org$pandalanguage$pandac$Position$init(&$tmp266);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp263, &$s264, $tmp265, $tmp266, ((panda$core$Bit) { true }));
    $tmp262 = $tmp263;
    $tmp261 = $tmp262;
    $returnValue260 = $tmp261;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
    return $returnValue260;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue268;
    org$pandalanguage$pandac$Type* $tmp269;
    org$pandalanguage$pandac$Type* $tmp270;
    org$pandalanguage$pandac$Type$Kind $tmp273;
    org$pandalanguage$pandac$Position $tmp274;
    org$pandalanguage$pandac$Type* $tmp271 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp273, ((panda$core$Int64) { 13 }));
    org$pandalanguage$pandac$Position$init(&$tmp274);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp271, &$s272, $tmp273, $tmp274, ((panda$core$Bit) { true }));
    $tmp270 = $tmp271;
    $tmp269 = $tmp270;
    $returnValue268 = $tmp269;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
    return $returnValue268;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue276;
    org$pandalanguage$pandac$Type* $tmp277;
    org$pandalanguage$pandac$Type* $tmp278;
    org$pandalanguage$pandac$Type$Kind $tmp281;
    org$pandalanguage$pandac$Position $tmp282;
    org$pandalanguage$pandac$Type* $tmp279 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp281, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp282);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp279, &$s280, $tmp281, $tmp282, ((panda$core$Bit) { true }));
    $tmp278 = $tmp279;
    $tmp277 = $tmp278;
    $returnValue276 = $tmp277;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
    return $returnValue276;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes287 = NULL;
    panda$collections$Array* $tmp288;
    panda$collections$Array* $tmp289;
    org$pandalanguage$pandac$Type* $tmp291;
    org$pandalanguage$pandac$Type* $returnValue293;
    org$pandalanguage$pandac$Type* $tmp294;
    org$pandalanguage$pandac$Type* $tmp295;
    org$pandalanguage$pandac$Type$Kind $tmp298;
    org$pandalanguage$pandac$Position $tmp299;
    int $tmp286;
    {
        panda$collections$Array* $tmp290 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp290);
        $tmp289 = $tmp290;
        $tmp288 = $tmp289;
        subtypes287 = $tmp288;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp288));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
        org$pandalanguage$pandac$Type* $tmp292 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp291 = $tmp292;
        panda$collections$Array$add$panda$collections$Array$T(subtypes287, ((panda$core$Object*) $tmp291));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
        org$pandalanguage$pandac$Type* $tmp296 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp298, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Position$init(&$tmp299);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp296, &$s297, $tmp298, $tmp299, ((panda$collections$ListView*) subtypes287), ((panda$core$Bit) { true }));
        $tmp295 = $tmp296;
        $tmp294 = $tmp295;
        $returnValue293 = $tmp294;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp294));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp295));
        $tmp286 = 0;
        goto $l284;
        $l300:;
        return $returnValue293;
    }
    $l284:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes287));
    subtypes287 = NULL;
    switch ($tmp286) {
        case 0: goto $l300;
    }
    $l302:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue303;
    org$pandalanguage$pandac$Type* $tmp304;
    org$pandalanguage$pandac$Type* $tmp305;
    org$pandalanguage$pandac$Type$Kind $tmp308;
    org$pandalanguage$pandac$Position $tmp309;
    org$pandalanguage$pandac$Type* $tmp306 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp308, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp309);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp306, &$s307, $tmp308, $tmp309, ((panda$core$Bit) { true }));
    $tmp305 = $tmp306;
    $tmp304 = $tmp305;
    $returnValue303 = $tmp304;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp304));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
    return $returnValue303;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue311;
    org$pandalanguage$pandac$Type* $tmp312;
    org$pandalanguage$pandac$Type* $tmp313;
    org$pandalanguage$pandac$Type$Kind $tmp316;
    org$pandalanguage$pandac$Position $tmp317;
    org$pandalanguage$pandac$Type* $tmp314 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp316, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp317);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp314, &$s315, $tmp316, $tmp317, ((panda$core$Bit) { true }));
    $tmp313 = $tmp314;
    $tmp312 = $tmp313;
    $returnValue311 = $tmp312;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
    return $returnValue311;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue319;
    org$pandalanguage$pandac$Type* $tmp320;
    org$pandalanguage$pandac$Type* $tmp321;
    org$pandalanguage$pandac$Type$Kind $tmp324;
    org$pandalanguage$pandac$Position $tmp325;
    org$pandalanguage$pandac$Type* $tmp322 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp324, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp325);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp322, &$s323, $tmp324, $tmp325, ((panda$core$Bit) { true }));
    $tmp321 = $tmp322;
    $tmp320 = $tmp321;
    $returnValue319 = $tmp320;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp320));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
    return $returnValue319;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue327;
    org$pandalanguage$pandac$Type* $tmp328;
    org$pandalanguage$pandac$Type* $tmp329;
    org$pandalanguage$pandac$Type$Kind $tmp332;
    org$pandalanguage$pandac$Type* $tmp330 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp332, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp330, &$s331, $tmp332, ((panda$core$Int64) { 8 }));
    $tmp329 = $tmp330;
    $tmp328 = $tmp329;
    $returnValue327 = $tmp328;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp328));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
    return $returnValue327;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue334;
    org$pandalanguage$pandac$Type* $tmp335;
    org$pandalanguage$pandac$Type* $tmp336;
    org$pandalanguage$pandac$Type$Kind $tmp339;
    org$pandalanguage$pandac$Type* $tmp337 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp339, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp337, &$s338, $tmp339, ((panda$core$Int64) { 16 }));
    $tmp336 = $tmp337;
    $tmp335 = $tmp336;
    $returnValue334 = $tmp335;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp335));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
    return $returnValue334;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue341;
    org$pandalanguage$pandac$Type* $tmp342;
    org$pandalanguage$pandac$Type* $tmp343;
    org$pandalanguage$pandac$Type$Kind $tmp346;
    org$pandalanguage$pandac$Type* $tmp344 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp346, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp344, &$s345, $tmp346, ((panda$core$Int64) { 32 }));
    $tmp343 = $tmp344;
    $tmp342 = $tmp343;
    $returnValue341 = $tmp342;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp342));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
    return $returnValue341;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue348;
    org$pandalanguage$pandac$Type* $tmp349;
    org$pandalanguage$pandac$Type* $tmp350;
    org$pandalanguage$pandac$Type$Kind $tmp353;
    org$pandalanguage$pandac$Type* $tmp351 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp353, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp351, &$s352, $tmp353, ((panda$core$Int64) { 64 }));
    $tmp350 = $tmp351;
    $tmp349 = $tmp350;
    $returnValue348 = $tmp349;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp349));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
    return $returnValue348;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue355;
    org$pandalanguage$pandac$Type* $tmp356;
    org$pandalanguage$pandac$Type* $tmp357;
    org$pandalanguage$pandac$Type$Kind $tmp360;
    org$pandalanguage$pandac$Type* $tmp358 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp360, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp358, &$s359, $tmp360, ((panda$core$Int64) { 8 }));
    $tmp357 = $tmp358;
    $tmp356 = $tmp357;
    $returnValue355 = $tmp356;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp356));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
    return $returnValue355;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue362;
    org$pandalanguage$pandac$Type* $tmp363;
    org$pandalanguage$pandac$Type* $tmp364;
    org$pandalanguage$pandac$Type$Kind $tmp367;
    org$pandalanguage$pandac$Type* $tmp365 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp367, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp365, &$s366, $tmp367, ((panda$core$Int64) { 16 }));
    $tmp364 = $tmp365;
    $tmp363 = $tmp364;
    $returnValue362 = $tmp363;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp363));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
    return $returnValue362;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue369;
    org$pandalanguage$pandac$Type* $tmp370;
    org$pandalanguage$pandac$Type* $tmp371;
    org$pandalanguage$pandac$Type$Kind $tmp374;
    org$pandalanguage$pandac$Type* $tmp372 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp374, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp372, &$s373, $tmp374, ((panda$core$Int64) { 32 }));
    $tmp371 = $tmp372;
    $tmp370 = $tmp371;
    $returnValue369 = $tmp370;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp370));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp371));
    return $returnValue369;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue376;
    org$pandalanguage$pandac$Type* $tmp377;
    org$pandalanguage$pandac$Type* $tmp378;
    org$pandalanguage$pandac$Type$Kind $tmp381;
    org$pandalanguage$pandac$Type* $tmp379 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp381, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp379, &$s380, $tmp381, ((panda$core$Int64) { 64 }));
    $tmp378 = $tmp379;
    $tmp377 = $tmp378;
    $returnValue376 = $tmp377;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp377));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp378));
    return $returnValue376;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue383;
    org$pandalanguage$pandac$Type* $tmp384;
    org$pandalanguage$pandac$Type* $tmp385;
    org$pandalanguage$pandac$Type$Kind $tmp388;
    org$pandalanguage$pandac$Type* $tmp386 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp388, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp386, &$s387, $tmp388, ((panda$core$Int64) { 32 }));
    $tmp385 = $tmp386;
    $tmp384 = $tmp385;
    $returnValue383 = $tmp384;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp384));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
    return $returnValue383;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue390;
    org$pandalanguage$pandac$Type* $tmp391;
    org$pandalanguage$pandac$Type* $tmp392;
    org$pandalanguage$pandac$Type$Kind $tmp395;
    org$pandalanguage$pandac$Type* $tmp393 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp395, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp393, &$s394, $tmp395, ((panda$core$Int64) { 64 }));
    $tmp392 = $tmp393;
    $tmp391 = $tmp392;
    $returnValue390 = $tmp391;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp391));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp392));
    return $returnValue390;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue397;
    org$pandalanguage$pandac$Type* $tmp398;
    org$pandalanguage$pandac$Type* $tmp399;
    org$pandalanguage$pandac$Type$Kind $tmp402;
    org$pandalanguage$pandac$Position $tmp403;
    org$pandalanguage$pandac$Type* $tmp400 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp402, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp403);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp400, &$s401, $tmp402, $tmp403, ((panda$core$Bit) { true }));
    $tmp399 = $tmp400;
    $tmp398 = $tmp399;
    $returnValue397 = $tmp398;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp399));
    return $returnValue397;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue405;
    org$pandalanguage$pandac$Type* $tmp406;
    org$pandalanguage$pandac$Type* $tmp407;
    org$pandalanguage$pandac$Type$Kind $tmp410;
    org$pandalanguage$pandac$Position $tmp411;
    org$pandalanguage$pandac$Type* $tmp408 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp410, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp411);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp408, &$s409, $tmp410, $tmp411, ((panda$core$Bit) { true }));
    $tmp407 = $tmp408;
    $tmp406 = $tmp407;
    $returnValue405 = $tmp406;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp406));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp407));
    return $returnValue405;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue413;
    org$pandalanguage$pandac$Type* $tmp414;
    org$pandalanguage$pandac$Type* $tmp415;
    org$pandalanguage$pandac$Type$Kind $tmp418;
    org$pandalanguage$pandac$Position $tmp419;
    org$pandalanguage$pandac$Type* $tmp416 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp418, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp419);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp416, &$s417, $tmp418, $tmp419, ((panda$core$Bit) { true }));
    $tmp415 = $tmp416;
    $tmp414 = $tmp415;
    $returnValue413 = $tmp414;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp414));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
    return $returnValue413;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue421;
    org$pandalanguage$pandac$Type* $tmp422;
    org$pandalanguage$pandac$Type* $tmp423;
    org$pandalanguage$pandac$Type$Kind $tmp426;
    org$pandalanguage$pandac$Position $tmp427;
    org$pandalanguage$pandac$Type* $tmp424 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp426, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp427);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp424, &$s425, $tmp426, $tmp427, ((panda$core$Bit) { true }));
    $tmp423 = $tmp424;
    $tmp422 = $tmp423;
    $returnValue421 = $tmp422;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp422));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
    return $returnValue421;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue429;
    org$pandalanguage$pandac$Type* $tmp430;
    org$pandalanguage$pandac$Type* $tmp431;
    org$pandalanguage$pandac$Type$Kind $tmp434;
    org$pandalanguage$pandac$Position $tmp435;
    org$pandalanguage$pandac$Type* $tmp432 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp434, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp435);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp432, &$s433, $tmp434, $tmp435, ((panda$core$Bit) { true }));
    $tmp431 = $tmp432;
    $tmp430 = $tmp431;
    $returnValue429 = $tmp430;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
    return $returnValue429;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue437;
    org$pandalanguage$pandac$Type* $tmp438;
    org$pandalanguage$pandac$Type* $tmp439;
    org$pandalanguage$pandac$Type$Kind $tmp442;
    org$pandalanguage$pandac$Position $tmp443;
    org$pandalanguage$pandac$Type* $tmp440 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp442, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp443);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp440, &$s441, $tmp442, $tmp443, ((panda$core$Bit) { true }));
    $tmp439 = $tmp440;
    $tmp438 = $tmp439;
    $returnValue437 = $tmp438;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp438));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp439));
    return $returnValue437;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue445;
    org$pandalanguage$pandac$Type* $tmp446;
    org$pandalanguage$pandac$Type* $tmp447;
    org$pandalanguage$pandac$Type$Kind $tmp450;
    org$pandalanguage$pandac$Position $tmp451;
    org$pandalanguage$pandac$Type* $tmp448 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp450, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp451);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp448, &$s449, $tmp450, $tmp451, ((panda$core$Bit) { true }));
    $tmp447 = $tmp448;
    $tmp446 = $tmp447;
    $returnValue445 = $tmp446;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp446));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
    return $returnValue445;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue453;
    org$pandalanguage$pandac$Type* $tmp454;
    org$pandalanguage$pandac$Type* $tmp455;
    org$pandalanguage$pandac$Type$Kind $tmp458;
    org$pandalanguage$pandac$Position $tmp459;
    org$pandalanguage$pandac$Type* $tmp456 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp458, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp459);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp456, &$s457, $tmp458, $tmp459, ((panda$core$Bit) { true }));
    $tmp455 = $tmp456;
    $tmp454 = $tmp455;
    $returnValue453 = $tmp454;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp454));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp455));
    return $returnValue453;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue461;
    org$pandalanguage$pandac$Type* $tmp462;
    org$pandalanguage$pandac$Type* $tmp463;
    org$pandalanguage$pandac$Type$Kind $tmp466;
    org$pandalanguage$pandac$Position $tmp467;
    org$pandalanguage$pandac$Type* $tmp464 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp466, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp467);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp464, &$s465, $tmp466, $tmp467, ((panda$core$Bit) { true }));
    $tmp463 = $tmp464;
    $tmp462 = $tmp463;
    $returnValue461 = $tmp462;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp462));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp463));
    return $returnValue461;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue469;
    org$pandalanguage$pandac$Type* $tmp470;
    org$pandalanguage$pandac$Type* $tmp471;
    org$pandalanguage$pandac$Type$Kind $tmp474;
    org$pandalanguage$pandac$Position $tmp475;
    org$pandalanguage$pandac$Type* $tmp472 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp474, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp475);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp472, &$s473, $tmp474, $tmp475, ((panda$core$Bit) { true }));
    $tmp471 = $tmp472;
    $tmp470 = $tmp471;
    $returnValue469 = $tmp470;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp470));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
    return $returnValue469;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue477;
    org$pandalanguage$pandac$Type* $tmp478;
    org$pandalanguage$pandac$Type* $tmp479;
    org$pandalanguage$pandac$Type$Kind $tmp482;
    org$pandalanguage$pandac$Position $tmp483;
    org$pandalanguage$pandac$Type* $tmp480 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp482, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp483);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp480, &$s481, $tmp482, $tmp483, ((panda$core$Bit) { true }));
    $tmp479 = $tmp480;
    $tmp478 = $tmp479;
    $returnValue477 = $tmp478;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp478));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
    return $returnValue477;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue485;
    org$pandalanguage$pandac$Type* $tmp486;
    org$pandalanguage$pandac$Type* $tmp487;
    org$pandalanguage$pandac$Type$Kind $tmp490;
    org$pandalanguage$pandac$Position $tmp491;
    org$pandalanguage$pandac$Type* $tmp488 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp490, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp491);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp488, &$s489, $tmp490, $tmp491, ((panda$core$Bit) { true }));
    $tmp487 = $tmp488;
    $tmp486 = $tmp487;
    $returnValue485 = $tmp486;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp486));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
    return $returnValue485;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue493;
    org$pandalanguage$pandac$Type* $tmp494;
    org$pandalanguage$pandac$Type* $tmp495;
    org$pandalanguage$pandac$Type$Kind $tmp498;
    org$pandalanguage$pandac$Position $tmp499;
    org$pandalanguage$pandac$Type* $tmp496 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp498, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp499);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp496, &$s497, $tmp498, $tmp499, ((panda$core$Bit) { true }));
    $tmp495 = $tmp496;
    $tmp494 = $tmp495;
    $returnValue493 = $tmp494;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp494));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
    return $returnValue493;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue501;
    org$pandalanguage$pandac$Type* $tmp502;
    org$pandalanguage$pandac$Type* $tmp503;
    org$pandalanguage$pandac$Type$Kind $tmp506;
    org$pandalanguage$pandac$Position $tmp507;
    org$pandalanguage$pandac$Type* $tmp504 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp506, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp507);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp504, &$s505, $tmp506, $tmp507, ((panda$core$Bit) { true }));
    $tmp503 = $tmp504;
    $tmp502 = $tmp503;
    $returnValue501 = $tmp502;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp502));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
    return $returnValue501;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue509;
    org$pandalanguage$pandac$Type* $tmp510;
    org$pandalanguage$pandac$Type* $tmp511;
    panda$core$String* $tmp513;
    org$pandalanguage$pandac$Type$Kind $tmp515;
    org$pandalanguage$pandac$Position $tmp516;
    org$pandalanguage$pandac$Type* $tmp512 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp514 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp513 = $tmp514;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp515, ((panda$core$Int64) { 5 }));
    org$pandalanguage$pandac$Position$init(&$tmp516);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp512, $tmp513, $tmp515, $tmp516, ((panda$core$Bit) { true }));
    $tmp511 = $tmp512;
    $tmp510 = $tmp511;
    $returnValue509 = $tmp510;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp510));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp511));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp513));
    return $returnValue509;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue518;
    org$pandalanguage$pandac$Type* $tmp519;
    org$pandalanguage$pandac$Type* $tmp520;
    panda$core$String* $tmp522;
    panda$core$String* $tmp524;
    org$pandalanguage$pandac$Type$Kind $tmp527;
    org$pandalanguage$pandac$Position $tmp528;
    org$pandalanguage$pandac$Type* $tmp521 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp525 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp524 = $tmp525;
    panda$core$String* $tmp526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s523, $tmp524);
    $tmp522 = $tmp526;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp527, ((panda$core$Int64) { 5 }));
    org$pandalanguage$pandac$Position$init(&$tmp528);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp521, $tmp522, $tmp527, $tmp528, ((panda$core$Bit) { true }));
    $tmp520 = $tmp521;
    $tmp519 = $tmp520;
    $returnValue518 = $tmp519;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp519));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp520));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp522));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp524));
    return $returnValue518;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue530;
    org$pandalanguage$pandac$Type* $tmp531;
    org$pandalanguage$pandac$Type* $tmp532;
    panda$core$String* $tmp534;
    org$pandalanguage$pandac$Type$Kind $tmp536;
    org$pandalanguage$pandac$Position $tmp537;
    org$pandalanguage$pandac$Type* $tmp533 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp535 = panda$core$Real64$convert$R$panda$core$String(p_value);
    $tmp534 = $tmp535;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp536, ((panda$core$Int64) { 18 }));
    org$pandalanguage$pandac$Position$init(&$tmp537);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp533, $tmp534, $tmp536, $tmp537, ((panda$core$Bit) { true }));
    $tmp532 = $tmp533;
    $tmp531 = $tmp532;
    $returnValue530 = $tmp531;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp531));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp532));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
    return $returnValue530;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue539;
    org$pandalanguage$pandac$Type* $tmp540;
    org$pandalanguage$pandac$Type* $tmp541;
    org$pandalanguage$pandac$Type$Kind $tmp544;
    org$pandalanguage$pandac$Position $tmp545;
    org$pandalanguage$pandac$Type* $tmp542 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp544, ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$Position$init(&$tmp545);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp542, &$s543, $tmp544, $tmp545, ((panda$core$Bit) { true }));
    $tmp541 = $tmp542;
    $tmp540 = $tmp541;
    $returnValue539 = $tmp540;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp540));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
    return $returnValue539;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue547;
    org$pandalanguage$pandac$Type* $tmp548;
    org$pandalanguage$pandac$Type* $tmp549;
    org$pandalanguage$pandac$Type$Kind $tmp552;
    org$pandalanguage$pandac$Position $tmp553;
    org$pandalanguage$pandac$Type* $tmp550 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp552, ((panda$core$Int64) { 9 }));
    org$pandalanguage$pandac$Position$init(&$tmp553);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp550, &$s551, $tmp552, $tmp553, ((panda$core$Bit) { true }));
    $tmp549 = $tmp550;
    $tmp548 = $tmp549;
    $returnValue547 = $tmp548;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp548));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
    return $returnValue547;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue555;
    org$pandalanguage$pandac$Type* $tmp556;
    org$pandalanguage$pandac$Type* $tmp557;
    org$pandalanguage$pandac$Type$Kind $tmp560;
    org$pandalanguage$pandac$Position $tmp561;
    org$pandalanguage$pandac$Type* $tmp558 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp560, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp561);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp558, &$s559, $tmp560, $tmp561, ((panda$core$Bit) { true }));
    $tmp557 = $tmp558;
    $tmp556 = $tmp557;
    $returnValue555 = $tmp556;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp556));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
    return $returnValue555;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue563;
    org$pandalanguage$pandac$Type* $tmp564;
    org$pandalanguage$pandac$Type* $tmp565;
    org$pandalanguage$pandac$Type$Kind $tmp568;
    org$pandalanguage$pandac$Position $tmp569;
    org$pandalanguage$pandac$Type* $tmp566 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp568, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp569);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp566, &$s567, $tmp568, $tmp569, ((panda$core$Bit) { true }));
    $tmp565 = $tmp566;
    $tmp564 = $tmp565;
    $returnValue563 = $tmp564;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp564));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
    return $returnValue563;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue571;
    org$pandalanguage$pandac$Type* $tmp572;
    org$pandalanguage$pandac$Type* $tmp573;
    org$pandalanguage$pandac$Type$Kind $tmp576;
    org$pandalanguage$pandac$Position $tmp577;
    org$pandalanguage$pandac$Type* $tmp574 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp576, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp577);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp574, &$s575, $tmp576, $tmp577, ((panda$core$Bit) { true }));
    $tmp573 = $tmp574;
    $tmp572 = $tmp573;
    $returnValue571 = $tmp572;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp572));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
    return $returnValue571;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue579;
    org$pandalanguage$pandac$Type* $tmp580;
    org$pandalanguage$pandac$Type* $tmp581;
    org$pandalanguage$pandac$Type$Kind $tmp584;
    org$pandalanguage$pandac$Position $tmp585;
    org$pandalanguage$pandac$Type* $tmp582 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp584, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp585);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp582, &$s583, $tmp584, $tmp585, ((panda$core$Bit) { true }));
    $tmp581 = $tmp582;
    $tmp580 = $tmp581;
    $returnValue579 = $tmp580;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp580));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
    return $returnValue579;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children590 = NULL;
    panda$collections$Array* $tmp591;
    panda$collections$Array* $tmp592;
    org$pandalanguage$pandac$Type* $tmp594;
    org$pandalanguage$pandac$Type$Kind $tmp597;
    org$pandalanguage$pandac$Position $tmp598;
    org$pandalanguage$pandac$Type* $returnValue599;
    org$pandalanguage$pandac$Type* $tmp600;
    org$pandalanguage$pandac$Type* $tmp601;
    panda$core$String* $tmp603;
    panda$core$String* $tmp604;
    panda$core$String* $tmp605;
    panda$core$String* $tmp606;
    org$pandalanguage$pandac$Type$Kind $tmp614;
    int $tmp589;
    {
        panda$collections$Array* $tmp593 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp593);
        $tmp592 = $tmp593;
        $tmp591 = $tmp592;
        children590 = $tmp591;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp591));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
        org$pandalanguage$pandac$Type* $tmp595 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp597, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp598);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp595, &$s596, $tmp597, $tmp598, ((panda$core$Bit) { true }));
        $tmp594 = $tmp595;
        panda$collections$Array$add$panda$collections$Array$T(children590, ((panda$core$Object*) $tmp594));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
        panda$collections$Array$add$panda$collections$Array$T(children590, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp602 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp608 = panda$core$String$convert$R$panda$core$String(&$s607);
        $tmp606 = $tmp608;
        panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp606, &$s609);
        $tmp605 = $tmp610;
        panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp605, ((panda$core$Object*) p_t));
        $tmp604 = $tmp611;
        panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp604, &$s612);
        $tmp603 = $tmp613;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp614, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp602, $tmp603, $tmp614, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children590), p_t->resolved);
        $tmp601 = $tmp602;
        $tmp600 = $tmp601;
        $returnValue599 = $tmp600;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp600));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp603));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp604));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp605));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
        $tmp589 = 0;
        goto $l587;
        $l615:;
        return $returnValue599;
    }
    $l587:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children590));
    children590 = NULL;
    switch ($tmp589) {
        case 0: goto $l615;
    }
    $l617:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children621 = NULL;
    panda$collections$Array* $tmp622;
    panda$collections$Array* $tmp623;
    org$pandalanguage$pandac$Type* $returnValue625;
    org$pandalanguage$pandac$Type* $tmp626;
    org$pandalanguage$pandac$Type* $tmp627;
    org$pandalanguage$pandac$Type* $tmp628;
    org$pandalanguage$pandac$Type$Kind $tmp631;
    org$pandalanguage$pandac$Position $tmp632;
    int $tmp620;
    {
        panda$collections$Array* $tmp624 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp624);
        $tmp623 = $tmp624;
        $tmp622 = $tmp623;
        children621 = $tmp622;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp622));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
        panda$collections$Array$add$panda$collections$Array$T(children621, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp629 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp631, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp632);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp629, &$s630, $tmp631, $tmp632, ((panda$core$Bit) { true }));
        $tmp628 = $tmp629;
        org$pandalanguage$pandac$Type* $tmp633 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp628, ((panda$collections$ListView*) children621));
        $tmp627 = $tmp633;
        $tmp626 = $tmp627;
        $returnValue625 = $tmp626;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp626));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp627));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
        $tmp620 = 0;
        goto $l618;
        $l634:;
        return $returnValue625;
    }
    $l618:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children621));
    children621 = NULL;
    switch ($tmp620) {
        case 0: goto $l634;
    }
    $l636:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children640 = NULL;
    panda$collections$Array* $tmp641;
    panda$collections$Array* $tmp642;
    org$pandalanguage$pandac$Type* $returnValue644;
    org$pandalanguage$pandac$Type* $tmp645;
    org$pandalanguage$pandac$Type* $tmp646;
    org$pandalanguage$pandac$Type* $tmp647;
    org$pandalanguage$pandac$Type$Kind $tmp650;
    org$pandalanguage$pandac$Position $tmp651;
    int $tmp639;
    {
        panda$collections$Array* $tmp643 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp643);
        $tmp642 = $tmp643;
        $tmp641 = $tmp642;
        children640 = $tmp641;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp641));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
        panda$collections$Array$add$panda$collections$Array$T(children640, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp648 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp650, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp651);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp648, &$s649, $tmp650, $tmp651, ((panda$core$Bit) { true }));
        $tmp647 = $tmp648;
        org$pandalanguage$pandac$Type* $tmp652 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp647, ((panda$collections$ListView*) children640));
        $tmp646 = $tmp652;
        $tmp645 = $tmp646;
        $returnValue644 = $tmp645;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp645));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp646));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp647));
        $tmp639 = 0;
        goto $l637;
        $l653:;
        return $returnValue644;
    }
    $l637:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children640));
    children640 = NULL;
    switch ($tmp639) {
        case 0: goto $l653;
    }
    $l655:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children659 = NULL;
    panda$collections$Array* $tmp660;
    panda$collections$Array* $tmp661;
    org$pandalanguage$pandac$Type* $tmp663;
    org$pandalanguage$pandac$Type* $tmp666;
    org$pandalanguage$pandac$Type* $tmp668;
    org$pandalanguage$pandac$Type* $tmp671;
    org$pandalanguage$pandac$Type* $tmp673;
    org$pandalanguage$pandac$Type* $tmp676;
    org$pandalanguage$pandac$Type* $tmp678;
    org$pandalanguage$pandac$Type* $returnValue680;
    org$pandalanguage$pandac$Type* $tmp681;
    org$pandalanguage$pandac$Type* $tmp682;
    org$pandalanguage$pandac$Type* $tmp683;
    org$pandalanguage$pandac$Type$Kind $tmp686;
    org$pandalanguage$pandac$Position $tmp687;
    int $tmp658;
    {
        panda$collections$Array* $tmp662 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp662);
        $tmp661 = $tmp662;
        $tmp660 = $tmp661;
        children659 = $tmp660;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp660));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp661));
        panda$collections$Array$add$panda$collections$Array$T(children659, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp664 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp663 = $tmp664;
        panda$core$Bit $tmp665 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp663);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp663));
        if ($tmp665.value) {
        {
            org$pandalanguage$pandac$Type* $tmp667 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp666 = $tmp667;
            panda$collections$Array$add$panda$collections$Array$T(children659, ((panda$core$Object*) $tmp666));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp666));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp669 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp668 = $tmp669;
        panda$core$Bit $tmp670 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp668);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp668));
        if ($tmp670.value) {
        {
            org$pandalanguage$pandac$Type* $tmp672 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp671 = $tmp672;
            panda$collections$Array$add$panda$collections$Array$T(children659, ((panda$core$Object*) $tmp671));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp674 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp673 = $tmp674;
        panda$core$Bit $tmp675 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp673);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp673));
        if ($tmp675.value) {
        {
            org$pandalanguage$pandac$Type* $tmp677 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp676 = $tmp677;
            panda$collections$Array$add$panda$collections$Array$T(children659, ((panda$core$Object*) $tmp676));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp676));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp679 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp678 = $tmp679;
            panda$collections$Array$add$panda$collections$Array$T(children659, ((panda$core$Object*) $tmp678));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp678));
        }
        }
        }
        }
        org$pandalanguage$pandac$Type* $tmp684 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp686, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp687);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp684, &$s685, $tmp686, $tmp687, ((panda$core$Bit) { true }));
        $tmp683 = $tmp684;
        org$pandalanguage$pandac$Type* $tmp688 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp683, ((panda$collections$ListView*) children659));
        $tmp682 = $tmp688;
        $tmp681 = $tmp682;
        $returnValue680 = $tmp681;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp681));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp682));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp683));
        $tmp658 = 0;
        goto $l656;
        $l689:;
        return $returnValue680;
    }
    $l656:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children659));
    children659 = NULL;
    switch ($tmp658) {
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
    panda$core$Bit $tmp727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
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
    panda$core$Bit $tmp747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
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
    org$pandalanguage$pandac$Type$Kind $match$441_9764;
    panda$core$Bit $returnValue794;
    {
        $match$441_9764 = self->typeKind;
        panda$core$Bit $tmp772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9764.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp771 = $tmp772.value;
        if ($tmp771) goto $l773;
        panda$core$Bit $tmp774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9764.$rawValue, ((panda$core$Int64) { 1 }));
        $tmp771 = $tmp774.value;
        $l773:;
        panda$core$Bit $tmp775 = { $tmp771 };
        bool $tmp770 = $tmp775.value;
        if ($tmp770) goto $l776;
        panda$core$Bit $tmp777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9764.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp770 = $tmp777.value;
        $l776:;
        panda$core$Bit $tmp778 = { $tmp770 };
        bool $tmp769 = $tmp778.value;
        if ($tmp769) goto $l779;
        panda$core$Bit $tmp780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9764.$rawValue, ((panda$core$Int64) { 12 }));
        $tmp769 = $tmp780.value;
        $l779:;
        panda$core$Bit $tmp781 = { $tmp769 };
        bool $tmp768 = $tmp781.value;
        if ($tmp768) goto $l782;
        panda$core$Bit $tmp783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9764.$rawValue, ((panda$core$Int64) { 15 }));
        $tmp768 = $tmp783.value;
        $l782:;
        panda$core$Bit $tmp784 = { $tmp768 };
        bool $tmp767 = $tmp784.value;
        if ($tmp767) goto $l785;
        panda$core$Bit $tmp786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9764.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp767 = $tmp786.value;
        $l785:;
        panda$core$Bit $tmp787 = { $tmp767 };
        bool $tmp766 = $tmp787.value;
        if ($tmp766) goto $l788;
        panda$core$Bit $tmp789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9764.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp766 = $tmp789.value;
        $l788:;
        panda$core$Bit $tmp790 = { $tmp766 };
        bool $tmp765 = $tmp790.value;
        if ($tmp765) goto $l791;
        panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9764.$rawValue, ((panda$core$Int64) { 16 }));
        $tmp765 = $tmp792.value;
        $l791:;
        panda$core$Bit $tmp793 = { $tmp765 };
        if ($tmp793.value) {
        {
            $returnValue794 = ((panda$core$Bit) { true });
            return $returnValue794;
        }
        }
        else {
        {
            $returnValue794 = ((panda$core$Bit) { false });
            return $returnValue794;
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$451_9797;
    panda$core$Bit $returnValue811;
    {
        $match$451_9797 = self->typeKind;
        panda$core$Bit $tmp801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_9797.$rawValue, ((panda$core$Int64) { 15 }));
        bool $tmp800 = $tmp801.value;
        if ($tmp800) goto $l802;
        panda$core$Bit $tmp803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_9797.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp800 = $tmp803.value;
        $l802:;
        panda$core$Bit $tmp804 = { $tmp800 };
        bool $tmp799 = $tmp804.value;
        if ($tmp799) goto $l805;
        panda$core$Bit $tmp806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_9797.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp799 = $tmp806.value;
        $l805:;
        panda$core$Bit $tmp807 = { $tmp799 };
        bool $tmp798 = $tmp807.value;
        if ($tmp798) goto $l808;
        panda$core$Bit $tmp809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_9797.$rawValue, ((panda$core$Int64) { 16 }));
        $tmp798 = $tmp809.value;
        $l808:;
        panda$core$Bit $tmp810 = { $tmp798 };
        if ($tmp810.value) {
        {
            $returnValue811 = ((panda$core$Bit) { true });
            return $returnValue811;
        }
        }
        else {
        {
            $returnValue811 = ((panda$core$Bit) { false });
            return $returnValue811;
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue814;
    panda$core$Bit $tmp816 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s815);
    $returnValue814 = $tmp816;
    return $returnValue814;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue819;
    panda$core$Object* $tmp820;
    panda$core$Object* $tmp827;
    panda$core$Bit $tmp818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp818.value) {
    {
        panda$core$Object* $tmp821 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp820 = $tmp821;
        panda$core$Bit $tmp822 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp820));
        $returnValue819 = $tmp822;
        panda$core$Panda$unref$panda$core$Object($tmp820);
        return $returnValue819;
    }
    }
    panda$core$Bit $tmp825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp824 = $tmp825.value;
    if (!$tmp824) goto $l826;
    panda$core$Object* $tmp828 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp827 = $tmp828;
    panda$core$Bit $tmp830 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp827))->name, &$s829);
    $tmp824 = $tmp830.value;
    panda$core$Panda$unref$panda$core$Object($tmp827);
    $l826:;
    panda$core$Bit $tmp831 = { $tmp824 };
    $returnValue819 = $tmp831;
    return $returnValue819;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue834;
    panda$core$Object* $tmp835;
    panda$core$Object* $tmp842;
    panda$core$Bit $tmp833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp833.value) {
    {
        panda$core$Object* $tmp836 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp835 = $tmp836;
        panda$core$Bit $tmp837 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp835));
        $returnValue834 = $tmp837;
        panda$core$Panda$unref$panda$core$Object($tmp835);
        return $returnValue834;
    }
    }
    panda$core$Bit $tmp840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp839 = $tmp840.value;
    if (!$tmp839) goto $l841;
    panda$core$Object* $tmp843 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp842 = $tmp843;
    panda$core$Bit $tmp845 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp842))->name, &$s844);
    $tmp839 = $tmp845.value;
    panda$core$Panda$unref$panda$core$Object($tmp842);
    $l841:;
    panda$core$Bit $tmp846 = { $tmp839 };
    $returnValue834 = $tmp846;
    return $returnValue834;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue852;
    org$pandalanguage$pandac$Type* $tmp853;
    panda$collections$Array* subtypes856 = NULL;
    panda$collections$Array* $tmp857;
    panda$collections$Array* $tmp858;
    org$pandalanguage$pandac$Type* $tmp860;
    org$pandalanguage$pandac$Type* $tmp861;
    panda$core$String* $tmp863;
    panda$core$String* $tmp864;
    org$pandalanguage$pandac$Type$Kind $tmp868;
    org$pandalanguage$pandac$Position $tmp869;
    int $tmp850;
    {
        panda$core$Bit $tmp851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp851.value) {
        {
            $tmp853 = self;
            $returnValue852 = $tmp853;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp853));
            $tmp850 = 0;
            goto $l848;
            $l854:;
            return $returnValue852;
        }
        }
        panda$collections$Array* $tmp859 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp859);
        $tmp858 = $tmp859;
        $tmp857 = $tmp858;
        subtypes856 = $tmp857;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp857));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp858));
        panda$collections$Array$add$panda$collections$Array$T(subtypes856, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp862 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp865 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp864 = $tmp865;
        panda$core$String* $tmp867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp864, &$s866);
        $tmp863 = $tmp867;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp868, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Position$init(&$tmp869);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp862, $tmp863, $tmp868, $tmp869, ((panda$collections$ListView*) subtypes856), ((panda$core$Bit) { true }));
        $tmp861 = $tmp862;
        $tmp860 = $tmp861;
        $returnValue852 = $tmp860;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp860));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp861));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp863));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp864));
        $tmp850 = 1;
        goto $l848;
        $l870:;
        return $returnValue852;
    }
    $l848:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes856));
    subtypes856 = NULL;
    switch ($tmp850) {
        case 1: goto $l870;
        case 0: goto $l854;
    }
    $l872:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue874;
    org$pandalanguage$pandac$Type* $tmp875;
    org$pandalanguage$pandac$Type* $tmp877;
    panda$core$Object* $tmp878;
    panda$core$Bit $tmp873 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp873.value) {
    {
        $tmp875 = self;
        $returnValue874 = $tmp875;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp875));
        return $returnValue874;
    }
    }
    panda$core$Object* $tmp879 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp878 = $tmp879;
    $tmp877 = ((org$pandalanguage$pandac$Type*) $tmp878);
    $returnValue874 = $tmp877;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp877));
    panda$core$Panda$unref$panda$core$Object($tmp878);
    return $returnValue874;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $returnValue885;
    org$pandalanguage$pandac$Type* $tmp886;
    org$pandalanguage$pandac$Type* $tmp889;
    org$pandalanguage$pandac$Type* $tmp893;
    org$pandalanguage$pandac$Type* $tmp896;
    org$pandalanguage$pandac$Type* $tmp897;
    org$pandalanguage$pandac$Type* $tmp901;
    org$pandalanguage$pandac$Type* $tmp905;
    org$pandalanguage$pandac$Type* $tmp908;
    org$pandalanguage$pandac$Type* $tmp909;
    org$pandalanguage$pandac$Type* $tmp918;
    org$pandalanguage$pandac$Type* $tmp926;
    org$pandalanguage$pandac$Type* $tmp935;
    org$pandalanguage$pandac$Type* $tmp941;
    org$pandalanguage$pandac$Type* $tmp942;
    org$pandalanguage$pandac$Type* $tmp946;
    org$pandalanguage$pandac$Type* $tmp947;
    org$pandalanguage$pandac$Type* $tmp957;
    org$pandalanguage$pandac$Type* $tmp963;
    org$pandalanguage$pandac$Type* $tmp964;
    org$pandalanguage$pandac$Type* $tmp968;
    org$pandalanguage$pandac$Type* $tmp969;
    org$pandalanguage$pandac$Type* $tmp974;
    org$pandalanguage$pandac$Type* $tmp975;
    org$pandalanguage$pandac$Type* $tmp976;
    panda$core$Object* $tmp977;
    org$pandalanguage$pandac$Type* $tmp984;
    org$pandalanguage$pandac$Type* $tmp985;
    org$pandalanguage$pandac$Type* $tmp986;
    panda$core$Object* $tmp987;
    org$pandalanguage$pandac$Type* t1993 = NULL;
    org$pandalanguage$pandac$Type* $tmp994;
    org$pandalanguage$pandac$Type* $tmp995;
    org$pandalanguage$pandac$Type* t2997 = NULL;
    org$pandalanguage$pandac$Type* $tmp998;
    org$pandalanguage$pandac$Type* $tmp999;
    panda$collections$Set* ancestors1009 = NULL;
    panda$collections$Set* $tmp1010;
    panda$collections$Set* $tmp1011;
    org$pandalanguage$pandac$Type* t1013 = NULL;
    org$pandalanguage$pandac$Type* $tmp1014;
    org$pandalanguage$pandac$ClassDecl* cl1015 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1016;
    org$pandalanguage$pandac$ClassDecl* $tmp1017;
    org$pandalanguage$pandac$Type* $tmp1022;
    org$pandalanguage$pandac$Type* $tmp1023;
    org$pandalanguage$pandac$Type* $tmp1024;
    org$pandalanguage$pandac$ClassDecl* $tmp1026;
    org$pandalanguage$pandac$ClassDecl* $tmp1027;
    org$pandalanguage$pandac$ClassDecl* $tmp1028;
    org$pandalanguage$pandac$ClassDecl* $tmp1030;
    org$pandalanguage$pandac$ClassDecl* $tmp1031;
    org$pandalanguage$pandac$Type* $tmp1032;
    org$pandalanguage$pandac$Type* $tmp1033;
    org$pandalanguage$pandac$ClassDecl* $tmp1034;
    org$pandalanguage$pandac$ClassDecl* $tmp1035;
    org$pandalanguage$pandac$ClassDecl* $tmp1036;
    org$pandalanguage$pandac$Type* $tmp1042;
    org$pandalanguage$pandac$Type* $tmp1046;
    org$pandalanguage$pandac$Type* $tmp1047;
    org$pandalanguage$pandac$Type* $tmp1048;
    org$pandalanguage$pandac$ClassDecl* $tmp1050;
    org$pandalanguage$pandac$ClassDecl* $tmp1051;
    org$pandalanguage$pandac$ClassDecl* $tmp1052;
    org$pandalanguage$pandac$ClassDecl* $tmp1054;
    org$pandalanguage$pandac$ClassDecl* $tmp1055;
    org$pandalanguage$pandac$Type* $tmp1057;
    org$pandalanguage$pandac$Type* $tmp1058;
    int $tmp883;
    {
        panda$core$Bit $tmp884 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp884.value) {
        {
            $tmp886 = self;
            $returnValue885 = $tmp886;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp886));
            $tmp883 = 0;
            goto $l881;
            $l887:;
            return $returnValue885;
        }
        }
        org$pandalanguage$pandac$Type* $tmp890 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp889 = $tmp890;
        panda$core$Bit $tmp891 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp889);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp889));
        if ($tmp891.value) {
        {
            panda$core$Bit $tmp892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp892.value) {
            {
                $tmp893 = p_other;
                $returnValue885 = $tmp893;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp893));
                $tmp883 = 1;
                goto $l881;
                $l894:;
                return $returnValue885;
            }
            }
            org$pandalanguage$pandac$Type* $tmp898 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp897 = $tmp898;
            $tmp896 = $tmp897;
            $returnValue885 = $tmp896;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp896));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp897));
            $tmp883 = 2;
            goto $l881;
            $l899:;
            return $returnValue885;
        }
        }
        org$pandalanguage$pandac$Type* $tmp902 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp901 = $tmp902;
        panda$core$Bit $tmp903 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp901);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp901));
        if ($tmp903.value) {
        {
            panda$core$Bit $tmp904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp904.value) {
            {
                $tmp905 = self;
                $returnValue885 = $tmp905;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp905));
                $tmp883 = 3;
                goto $l881;
                $l906:;
                return $returnValue885;
            }
            }
            org$pandalanguage$pandac$Type* $tmp910 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp909 = $tmp910;
            $tmp908 = $tmp909;
            $returnValue885 = $tmp908;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp908));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
            $tmp883 = 4;
            goto $l881;
            $l911:;
            return $returnValue885;
        }
        }
        panda$core$Bit $tmp914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        bool $tmp913 = $tmp914.value;
        if (!$tmp913) goto $l915;
        panda$core$Bit $tmp916 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp913 = $tmp916.value;
        $l915:;
        panda$core$Bit $tmp917 = { $tmp913 };
        if ($tmp917.value) {
        {
            $tmp918 = p_other;
            $returnValue885 = $tmp918;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp918));
            $tmp883 = 5;
            goto $l881;
            $l919:;
            return $returnValue885;
        }
        }
        panda$core$Bit $tmp922 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp921 = $tmp922.value;
        if (!$tmp921) goto $l923;
        panda$core$Bit $tmp924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        $tmp921 = $tmp924.value;
        $l923:;
        panda$core$Bit $tmp925 = { $tmp921 };
        if ($tmp925.value) {
        {
            $tmp926 = self;
            $returnValue885 = $tmp926;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp926));
            $tmp883 = 6;
            goto $l881;
            $l927:;
            return $returnValue885;
        }
        }
        panda$core$Bit $tmp929 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp929.value) {
        {
            panda$core$Bit $tmp931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp930 = $tmp931.value;
            if ($tmp930) goto $l932;
            panda$core$Bit $tmp933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp930 = $tmp933.value;
            $l932:;
            panda$core$Bit $tmp934 = { $tmp930 };
            if ($tmp934.value) {
            {
                $tmp935 = self;
                $returnValue885 = $tmp935;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp935));
                $tmp883 = 7;
                goto $l881;
                $l936:;
                return $returnValue885;
            }
            }
            panda$core$Bit $tmp938 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp938.value) {
            {
                panda$core$Bit $tmp940 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s939);
                if ($tmp940.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp943 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp942 = $tmp943;
                    $tmp941 = $tmp942;
                    $returnValue885 = $tmp941;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp941));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp942));
                    $tmp883 = 8;
                    goto $l881;
                    $l944:;
                    return $returnValue885;
                }
                }
                org$pandalanguage$pandac$Type* $tmp948 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp947 = $tmp948;
                $tmp946 = $tmp947;
                $returnValue885 = $tmp946;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp946));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp947));
                $tmp883 = 9;
                goto $l881;
                $l949:;
                return $returnValue885;
            }
            }
        }
        }
        panda$core$Bit $tmp951 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp951.value) {
        {
            panda$core$Bit $tmp953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp952 = $tmp953.value;
            if ($tmp952) goto $l954;
            panda$core$Bit $tmp955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp952 = $tmp955.value;
            $l954:;
            panda$core$Bit $tmp956 = { $tmp952 };
            if ($tmp956.value) {
            {
                $tmp957 = p_other;
                $returnValue885 = $tmp957;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp957));
                $tmp883 = 10;
                goto $l881;
                $l958:;
                return $returnValue885;
            }
            }
            panda$core$Bit $tmp960 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp960.value) {
            {
                panda$core$Bit $tmp962 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s961);
                if ($tmp962.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp965 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp964 = $tmp965;
                    $tmp963 = $tmp964;
                    $returnValue885 = $tmp963;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp963));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp964));
                    $tmp883 = 11;
                    goto $l881;
                    $l966:;
                    return $returnValue885;
                }
                }
                org$pandalanguage$pandac$Type* $tmp970 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp969 = $tmp970;
                $tmp968 = $tmp969;
                $returnValue885 = $tmp968;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp968));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
                $tmp883 = 12;
                goto $l881;
                $l971:;
                return $returnValue885;
            }
            }
        }
        }
        panda$core$Bit $tmp973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp973.value) {
        {
            panda$core$Object* $tmp978 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp977 = $tmp978;
            org$pandalanguage$pandac$Type* $tmp979 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp977), p_compiler, p_other);
            $tmp976 = $tmp979;
            org$pandalanguage$pandac$Type* $tmp980 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp976);
            $tmp975 = $tmp980;
            $tmp974 = $tmp975;
            $returnValue885 = $tmp974;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp974));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp975));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp976));
            panda$core$Panda$unref$panda$core$Object($tmp977);
            $tmp883 = 13;
            goto $l881;
            $l981:;
            return $returnValue885;
        }
        }
        panda$core$Bit $tmp983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp983.value) {
        {
            panda$core$Object* $tmp988 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
            $tmp987 = $tmp988;
            org$pandalanguage$pandac$Type* $tmp989 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp987));
            $tmp986 = $tmp989;
            org$pandalanguage$pandac$Type* $tmp990 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp986);
            $tmp985 = $tmp990;
            $tmp984 = $tmp985;
            $returnValue885 = $tmp984;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp984));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp985));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp986));
            panda$core$Panda$unref$panda$core$Object($tmp987);
            $tmp883 = 14;
            goto $l881;
            $l991:;
            return $returnValue885;
        }
        }
        org$pandalanguage$pandac$Type* $tmp996 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp995 = $tmp996;
        $tmp994 = $tmp995;
        t1993 = $tmp994;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp994));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp995));
        org$pandalanguage$pandac$Type* $tmp1000 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp999 = $tmp1000;
        $tmp998 = $tmp999;
        t2997 = $tmp998;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp998));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp999));
        panda$core$Bit $tmp1002 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t1993);
        bool $tmp1001 = $tmp1002.value;
        if (!$tmp1001) goto $l1003;
        panda$core$Bit $tmp1004 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t2997);
        $tmp1001 = $tmp1004.value;
        $l1003:;
        panda$core$Bit $tmp1005 = { $tmp1001 };
        if ($tmp1005.value) {
        {
            int $tmp1008;
            {
                panda$collections$Set* $tmp1012 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
                panda$collections$Set$init($tmp1012);
                $tmp1011 = $tmp1012;
                $tmp1010 = $tmp1011;
                ancestors1009 = $tmp1010;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1010));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1011));
                $tmp1014 = self;
                t1013 = $tmp1014;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1014));
                org$pandalanguage$pandac$ClassDecl* $tmp1018 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1993);
                $tmp1017 = $tmp1018;
                $tmp1016 = $tmp1017;
                cl1015 = $tmp1016;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1016));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1017));
                $l1019:;
                bool $tmp1021 = ((panda$core$Bit) { cl1015 != NULL }).value;
                if (!$tmp1021) goto $l1020;
                {
                    panda$collections$Set$add$panda$collections$Set$T(ancestors1009, ((panda$collections$Key*) t1013));
                    if (((panda$core$Bit) { cl1015->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1022 = t1013;
                            org$pandalanguage$pandac$Type* $tmp1025 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1013, cl1015->rawSuper);
                            $tmp1024 = $tmp1025;
                            $tmp1023 = $tmp1024;
                            t1013 = $tmp1023;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1023));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1024));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1022));
                        }
                        {
                            $tmp1026 = cl1015;
                            org$pandalanguage$pandac$ClassDecl* $tmp1029 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1013);
                            $tmp1028 = $tmp1029;
                            $tmp1027 = $tmp1028;
                            cl1015 = $tmp1027;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1027));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1028));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1026));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1030 = cl1015;
                            $tmp1031 = NULL;
                            cl1015 = $tmp1031;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1031));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1030));
                        }
                    }
                    }
                }
                goto $l1019;
                $l1020:;
                {
                    $tmp1032 = t1013;
                    $tmp1033 = p_other;
                    t1013 = $tmp1033;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1033));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1032));
                }
                {
                    $tmp1034 = cl1015;
                    org$pandalanguage$pandac$ClassDecl* $tmp1037 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t2997);
                    $tmp1036 = $tmp1037;
                    $tmp1035 = $tmp1036;
                    cl1015 = $tmp1035;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1035));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1036));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1034));
                }
                $l1038:;
                bool $tmp1040 = ((panda$core$Bit) { cl1015 != NULL }).value;
                if (!$tmp1040) goto $l1039;
                {
                    panda$core$Bit $tmp1041 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors1009, ((panda$collections$Key*) t1013));
                    if ($tmp1041.value) {
                    {
                        $tmp1042 = t1013;
                        $returnValue885 = $tmp1042;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1042));
                        $tmp1008 = 0;
                        goto $l1006;
                        $l1043:;
                        $tmp883 = 15;
                        goto $l881;
                        $l1044:;
                        return $returnValue885;
                    }
                    }
                    if (((panda$core$Bit) { cl1015->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1046 = t1013;
                            org$pandalanguage$pandac$Type* $tmp1049 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1013, cl1015->rawSuper);
                            $tmp1048 = $tmp1049;
                            $tmp1047 = $tmp1048;
                            t1013 = $tmp1047;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1047));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1046));
                        }
                        {
                            $tmp1050 = cl1015;
                            org$pandalanguage$pandac$ClassDecl* $tmp1053 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1013);
                            $tmp1052 = $tmp1053;
                            $tmp1051 = $tmp1052;
                            cl1015 = $tmp1051;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1051));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1052));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1050));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1054 = cl1015;
                            $tmp1055 = NULL;
                            cl1015 = $tmp1055;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1055));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1054));
                        }
                    }
                    }
                }
                goto $l1038;
                $l1039:;
            }
            $tmp1008 = -1;
            goto $l1006;
            $l1006:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors1009));
            ancestors1009 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1013));
            t1013 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1015));
            cl1015 = NULL;
            switch ($tmp1008) {
                case -1: goto $l1056;
                case 0: goto $l1043;
            }
            $l1056:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1059 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp1058 = $tmp1059;
        $tmp1057 = $tmp1058;
        $returnValue885 = $tmp1057;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1057));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1058));
        $tmp883 = 16;
        goto $l881;
        $l1060:;
        return $returnValue885;
    }
    $l881:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1993));
    t1993 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2997));
    t2997 = NULL;
    switch ($tmp883) {
        case 4: goto $l911;
        case 6: goto $l927;
        case 8: goto $l944;
        case 2: goto $l899;
        case 10: goto $l958;
        case 5: goto $l919;
        case 11: goto $l966;
        case 7: goto $l936;
        case 15: goto $l1044;
        case 12: goto $l971;
        case 13: goto $l981;
        case 9: goto $l949;
        case 14: goto $l991;
        case 1: goto $l894;
        case 0: goto $l887;
        case 3: goto $l906;
        case 16: goto $l1060;
    }
    $l1062:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* $returnValue1065;
    org$pandalanguage$pandac$Type* $tmp1066;
    org$pandalanguage$pandac$Type$Kind $match$582_91068;
    org$pandalanguage$pandac$Type* found1073 = NULL;
    org$pandalanguage$pandac$Type* $tmp1074;
    panda$core$Object* $tmp1075;
    org$pandalanguage$pandac$Type* $tmp1077;
    org$pandalanguage$pandac$Type* $tmp1080;
    org$pandalanguage$pandac$Type* base1088 = NULL;
    org$pandalanguage$pandac$Type* $tmp1089;
    org$pandalanguage$pandac$Type* $tmp1090;
    panda$core$Object* $tmp1091;
    panda$collections$Array* remappedArgs1094 = NULL;
    panda$collections$Array* $tmp1095;
    panda$collections$Array* $tmp1096;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1098;
    org$pandalanguage$pandac$Type* $tmp1113;
    panda$core$Object* $tmp1114;
    org$pandalanguage$pandac$Type* $tmp1123;
    org$pandalanguage$pandac$Type* $tmp1124;
    org$pandalanguage$pandac$Type* $tmp1130;
    org$pandalanguage$pandac$Type* $tmp1131;
    org$pandalanguage$pandac$Type* $tmp1132;
    panda$core$Object* $tmp1133;
    panda$collections$Array* remapped1154 = NULL;
    panda$collections$Array* $tmp1155;
    panda$collections$Array* $tmp1156;
    panda$core$MutableString* name1158 = NULL;
    panda$core$MutableString* $tmp1159;
    panda$core$MutableString* $tmp1160;
    panda$core$String* separator1163 = NULL;
    panda$core$String* $tmp1164;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1168;
    org$pandalanguage$pandac$Type* child1187 = NULL;
    org$pandalanguage$pandac$Type* $tmp1188;
    org$pandalanguage$pandac$Type* $tmp1189;
    panda$core$Object* $tmp1190;
    panda$core$String* $tmp1193;
    panda$core$String* $tmp1194;
    org$pandalanguage$pandac$Type$Kind $match$610_171203;
    panda$core$Object* $tmp1212;
    org$pandalanguage$pandac$Type* $tmp1216;
    org$pandalanguage$pandac$Type* child1222 = NULL;
    org$pandalanguage$pandac$Type* $tmp1223;
    org$pandalanguage$pandac$Type* $tmp1224;
    panda$core$Object* $tmp1225;
    org$pandalanguage$pandac$Type* $tmp1231;
    panda$core$Char8 $tmp1233;
    org$pandalanguage$pandac$Type* $tmp1234;
    org$pandalanguage$pandac$Type* $tmp1235;
    panda$core$String* $tmp1237;
    org$pandalanguage$pandac$Type* $tmp1242;
    panda$core$Int64 $tmp1063 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp1064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1063, ((panda$core$Int64) { 0 }));
    if ($tmp1064.value) {
    {
        $tmp1066 = self;
        $returnValue1065 = $tmp1066;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1066));
        return $returnValue1065;
    }
    }
    {
        $match$582_91068 = self->typeKind;
        panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$582_91068.$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1069.value) {
        {
            int $tmp1072;
            {
                panda$core$Object* $tmp1076 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                $tmp1075 = $tmp1076;
                $tmp1074 = ((org$pandalanguage$pandac$Type*) $tmp1075);
                found1073 = $tmp1074;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1074));
                panda$core$Panda$unref$panda$core$Object($tmp1075);
                if (((panda$core$Bit) { found1073 != NULL }).value) {
                {
                    $tmp1077 = found1073;
                    $returnValue1065 = $tmp1077;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1077));
                    $tmp1072 = 0;
                    goto $l1070;
                    $l1078:;
                    return $returnValue1065;
                }
                }
                $tmp1080 = self;
                $returnValue1065 = $tmp1080;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1080));
                $tmp1072 = 1;
                goto $l1070;
                $l1081:;
                return $returnValue1065;
            }
            $l1070:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found1073));
            found1073 = NULL;
            switch ($tmp1072) {
                case 1: goto $l1081;
                case 0: goto $l1078;
            }
            $l1083:;
        }
        }
        else {
        panda$core$Bit $tmp1084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$582_91068.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1084.value) {
        {
            int $tmp1087;
            {
                panda$core$Object* $tmp1092 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
                $tmp1091 = $tmp1092;
                org$pandalanguage$pandac$Type* $tmp1093 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1091), p_types);
                $tmp1090 = $tmp1093;
                $tmp1089 = $tmp1090;
                base1088 = $tmp1089;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1089));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1090));
                panda$core$Panda$unref$panda$core$Object($tmp1091);
                panda$collections$Array* $tmp1097 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1097);
                $tmp1096 = $tmp1097;
                $tmp1095 = $tmp1096;
                remappedArgs1094 = $tmp1095;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1095));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1096));
                panda$core$Int64 $tmp1099 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1098, ((panda$core$Int64) { 1 }), $tmp1099, ((panda$core$Bit) { false }));
                int64_t $tmp1101 = $tmp1098.min.value;
                panda$core$Int64 i1100 = { $tmp1101 };
                int64_t $tmp1103 = $tmp1098.max.value;
                bool $tmp1104 = $tmp1098.inclusive.value;
                if ($tmp1104) goto $l1111; else goto $l1112;
                $l1111:;
                if ($tmp1101 <= $tmp1103) goto $l1105; else goto $l1107;
                $l1112:;
                if ($tmp1101 < $tmp1103) goto $l1105; else goto $l1107;
                $l1105:;
                {
                    panda$core$Object* $tmp1115 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1100);
                    $tmp1114 = $tmp1115;
                    org$pandalanguage$pandac$Type* $tmp1116 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1114), p_types);
                    $tmp1113 = $tmp1116;
                    panda$collections$Array$add$panda$collections$Array$T(remappedArgs1094, ((panda$core$Object*) $tmp1113));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1113));
                    panda$core$Panda$unref$panda$core$Object($tmp1114);
                }
                $l1108:;
                int64_t $tmp1118 = $tmp1103 - i1100.value;
                if ($tmp1104) goto $l1119; else goto $l1120;
                $l1119:;
                if ((uint64_t) $tmp1118 >= 1) goto $l1117; else goto $l1107;
                $l1120:;
                if ((uint64_t) $tmp1118 > 1) goto $l1117; else goto $l1107;
                $l1117:;
                i1100.value += 1;
                goto $l1105;
                $l1107:;
                org$pandalanguage$pandac$Type* $tmp1125 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base1088, ((panda$collections$ListView*) remappedArgs1094));
                $tmp1124 = $tmp1125;
                $tmp1123 = $tmp1124;
                $returnValue1065 = $tmp1123;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1123));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1124));
                $tmp1087 = 0;
                goto $l1085;
                $l1126:;
                return $returnValue1065;
            }
            $l1085:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1088));
            base1088 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remappedArgs1094));
            remappedArgs1094 = NULL;
            switch ($tmp1087) {
                case 0: goto $l1126;
            }
            $l1128:;
        }
        }
        else {
        panda$core$Bit $tmp1129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$582_91068.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1129.value) {
        {
            panda$core$Object* $tmp1134 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1133 = $tmp1134;
            org$pandalanguage$pandac$Type* $tmp1135 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1133), p_types);
            $tmp1132 = $tmp1135;
            org$pandalanguage$pandac$Type* $tmp1136 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1132);
            $tmp1131 = $tmp1136;
            $tmp1130 = $tmp1131;
            $returnValue1065 = $tmp1130;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1130));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1131));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1132));
            panda$core$Panda$unref$panda$core$Object($tmp1133);
            return $returnValue1065;
        }
        }
        else {
        panda$core$Bit $tmp1141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$582_91068.$rawValue, ((panda$core$Int64) { 15 }));
        bool $tmp1140 = $tmp1141.value;
        if ($tmp1140) goto $l1142;
        panda$core$Bit $tmp1143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$582_91068.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp1140 = $tmp1143.value;
        $l1142:;
        panda$core$Bit $tmp1144 = { $tmp1140 };
        bool $tmp1139 = $tmp1144.value;
        if ($tmp1139) goto $l1145;
        panda$core$Bit $tmp1146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$582_91068.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp1139 = $tmp1146.value;
        $l1145:;
        panda$core$Bit $tmp1147 = { $tmp1139 };
        bool $tmp1138 = $tmp1147.value;
        if ($tmp1138) goto $l1148;
        panda$core$Bit $tmp1149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$582_91068.$rawValue, ((panda$core$Int64) { 16 }));
        $tmp1138 = $tmp1149.value;
        $l1148:;
        panda$core$Bit $tmp1150 = { $tmp1138 };
        if ($tmp1150.value) {
        {
            int $tmp1153;
            {
                panda$collections$Array* $tmp1157 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1157);
                $tmp1156 = $tmp1157;
                $tmp1155 = $tmp1156;
                remapped1154 = $tmp1155;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1155));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1156));
                panda$core$MutableString* $tmp1161 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1161, &$s1162);
                $tmp1160 = $tmp1161;
                $tmp1159 = $tmp1160;
                name1158 = $tmp1159;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1159));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1160));
                $tmp1164 = &$s1165;
                separator1163 = $tmp1164;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1164));
                panda$core$Int64 $tmp1166 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Bit $tmp1167 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1166, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1167.value);
                panda$core$Int64 $tmp1169 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1170 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1169, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1168, ((panda$core$Int64) { 0 }), $tmp1170, ((panda$core$Bit) { false }));
                int64_t $tmp1172 = $tmp1168.min.value;
                panda$core$Int64 i1171 = { $tmp1172 };
                int64_t $tmp1174 = $tmp1168.max.value;
                bool $tmp1175 = $tmp1168.inclusive.value;
                if ($tmp1175) goto $l1182; else goto $l1183;
                $l1182:;
                if ($tmp1172 <= $tmp1174) goto $l1176; else goto $l1178;
                $l1183:;
                if ($tmp1172 < $tmp1174) goto $l1176; else goto $l1178;
                $l1176:;
                {
                    int $tmp1186;
                    {
                        panda$core$Object* $tmp1191 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1171);
                        $tmp1190 = $tmp1191;
                        org$pandalanguage$pandac$Type* $tmp1192 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1190), p_types);
                        $tmp1189 = $tmp1192;
                        $tmp1188 = $tmp1189;
                        child1187 = $tmp1188;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1188));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1189));
                        panda$core$Panda$unref$panda$core$Object($tmp1190);
                        panda$core$MutableString$append$panda$core$String(name1158, separator1163);
                        panda$core$MutableString$append$panda$core$String(name1158, ((org$pandalanguage$pandac$Symbol*) child1187)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1154, ((panda$core$Object*) child1187));
                        {
                            $tmp1193 = separator1163;
                            $tmp1194 = &$s1195;
                            separator1163 = $tmp1194;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1194));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1193));
                        }
                    }
                    $tmp1186 = -1;
                    goto $l1184;
                    $l1184:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1187));
                    child1187 = NULL;
                    switch ($tmp1186) {
                        case -1: goto $l1196;
                    }
                    $l1196:;
                }
                $l1179:;
                int64_t $tmp1198 = $tmp1174 - i1171.value;
                if ($tmp1175) goto $l1199; else goto $l1200;
                $l1199:;
                if ((uint64_t) $tmp1198 >= 1) goto $l1197; else goto $l1178;
                $l1200:;
                if ((uint64_t) $tmp1198 > 1) goto $l1197; else goto $l1178;
                $l1197:;
                i1171.value += 1;
                goto $l1176;
                $l1178:;
                {
                    $match$610_171203 = self->typeKind;
                    panda$core$Bit $tmp1204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$610_171203.$rawValue, ((panda$core$Int64) { 14 }));
                    if ($tmp1204.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1158, &$s1205);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$610_171203.$rawValue, ((panda$core$Int64) { 15 }));
                    if ($tmp1206.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1158, &$s1207);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$610_171203.$rawValue, ((panda$core$Int64) { 16 }));
                    if ($tmp1208.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1158, &$s1209);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$610_171203.$rawValue, ((panda$core$Int64) { 17 }));
                    if ($tmp1210.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1158, &$s1211);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$Int64 $tmp1213 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1214 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1213, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1214);
                $tmp1212 = $tmp1215;
                org$pandalanguage$pandac$Type* $tmp1217 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1216 = $tmp1217;
                panda$core$Bit $tmp1218 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1212), $tmp1216);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1216));
                panda$core$Panda$unref$panda$core$Object($tmp1212);
                if ($tmp1218.value) {
                {
                    int $tmp1221;
                    {
                        panda$core$Int64 $tmp1226 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                        panda$core$Int64 $tmp1227 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1226, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1228 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1227);
                        $tmp1225 = $tmp1228;
                        org$pandalanguage$pandac$Type* $tmp1229 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1225), p_types);
                        $tmp1224 = $tmp1229;
                        $tmp1223 = $tmp1224;
                        child1222 = $tmp1223;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1223));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1224));
                        panda$core$Panda$unref$panda$core$Object($tmp1225);
                        panda$core$MutableString$append$panda$core$String(name1158, ((org$pandalanguage$pandac$Symbol*) child1222)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1154, ((panda$core$Object*) child1222));
                    }
                    $tmp1221 = -1;
                    goto $l1219;
                    $l1219:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1222));
                    child1222 = NULL;
                    switch ($tmp1221) {
                        case -1: goto $l1230;
                    }
                    $l1230:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1232 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                    $tmp1231 = $tmp1232;
                    panda$collections$Array$add$panda$collections$Array$T(remapped1154, ((panda$core$Object*) $tmp1231));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1231));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1233, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(name1158, $tmp1233);
                org$pandalanguage$pandac$Type* $tmp1236 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp1238 = panda$core$MutableString$finish$R$panda$core$String(name1158);
                $tmp1237 = $tmp1238;
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1236, $tmp1237, self->typeKind, self->position, ((panda$collections$ListView*) remapped1154), self->resolved);
                $tmp1235 = $tmp1236;
                $tmp1234 = $tmp1235;
                $returnValue1065 = $tmp1234;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1234));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1235));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1237));
                $tmp1153 = 0;
                goto $l1151;
                $l1239:;
                return $returnValue1065;
            }
            $l1151:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped1154));
            remapped1154 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1158));
            name1158 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1163));
            separator1163 = NULL;
            switch ($tmp1153) {
                case 0: goto $l1239;
            }
            $l1241:;
        }
        }
        else {
        {
            $tmp1242 = self;
            $returnValue1065 = $tmp1242;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1242));
            return $returnValue1065;
        }
        }
        }
        }
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue1244;
    panda$core$Int64 $tmp1245 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $returnValue1244 = $tmp1245;
    return $returnValue1244;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $returnValue1247;
    panda$core$String* $tmp1248;
    $tmp1248 = self->name;
    $returnValue1247 = $tmp1248;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1248));
    return $returnValue1247;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1252;
    {
    }
    $tmp1252 = -1;
    goto $l1250;
    $l1250:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1252) {
        case -1: goto $l1253;
    }
    $l1253:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

