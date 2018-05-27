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
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5895082338763246016, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -1180377256514028899, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };

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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RegularExpression$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue335;
    org$pandalanguage$pandac$Type* $tmp336;
    org$pandalanguage$pandac$Type* $tmp337;
    org$pandalanguage$pandac$Type$Kind $tmp340;
    org$pandalanguage$pandac$Position $tmp341;
    org$pandalanguage$pandac$Type* $tmp338 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp340, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp341);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp338, &$s339, $tmp340, $tmp341, ((panda$core$Bit) { true }));
    $tmp337 = $tmp338;
    $tmp336 = $tmp337;
    $returnValue335 = $tmp336;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp336));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp337));
    return $returnValue335;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue343;
    org$pandalanguage$pandac$Type* $tmp344;
    org$pandalanguage$pandac$Type* $tmp345;
    org$pandalanguage$pandac$Type$Kind $tmp348;
    org$pandalanguage$pandac$Type* $tmp346 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp348, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp346, &$s347, $tmp348, ((panda$core$Int64) { 8 }));
    $tmp345 = $tmp346;
    $tmp344 = $tmp345;
    $returnValue343 = $tmp344;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp344));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
    return $returnValue343;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue350;
    org$pandalanguage$pandac$Type* $tmp351;
    org$pandalanguage$pandac$Type* $tmp352;
    org$pandalanguage$pandac$Type$Kind $tmp355;
    org$pandalanguage$pandac$Type* $tmp353 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp355, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp353, &$s354, $tmp355, ((panda$core$Int64) { 16 }));
    $tmp352 = $tmp353;
    $tmp351 = $tmp352;
    $returnValue350 = $tmp351;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp351));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
    return $returnValue350;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue357;
    org$pandalanguage$pandac$Type* $tmp358;
    org$pandalanguage$pandac$Type* $tmp359;
    org$pandalanguage$pandac$Type$Kind $tmp362;
    org$pandalanguage$pandac$Type* $tmp360 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp362, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp360, &$s361, $tmp362, ((panda$core$Int64) { 32 }));
    $tmp359 = $tmp360;
    $tmp358 = $tmp359;
    $returnValue357 = $tmp358;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp358));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
    return $returnValue357;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue364;
    org$pandalanguage$pandac$Type* $tmp365;
    org$pandalanguage$pandac$Type* $tmp366;
    org$pandalanguage$pandac$Type$Kind $tmp369;
    org$pandalanguage$pandac$Type* $tmp367 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp369, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp367, &$s368, $tmp369, ((panda$core$Int64) { 64 }));
    $tmp366 = $tmp367;
    $tmp365 = $tmp366;
    $returnValue364 = $tmp365;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp365));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp366));
    return $returnValue364;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue371;
    org$pandalanguage$pandac$Type* $tmp372;
    org$pandalanguage$pandac$Type* $tmp373;
    org$pandalanguage$pandac$Type$Kind $tmp376;
    org$pandalanguage$pandac$Type* $tmp374 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp376, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp374, &$s375, $tmp376, ((panda$core$Int64) { 8 }));
    $tmp373 = $tmp374;
    $tmp372 = $tmp373;
    $returnValue371 = $tmp372;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp372));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp373));
    return $returnValue371;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue378;
    org$pandalanguage$pandac$Type* $tmp379;
    org$pandalanguage$pandac$Type* $tmp380;
    org$pandalanguage$pandac$Type$Kind $tmp383;
    org$pandalanguage$pandac$Type* $tmp381 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp383, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp381, &$s382, $tmp383, ((panda$core$Int64) { 16 }));
    $tmp380 = $tmp381;
    $tmp379 = $tmp380;
    $returnValue378 = $tmp379;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp379));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
    return $returnValue378;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue385;
    org$pandalanguage$pandac$Type* $tmp386;
    org$pandalanguage$pandac$Type* $tmp387;
    org$pandalanguage$pandac$Type$Kind $tmp390;
    org$pandalanguage$pandac$Type* $tmp388 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp390, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp388, &$s389, $tmp390, ((panda$core$Int64) { 32 }));
    $tmp387 = $tmp388;
    $tmp386 = $tmp387;
    $returnValue385 = $tmp386;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
    return $returnValue385;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue392;
    org$pandalanguage$pandac$Type* $tmp393;
    org$pandalanguage$pandac$Type* $tmp394;
    org$pandalanguage$pandac$Type$Kind $tmp397;
    org$pandalanguage$pandac$Type* $tmp395 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp397, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp395, &$s396, $tmp397, ((panda$core$Int64) { 64 }));
    $tmp394 = $tmp395;
    $tmp393 = $tmp394;
    $returnValue392 = $tmp393;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp393));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
    return $returnValue392;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue399;
    org$pandalanguage$pandac$Type* $tmp400;
    org$pandalanguage$pandac$Type* $tmp401;
    org$pandalanguage$pandac$Type$Kind $tmp404;
    org$pandalanguage$pandac$Type* $tmp402 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp404, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp402, &$s403, $tmp404, ((panda$core$Int64) { 32 }));
    $tmp401 = $tmp402;
    $tmp400 = $tmp401;
    $returnValue399 = $tmp400;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp400));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
    return $returnValue399;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue406;
    org$pandalanguage$pandac$Type* $tmp407;
    org$pandalanguage$pandac$Type* $tmp408;
    org$pandalanguage$pandac$Type$Kind $tmp411;
    org$pandalanguage$pandac$Type* $tmp409 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp411, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp409, &$s410, $tmp411, ((panda$core$Int64) { 64 }));
    $tmp408 = $tmp409;
    $tmp407 = $tmp408;
    $returnValue406 = $tmp407;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp407));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp408));
    return $returnValue406;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue517;
    org$pandalanguage$pandac$Type* $tmp518;
    org$pandalanguage$pandac$Type* $tmp519;
    org$pandalanguage$pandac$Type$Kind $tmp522;
    org$pandalanguage$pandac$Position $tmp523;
    org$pandalanguage$pandac$Type* $tmp520 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp522, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp523);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp520, &$s521, $tmp522, $tmp523, ((panda$core$Bit) { true }));
    $tmp519 = $tmp520;
    $tmp518 = $tmp519;
    $returnValue517 = $tmp518;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp518));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp519));
    return $returnValue517;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue525;
    org$pandalanguage$pandac$Type* $tmp526;
    org$pandalanguage$pandac$Type* $tmp527;
    panda$core$String* $tmp529;
    org$pandalanguage$pandac$Type$Kind $tmp531;
    org$pandalanguage$pandac$Position $tmp532;
    org$pandalanguage$pandac$Type* $tmp528 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp530 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp529 = $tmp530;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp531, ((panda$core$Int64) { 5 }));
    org$pandalanguage$pandac$Position$init(&$tmp532);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp528, $tmp529, $tmp531, $tmp532, ((panda$core$Bit) { true }));
    $tmp527 = $tmp528;
    $tmp526 = $tmp527;
    $returnValue525 = $tmp526;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp526));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp527));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp529));
    return $returnValue525;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue534;
    org$pandalanguage$pandac$Type* $tmp535;
    org$pandalanguage$pandac$Type* $tmp536;
    panda$core$String* $tmp538;
    panda$core$String* $tmp540;
    org$pandalanguage$pandac$Type$Kind $tmp543;
    org$pandalanguage$pandac$Position $tmp544;
    org$pandalanguage$pandac$Type* $tmp537 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp541 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp540 = $tmp541;
    panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s539, $tmp540);
    $tmp538 = $tmp542;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp543, ((panda$core$Int64) { 5 }));
    org$pandalanguage$pandac$Position$init(&$tmp544);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp537, $tmp538, $tmp543, $tmp544, ((panda$core$Bit) { true }));
    $tmp536 = $tmp537;
    $tmp535 = $tmp536;
    $returnValue534 = $tmp535;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp535));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp536));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp538));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp540));
    return $returnValue534;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue546;
    org$pandalanguage$pandac$Type* $tmp547;
    org$pandalanguage$pandac$Type* $tmp548;
    panda$core$String* $tmp550;
    org$pandalanguage$pandac$Type$Kind $tmp552;
    org$pandalanguage$pandac$Position $tmp553;
    org$pandalanguage$pandac$Type* $tmp549 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp551 = panda$core$Real64$convert$R$panda$core$String(p_value);
    $tmp550 = $tmp551;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp552, ((panda$core$Int64) { 18 }));
    org$pandalanguage$pandac$Position$init(&$tmp553);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp549, $tmp550, $tmp552, $tmp553, ((panda$core$Bit) { true }));
    $tmp548 = $tmp549;
    $tmp547 = $tmp548;
    $returnValue546 = $tmp547;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp547));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
    return $returnValue546;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue555;
    org$pandalanguage$pandac$Type* $tmp556;
    org$pandalanguage$pandac$Type* $tmp557;
    org$pandalanguage$pandac$Type$Kind $tmp560;
    org$pandalanguage$pandac$Position $tmp561;
    org$pandalanguage$pandac$Type* $tmp558 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp560, ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$Position$init(&$tmp561);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp558, &$s559, $tmp560, $tmp561, ((panda$core$Bit) { true }));
    $tmp557 = $tmp558;
    $tmp556 = $tmp557;
    $returnValue555 = $tmp556;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp556));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
    return $returnValue555;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue563;
    org$pandalanguage$pandac$Type* $tmp564;
    org$pandalanguage$pandac$Type* $tmp565;
    org$pandalanguage$pandac$Type$Kind $tmp568;
    org$pandalanguage$pandac$Position $tmp569;
    org$pandalanguage$pandac$Type* $tmp566 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp568, ((panda$core$Int64) { 9 }));
    org$pandalanguage$pandac$Position$init(&$tmp569);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp566, &$s567, $tmp568, $tmp569, ((panda$core$Bit) { true }));
    $tmp565 = $tmp566;
    $tmp564 = $tmp565;
    $returnValue563 = $tmp564;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp564));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
    return $returnValue563;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue603;
    org$pandalanguage$pandac$Type* $tmp604;
    org$pandalanguage$pandac$Type* $tmp605;
    org$pandalanguage$pandac$Type$Kind $tmp608;
    org$pandalanguage$pandac$Position $tmp609;
    org$pandalanguage$pandac$Type* $tmp606 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp608, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp609);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp606, &$s607, $tmp608, $tmp609, ((panda$core$Bit) { true }));
    $tmp605 = $tmp606;
    $tmp604 = $tmp605;
    $returnValue603 = $tmp604;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp604));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp605));
    return $returnValue603;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children614 = NULL;
    panda$collections$Array* $tmp615;
    panda$collections$Array* $tmp616;
    org$pandalanguage$pandac$Type* $tmp618;
    org$pandalanguage$pandac$Type$Kind $tmp621;
    org$pandalanguage$pandac$Position $tmp622;
    org$pandalanguage$pandac$Type* $returnValue623;
    org$pandalanguage$pandac$Type* $tmp624;
    org$pandalanguage$pandac$Type* $tmp625;
    panda$core$String* $tmp627;
    panda$core$String* $tmp628;
    panda$core$String* $tmp629;
    panda$core$String* $tmp630;
    org$pandalanguage$pandac$Type$Kind $tmp638;
    int $tmp613;
    {
        panda$collections$Array* $tmp617 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp617);
        $tmp616 = $tmp617;
        $tmp615 = $tmp616;
        children614 = $tmp615;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp615));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp616));
        org$pandalanguage$pandac$Type* $tmp619 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp621, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp622);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp619, &$s620, $tmp621, $tmp622, ((panda$core$Bit) { true }));
        $tmp618 = $tmp619;
        panda$collections$Array$add$panda$collections$Array$T(children614, ((panda$core$Object*) $tmp618));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
        panda$collections$Array$add$panda$collections$Array$T(children614, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp626 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp632 = panda$core$String$convert$R$panda$core$String(&$s631);
        $tmp630 = $tmp632;
        panda$core$String* $tmp634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp630, &$s633);
        $tmp629 = $tmp634;
        panda$core$String* $tmp635 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp629, ((panda$core$Object*) p_t));
        $tmp628 = $tmp635;
        panda$core$String* $tmp637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp628, &$s636);
        $tmp627 = $tmp637;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp638, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp626, $tmp627, $tmp638, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children614), p_t->resolved);
        $tmp625 = $tmp626;
        $tmp624 = $tmp625;
        $returnValue623 = $tmp624;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp624));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp627));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp629));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
        $tmp613 = 0;
        goto $l611;
        $l639:;
        return $returnValue623;
    }
    $l611:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children614));
    children614 = NULL;
    switch ($tmp613) {
        case 0: goto $l639;
    }
    $l641:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children645 = NULL;
    panda$collections$Array* $tmp646;
    panda$collections$Array* $tmp647;
    org$pandalanguage$pandac$Type* $returnValue649;
    org$pandalanguage$pandac$Type* $tmp650;
    org$pandalanguage$pandac$Type* $tmp651;
    org$pandalanguage$pandac$Type* $tmp652;
    org$pandalanguage$pandac$Type$Kind $tmp655;
    org$pandalanguage$pandac$Position $tmp656;
    int $tmp644;
    {
        panda$collections$Array* $tmp648 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp648);
        $tmp647 = $tmp648;
        $tmp646 = $tmp647;
        children645 = $tmp646;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp646));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp647));
        panda$collections$Array$add$panda$collections$Array$T(children645, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp653 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp655, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp656);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp653, &$s654, $tmp655, $tmp656, ((panda$core$Bit) { true }));
        $tmp652 = $tmp653;
        org$pandalanguage$pandac$Type* $tmp657 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp652, ((panda$collections$ListView*) children645));
        $tmp651 = $tmp657;
        $tmp650 = $tmp651;
        $returnValue649 = $tmp650;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp650));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp651));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp652));
        $tmp644 = 0;
        goto $l642;
        $l658:;
        return $returnValue649;
    }
    $l642:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children645));
    children645 = NULL;
    switch ($tmp644) {
        case 0: goto $l658;
    }
    $l660:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children664 = NULL;
    panda$collections$Array* $tmp665;
    panda$collections$Array* $tmp666;
    org$pandalanguage$pandac$Type* $returnValue668;
    org$pandalanguage$pandac$Type* $tmp669;
    org$pandalanguage$pandac$Type* $tmp670;
    org$pandalanguage$pandac$Type* $tmp671;
    org$pandalanguage$pandac$Type$Kind $tmp674;
    org$pandalanguage$pandac$Position $tmp675;
    int $tmp663;
    {
        panda$collections$Array* $tmp667 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp667);
        $tmp666 = $tmp667;
        $tmp665 = $tmp666;
        children664 = $tmp665;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp665));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp666));
        panda$collections$Array$add$panda$collections$Array$T(children664, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp672 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp674, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp675);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp672, &$s673, $tmp674, $tmp675, ((panda$core$Bit) { true }));
        $tmp671 = $tmp672;
        org$pandalanguage$pandac$Type* $tmp676 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp671, ((panda$collections$ListView*) children664));
        $tmp670 = $tmp676;
        $tmp669 = $tmp670;
        $returnValue668 = $tmp669;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp669));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp670));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
        $tmp663 = 0;
        goto $l661;
        $l677:;
        return $returnValue668;
    }
    $l661:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children664));
    children664 = NULL;
    switch ($tmp663) {
        case 0: goto $l677;
    }
    $l679:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children683 = NULL;
    panda$collections$Array* $tmp684;
    panda$collections$Array* $tmp685;
    org$pandalanguage$pandac$Type* $tmp687;
    org$pandalanguage$pandac$Type* $tmp690;
    org$pandalanguage$pandac$Type* $tmp692;
    org$pandalanguage$pandac$Type* $tmp695;
    org$pandalanguage$pandac$Type* $tmp697;
    org$pandalanguage$pandac$Type* $tmp700;
    org$pandalanguage$pandac$Type* $tmp702;
    org$pandalanguage$pandac$Type* $returnValue704;
    org$pandalanguage$pandac$Type* $tmp705;
    org$pandalanguage$pandac$Type* $tmp706;
    org$pandalanguage$pandac$Type* $tmp707;
    org$pandalanguage$pandac$Type$Kind $tmp710;
    org$pandalanguage$pandac$Position $tmp711;
    int $tmp682;
    {
        panda$collections$Array* $tmp686 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp686);
        $tmp685 = $tmp686;
        $tmp684 = $tmp685;
        children683 = $tmp684;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp684));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp685));
        panda$collections$Array$add$panda$collections$Array$T(children683, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp688 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp687 = $tmp688;
        panda$core$Bit $tmp689 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp687);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp687));
        if ($tmp689.value) {
        {
            org$pandalanguage$pandac$Type* $tmp691 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp690 = $tmp691;
            panda$collections$Array$add$panda$collections$Array$T(children683, ((panda$core$Object*) $tmp690));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp693 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp692 = $tmp693;
        panda$core$Bit $tmp694 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp692);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp692));
        if ($tmp694.value) {
        {
            org$pandalanguage$pandac$Type* $tmp696 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp695 = $tmp696;
            panda$collections$Array$add$panda$collections$Array$T(children683, ((panda$core$Object*) $tmp695));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp695));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp698 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp697 = $tmp698;
        panda$core$Bit $tmp699 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp697);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp697));
        if ($tmp699.value) {
        {
            org$pandalanguage$pandac$Type* $tmp701 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp700 = $tmp701;
            panda$collections$Array$add$panda$collections$Array$T(children683, ((panda$core$Object*) $tmp700));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp700));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp703 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp702 = $tmp703;
            panda$collections$Array$add$panda$collections$Array$T(children683, ((panda$core$Object*) $tmp702));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp702));
        }
        }
        }
        }
        org$pandalanguage$pandac$Type* $tmp708 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp710, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp711);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp708, &$s709, $tmp710, $tmp711, ((panda$core$Bit) { true }));
        $tmp707 = $tmp708;
        org$pandalanguage$pandac$Type* $tmp712 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp707, ((panda$collections$ListView*) children683));
        $tmp706 = $tmp712;
        $tmp705 = $tmp706;
        $returnValue704 = $tmp705;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp705));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp706));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp707));
        $tmp682 = 0;
        goto $l680;
        $l713:;
        return $returnValue704;
    }
    $l680:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children683));
    children683 = NULL;
    switch ($tmp682) {
        case 0: goto $l713;
    }
    $l715:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue724;
    org$pandalanguage$pandac$Type* $tmp725;
    org$pandalanguage$pandac$Type* $tmp726;
    org$pandalanguage$pandac$Type$Kind $tmp729;
    org$pandalanguage$pandac$Position $tmp730;
    org$pandalanguage$pandac$Type* $tmp727 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp729, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Position$init(&$tmp730);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp727, &$s728, $tmp729, $tmp730, ((panda$core$Bit) { true }));
    $tmp726 = $tmp727;
    $tmp725 = $tmp726;
    $returnValue724 = $tmp725;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp725));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp726));
    return $returnValue724;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue732;
    panda$core$Bit $tmp738 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s737);
    bool $tmp736 = $tmp738.value;
    if ($tmp736) goto $l739;
    panda$core$Bit $tmp741 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s740);
    $tmp736 = $tmp741.value;
    $l739:;
    panda$core$Bit $tmp742 = { $tmp736 };
    bool $tmp735 = $tmp742.value;
    if ($tmp735) goto $l743;
    panda$core$Bit $tmp745 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s744);
    $tmp735 = $tmp745.value;
    $l743:;
    panda$core$Bit $tmp746 = { $tmp735 };
    bool $tmp734 = $tmp746.value;
    if ($tmp734) goto $l747;
    panda$core$Bit $tmp748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
    $tmp734 = $tmp748.value;
    $l747:;
    panda$core$Bit $tmp749 = { $tmp734 };
    bool $tmp733 = $tmp749.value;
    if ($tmp733) goto $l750;
    panda$core$Bit $tmp751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
    $tmp733 = $tmp751.value;
    $l750:;
    panda$core$Bit $tmp752 = { $tmp733 };
    $returnValue732 = $tmp752;
    return $returnValue732;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue754;
    panda$core$Bit $tmp758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp757 = $tmp758.value;
    if ($tmp757) goto $l759;
    panda$core$Bit $tmp760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 3 }));
    $tmp757 = $tmp760.value;
    $l759:;
    panda$core$Bit $tmp761 = { $tmp757 };
    bool $tmp756 = $tmp761.value;
    if ($tmp756) goto $l762;
    panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 10 }));
    $tmp756 = $tmp763.value;
    $l762:;
    panda$core$Bit $tmp764 = { $tmp756 };
    bool $tmp755 = $tmp764.value;
    if ($tmp755) goto $l765;
    panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
    $tmp755 = $tmp766.value;
    $l765:;
    panda$core$Bit $tmp767 = { $tmp755 };
    $returnValue754 = $tmp767;
    return $returnValue754;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue769;
    panda$core$Bit $tmp771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
    bool $tmp770 = $tmp771.value;
    if ($tmp770) goto $l772;
    panda$core$Bit $tmp774 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s773);
    $tmp770 = $tmp774.value;
    $l772:;
    panda$core$Bit $tmp775 = { $tmp770 };
    $returnValue769 = $tmp775;
    return $returnValue769;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue777;
    panda$core$Bit $tmp779 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s778);
    $returnValue777 = $tmp779;
    return $returnValue777;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue781;
    panda$core$Bit $tmp783 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp782 = $tmp783.value;
    if ($tmp782) goto $l784;
    panda$core$Bit $tmp785 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp782 = $tmp785.value;
    $l784:;
    panda$core$Bit $tmp786 = { $tmp782 };
    $returnValue781 = $tmp786;
    return $returnValue781;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$456_9788;
    panda$core$Bit $returnValue818;
    {
        $match$456_9788 = self->typeKind;
        panda$core$Bit $tmp796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9788.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp795 = $tmp796.value;
        if ($tmp795) goto $l797;
        panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9788.$rawValue, ((panda$core$Int64) { 1 }));
        $tmp795 = $tmp798.value;
        $l797:;
        panda$core$Bit $tmp799 = { $tmp795 };
        bool $tmp794 = $tmp799.value;
        if ($tmp794) goto $l800;
        panda$core$Bit $tmp801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9788.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp794 = $tmp801.value;
        $l800:;
        panda$core$Bit $tmp802 = { $tmp794 };
        bool $tmp793 = $tmp802.value;
        if ($tmp793) goto $l803;
        panda$core$Bit $tmp804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9788.$rawValue, ((panda$core$Int64) { 12 }));
        $tmp793 = $tmp804.value;
        $l803:;
        panda$core$Bit $tmp805 = { $tmp793 };
        bool $tmp792 = $tmp805.value;
        if ($tmp792) goto $l806;
        panda$core$Bit $tmp807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9788.$rawValue, ((panda$core$Int64) { 15 }));
        $tmp792 = $tmp807.value;
        $l806:;
        panda$core$Bit $tmp808 = { $tmp792 };
        bool $tmp791 = $tmp808.value;
        if ($tmp791) goto $l809;
        panda$core$Bit $tmp810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9788.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp791 = $tmp810.value;
        $l809:;
        panda$core$Bit $tmp811 = { $tmp791 };
        bool $tmp790 = $tmp811.value;
        if ($tmp790) goto $l812;
        panda$core$Bit $tmp813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9788.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp790 = $tmp813.value;
        $l812:;
        panda$core$Bit $tmp814 = { $tmp790 };
        bool $tmp789 = $tmp814.value;
        if ($tmp789) goto $l815;
        panda$core$Bit $tmp816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9788.$rawValue, ((panda$core$Int64) { 16 }));
        $tmp789 = $tmp816.value;
        $l815:;
        panda$core$Bit $tmp817 = { $tmp789 };
        if ($tmp817.value) {
        {
            $returnValue818 = ((panda$core$Bit) { true });
            return $returnValue818;
        }
        }
        else {
        {
            $returnValue818 = ((panda$core$Bit) { false });
            return $returnValue818;
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$466_9821;
    panda$core$Bit $returnValue835;
    {
        $match$466_9821 = self->typeKind;
        panda$core$Bit $tmp825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_9821.$rawValue, ((panda$core$Int64) { 15 }));
        bool $tmp824 = $tmp825.value;
        if ($tmp824) goto $l826;
        panda$core$Bit $tmp827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_9821.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp824 = $tmp827.value;
        $l826:;
        panda$core$Bit $tmp828 = { $tmp824 };
        bool $tmp823 = $tmp828.value;
        if ($tmp823) goto $l829;
        panda$core$Bit $tmp830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_9821.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp823 = $tmp830.value;
        $l829:;
        panda$core$Bit $tmp831 = { $tmp823 };
        bool $tmp822 = $tmp831.value;
        if ($tmp822) goto $l832;
        panda$core$Bit $tmp833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_9821.$rawValue, ((panda$core$Int64) { 16 }));
        $tmp822 = $tmp833.value;
        $l832:;
        panda$core$Bit $tmp834 = { $tmp822 };
        if ($tmp834.value) {
        {
            $returnValue835 = ((panda$core$Bit) { true });
            return $returnValue835;
        }
        }
        else {
        {
            $returnValue835 = ((panda$core$Bit) { false });
            return $returnValue835;
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue838;
    panda$core$Bit $tmp840 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s839);
    $returnValue838 = $tmp840;
    return $returnValue838;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue843;
    panda$core$Object* $tmp844;
    panda$core$Object* $tmp851;
    panda$core$Bit $tmp842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp842.value) {
    {
        panda$core$Object* $tmp845 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp844 = $tmp845;
        panda$core$Bit $tmp846 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp844));
        $returnValue843 = $tmp846;
        panda$core$Panda$unref$panda$core$Object($tmp844);
        return $returnValue843;
    }
    }
    panda$core$Bit $tmp849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp848 = $tmp849.value;
    if (!$tmp848) goto $l850;
    panda$core$Object* $tmp852 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp851 = $tmp852;
    panda$core$Bit $tmp854 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp851))->name, &$s853);
    $tmp848 = $tmp854.value;
    panda$core$Panda$unref$panda$core$Object($tmp851);
    $l850:;
    panda$core$Bit $tmp855 = { $tmp848 };
    $returnValue843 = $tmp855;
    return $returnValue843;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue858;
    panda$core$Object* $tmp859;
    panda$core$Object* $tmp866;
    panda$core$Bit $tmp857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp857.value) {
    {
        panda$core$Object* $tmp860 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp859 = $tmp860;
        panda$core$Bit $tmp861 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp859));
        $returnValue858 = $tmp861;
        panda$core$Panda$unref$panda$core$Object($tmp859);
        return $returnValue858;
    }
    }
    panda$core$Bit $tmp864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp863 = $tmp864.value;
    if (!$tmp863) goto $l865;
    panda$core$Object* $tmp867 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp866 = $tmp867;
    panda$core$Bit $tmp869 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp866))->name, &$s868);
    $tmp863 = $tmp869.value;
    panda$core$Panda$unref$panda$core$Object($tmp866);
    $l865:;
    panda$core$Bit $tmp870 = { $tmp863 };
    $returnValue858 = $tmp870;
    return $returnValue858;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue876;
    org$pandalanguage$pandac$Type* $tmp877;
    panda$collections$Array* subtypes880 = NULL;
    panda$collections$Array* $tmp881;
    panda$collections$Array* $tmp882;
    org$pandalanguage$pandac$Type* $tmp884;
    org$pandalanguage$pandac$Type* $tmp885;
    panda$core$String* $tmp887;
    panda$core$String* $tmp888;
    org$pandalanguage$pandac$Type$Kind $tmp892;
    org$pandalanguage$pandac$Position $tmp893;
    int $tmp874;
    {
        panda$core$Bit $tmp875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp875.value) {
        {
            $tmp877 = self;
            $returnValue876 = $tmp877;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp877));
            $tmp874 = 0;
            goto $l872;
            $l878:;
            return $returnValue876;
        }
        }
        panda$collections$Array* $tmp883 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp883);
        $tmp882 = $tmp883;
        $tmp881 = $tmp882;
        subtypes880 = $tmp881;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp881));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp882));
        panda$collections$Array$add$panda$collections$Array$T(subtypes880, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp886 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp889 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp888 = $tmp889;
        panda$core$String* $tmp891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp888, &$s890);
        $tmp887 = $tmp891;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp892, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Position$init(&$tmp893);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp886, $tmp887, $tmp892, $tmp893, ((panda$collections$ListView*) subtypes880), ((panda$core$Bit) { true }));
        $tmp885 = $tmp886;
        $tmp884 = $tmp885;
        $returnValue876 = $tmp884;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp884));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp885));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp887));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
        $tmp874 = 1;
        goto $l872;
        $l894:;
        return $returnValue876;
    }
    $l872:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes880));
    subtypes880 = NULL;
    switch ($tmp874) {
        case 0: goto $l878;
        case 1: goto $l894;
    }
    $l896:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue898;
    org$pandalanguage$pandac$Type* $tmp899;
    org$pandalanguage$pandac$Type* $tmp901;
    panda$core$Object* $tmp902;
    panda$core$Bit $tmp897 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp897.value) {
    {
        $tmp899 = self;
        $returnValue898 = $tmp899;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp899));
        return $returnValue898;
    }
    }
    panda$core$Object* $tmp903 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp902 = $tmp903;
    $tmp901 = ((org$pandalanguage$pandac$Type*) $tmp902);
    $returnValue898 = $tmp901;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp901));
    panda$core$Panda$unref$panda$core$Object($tmp902);
    return $returnValue898;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $returnValue909;
    org$pandalanguage$pandac$Type* $tmp910;
    org$pandalanguage$pandac$Type* $tmp913;
    org$pandalanguage$pandac$Type* $tmp917;
    org$pandalanguage$pandac$Type* $tmp920;
    org$pandalanguage$pandac$Type* $tmp921;
    org$pandalanguage$pandac$Type* $tmp925;
    org$pandalanguage$pandac$Type* $tmp929;
    org$pandalanguage$pandac$Type* $tmp932;
    org$pandalanguage$pandac$Type* $tmp933;
    org$pandalanguage$pandac$Type* $tmp942;
    org$pandalanguage$pandac$Type* $tmp950;
    org$pandalanguage$pandac$Type* $tmp959;
    org$pandalanguage$pandac$Type* $tmp965;
    org$pandalanguage$pandac$Type* $tmp966;
    org$pandalanguage$pandac$Type* $tmp970;
    org$pandalanguage$pandac$Type* $tmp971;
    org$pandalanguage$pandac$Type* $tmp981;
    org$pandalanguage$pandac$Type* $tmp987;
    org$pandalanguage$pandac$Type* $tmp988;
    org$pandalanguage$pandac$Type* $tmp992;
    org$pandalanguage$pandac$Type* $tmp993;
    org$pandalanguage$pandac$Type* $tmp998;
    org$pandalanguage$pandac$Type* $tmp999;
    org$pandalanguage$pandac$Type* $tmp1000;
    panda$core$Object* $tmp1001;
    org$pandalanguage$pandac$Type* $tmp1008;
    org$pandalanguage$pandac$Type* $tmp1009;
    org$pandalanguage$pandac$Type* $tmp1010;
    panda$core$Object* $tmp1011;
    org$pandalanguage$pandac$Type* t11017 = NULL;
    org$pandalanguage$pandac$Type* $tmp1018;
    org$pandalanguage$pandac$Type* $tmp1019;
    org$pandalanguage$pandac$Type* t21021 = NULL;
    org$pandalanguage$pandac$Type* $tmp1022;
    org$pandalanguage$pandac$Type* $tmp1023;
    panda$collections$Set* ancestors1033 = NULL;
    panda$collections$Set* $tmp1034;
    panda$collections$Set* $tmp1035;
    org$pandalanguage$pandac$Type* t1037 = NULL;
    org$pandalanguage$pandac$Type* $tmp1038;
    org$pandalanguage$pandac$ClassDecl* cl1039 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1040;
    org$pandalanguage$pandac$ClassDecl* $tmp1041;
    org$pandalanguage$pandac$Type* $tmp1046;
    org$pandalanguage$pandac$Type* $tmp1047;
    org$pandalanguage$pandac$Type* $tmp1048;
    org$pandalanguage$pandac$ClassDecl* $tmp1050;
    org$pandalanguage$pandac$ClassDecl* $tmp1051;
    org$pandalanguage$pandac$ClassDecl* $tmp1052;
    org$pandalanguage$pandac$ClassDecl* $tmp1054;
    org$pandalanguage$pandac$ClassDecl* $tmp1055;
    org$pandalanguage$pandac$Type* $tmp1056;
    org$pandalanguage$pandac$Type* $tmp1057;
    org$pandalanguage$pandac$ClassDecl* $tmp1058;
    org$pandalanguage$pandac$ClassDecl* $tmp1059;
    org$pandalanguage$pandac$ClassDecl* $tmp1060;
    org$pandalanguage$pandac$Type* $tmp1066;
    org$pandalanguage$pandac$Type* $tmp1070;
    org$pandalanguage$pandac$Type* $tmp1071;
    org$pandalanguage$pandac$Type* $tmp1072;
    org$pandalanguage$pandac$ClassDecl* $tmp1074;
    org$pandalanguage$pandac$ClassDecl* $tmp1075;
    org$pandalanguage$pandac$ClassDecl* $tmp1076;
    org$pandalanguage$pandac$ClassDecl* $tmp1078;
    org$pandalanguage$pandac$ClassDecl* $tmp1079;
    org$pandalanguage$pandac$Type* $tmp1081;
    org$pandalanguage$pandac$Type* $tmp1082;
    int $tmp907;
    {
        panda$core$Bit $tmp908 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp908.value) {
        {
            $tmp910 = self;
            $returnValue909 = $tmp910;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp910));
            $tmp907 = 0;
            goto $l905;
            $l911:;
            return $returnValue909;
        }
        }
        org$pandalanguage$pandac$Type* $tmp914 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp913 = $tmp914;
        panda$core$Bit $tmp915 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp913);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp913));
        if ($tmp915.value) {
        {
            panda$core$Bit $tmp916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp916.value) {
            {
                $tmp917 = p_other;
                $returnValue909 = $tmp917;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp917));
                $tmp907 = 1;
                goto $l905;
                $l918:;
                return $returnValue909;
            }
            }
            org$pandalanguage$pandac$Type* $tmp922 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp921 = $tmp922;
            $tmp920 = $tmp921;
            $returnValue909 = $tmp920;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp920));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp921));
            $tmp907 = 2;
            goto $l905;
            $l923:;
            return $returnValue909;
        }
        }
        org$pandalanguage$pandac$Type* $tmp926 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp925 = $tmp926;
        panda$core$Bit $tmp927 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp925);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp925));
        if ($tmp927.value) {
        {
            panda$core$Bit $tmp928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp928.value) {
            {
                $tmp929 = self;
                $returnValue909 = $tmp929;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp929));
                $tmp907 = 3;
                goto $l905;
                $l930:;
                return $returnValue909;
            }
            }
            org$pandalanguage$pandac$Type* $tmp934 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp933 = $tmp934;
            $tmp932 = $tmp933;
            $returnValue909 = $tmp932;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp932));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp933));
            $tmp907 = 4;
            goto $l905;
            $l935:;
            return $returnValue909;
        }
        }
        panda$core$Bit $tmp938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        bool $tmp937 = $tmp938.value;
        if (!$tmp937) goto $l939;
        panda$core$Bit $tmp940 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp937 = $tmp940.value;
        $l939:;
        panda$core$Bit $tmp941 = { $tmp937 };
        if ($tmp941.value) {
        {
            $tmp942 = p_other;
            $returnValue909 = $tmp942;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp942));
            $tmp907 = 5;
            goto $l905;
            $l943:;
            return $returnValue909;
        }
        }
        panda$core$Bit $tmp946 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp945 = $tmp946.value;
        if (!$tmp945) goto $l947;
        panda$core$Bit $tmp948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        $tmp945 = $tmp948.value;
        $l947:;
        panda$core$Bit $tmp949 = { $tmp945 };
        if ($tmp949.value) {
        {
            $tmp950 = self;
            $returnValue909 = $tmp950;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp950));
            $tmp907 = 6;
            goto $l905;
            $l951:;
            return $returnValue909;
        }
        }
        panda$core$Bit $tmp953 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp953.value) {
        {
            panda$core$Bit $tmp955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp954 = $tmp955.value;
            if ($tmp954) goto $l956;
            panda$core$Bit $tmp957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp954 = $tmp957.value;
            $l956:;
            panda$core$Bit $tmp958 = { $tmp954 };
            if ($tmp958.value) {
            {
                $tmp959 = self;
                $returnValue909 = $tmp959;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp959));
                $tmp907 = 7;
                goto $l905;
                $l960:;
                return $returnValue909;
            }
            }
            panda$core$Bit $tmp962 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp962.value) {
            {
                panda$core$Bit $tmp964 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s963);
                if ($tmp964.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp967 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp966 = $tmp967;
                    $tmp965 = $tmp966;
                    $returnValue909 = $tmp965;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp965));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp966));
                    $tmp907 = 8;
                    goto $l905;
                    $l968:;
                    return $returnValue909;
                }
                }
                org$pandalanguage$pandac$Type* $tmp972 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp971 = $tmp972;
                $tmp970 = $tmp971;
                $returnValue909 = $tmp970;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp970));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp971));
                $tmp907 = 9;
                goto $l905;
                $l973:;
                return $returnValue909;
            }
            }
        }
        }
        panda$core$Bit $tmp975 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp975.value) {
        {
            panda$core$Bit $tmp977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp976 = $tmp977.value;
            if ($tmp976) goto $l978;
            panda$core$Bit $tmp979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp976 = $tmp979.value;
            $l978:;
            panda$core$Bit $tmp980 = { $tmp976 };
            if ($tmp980.value) {
            {
                $tmp981 = p_other;
                $returnValue909 = $tmp981;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp981));
                $tmp907 = 10;
                goto $l905;
                $l982:;
                return $returnValue909;
            }
            }
            panda$core$Bit $tmp984 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp984.value) {
            {
                panda$core$Bit $tmp986 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s985);
                if ($tmp986.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp989 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp988 = $tmp989;
                    $tmp987 = $tmp988;
                    $returnValue909 = $tmp987;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp987));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp988));
                    $tmp907 = 11;
                    goto $l905;
                    $l990:;
                    return $returnValue909;
                }
                }
                org$pandalanguage$pandac$Type* $tmp994 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp993 = $tmp994;
                $tmp992 = $tmp993;
                $returnValue909 = $tmp992;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp992));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp993));
                $tmp907 = 12;
                goto $l905;
                $l995:;
                return $returnValue909;
            }
            }
        }
        }
        panda$core$Bit $tmp997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp997.value) {
        {
            panda$core$Object* $tmp1002 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1001 = $tmp1002;
            org$pandalanguage$pandac$Type* $tmp1003 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1001), p_compiler, p_other);
            $tmp1000 = $tmp1003;
            org$pandalanguage$pandac$Type* $tmp1004 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1000);
            $tmp999 = $tmp1004;
            $tmp998 = $tmp999;
            $returnValue909 = $tmp998;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp998));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp999));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1000));
            panda$core$Panda$unref$panda$core$Object($tmp1001);
            $tmp907 = 13;
            goto $l905;
            $l1005:;
            return $returnValue909;
        }
        }
        panda$core$Bit $tmp1007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1007.value) {
        {
            panda$core$Object* $tmp1012 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1011 = $tmp1012;
            org$pandalanguage$pandac$Type* $tmp1013 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp1011));
            $tmp1010 = $tmp1013;
            org$pandalanguage$pandac$Type* $tmp1014 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1010);
            $tmp1009 = $tmp1014;
            $tmp1008 = $tmp1009;
            $returnValue909 = $tmp1008;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1008));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1009));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1010));
            panda$core$Panda$unref$panda$core$Object($tmp1011);
            $tmp907 = 14;
            goto $l905;
            $l1015:;
            return $returnValue909;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1020 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp1019 = $tmp1020;
        $tmp1018 = $tmp1019;
        t11017 = $tmp1018;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1018));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1019));
        org$pandalanguage$pandac$Type* $tmp1024 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp1023 = $tmp1024;
        $tmp1022 = $tmp1023;
        t21021 = $tmp1022;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1022));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1023));
        panda$core$Bit $tmp1026 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t11017);
        bool $tmp1025 = $tmp1026.value;
        if (!$tmp1025) goto $l1027;
        panda$core$Bit $tmp1028 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t21021);
        $tmp1025 = $tmp1028.value;
        $l1027:;
        panda$core$Bit $tmp1029 = { $tmp1025 };
        if ($tmp1029.value) {
        {
            int $tmp1032;
            {
                panda$collections$Set* $tmp1036 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
                panda$collections$Set$init($tmp1036);
                $tmp1035 = $tmp1036;
                $tmp1034 = $tmp1035;
                ancestors1033 = $tmp1034;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1034));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1035));
                $tmp1038 = self;
                t1037 = $tmp1038;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1038));
                org$pandalanguage$pandac$ClassDecl* $tmp1042 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t11017);
                $tmp1041 = $tmp1042;
                $tmp1040 = $tmp1041;
                cl1039 = $tmp1040;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1040));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1041));
                $l1043:;
                bool $tmp1045 = ((panda$core$Bit) { cl1039 != NULL }).value;
                if (!$tmp1045) goto $l1044;
                {
                    panda$collections$Set$add$panda$collections$Set$T(ancestors1033, ((panda$collections$Key*) t1037));
                    if (((panda$core$Bit) { cl1039->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1046 = t1037;
                            org$pandalanguage$pandac$Type* $tmp1049 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1037, cl1039->rawSuper);
                            $tmp1048 = $tmp1049;
                            $tmp1047 = $tmp1048;
                            t1037 = $tmp1047;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1047));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1046));
                        }
                        {
                            $tmp1050 = cl1039;
                            org$pandalanguage$pandac$ClassDecl* $tmp1053 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1037);
                            $tmp1052 = $tmp1053;
                            $tmp1051 = $tmp1052;
                            cl1039 = $tmp1051;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1051));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1052));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1050));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1054 = cl1039;
                            $tmp1055 = NULL;
                            cl1039 = $tmp1055;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1055));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1054));
                        }
                    }
                    }
                }
                goto $l1043;
                $l1044:;
                {
                    $tmp1056 = t1037;
                    $tmp1057 = p_other;
                    t1037 = $tmp1057;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1057));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1056));
                }
                {
                    $tmp1058 = cl1039;
                    org$pandalanguage$pandac$ClassDecl* $tmp1061 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t21021);
                    $tmp1060 = $tmp1061;
                    $tmp1059 = $tmp1060;
                    cl1039 = $tmp1059;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1059));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1060));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1058));
                }
                $l1062:;
                bool $tmp1064 = ((panda$core$Bit) { cl1039 != NULL }).value;
                if (!$tmp1064) goto $l1063;
                {
                    panda$core$Bit $tmp1065 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors1033, ((panda$collections$Key*) t1037));
                    if ($tmp1065.value) {
                    {
                        $tmp1066 = t1037;
                        $returnValue909 = $tmp1066;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1066));
                        $tmp1032 = 0;
                        goto $l1030;
                        $l1067:;
                        $tmp907 = 15;
                        goto $l905;
                        $l1068:;
                        return $returnValue909;
                    }
                    }
                    if (((panda$core$Bit) { cl1039->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1070 = t1037;
                            org$pandalanguage$pandac$Type* $tmp1073 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1037, cl1039->rawSuper);
                            $tmp1072 = $tmp1073;
                            $tmp1071 = $tmp1072;
                            t1037 = $tmp1071;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1071));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1072));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1070));
                        }
                        {
                            $tmp1074 = cl1039;
                            org$pandalanguage$pandac$ClassDecl* $tmp1077 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1037);
                            $tmp1076 = $tmp1077;
                            $tmp1075 = $tmp1076;
                            cl1039 = $tmp1075;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1075));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1076));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1074));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1078 = cl1039;
                            $tmp1079 = NULL;
                            cl1039 = $tmp1079;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1079));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1078));
                        }
                    }
                    }
                }
                goto $l1062;
                $l1063:;
            }
            $tmp1032 = -1;
            goto $l1030;
            $l1030:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors1033));
            ancestors1033 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1037));
            t1037 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1039));
            cl1039 = NULL;
            switch ($tmp1032) {
                case -1: goto $l1080;
                case 0: goto $l1067;
            }
            $l1080:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1083 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp1082 = $tmp1083;
        $tmp1081 = $tmp1082;
        $returnValue909 = $tmp1081;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1081));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1082));
        $tmp907 = 16;
        goto $l905;
        $l1084:;
        return $returnValue909;
    }
    $l905:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t11017));
    t11017 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t21021));
    t21021 = NULL;
    switch ($tmp907) {
        case 3: goto $l930;
        case 16: goto $l1084;
        case 7: goto $l960;
        case 11: goto $l990;
        case 2: goto $l923;
        case 5: goto $l943;
        case 15: goto $l1068;
        case 4: goto $l935;
        case 14: goto $l1015;
        case 6: goto $l951;
        case 10: goto $l982;
        case 13: goto $l1005;
        case 9: goto $l973;
        case 1: goto $l918;
        case 0: goto $l911;
        case 8: goto $l968;
        case 12: goto $l995;
    }
    $l1086:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* $returnValue1089;
    org$pandalanguage$pandac$Type* $tmp1090;
    org$pandalanguage$pandac$Type$Kind $match$597_91092;
    org$pandalanguage$pandac$Type* found1097 = NULL;
    org$pandalanguage$pandac$Type* $tmp1098;
    panda$core$Object* $tmp1099;
    org$pandalanguage$pandac$Type* $tmp1101;
    org$pandalanguage$pandac$Type* $tmp1104;
    org$pandalanguage$pandac$Type* base1112 = NULL;
    org$pandalanguage$pandac$Type* $tmp1113;
    org$pandalanguage$pandac$Type* $tmp1114;
    panda$core$Object* $tmp1115;
    panda$collections$Array* remappedArgs1118 = NULL;
    panda$collections$Array* $tmp1119;
    panda$collections$Array* $tmp1120;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1122;
    org$pandalanguage$pandac$Type* $tmp1137;
    panda$core$Object* $tmp1138;
    org$pandalanguage$pandac$Type* $tmp1147;
    org$pandalanguage$pandac$Type* $tmp1148;
    org$pandalanguage$pandac$Type* $tmp1154;
    org$pandalanguage$pandac$Type* $tmp1155;
    org$pandalanguage$pandac$Type* $tmp1156;
    panda$core$Object* $tmp1157;
    panda$collections$Array* remapped1178 = NULL;
    panda$collections$Array* $tmp1179;
    panda$collections$Array* $tmp1180;
    panda$core$MutableString* name1182 = NULL;
    panda$core$MutableString* $tmp1183;
    panda$core$MutableString* $tmp1184;
    panda$core$String* separator1187 = NULL;
    panda$core$String* $tmp1188;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1192;
    org$pandalanguage$pandac$Type* child1211 = NULL;
    org$pandalanguage$pandac$Type* $tmp1212;
    org$pandalanguage$pandac$Type* $tmp1213;
    panda$core$Object* $tmp1214;
    panda$core$String* $tmp1217;
    panda$core$String* $tmp1218;
    org$pandalanguage$pandac$Type$Kind $match$625_171227;
    panda$core$Object* $tmp1236;
    org$pandalanguage$pandac$Type* $tmp1240;
    org$pandalanguage$pandac$Type* child1246 = NULL;
    org$pandalanguage$pandac$Type* $tmp1247;
    org$pandalanguage$pandac$Type* $tmp1248;
    panda$core$Object* $tmp1249;
    org$pandalanguage$pandac$Type* $tmp1255;
    panda$core$Char8 $tmp1257;
    org$pandalanguage$pandac$Type* $tmp1258;
    org$pandalanguage$pandac$Type* $tmp1259;
    panda$core$String* $tmp1261;
    org$pandalanguage$pandac$Type* $tmp1266;
    panda$core$Int64 $tmp1087 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp1088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1087, ((panda$core$Int64) { 0 }));
    if ($tmp1088.value) {
    {
        $tmp1090 = self;
        $returnValue1089 = $tmp1090;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1090));
        return $returnValue1089;
    }
    }
    {
        $match$597_91092 = self->typeKind;
        panda$core$Bit $tmp1093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597_91092.$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1093.value) {
        {
            int $tmp1096;
            {
                panda$core$Object* $tmp1100 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                $tmp1099 = $tmp1100;
                $tmp1098 = ((org$pandalanguage$pandac$Type*) $tmp1099);
                found1097 = $tmp1098;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1098));
                panda$core$Panda$unref$panda$core$Object($tmp1099);
                if (((panda$core$Bit) { found1097 != NULL }).value) {
                {
                    $tmp1101 = found1097;
                    $returnValue1089 = $tmp1101;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1101));
                    $tmp1096 = 0;
                    goto $l1094;
                    $l1102:;
                    return $returnValue1089;
                }
                }
                $tmp1104 = self;
                $returnValue1089 = $tmp1104;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1104));
                $tmp1096 = 1;
                goto $l1094;
                $l1105:;
                return $returnValue1089;
            }
            $l1094:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found1097));
            found1097 = NULL;
            switch ($tmp1096) {
                case 1: goto $l1105;
                case 0: goto $l1102;
            }
            $l1107:;
        }
        }
        else {
        panda$core$Bit $tmp1108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597_91092.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1108.value) {
        {
            int $tmp1111;
            {
                panda$core$Object* $tmp1116 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
                $tmp1115 = $tmp1116;
                org$pandalanguage$pandac$Type* $tmp1117 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1115), p_types);
                $tmp1114 = $tmp1117;
                $tmp1113 = $tmp1114;
                base1112 = $tmp1113;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1114));
                panda$core$Panda$unref$panda$core$Object($tmp1115);
                panda$collections$Array* $tmp1121 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1121);
                $tmp1120 = $tmp1121;
                $tmp1119 = $tmp1120;
                remappedArgs1118 = $tmp1119;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1119));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1120));
                panda$core$Int64 $tmp1123 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1122, ((panda$core$Int64) { 1 }), $tmp1123, ((panda$core$Bit) { false }));
                int64_t $tmp1125 = $tmp1122.min.value;
                panda$core$Int64 i1124 = { $tmp1125 };
                int64_t $tmp1127 = $tmp1122.max.value;
                bool $tmp1128 = $tmp1122.inclusive.value;
                if ($tmp1128) goto $l1135; else goto $l1136;
                $l1135:;
                if ($tmp1125 <= $tmp1127) goto $l1129; else goto $l1131;
                $l1136:;
                if ($tmp1125 < $tmp1127) goto $l1129; else goto $l1131;
                $l1129:;
                {
                    panda$core$Object* $tmp1139 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1124);
                    $tmp1138 = $tmp1139;
                    org$pandalanguage$pandac$Type* $tmp1140 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1138), p_types);
                    $tmp1137 = $tmp1140;
                    panda$collections$Array$add$panda$collections$Array$T(remappedArgs1118, ((panda$core$Object*) $tmp1137));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1137));
                    panda$core$Panda$unref$panda$core$Object($tmp1138);
                }
                $l1132:;
                int64_t $tmp1142 = $tmp1127 - i1124.value;
                if ($tmp1128) goto $l1143; else goto $l1144;
                $l1143:;
                if ((uint64_t) $tmp1142 >= 1) goto $l1141; else goto $l1131;
                $l1144:;
                if ((uint64_t) $tmp1142 > 1) goto $l1141; else goto $l1131;
                $l1141:;
                i1124.value += 1;
                goto $l1129;
                $l1131:;
                org$pandalanguage$pandac$Type* $tmp1149 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base1112, ((panda$collections$ListView*) remappedArgs1118));
                $tmp1148 = $tmp1149;
                $tmp1147 = $tmp1148;
                $returnValue1089 = $tmp1147;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1147));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1148));
                $tmp1111 = 0;
                goto $l1109;
                $l1150:;
                return $returnValue1089;
            }
            $l1109:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1112));
            base1112 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remappedArgs1118));
            remappedArgs1118 = NULL;
            switch ($tmp1111) {
                case 0: goto $l1150;
            }
            $l1152:;
        }
        }
        else {
        panda$core$Bit $tmp1153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597_91092.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1153.value) {
        {
            panda$core$Object* $tmp1158 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1157 = $tmp1158;
            org$pandalanguage$pandac$Type* $tmp1159 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1157), p_types);
            $tmp1156 = $tmp1159;
            org$pandalanguage$pandac$Type* $tmp1160 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1156);
            $tmp1155 = $tmp1160;
            $tmp1154 = $tmp1155;
            $returnValue1089 = $tmp1154;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1154));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1155));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1156));
            panda$core$Panda$unref$panda$core$Object($tmp1157);
            return $returnValue1089;
        }
        }
        else {
        panda$core$Bit $tmp1165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597_91092.$rawValue, ((panda$core$Int64) { 15 }));
        bool $tmp1164 = $tmp1165.value;
        if ($tmp1164) goto $l1166;
        panda$core$Bit $tmp1167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597_91092.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp1164 = $tmp1167.value;
        $l1166:;
        panda$core$Bit $tmp1168 = { $tmp1164 };
        bool $tmp1163 = $tmp1168.value;
        if ($tmp1163) goto $l1169;
        panda$core$Bit $tmp1170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597_91092.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp1163 = $tmp1170.value;
        $l1169:;
        panda$core$Bit $tmp1171 = { $tmp1163 };
        bool $tmp1162 = $tmp1171.value;
        if ($tmp1162) goto $l1172;
        panda$core$Bit $tmp1173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597_91092.$rawValue, ((panda$core$Int64) { 16 }));
        $tmp1162 = $tmp1173.value;
        $l1172:;
        panda$core$Bit $tmp1174 = { $tmp1162 };
        if ($tmp1174.value) {
        {
            int $tmp1177;
            {
                panda$collections$Array* $tmp1181 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1181);
                $tmp1180 = $tmp1181;
                $tmp1179 = $tmp1180;
                remapped1178 = $tmp1179;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1179));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1180));
                panda$core$MutableString* $tmp1185 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1185, &$s1186);
                $tmp1184 = $tmp1185;
                $tmp1183 = $tmp1184;
                name1182 = $tmp1183;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1183));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1184));
                $tmp1188 = &$s1189;
                separator1187 = $tmp1188;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1188));
                panda$core$Int64 $tmp1190 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Bit $tmp1191 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1190, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1191.value);
                panda$core$Int64 $tmp1193 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1194 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1193, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1192, ((panda$core$Int64) { 0 }), $tmp1194, ((panda$core$Bit) { false }));
                int64_t $tmp1196 = $tmp1192.min.value;
                panda$core$Int64 i1195 = { $tmp1196 };
                int64_t $tmp1198 = $tmp1192.max.value;
                bool $tmp1199 = $tmp1192.inclusive.value;
                if ($tmp1199) goto $l1206; else goto $l1207;
                $l1206:;
                if ($tmp1196 <= $tmp1198) goto $l1200; else goto $l1202;
                $l1207:;
                if ($tmp1196 < $tmp1198) goto $l1200; else goto $l1202;
                $l1200:;
                {
                    int $tmp1210;
                    {
                        panda$core$Object* $tmp1215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1195);
                        $tmp1214 = $tmp1215;
                        org$pandalanguage$pandac$Type* $tmp1216 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1214), p_types);
                        $tmp1213 = $tmp1216;
                        $tmp1212 = $tmp1213;
                        child1211 = $tmp1212;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1212));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1213));
                        panda$core$Panda$unref$panda$core$Object($tmp1214);
                        panda$core$MutableString$append$panda$core$String(name1182, separator1187);
                        panda$core$MutableString$append$panda$core$String(name1182, ((org$pandalanguage$pandac$Symbol*) child1211)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1178, ((panda$core$Object*) child1211));
                        {
                            $tmp1217 = separator1187;
                            $tmp1218 = &$s1219;
                            separator1187 = $tmp1218;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1218));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1217));
                        }
                    }
                    $tmp1210 = -1;
                    goto $l1208;
                    $l1208:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1211));
                    child1211 = NULL;
                    switch ($tmp1210) {
                        case -1: goto $l1220;
                    }
                    $l1220:;
                }
                $l1203:;
                int64_t $tmp1222 = $tmp1198 - i1195.value;
                if ($tmp1199) goto $l1223; else goto $l1224;
                $l1223:;
                if ((uint64_t) $tmp1222 >= 1) goto $l1221; else goto $l1202;
                $l1224:;
                if ((uint64_t) $tmp1222 > 1) goto $l1221; else goto $l1202;
                $l1221:;
                i1195.value += 1;
                goto $l1200;
                $l1202:;
                {
                    $match$625_171227 = self->typeKind;
                    panda$core$Bit $tmp1228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$625_171227.$rawValue, ((panda$core$Int64) { 14 }));
                    if ($tmp1228.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1182, &$s1229);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$625_171227.$rawValue, ((panda$core$Int64) { 15 }));
                    if ($tmp1230.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1182, &$s1231);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$625_171227.$rawValue, ((panda$core$Int64) { 16 }));
                    if ($tmp1232.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1182, &$s1233);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$625_171227.$rawValue, ((panda$core$Int64) { 17 }));
                    if ($tmp1234.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1182, &$s1235);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$Int64 $tmp1237 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1238 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1237, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1239 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1238);
                $tmp1236 = $tmp1239;
                org$pandalanguage$pandac$Type* $tmp1241 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1240 = $tmp1241;
                panda$core$Bit $tmp1242 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1236), $tmp1240);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1240));
                panda$core$Panda$unref$panda$core$Object($tmp1236);
                if ($tmp1242.value) {
                {
                    int $tmp1245;
                    {
                        panda$core$Int64 $tmp1250 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                        panda$core$Int64 $tmp1251 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1250, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1252 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1251);
                        $tmp1249 = $tmp1252;
                        org$pandalanguage$pandac$Type* $tmp1253 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1249), p_types);
                        $tmp1248 = $tmp1253;
                        $tmp1247 = $tmp1248;
                        child1246 = $tmp1247;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1247));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1248));
                        panda$core$Panda$unref$panda$core$Object($tmp1249);
                        panda$core$MutableString$append$panda$core$String(name1182, ((org$pandalanguage$pandac$Symbol*) child1246)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1178, ((panda$core$Object*) child1246));
                    }
                    $tmp1245 = -1;
                    goto $l1243;
                    $l1243:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1246));
                    child1246 = NULL;
                    switch ($tmp1245) {
                        case -1: goto $l1254;
                    }
                    $l1254:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1256 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                    $tmp1255 = $tmp1256;
                    panda$collections$Array$add$panda$collections$Array$T(remapped1178, ((panda$core$Object*) $tmp1255));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1255));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1257, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(name1182, $tmp1257);
                org$pandalanguage$pandac$Type* $tmp1260 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp1262 = panda$core$MutableString$finish$R$panda$core$String(name1182);
                $tmp1261 = $tmp1262;
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1260, $tmp1261, self->typeKind, self->position, ((panda$collections$ListView*) remapped1178), self->resolved);
                $tmp1259 = $tmp1260;
                $tmp1258 = $tmp1259;
                $returnValue1089 = $tmp1258;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1258));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1259));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1261));
                $tmp1177 = 0;
                goto $l1175;
                $l1263:;
                return $returnValue1089;
            }
            $l1175:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped1178));
            remapped1178 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1182));
            name1182 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1187));
            separator1187 = NULL;
            switch ($tmp1177) {
                case 0: goto $l1263;
            }
            $l1265:;
        }
        }
        else {
        {
            $tmp1266 = self;
            $returnValue1089 = $tmp1266;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1266));
            return $returnValue1089;
        }
        }
        }
        }
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue1268;
    panda$core$Int64 $tmp1269 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $returnValue1268 = $tmp1269;
    return $returnValue1268;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $returnValue1271;
    panda$core$String* $tmp1272;
    $tmp1272 = self->name;
    $returnValue1271 = $tmp1272;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1272));
    return $returnValue1271;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1276;
    {
    }
    $tmp1276 = -1;
    goto $l1274;
    $l1274:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1276) {
        case -1: goto $l1277;
    }
    $l1277:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

