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
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -1180377256514028899, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s1225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };

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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue327;
    org$pandalanguage$pandac$Type* $tmp328;
    org$pandalanguage$pandac$Type* $tmp329;
    org$pandalanguage$pandac$Type$Kind $tmp332;
    org$pandalanguage$pandac$Position $tmp333;
    org$pandalanguage$pandac$Type* $tmp330 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp332, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp333);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp330, &$s331, $tmp332, $tmp333, ((panda$core$Bit) { true }));
    $tmp329 = $tmp330;
    $tmp328 = $tmp329;
    $returnValue327 = $tmp328;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp328));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
    return $returnValue327;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue335;
    org$pandalanguage$pandac$Type* $tmp336;
    org$pandalanguage$pandac$Type* $tmp337;
    org$pandalanguage$pandac$Type$Kind $tmp340;
    org$pandalanguage$pandac$Type* $tmp338 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp340, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp338, &$s339, $tmp340, ((panda$core$Int64) { 8 }));
    $tmp337 = $tmp338;
    $tmp336 = $tmp337;
    $returnValue335 = $tmp336;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp336));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp337));
    return $returnValue335;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue342;
    org$pandalanguage$pandac$Type* $tmp343;
    org$pandalanguage$pandac$Type* $tmp344;
    org$pandalanguage$pandac$Type$Kind $tmp347;
    org$pandalanguage$pandac$Type* $tmp345 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp347, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp345, &$s346, $tmp347, ((panda$core$Int64) { 16 }));
    $tmp344 = $tmp345;
    $tmp343 = $tmp344;
    $returnValue342 = $tmp343;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp343));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
    return $returnValue342;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue349;
    org$pandalanguage$pandac$Type* $tmp350;
    org$pandalanguage$pandac$Type* $tmp351;
    org$pandalanguage$pandac$Type$Kind $tmp354;
    org$pandalanguage$pandac$Type* $tmp352 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp354, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp352, &$s353, $tmp354, ((panda$core$Int64) { 32 }));
    $tmp351 = $tmp352;
    $tmp350 = $tmp351;
    $returnValue349 = $tmp350;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
    return $returnValue349;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue356;
    org$pandalanguage$pandac$Type* $tmp357;
    org$pandalanguage$pandac$Type* $tmp358;
    org$pandalanguage$pandac$Type$Kind $tmp361;
    org$pandalanguage$pandac$Type* $tmp359 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp361, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp359, &$s360, $tmp361, ((panda$core$Int64) { 64 }));
    $tmp358 = $tmp359;
    $tmp357 = $tmp358;
    $returnValue356 = $tmp357;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp357));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp358));
    return $returnValue356;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue363;
    org$pandalanguage$pandac$Type* $tmp364;
    org$pandalanguage$pandac$Type* $tmp365;
    org$pandalanguage$pandac$Type$Kind $tmp368;
    org$pandalanguage$pandac$Type* $tmp366 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp368, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp366, &$s367, $tmp368, ((panda$core$Int64) { 8 }));
    $tmp365 = $tmp366;
    $tmp364 = $tmp365;
    $returnValue363 = $tmp364;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp364));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
    return $returnValue363;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue370;
    org$pandalanguage$pandac$Type* $tmp371;
    org$pandalanguage$pandac$Type* $tmp372;
    org$pandalanguage$pandac$Type$Kind $tmp375;
    org$pandalanguage$pandac$Type* $tmp373 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp375, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp373, &$s374, $tmp375, ((panda$core$Int64) { 16 }));
    $tmp372 = $tmp373;
    $tmp371 = $tmp372;
    $returnValue370 = $tmp371;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp371));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp372));
    return $returnValue370;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue377;
    org$pandalanguage$pandac$Type* $tmp378;
    org$pandalanguage$pandac$Type* $tmp379;
    org$pandalanguage$pandac$Type$Kind $tmp382;
    org$pandalanguage$pandac$Type* $tmp380 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp382, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp380, &$s381, $tmp382, ((panda$core$Int64) { 32 }));
    $tmp379 = $tmp380;
    $tmp378 = $tmp379;
    $returnValue377 = $tmp378;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
    return $returnValue377;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue384;
    org$pandalanguage$pandac$Type* $tmp385;
    org$pandalanguage$pandac$Type* $tmp386;
    org$pandalanguage$pandac$Type$Kind $tmp389;
    org$pandalanguage$pandac$Type* $tmp387 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp389, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp387, &$s388, $tmp389, ((panda$core$Int64) { 64 }));
    $tmp386 = $tmp387;
    $tmp385 = $tmp386;
    $returnValue384 = $tmp385;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp385));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp386));
    return $returnValue384;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue391;
    org$pandalanguage$pandac$Type* $tmp392;
    org$pandalanguage$pandac$Type* $tmp393;
    org$pandalanguage$pandac$Type$Kind $tmp396;
    org$pandalanguage$pandac$Type* $tmp394 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp396, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp394, &$s395, $tmp396, ((panda$core$Int64) { 32 }));
    $tmp393 = $tmp394;
    $tmp392 = $tmp393;
    $returnValue391 = $tmp392;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp392));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
    return $returnValue391;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue398;
    org$pandalanguage$pandac$Type* $tmp399;
    org$pandalanguage$pandac$Type* $tmp400;
    org$pandalanguage$pandac$Type$Kind $tmp403;
    org$pandalanguage$pandac$Type* $tmp401 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp403, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp401, &$s402, $tmp403, ((panda$core$Int64) { 64 }));
    $tmp400 = $tmp401;
    $tmp399 = $tmp400;
    $returnValue398 = $tmp399;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp399));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp400));
    return $returnValue398;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue509;
    org$pandalanguage$pandac$Type* $tmp510;
    org$pandalanguage$pandac$Type* $tmp511;
    org$pandalanguage$pandac$Type$Kind $tmp514;
    org$pandalanguage$pandac$Position $tmp515;
    org$pandalanguage$pandac$Type* $tmp512 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp514, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp515);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp512, &$s513, $tmp514, $tmp515, ((panda$core$Bit) { true }));
    $tmp511 = $tmp512;
    $tmp510 = $tmp511;
    $returnValue509 = $tmp510;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp510));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp511));
    return $returnValue509;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue517;
    org$pandalanguage$pandac$Type* $tmp518;
    org$pandalanguage$pandac$Type* $tmp519;
    panda$core$String* $tmp521;
    org$pandalanguage$pandac$Type$Kind $tmp523;
    org$pandalanguage$pandac$Position $tmp524;
    org$pandalanguage$pandac$Type* $tmp520 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp522 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp521 = $tmp522;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp523, ((panda$core$Int64) { 5 }));
    org$pandalanguage$pandac$Position$init(&$tmp524);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp520, $tmp521, $tmp523, $tmp524, ((panda$core$Bit) { true }));
    $tmp519 = $tmp520;
    $tmp518 = $tmp519;
    $returnValue517 = $tmp518;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp518));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp519));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp521));
    return $returnValue517;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue526;
    org$pandalanguage$pandac$Type* $tmp527;
    org$pandalanguage$pandac$Type* $tmp528;
    panda$core$String* $tmp530;
    panda$core$String* $tmp532;
    org$pandalanguage$pandac$Type$Kind $tmp535;
    org$pandalanguage$pandac$Position $tmp536;
    org$pandalanguage$pandac$Type* $tmp529 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp533 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp532 = $tmp533;
    panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s531, $tmp532);
    $tmp530 = $tmp534;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp535, ((panda$core$Int64) { 5 }));
    org$pandalanguage$pandac$Position$init(&$tmp536);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp529, $tmp530, $tmp535, $tmp536, ((panda$core$Bit) { true }));
    $tmp528 = $tmp529;
    $tmp527 = $tmp528;
    $returnValue526 = $tmp527;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp527));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp528));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp530));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp532));
    return $returnValue526;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue538;
    org$pandalanguage$pandac$Type* $tmp539;
    org$pandalanguage$pandac$Type* $tmp540;
    panda$core$String* $tmp542;
    org$pandalanguage$pandac$Type$Kind $tmp544;
    org$pandalanguage$pandac$Position $tmp545;
    org$pandalanguage$pandac$Type* $tmp541 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp543 = panda$core$Real64$convert$R$panda$core$String(p_value);
    $tmp542 = $tmp543;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp544, ((panda$core$Int64) { 18 }));
    org$pandalanguage$pandac$Position$init(&$tmp545);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp541, $tmp542, $tmp544, $tmp545, ((panda$core$Bit) { true }));
    $tmp540 = $tmp541;
    $tmp539 = $tmp540;
    $returnValue538 = $tmp539;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp539));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp540));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
    return $returnValue538;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue547;
    org$pandalanguage$pandac$Type* $tmp548;
    org$pandalanguage$pandac$Type* $tmp549;
    org$pandalanguage$pandac$Type$Kind $tmp552;
    org$pandalanguage$pandac$Position $tmp553;
    org$pandalanguage$pandac$Type* $tmp550 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp552, ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$Position$init(&$tmp553);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp550, &$s551, $tmp552, $tmp553, ((panda$core$Bit) { true }));
    $tmp549 = $tmp550;
    $tmp548 = $tmp549;
    $returnValue547 = $tmp548;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp548));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
    return $returnValue547;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue555;
    org$pandalanguage$pandac$Type* $tmp556;
    org$pandalanguage$pandac$Type* $tmp557;
    org$pandalanguage$pandac$Type$Kind $tmp560;
    org$pandalanguage$pandac$Position $tmp561;
    org$pandalanguage$pandac$Type* $tmp558 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp560, ((panda$core$Int64) { 9 }));
    org$pandalanguage$pandac$Position$init(&$tmp561);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp558, &$s559, $tmp560, $tmp561, ((panda$core$Bit) { true }));
    $tmp557 = $tmp558;
    $tmp556 = $tmp557;
    $returnValue555 = $tmp556;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp556));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
    return $returnValue555;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue587;
    org$pandalanguage$pandac$Type* $tmp588;
    org$pandalanguage$pandac$Type* $tmp589;
    org$pandalanguage$pandac$Type$Kind $tmp592;
    org$pandalanguage$pandac$Position $tmp593;
    org$pandalanguage$pandac$Type* $tmp590 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp592, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp593);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp590, &$s591, $tmp592, $tmp593, ((panda$core$Bit) { true }));
    $tmp589 = $tmp590;
    $tmp588 = $tmp589;
    $returnValue587 = $tmp588;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp588));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp589));
    return $returnValue587;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue595;
    org$pandalanguage$pandac$Type* $tmp596;
    org$pandalanguage$pandac$Type* $tmp597;
    org$pandalanguage$pandac$Type$Kind $tmp600;
    org$pandalanguage$pandac$Position $tmp601;
    org$pandalanguage$pandac$Type* $tmp598 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp600, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp601);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp598, &$s599, $tmp600, $tmp601, ((panda$core$Bit) { true }));
    $tmp597 = $tmp598;
    $tmp596 = $tmp597;
    $returnValue595 = $tmp596;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp596));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp597));
    return $returnValue595;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children606 = NULL;
    panda$collections$Array* $tmp607;
    panda$collections$Array* $tmp608;
    org$pandalanguage$pandac$Type* $tmp610;
    org$pandalanguage$pandac$Type$Kind $tmp613;
    org$pandalanguage$pandac$Position $tmp614;
    org$pandalanguage$pandac$Type* $returnValue615;
    org$pandalanguage$pandac$Type* $tmp616;
    org$pandalanguage$pandac$Type* $tmp617;
    panda$core$String* $tmp619;
    panda$core$String* $tmp620;
    panda$core$String* $tmp621;
    panda$core$String* $tmp622;
    org$pandalanguage$pandac$Type$Kind $tmp630;
    int $tmp605;
    {
        panda$collections$Array* $tmp609 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp609);
        $tmp608 = $tmp609;
        $tmp607 = $tmp608;
        children606 = $tmp607;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp607));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
        org$pandalanguage$pandac$Type* $tmp611 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp613, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp614);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp611, &$s612, $tmp613, $tmp614, ((panda$core$Bit) { true }));
        $tmp610 = $tmp611;
        panda$collections$Array$add$panda$collections$Array$T(children606, ((panda$core$Object*) $tmp610));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp610));
        panda$collections$Array$add$panda$collections$Array$T(children606, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp618 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp624 = panda$core$String$convert$R$panda$core$String(&$s623);
        $tmp622 = $tmp624;
        panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp622, &$s625);
        $tmp621 = $tmp626;
        panda$core$String* $tmp627 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp621, ((panda$core$Object*) p_t));
        $tmp620 = $tmp627;
        panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp620, &$s628);
        $tmp619 = $tmp629;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp630, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp618, $tmp619, $tmp630, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children606), p_t->resolved);
        $tmp617 = $tmp618;
        $tmp616 = $tmp617;
        $returnValue615 = $tmp616;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp616));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp617));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp621));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp622));
        $tmp605 = 0;
        goto $l603;
        $l631:;
        return $returnValue615;
    }
    $l603:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children606));
    children606 = NULL;
    switch ($tmp605) {
        case 0: goto $l631;
    }
    $l633:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children637 = NULL;
    panda$collections$Array* $tmp638;
    panda$collections$Array* $tmp639;
    org$pandalanguage$pandac$Type* $returnValue641;
    org$pandalanguage$pandac$Type* $tmp642;
    org$pandalanguage$pandac$Type* $tmp643;
    org$pandalanguage$pandac$Type* $tmp644;
    org$pandalanguage$pandac$Type$Kind $tmp647;
    org$pandalanguage$pandac$Position $tmp648;
    int $tmp636;
    {
        panda$collections$Array* $tmp640 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp640);
        $tmp639 = $tmp640;
        $tmp638 = $tmp639;
        children637 = $tmp638;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp638));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
        panda$collections$Array$add$panda$collections$Array$T(children637, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp645 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp647, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp648);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp645, &$s646, $tmp647, $tmp648, ((panda$core$Bit) { true }));
        $tmp644 = $tmp645;
        org$pandalanguage$pandac$Type* $tmp649 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp644, ((panda$collections$ListView*) children637));
        $tmp643 = $tmp649;
        $tmp642 = $tmp643;
        $returnValue641 = $tmp642;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp642));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp643));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
        $tmp636 = 0;
        goto $l634;
        $l650:;
        return $returnValue641;
    }
    $l634:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children637));
    children637 = NULL;
    switch ($tmp636) {
        case 0: goto $l650;
    }
    $l652:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children656 = NULL;
    panda$collections$Array* $tmp657;
    panda$collections$Array* $tmp658;
    org$pandalanguage$pandac$Type* $returnValue660;
    org$pandalanguage$pandac$Type* $tmp661;
    org$pandalanguage$pandac$Type* $tmp662;
    org$pandalanguage$pandac$Type* $tmp663;
    org$pandalanguage$pandac$Type$Kind $tmp666;
    org$pandalanguage$pandac$Position $tmp667;
    int $tmp655;
    {
        panda$collections$Array* $tmp659 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp659);
        $tmp658 = $tmp659;
        $tmp657 = $tmp658;
        children656 = $tmp657;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp657));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp658));
        panda$collections$Array$add$panda$collections$Array$T(children656, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp664 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp666, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp667);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp664, &$s665, $tmp666, $tmp667, ((panda$core$Bit) { true }));
        $tmp663 = $tmp664;
        org$pandalanguage$pandac$Type* $tmp668 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp663, ((panda$collections$ListView*) children656));
        $tmp662 = $tmp668;
        $tmp661 = $tmp662;
        $returnValue660 = $tmp661;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp661));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp662));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp663));
        $tmp655 = 0;
        goto $l653;
        $l669:;
        return $returnValue660;
    }
    $l653:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children656));
    children656 = NULL;
    switch ($tmp655) {
        case 0: goto $l669;
    }
    $l671:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children675 = NULL;
    panda$collections$Array* $tmp676;
    panda$collections$Array* $tmp677;
    org$pandalanguage$pandac$Type* $tmp679;
    org$pandalanguage$pandac$Type* $tmp682;
    org$pandalanguage$pandac$Type* $tmp684;
    org$pandalanguage$pandac$Type* $tmp687;
    org$pandalanguage$pandac$Type* $tmp689;
    org$pandalanguage$pandac$Type* $tmp692;
    org$pandalanguage$pandac$Type* $tmp694;
    org$pandalanguage$pandac$Type* $returnValue696;
    org$pandalanguage$pandac$Type* $tmp697;
    org$pandalanguage$pandac$Type* $tmp698;
    org$pandalanguage$pandac$Type* $tmp699;
    org$pandalanguage$pandac$Type$Kind $tmp702;
    org$pandalanguage$pandac$Position $tmp703;
    int $tmp674;
    {
        panda$collections$Array* $tmp678 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp678);
        $tmp677 = $tmp678;
        $tmp676 = $tmp677;
        children675 = $tmp676;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp676));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
        panda$collections$Array$add$panda$collections$Array$T(children675, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp680 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp679 = $tmp680;
        panda$core$Bit $tmp681 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp679);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
        if ($tmp681.value) {
        {
            org$pandalanguage$pandac$Type* $tmp683 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp682 = $tmp683;
            panda$collections$Array$add$panda$collections$Array$T(children675, ((panda$core$Object*) $tmp682));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp682));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp685 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp684 = $tmp685;
        panda$core$Bit $tmp686 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp684);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
        if ($tmp686.value) {
        {
            org$pandalanguage$pandac$Type* $tmp688 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp687 = $tmp688;
            panda$collections$Array$add$panda$collections$Array$T(children675, ((panda$core$Object*) $tmp687));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp687));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp690 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp689 = $tmp690;
        panda$core$Bit $tmp691 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp689);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp689));
        if ($tmp691.value) {
        {
            org$pandalanguage$pandac$Type* $tmp693 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp692 = $tmp693;
            panda$collections$Array$add$panda$collections$Array$T(children675, ((panda$core$Object*) $tmp692));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp692));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp695 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp694 = $tmp695;
            panda$collections$Array$add$panda$collections$Array$T(children675, ((panda$core$Object*) $tmp694));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
        }
        }
        }
        }
        org$pandalanguage$pandac$Type* $tmp700 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp702, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp703);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp700, &$s701, $tmp702, $tmp703, ((panda$core$Bit) { true }));
        $tmp699 = $tmp700;
        org$pandalanguage$pandac$Type* $tmp704 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp699, ((panda$collections$ListView*) children675));
        $tmp698 = $tmp704;
        $tmp697 = $tmp698;
        $returnValue696 = $tmp697;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp697));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp698));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp699));
        $tmp674 = 0;
        goto $l672;
        $l705:;
        return $returnValue696;
    }
    $l672:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children675));
    children675 = NULL;
    switch ($tmp674) {
        case 0: goto $l705;
    }
    $l707:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue708;
    org$pandalanguage$pandac$Type* $tmp709;
    org$pandalanguage$pandac$Type* $tmp710;
    org$pandalanguage$pandac$Type$Kind $tmp713;
    org$pandalanguage$pandac$Position $tmp714;
    org$pandalanguage$pandac$Type* $tmp711 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp713, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Position$init(&$tmp714);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp711, &$s712, $tmp713, $tmp714, ((panda$core$Bit) { true }));
    $tmp710 = $tmp711;
    $tmp709 = $tmp710;
    $returnValue708 = $tmp709;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp709));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp710));
    return $returnValue708;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue716;
    org$pandalanguage$pandac$Type* $tmp717;
    org$pandalanguage$pandac$Type* $tmp718;
    org$pandalanguage$pandac$Type$Kind $tmp721;
    org$pandalanguage$pandac$Position $tmp722;
    org$pandalanguage$pandac$Type* $tmp719 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp721, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Position$init(&$tmp722);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp719, &$s720, $tmp721, $tmp722, ((panda$core$Bit) { true }));
    $tmp718 = $tmp719;
    $tmp717 = $tmp718;
    $returnValue716 = $tmp717;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp717));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp718));
    return $returnValue716;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue724;
    panda$core$Bit $tmp730 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s729);
    bool $tmp728 = $tmp730.value;
    if ($tmp728) goto $l731;
    panda$core$Bit $tmp733 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s732);
    $tmp728 = $tmp733.value;
    $l731:;
    panda$core$Bit $tmp734 = { $tmp728 };
    bool $tmp727 = $tmp734.value;
    if ($tmp727) goto $l735;
    panda$core$Bit $tmp737 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s736);
    $tmp727 = $tmp737.value;
    $l735:;
    panda$core$Bit $tmp738 = { $tmp727 };
    bool $tmp726 = $tmp738.value;
    if ($tmp726) goto $l739;
    panda$core$Bit $tmp740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
    $tmp726 = $tmp740.value;
    $l739:;
    panda$core$Bit $tmp741 = { $tmp726 };
    bool $tmp725 = $tmp741.value;
    if ($tmp725) goto $l742;
    panda$core$Bit $tmp743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
    $tmp725 = $tmp743.value;
    $l742:;
    panda$core$Bit $tmp744 = { $tmp725 };
    $returnValue724 = $tmp744;
    return $returnValue724;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue746;
    panda$core$Bit $tmp750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp749 = $tmp750.value;
    if ($tmp749) goto $l751;
    panda$core$Bit $tmp752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 3 }));
    $tmp749 = $tmp752.value;
    $l751:;
    panda$core$Bit $tmp753 = { $tmp749 };
    bool $tmp748 = $tmp753.value;
    if ($tmp748) goto $l754;
    panda$core$Bit $tmp755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 10 }));
    $tmp748 = $tmp755.value;
    $l754:;
    panda$core$Bit $tmp756 = { $tmp748 };
    bool $tmp747 = $tmp756.value;
    if ($tmp747) goto $l757;
    panda$core$Bit $tmp758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
    $tmp747 = $tmp758.value;
    $l757:;
    panda$core$Bit $tmp759 = { $tmp747 };
    $returnValue746 = $tmp759;
    return $returnValue746;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue761;
    panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
    bool $tmp762 = $tmp763.value;
    if ($tmp762) goto $l764;
    panda$core$Bit $tmp766 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s765);
    $tmp762 = $tmp766.value;
    $l764:;
    panda$core$Bit $tmp767 = { $tmp762 };
    $returnValue761 = $tmp767;
    return $returnValue761;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue769;
    panda$core$Bit $tmp771 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s770);
    $returnValue769 = $tmp771;
    return $returnValue769;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue773;
    panda$core$Bit $tmp775 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp774 = $tmp775.value;
    if ($tmp774) goto $l776;
    panda$core$Bit $tmp777 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp774 = $tmp777.value;
    $l776:;
    panda$core$Bit $tmp778 = { $tmp774 };
    $returnValue773 = $tmp778;
    return $returnValue773;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$451_9780;
    panda$core$Bit $returnValue810;
    {
        $match$451_9780 = self->typeKind;
        panda$core$Bit $tmp788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_9780.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp787 = $tmp788.value;
        if ($tmp787) goto $l789;
        panda$core$Bit $tmp790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_9780.$rawValue, ((panda$core$Int64) { 1 }));
        $tmp787 = $tmp790.value;
        $l789:;
        panda$core$Bit $tmp791 = { $tmp787 };
        bool $tmp786 = $tmp791.value;
        if ($tmp786) goto $l792;
        panda$core$Bit $tmp793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_9780.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp786 = $tmp793.value;
        $l792:;
        panda$core$Bit $tmp794 = { $tmp786 };
        bool $tmp785 = $tmp794.value;
        if ($tmp785) goto $l795;
        panda$core$Bit $tmp796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_9780.$rawValue, ((panda$core$Int64) { 12 }));
        $tmp785 = $tmp796.value;
        $l795:;
        panda$core$Bit $tmp797 = { $tmp785 };
        bool $tmp784 = $tmp797.value;
        if ($tmp784) goto $l798;
        panda$core$Bit $tmp799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_9780.$rawValue, ((panda$core$Int64) { 15 }));
        $tmp784 = $tmp799.value;
        $l798:;
        panda$core$Bit $tmp800 = { $tmp784 };
        bool $tmp783 = $tmp800.value;
        if ($tmp783) goto $l801;
        panda$core$Bit $tmp802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_9780.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp783 = $tmp802.value;
        $l801:;
        panda$core$Bit $tmp803 = { $tmp783 };
        bool $tmp782 = $tmp803.value;
        if ($tmp782) goto $l804;
        panda$core$Bit $tmp805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_9780.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp782 = $tmp805.value;
        $l804:;
        panda$core$Bit $tmp806 = { $tmp782 };
        bool $tmp781 = $tmp806.value;
        if ($tmp781) goto $l807;
        panda$core$Bit $tmp808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_9780.$rawValue, ((panda$core$Int64) { 16 }));
        $tmp781 = $tmp808.value;
        $l807:;
        panda$core$Bit $tmp809 = { $tmp781 };
        if ($tmp809.value) {
        {
            $returnValue810 = ((panda$core$Bit) { true });
            return $returnValue810;
        }
        }
        else {
        {
            $returnValue810 = ((panda$core$Bit) { false });
            return $returnValue810;
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$461_9813;
    panda$core$Bit $returnValue827;
    {
        $match$461_9813 = self->typeKind;
        panda$core$Bit $tmp817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$461_9813.$rawValue, ((panda$core$Int64) { 15 }));
        bool $tmp816 = $tmp817.value;
        if ($tmp816) goto $l818;
        panda$core$Bit $tmp819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$461_9813.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp816 = $tmp819.value;
        $l818:;
        panda$core$Bit $tmp820 = { $tmp816 };
        bool $tmp815 = $tmp820.value;
        if ($tmp815) goto $l821;
        panda$core$Bit $tmp822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$461_9813.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp815 = $tmp822.value;
        $l821:;
        panda$core$Bit $tmp823 = { $tmp815 };
        bool $tmp814 = $tmp823.value;
        if ($tmp814) goto $l824;
        panda$core$Bit $tmp825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$461_9813.$rawValue, ((panda$core$Int64) { 16 }));
        $tmp814 = $tmp825.value;
        $l824:;
        panda$core$Bit $tmp826 = { $tmp814 };
        if ($tmp826.value) {
        {
            $returnValue827 = ((panda$core$Bit) { true });
            return $returnValue827;
        }
        }
        else {
        {
            $returnValue827 = ((panda$core$Bit) { false });
            return $returnValue827;
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue830;
    panda$core$Bit $tmp832 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s831);
    $returnValue830 = $tmp832;
    return $returnValue830;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue835;
    panda$core$Object* $tmp836;
    panda$core$Object* $tmp843;
    panda$core$Bit $tmp834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp834.value) {
    {
        panda$core$Object* $tmp837 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp836 = $tmp837;
        panda$core$Bit $tmp838 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp836));
        $returnValue835 = $tmp838;
        panda$core$Panda$unref$panda$core$Object($tmp836);
        return $returnValue835;
    }
    }
    panda$core$Bit $tmp841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp840 = $tmp841.value;
    if (!$tmp840) goto $l842;
    panda$core$Object* $tmp844 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp843 = $tmp844;
    panda$core$Bit $tmp846 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp843))->name, &$s845);
    $tmp840 = $tmp846.value;
    panda$core$Panda$unref$panda$core$Object($tmp843);
    $l842:;
    panda$core$Bit $tmp847 = { $tmp840 };
    $returnValue835 = $tmp847;
    return $returnValue835;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue850;
    panda$core$Object* $tmp851;
    panda$core$Object* $tmp858;
    panda$core$Bit $tmp849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp849.value) {
    {
        panda$core$Object* $tmp852 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp851 = $tmp852;
        panda$core$Bit $tmp853 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp851));
        $returnValue850 = $tmp853;
        panda$core$Panda$unref$panda$core$Object($tmp851);
        return $returnValue850;
    }
    }
    panda$core$Bit $tmp856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp855 = $tmp856.value;
    if (!$tmp855) goto $l857;
    panda$core$Object* $tmp859 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp858 = $tmp859;
    panda$core$Bit $tmp861 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp858))->name, &$s860);
    $tmp855 = $tmp861.value;
    panda$core$Panda$unref$panda$core$Object($tmp858);
    $l857:;
    panda$core$Bit $tmp862 = { $tmp855 };
    $returnValue850 = $tmp862;
    return $returnValue850;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue868;
    org$pandalanguage$pandac$Type* $tmp869;
    panda$collections$Array* subtypes872 = NULL;
    panda$collections$Array* $tmp873;
    panda$collections$Array* $tmp874;
    org$pandalanguage$pandac$Type* $tmp876;
    org$pandalanguage$pandac$Type* $tmp877;
    panda$core$String* $tmp879;
    panda$core$String* $tmp880;
    org$pandalanguage$pandac$Type$Kind $tmp884;
    org$pandalanguage$pandac$Position $tmp885;
    int $tmp866;
    {
        panda$core$Bit $tmp867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp867.value) {
        {
            $tmp869 = self;
            $returnValue868 = $tmp869;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp869));
            $tmp866 = 0;
            goto $l864;
            $l870:;
            return $returnValue868;
        }
        }
        panda$collections$Array* $tmp875 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp875);
        $tmp874 = $tmp875;
        $tmp873 = $tmp874;
        subtypes872 = $tmp873;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp873));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp874));
        panda$collections$Array$add$panda$collections$Array$T(subtypes872, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp878 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp881 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp880 = $tmp881;
        panda$core$String* $tmp883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp880, &$s882);
        $tmp879 = $tmp883;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp884, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Position$init(&$tmp885);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp878, $tmp879, $tmp884, $tmp885, ((panda$collections$ListView*) subtypes872), ((panda$core$Bit) { true }));
        $tmp877 = $tmp878;
        $tmp876 = $tmp877;
        $returnValue868 = $tmp876;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp876));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp877));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp879));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp880));
        $tmp866 = 1;
        goto $l864;
        $l886:;
        return $returnValue868;
    }
    $l864:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes872));
    subtypes872 = NULL;
    switch ($tmp866) {
        case 1: goto $l886;
        case 0: goto $l870;
    }
    $l888:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue890;
    org$pandalanguage$pandac$Type* $tmp891;
    org$pandalanguage$pandac$Type* $tmp893;
    panda$core$Object* $tmp894;
    panda$core$Bit $tmp889 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp889.value) {
    {
        $tmp891 = self;
        $returnValue890 = $tmp891;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp891));
        return $returnValue890;
    }
    }
    panda$core$Object* $tmp895 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp894 = $tmp895;
    $tmp893 = ((org$pandalanguage$pandac$Type*) $tmp894);
    $returnValue890 = $tmp893;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp893));
    panda$core$Panda$unref$panda$core$Object($tmp894);
    return $returnValue890;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $returnValue901;
    org$pandalanguage$pandac$Type* $tmp902;
    org$pandalanguage$pandac$Type* $tmp905;
    org$pandalanguage$pandac$Type* $tmp909;
    org$pandalanguage$pandac$Type* $tmp912;
    org$pandalanguage$pandac$Type* $tmp913;
    org$pandalanguage$pandac$Type* $tmp917;
    org$pandalanguage$pandac$Type* $tmp921;
    org$pandalanguage$pandac$Type* $tmp924;
    org$pandalanguage$pandac$Type* $tmp925;
    org$pandalanguage$pandac$Type* $tmp934;
    org$pandalanguage$pandac$Type* $tmp942;
    org$pandalanguage$pandac$Type* $tmp951;
    org$pandalanguage$pandac$Type* $tmp957;
    org$pandalanguage$pandac$Type* $tmp958;
    org$pandalanguage$pandac$Type* $tmp962;
    org$pandalanguage$pandac$Type* $tmp963;
    org$pandalanguage$pandac$Type* $tmp973;
    org$pandalanguage$pandac$Type* $tmp979;
    org$pandalanguage$pandac$Type* $tmp980;
    org$pandalanguage$pandac$Type* $tmp984;
    org$pandalanguage$pandac$Type* $tmp985;
    org$pandalanguage$pandac$Type* $tmp990;
    org$pandalanguage$pandac$Type* $tmp991;
    org$pandalanguage$pandac$Type* $tmp992;
    panda$core$Object* $tmp993;
    org$pandalanguage$pandac$Type* $tmp1000;
    org$pandalanguage$pandac$Type* $tmp1001;
    org$pandalanguage$pandac$Type* $tmp1002;
    panda$core$Object* $tmp1003;
    org$pandalanguage$pandac$Type* t11009 = NULL;
    org$pandalanguage$pandac$Type* $tmp1010;
    org$pandalanguage$pandac$Type* $tmp1011;
    org$pandalanguage$pandac$Type* t21013 = NULL;
    org$pandalanguage$pandac$Type* $tmp1014;
    org$pandalanguage$pandac$Type* $tmp1015;
    panda$collections$Set* ancestors1025 = NULL;
    panda$collections$Set* $tmp1026;
    panda$collections$Set* $tmp1027;
    org$pandalanguage$pandac$Type* t1029 = NULL;
    org$pandalanguage$pandac$Type* $tmp1030;
    org$pandalanguage$pandac$ClassDecl* cl1031 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1032;
    org$pandalanguage$pandac$ClassDecl* $tmp1033;
    org$pandalanguage$pandac$Type* $tmp1038;
    org$pandalanguage$pandac$Type* $tmp1039;
    org$pandalanguage$pandac$Type* $tmp1040;
    org$pandalanguage$pandac$ClassDecl* $tmp1042;
    org$pandalanguage$pandac$ClassDecl* $tmp1043;
    org$pandalanguage$pandac$ClassDecl* $tmp1044;
    org$pandalanguage$pandac$ClassDecl* $tmp1046;
    org$pandalanguage$pandac$ClassDecl* $tmp1047;
    org$pandalanguage$pandac$Type* $tmp1048;
    org$pandalanguage$pandac$Type* $tmp1049;
    org$pandalanguage$pandac$ClassDecl* $tmp1050;
    org$pandalanguage$pandac$ClassDecl* $tmp1051;
    org$pandalanguage$pandac$ClassDecl* $tmp1052;
    org$pandalanguage$pandac$Type* $tmp1058;
    org$pandalanguage$pandac$Type* $tmp1062;
    org$pandalanguage$pandac$Type* $tmp1063;
    org$pandalanguage$pandac$Type* $tmp1064;
    org$pandalanguage$pandac$ClassDecl* $tmp1066;
    org$pandalanguage$pandac$ClassDecl* $tmp1067;
    org$pandalanguage$pandac$ClassDecl* $tmp1068;
    org$pandalanguage$pandac$ClassDecl* $tmp1070;
    org$pandalanguage$pandac$ClassDecl* $tmp1071;
    org$pandalanguage$pandac$Type* $tmp1073;
    org$pandalanguage$pandac$Type* $tmp1074;
    int $tmp899;
    {
        panda$core$Bit $tmp900 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp900.value) {
        {
            $tmp902 = self;
            $returnValue901 = $tmp902;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp902));
            $tmp899 = 0;
            goto $l897;
            $l903:;
            return $returnValue901;
        }
        }
        org$pandalanguage$pandac$Type* $tmp906 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp905 = $tmp906;
        panda$core$Bit $tmp907 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp905);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp905));
        if ($tmp907.value) {
        {
            panda$core$Bit $tmp908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp908.value) {
            {
                $tmp909 = p_other;
                $returnValue901 = $tmp909;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp909));
                $tmp899 = 1;
                goto $l897;
                $l910:;
                return $returnValue901;
            }
            }
            org$pandalanguage$pandac$Type* $tmp914 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp913 = $tmp914;
            $tmp912 = $tmp913;
            $returnValue901 = $tmp912;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp912));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp913));
            $tmp899 = 2;
            goto $l897;
            $l915:;
            return $returnValue901;
        }
        }
        org$pandalanguage$pandac$Type* $tmp918 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp917 = $tmp918;
        panda$core$Bit $tmp919 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp917);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp917));
        if ($tmp919.value) {
        {
            panda$core$Bit $tmp920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp920.value) {
            {
                $tmp921 = self;
                $returnValue901 = $tmp921;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp921));
                $tmp899 = 3;
                goto $l897;
                $l922:;
                return $returnValue901;
            }
            }
            org$pandalanguage$pandac$Type* $tmp926 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp925 = $tmp926;
            $tmp924 = $tmp925;
            $returnValue901 = $tmp924;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp924));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp925));
            $tmp899 = 4;
            goto $l897;
            $l927:;
            return $returnValue901;
        }
        }
        panda$core$Bit $tmp930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        bool $tmp929 = $tmp930.value;
        if (!$tmp929) goto $l931;
        panda$core$Bit $tmp932 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp929 = $tmp932.value;
        $l931:;
        panda$core$Bit $tmp933 = { $tmp929 };
        if ($tmp933.value) {
        {
            $tmp934 = p_other;
            $returnValue901 = $tmp934;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp934));
            $tmp899 = 5;
            goto $l897;
            $l935:;
            return $returnValue901;
        }
        }
        panda$core$Bit $tmp938 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp937 = $tmp938.value;
        if (!$tmp937) goto $l939;
        panda$core$Bit $tmp940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        $tmp937 = $tmp940.value;
        $l939:;
        panda$core$Bit $tmp941 = { $tmp937 };
        if ($tmp941.value) {
        {
            $tmp942 = self;
            $returnValue901 = $tmp942;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp942));
            $tmp899 = 6;
            goto $l897;
            $l943:;
            return $returnValue901;
        }
        }
        panda$core$Bit $tmp945 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp945.value) {
        {
            panda$core$Bit $tmp947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp946 = $tmp947.value;
            if ($tmp946) goto $l948;
            panda$core$Bit $tmp949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp946 = $tmp949.value;
            $l948:;
            panda$core$Bit $tmp950 = { $tmp946 };
            if ($tmp950.value) {
            {
                $tmp951 = self;
                $returnValue901 = $tmp951;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp951));
                $tmp899 = 7;
                goto $l897;
                $l952:;
                return $returnValue901;
            }
            }
            panda$core$Bit $tmp954 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp954.value) {
            {
                panda$core$Bit $tmp956 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s955);
                if ($tmp956.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp959 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp958 = $tmp959;
                    $tmp957 = $tmp958;
                    $returnValue901 = $tmp957;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp957));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp958));
                    $tmp899 = 8;
                    goto $l897;
                    $l960:;
                    return $returnValue901;
                }
                }
                org$pandalanguage$pandac$Type* $tmp964 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp963 = $tmp964;
                $tmp962 = $tmp963;
                $returnValue901 = $tmp962;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp962));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp963));
                $tmp899 = 9;
                goto $l897;
                $l965:;
                return $returnValue901;
            }
            }
        }
        }
        panda$core$Bit $tmp967 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp967.value) {
        {
            panda$core$Bit $tmp969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp968 = $tmp969.value;
            if ($tmp968) goto $l970;
            panda$core$Bit $tmp971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp968 = $tmp971.value;
            $l970:;
            panda$core$Bit $tmp972 = { $tmp968 };
            if ($tmp972.value) {
            {
                $tmp973 = p_other;
                $returnValue901 = $tmp973;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp973));
                $tmp899 = 10;
                goto $l897;
                $l974:;
                return $returnValue901;
            }
            }
            panda$core$Bit $tmp976 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp976.value) {
            {
                panda$core$Bit $tmp978 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s977);
                if ($tmp978.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp981 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp980 = $tmp981;
                    $tmp979 = $tmp980;
                    $returnValue901 = $tmp979;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp979));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp980));
                    $tmp899 = 11;
                    goto $l897;
                    $l982:;
                    return $returnValue901;
                }
                }
                org$pandalanguage$pandac$Type* $tmp986 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp985 = $tmp986;
                $tmp984 = $tmp985;
                $returnValue901 = $tmp984;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp984));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp985));
                $tmp899 = 12;
                goto $l897;
                $l987:;
                return $returnValue901;
            }
            }
        }
        }
        panda$core$Bit $tmp989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp989.value) {
        {
            panda$core$Object* $tmp994 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp993 = $tmp994;
            org$pandalanguage$pandac$Type* $tmp995 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp993), p_compiler, p_other);
            $tmp992 = $tmp995;
            org$pandalanguage$pandac$Type* $tmp996 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp992);
            $tmp991 = $tmp996;
            $tmp990 = $tmp991;
            $returnValue901 = $tmp990;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp990));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp991));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp992));
            panda$core$Panda$unref$panda$core$Object($tmp993);
            $tmp899 = 13;
            goto $l897;
            $l997:;
            return $returnValue901;
        }
        }
        panda$core$Bit $tmp999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp999.value) {
        {
            panda$core$Object* $tmp1004 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1003 = $tmp1004;
            org$pandalanguage$pandac$Type* $tmp1005 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp1003));
            $tmp1002 = $tmp1005;
            org$pandalanguage$pandac$Type* $tmp1006 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1002);
            $tmp1001 = $tmp1006;
            $tmp1000 = $tmp1001;
            $returnValue901 = $tmp1000;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1000));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1001));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1002));
            panda$core$Panda$unref$panda$core$Object($tmp1003);
            $tmp899 = 14;
            goto $l897;
            $l1007:;
            return $returnValue901;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1012 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp1011 = $tmp1012;
        $tmp1010 = $tmp1011;
        t11009 = $tmp1010;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1010));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1011));
        org$pandalanguage$pandac$Type* $tmp1016 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp1015 = $tmp1016;
        $tmp1014 = $tmp1015;
        t21013 = $tmp1014;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1014));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1015));
        panda$core$Bit $tmp1018 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t11009);
        bool $tmp1017 = $tmp1018.value;
        if (!$tmp1017) goto $l1019;
        panda$core$Bit $tmp1020 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t21013);
        $tmp1017 = $tmp1020.value;
        $l1019:;
        panda$core$Bit $tmp1021 = { $tmp1017 };
        if ($tmp1021.value) {
        {
            int $tmp1024;
            {
                panda$collections$Set* $tmp1028 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
                panda$collections$Set$init($tmp1028);
                $tmp1027 = $tmp1028;
                $tmp1026 = $tmp1027;
                ancestors1025 = $tmp1026;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1026));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1027));
                $tmp1030 = self;
                t1029 = $tmp1030;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1030));
                org$pandalanguage$pandac$ClassDecl* $tmp1034 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t11009);
                $tmp1033 = $tmp1034;
                $tmp1032 = $tmp1033;
                cl1031 = $tmp1032;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1032));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1033));
                $l1035:;
                bool $tmp1037 = ((panda$core$Bit) { cl1031 != NULL }).value;
                if (!$tmp1037) goto $l1036;
                {
                    panda$collections$Set$add$panda$collections$Set$T(ancestors1025, ((panda$collections$Key*) t1029));
                    if (((panda$core$Bit) { cl1031->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1038 = t1029;
                            org$pandalanguage$pandac$Type* $tmp1041 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1029, cl1031->rawSuper);
                            $tmp1040 = $tmp1041;
                            $tmp1039 = $tmp1040;
                            t1029 = $tmp1039;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1039));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1040));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1038));
                        }
                        {
                            $tmp1042 = cl1031;
                            org$pandalanguage$pandac$ClassDecl* $tmp1045 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1029);
                            $tmp1044 = $tmp1045;
                            $tmp1043 = $tmp1044;
                            cl1031 = $tmp1043;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1043));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1044));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1042));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1046 = cl1031;
                            $tmp1047 = NULL;
                            cl1031 = $tmp1047;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1047));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1046));
                        }
                    }
                    }
                }
                goto $l1035;
                $l1036:;
                {
                    $tmp1048 = t1029;
                    $tmp1049 = p_other;
                    t1029 = $tmp1049;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1049));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
                }
                {
                    $tmp1050 = cl1031;
                    org$pandalanguage$pandac$ClassDecl* $tmp1053 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t21013);
                    $tmp1052 = $tmp1053;
                    $tmp1051 = $tmp1052;
                    cl1031 = $tmp1051;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1051));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1052));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1050));
                }
                $l1054:;
                bool $tmp1056 = ((panda$core$Bit) { cl1031 != NULL }).value;
                if (!$tmp1056) goto $l1055;
                {
                    panda$core$Bit $tmp1057 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors1025, ((panda$collections$Key*) t1029));
                    if ($tmp1057.value) {
                    {
                        $tmp1058 = t1029;
                        $returnValue901 = $tmp1058;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1058));
                        $tmp1024 = 0;
                        goto $l1022;
                        $l1059:;
                        $tmp899 = 15;
                        goto $l897;
                        $l1060:;
                        return $returnValue901;
                    }
                    }
                    if (((panda$core$Bit) { cl1031->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1062 = t1029;
                            org$pandalanguage$pandac$Type* $tmp1065 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1029, cl1031->rawSuper);
                            $tmp1064 = $tmp1065;
                            $tmp1063 = $tmp1064;
                            t1029 = $tmp1063;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1063));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1064));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1062));
                        }
                        {
                            $tmp1066 = cl1031;
                            org$pandalanguage$pandac$ClassDecl* $tmp1069 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1029);
                            $tmp1068 = $tmp1069;
                            $tmp1067 = $tmp1068;
                            cl1031 = $tmp1067;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1067));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1068));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1066));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1070 = cl1031;
                            $tmp1071 = NULL;
                            cl1031 = $tmp1071;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1071));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1070));
                        }
                    }
                    }
                }
                goto $l1054;
                $l1055:;
            }
            $tmp1024 = -1;
            goto $l1022;
            $l1022:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors1025));
            ancestors1025 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1029));
            t1029 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1031));
            cl1031 = NULL;
            switch ($tmp1024) {
                case 0: goto $l1059;
                case -1: goto $l1072;
            }
            $l1072:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1075 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp1074 = $tmp1075;
        $tmp1073 = $tmp1074;
        $returnValue901 = $tmp1073;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1073));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1074));
        $tmp899 = 16;
        goto $l897;
        $l1076:;
        return $returnValue901;
    }
    $l897:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t11009));
    t11009 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t21013));
    t21013 = NULL;
    switch ($tmp899) {
        case 13: goto $l997;
        case 4: goto $l927;
        case 8: goto $l960;
        case 3: goto $l922;
        case 12: goto $l987;
        case 1: goto $l910;
        case 16: goto $l1076;
        case 6: goto $l943;
        case 7: goto $l952;
        case 5: goto $l935;
        case 15: goto $l1060;
        case 11: goto $l982;
        case 14: goto $l1007;
        case 10: goto $l974;
        case 0: goto $l903;
        case 9: goto $l965;
        case 2: goto $l915;
    }
    $l1078:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* $returnValue1081;
    org$pandalanguage$pandac$Type* $tmp1082;
    org$pandalanguage$pandac$Type$Kind $match$592_91084;
    org$pandalanguage$pandac$Type* found1089 = NULL;
    org$pandalanguage$pandac$Type* $tmp1090;
    panda$core$Object* $tmp1091;
    org$pandalanguage$pandac$Type* $tmp1093;
    org$pandalanguage$pandac$Type* $tmp1096;
    org$pandalanguage$pandac$Type* base1104 = NULL;
    org$pandalanguage$pandac$Type* $tmp1105;
    org$pandalanguage$pandac$Type* $tmp1106;
    panda$core$Object* $tmp1107;
    panda$collections$Array* remappedArgs1110 = NULL;
    panda$collections$Array* $tmp1111;
    panda$collections$Array* $tmp1112;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1114;
    org$pandalanguage$pandac$Type* $tmp1129;
    panda$core$Object* $tmp1130;
    org$pandalanguage$pandac$Type* $tmp1139;
    org$pandalanguage$pandac$Type* $tmp1140;
    org$pandalanguage$pandac$Type* $tmp1146;
    org$pandalanguage$pandac$Type* $tmp1147;
    org$pandalanguage$pandac$Type* $tmp1148;
    panda$core$Object* $tmp1149;
    panda$collections$Array* remapped1170 = NULL;
    panda$collections$Array* $tmp1171;
    panda$collections$Array* $tmp1172;
    panda$core$MutableString* name1174 = NULL;
    panda$core$MutableString* $tmp1175;
    panda$core$MutableString* $tmp1176;
    panda$core$String* separator1179 = NULL;
    panda$core$String* $tmp1180;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1184;
    org$pandalanguage$pandac$Type* child1203 = NULL;
    org$pandalanguage$pandac$Type* $tmp1204;
    org$pandalanguage$pandac$Type* $tmp1205;
    panda$core$Object* $tmp1206;
    panda$core$String* $tmp1209;
    panda$core$String* $tmp1210;
    org$pandalanguage$pandac$Type$Kind $match$620_171219;
    panda$core$Object* $tmp1228;
    org$pandalanguage$pandac$Type* $tmp1232;
    org$pandalanguage$pandac$Type* child1238 = NULL;
    org$pandalanguage$pandac$Type* $tmp1239;
    org$pandalanguage$pandac$Type* $tmp1240;
    panda$core$Object* $tmp1241;
    org$pandalanguage$pandac$Type* $tmp1247;
    panda$core$Char8 $tmp1249;
    org$pandalanguage$pandac$Type* $tmp1250;
    org$pandalanguage$pandac$Type* $tmp1251;
    panda$core$String* $tmp1253;
    org$pandalanguage$pandac$Type* $tmp1258;
    panda$core$Int64 $tmp1079 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp1080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1079, ((panda$core$Int64) { 0 }));
    if ($tmp1080.value) {
    {
        $tmp1082 = self;
        $returnValue1081 = $tmp1082;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1082));
        return $returnValue1081;
    }
    }
    {
        $match$592_91084 = self->typeKind;
        panda$core$Bit $tmp1085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$592_91084.$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1085.value) {
        {
            int $tmp1088;
            {
                panda$core$Object* $tmp1092 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                $tmp1091 = $tmp1092;
                $tmp1090 = ((org$pandalanguage$pandac$Type*) $tmp1091);
                found1089 = $tmp1090;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1090));
                panda$core$Panda$unref$panda$core$Object($tmp1091);
                if (((panda$core$Bit) { found1089 != NULL }).value) {
                {
                    $tmp1093 = found1089;
                    $returnValue1081 = $tmp1093;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1093));
                    $tmp1088 = 0;
                    goto $l1086;
                    $l1094:;
                    return $returnValue1081;
                }
                }
                $tmp1096 = self;
                $returnValue1081 = $tmp1096;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1096));
                $tmp1088 = 1;
                goto $l1086;
                $l1097:;
                return $returnValue1081;
            }
            $l1086:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found1089));
            found1089 = NULL;
            switch ($tmp1088) {
                case 1: goto $l1097;
                case 0: goto $l1094;
            }
            $l1099:;
        }
        }
        else {
        panda$core$Bit $tmp1100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$592_91084.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1100.value) {
        {
            int $tmp1103;
            {
                panda$core$Object* $tmp1108 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
                $tmp1107 = $tmp1108;
                org$pandalanguage$pandac$Type* $tmp1109 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1107), p_types);
                $tmp1106 = $tmp1109;
                $tmp1105 = $tmp1106;
                base1104 = $tmp1105;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1105));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1106));
                panda$core$Panda$unref$panda$core$Object($tmp1107);
                panda$collections$Array* $tmp1113 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1113);
                $tmp1112 = $tmp1113;
                $tmp1111 = $tmp1112;
                remappedArgs1110 = $tmp1111;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1111));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1112));
                panda$core$Int64 $tmp1115 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1114, ((panda$core$Int64) { 1 }), $tmp1115, ((panda$core$Bit) { false }));
                int64_t $tmp1117 = $tmp1114.min.value;
                panda$core$Int64 i1116 = { $tmp1117 };
                int64_t $tmp1119 = $tmp1114.max.value;
                bool $tmp1120 = $tmp1114.inclusive.value;
                if ($tmp1120) goto $l1127; else goto $l1128;
                $l1127:;
                if ($tmp1117 <= $tmp1119) goto $l1121; else goto $l1123;
                $l1128:;
                if ($tmp1117 < $tmp1119) goto $l1121; else goto $l1123;
                $l1121:;
                {
                    panda$core$Object* $tmp1131 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1116);
                    $tmp1130 = $tmp1131;
                    org$pandalanguage$pandac$Type* $tmp1132 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1130), p_types);
                    $tmp1129 = $tmp1132;
                    panda$collections$Array$add$panda$collections$Array$T(remappedArgs1110, ((panda$core$Object*) $tmp1129));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1129));
                    panda$core$Panda$unref$panda$core$Object($tmp1130);
                }
                $l1124:;
                int64_t $tmp1134 = $tmp1119 - i1116.value;
                if ($tmp1120) goto $l1135; else goto $l1136;
                $l1135:;
                if ((uint64_t) $tmp1134 >= 1) goto $l1133; else goto $l1123;
                $l1136:;
                if ((uint64_t) $tmp1134 > 1) goto $l1133; else goto $l1123;
                $l1133:;
                i1116.value += 1;
                goto $l1121;
                $l1123:;
                org$pandalanguage$pandac$Type* $tmp1141 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base1104, ((panda$collections$ListView*) remappedArgs1110));
                $tmp1140 = $tmp1141;
                $tmp1139 = $tmp1140;
                $returnValue1081 = $tmp1139;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1139));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1140));
                $tmp1103 = 0;
                goto $l1101;
                $l1142:;
                return $returnValue1081;
            }
            $l1101:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1104));
            base1104 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remappedArgs1110));
            remappedArgs1110 = NULL;
            switch ($tmp1103) {
                case 0: goto $l1142;
            }
            $l1144:;
        }
        }
        else {
        panda$core$Bit $tmp1145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$592_91084.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1145.value) {
        {
            panda$core$Object* $tmp1150 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1149 = $tmp1150;
            org$pandalanguage$pandac$Type* $tmp1151 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1149), p_types);
            $tmp1148 = $tmp1151;
            org$pandalanguage$pandac$Type* $tmp1152 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1148);
            $tmp1147 = $tmp1152;
            $tmp1146 = $tmp1147;
            $returnValue1081 = $tmp1146;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1146));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1147));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1148));
            panda$core$Panda$unref$panda$core$Object($tmp1149);
            return $returnValue1081;
        }
        }
        else {
        panda$core$Bit $tmp1157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$592_91084.$rawValue, ((panda$core$Int64) { 15 }));
        bool $tmp1156 = $tmp1157.value;
        if ($tmp1156) goto $l1158;
        panda$core$Bit $tmp1159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$592_91084.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp1156 = $tmp1159.value;
        $l1158:;
        panda$core$Bit $tmp1160 = { $tmp1156 };
        bool $tmp1155 = $tmp1160.value;
        if ($tmp1155) goto $l1161;
        panda$core$Bit $tmp1162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$592_91084.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp1155 = $tmp1162.value;
        $l1161:;
        panda$core$Bit $tmp1163 = { $tmp1155 };
        bool $tmp1154 = $tmp1163.value;
        if ($tmp1154) goto $l1164;
        panda$core$Bit $tmp1165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$592_91084.$rawValue, ((panda$core$Int64) { 16 }));
        $tmp1154 = $tmp1165.value;
        $l1164:;
        panda$core$Bit $tmp1166 = { $tmp1154 };
        if ($tmp1166.value) {
        {
            int $tmp1169;
            {
                panda$collections$Array* $tmp1173 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1173);
                $tmp1172 = $tmp1173;
                $tmp1171 = $tmp1172;
                remapped1170 = $tmp1171;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1171));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1172));
                panda$core$MutableString* $tmp1177 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1177, &$s1178);
                $tmp1176 = $tmp1177;
                $tmp1175 = $tmp1176;
                name1174 = $tmp1175;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1175));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1176));
                $tmp1180 = &$s1181;
                separator1179 = $tmp1180;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1180));
                panda$core$Int64 $tmp1182 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Bit $tmp1183 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1182, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1183.value);
                panda$core$Int64 $tmp1185 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1186 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1185, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1184, ((panda$core$Int64) { 0 }), $tmp1186, ((panda$core$Bit) { false }));
                int64_t $tmp1188 = $tmp1184.min.value;
                panda$core$Int64 i1187 = { $tmp1188 };
                int64_t $tmp1190 = $tmp1184.max.value;
                bool $tmp1191 = $tmp1184.inclusive.value;
                if ($tmp1191) goto $l1198; else goto $l1199;
                $l1198:;
                if ($tmp1188 <= $tmp1190) goto $l1192; else goto $l1194;
                $l1199:;
                if ($tmp1188 < $tmp1190) goto $l1192; else goto $l1194;
                $l1192:;
                {
                    int $tmp1202;
                    {
                        panda$core$Object* $tmp1207 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1187);
                        $tmp1206 = $tmp1207;
                        org$pandalanguage$pandac$Type* $tmp1208 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1206), p_types);
                        $tmp1205 = $tmp1208;
                        $tmp1204 = $tmp1205;
                        child1203 = $tmp1204;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1204));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1205));
                        panda$core$Panda$unref$panda$core$Object($tmp1206);
                        panda$core$MutableString$append$panda$core$String(name1174, separator1179);
                        panda$core$MutableString$append$panda$core$String(name1174, ((org$pandalanguage$pandac$Symbol*) child1203)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1170, ((panda$core$Object*) child1203));
                        {
                            $tmp1209 = separator1179;
                            $tmp1210 = &$s1211;
                            separator1179 = $tmp1210;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1210));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1209));
                        }
                    }
                    $tmp1202 = -1;
                    goto $l1200;
                    $l1200:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1203));
                    child1203 = NULL;
                    switch ($tmp1202) {
                        case -1: goto $l1212;
                    }
                    $l1212:;
                }
                $l1195:;
                int64_t $tmp1214 = $tmp1190 - i1187.value;
                if ($tmp1191) goto $l1215; else goto $l1216;
                $l1215:;
                if ((uint64_t) $tmp1214 >= 1) goto $l1213; else goto $l1194;
                $l1216:;
                if ((uint64_t) $tmp1214 > 1) goto $l1213; else goto $l1194;
                $l1213:;
                i1187.value += 1;
                goto $l1192;
                $l1194:;
                {
                    $match$620_171219 = self->typeKind;
                    panda$core$Bit $tmp1220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_171219.$rawValue, ((panda$core$Int64) { 14 }));
                    if ($tmp1220.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1174, &$s1221);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_171219.$rawValue, ((panda$core$Int64) { 15 }));
                    if ($tmp1222.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1174, &$s1223);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_171219.$rawValue, ((panda$core$Int64) { 16 }));
                    if ($tmp1224.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1174, &$s1225);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_171219.$rawValue, ((panda$core$Int64) { 17 }));
                    if ($tmp1226.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1174, &$s1227);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$Int64 $tmp1229 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1230 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1229, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1231 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1230);
                $tmp1228 = $tmp1231;
                org$pandalanguage$pandac$Type* $tmp1233 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1232 = $tmp1233;
                panda$core$Bit $tmp1234 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1228), $tmp1232);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1232));
                panda$core$Panda$unref$panda$core$Object($tmp1228);
                if ($tmp1234.value) {
                {
                    int $tmp1237;
                    {
                        panda$core$Int64 $tmp1242 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                        panda$core$Int64 $tmp1243 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1242, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1244 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1243);
                        $tmp1241 = $tmp1244;
                        org$pandalanguage$pandac$Type* $tmp1245 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1241), p_types);
                        $tmp1240 = $tmp1245;
                        $tmp1239 = $tmp1240;
                        child1238 = $tmp1239;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1239));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1240));
                        panda$core$Panda$unref$panda$core$Object($tmp1241);
                        panda$core$MutableString$append$panda$core$String(name1174, ((org$pandalanguage$pandac$Symbol*) child1238)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1170, ((panda$core$Object*) child1238));
                    }
                    $tmp1237 = -1;
                    goto $l1235;
                    $l1235:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1238));
                    child1238 = NULL;
                    switch ($tmp1237) {
                        case -1: goto $l1246;
                    }
                    $l1246:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1248 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                    $tmp1247 = $tmp1248;
                    panda$collections$Array$add$panda$collections$Array$T(remapped1170, ((panda$core$Object*) $tmp1247));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1247));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1249, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(name1174, $tmp1249);
                org$pandalanguage$pandac$Type* $tmp1252 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp1254 = panda$core$MutableString$finish$R$panda$core$String(name1174);
                $tmp1253 = $tmp1254;
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1252, $tmp1253, self->typeKind, self->position, ((panda$collections$ListView*) remapped1170), self->resolved);
                $tmp1251 = $tmp1252;
                $tmp1250 = $tmp1251;
                $returnValue1081 = $tmp1250;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1250));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1251));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1253));
                $tmp1169 = 0;
                goto $l1167;
                $l1255:;
                return $returnValue1081;
            }
            $l1167:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped1170));
            remapped1170 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1174));
            name1174 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1179));
            separator1179 = NULL;
            switch ($tmp1169) {
                case 0: goto $l1255;
            }
            $l1257:;
        }
        }
        else {
        {
            $tmp1258 = self;
            $returnValue1081 = $tmp1258;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1258));
            return $returnValue1081;
        }
        }
        }
        }
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue1260;
    panda$core$Int64 $tmp1261 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $returnValue1260 = $tmp1261;
    return $returnValue1260;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $returnValue1263;
    panda$core$String* $tmp1264;
    $tmp1264 = self->name;
    $returnValue1263 = $tmp1264;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1264));
    return $returnValue1263;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1268;
    {
    }
    $tmp1268 = -1;
    goto $l1266;
    $l1266:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1268) {
        case -1: goto $l1269;
    }
    $l1269:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

