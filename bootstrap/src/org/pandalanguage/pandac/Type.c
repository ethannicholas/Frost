#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* self, panda$core$Object* p0) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Type*) p0));
    return result;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* self, panda$core$Object* p0) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Type*) p0));
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Type$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Type$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$collections$Key, { org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim} };

static panda$core$String $s1;
org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, org$pandalanguage$pandac$Type$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit, org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit, org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit, org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn54)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn61)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn72)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn123)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn130)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn141)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 29, -3248623696866231612, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s1053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };

void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position) {
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp2;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    $tmp2 = NULL;
    self->parameter = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(self, p_name, p_typeKind, p_position, ((panda$core$Bit) { false }));
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_resolved) {
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp3;
    panda$collections$Array* $tmp7;
    panda$collections$Array* $tmp8;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    $tmp3 = NULL;
    self->parameter = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$core$Bit $tmp5 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s4);
    panda$core$Bit $tmp6 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5);
    PANDA_ASSERT($tmp6.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        $tmp7 = self->subtypes;
        $tmp8 = NULL;
        self->subtypes = $tmp8;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, panda$core$Int64 p_size) {
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp9;
    org$pandalanguage$pandac$Position $tmp13;
    panda$collections$Array* $tmp14;
    panda$collections$Array* $tmp15;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    $tmp9 = NULL;
    self->parameter = $tmp9;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
    panda$core$Bit $tmp11 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s10);
    panda$core$Bit $tmp12 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp11);
    PANDA_ASSERT($tmp12.value);
    self->typeKind = p_typeKind;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp13, p_size, p_size);
    ((org$pandalanguage$pandac$Symbol*) self)->position = $tmp13;
    self->resolved = ((panda$core$Bit) { true });
    {
        $tmp14 = self->subtypes;
        $tmp15 = NULL;
        self->subtypes = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_subtypes, panda$core$Bit p_resolved) {
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp16;
    panda$collections$Array* $tmp26;
    panda$collections$Array* $tmp27;
    panda$collections$Array* $tmp28;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    $tmp16 = NULL;
    self->parameter = $tmp16;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
    panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 11 }));
    panda$core$Bit $tmp19 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s18);
    panda$core$Bit $tmp20 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp17, $tmp19);
    PANDA_ASSERT($tmp20.value);
    panda$core$Bit $tmp21 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 21 }));
    panda$core$Bit $tmp23 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s22);
    panda$core$Bit $tmp24 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp21, $tmp23);
    PANDA_ASSERT($tmp24.value);
    panda$core$Bit $tmp25 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 22 }));
    PANDA_ASSERT($tmp25.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        $tmp26 = self->subtypes;
        panda$collections$Array* $tmp29 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp29, p_subtypes);
        $tmp28 = $tmp29;
        $tmp27 = $tmp28;
        self->subtypes = $tmp27;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp30;
    panda$collections$Array* $tmp34;
    panda$collections$Array* $tmp35;
    panda$collections$Array* $tmp36;
    panda$core$MutableString* name38 = NULL;
    panda$core$MutableString* $tmp39;
    panda$core$MutableString* $tmp40;
    panda$core$String* separator43 = NULL;
    panda$core$String* $tmp44;
    panda$collections$Iterator* Iter$74$949 = NULL;
    panda$collections$Iterator* $tmp50;
    panda$collections$Iterator* $tmp51;
    org$pandalanguage$pandac$Type* t67 = NULL;
    org$pandalanguage$pandac$Type* $tmp68;
    panda$core$Object* $tmp69;
    panda$core$String* $tmp74;
    panda$core$String* $tmp75;
    panda$core$Char8 $tmp82;
    panda$core$String* $tmp83;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    $tmp30 = NULL;
    self->parameter = $tmp30;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
    int $tmp33;
    {
        self->typeKind = ((panda$core$Int64) { 17 });
        {
            $tmp34 = self->subtypes;
            panda$collections$Array* $tmp37 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp37, p_subtypes);
            $tmp36 = $tmp37;
            $tmp35 = $tmp36;
            self->subtypes = $tmp35;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
        }
        panda$core$MutableString* $tmp41 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp41, &$s42);
        $tmp40 = $tmp41;
        $tmp39 = $tmp40;
        name38 = $tmp39;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp39));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
        $tmp44 = &$s45;
        separator43 = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        self->resolved = ((panda$core$Bit) { true });
        {
            int $tmp48;
            {
                ITable* $tmp52 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
                while ($tmp52->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp52 = $tmp52->next;
                }
                $fn54 $tmp53 = $tmp52->methods[0];
                panda$collections$Iterator* $tmp55 = $tmp53(((panda$collections$Iterable*) p_subtypes));
                $tmp51 = $tmp55;
                $tmp50 = $tmp51;
                Iter$74$949 = $tmp50;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp50));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
                $l56:;
                ITable* $tmp59 = Iter$74$949->$class->itable;
                while ($tmp59->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp59 = $tmp59->next;
                }
                $fn61 $tmp60 = $tmp59->methods[0];
                panda$core$Bit $tmp62 = $tmp60(Iter$74$949);
                panda$core$Bit $tmp63 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp62);
                bool $tmp58 = $tmp63.value;
                if (!$tmp58) goto $l57;
                {
                    int $tmp66;
                    {
                        ITable* $tmp70 = Iter$74$949->$class->itable;
                        while ($tmp70->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp70 = $tmp70->next;
                        }
                        $fn72 $tmp71 = $tmp70->methods[1];
                        panda$core$Object* $tmp73 = $tmp71(Iter$74$949);
                        $tmp69 = $tmp73;
                        $tmp68 = ((org$pandalanguage$pandac$Type*) $tmp69);
                        t67 = $tmp68;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
                        panda$core$Panda$unref$panda$core$Object($tmp69);
                        panda$core$MutableString$append$panda$core$String(name38, separator43);
                        panda$core$MutableString$append$panda$core$Object(name38, ((panda$core$Object*) t67));
                        {
                            $tmp74 = separator43;
                            $tmp75 = &$s76;
                            separator43 = $tmp75;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
                        }
                        bool $tmp77 = self->resolved.value;
                        if (!$tmp77) goto $l78;
                        $tmp77 = t67->resolved.value;
                        $l78:;
                        panda$core$Bit $tmp79 = { $tmp77 };
                        self->resolved = $tmp79;
                    }
                    $tmp66 = -1;
                    goto $l64;
                    $l64:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t67));
                    t67 = NULL;
                    switch ($tmp66) {
                        case -1: goto $l80;
                    }
                    $l80:;
                }
                goto $l56;
                $l57:;
            }
            $tmp48 = -1;
            goto $l46;
            $l46:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$74$949));
            Iter$74$949 = NULL;
            switch ($tmp48) {
                case -1: goto $l81;
            }
            $l81:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp82, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name38, $tmp82);
        panda$core$String* $tmp84 = panda$core$MutableString$finish$R$panda$core$String(name38);
        $tmp83 = $tmp84;
        org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, $tmp83);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
    }
    $tmp33 = -1;
    goto $l31;
    $l31:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name38));
    name38 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator43));
    separator43 = NULL;
    switch ($tmp33) {
        case -1: goto $l85;
    }
    $l85:;
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp86;
    panda$core$String* $tmp87;
    panda$core$String* $tmp88;
    panda$core$String* $tmp89;
    panda$core$String* $tmp90;
    panda$core$String* $tmp91;
    panda$core$String* $tmp92;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp99;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp100;
    panda$collections$Array* $tmp101;
    panda$collections$Array* $tmp102;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    $tmp86 = NULL;
    self->parameter = $tmp86;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
    {
        $tmp87 = ((org$pandalanguage$pandac$Symbol*) self)->name;
        panda$core$String* $tmp93 = panda$core$String$convert$R$panda$core$String(p_param->owner);
        $tmp92 = $tmp93;
        panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp92, &$s94);
        $tmp91 = $tmp95;
        panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp91, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
        $tmp90 = $tmp96;
        panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp90, &$s97);
        $tmp89 = $tmp98;
        $tmp88 = $tmp89;
        ((org$pandalanguage$pandac$Symbol*) self)->name = $tmp88;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp88));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
    }
    self->typeKind = ((panda$core$Int64) { 22 });
    {
        $tmp99 = self->parameter;
        $tmp100 = p_param;
        self->parameter = $tmp100;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp99));
    }
    self->resolved = ((panda$core$Bit) { true });
    {
        $tmp101 = self->subtypes;
        $tmp102 = NULL;
        self->subtypes = $tmp102;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_base, panda$collections$ListView* p_arguments) {
    panda$core$Bit resolved106;
    panda$core$MutableString* name107 = NULL;
    panda$core$MutableString* $tmp108;
    panda$core$MutableString* $tmp109;
    panda$core$Char8 $tmp111;
    panda$core$String* separator112 = NULL;
    panda$core$String* $tmp113;
    panda$collections$Iterator* Iter$99$9118 = NULL;
    panda$collections$Iterator* $tmp119;
    panda$collections$Iterator* $tmp120;
    org$pandalanguage$pandac$Type* a136 = NULL;
    org$pandalanguage$pandac$Type* $tmp137;
    panda$core$Object* $tmp138;
    panda$core$String* $tmp146;
    panda$core$String* $tmp147;
    panda$core$Char8 $tmp151;
    panda$collections$Array* subtypes152 = NULL;
    panda$collections$Array* $tmp153;
    panda$collections$Array* $tmp154;
    org$pandalanguage$pandac$Type* $finallyReturn155;
    org$pandalanguage$pandac$Type* $tmp157;
    org$pandalanguage$pandac$Type* $tmp158;
    panda$core$String* $tmp160;
    panda$collections$ImmutableArray* $tmp162;
    int $tmp105;
    {
        resolved106 = p_base->resolved;
        panda$core$MutableString* $tmp110 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp110);
        $tmp109 = $tmp110;
        $tmp108 = $tmp109;
        name107 = $tmp108;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp109));
        panda$core$MutableString$append$panda$core$String(name107, ((org$pandalanguage$pandac$Symbol*) p_base)->name);
        panda$core$Char8$init$panda$core$UInt8(&$tmp111, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name107, $tmp111);
        $tmp113 = &$s114;
        separator112 = $tmp113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
        {
            int $tmp117;
            {
                ITable* $tmp121 = ((panda$collections$Iterable*) p_arguments)->$class->itable;
                while ($tmp121->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp121 = $tmp121->next;
                }
                $fn123 $tmp122 = $tmp121->methods[0];
                panda$collections$Iterator* $tmp124 = $tmp122(((panda$collections$Iterable*) p_arguments));
                $tmp120 = $tmp124;
                $tmp119 = $tmp120;
                Iter$99$9118 = $tmp119;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp120));
                $l125:;
                ITable* $tmp128 = Iter$99$9118->$class->itable;
                while ($tmp128->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp128 = $tmp128->next;
                }
                $fn130 $tmp129 = $tmp128->methods[0];
                panda$core$Bit $tmp131 = $tmp129(Iter$99$9118);
                panda$core$Bit $tmp132 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp131);
                bool $tmp127 = $tmp132.value;
                if (!$tmp127) goto $l126;
                {
                    int $tmp135;
                    {
                        ITable* $tmp139 = Iter$99$9118->$class->itable;
                        while ($tmp139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp139 = $tmp139->next;
                        }
                        $fn141 $tmp140 = $tmp139->methods[1];
                        panda$core$Object* $tmp142 = $tmp140(Iter$99$9118);
                        $tmp138 = $tmp142;
                        $tmp137 = ((org$pandalanguage$pandac$Type*) $tmp138);
                        a136 = $tmp137;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
                        panda$core$Panda$unref$panda$core$Object($tmp138);
                        bool $tmp143 = resolved106.value;
                        if (!$tmp143) goto $l144;
                        $tmp143 = a136->resolved.value;
                        $l144:;
                        panda$core$Bit $tmp145 = { $tmp143 };
                        resolved106 = $tmp145;
                        panda$core$MutableString$append$panda$core$String(name107, separator112);
                        panda$core$MutableString$append$panda$core$String(name107, ((org$pandalanguage$pandac$Symbol*) a136)->name);
                        {
                            $tmp146 = separator112;
                            $tmp147 = &$s148;
                            separator112 = $tmp147;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
                        }
                    }
                    $tmp135 = -1;
                    goto $l133;
                    $l133:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a136));
                    a136 = NULL;
                    switch ($tmp135) {
                        case -1: goto $l149;
                    }
                    $l149:;
                }
                goto $l125;
                $l126:;
            }
            $tmp117 = -1;
            goto $l115;
            $l115:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$99$9118));
            Iter$99$9118 = NULL;
            switch ($tmp117) {
                case -1: goto $l150;
            }
            $l150:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp151, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name107, $tmp151);
        panda$collections$Array* $tmp155 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp155);
        $tmp154 = $tmp155;
        $tmp153 = $tmp154;
        subtypes152 = $tmp153;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
        panda$collections$Array$add$panda$collections$Array$T(subtypes152, ((panda$core$Object*) p_base));
        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(subtypes152, ((panda$collections$CollectionView*) p_arguments));
        org$pandalanguage$pandac$Type* $tmp159 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp161 = panda$core$MutableString$finish$R$panda$core$String(name107);
        $tmp160 = $tmp161;
        panda$collections$ImmutableArray* $tmp163 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes152);
        $tmp162 = $tmp163;
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp159, $tmp160, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_base)->position, ((panda$collections$ListView*) $tmp162), resolved106);
        $tmp158 = $tmp159;
        $tmp157 = $tmp158;
        $finallyReturn155 = $tmp157;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp157));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp158));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
        $tmp105 = 0;
        goto $l103;
        $l164:;
        return $finallyReturn155;
    }
    $l103:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name107));
    name107 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator112));
    separator112 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes152));
    subtypes152 = NULL;
    switch ($tmp105) {
        case 0: goto $l164;
    }
    $l166:;
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $finallyReturn175;
    panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp168 = $tmp169.value;
    if ($tmp168) goto $l170;
    panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp168 = $tmp171.value;
    $l170:;
    panda$core$Bit $tmp172 = { $tmp168 };
    bool $tmp167 = $tmp172.value;
    if ($tmp167) goto $l173;
    panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp167 = $tmp174.value;
    $l173:;
    panda$core$Bit $tmp175 = { $tmp167 };
    PANDA_ASSERT($tmp175.value);
    $finallyReturn175 = self->position.line;
    return $finallyReturn175;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $finallyReturn177;
    panda$core$Bit $tmp179 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $finallyReturn177 = $tmp179;
    return $finallyReturn177;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $finallyReturn180;
    panda$core$Bit $tmp182 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $finallyReturn180 = $tmp182;
    return $finallyReturn180;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn183;
    org$pandalanguage$pandac$Type* $tmp185;
    org$pandalanguage$pandac$Type* $tmp186;
    org$pandalanguage$pandac$Position $tmp189;
    org$pandalanguage$pandac$Type* $tmp187 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp189);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp187, &$s188, ((panda$core$Int64) { 14 }), $tmp189, ((panda$core$Bit) { true }));
    $tmp186 = $tmp187;
    $tmp185 = $tmp186;
    $finallyReturn183 = $tmp185;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
    return $finallyReturn183;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn190;
    org$pandalanguage$pandac$Type* $tmp192;
    org$pandalanguage$pandac$Type* $tmp193;
    org$pandalanguage$pandac$Position $tmp196;
    org$pandalanguage$pandac$Type* $tmp194 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp196);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp194, &$s195, ((panda$core$Int64) { 23 }), $tmp196, ((panda$core$Bit) { true }));
    $tmp193 = $tmp194;
    $tmp192 = $tmp193;
    $finallyReturn190 = $tmp192;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
    return $finallyReturn190;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn197;
    org$pandalanguage$pandac$Type* $tmp199;
    org$pandalanguage$pandac$Type* $tmp200;
    org$pandalanguage$pandac$Position $tmp203;
    org$pandalanguage$pandac$Type* $tmp201 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp203);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp201, &$s202, ((panda$core$Int64) { 10 }), $tmp203, ((panda$core$Bit) { true }));
    $tmp200 = $tmp201;
    $tmp199 = $tmp200;
    $finallyReturn197 = $tmp199;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
    return $finallyReturn197;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes208 = NULL;
    panda$collections$Array* $tmp209;
    panda$collections$Array* $tmp210;
    org$pandalanguage$pandac$Type* $tmp212;
    org$pandalanguage$pandac$Type* $finallyReturn213;
    org$pandalanguage$pandac$Type* $tmp215;
    org$pandalanguage$pandac$Type* $tmp216;
    org$pandalanguage$pandac$Position $tmp219;
    int $tmp207;
    {
        panda$collections$Array* $tmp211 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp211);
        $tmp210 = $tmp211;
        $tmp209 = $tmp210;
        subtypes208 = $tmp209;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp209));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
        org$pandalanguage$pandac$Type* $tmp213 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp212 = $tmp213;
        panda$collections$Array$add$panda$collections$Array$T(subtypes208, ((panda$core$Object*) $tmp212));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
        org$pandalanguage$pandac$Type* $tmp217 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Position$init(&$tmp219);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp217, &$s218, ((panda$core$Int64) { 11 }), $tmp219, ((panda$collections$ListView*) subtypes208), ((panda$core$Bit) { true }));
        $tmp216 = $tmp217;
        $tmp215 = $tmp216;
        $finallyReturn213 = $tmp215;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp215));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
        $tmp207 = 0;
        goto $l205;
        $l220:;
        return $finallyReturn213;
    }
    $l205:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes208));
    subtypes208 = NULL;
    switch ($tmp207) {
        case 0: goto $l220;
    }
    $l222:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn222;
    org$pandalanguage$pandac$Type* $tmp224;
    org$pandalanguage$pandac$Type* $tmp225;
    org$pandalanguage$pandac$Position $tmp228;
    org$pandalanguage$pandac$Type* $tmp226 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp228);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp226, &$s227, ((panda$core$Int64) { 10 }), $tmp228, ((panda$core$Bit) { true }));
    $tmp225 = $tmp226;
    $tmp224 = $tmp225;
    $finallyReturn222 = $tmp224;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp224));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
    return $finallyReturn222;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn229;
    org$pandalanguage$pandac$Type* $tmp231;
    org$pandalanguage$pandac$Type* $tmp232;
    org$pandalanguage$pandac$Position $tmp235;
    org$pandalanguage$pandac$Type* $tmp233 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp235);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp233, &$s234, ((panda$core$Int64) { 10 }), $tmp235, ((panda$core$Bit) { true }));
    $tmp232 = $tmp233;
    $tmp231 = $tmp232;
    $finallyReturn229 = $tmp231;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
    return $finallyReturn229;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn236;
    org$pandalanguage$pandac$Type* $tmp238;
    org$pandalanguage$pandac$Type* $tmp239;
    org$pandalanguage$pandac$Position $tmp242;
    org$pandalanguage$pandac$Type* $tmp240 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp242);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp240, &$s241, ((panda$core$Int64) { 10 }), $tmp242, ((panda$core$Bit) { true }));
    $tmp239 = $tmp240;
    $tmp238 = $tmp239;
    $finallyReturn236 = $tmp238;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
    return $finallyReturn236;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn243;
    org$pandalanguage$pandac$Type* $tmp245;
    org$pandalanguage$pandac$Type* $tmp246;
    org$pandalanguage$pandac$Type* $tmp247 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp247, &$s248, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }));
    $tmp246 = $tmp247;
    $tmp245 = $tmp246;
    $finallyReturn243 = $tmp245;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp245));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
    return $finallyReturn243;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn249;
    org$pandalanguage$pandac$Type* $tmp251;
    org$pandalanguage$pandac$Type* $tmp252;
    org$pandalanguage$pandac$Type* $tmp253 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp253, &$s254, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }));
    $tmp252 = $tmp253;
    $tmp251 = $tmp252;
    $finallyReturn249 = $tmp251;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp251));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp252));
    return $finallyReturn249;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn255;
    org$pandalanguage$pandac$Type* $tmp257;
    org$pandalanguage$pandac$Type* $tmp258;
    org$pandalanguage$pandac$Type* $tmp259 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp259, &$s260, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }));
    $tmp258 = $tmp259;
    $tmp257 = $tmp258;
    $finallyReturn255 = $tmp257;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
    return $finallyReturn255;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn261;
    org$pandalanguage$pandac$Type* $tmp263;
    org$pandalanguage$pandac$Type* $tmp264;
    org$pandalanguage$pandac$Type* $tmp265 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp265, &$s266, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }));
    $tmp264 = $tmp265;
    $tmp263 = $tmp264;
    $finallyReturn261 = $tmp263;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp263));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
    return $finallyReturn261;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn267;
    org$pandalanguage$pandac$Type* $tmp269;
    org$pandalanguage$pandac$Type* $tmp270;
    org$pandalanguage$pandac$Type* $tmp271 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp271, &$s272, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }));
    $tmp270 = $tmp271;
    $tmp269 = $tmp270;
    $finallyReturn267 = $tmp269;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
    return $finallyReturn267;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn273;
    org$pandalanguage$pandac$Type* $tmp275;
    org$pandalanguage$pandac$Type* $tmp276;
    org$pandalanguage$pandac$Type* $tmp277 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp277, &$s278, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }));
    $tmp276 = $tmp277;
    $tmp275 = $tmp276;
    $finallyReturn273 = $tmp275;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
    return $finallyReturn273;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn279;
    org$pandalanguage$pandac$Type* $tmp281;
    org$pandalanguage$pandac$Type* $tmp282;
    org$pandalanguage$pandac$Type* $tmp283 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp283, &$s284, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }));
    $tmp282 = $tmp283;
    $tmp281 = $tmp282;
    $finallyReturn279 = $tmp281;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp281));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
    return $finallyReturn279;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn285;
    org$pandalanguage$pandac$Type* $tmp287;
    org$pandalanguage$pandac$Type* $tmp288;
    org$pandalanguage$pandac$Type* $tmp289 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp289, &$s290, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }));
    $tmp288 = $tmp289;
    $tmp287 = $tmp288;
    $finallyReturn285 = $tmp287;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp287));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
    return $finallyReturn285;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn291;
    org$pandalanguage$pandac$Type* $tmp293;
    org$pandalanguage$pandac$Type* $tmp294;
    org$pandalanguage$pandac$Type* $tmp295 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp295, &$s296, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 32 }));
    $tmp294 = $tmp295;
    $tmp293 = $tmp294;
    $finallyReturn291 = $tmp293;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
    return $finallyReturn291;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn297;
    org$pandalanguage$pandac$Type* $tmp299;
    org$pandalanguage$pandac$Type* $tmp300;
    org$pandalanguage$pandac$Type* $tmp301 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp301, &$s302, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 64 }));
    $tmp300 = $tmp301;
    $tmp299 = $tmp300;
    $finallyReturn297 = $tmp299;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp299));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp300));
    return $finallyReturn297;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn303;
    org$pandalanguage$pandac$Type* $tmp305;
    org$pandalanguage$pandac$Type* $tmp306;
    org$pandalanguage$pandac$Position $tmp309;
    org$pandalanguage$pandac$Type* $tmp307 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp309);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp307, &$s308, ((panda$core$Int64) { 10 }), $tmp309, ((panda$core$Bit) { true }));
    $tmp306 = $tmp307;
    $tmp305 = $tmp306;
    $finallyReturn303 = $tmp305;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp305));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
    return $finallyReturn303;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn310;
    org$pandalanguage$pandac$Type* $tmp312;
    org$pandalanguage$pandac$Type* $tmp313;
    org$pandalanguage$pandac$Position $tmp316;
    org$pandalanguage$pandac$Type* $tmp314 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp316);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp314, &$s315, ((panda$core$Int64) { 10 }), $tmp316, ((panda$core$Bit) { true }));
    $tmp313 = $tmp314;
    $tmp312 = $tmp313;
    $finallyReturn310 = $tmp312;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
    return $finallyReturn310;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn317;
    org$pandalanguage$pandac$Type* $tmp319;
    org$pandalanguage$pandac$Type* $tmp320;
    org$pandalanguage$pandac$Position $tmp323;
    org$pandalanguage$pandac$Type* $tmp321 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp323);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp321, &$s322, ((panda$core$Int64) { 10 }), $tmp323, ((panda$core$Bit) { true }));
    $tmp320 = $tmp321;
    $tmp319 = $tmp320;
    $finallyReturn317 = $tmp319;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp319));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
    return $finallyReturn317;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn324;
    org$pandalanguage$pandac$Type* $tmp326;
    org$pandalanguage$pandac$Type* $tmp327;
    org$pandalanguage$pandac$Position $tmp330;
    org$pandalanguage$pandac$Type* $tmp328 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp330);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp328, &$s329, ((panda$core$Int64) { 10 }), $tmp330, ((panda$core$Bit) { true }));
    $tmp327 = $tmp328;
    $tmp326 = $tmp327;
    $finallyReturn324 = $tmp326;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp326));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
    return $finallyReturn324;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn331;
    org$pandalanguage$pandac$Type* $tmp333;
    org$pandalanguage$pandac$Type* $tmp334;
    org$pandalanguage$pandac$Position $tmp337;
    org$pandalanguage$pandac$Type* $tmp335 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp337);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp335, &$s336, ((panda$core$Int64) { 10 }), $tmp337, ((panda$core$Bit) { true }));
    $tmp334 = $tmp335;
    $tmp333 = $tmp334;
    $finallyReturn331 = $tmp333;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp333));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
    return $finallyReturn331;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn338;
    org$pandalanguage$pandac$Type* $tmp340;
    org$pandalanguage$pandac$Type* $tmp341;
    org$pandalanguage$pandac$Position $tmp344;
    org$pandalanguage$pandac$Type* $tmp342 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp344);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp342, &$s343, ((panda$core$Int64) { 10 }), $tmp344, ((panda$core$Bit) { true }));
    $tmp341 = $tmp342;
    $tmp340 = $tmp341;
    $finallyReturn338 = $tmp340;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp340));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp341));
    return $finallyReturn338;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn345;
    org$pandalanguage$pandac$Type* $tmp347;
    org$pandalanguage$pandac$Type* $tmp348;
    org$pandalanguage$pandac$Position $tmp351;
    org$pandalanguage$pandac$Type* $tmp349 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp351);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp349, &$s350, ((panda$core$Int64) { 10 }), $tmp351, ((panda$core$Bit) { true }));
    $tmp348 = $tmp349;
    $tmp347 = $tmp348;
    $finallyReturn345 = $tmp347;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
    return $finallyReturn345;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn352;
    org$pandalanguage$pandac$Type* $tmp354;
    org$pandalanguage$pandac$Type* $tmp355;
    org$pandalanguage$pandac$Position $tmp358;
    org$pandalanguage$pandac$Type* $tmp356 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp358);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp356, &$s357, ((panda$core$Int64) { 10 }), $tmp358, ((panda$core$Bit) { true }));
    $tmp355 = $tmp356;
    $tmp354 = $tmp355;
    $finallyReturn352 = $tmp354;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp354));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp355));
    return $finallyReturn352;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn359;
    org$pandalanguage$pandac$Type* $tmp361;
    org$pandalanguage$pandac$Type* $tmp362;
    org$pandalanguage$pandac$Position $tmp365;
    org$pandalanguage$pandac$Type* $tmp363 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp365);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp363, &$s364, ((panda$core$Int64) { 10 }), $tmp365, ((panda$core$Bit) { true }));
    $tmp362 = $tmp363;
    $tmp361 = $tmp362;
    $finallyReturn359 = $tmp361;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp361));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
    return $finallyReturn359;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn366;
    org$pandalanguage$pandac$Type* $tmp368;
    org$pandalanguage$pandac$Type* $tmp369;
    org$pandalanguage$pandac$Position $tmp372;
    org$pandalanguage$pandac$Type* $tmp370 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp372);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp370, &$s371, ((panda$core$Int64) { 10 }), $tmp372, ((panda$core$Bit) { true }));
    $tmp369 = $tmp370;
    $tmp368 = $tmp369;
    $finallyReturn366 = $tmp368;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp368));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
    return $finallyReturn366;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn373;
    org$pandalanguage$pandac$Type* $tmp375;
    org$pandalanguage$pandac$Type* $tmp376;
    org$pandalanguage$pandac$Position $tmp379;
    org$pandalanguage$pandac$Type* $tmp377 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp379);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp377, &$s378, ((panda$core$Int64) { 10 }), $tmp379, ((panda$core$Bit) { true }));
    $tmp376 = $tmp377;
    $tmp375 = $tmp376;
    $finallyReturn373 = $tmp375;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp375));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
    return $finallyReturn373;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn380;
    org$pandalanguage$pandac$Type* $tmp382;
    org$pandalanguage$pandac$Type* $tmp383;
    org$pandalanguage$pandac$Position $tmp386;
    org$pandalanguage$pandac$Type* $tmp384 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp386);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp384, &$s385, ((panda$core$Int64) { 10 }), $tmp386, ((panda$core$Bit) { true }));
    $tmp383 = $tmp384;
    $tmp382 = $tmp383;
    $finallyReturn380 = $tmp382;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp382));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
    return $finallyReturn380;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn387;
    org$pandalanguage$pandac$Type* $tmp389;
    org$pandalanguage$pandac$Type* $tmp390;
    org$pandalanguage$pandac$Position $tmp393;
    org$pandalanguage$pandac$Type* $tmp391 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp393);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp391, &$s392, ((panda$core$Int64) { 10 }), $tmp393, ((panda$core$Bit) { true }));
    $tmp390 = $tmp391;
    $tmp389 = $tmp390;
    $finallyReturn387 = $tmp389;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp389));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp390));
    return $finallyReturn387;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn394;
    org$pandalanguage$pandac$Type* $tmp396;
    org$pandalanguage$pandac$Type* $tmp397;
    org$pandalanguage$pandac$Position $tmp400;
    org$pandalanguage$pandac$Type* $tmp398 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp400);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp398, &$s399, ((panda$core$Int64) { 10 }), $tmp400, ((panda$core$Bit) { true }));
    $tmp397 = $tmp398;
    $tmp396 = $tmp397;
    $finallyReturn394 = $tmp396;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp396));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp397));
    return $finallyReturn394;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $finallyReturn401;
    org$pandalanguage$pandac$Type* $tmp403;
    org$pandalanguage$pandac$Type* $tmp404;
    panda$core$String* $tmp406;
    org$pandalanguage$pandac$Position $tmp408;
    org$pandalanguage$pandac$Type* $tmp405 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp407 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp406 = $tmp407;
    org$pandalanguage$pandac$Position$init(&$tmp408);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp405, $tmp406, ((panda$core$Int64) { 15 }), $tmp408, ((panda$core$Bit) { true }));
    $tmp404 = $tmp405;
    $tmp403 = $tmp404;
    $finallyReturn401 = $tmp403;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp406));
    return $finallyReturn401;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $finallyReturn409;
    org$pandalanguage$pandac$Type* $tmp411;
    org$pandalanguage$pandac$Type* $tmp412;
    panda$core$String* $tmp414;
    panda$core$String* $tmp416;
    org$pandalanguage$pandac$Position $tmp419;
    org$pandalanguage$pandac$Type* $tmp413 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp417 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp416 = $tmp417;
    panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s415, $tmp416);
    $tmp414 = $tmp418;
    org$pandalanguage$pandac$Position$init(&$tmp419);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp413, $tmp414, ((panda$core$Int64) { 15 }), $tmp419, ((panda$core$Bit) { true }));
    $tmp412 = $tmp413;
    $tmp411 = $tmp412;
    $finallyReturn409 = $tmp411;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp411));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
    return $finallyReturn409;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Type* $finallyReturn420;
    org$pandalanguage$pandac$Type* $tmp422;
    org$pandalanguage$pandac$Type* $tmp423;
    panda$core$String* $tmp425;
    org$pandalanguage$pandac$Position $tmp427;
    org$pandalanguage$pandac$Type* $tmp424 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp426 = panda$core$Real64$convert$R$panda$core$String(p_value);
    $tmp425 = $tmp426;
    org$pandalanguage$pandac$Position$init(&$tmp427);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp424, $tmp425, ((panda$core$Int64) { 26 }), $tmp427, ((panda$core$Bit) { true }));
    $tmp423 = $tmp424;
    $tmp422 = $tmp423;
    $finallyReturn420 = $tmp422;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp422));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
    return $finallyReturn420;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn428;
    org$pandalanguage$pandac$Type* $tmp430;
    org$pandalanguage$pandac$Type* $tmp431;
    org$pandalanguage$pandac$Position $tmp434;
    org$pandalanguage$pandac$Type* $tmp432 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp434);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp432, &$s433, ((panda$core$Int64) { 18 }), $tmp434, ((panda$core$Bit) { true }));
    $tmp431 = $tmp432;
    $tmp430 = $tmp431;
    $finallyReturn428 = $tmp430;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
    return $finallyReturn428;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn435;
    org$pandalanguage$pandac$Type* $tmp437;
    org$pandalanguage$pandac$Type* $tmp438;
    org$pandalanguage$pandac$Position $tmp441;
    org$pandalanguage$pandac$Type* $tmp439 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp441);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp439, &$s440, ((panda$core$Int64) { 19 }), $tmp441, ((panda$core$Bit) { true }));
    $tmp438 = $tmp439;
    $tmp437 = $tmp438;
    $finallyReturn435 = $tmp437;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp437));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
    return $finallyReturn435;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn442;
    org$pandalanguage$pandac$Type* $tmp444;
    org$pandalanguage$pandac$Type* $tmp445;
    org$pandalanguage$pandac$Position $tmp448;
    org$pandalanguage$pandac$Type* $tmp446 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp448);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp446, &$s447, ((panda$core$Int64) { 10 }), $tmp448, ((panda$core$Bit) { true }));
    $tmp445 = $tmp446;
    $tmp444 = $tmp445;
    $finallyReturn442 = $tmp444;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp444));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
    return $finallyReturn442;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn449;
    org$pandalanguage$pandac$Type* $tmp451;
    org$pandalanguage$pandac$Type* $tmp452;
    org$pandalanguage$pandac$Position $tmp455;
    org$pandalanguage$pandac$Type* $tmp453 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp455);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp453, &$s454, ((panda$core$Int64) { 10 }), $tmp455, ((panda$core$Bit) { true }));
    $tmp452 = $tmp453;
    $tmp451 = $tmp452;
    $finallyReturn449 = $tmp451;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp451));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
    return $finallyReturn449;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn456;
    org$pandalanguage$pandac$Type* $tmp458;
    org$pandalanguage$pandac$Type* $tmp459;
    org$pandalanguage$pandac$Position $tmp462;
    org$pandalanguage$pandac$Type* $tmp460 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp462);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp460, &$s461, ((panda$core$Int64) { 10 }), $tmp462, ((panda$core$Bit) { true }));
    $tmp459 = $tmp460;
    $tmp458 = $tmp459;
    $finallyReturn456 = $tmp458;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp458));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
    return $finallyReturn456;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children467 = NULL;
    panda$collections$Array* $tmp468;
    panda$collections$Array* $tmp469;
    org$pandalanguage$pandac$Type* $tmp471;
    org$pandalanguage$pandac$Position $tmp474;
    org$pandalanguage$pandac$Type* $finallyReturn474;
    org$pandalanguage$pandac$Type* $tmp476;
    org$pandalanguage$pandac$Type* $tmp477;
    panda$core$String* $tmp479;
    panda$core$String* $tmp480;
    panda$core$String* $tmp481;
    panda$core$String* $tmp482;
    int $tmp466;
    {
        panda$collections$Array* $tmp470 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp470);
        $tmp469 = $tmp470;
        $tmp468 = $tmp469;
        children467 = $tmp468;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
        org$pandalanguage$pandac$Type* $tmp472 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Position$init(&$tmp474);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp472, &$s473, ((panda$core$Int64) { 10 }), $tmp474, ((panda$core$Bit) { true }));
        $tmp471 = $tmp472;
        panda$collections$Array$add$panda$collections$Array$T(children467, ((panda$core$Object*) $tmp471));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
        panda$collections$Array$add$panda$collections$Array$T(children467, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp478 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp484 = panda$core$String$convert$R$panda$core$String(&$s483);
        $tmp482 = $tmp484;
        panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp482, &$s485);
        $tmp481 = $tmp486;
        panda$core$String* $tmp487 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp481, ((panda$core$Object*) p_t));
        $tmp480 = $tmp487;
        panda$core$String* $tmp489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, &$s488);
        $tmp479 = $tmp489;
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp478, $tmp479, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children467), p_t->resolved);
        $tmp477 = $tmp478;
        $tmp476 = $tmp477;
        $finallyReturn474 = $tmp476;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp476));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp477));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
        $tmp466 = 0;
        goto $l464;
        $l490:;
        return $finallyReturn474;
    }
    $l464:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children467));
    children467 = NULL;
    switch ($tmp466) {
        case 0: goto $l490;
    }
    $l492:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children496 = NULL;
    panda$collections$Array* $tmp497;
    panda$collections$Array* $tmp498;
    org$pandalanguage$pandac$Type* $tmp500;
    org$pandalanguage$pandac$Position $tmp503;
    org$pandalanguage$pandac$Type* $finallyReturn503;
    org$pandalanguage$pandac$Type* $tmp505;
    org$pandalanguage$pandac$Type* $tmp506;
    panda$core$String* $tmp508;
    panda$core$String* $tmp509;
    panda$core$String* $tmp510;
    panda$core$String* $tmp511;
    int $tmp495;
    {
        panda$collections$Array* $tmp499 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp499);
        $tmp498 = $tmp499;
        $tmp497 = $tmp498;
        children496 = $tmp497;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp498));
        org$pandalanguage$pandac$Type* $tmp501 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Position$init(&$tmp503);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp501, &$s502, ((panda$core$Int64) { 10 }), $tmp503, ((panda$core$Bit) { true }));
        $tmp500 = $tmp501;
        panda$collections$Array$add$panda$collections$Array$T(children496, ((panda$core$Object*) $tmp500));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
        panda$collections$Array$add$panda$collections$Array$T(children496, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp507 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp513 = panda$core$String$convert$R$panda$core$String(&$s512);
        $tmp511 = $tmp513;
        panda$core$String* $tmp515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp511, &$s514);
        $tmp510 = $tmp515;
        panda$core$String* $tmp516 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp510, ((panda$core$Object*) p_t));
        $tmp509 = $tmp516;
        panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp509, &$s517);
        $tmp508 = $tmp518;
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp507, $tmp508, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children496), p_t->resolved);
        $tmp506 = $tmp507;
        $tmp505 = $tmp506;
        $finallyReturn503 = $tmp505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp508));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp510));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp511));
        $tmp495 = 0;
        goto $l493;
        $l519:;
        return $finallyReturn503;
    }
    $l493:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children496));
    children496 = NULL;
    switch ($tmp495) {
        case 0: goto $l519;
    }
    $l521:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children525 = NULL;
    panda$collections$Array* $tmp526;
    panda$collections$Array* $tmp527;
    org$pandalanguage$pandac$Type* $tmp529;
    org$pandalanguage$pandac$Position $tmp532;
    org$pandalanguage$pandac$Type* $tmp533;
    org$pandalanguage$pandac$Type* $tmp536;
    org$pandalanguage$pandac$Type* $tmp538;
    org$pandalanguage$pandac$Type* $tmp541;
    org$pandalanguage$pandac$Type* $tmp543;
    org$pandalanguage$pandac$Type* $tmp546;
    org$pandalanguage$pandac$Type* $tmp548;
    org$pandalanguage$pandac$Type* $finallyReturn549;
    org$pandalanguage$pandac$Type* $tmp551;
    org$pandalanguage$pandac$Type* $tmp552;
    panda$core$String* $tmp554;
    panda$core$String* $tmp555;
    panda$core$String* $tmp556;
    panda$core$String* $tmp557;
    panda$core$String* $tmp558;
    panda$core$String* $tmp559;
    org$pandalanguage$pandac$Type* $tmp567;
    int $tmp524;
    {
        panda$collections$Array* $tmp528 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp528);
        $tmp527 = $tmp528;
        $tmp526 = $tmp527;
        children525 = $tmp526;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp526));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp527));
        org$pandalanguage$pandac$Type* $tmp530 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Position$init(&$tmp532);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp530, &$s531, ((panda$core$Int64) { 10 }), $tmp532, ((panda$core$Bit) { true }));
        $tmp529 = $tmp530;
        panda$collections$Array$add$panda$collections$Array$T(children525, ((panda$core$Object*) $tmp529));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp529));
        panda$collections$Array$add$panda$collections$Array$T(children525, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp534 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp533 = $tmp534;
        panda$core$Bit $tmp535 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp533);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
        if ($tmp535.value) {
        {
            org$pandalanguage$pandac$Type* $tmp537 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp536 = $tmp537;
            panda$collections$Array$add$panda$collections$Array$T(children525, ((panda$core$Object*) $tmp536));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp536));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp539 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp538 = $tmp539;
        panda$core$Bit $tmp540 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp538);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp538));
        if ($tmp540.value) {
        {
            org$pandalanguage$pandac$Type* $tmp542 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp541 = $tmp542;
            panda$collections$Array$add$panda$collections$Array$T(children525, ((panda$core$Object*) $tmp541));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp544 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp543 = $tmp544;
        panda$core$Bit $tmp545 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp543);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
        if ($tmp545.value) {
        {
            org$pandalanguage$pandac$Type* $tmp547 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp546 = $tmp547;
            panda$collections$Array$add$panda$collections$Array$T(children525, ((panda$core$Object*) $tmp546));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp549 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp548 = $tmp549;
            panda$collections$Array$add$panda$collections$Array$T(children525, ((panda$core$Object*) $tmp548));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
        }
        }
        }
        }
        org$pandalanguage$pandac$Type* $tmp553 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp561 = panda$core$String$convert$R$panda$core$String(&$s560);
        $tmp559 = $tmp561;
        panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp559, &$s562);
        $tmp558 = $tmp563;
        panda$core$String* $tmp564 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp558, ((panda$core$Object*) p_t));
        $tmp557 = $tmp564;
        panda$core$String* $tmp566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp557, &$s565);
        $tmp556 = $tmp566;
        org$pandalanguage$pandac$Type* $tmp568 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
        $tmp567 = $tmp568;
        panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp556, ((panda$core$Object*) $tmp567));
        $tmp555 = $tmp569;
        panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp555, &$s570);
        $tmp554 = $tmp571;
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp553, $tmp554, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children525), p_t->resolved);
        $tmp552 = $tmp553;
        $tmp551 = $tmp552;
        $finallyReturn549 = $tmp551;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp551));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp554));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp556));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
        $tmp524 = 0;
        goto $l522;
        $l572:;
        return $finallyReturn549;
    }
    $l522:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children525));
    children525 = NULL;
    switch ($tmp524) {
        case 0: goto $l572;
    }
    $l574:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn574;
    org$pandalanguage$pandac$Type* $tmp576;
    org$pandalanguage$pandac$Type* $tmp577;
    org$pandalanguage$pandac$Position $tmp580;
    org$pandalanguage$pandac$Type* $tmp578 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp580);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp578, &$s579, ((panda$core$Int64) { 16 }), $tmp580, ((panda$core$Bit) { true }));
    $tmp577 = $tmp578;
    $tmp576 = $tmp577;
    $finallyReturn574 = $tmp576;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp576));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp577));
    return $finallyReturn574;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn581;
    org$pandalanguage$pandac$Type* $tmp583;
    org$pandalanguage$pandac$Type* $tmp584;
    org$pandalanguage$pandac$Position $tmp587;
    org$pandalanguage$pandac$Type* $tmp585 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp587);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp585, &$s586, ((panda$core$Int64) { 16 }), $tmp587, ((panda$core$Bit) { true }));
    $tmp584 = $tmp585;
    $tmp583 = $tmp584;
    $finallyReturn581 = $tmp583;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp583));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
    return $finallyReturn581;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn588;
    panda$core$Bit $tmp595 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s594);
    bool $tmp593 = $tmp595.value;
    if ($tmp593) goto $l596;
    panda$core$Bit $tmp598 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s597);
    $tmp593 = $tmp598.value;
    $l596:;
    panda$core$Bit $tmp599 = { $tmp593 };
    bool $tmp592 = $tmp599.value;
    if ($tmp592) goto $l600;
    panda$core$Bit $tmp602 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s601);
    $tmp592 = $tmp602.value;
    $l600:;
    panda$core$Bit $tmp603 = { $tmp592 };
    bool $tmp591 = $tmp603.value;
    if ($tmp591) goto $l604;
    panda$core$Bit $tmp605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp591 = $tmp605.value;
    $l604:;
    panda$core$Bit $tmp606 = { $tmp591 };
    bool $tmp590 = $tmp606.value;
    if ($tmp590) goto $l607;
    panda$core$Bit $tmp608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    $tmp590 = $tmp608.value;
    $l607:;
    panda$core$Bit $tmp609 = { $tmp590 };
    $finallyReturn588 = $tmp609;
    return $finallyReturn588;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn610;
    panda$core$Bit $tmp615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp614 = $tmp615.value;
    if ($tmp614) goto $l616;
    panda$core$Bit $tmp617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp614 = $tmp617.value;
    $l616:;
    panda$core$Bit $tmp618 = { $tmp614 };
    bool $tmp613 = $tmp618.value;
    if ($tmp613) goto $l619;
    panda$core$Bit $tmp620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp613 = $tmp620.value;
    $l619:;
    panda$core$Bit $tmp621 = { $tmp613 };
    bool $tmp612 = $tmp621.value;
    if ($tmp612) goto $l622;
    panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp612 = $tmp623.value;
    $l622:;
    panda$core$Bit $tmp624 = { $tmp612 };
    $finallyReturn610 = $tmp624;
    return $finallyReturn610;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn625;
    panda$core$Bit $tmp628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    bool $tmp627 = $tmp628.value;
    if ($tmp627) goto $l629;
    panda$core$Bit $tmp631 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s630);
    $tmp627 = $tmp631.value;
    $l629:;
    panda$core$Bit $tmp632 = { $tmp627 };
    $finallyReturn625 = $tmp632;
    return $finallyReturn625;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn633;
    panda$core$Bit $tmp636 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s635);
    $finallyReturn633 = $tmp636;
    return $finallyReturn633;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn637;
    panda$core$Bit $tmp640 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp639 = $tmp640.value;
    if ($tmp639) goto $l641;
    panda$core$Bit $tmp642 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp639 = $tmp642.value;
    $l641:;
    panda$core$Bit $tmp643 = { $tmp639 };
    $finallyReturn637 = $tmp643;
    return $finallyReturn637;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn644;
    panda$core$Bit $finallyReturn646;
    switch (self->typeKind.value) {
        case 10:
        case 11:
        case 21:
        case 22:
        {
            $finallyReturn644 = ((panda$core$Bit) { true });
            return $finallyReturn644;
        }
        break;
        default:
        {
            $finallyReturn646 = ((panda$core$Bit) { false });
            return $finallyReturn646;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn648;
    panda$core$Bit $tmp651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp650 = $tmp651.value;
    if ($tmp650) goto $l652;
    panda$core$Bit $tmp653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp650 = $tmp653.value;
    $l652:;
    panda$core$Bit $tmp654 = { $tmp650 };
    $finallyReturn648 = $tmp654;
    return $finallyReturn648;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn655;
    panda$core$Bit $tmp658 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s657);
    $finallyReturn655 = $tmp658;
    return $finallyReturn655;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn660;
    panda$core$Object* $tmp662;
    panda$core$Bit $finallyReturn665;
    panda$core$Object* $tmp670;
    panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp660.value) {
    {
        panda$core$Object* $tmp663 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp662 = $tmp663;
        panda$core$Bit $tmp664 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp662));
        $finallyReturn660 = $tmp664;
        panda$core$Panda$unref$panda$core$Object($tmp662);
        return $finallyReturn660;
    }
    }
    panda$core$Bit $tmp668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp667 = $tmp668.value;
    if (!$tmp667) goto $l669;
    panda$core$Object* $tmp671 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp670 = $tmp671;
    panda$core$Bit $tmp673 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp670))->name, &$s672);
    $tmp667 = $tmp673.value;
    panda$core$Panda$unref$panda$core$Object($tmp670);
    $l669:;
    panda$core$Bit $tmp674 = { $tmp667 };
    $finallyReturn665 = $tmp674;
    return $finallyReturn665;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn676;
    panda$core$Object* $tmp678;
    panda$core$Bit $finallyReturn681;
    panda$core$Object* $tmp686;
    panda$core$Bit $tmp676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp676.value) {
    {
        panda$core$Object* $tmp679 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp678 = $tmp679;
        panda$core$Bit $tmp680 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp678));
        $finallyReturn676 = $tmp680;
        panda$core$Panda$unref$panda$core$Object($tmp678);
        return $finallyReturn676;
    }
    }
    panda$core$Bit $tmp684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp683 = $tmp684.value;
    if (!$tmp683) goto $l685;
    panda$core$Object* $tmp687 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp686 = $tmp687;
    panda$core$Bit $tmp689 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp686))->name, &$s688);
    $tmp683 = $tmp689.value;
    panda$core$Panda$unref$panda$core$Object($tmp686);
    $l685:;
    panda$core$Bit $tmp690 = { $tmp683 };
    $finallyReturn681 = $tmp690;
    return $finallyReturn681;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $finallyReturn695;
    org$pandalanguage$pandac$Type* $tmp697;
    panda$collections$Array* subtypes700 = NULL;
    panda$collections$Array* $tmp701;
    panda$collections$Array* $tmp702;
    org$pandalanguage$pandac$Type* $finallyReturn703;
    org$pandalanguage$pandac$Type* $tmp705;
    org$pandalanguage$pandac$Type* $tmp706;
    panda$core$String* $tmp708;
    panda$core$String* $tmp709;
    org$pandalanguage$pandac$Position $tmp713;
    int $tmp694;
    {
        panda$core$Bit $tmp695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp695.value) {
        {
            $tmp697 = self;
            $finallyReturn695 = $tmp697;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp697));
            $tmp694 = 0;
            goto $l692;
            $l698:;
            return $finallyReturn695;
        }
        }
        panda$collections$Array* $tmp703 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp703);
        $tmp702 = $tmp703;
        $tmp701 = $tmp702;
        subtypes700 = $tmp701;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp701));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp702));
        panda$collections$Array$add$panda$collections$Array$T(subtypes700, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp707 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp710 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp709 = $tmp710;
        panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp709, &$s711);
        $tmp708 = $tmp712;
        org$pandalanguage$pandac$Position$init(&$tmp713);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp707, $tmp708, ((panda$core$Int64) { 11 }), $tmp713, ((panda$collections$ListView*) subtypes700), ((panda$core$Bit) { true }));
        $tmp706 = $tmp707;
        $tmp705 = $tmp706;
        $finallyReturn703 = $tmp705;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp705));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp706));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp708));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp709));
        $tmp694 = 1;
        goto $l692;
        $l714:;
        return $finallyReturn703;
    }
    $l692:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes700));
    subtypes700 = NULL;
    switch ($tmp694) {
        case 1: goto $l714;
        case 0: goto $l698;
    }
    $l716:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $finallyReturn717;
    org$pandalanguage$pandac$Type* $tmp719;
    org$pandalanguage$pandac$Type* $finallyReturn720;
    org$pandalanguage$pandac$Type* $tmp722;
    panda$core$Object* $tmp723;
    panda$core$Bit $tmp717 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp717.value) {
    {
        $tmp719 = self;
        $finallyReturn717 = $tmp719;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp719));
        return $finallyReturn717;
    }
    }
    panda$core$Object* $tmp724 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp723 = $tmp724;
    $tmp722 = ((org$pandalanguage$pandac$Type*) $tmp723);
    $finallyReturn720 = $tmp722;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp722));
    panda$core$Panda$unref$panda$core$Object($tmp723);
    return $finallyReturn720;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $finallyReturn729;
    org$pandalanguage$pandac$Type* $tmp731;
    org$pandalanguage$pandac$Type* $tmp734;
    org$pandalanguage$pandac$Type* $finallyReturn737;
    org$pandalanguage$pandac$Type* $tmp739;
    org$pandalanguage$pandac$Type* $finallyReturn741;
    org$pandalanguage$pandac$Type* $tmp743;
    org$pandalanguage$pandac$Type* $tmp744;
    org$pandalanguage$pandac$Type* $tmp748;
    org$pandalanguage$pandac$Type* $finallyReturn751;
    org$pandalanguage$pandac$Type* $tmp753;
    org$pandalanguage$pandac$Type* $finallyReturn755;
    org$pandalanguage$pandac$Type* $tmp757;
    org$pandalanguage$pandac$Type* $tmp758;
    org$pandalanguage$pandac$Type* $finallyReturn766;
    org$pandalanguage$pandac$Type* $tmp768;
    org$pandalanguage$pandac$Type* $finallyReturn775;
    org$pandalanguage$pandac$Type* $tmp777;
    org$pandalanguage$pandac$Type* $finallyReturn785;
    org$pandalanguage$pandac$Type* $tmp787;
    org$pandalanguage$pandac$Type* $finallyReturn792;
    org$pandalanguage$pandac$Type* $tmp794;
    org$pandalanguage$pandac$Type* $tmp795;
    org$pandalanguage$pandac$Type* $finallyReturn798;
    org$pandalanguage$pandac$Type* $tmp800;
    org$pandalanguage$pandac$Type* $tmp801;
    org$pandalanguage$pandac$Type* $finallyReturn810;
    org$pandalanguage$pandac$Type* $tmp812;
    org$pandalanguage$pandac$Type* $finallyReturn817;
    org$pandalanguage$pandac$Type* $tmp819;
    org$pandalanguage$pandac$Type* $tmp820;
    org$pandalanguage$pandac$Type* $finallyReturn823;
    org$pandalanguage$pandac$Type* $tmp825;
    org$pandalanguage$pandac$Type* $tmp826;
    org$pandalanguage$pandac$Type* $finallyReturn830;
    org$pandalanguage$pandac$Type* $tmp832;
    org$pandalanguage$pandac$Type* $tmp833;
    org$pandalanguage$pandac$Type* $tmp834;
    panda$core$Object* $tmp835;
    org$pandalanguage$pandac$Type* $finallyReturn841;
    org$pandalanguage$pandac$Type* $tmp843;
    org$pandalanguage$pandac$Type* $tmp844;
    org$pandalanguage$pandac$Type* $tmp845;
    panda$core$Object* $tmp846;
    org$pandalanguage$pandac$Type* t1852 = NULL;
    org$pandalanguage$pandac$Type* $tmp853;
    org$pandalanguage$pandac$Type* $tmp854;
    org$pandalanguage$pandac$Type* t2856 = NULL;
    org$pandalanguage$pandac$Type* $tmp857;
    org$pandalanguage$pandac$Type* $tmp858;
    panda$collections$Set* ancestors868 = NULL;
    panda$collections$Set* $tmp869;
    panda$collections$Set* $tmp870;
    org$pandalanguage$pandac$Type* t872 = NULL;
    org$pandalanguage$pandac$Type* $tmp873;
    org$pandalanguage$pandac$ClassDecl* cl874 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp875;
    org$pandalanguage$pandac$ClassDecl* $tmp876;
    org$pandalanguage$pandac$Type* $tmp881;
    org$pandalanguage$pandac$Type* $tmp882;
    org$pandalanguage$pandac$Type* $tmp883;
    org$pandalanguage$pandac$ClassDecl* $tmp885;
    org$pandalanguage$pandac$ClassDecl* $tmp886;
    org$pandalanguage$pandac$ClassDecl* $tmp887;
    org$pandalanguage$pandac$ClassDecl* $tmp889;
    org$pandalanguage$pandac$ClassDecl* $tmp890;
    org$pandalanguage$pandac$Type* $tmp891;
    org$pandalanguage$pandac$Type* $tmp892;
    org$pandalanguage$pandac$ClassDecl* $tmp893;
    org$pandalanguage$pandac$ClassDecl* $tmp894;
    org$pandalanguage$pandac$ClassDecl* $tmp895;
    org$pandalanguage$pandac$Type* $finallyReturn900;
    org$pandalanguage$pandac$Type* $tmp902;
    org$pandalanguage$pandac$Type* $tmp906;
    org$pandalanguage$pandac$Type* $tmp907;
    org$pandalanguage$pandac$Type* $tmp908;
    org$pandalanguage$pandac$ClassDecl* $tmp910;
    org$pandalanguage$pandac$ClassDecl* $tmp911;
    org$pandalanguage$pandac$ClassDecl* $tmp912;
    org$pandalanguage$pandac$ClassDecl* $tmp914;
    org$pandalanguage$pandac$ClassDecl* $tmp915;
    org$pandalanguage$pandac$Type* $finallyReturn916;
    org$pandalanguage$pandac$Type* $tmp918;
    org$pandalanguage$pandac$Type* $tmp919;
    int $tmp728;
    {
        panda$core$Bit $tmp729 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp729.value) {
        {
            $tmp731 = self;
            $finallyReturn729 = $tmp731;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp731));
            $tmp728 = 0;
            goto $l726;
            $l732:;
            return $finallyReturn729;
        }
        }
        org$pandalanguage$pandac$Type* $tmp735 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp734 = $tmp735;
        panda$core$Bit $tmp736 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp734);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp734));
        if ($tmp736.value) {
        {
            panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp737.value) {
            {
                $tmp739 = p_other;
                $finallyReturn737 = $tmp739;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp739));
                $tmp728 = 1;
                goto $l726;
                $l740:;
                return $finallyReturn737;
            }
            }
            org$pandalanguage$pandac$Type* $tmp745 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp744 = $tmp745;
            $tmp743 = $tmp744;
            $finallyReturn741 = $tmp743;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp743));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp744));
            $tmp728 = 2;
            goto $l726;
            $l746:;
            return $finallyReturn741;
        }
        }
        org$pandalanguage$pandac$Type* $tmp749 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp748 = $tmp749;
        panda$core$Bit $tmp750 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp748);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp748));
        if ($tmp750.value) {
        {
            panda$core$Bit $tmp751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp751.value) {
            {
                $tmp753 = self;
                $finallyReturn751 = $tmp753;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp753));
                $tmp728 = 3;
                goto $l726;
                $l754:;
                return $finallyReturn751;
            }
            }
            org$pandalanguage$pandac$Type* $tmp759 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp758 = $tmp759;
            $tmp757 = $tmp758;
            $finallyReturn755 = $tmp757;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp757));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp758));
            $tmp728 = 4;
            goto $l726;
            $l760:;
            return $finallyReturn755;
        }
        }
        panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp762 = $tmp763.value;
        if (!$tmp762) goto $l764;
        panda$core$Bit $tmp765 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp762 = $tmp765.value;
        $l764:;
        panda$core$Bit $tmp766 = { $tmp762 };
        if ($tmp766.value) {
        {
            $tmp768 = p_other;
            $finallyReturn766 = $tmp768;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp768));
            $tmp728 = 5;
            goto $l726;
            $l769:;
            return $finallyReturn766;
        }
        }
        panda$core$Bit $tmp772 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp771 = $tmp772.value;
        if (!$tmp771) goto $l773;
        panda$core$Bit $tmp774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
        $tmp771 = $tmp774.value;
        $l773:;
        panda$core$Bit $tmp775 = { $tmp771 };
        if ($tmp775.value) {
        {
            $tmp777 = self;
            $finallyReturn775 = $tmp777;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp777));
            $tmp728 = 6;
            goto $l726;
            $l778:;
            return $finallyReturn775;
        }
        }
        panda$core$Bit $tmp780 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp780.value) {
        {
            panda$core$Bit $tmp782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
            bool $tmp781 = $tmp782.value;
            if ($tmp781) goto $l783;
            panda$core$Bit $tmp784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 26 }));
            $tmp781 = $tmp784.value;
            $l783:;
            panda$core$Bit $tmp785 = { $tmp781 };
            if ($tmp785.value) {
            {
                $tmp787 = self;
                $finallyReturn785 = $tmp787;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp787));
                $tmp728 = 7;
                goto $l726;
                $l788:;
                return $finallyReturn785;
            }
            }
            panda$core$Bit $tmp790 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp790.value) {
            {
                panda$core$Bit $tmp792 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s791);
                if ($tmp792.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp796 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp795 = $tmp796;
                    $tmp794 = $tmp795;
                    $finallyReturn792 = $tmp794;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp794));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp795));
                    $tmp728 = 8;
                    goto $l726;
                    $l797:;
                    return $finallyReturn792;
                }
                }
                org$pandalanguage$pandac$Type* $tmp802 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp801 = $tmp802;
                $tmp800 = $tmp801;
                $finallyReturn798 = $tmp800;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp800));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp801));
                $tmp728 = 9;
                goto $l726;
                $l803:;
                return $finallyReturn798;
            }
            }
        }
        }
        panda$core$Bit $tmp805 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp805.value) {
        {
            panda$core$Bit $tmp807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
            bool $tmp806 = $tmp807.value;
            if ($tmp806) goto $l808;
            panda$core$Bit $tmp809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
            $tmp806 = $tmp809.value;
            $l808:;
            panda$core$Bit $tmp810 = { $tmp806 };
            if ($tmp810.value) {
            {
                $tmp812 = p_other;
                $finallyReturn810 = $tmp812;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp812));
                $tmp728 = 10;
                goto $l726;
                $l813:;
                return $finallyReturn810;
            }
            }
            panda$core$Bit $tmp815 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp815.value) {
            {
                panda$core$Bit $tmp817 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s816);
                if ($tmp817.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp821 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp820 = $tmp821;
                    $tmp819 = $tmp820;
                    $finallyReturn817 = $tmp819;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp819));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp820));
                    $tmp728 = 11;
                    goto $l726;
                    $l822:;
                    return $finallyReturn817;
                }
                }
                org$pandalanguage$pandac$Type* $tmp827 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp826 = $tmp827;
                $tmp825 = $tmp826;
                $finallyReturn823 = $tmp825;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp825));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp826));
                $tmp728 = 12;
                goto $l726;
                $l828:;
                return $finallyReturn823;
            }
            }
        }
        }
        panda$core$Bit $tmp830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp830.value) {
        {
            panda$core$Object* $tmp836 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp835 = $tmp836;
            org$pandalanguage$pandac$Type* $tmp837 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp835), p_compiler, p_other);
            $tmp834 = $tmp837;
            org$pandalanguage$pandac$Type* $tmp838 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp834);
            $tmp833 = $tmp838;
            $tmp832 = $tmp833;
            $finallyReturn830 = $tmp832;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp832));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp833));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp834));
            panda$core$Panda$unref$panda$core$Object($tmp835);
            $tmp728 = 13;
            goto $l726;
            $l839:;
            return $finallyReturn830;
        }
        }
        panda$core$Bit $tmp841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp841.value) {
        {
            panda$core$Object* $tmp847 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
            $tmp846 = $tmp847;
            org$pandalanguage$pandac$Type* $tmp848 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp846));
            $tmp845 = $tmp848;
            org$pandalanguage$pandac$Type* $tmp849 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp845);
            $tmp844 = $tmp849;
            $tmp843 = $tmp844;
            $finallyReturn841 = $tmp843;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp843));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp844));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp845));
            panda$core$Panda$unref$panda$core$Object($tmp846);
            $tmp728 = 14;
            goto $l726;
            $l850:;
            return $finallyReturn841;
        }
        }
        org$pandalanguage$pandac$Type* $tmp855 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp854 = $tmp855;
        $tmp853 = $tmp854;
        t1852 = $tmp853;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp853));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp854));
        org$pandalanguage$pandac$Type* $tmp859 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp858 = $tmp859;
        $tmp857 = $tmp858;
        t2856 = $tmp857;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp857));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp858));
        panda$core$Bit $tmp861 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t1852);
        bool $tmp860 = $tmp861.value;
        if (!$tmp860) goto $l862;
        panda$core$Bit $tmp863 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t2856);
        $tmp860 = $tmp863.value;
        $l862:;
        panda$core$Bit $tmp864 = { $tmp860 };
        if ($tmp864.value) {
        {
            int $tmp867;
            {
                panda$collections$Set* $tmp871 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
                panda$collections$Set$init($tmp871);
                $tmp870 = $tmp871;
                $tmp869 = $tmp870;
                ancestors868 = $tmp869;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp869));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp870));
                $tmp873 = self;
                t872 = $tmp873;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp873));
                org$pandalanguage$pandac$ClassDecl* $tmp877 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1852);
                $tmp876 = $tmp877;
                $tmp875 = $tmp876;
                cl874 = $tmp875;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp875));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp876));
                $l878:;
                bool $tmp880 = ((panda$core$Bit) { cl874 != NULL }).value;
                if (!$tmp880) goto $l879;
                {
                    panda$collections$Set$add$panda$collections$Set$T(ancestors868, ((panda$collections$Key*) t872));
                    if (((panda$core$Bit) { cl874->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp881 = t872;
                            org$pandalanguage$pandac$Type* $tmp884 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t872, cl874->rawSuper);
                            $tmp883 = $tmp884;
                            $tmp882 = $tmp883;
                            t872 = $tmp882;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp882));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp883));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp881));
                        }
                        {
                            $tmp885 = cl874;
                            org$pandalanguage$pandac$ClassDecl* $tmp888 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t872);
                            $tmp887 = $tmp888;
                            $tmp886 = $tmp887;
                            cl874 = $tmp886;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp886));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp887));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp885));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp889 = cl874;
                            $tmp890 = NULL;
                            cl874 = $tmp890;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp890));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp889));
                        }
                    }
                    }
                }
                goto $l878;
                $l879:;
                {
                    $tmp891 = t872;
                    $tmp892 = p_other;
                    t872 = $tmp892;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp892));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp891));
                }
                {
                    $tmp893 = cl874;
                    org$pandalanguage$pandac$ClassDecl* $tmp896 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t2856);
                    $tmp895 = $tmp896;
                    $tmp894 = $tmp895;
                    cl874 = $tmp894;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp894));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp895));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp893));
                }
                $l897:;
                bool $tmp899 = ((panda$core$Bit) { cl874 != NULL }).value;
                if (!$tmp899) goto $l898;
                {
                    panda$core$Bit $tmp900 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors868, ((panda$collections$Key*) t872));
                    if ($tmp900.value) {
                    {
                        $tmp902 = t872;
                        $finallyReturn900 = $tmp902;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp902));
                        $tmp867 = 0;
                        goto $l865;
                        $l903:;
                        $tmp728 = 15;
                        goto $l726;
                        $l904:;
                        return $finallyReturn900;
                    }
                    }
                    if (((panda$core$Bit) { cl874->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp906 = t872;
                            org$pandalanguage$pandac$Type* $tmp909 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t872, cl874->rawSuper);
                            $tmp908 = $tmp909;
                            $tmp907 = $tmp908;
                            t872 = $tmp907;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp907));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp908));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp906));
                        }
                        {
                            $tmp910 = cl874;
                            org$pandalanguage$pandac$ClassDecl* $tmp913 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t872);
                            $tmp912 = $tmp913;
                            $tmp911 = $tmp912;
                            cl874 = $tmp911;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp911));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp910));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp914 = cl874;
                            $tmp915 = NULL;
                            cl874 = $tmp915;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp915));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp914));
                        }
                    }
                    }
                }
                goto $l897;
                $l898:;
            }
            $tmp867 = -1;
            goto $l865;
            $l865:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors868));
            ancestors868 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t872));
            t872 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl874));
            cl874 = NULL;
            switch ($tmp867) {
                case -1: goto $l916;
                case 0: goto $l903;
            }
            $l916:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp920 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp919 = $tmp920;
        $tmp918 = $tmp919;
        $finallyReturn916 = $tmp918;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp918));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp919));
        $tmp728 = 16;
        goto $l726;
        $l921:;
        return $finallyReturn916;
    }
    $l726:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1852));
    t1852 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2856));
    t2856 = NULL;
    switch ($tmp728) {
        case 16: goto $l921;
        case 15: goto $l904;
        case 1: goto $l740;
        case 3: goto $l754;
        case 10: goto $l813;
        case 9: goto $l803;
        case 6: goto $l778;
        case 8: goto $l797;
        case 2: goto $l746;
        case 5: goto $l769;
        case 4: goto $l760;
        case 12: goto $l828;
        case 7: goto $l788;
        case 11: goto $l822;
        case 13: goto $l839;
        case 14: goto $l850;
        case 0: goto $l732;
    }
    $l923:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* $finallyReturn925;
    org$pandalanguage$pandac$Type* $tmp927;
    org$pandalanguage$pandac$Type* found932 = NULL;
    org$pandalanguage$pandac$Type* $tmp933;
    panda$core$Object* $tmp934;
    org$pandalanguage$pandac$Type* $finallyReturn935;
    org$pandalanguage$pandac$Type* $tmp937;
    org$pandalanguage$pandac$Type* $finallyReturn939;
    org$pandalanguage$pandac$Type* $tmp941;
    org$pandalanguage$pandac$Type* base948 = NULL;
    org$pandalanguage$pandac$Type* $tmp949;
    org$pandalanguage$pandac$Type* $tmp950;
    panda$core$Object* $tmp951;
    panda$collections$Array* remappedArgs954 = NULL;
    panda$collections$Array* $tmp955;
    panda$collections$Array* $tmp956;
    panda$core$Range$LTpanda$core$Int64$GT $tmp958;
    org$pandalanguage$pandac$Type* $tmp973;
    panda$core$Object* $tmp974;
    org$pandalanguage$pandac$Type* $finallyReturn982;
    org$pandalanguage$pandac$Type* $tmp984;
    org$pandalanguage$pandac$Type* $tmp985;
    org$pandalanguage$pandac$Type* $finallyReturn989;
    org$pandalanguage$pandac$Type* $tmp991;
    org$pandalanguage$pandac$Type* $tmp992;
    org$pandalanguage$pandac$Type* $tmp993;
    panda$core$Object* $tmp994;
    panda$collections$Array* remapped1002 = NULL;
    panda$collections$Array* $tmp1003;
    panda$collections$Array* $tmp1004;
    panda$core$MutableString* name1006 = NULL;
    panda$core$MutableString* $tmp1007;
    panda$core$MutableString* $tmp1008;
    panda$core$String* separator1011 = NULL;
    panda$core$String* $tmp1012;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1016;
    org$pandalanguage$pandac$Type* child1035 = NULL;
    org$pandalanguage$pandac$Type* $tmp1036;
    org$pandalanguage$pandac$Type* $tmp1037;
    panda$core$Object* $tmp1038;
    panda$core$String* $tmp1041;
    panda$core$String* $tmp1042;
    panda$core$Object* $tmp1054;
    org$pandalanguage$pandac$Type* $tmp1058;
    org$pandalanguage$pandac$Type* child1064 = NULL;
    org$pandalanguage$pandac$Type* $tmp1065;
    org$pandalanguage$pandac$Type* $tmp1066;
    panda$core$Object* $tmp1067;
    org$pandalanguage$pandac$Type* $tmp1073;
    panda$core$Char8 $tmp1075;
    org$pandalanguage$pandac$Type* $finallyReturn1075;
    org$pandalanguage$pandac$Type* $tmp1077;
    org$pandalanguage$pandac$Type* $tmp1078;
    panda$core$String* $tmp1080;
    org$pandalanguage$pandac$Type* $finallyReturn1084;
    org$pandalanguage$pandac$Type* $tmp1086;
    panda$core$Int64 $tmp924 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp924, ((panda$core$Int64) { 0 }));
    if ($tmp925.value) {
    {
        $tmp927 = self;
        $finallyReturn925 = $tmp927;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp927));
        return $finallyReturn925;
    }
    }
    switch (self->typeKind.value) {
        case 22:
        {
            int $tmp931;
            {
                panda$core$Object* $tmp935 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                $tmp934 = $tmp935;
                $tmp933 = ((org$pandalanguage$pandac$Type*) $tmp934);
                found932 = $tmp933;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp933));
                panda$core$Panda$unref$panda$core$Object($tmp934);
                if (((panda$core$Bit) { found932 != NULL }).value) {
                {
                    $tmp937 = found932;
                    $finallyReturn935 = $tmp937;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp937));
                    $tmp931 = 0;
                    goto $l929;
                    $l938:;
                    return $finallyReturn935;
                }
                }
                $tmp941 = self;
                $finallyReturn939 = $tmp941;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp941));
                $tmp931 = 1;
                goto $l929;
                $l942:;
                return $finallyReturn939;
            }
            $l929:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found932));
            found932 = NULL;
            switch ($tmp931) {
                case 1: goto $l942;
                case 0: goto $l938;
            }
            $l944:;
        }
        break;
        case 21:
        {
            int $tmp947;
            {
                panda$core$Object* $tmp952 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
                $tmp951 = $tmp952;
                org$pandalanguage$pandac$Type* $tmp953 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp951), p_types);
                $tmp950 = $tmp953;
                $tmp949 = $tmp950;
                base948 = $tmp949;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp949));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp950));
                panda$core$Panda$unref$panda$core$Object($tmp951);
                panda$collections$Array* $tmp957 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp957);
                $tmp956 = $tmp957;
                $tmp955 = $tmp956;
                remappedArgs954 = $tmp955;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp955));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp956));
                panda$core$Int64 $tmp959 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp958, ((panda$core$Int64) { 1 }), $tmp959, ((panda$core$Bit) { false }));
                int64_t $tmp961 = $tmp958.min.value;
                panda$core$Int64 i960 = { $tmp961 };
                int64_t $tmp963 = $tmp958.max.value;
                bool $tmp964 = $tmp958.inclusive.value;
                if ($tmp964) goto $l971; else goto $l972;
                $l971:;
                if ($tmp961 <= $tmp963) goto $l965; else goto $l967;
                $l972:;
                if ($tmp961 < $tmp963) goto $l965; else goto $l967;
                $l965:;
                {
                    panda$core$Object* $tmp975 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i960);
                    $tmp974 = $tmp975;
                    org$pandalanguage$pandac$Type* $tmp976 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp974), p_types);
                    $tmp973 = $tmp976;
                    panda$collections$Array$add$panda$collections$Array$T(remappedArgs954, ((panda$core$Object*) $tmp973));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp973));
                    panda$core$Panda$unref$panda$core$Object($tmp974);
                }
                $l968:;
                int64_t $tmp978 = $tmp963 - i960.value;
                if ($tmp964) goto $l979; else goto $l980;
                $l979:;
                if ((uint64_t) $tmp978 >= 1) goto $l977; else goto $l967;
                $l980:;
                if ((uint64_t) $tmp978 > 1) goto $l977; else goto $l967;
                $l977:;
                i960.value += 1;
                goto $l965;
                $l967:;
                org$pandalanguage$pandac$Type* $tmp986 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base948, ((panda$collections$ListView*) remappedArgs954));
                $tmp985 = $tmp986;
                $tmp984 = $tmp985;
                $finallyReturn982 = $tmp984;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp984));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp985));
                $tmp947 = 0;
                goto $l945;
                $l987:;
                return $finallyReturn982;
            }
            $l945:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base948));
            base948 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remappedArgs954));
            remappedArgs954 = NULL;
            switch ($tmp947) {
                case 0: goto $l987;
            }
            $l989:;
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp995 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp994 = $tmp995;
            org$pandalanguage$pandac$Type* $tmp996 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp994), p_types);
            $tmp993 = $tmp996;
            org$pandalanguage$pandac$Type* $tmp997 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp993);
            $tmp992 = $tmp997;
            $tmp991 = $tmp992;
            $finallyReturn989 = $tmp991;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp991));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp992));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp993));
            panda$core$Panda$unref$panda$core$Object($tmp994);
            return $finallyReturn989;
        }
        break;
        case 25:
        case 24:
        {
            int $tmp1001;
            {
                panda$collections$Array* $tmp1005 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1005);
                $tmp1004 = $tmp1005;
                $tmp1003 = $tmp1004;
                remapped1002 = $tmp1003;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1003));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1004));
                panda$core$MutableString* $tmp1009 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1009, &$s1010);
                $tmp1008 = $tmp1009;
                $tmp1007 = $tmp1008;
                name1006 = $tmp1007;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1007));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1008));
                $tmp1012 = &$s1013;
                separator1011 = $tmp1012;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1012));
                panda$core$Int64 $tmp1014 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Bit $tmp1015 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1014, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1015.value);
                panda$core$Int64 $tmp1017 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1018 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1017, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1016, ((panda$core$Int64) { 0 }), $tmp1018, ((panda$core$Bit) { false }));
                int64_t $tmp1020 = $tmp1016.min.value;
                panda$core$Int64 i1019 = { $tmp1020 };
                int64_t $tmp1022 = $tmp1016.max.value;
                bool $tmp1023 = $tmp1016.inclusive.value;
                if ($tmp1023) goto $l1030; else goto $l1031;
                $l1030:;
                if ($tmp1020 <= $tmp1022) goto $l1024; else goto $l1026;
                $l1031:;
                if ($tmp1020 < $tmp1022) goto $l1024; else goto $l1026;
                $l1024:;
                {
                    int $tmp1034;
                    {
                        panda$core$Object* $tmp1039 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1019);
                        $tmp1038 = $tmp1039;
                        org$pandalanguage$pandac$Type* $tmp1040 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1038), p_types);
                        $tmp1037 = $tmp1040;
                        $tmp1036 = $tmp1037;
                        child1035 = $tmp1036;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1036));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1037));
                        panda$core$Panda$unref$panda$core$Object($tmp1038);
                        panda$core$MutableString$append$panda$core$String(name1006, separator1011);
                        panda$core$MutableString$append$panda$core$String(name1006, ((org$pandalanguage$pandac$Symbol*) child1035)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1002, ((panda$core$Object*) child1035));
                        {
                            $tmp1041 = separator1011;
                            $tmp1042 = &$s1043;
                            separator1011 = $tmp1042;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1042));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1041));
                        }
                    }
                    $tmp1034 = -1;
                    goto $l1032;
                    $l1032:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1035));
                    child1035 = NULL;
                    switch ($tmp1034) {
                        case -1: goto $l1044;
                    }
                    $l1044:;
                }
                $l1027:;
                int64_t $tmp1046 = $tmp1022 - i1019.value;
                if ($tmp1023) goto $l1047; else goto $l1048;
                $l1047:;
                if ((uint64_t) $tmp1046 >= 1) goto $l1045; else goto $l1026;
                $l1048:;
                if ((uint64_t) $tmp1046 > 1) goto $l1045; else goto $l1026;
                $l1045:;
                i1019.value += 1;
                goto $l1024;
                $l1026:;
                panda$core$Bit $tmp1051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
                if ($tmp1051.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name1006, &$s1052);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(name1006, &$s1053);
                }
                }
                panda$core$Int64 $tmp1055 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1056 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1055, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1057 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1056);
                $tmp1054 = $tmp1057;
                org$pandalanguage$pandac$Type* $tmp1059 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1058 = $tmp1059;
                panda$core$Bit $tmp1060 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1054), $tmp1058);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1058));
                panda$core$Panda$unref$panda$core$Object($tmp1054);
                if ($tmp1060.value) {
                {
                    int $tmp1063;
                    {
                        panda$core$Int64 $tmp1068 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                        panda$core$Int64 $tmp1069 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1068, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1070 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1069);
                        $tmp1067 = $tmp1070;
                        org$pandalanguage$pandac$Type* $tmp1071 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1067), p_types);
                        $tmp1066 = $tmp1071;
                        $tmp1065 = $tmp1066;
                        child1064 = $tmp1065;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1065));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1066));
                        panda$core$Panda$unref$panda$core$Object($tmp1067);
                        panda$core$MutableString$append$panda$core$String(name1006, ((org$pandalanguage$pandac$Symbol*) child1064)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1002, ((panda$core$Object*) child1064));
                    }
                    $tmp1063 = -1;
                    goto $l1061;
                    $l1061:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1064));
                    child1064 = NULL;
                    switch ($tmp1063) {
                        case -1: goto $l1072;
                    }
                    $l1072:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1074 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                    $tmp1073 = $tmp1074;
                    panda$collections$Array$add$panda$collections$Array$T(remapped1002, ((panda$core$Object*) $tmp1073));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1073));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1075, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(name1006, $tmp1075);
                org$pandalanguage$pandac$Type* $tmp1079 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp1081 = panda$core$MutableString$finish$R$panda$core$String(name1006);
                $tmp1080 = $tmp1081;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1079, $tmp1080, self->typeKind, self->position, ((panda$collections$ListView*) remapped1002), self->resolved);
                $tmp1078 = $tmp1079;
                $tmp1077 = $tmp1078;
                $finallyReturn1075 = $tmp1077;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1077));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1078));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1080));
                $tmp1001 = 0;
                goto $l999;
                $l1082:;
                return $finallyReturn1075;
            }
            $l999:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped1002));
            remapped1002 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1006));
            name1006 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1011));
            separator1011 = NULL;
            switch ($tmp1001) {
                case 0: goto $l1082;
            }
            $l1084:;
        }
        break;
        default:
        {
            $tmp1086 = self;
            $finallyReturn1084 = $tmp1086;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1086));
            return $finallyReturn1084;
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $finallyReturn1087;
    panda$core$Int64 $tmp1089 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $finallyReturn1087 = $tmp1089;
    return $finallyReturn1087;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $finallyReturn1090;
    panda$core$String* $tmp1092;
    $tmp1092 = self->name;
    $finallyReturn1090 = $tmp1092;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1092));
    return $finallyReturn1090;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1096;
    {
    }
    $tmp1096 = -1;
    goto $l1094;
    $l1094:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1096) {
        case -1: goto $l1097;
    }
    $l1097:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

