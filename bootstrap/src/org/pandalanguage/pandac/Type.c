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

typedef panda$collections$Iterator* (*$fn47)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn54)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn65)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn118)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn125)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn136)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 29, -3248623696866231612, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };

void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position) {
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit(self, p_name, p_typeKind, p_position, ((panda$core$Bit) { false }));
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_resolved) {
    panda$collections$Array* $tmp2;
    panda$collections$Array* $tmp3;
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
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, panda$core$Int64 p_size) {
    org$pandalanguage$pandac$Position $tmp7;
    panda$collections$Array* $tmp8;
    panda$collections$Array* $tmp9;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Bit $tmp5 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s4);
    panda$core$Bit $tmp6 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5);
    PANDA_ASSERT($tmp6.value);
    self->typeKind = p_typeKind;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp7, p_size, p_size);
    ((org$pandalanguage$pandac$Symbol*) self)->position = $tmp7;
    self->resolved = ((panda$core$Bit) { true });
    {
        $tmp8 = self->subtypes;
        $tmp9 = NULL;
        self->subtypes = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_subtypes, panda$core$Bit p_resolved) {
    panda$collections$Array* $tmp19;
    panda$collections$Array* $tmp20;
    panda$collections$Array* $tmp21;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp12 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s11);
    panda$core$Bit $tmp13 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp10, $tmp12);
    PANDA_ASSERT($tmp13.value);
    panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    panda$core$Bit $tmp16 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s15);
    panda$core$Bit $tmp17 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp14, $tmp16);
    PANDA_ASSERT($tmp17.value);
    panda$core$Bit $tmp18 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, ((panda$core$Int64) { 12 }));
    PANDA_ASSERT($tmp18.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        $tmp19 = self->subtypes;
        panda$collections$Array* $tmp22 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp22, p_subtypes);
        $tmp21 = $tmp22;
        $tmp20 = $tmp21;
        self->subtypes = $tmp20;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    org$pandalanguage$pandac$Type$Kind $tmp26;
    panda$collections$Array* $tmp27;
    panda$collections$Array* $tmp28;
    panda$collections$Array* $tmp29;
    panda$core$MutableString* name31 = NULL;
    panda$core$MutableString* $tmp32;
    panda$core$MutableString* $tmp33;
    panda$core$String* separator36 = NULL;
    panda$core$String* $tmp37;
    panda$collections$Iterator* Iter$74$942 = NULL;
    panda$collections$Iterator* $tmp43;
    panda$collections$Iterator* $tmp44;
    org$pandalanguage$pandac$Type* t60 = NULL;
    org$pandalanguage$pandac$Type* $tmp61;
    panda$core$Object* $tmp62;
    panda$core$String* $tmp67;
    panda$core$String* $tmp68;
    panda$core$Char8 $tmp75;
    panda$core$String* $tmp76;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    int $tmp25;
    {
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp26, ((panda$core$Int64) { 7 }));
        self->typeKind = $tmp26;
        {
            $tmp27 = self->subtypes;
            panda$collections$Array* $tmp30 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp30, p_subtypes);
            $tmp29 = $tmp30;
            $tmp28 = $tmp29;
            self->subtypes = $tmp28;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
        }
        panda$core$MutableString* $tmp34 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp34, &$s35);
        $tmp33 = $tmp34;
        $tmp32 = $tmp33;
        name31 = $tmp32;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
        $tmp37 = &$s38;
        separator36 = $tmp37;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
        self->resolved = ((panda$core$Bit) { true });
        {
            int $tmp41;
            {
                ITable* $tmp45 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
                while ($tmp45->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp45 = $tmp45->next;
                }
                $fn47 $tmp46 = $tmp45->methods[0];
                panda$collections$Iterator* $tmp48 = $tmp46(((panda$collections$Iterable*) p_subtypes));
                $tmp44 = $tmp48;
                $tmp43 = $tmp44;
                Iter$74$942 = $tmp43;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp43));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
                $l49:;
                ITable* $tmp52 = Iter$74$942->$class->itable;
                while ($tmp52->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp52 = $tmp52->next;
                }
                $fn54 $tmp53 = $tmp52->methods[0];
                panda$core$Bit $tmp55 = $tmp53(Iter$74$942);
                panda$core$Bit $tmp56 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp55);
                bool $tmp51 = $tmp56.value;
                if (!$tmp51) goto $l50;
                {
                    int $tmp59;
                    {
                        ITable* $tmp63 = Iter$74$942->$class->itable;
                        while ($tmp63->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp63 = $tmp63->next;
                        }
                        $fn65 $tmp64 = $tmp63->methods[1];
                        panda$core$Object* $tmp66 = $tmp64(Iter$74$942);
                        $tmp62 = $tmp66;
                        $tmp61 = ((org$pandalanguage$pandac$Type*) $tmp62);
                        t60 = $tmp61;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp61));
                        panda$core$Panda$unref$panda$core$Object($tmp62);
                        panda$core$MutableString$append$panda$core$String(name31, separator36);
                        panda$core$MutableString$append$panda$core$Object(name31, ((panda$core$Object*) t60));
                        {
                            $tmp67 = separator36;
                            $tmp68 = &$s69;
                            separator36 = $tmp68;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
                        }
                        bool $tmp70 = self->resolved.value;
                        if (!$tmp70) goto $l71;
                        $tmp70 = t60->resolved.value;
                        $l71:;
                        panda$core$Bit $tmp72 = { $tmp70 };
                        self->resolved = $tmp72;
                    }
                    $tmp59 = -1;
                    goto $l57;
                    $l57:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t60));
                    t60 = NULL;
                    switch ($tmp59) {
                        case -1: goto $l73;
                    }
                    $l73:;
                }
                goto $l49;
                $l50:;
            }
            $tmp41 = -1;
            goto $l39;
            $l39:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$74$942));
            Iter$74$942 = NULL;
            switch ($tmp41) {
                case -1: goto $l74;
            }
            $l74:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp75, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name31, $tmp75);
        panda$core$String* $tmp77 = panda$core$MutableString$finish$R$panda$core$String(name31);
        $tmp76 = $tmp77;
        org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, $tmp76);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
    }
    $tmp25 = -1;
    goto $l23;
    $l23:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name31));
    name31 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator36));
    separator36 = NULL;
    switch ($tmp25) {
        case -1: goto $l78;
    }
    $l78:;
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    panda$core$String* $tmp79;
    panda$core$String* $tmp80;
    panda$core$String* $tmp81;
    panda$core$String* $tmp82;
    panda$core$String* $tmp83;
    panda$core$String* $tmp84;
    org$pandalanguage$pandac$Type$Kind $tmp91;
    panda$core$Weak* $tmp92;
    panda$core$Weak* $tmp93;
    panda$core$Weak* $tmp94;
    panda$collections$Array* $tmp96;
    panda$collections$Array* $tmp97;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    {
        $tmp79 = ((org$pandalanguage$pandac$Symbol*) self)->name;
        panda$core$String* $tmp85 = panda$core$String$convert$R$panda$core$String(p_param->owner);
        $tmp84 = $tmp85;
        panda$core$String* $tmp87 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp84, &$s86);
        $tmp83 = $tmp87;
        panda$core$String* $tmp88 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp83, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
        $tmp82 = $tmp88;
        panda$core$String* $tmp90 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp82, &$s89);
        $tmp81 = $tmp90;
        $tmp80 = $tmp81;
        ((org$pandalanguage$pandac$Symbol*) self)->name = $tmp80;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp82));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
    }
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp91, ((panda$core$Int64) { 12 }));
    self->typeKind = $tmp91;
    {
        $tmp92 = self->parameter;
        panda$core$Weak* $tmp95 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp95, ((panda$core$Object*) p_param));
        $tmp94 = $tmp95;
        $tmp93 = $tmp94;
        self->parameter = $tmp93;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
    }
    self->resolved = ((panda$core$Bit) { true });
    {
        $tmp96 = self->subtypes;
        $tmp97 = NULL;
        self->subtypes = $tmp97;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_base, panda$collections$ListView* p_arguments) {
    panda$core$Bit resolved101;
    panda$core$MutableString* name102 = NULL;
    panda$core$MutableString* $tmp103;
    panda$core$MutableString* $tmp104;
    panda$core$Char8 $tmp106;
    panda$core$String* separator107 = NULL;
    panda$core$String* $tmp108;
    panda$collections$Iterator* Iter$99$9113 = NULL;
    panda$collections$Iterator* $tmp114;
    panda$collections$Iterator* $tmp115;
    org$pandalanguage$pandac$Type* a131 = NULL;
    org$pandalanguage$pandac$Type* $tmp132;
    panda$core$Object* $tmp133;
    panda$core$String* $tmp141;
    panda$core$String* $tmp142;
    panda$core$Char8 $tmp146;
    panda$collections$Array* subtypes147 = NULL;
    panda$collections$Array* $tmp148;
    panda$collections$Array* $tmp149;
    org$pandalanguage$pandac$Type* $returnValue151;
    org$pandalanguage$pandac$Type* $tmp152;
    org$pandalanguage$pandac$Type* $tmp153;
    panda$core$String* $tmp155;
    org$pandalanguage$pandac$Type$Kind $tmp157;
    panda$collections$ImmutableArray* $tmp158;
    int $tmp100;
    {
        resolved101 = p_base->resolved;
        panda$core$MutableString* $tmp105 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp105);
        $tmp104 = $tmp105;
        $tmp103 = $tmp104;
        name102 = $tmp103;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
        panda$core$MutableString$append$panda$core$String(name102, ((org$pandalanguage$pandac$Symbol*) p_base)->name);
        panda$core$Char8$init$panda$core$UInt8(&$tmp106, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name102, $tmp106);
        $tmp108 = &$s109;
        separator107 = $tmp108;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp108));
        {
            int $tmp112;
            {
                ITable* $tmp116 = ((panda$collections$Iterable*) p_arguments)->$class->itable;
                while ($tmp116->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp116 = $tmp116->next;
                }
                $fn118 $tmp117 = $tmp116->methods[0];
                panda$collections$Iterator* $tmp119 = $tmp117(((panda$collections$Iterable*) p_arguments));
                $tmp115 = $tmp119;
                $tmp114 = $tmp115;
                Iter$99$9113 = $tmp114;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp115));
                $l120:;
                ITable* $tmp123 = Iter$99$9113->$class->itable;
                while ($tmp123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp123 = $tmp123->next;
                }
                $fn125 $tmp124 = $tmp123->methods[0];
                panda$core$Bit $tmp126 = $tmp124(Iter$99$9113);
                panda$core$Bit $tmp127 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp126);
                bool $tmp122 = $tmp127.value;
                if (!$tmp122) goto $l121;
                {
                    int $tmp130;
                    {
                        ITable* $tmp134 = Iter$99$9113->$class->itable;
                        while ($tmp134->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp134 = $tmp134->next;
                        }
                        $fn136 $tmp135 = $tmp134->methods[1];
                        panda$core$Object* $tmp137 = $tmp135(Iter$99$9113);
                        $tmp133 = $tmp137;
                        $tmp132 = ((org$pandalanguage$pandac$Type*) $tmp133);
                        a131 = $tmp132;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp132));
                        panda$core$Panda$unref$panda$core$Object($tmp133);
                        bool $tmp138 = resolved101.value;
                        if (!$tmp138) goto $l139;
                        $tmp138 = a131->resolved.value;
                        $l139:;
                        panda$core$Bit $tmp140 = { $tmp138 };
                        resolved101 = $tmp140;
                        panda$core$MutableString$append$panda$core$String(name102, separator107);
                        panda$core$MutableString$append$panda$core$String(name102, ((org$pandalanguage$pandac$Symbol*) a131)->name);
                        {
                            $tmp141 = separator107;
                            $tmp142 = &$s143;
                            separator107 = $tmp142;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp141));
                        }
                    }
                    $tmp130 = -1;
                    goto $l128;
                    $l128:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a131));
                    a131 = NULL;
                    switch ($tmp130) {
                        case -1: goto $l144;
                    }
                    $l144:;
                }
                goto $l120;
                $l121:;
            }
            $tmp112 = -1;
            goto $l110;
            $l110:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$99$9113));
            Iter$99$9113 = NULL;
            switch ($tmp112) {
                case -1: goto $l145;
            }
            $l145:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp146, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name102, $tmp146);
        panda$collections$Array* $tmp150 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp150);
        $tmp149 = $tmp150;
        $tmp148 = $tmp149;
        subtypes147 = $tmp148;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
        panda$collections$Array$add$panda$collections$Array$T(subtypes147, ((panda$core$Object*) p_base));
        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(subtypes147, ((panda$collections$CollectionView*) p_arguments));
        org$pandalanguage$pandac$Type* $tmp154 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp156 = panda$core$MutableString$finish$R$panda$core$String(name102);
        $tmp155 = $tmp156;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp157, ((panda$core$Int64) { 11 }));
        panda$collections$ImmutableArray* $tmp159 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes147);
        $tmp158 = $tmp159;
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp154, $tmp155, $tmp157, ((org$pandalanguage$pandac$Symbol*) p_base)->position, ((panda$collections$ListView*) $tmp158), resolved101);
        $tmp153 = $tmp154;
        $tmp152 = $tmp153;
        $returnValue151 = $tmp152;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp158));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
        $tmp100 = 0;
        goto $l98;
        $l160:;
        return $returnValue151;
    }
    $l98:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name102));
    name102 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator107));
    separator107 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes147));
    subtypes147 = NULL;
    switch ($tmp100) {
        case 0: goto $l160;
    }
    $l162:;
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue172;
    panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp164 = $tmp165.value;
    if ($tmp164) goto $l166;
    panda$core$Bit $tmp167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 3 }));
    $tmp164 = $tmp167.value;
    $l166:;
    panda$core$Bit $tmp168 = { $tmp164 };
    bool $tmp163 = $tmp168.value;
    if ($tmp163) goto $l169;
    panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 10 }));
    $tmp163 = $tmp170.value;
    $l169:;
    panda$core$Bit $tmp171 = { $tmp163 };
    PANDA_ASSERT($tmp171.value);
    $returnValue172 = self->position.line;
    return $returnValue172;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue174;
    panda$core$Bit $tmp175 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue174 = $tmp175;
    return $returnValue174;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue177;
    panda$core$Bit $tmp178 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue177 = $tmp178;
    return $returnValue177;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue180;
    org$pandalanguage$pandac$Type* $tmp181;
    org$pandalanguage$pandac$Type* $tmp182;
    org$pandalanguage$pandac$Type$Kind $tmp185;
    org$pandalanguage$pandac$Position $tmp186;
    org$pandalanguage$pandac$Type* $tmp183 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp185, ((panda$core$Int64) { 4 }));
    org$pandalanguage$pandac$Position$init(&$tmp186);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp183, &$s184, $tmp185, $tmp186, ((panda$core$Bit) { true }));
    $tmp182 = $tmp183;
    $tmp181 = $tmp182;
    $returnValue180 = $tmp181;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
    return $returnValue180;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue188;
    org$pandalanguage$pandac$Type* $tmp189;
    org$pandalanguage$pandac$Type* $tmp190;
    org$pandalanguage$pandac$Type$Kind $tmp193;
    org$pandalanguage$pandac$Position $tmp194;
    org$pandalanguage$pandac$Type* $tmp191 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp193, ((panda$core$Int64) { 13 }));
    org$pandalanguage$pandac$Position$init(&$tmp194);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp191, &$s192, $tmp193, $tmp194, ((panda$core$Bit) { true }));
    $tmp190 = $tmp191;
    $tmp189 = $tmp190;
    $returnValue188 = $tmp189;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
    return $returnValue188;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue196;
    org$pandalanguage$pandac$Type* $tmp197;
    org$pandalanguage$pandac$Type* $tmp198;
    org$pandalanguage$pandac$Type$Kind $tmp201;
    org$pandalanguage$pandac$Position $tmp202;
    org$pandalanguage$pandac$Type* $tmp199 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp201, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp202);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp199, &$s200, $tmp201, $tmp202, ((panda$core$Bit) { true }));
    $tmp198 = $tmp199;
    $tmp197 = $tmp198;
    $returnValue196 = $tmp197;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
    return $returnValue196;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes207 = NULL;
    panda$collections$Array* $tmp208;
    panda$collections$Array* $tmp209;
    org$pandalanguage$pandac$Type* $tmp211;
    org$pandalanguage$pandac$Type* $returnValue213;
    org$pandalanguage$pandac$Type* $tmp214;
    org$pandalanguage$pandac$Type* $tmp215;
    org$pandalanguage$pandac$Type$Kind $tmp218;
    org$pandalanguage$pandac$Position $tmp219;
    int $tmp206;
    {
        panda$collections$Array* $tmp210 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp210);
        $tmp209 = $tmp210;
        $tmp208 = $tmp209;
        subtypes207 = $tmp208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
        org$pandalanguage$pandac$Type* $tmp212 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp211 = $tmp212;
        panda$collections$Array$add$panda$collections$Array$T(subtypes207, ((panda$core$Object*) $tmp211));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
        org$pandalanguage$pandac$Type* $tmp216 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp218, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Position$init(&$tmp219);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp216, &$s217, $tmp218, $tmp219, ((panda$collections$ListView*) subtypes207), ((panda$core$Bit) { true }));
        $tmp215 = $tmp216;
        $tmp214 = $tmp215;
        $returnValue213 = $tmp214;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
        $tmp206 = 0;
        goto $l204;
        $l220:;
        return $returnValue213;
    }
    $l204:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes207));
    subtypes207 = NULL;
    switch ($tmp206) {
        case 0: goto $l220;
    }
    $l222:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue223;
    org$pandalanguage$pandac$Type* $tmp224;
    org$pandalanguage$pandac$Type* $tmp225;
    org$pandalanguage$pandac$Type$Kind $tmp228;
    org$pandalanguage$pandac$Position $tmp229;
    org$pandalanguage$pandac$Type* $tmp226 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp228, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp229);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp226, &$s227, $tmp228, $tmp229, ((panda$core$Bit) { true }));
    $tmp225 = $tmp226;
    $tmp224 = $tmp225;
    $returnValue223 = $tmp224;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp224));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
    return $returnValue223;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue231;
    org$pandalanguage$pandac$Type* $tmp232;
    org$pandalanguage$pandac$Type* $tmp233;
    org$pandalanguage$pandac$Type$Kind $tmp236;
    org$pandalanguage$pandac$Position $tmp237;
    org$pandalanguage$pandac$Type* $tmp234 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp236, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp237);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp234, &$s235, $tmp236, $tmp237, ((panda$core$Bit) { true }));
    $tmp233 = $tmp234;
    $tmp232 = $tmp233;
    $returnValue231 = $tmp232;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp233));
    return $returnValue231;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue239;
    org$pandalanguage$pandac$Type* $tmp240;
    org$pandalanguage$pandac$Type* $tmp241;
    org$pandalanguage$pandac$Type$Kind $tmp244;
    org$pandalanguage$pandac$Position $tmp245;
    org$pandalanguage$pandac$Type* $tmp242 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp244, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp245);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp242, &$s243, $tmp244, $tmp245, ((panda$core$Bit) { true }));
    $tmp241 = $tmp242;
    $tmp240 = $tmp241;
    $returnValue239 = $tmp240;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp240));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
    return $returnValue239;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue247;
    org$pandalanguage$pandac$Type* $tmp248;
    org$pandalanguage$pandac$Type* $tmp249;
    org$pandalanguage$pandac$Type$Kind $tmp252;
    org$pandalanguage$pandac$Type* $tmp250 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp252, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp250, &$s251, $tmp252, ((panda$core$Int64) { 8 }));
    $tmp249 = $tmp250;
    $tmp248 = $tmp249;
    $returnValue247 = $tmp248;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
    return $returnValue247;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue254;
    org$pandalanguage$pandac$Type* $tmp255;
    org$pandalanguage$pandac$Type* $tmp256;
    org$pandalanguage$pandac$Type$Kind $tmp259;
    org$pandalanguage$pandac$Type* $tmp257 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp259, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp257, &$s258, $tmp259, ((panda$core$Int64) { 16 }));
    $tmp256 = $tmp257;
    $tmp255 = $tmp256;
    $returnValue254 = $tmp255;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
    return $returnValue254;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue261;
    org$pandalanguage$pandac$Type* $tmp262;
    org$pandalanguage$pandac$Type* $tmp263;
    org$pandalanguage$pandac$Type$Kind $tmp266;
    org$pandalanguage$pandac$Type* $tmp264 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp266, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp264, &$s265, $tmp266, ((panda$core$Int64) { 32 }));
    $tmp263 = $tmp264;
    $tmp262 = $tmp263;
    $returnValue261 = $tmp262;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
    return $returnValue261;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue268;
    org$pandalanguage$pandac$Type* $tmp269;
    org$pandalanguage$pandac$Type* $tmp270;
    org$pandalanguage$pandac$Type$Kind $tmp273;
    org$pandalanguage$pandac$Type* $tmp271 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp273, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp271, &$s272, $tmp273, ((panda$core$Int64) { 64 }));
    $tmp270 = $tmp271;
    $tmp269 = $tmp270;
    $returnValue268 = $tmp269;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
    return $returnValue268;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue275;
    org$pandalanguage$pandac$Type* $tmp276;
    org$pandalanguage$pandac$Type* $tmp277;
    org$pandalanguage$pandac$Type$Kind $tmp280;
    org$pandalanguage$pandac$Type* $tmp278 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp280, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp278, &$s279, $tmp280, ((panda$core$Int64) { 8 }));
    $tmp277 = $tmp278;
    $tmp276 = $tmp277;
    $returnValue275 = $tmp276;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
    return $returnValue275;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue282;
    org$pandalanguage$pandac$Type* $tmp283;
    org$pandalanguage$pandac$Type* $tmp284;
    org$pandalanguage$pandac$Type$Kind $tmp287;
    org$pandalanguage$pandac$Type* $tmp285 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp287, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp285, &$s286, $tmp287, ((panda$core$Int64) { 16 }));
    $tmp284 = $tmp285;
    $tmp283 = $tmp284;
    $returnValue282 = $tmp283;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp283));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp284));
    return $returnValue282;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue289;
    org$pandalanguage$pandac$Type* $tmp290;
    org$pandalanguage$pandac$Type* $tmp291;
    org$pandalanguage$pandac$Type$Kind $tmp294;
    org$pandalanguage$pandac$Type* $tmp292 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp294, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp292, &$s293, $tmp294, ((panda$core$Int64) { 32 }));
    $tmp291 = $tmp292;
    $tmp290 = $tmp291;
    $returnValue289 = $tmp290;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
    return $returnValue289;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue296;
    org$pandalanguage$pandac$Type* $tmp297;
    org$pandalanguage$pandac$Type* $tmp298;
    org$pandalanguage$pandac$Type$Kind $tmp301;
    org$pandalanguage$pandac$Type* $tmp299 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp301, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp299, &$s300, $tmp301, ((panda$core$Int64) { 64 }));
    $tmp298 = $tmp299;
    $tmp297 = $tmp298;
    $returnValue296 = $tmp297;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
    return $returnValue296;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue303;
    org$pandalanguage$pandac$Type* $tmp304;
    org$pandalanguage$pandac$Type* $tmp305;
    org$pandalanguage$pandac$Type$Kind $tmp308;
    org$pandalanguage$pandac$Type* $tmp306 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp308, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp306, &$s307, $tmp308, ((panda$core$Int64) { 32 }));
    $tmp305 = $tmp306;
    $tmp304 = $tmp305;
    $returnValue303 = $tmp304;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp304));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
    return $returnValue303;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue310;
    org$pandalanguage$pandac$Type* $tmp311;
    org$pandalanguage$pandac$Type* $tmp312;
    org$pandalanguage$pandac$Type$Kind $tmp315;
    org$pandalanguage$pandac$Type* $tmp313 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp315, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp313, &$s314, $tmp315, ((panda$core$Int64) { 64 }));
    $tmp312 = $tmp313;
    $tmp311 = $tmp312;
    $returnValue310 = $tmp311;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
    return $returnValue310;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue317;
    org$pandalanguage$pandac$Type* $tmp318;
    org$pandalanguage$pandac$Type* $tmp319;
    org$pandalanguage$pandac$Type$Kind $tmp322;
    org$pandalanguage$pandac$Position $tmp323;
    org$pandalanguage$pandac$Type* $tmp320 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp322, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp323);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp320, &$s321, $tmp322, $tmp323, ((panda$core$Bit) { true }));
    $tmp319 = $tmp320;
    $tmp318 = $tmp319;
    $returnValue317 = $tmp318;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp318));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
    return $returnValue317;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue325;
    org$pandalanguage$pandac$Type* $tmp326;
    org$pandalanguage$pandac$Type* $tmp327;
    org$pandalanguage$pandac$Type$Kind $tmp330;
    org$pandalanguage$pandac$Position $tmp331;
    org$pandalanguage$pandac$Type* $tmp328 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp330, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp331);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp328, &$s329, $tmp330, $tmp331, ((panda$core$Bit) { true }));
    $tmp327 = $tmp328;
    $tmp326 = $tmp327;
    $returnValue325 = $tmp326;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp326));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
    return $returnValue325;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue333;
    org$pandalanguage$pandac$Type* $tmp334;
    org$pandalanguage$pandac$Type* $tmp335;
    org$pandalanguage$pandac$Type$Kind $tmp338;
    org$pandalanguage$pandac$Position $tmp339;
    org$pandalanguage$pandac$Type* $tmp336 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp338, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp339);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp336, &$s337, $tmp338, $tmp339, ((panda$core$Bit) { true }));
    $tmp335 = $tmp336;
    $tmp334 = $tmp335;
    $returnValue333 = $tmp334;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp334));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
    return $returnValue333;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue341;
    org$pandalanguage$pandac$Type* $tmp342;
    org$pandalanguage$pandac$Type* $tmp343;
    org$pandalanguage$pandac$Type$Kind $tmp346;
    org$pandalanguage$pandac$Position $tmp347;
    org$pandalanguage$pandac$Type* $tmp344 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp346, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp347);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp344, &$s345, $tmp346, $tmp347, ((panda$core$Bit) { true }));
    $tmp343 = $tmp344;
    $tmp342 = $tmp343;
    $returnValue341 = $tmp342;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp342));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
    return $returnValue341;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue349;
    org$pandalanguage$pandac$Type* $tmp350;
    org$pandalanguage$pandac$Type* $tmp351;
    org$pandalanguage$pandac$Type$Kind $tmp354;
    org$pandalanguage$pandac$Position $tmp355;
    org$pandalanguage$pandac$Type* $tmp352 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp354, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp355);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp352, &$s353, $tmp354, $tmp355, ((panda$core$Bit) { true }));
    $tmp351 = $tmp352;
    $tmp350 = $tmp351;
    $returnValue349 = $tmp350;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
    return $returnValue349;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue357;
    org$pandalanguage$pandac$Type* $tmp358;
    org$pandalanguage$pandac$Type* $tmp359;
    org$pandalanguage$pandac$Type$Kind $tmp362;
    org$pandalanguage$pandac$Position $tmp363;
    org$pandalanguage$pandac$Type* $tmp360 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp362, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp363);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp360, &$s361, $tmp362, $tmp363, ((panda$core$Bit) { true }));
    $tmp359 = $tmp360;
    $tmp358 = $tmp359;
    $returnValue357 = $tmp358;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp358));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
    return $returnValue357;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue365;
    org$pandalanguage$pandac$Type* $tmp366;
    org$pandalanguage$pandac$Type* $tmp367;
    org$pandalanguage$pandac$Type$Kind $tmp370;
    org$pandalanguage$pandac$Position $tmp371;
    org$pandalanguage$pandac$Type* $tmp368 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp370, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp371);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp368, &$s369, $tmp370, $tmp371, ((panda$core$Bit) { true }));
    $tmp367 = $tmp368;
    $tmp366 = $tmp367;
    $returnValue365 = $tmp366;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp366));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
    return $returnValue365;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue373;
    org$pandalanguage$pandac$Type* $tmp374;
    org$pandalanguage$pandac$Type* $tmp375;
    org$pandalanguage$pandac$Type$Kind $tmp378;
    org$pandalanguage$pandac$Position $tmp379;
    org$pandalanguage$pandac$Type* $tmp376 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp378, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp379);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp376, &$s377, $tmp378, $tmp379, ((panda$core$Bit) { true }));
    $tmp375 = $tmp376;
    $tmp374 = $tmp375;
    $returnValue373 = $tmp374;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp374));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp375));
    return $returnValue373;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue381;
    org$pandalanguage$pandac$Type* $tmp382;
    org$pandalanguage$pandac$Type* $tmp383;
    org$pandalanguage$pandac$Type$Kind $tmp386;
    org$pandalanguage$pandac$Position $tmp387;
    org$pandalanguage$pandac$Type* $tmp384 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp386, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp387);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp384, &$s385, $tmp386, $tmp387, ((panda$core$Bit) { true }));
    $tmp383 = $tmp384;
    $tmp382 = $tmp383;
    $returnValue381 = $tmp382;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp382));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
    return $returnValue381;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue389;
    org$pandalanguage$pandac$Type* $tmp390;
    org$pandalanguage$pandac$Type* $tmp391;
    org$pandalanguage$pandac$Type$Kind $tmp394;
    org$pandalanguage$pandac$Position $tmp395;
    org$pandalanguage$pandac$Type* $tmp392 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp394, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp395);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp392, &$s393, $tmp394, $tmp395, ((panda$core$Bit) { true }));
    $tmp391 = $tmp392;
    $tmp390 = $tmp391;
    $returnValue389 = $tmp390;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
    return $returnValue389;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue429;
    org$pandalanguage$pandac$Type* $tmp430;
    org$pandalanguage$pandac$Type* $tmp431;
    panda$core$String* $tmp433;
    org$pandalanguage$pandac$Type$Kind $tmp435;
    org$pandalanguage$pandac$Position $tmp436;
    org$pandalanguage$pandac$Type* $tmp432 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp434 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp433 = $tmp434;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp435, ((panda$core$Int64) { 5 }));
    org$pandalanguage$pandac$Position$init(&$tmp436);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp432, $tmp433, $tmp435, $tmp436, ((panda$core$Bit) { true }));
    $tmp431 = $tmp432;
    $tmp430 = $tmp431;
    $returnValue429 = $tmp430;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
    return $returnValue429;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue438;
    org$pandalanguage$pandac$Type* $tmp439;
    org$pandalanguage$pandac$Type* $tmp440;
    panda$core$String* $tmp442;
    panda$core$String* $tmp444;
    org$pandalanguage$pandac$Type$Kind $tmp447;
    org$pandalanguage$pandac$Position $tmp448;
    org$pandalanguage$pandac$Type* $tmp441 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp445 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp444 = $tmp445;
    panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s443, $tmp444);
    $tmp442 = $tmp446;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp447, ((panda$core$Int64) { 5 }));
    org$pandalanguage$pandac$Position$init(&$tmp448);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp441, $tmp442, $tmp447, $tmp448, ((panda$core$Bit) { true }));
    $tmp440 = $tmp441;
    $tmp439 = $tmp440;
    $returnValue438 = $tmp439;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp442));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
    return $returnValue438;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue450;
    org$pandalanguage$pandac$Type* $tmp451;
    org$pandalanguage$pandac$Type* $tmp452;
    panda$core$String* $tmp454;
    org$pandalanguage$pandac$Type$Kind $tmp456;
    org$pandalanguage$pandac$Position $tmp457;
    org$pandalanguage$pandac$Type* $tmp453 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp455 = panda$core$Real64$convert$R$panda$core$String(p_value);
    $tmp454 = $tmp455;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp456, ((panda$core$Int64) { 16 }));
    org$pandalanguage$pandac$Position$init(&$tmp457);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp453, $tmp454, $tmp456, $tmp457, ((panda$core$Bit) { true }));
    $tmp452 = $tmp453;
    $tmp451 = $tmp452;
    $returnValue450 = $tmp451;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp451));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
    return $returnValue450;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue459;
    org$pandalanguage$pandac$Type* $tmp460;
    org$pandalanguage$pandac$Type* $tmp461;
    org$pandalanguage$pandac$Type$Kind $tmp464;
    org$pandalanguage$pandac$Position $tmp465;
    org$pandalanguage$pandac$Type* $tmp462 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp464, ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$Position$init(&$tmp465);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp462, &$s463, $tmp464, $tmp465, ((panda$core$Bit) { true }));
    $tmp461 = $tmp462;
    $tmp460 = $tmp461;
    $returnValue459 = $tmp460;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp460));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
    return $returnValue459;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue467;
    org$pandalanguage$pandac$Type* $tmp468;
    org$pandalanguage$pandac$Type* $tmp469;
    org$pandalanguage$pandac$Type$Kind $tmp472;
    org$pandalanguage$pandac$Position $tmp473;
    org$pandalanguage$pandac$Type* $tmp470 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp472, ((panda$core$Int64) { 9 }));
    org$pandalanguage$pandac$Position$init(&$tmp473);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp470, &$s471, $tmp472, $tmp473, ((panda$core$Bit) { true }));
    $tmp469 = $tmp470;
    $tmp468 = $tmp469;
    $returnValue467 = $tmp468;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
    return $returnValue467;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue475;
    org$pandalanguage$pandac$Type* $tmp476;
    org$pandalanguage$pandac$Type* $tmp477;
    org$pandalanguage$pandac$Type$Kind $tmp480;
    org$pandalanguage$pandac$Position $tmp481;
    org$pandalanguage$pandac$Type* $tmp478 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp480, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp481);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp478, &$s479, $tmp480, $tmp481, ((panda$core$Bit) { true }));
    $tmp477 = $tmp478;
    $tmp476 = $tmp477;
    $returnValue475 = $tmp476;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp476));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp477));
    return $returnValue475;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue483;
    org$pandalanguage$pandac$Type* $tmp484;
    org$pandalanguage$pandac$Type* $tmp485;
    org$pandalanguage$pandac$Type$Kind $tmp488;
    org$pandalanguage$pandac$Position $tmp489;
    org$pandalanguage$pandac$Type* $tmp486 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp488, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp489);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp486, &$s487, $tmp488, $tmp489, ((panda$core$Bit) { true }));
    $tmp485 = $tmp486;
    $tmp484 = $tmp485;
    $returnValue483 = $tmp484;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp484));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
    return $returnValue483;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue491;
    org$pandalanguage$pandac$Type* $tmp492;
    org$pandalanguage$pandac$Type* $tmp493;
    org$pandalanguage$pandac$Type$Kind $tmp496;
    org$pandalanguage$pandac$Position $tmp497;
    org$pandalanguage$pandac$Type* $tmp494 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp496, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp497);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp494, &$s495, $tmp496, $tmp497, ((panda$core$Bit) { true }));
    $tmp493 = $tmp494;
    $tmp492 = $tmp493;
    $returnValue491 = $tmp492;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp492));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp493));
    return $returnValue491;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children502 = NULL;
    panda$collections$Array* $tmp503;
    panda$collections$Array* $tmp504;
    org$pandalanguage$pandac$Type* $tmp506;
    org$pandalanguage$pandac$Type$Kind $tmp509;
    org$pandalanguage$pandac$Position $tmp510;
    org$pandalanguage$pandac$Type* $returnValue511;
    org$pandalanguage$pandac$Type* $tmp512;
    org$pandalanguage$pandac$Type* $tmp513;
    panda$core$String* $tmp515;
    panda$core$String* $tmp516;
    panda$core$String* $tmp517;
    panda$core$String* $tmp518;
    org$pandalanguage$pandac$Type$Kind $tmp526;
    int $tmp501;
    {
        panda$collections$Array* $tmp505 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp505);
        $tmp504 = $tmp505;
        $tmp503 = $tmp504;
        children502 = $tmp503;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp503));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp504));
        org$pandalanguage$pandac$Type* $tmp507 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp509, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp510);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp507, &$s508, $tmp509, $tmp510, ((panda$core$Bit) { true }));
        $tmp506 = $tmp507;
        panda$collections$Array$add$panda$collections$Array$T(children502, ((panda$core$Object*) $tmp506));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
        panda$collections$Array$add$panda$collections$Array$T(children502, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp514 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp520 = panda$core$String$convert$R$panda$core$String(&$s519);
        $tmp518 = $tmp520;
        panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp518, &$s521);
        $tmp517 = $tmp522;
        panda$core$String* $tmp523 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp517, ((panda$core$Object*) p_t));
        $tmp516 = $tmp523;
        panda$core$String* $tmp525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp516, &$s524);
        $tmp515 = $tmp525;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp526, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp514, $tmp515, $tmp526, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children502), p_t->resolved);
        $tmp513 = $tmp514;
        $tmp512 = $tmp513;
        $returnValue511 = $tmp512;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp512));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp513));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp515));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp517));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp518));
        $tmp501 = 0;
        goto $l499;
        $l527:;
        return $returnValue511;
    }
    $l499:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children502));
    children502 = NULL;
    switch ($tmp501) {
        case 0: goto $l527;
    }
    $l529:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children533 = NULL;
    panda$collections$Array* $tmp534;
    panda$collections$Array* $tmp535;
    org$pandalanguage$pandac$Type* $tmp537;
    org$pandalanguage$pandac$Type$Kind $tmp540;
    org$pandalanguage$pandac$Position $tmp541;
    org$pandalanguage$pandac$Type* $returnValue542;
    org$pandalanguage$pandac$Type* $tmp543;
    org$pandalanguage$pandac$Type* $tmp544;
    panda$core$String* $tmp546;
    panda$core$String* $tmp547;
    panda$core$String* $tmp548;
    panda$core$String* $tmp549;
    org$pandalanguage$pandac$Type$Kind $tmp557;
    int $tmp532;
    {
        panda$collections$Array* $tmp536 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp536);
        $tmp535 = $tmp536;
        $tmp534 = $tmp535;
        children533 = $tmp534;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp534));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp535));
        org$pandalanguage$pandac$Type* $tmp538 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp540, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp541);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp538, &$s539, $tmp540, $tmp541, ((panda$core$Bit) { true }));
        $tmp537 = $tmp538;
        panda$collections$Array$add$panda$collections$Array$T(children533, ((panda$core$Object*) $tmp537));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
        panda$collections$Array$add$panda$collections$Array$T(children533, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp545 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp551 = panda$core$String$convert$R$panda$core$String(&$s550);
        $tmp549 = $tmp551;
        panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, &$s552);
        $tmp548 = $tmp553;
        panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp548, ((panda$core$Object*) p_t));
        $tmp547 = $tmp554;
        panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, &$s555);
        $tmp546 = $tmp556;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp557, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp545, $tmp546, $tmp557, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children533), p_t->resolved);
        $tmp544 = $tmp545;
        $tmp543 = $tmp544;
        $returnValue542 = $tmp543;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
        $tmp532 = 0;
        goto $l530;
        $l558:;
        return $returnValue542;
    }
    $l530:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children533));
    children533 = NULL;
    switch ($tmp532) {
        case 0: goto $l558;
    }
    $l560:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children564 = NULL;
    panda$collections$Array* $tmp565;
    panda$collections$Array* $tmp566;
    org$pandalanguage$pandac$Type* $tmp568;
    org$pandalanguage$pandac$Type$Kind $tmp571;
    org$pandalanguage$pandac$Position $tmp572;
    org$pandalanguage$pandac$Type* $tmp573;
    org$pandalanguage$pandac$Type* $tmp576;
    org$pandalanguage$pandac$Type* $tmp578;
    org$pandalanguage$pandac$Type* $tmp581;
    org$pandalanguage$pandac$Type* $tmp583;
    org$pandalanguage$pandac$Type* $tmp586;
    org$pandalanguage$pandac$Type* $tmp588;
    org$pandalanguage$pandac$Type* $returnValue590;
    org$pandalanguage$pandac$Type* $tmp591;
    org$pandalanguage$pandac$Type* $tmp592;
    panda$core$String* $tmp594;
    panda$core$String* $tmp595;
    panda$core$String* $tmp596;
    panda$core$String* $tmp597;
    panda$core$String* $tmp598;
    panda$core$String* $tmp599;
    org$pandalanguage$pandac$Type* $tmp607;
    org$pandalanguage$pandac$Type$Kind $tmp612;
    int $tmp563;
    {
        panda$collections$Array* $tmp567 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp567);
        $tmp566 = $tmp567;
        $tmp565 = $tmp566;
        children564 = $tmp565;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp565));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
        org$pandalanguage$pandac$Type* $tmp569 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp571, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp572);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp569, &$s570, $tmp571, $tmp572, ((panda$core$Bit) { true }));
        $tmp568 = $tmp569;
        panda$collections$Array$add$panda$collections$Array$T(children564, ((panda$core$Object*) $tmp568));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
        panda$collections$Array$add$panda$collections$Array$T(children564, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp574 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp573 = $tmp574;
        panda$core$Bit $tmp575 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp573);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
        if ($tmp575.value) {
        {
            org$pandalanguage$pandac$Type* $tmp577 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp576 = $tmp577;
            panda$collections$Array$add$panda$collections$Array$T(children564, ((panda$core$Object*) $tmp576));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp579 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp578 = $tmp579;
        panda$core$Bit $tmp580 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp578);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp578));
        if ($tmp580.value) {
        {
            org$pandalanguage$pandac$Type* $tmp582 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp581 = $tmp582;
            panda$collections$Array$add$panda$collections$Array$T(children564, ((panda$core$Object*) $tmp581));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp584 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp583 = $tmp584;
        panda$core$Bit $tmp585 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp583);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
        if ($tmp585.value) {
        {
            org$pandalanguage$pandac$Type* $tmp587 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp586 = $tmp587;
            panda$collections$Array$add$panda$collections$Array$T(children564, ((panda$core$Object*) $tmp586));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp586));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp589 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp588 = $tmp589;
            panda$collections$Array$add$panda$collections$Array$T(children564, ((panda$core$Object*) $tmp588));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp588));
        }
        }
        }
        }
        org$pandalanguage$pandac$Type* $tmp593 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp601 = panda$core$String$convert$R$panda$core$String(&$s600);
        $tmp599 = $tmp601;
        panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, &$s602);
        $tmp598 = $tmp603;
        panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp598, ((panda$core$Object*) p_t));
        $tmp597 = $tmp604;
        panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp597, &$s605);
        $tmp596 = $tmp606;
        org$pandalanguage$pandac$Type* $tmp608 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
        $tmp607 = $tmp608;
        panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp596, ((panda$core$Object*) $tmp607));
        $tmp595 = $tmp609;
        panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp595, &$s610);
        $tmp594 = $tmp611;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp612, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp593, $tmp594, $tmp612, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children564), p_t->resolved);
        $tmp592 = $tmp593;
        $tmp591 = $tmp592;
        $returnValue590 = $tmp591;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp591));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp607));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp597));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
        $tmp563 = 0;
        goto $l561;
        $l613:;
        return $returnValue590;
    }
    $l561:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children564));
    children564 = NULL;
    switch ($tmp563) {
        case 0: goto $l613;
    }
    $l615:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue616;
    org$pandalanguage$pandac$Type* $tmp617;
    org$pandalanguage$pandac$Type* $tmp618;
    org$pandalanguage$pandac$Type$Kind $tmp621;
    org$pandalanguage$pandac$Position $tmp622;
    org$pandalanguage$pandac$Type* $tmp619 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp621, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Position$init(&$tmp622);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp619, &$s620, $tmp621, $tmp622, ((panda$core$Bit) { true }));
    $tmp618 = $tmp619;
    $tmp617 = $tmp618;
    $returnValue616 = $tmp617;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
    return $returnValue616;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue624;
    org$pandalanguage$pandac$Type* $tmp625;
    org$pandalanguage$pandac$Type* $tmp626;
    org$pandalanguage$pandac$Type$Kind $tmp629;
    org$pandalanguage$pandac$Position $tmp630;
    org$pandalanguage$pandac$Type* $tmp627 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp629, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Position$init(&$tmp630);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp627, &$s628, $tmp629, $tmp630, ((panda$core$Bit) { true }));
    $tmp626 = $tmp627;
    $tmp625 = $tmp626;
    $returnValue624 = $tmp625;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp625));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp626));
    return $returnValue624;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue632;
    panda$core$Bit $tmp638 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s637);
    bool $tmp636 = $tmp638.value;
    if ($tmp636) goto $l639;
    panda$core$Bit $tmp641 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s640);
    $tmp636 = $tmp641.value;
    $l639:;
    panda$core$Bit $tmp642 = { $tmp636 };
    bool $tmp635 = $tmp642.value;
    if ($tmp635) goto $l643;
    panda$core$Bit $tmp645 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s644);
    $tmp635 = $tmp645.value;
    $l643:;
    panda$core$Bit $tmp646 = { $tmp635 };
    bool $tmp634 = $tmp646.value;
    if ($tmp634) goto $l647;
    panda$core$Bit $tmp648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
    $tmp634 = $tmp648.value;
    $l647:;
    panda$core$Bit $tmp649 = { $tmp634 };
    bool $tmp633 = $tmp649.value;
    if ($tmp633) goto $l650;
    panda$core$Bit $tmp651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
    $tmp633 = $tmp651.value;
    $l650:;
    panda$core$Bit $tmp652 = { $tmp633 };
    $returnValue632 = $tmp652;
    return $returnValue632;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue654;
    panda$core$Bit $tmp658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp657 = $tmp658.value;
    if ($tmp657) goto $l659;
    panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 3 }));
    $tmp657 = $tmp660.value;
    $l659:;
    panda$core$Bit $tmp661 = { $tmp657 };
    bool $tmp656 = $tmp661.value;
    if ($tmp656) goto $l662;
    panda$core$Bit $tmp663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 10 }));
    $tmp656 = $tmp663.value;
    $l662:;
    panda$core$Bit $tmp664 = { $tmp656 };
    bool $tmp655 = $tmp664.value;
    if ($tmp655) goto $l665;
    panda$core$Bit $tmp666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
    $tmp655 = $tmp666.value;
    $l665:;
    panda$core$Bit $tmp667 = { $tmp655 };
    $returnValue654 = $tmp667;
    return $returnValue654;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue669;
    panda$core$Bit $tmp671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
    bool $tmp670 = $tmp671.value;
    if ($tmp670) goto $l672;
    panda$core$Bit $tmp674 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s673);
    $tmp670 = $tmp674.value;
    $l672:;
    panda$core$Bit $tmp675 = { $tmp670 };
    $returnValue669 = $tmp675;
    return $returnValue669;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue677;
    panda$core$Bit $tmp679 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s678);
    $returnValue677 = $tmp679;
    return $returnValue677;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue681;
    panda$core$Bit $tmp683 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp682 = $tmp683.value;
    if ($tmp682) goto $l684;
    panda$core$Bit $tmp685 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp682 = $tmp685.value;
    $l684:;
    panda$core$Bit $tmp686 = { $tmp682 };
    $returnValue681 = $tmp686;
    return $returnValue681;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$396_9688;
    panda$core$Bit $returnValue702;
    {
        $match$396_9688 = self->typeKind;
        panda$core$Bit $tmp692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$396_9688.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp691 = $tmp692.value;
        if ($tmp691) goto $l693;
        panda$core$Bit $tmp694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$396_9688.$rawValue, ((panda$core$Int64) { 1 }));
        $tmp691 = $tmp694.value;
        $l693:;
        panda$core$Bit $tmp695 = { $tmp691 };
        bool $tmp690 = $tmp695.value;
        if ($tmp690) goto $l696;
        panda$core$Bit $tmp697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$396_9688.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp690 = $tmp697.value;
        $l696:;
        panda$core$Bit $tmp698 = { $tmp690 };
        bool $tmp689 = $tmp698.value;
        if ($tmp689) goto $l699;
        panda$core$Bit $tmp700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$396_9688.$rawValue, ((panda$core$Int64) { 12 }));
        $tmp689 = $tmp700.value;
        $l699:;
        panda$core$Bit $tmp701 = { $tmp689 };
        if ($tmp701.value) {
        {
            $returnValue702 = ((panda$core$Bit) { true });
            return $returnValue702;
        }
        }
        else {
        {
            $returnValue702 = ((panda$core$Bit) { false });
            return $returnValue702;
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue705;
    panda$core$Bit $tmp707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 15 }));
    bool $tmp706 = $tmp707.value;
    if ($tmp706) goto $l708;
    panda$core$Bit $tmp709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 14 }));
    $tmp706 = $tmp709.value;
    $l708:;
    panda$core$Bit $tmp710 = { $tmp706 };
    $returnValue705 = $tmp710;
    return $returnValue705;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue712;
    panda$core$Bit $tmp714 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s713);
    $returnValue712 = $tmp714;
    return $returnValue712;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue717;
    panda$core$Object* $tmp718;
    panda$core$Object* $tmp725;
    panda$core$Bit $tmp716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp716.value) {
    {
        panda$core$Object* $tmp719 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp718 = $tmp719;
        panda$core$Bit $tmp720 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp718));
        $returnValue717 = $tmp720;
        panda$core$Panda$unref$panda$core$Object($tmp718);
        return $returnValue717;
    }
    }
    panda$core$Bit $tmp723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp722 = $tmp723.value;
    if (!$tmp722) goto $l724;
    panda$core$Object* $tmp726 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp725 = $tmp726;
    panda$core$Bit $tmp728 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp725))->name, &$s727);
    $tmp722 = $tmp728.value;
    panda$core$Panda$unref$panda$core$Object($tmp725);
    $l724:;
    panda$core$Bit $tmp729 = { $tmp722 };
    $returnValue717 = $tmp729;
    return $returnValue717;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue732;
    panda$core$Object* $tmp733;
    panda$core$Object* $tmp740;
    panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp731.value) {
    {
        panda$core$Object* $tmp734 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp733 = $tmp734;
        panda$core$Bit $tmp735 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp733));
        $returnValue732 = $tmp735;
        panda$core$Panda$unref$panda$core$Object($tmp733);
        return $returnValue732;
    }
    }
    panda$core$Bit $tmp738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp737 = $tmp738.value;
    if (!$tmp737) goto $l739;
    panda$core$Object* $tmp741 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp740 = $tmp741;
    panda$core$Bit $tmp743 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp740))->name, &$s742);
    $tmp737 = $tmp743.value;
    panda$core$Panda$unref$panda$core$Object($tmp740);
    $l739:;
    panda$core$Bit $tmp744 = { $tmp737 };
    $returnValue732 = $tmp744;
    return $returnValue732;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue750;
    org$pandalanguage$pandac$Type* $tmp751;
    panda$collections$Array* subtypes754 = NULL;
    panda$collections$Array* $tmp755;
    panda$collections$Array* $tmp756;
    org$pandalanguage$pandac$Type* $tmp758;
    org$pandalanguage$pandac$Type* $tmp759;
    panda$core$String* $tmp761;
    panda$core$String* $tmp762;
    org$pandalanguage$pandac$Type$Kind $tmp766;
    org$pandalanguage$pandac$Position $tmp767;
    int $tmp748;
    {
        panda$core$Bit $tmp749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp749.value) {
        {
            $tmp751 = self;
            $returnValue750 = $tmp751;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp751));
            $tmp748 = 0;
            goto $l746;
            $l752:;
            return $returnValue750;
        }
        }
        panda$collections$Array* $tmp757 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp757);
        $tmp756 = $tmp757;
        $tmp755 = $tmp756;
        subtypes754 = $tmp755;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp755));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp756));
        panda$collections$Array$add$panda$collections$Array$T(subtypes754, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp760 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp763 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp762 = $tmp763;
        panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp762, &$s764);
        $tmp761 = $tmp765;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp766, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Position$init(&$tmp767);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp760, $tmp761, $tmp766, $tmp767, ((panda$collections$ListView*) subtypes754), ((panda$core$Bit) { true }));
        $tmp759 = $tmp760;
        $tmp758 = $tmp759;
        $returnValue750 = $tmp758;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp758));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp759));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp761));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
        $tmp748 = 1;
        goto $l746;
        $l768:;
        return $returnValue750;
    }
    $l746:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes754));
    subtypes754 = NULL;
    switch ($tmp748) {
        case 0: goto $l752;
        case 1: goto $l768;
    }
    $l770:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue772;
    org$pandalanguage$pandac$Type* $tmp773;
    org$pandalanguage$pandac$Type* $tmp775;
    panda$core$Object* $tmp776;
    panda$core$Bit $tmp771 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp771.value) {
    {
        $tmp773 = self;
        $returnValue772 = $tmp773;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp773));
        return $returnValue772;
    }
    }
    panda$core$Object* $tmp777 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp776 = $tmp777;
    $tmp775 = ((org$pandalanguage$pandac$Type*) $tmp776);
    $returnValue772 = $tmp775;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp775));
    panda$core$Panda$unref$panda$core$Object($tmp776);
    return $returnValue772;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $returnValue783;
    org$pandalanguage$pandac$Type* $tmp784;
    org$pandalanguage$pandac$Type* $tmp787;
    org$pandalanguage$pandac$Type* $tmp791;
    org$pandalanguage$pandac$Type* $tmp794;
    org$pandalanguage$pandac$Type* $tmp795;
    org$pandalanguage$pandac$Type* $tmp799;
    org$pandalanguage$pandac$Type* $tmp803;
    org$pandalanguage$pandac$Type* $tmp806;
    org$pandalanguage$pandac$Type* $tmp807;
    org$pandalanguage$pandac$Type* $tmp816;
    org$pandalanguage$pandac$Type* $tmp824;
    org$pandalanguage$pandac$Type* $tmp833;
    org$pandalanguage$pandac$Type* $tmp839;
    org$pandalanguage$pandac$Type* $tmp840;
    org$pandalanguage$pandac$Type* $tmp844;
    org$pandalanguage$pandac$Type* $tmp845;
    org$pandalanguage$pandac$Type* $tmp855;
    org$pandalanguage$pandac$Type* $tmp861;
    org$pandalanguage$pandac$Type* $tmp862;
    org$pandalanguage$pandac$Type* $tmp866;
    org$pandalanguage$pandac$Type* $tmp867;
    org$pandalanguage$pandac$Type* $tmp872;
    org$pandalanguage$pandac$Type* $tmp873;
    org$pandalanguage$pandac$Type* $tmp874;
    panda$core$Object* $tmp875;
    org$pandalanguage$pandac$Type* $tmp882;
    org$pandalanguage$pandac$Type* $tmp883;
    org$pandalanguage$pandac$Type* $tmp884;
    panda$core$Object* $tmp885;
    org$pandalanguage$pandac$Type* t1891 = NULL;
    org$pandalanguage$pandac$Type* $tmp892;
    org$pandalanguage$pandac$Type* $tmp893;
    org$pandalanguage$pandac$Type* t2895 = NULL;
    org$pandalanguage$pandac$Type* $tmp896;
    org$pandalanguage$pandac$Type* $tmp897;
    panda$collections$Set* ancestors907 = NULL;
    panda$collections$Set* $tmp908;
    panda$collections$Set* $tmp909;
    org$pandalanguage$pandac$Type* t911 = NULL;
    org$pandalanguage$pandac$Type* $tmp912;
    org$pandalanguage$pandac$ClassDecl* cl913 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp914;
    org$pandalanguage$pandac$ClassDecl* $tmp915;
    org$pandalanguage$pandac$Type* $tmp920;
    org$pandalanguage$pandac$Type* $tmp921;
    org$pandalanguage$pandac$Type* $tmp922;
    org$pandalanguage$pandac$ClassDecl* $tmp924;
    org$pandalanguage$pandac$ClassDecl* $tmp925;
    org$pandalanguage$pandac$ClassDecl* $tmp926;
    org$pandalanguage$pandac$ClassDecl* $tmp928;
    org$pandalanguage$pandac$ClassDecl* $tmp929;
    org$pandalanguage$pandac$Type* $tmp930;
    org$pandalanguage$pandac$Type* $tmp931;
    org$pandalanguage$pandac$ClassDecl* $tmp932;
    org$pandalanguage$pandac$ClassDecl* $tmp933;
    org$pandalanguage$pandac$ClassDecl* $tmp934;
    org$pandalanguage$pandac$Type* $tmp940;
    org$pandalanguage$pandac$Type* $tmp944;
    org$pandalanguage$pandac$Type* $tmp945;
    org$pandalanguage$pandac$Type* $tmp946;
    org$pandalanguage$pandac$ClassDecl* $tmp948;
    org$pandalanguage$pandac$ClassDecl* $tmp949;
    org$pandalanguage$pandac$ClassDecl* $tmp950;
    org$pandalanguage$pandac$ClassDecl* $tmp952;
    org$pandalanguage$pandac$ClassDecl* $tmp953;
    org$pandalanguage$pandac$Type* $tmp955;
    org$pandalanguage$pandac$Type* $tmp956;
    int $tmp781;
    {
        panda$core$Bit $tmp782 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp782.value) {
        {
            $tmp784 = self;
            $returnValue783 = $tmp784;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp784));
            $tmp781 = 0;
            goto $l779;
            $l785:;
            return $returnValue783;
        }
        }
        org$pandalanguage$pandac$Type* $tmp788 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp787 = $tmp788;
        panda$core$Bit $tmp789 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp787);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp787));
        if ($tmp789.value) {
        {
            panda$core$Bit $tmp790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp790.value) {
            {
                $tmp791 = p_other;
                $returnValue783 = $tmp791;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp791));
                $tmp781 = 1;
                goto $l779;
                $l792:;
                return $returnValue783;
            }
            }
            org$pandalanguage$pandac$Type* $tmp796 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp795 = $tmp796;
            $tmp794 = $tmp795;
            $returnValue783 = $tmp794;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp794));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp795));
            $tmp781 = 2;
            goto $l779;
            $l797:;
            return $returnValue783;
        }
        }
        org$pandalanguage$pandac$Type* $tmp800 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp799 = $tmp800;
        panda$core$Bit $tmp801 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp799);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
        if ($tmp801.value) {
        {
            panda$core$Bit $tmp802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp802.value) {
            {
                $tmp803 = self;
                $returnValue783 = $tmp803;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp803));
                $tmp781 = 3;
                goto $l779;
                $l804:;
                return $returnValue783;
            }
            }
            org$pandalanguage$pandac$Type* $tmp808 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp807 = $tmp808;
            $tmp806 = $tmp807;
            $returnValue783 = $tmp806;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp806));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp807));
            $tmp781 = 4;
            goto $l779;
            $l809:;
            return $returnValue783;
        }
        }
        panda$core$Bit $tmp812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        bool $tmp811 = $tmp812.value;
        if (!$tmp811) goto $l813;
        panda$core$Bit $tmp814 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp811 = $tmp814.value;
        $l813:;
        panda$core$Bit $tmp815 = { $tmp811 };
        if ($tmp815.value) {
        {
            $tmp816 = p_other;
            $returnValue783 = $tmp816;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp816));
            $tmp781 = 5;
            goto $l779;
            $l817:;
            return $returnValue783;
        }
        }
        panda$core$Bit $tmp820 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp819 = $tmp820.value;
        if (!$tmp819) goto $l821;
        panda$core$Bit $tmp822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        $tmp819 = $tmp822.value;
        $l821:;
        panda$core$Bit $tmp823 = { $tmp819 };
        if ($tmp823.value) {
        {
            $tmp824 = self;
            $returnValue783 = $tmp824;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp824));
            $tmp781 = 6;
            goto $l779;
            $l825:;
            return $returnValue783;
        }
        }
        panda$core$Bit $tmp827 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp827.value) {
        {
            panda$core$Bit $tmp829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp828 = $tmp829.value;
            if ($tmp828) goto $l830;
            panda$core$Bit $tmp831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
            $tmp828 = $tmp831.value;
            $l830:;
            panda$core$Bit $tmp832 = { $tmp828 };
            if ($tmp832.value) {
            {
                $tmp833 = self;
                $returnValue783 = $tmp833;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp833));
                $tmp781 = 7;
                goto $l779;
                $l834:;
                return $returnValue783;
            }
            }
            panda$core$Bit $tmp836 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp836.value) {
            {
                panda$core$Bit $tmp838 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s837);
                if ($tmp838.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp841 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp840 = $tmp841;
                    $tmp839 = $tmp840;
                    $returnValue783 = $tmp839;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp839));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp840));
                    $tmp781 = 8;
                    goto $l779;
                    $l842:;
                    return $returnValue783;
                }
                }
                org$pandalanguage$pandac$Type* $tmp846 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp845 = $tmp846;
                $tmp844 = $tmp845;
                $returnValue783 = $tmp844;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp844));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp845));
                $tmp781 = 9;
                goto $l779;
                $l847:;
                return $returnValue783;
            }
            }
        }
        }
        panda$core$Bit $tmp849 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp849.value) {
        {
            panda$core$Bit $tmp851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp850 = $tmp851.value;
            if ($tmp850) goto $l852;
            panda$core$Bit $tmp853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
            $tmp850 = $tmp853.value;
            $l852:;
            panda$core$Bit $tmp854 = { $tmp850 };
            if ($tmp854.value) {
            {
                $tmp855 = p_other;
                $returnValue783 = $tmp855;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp855));
                $tmp781 = 10;
                goto $l779;
                $l856:;
                return $returnValue783;
            }
            }
            panda$core$Bit $tmp858 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp858.value) {
            {
                panda$core$Bit $tmp860 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s859);
                if ($tmp860.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp863 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp862 = $tmp863;
                    $tmp861 = $tmp862;
                    $returnValue783 = $tmp861;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp861));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp862));
                    $tmp781 = 11;
                    goto $l779;
                    $l864:;
                    return $returnValue783;
                }
                }
                org$pandalanguage$pandac$Type* $tmp868 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp867 = $tmp868;
                $tmp866 = $tmp867;
                $returnValue783 = $tmp866;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp866));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp867));
                $tmp781 = 12;
                goto $l779;
                $l869:;
                return $returnValue783;
            }
            }
        }
        }
        panda$core$Bit $tmp871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp871.value) {
        {
            panda$core$Object* $tmp876 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp875 = $tmp876;
            org$pandalanguage$pandac$Type* $tmp877 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp875), p_compiler, p_other);
            $tmp874 = $tmp877;
            org$pandalanguage$pandac$Type* $tmp878 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp874);
            $tmp873 = $tmp878;
            $tmp872 = $tmp873;
            $returnValue783 = $tmp872;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp872));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp873));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp874));
            panda$core$Panda$unref$panda$core$Object($tmp875);
            $tmp781 = 13;
            goto $l779;
            $l879:;
            return $returnValue783;
        }
        }
        panda$core$Bit $tmp881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp881.value) {
        {
            panda$core$Object* $tmp886 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
            $tmp885 = $tmp886;
            org$pandalanguage$pandac$Type* $tmp887 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp885));
            $tmp884 = $tmp887;
            org$pandalanguage$pandac$Type* $tmp888 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp884);
            $tmp883 = $tmp888;
            $tmp882 = $tmp883;
            $returnValue783 = $tmp882;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp882));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp883));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp884));
            panda$core$Panda$unref$panda$core$Object($tmp885);
            $tmp781 = 14;
            goto $l779;
            $l889:;
            return $returnValue783;
        }
        }
        org$pandalanguage$pandac$Type* $tmp894 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp893 = $tmp894;
        $tmp892 = $tmp893;
        t1891 = $tmp892;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp892));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp893));
        org$pandalanguage$pandac$Type* $tmp898 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp897 = $tmp898;
        $tmp896 = $tmp897;
        t2895 = $tmp896;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp896));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp897));
        panda$core$Bit $tmp900 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t1891);
        bool $tmp899 = $tmp900.value;
        if (!$tmp899) goto $l901;
        panda$core$Bit $tmp902 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t2895);
        $tmp899 = $tmp902.value;
        $l901:;
        panda$core$Bit $tmp903 = { $tmp899 };
        if ($tmp903.value) {
        {
            int $tmp906;
            {
                panda$collections$Set* $tmp910 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
                panda$collections$Set$init($tmp910);
                $tmp909 = $tmp910;
                $tmp908 = $tmp909;
                ancestors907 = $tmp908;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp908));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
                $tmp912 = self;
                t911 = $tmp912;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp912));
                org$pandalanguage$pandac$ClassDecl* $tmp916 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1891);
                $tmp915 = $tmp916;
                $tmp914 = $tmp915;
                cl913 = $tmp914;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp914));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp915));
                $l917:;
                bool $tmp919 = ((panda$core$Bit) { cl913 != NULL }).value;
                if (!$tmp919) goto $l918;
                {
                    panda$collections$Set$add$panda$collections$Set$T(ancestors907, ((panda$collections$Key*) t911));
                    if (((panda$core$Bit) { cl913->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp920 = t911;
                            org$pandalanguage$pandac$Type* $tmp923 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t911, cl913->rawSuper);
                            $tmp922 = $tmp923;
                            $tmp921 = $tmp922;
                            t911 = $tmp921;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp921));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp922));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp920));
                        }
                        {
                            $tmp924 = cl913;
                            org$pandalanguage$pandac$ClassDecl* $tmp927 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t911);
                            $tmp926 = $tmp927;
                            $tmp925 = $tmp926;
                            cl913 = $tmp925;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp925));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp926));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp924));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp928 = cl913;
                            $tmp929 = NULL;
                            cl913 = $tmp929;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp929));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp928));
                        }
                    }
                    }
                }
                goto $l917;
                $l918:;
                {
                    $tmp930 = t911;
                    $tmp931 = p_other;
                    t911 = $tmp931;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp931));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp930));
                }
                {
                    $tmp932 = cl913;
                    org$pandalanguage$pandac$ClassDecl* $tmp935 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t2895);
                    $tmp934 = $tmp935;
                    $tmp933 = $tmp934;
                    cl913 = $tmp933;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp933));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp934));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp932));
                }
                $l936:;
                bool $tmp938 = ((panda$core$Bit) { cl913 != NULL }).value;
                if (!$tmp938) goto $l937;
                {
                    panda$core$Bit $tmp939 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors907, ((panda$collections$Key*) t911));
                    if ($tmp939.value) {
                    {
                        $tmp940 = t911;
                        $returnValue783 = $tmp940;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp940));
                        $tmp906 = 0;
                        goto $l904;
                        $l941:;
                        $tmp781 = 15;
                        goto $l779;
                        $l942:;
                        return $returnValue783;
                    }
                    }
                    if (((panda$core$Bit) { cl913->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp944 = t911;
                            org$pandalanguage$pandac$Type* $tmp947 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t911, cl913->rawSuper);
                            $tmp946 = $tmp947;
                            $tmp945 = $tmp946;
                            t911 = $tmp945;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp945));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp946));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp944));
                        }
                        {
                            $tmp948 = cl913;
                            org$pandalanguage$pandac$ClassDecl* $tmp951 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t911);
                            $tmp950 = $tmp951;
                            $tmp949 = $tmp950;
                            cl913 = $tmp949;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp949));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp950));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp948));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp952 = cl913;
                            $tmp953 = NULL;
                            cl913 = $tmp953;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp953));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp952));
                        }
                    }
                    }
                }
                goto $l936;
                $l937:;
            }
            $tmp906 = -1;
            goto $l904;
            $l904:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors907));
            ancestors907 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t911));
            t911 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl913));
            cl913 = NULL;
            switch ($tmp906) {
                case 0: goto $l941;
                case -1: goto $l954;
            }
            $l954:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp957 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp956 = $tmp957;
        $tmp955 = $tmp956;
        $returnValue783 = $tmp955;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp955));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp956));
        $tmp781 = 16;
        goto $l779;
        $l958:;
        return $returnValue783;
    }
    $l779:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1891));
    t1891 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2895));
    t2895 = NULL;
    switch ($tmp781) {
        case 2: goto $l797;
        case 16: goto $l958;
        case 12: goto $l869;
        case 1: goto $l792;
        case 3: goto $l804;
        case 4: goto $l809;
        case 7: goto $l834;
        case 6: goto $l825;
        case 15: goto $l942;
        case 5: goto $l817;
        case 13: goto $l879;
        case 9: goto $l847;
        case 10: goto $l856;
        case 8: goto $l842;
        case 0: goto $l785;
        case 11: goto $l864;
        case 14: goto $l889;
    }
    $l960:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* $returnValue963;
    org$pandalanguage$pandac$Type* $tmp964;
    org$pandalanguage$pandac$Type$Kind $match$531_9966;
    org$pandalanguage$pandac$Type* found971 = NULL;
    org$pandalanguage$pandac$Type* $tmp972;
    panda$core$Object* $tmp973;
    org$pandalanguage$pandac$Type* $tmp975;
    org$pandalanguage$pandac$Type* $tmp978;
    org$pandalanguage$pandac$Type* base986 = NULL;
    org$pandalanguage$pandac$Type* $tmp987;
    org$pandalanguage$pandac$Type* $tmp988;
    panda$core$Object* $tmp989;
    panda$collections$Array* remappedArgs992 = NULL;
    panda$collections$Array* $tmp993;
    panda$collections$Array* $tmp994;
    panda$core$Range$LTpanda$core$Int64$GT $tmp996;
    org$pandalanguage$pandac$Type* $tmp1011;
    panda$core$Object* $tmp1012;
    org$pandalanguage$pandac$Type* $tmp1021;
    org$pandalanguage$pandac$Type* $tmp1022;
    org$pandalanguage$pandac$Type* $tmp1028;
    org$pandalanguage$pandac$Type* $tmp1029;
    org$pandalanguage$pandac$Type* $tmp1030;
    panda$core$Object* $tmp1031;
    panda$collections$Array* remapped1044 = NULL;
    panda$collections$Array* $tmp1045;
    panda$collections$Array* $tmp1046;
    panda$core$MutableString* name1048 = NULL;
    panda$core$MutableString* $tmp1049;
    panda$core$MutableString* $tmp1050;
    panda$core$String* separator1053 = NULL;
    panda$core$String* $tmp1054;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1058;
    org$pandalanguage$pandac$Type* child1077 = NULL;
    org$pandalanguage$pandac$Type* $tmp1078;
    org$pandalanguage$pandac$Type* $tmp1079;
    panda$core$Object* $tmp1080;
    panda$core$String* $tmp1083;
    panda$core$String* $tmp1084;
    panda$core$Object* $tmp1096;
    org$pandalanguage$pandac$Type* $tmp1100;
    org$pandalanguage$pandac$Type* child1106 = NULL;
    org$pandalanguage$pandac$Type* $tmp1107;
    org$pandalanguage$pandac$Type* $tmp1108;
    panda$core$Object* $tmp1109;
    org$pandalanguage$pandac$Type* $tmp1115;
    panda$core$Char8 $tmp1117;
    org$pandalanguage$pandac$Type* $tmp1118;
    org$pandalanguage$pandac$Type* $tmp1119;
    panda$core$String* $tmp1121;
    org$pandalanguage$pandac$Type* $tmp1126;
    panda$core$Int64 $tmp961 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp961, ((panda$core$Int64) { 0 }));
    if ($tmp962.value) {
    {
        $tmp964 = self;
        $returnValue963 = $tmp964;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp964));
        return $returnValue963;
    }
    }
    {
        $match$531_9966 = self->typeKind;
        panda$core$Bit $tmp967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$531_9966.$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp967.value) {
        {
            int $tmp970;
            {
                panda$core$Object* $tmp974 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                $tmp973 = $tmp974;
                $tmp972 = ((org$pandalanguage$pandac$Type*) $tmp973);
                found971 = $tmp972;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp972));
                panda$core$Panda$unref$panda$core$Object($tmp973);
                if (((panda$core$Bit) { found971 != NULL }).value) {
                {
                    $tmp975 = found971;
                    $returnValue963 = $tmp975;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp975));
                    $tmp970 = 0;
                    goto $l968;
                    $l976:;
                    return $returnValue963;
                }
                }
                $tmp978 = self;
                $returnValue963 = $tmp978;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp978));
                $tmp970 = 1;
                goto $l968;
                $l979:;
                return $returnValue963;
            }
            $l968:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found971));
            found971 = NULL;
            switch ($tmp970) {
                case 1: goto $l979;
                case 0: goto $l976;
            }
            $l981:;
        }
        }
        else {
        panda$core$Bit $tmp982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$531_9966.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp982.value) {
        {
            int $tmp985;
            {
                panda$core$Object* $tmp990 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
                $tmp989 = $tmp990;
                org$pandalanguage$pandac$Type* $tmp991 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp989), p_types);
                $tmp988 = $tmp991;
                $tmp987 = $tmp988;
                base986 = $tmp987;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp987));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp988));
                panda$core$Panda$unref$panda$core$Object($tmp989);
                panda$collections$Array* $tmp995 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp995);
                $tmp994 = $tmp995;
                $tmp993 = $tmp994;
                remappedArgs992 = $tmp993;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp993));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp994));
                panda$core$Int64 $tmp997 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp996, ((panda$core$Int64) { 1 }), $tmp997, ((panda$core$Bit) { false }));
                int64_t $tmp999 = $tmp996.min.value;
                panda$core$Int64 i998 = { $tmp999 };
                int64_t $tmp1001 = $tmp996.max.value;
                bool $tmp1002 = $tmp996.inclusive.value;
                if ($tmp1002) goto $l1009; else goto $l1010;
                $l1009:;
                if ($tmp999 <= $tmp1001) goto $l1003; else goto $l1005;
                $l1010:;
                if ($tmp999 < $tmp1001) goto $l1003; else goto $l1005;
                $l1003:;
                {
                    panda$core$Object* $tmp1013 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i998);
                    $tmp1012 = $tmp1013;
                    org$pandalanguage$pandac$Type* $tmp1014 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1012), p_types);
                    $tmp1011 = $tmp1014;
                    panda$collections$Array$add$panda$collections$Array$T(remappedArgs992, ((panda$core$Object*) $tmp1011));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1011));
                    panda$core$Panda$unref$panda$core$Object($tmp1012);
                }
                $l1006:;
                int64_t $tmp1016 = $tmp1001 - i998.value;
                if ($tmp1002) goto $l1017; else goto $l1018;
                $l1017:;
                if ((uint64_t) $tmp1016 >= 1) goto $l1015; else goto $l1005;
                $l1018:;
                if ((uint64_t) $tmp1016 > 1) goto $l1015; else goto $l1005;
                $l1015:;
                i998.value += 1;
                goto $l1003;
                $l1005:;
                org$pandalanguage$pandac$Type* $tmp1023 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base986, ((panda$collections$ListView*) remappedArgs992));
                $tmp1022 = $tmp1023;
                $tmp1021 = $tmp1022;
                $returnValue963 = $tmp1021;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1021));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1022));
                $tmp985 = 0;
                goto $l983;
                $l1024:;
                return $returnValue963;
            }
            $l983:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base986));
            base986 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remappedArgs992));
            remappedArgs992 = NULL;
            switch ($tmp985) {
                case 0: goto $l1024;
            }
            $l1026:;
        }
        }
        else {
        panda$core$Bit $tmp1027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$531_9966.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1027.value) {
        {
            panda$core$Object* $tmp1032 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1031 = $tmp1032;
            org$pandalanguage$pandac$Type* $tmp1033 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1031), p_types);
            $tmp1030 = $tmp1033;
            org$pandalanguage$pandac$Type* $tmp1034 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1030);
            $tmp1029 = $tmp1034;
            $tmp1028 = $tmp1029;
            $returnValue963 = $tmp1028;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1028));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1029));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1030));
            panda$core$Panda$unref$panda$core$Object($tmp1031);
            return $returnValue963;
        }
        }
        else {
        panda$core$Bit $tmp1037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$531_9966.$rawValue, ((panda$core$Int64) { 15 }));
        bool $tmp1036 = $tmp1037.value;
        if ($tmp1036) goto $l1038;
        panda$core$Bit $tmp1039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$531_9966.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp1036 = $tmp1039.value;
        $l1038:;
        panda$core$Bit $tmp1040 = { $tmp1036 };
        if ($tmp1040.value) {
        {
            int $tmp1043;
            {
                panda$collections$Array* $tmp1047 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1047);
                $tmp1046 = $tmp1047;
                $tmp1045 = $tmp1046;
                remapped1044 = $tmp1045;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1045));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1046));
                panda$core$MutableString* $tmp1051 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1051, &$s1052);
                $tmp1050 = $tmp1051;
                $tmp1049 = $tmp1050;
                name1048 = $tmp1049;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1049));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1050));
                $tmp1054 = &$s1055;
                separator1053 = $tmp1054;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1054));
                panda$core$Int64 $tmp1056 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Bit $tmp1057 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1056, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1057.value);
                panda$core$Int64 $tmp1059 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1060 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1059, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1058, ((panda$core$Int64) { 0 }), $tmp1060, ((panda$core$Bit) { false }));
                int64_t $tmp1062 = $tmp1058.min.value;
                panda$core$Int64 i1061 = { $tmp1062 };
                int64_t $tmp1064 = $tmp1058.max.value;
                bool $tmp1065 = $tmp1058.inclusive.value;
                if ($tmp1065) goto $l1072; else goto $l1073;
                $l1072:;
                if ($tmp1062 <= $tmp1064) goto $l1066; else goto $l1068;
                $l1073:;
                if ($tmp1062 < $tmp1064) goto $l1066; else goto $l1068;
                $l1066:;
                {
                    int $tmp1076;
                    {
                        panda$core$Object* $tmp1081 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1061);
                        $tmp1080 = $tmp1081;
                        org$pandalanguage$pandac$Type* $tmp1082 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1080), p_types);
                        $tmp1079 = $tmp1082;
                        $tmp1078 = $tmp1079;
                        child1077 = $tmp1078;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1078));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1079));
                        panda$core$Panda$unref$panda$core$Object($tmp1080);
                        panda$core$MutableString$append$panda$core$String(name1048, separator1053);
                        panda$core$MutableString$append$panda$core$String(name1048, ((org$pandalanguage$pandac$Symbol*) child1077)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1044, ((panda$core$Object*) child1077));
                        {
                            $tmp1083 = separator1053;
                            $tmp1084 = &$s1085;
                            separator1053 = $tmp1084;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1084));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1083));
                        }
                    }
                    $tmp1076 = -1;
                    goto $l1074;
                    $l1074:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1077));
                    child1077 = NULL;
                    switch ($tmp1076) {
                        case -1: goto $l1086;
                    }
                    $l1086:;
                }
                $l1069:;
                int64_t $tmp1088 = $tmp1064 - i1061.value;
                if ($tmp1065) goto $l1089; else goto $l1090;
                $l1089:;
                if ((uint64_t) $tmp1088 >= 1) goto $l1087; else goto $l1068;
                $l1090:;
                if ((uint64_t) $tmp1088 > 1) goto $l1087; else goto $l1068;
                $l1087:;
                i1061.value += 1;
                goto $l1066;
                $l1068:;
                panda$core$Bit $tmp1093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 14 }));
                if ($tmp1093.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name1048, &$s1094);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(name1048, &$s1095);
                }
                }
                panda$core$Int64 $tmp1097 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1098 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1097, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1099 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1098);
                $tmp1096 = $tmp1099;
                org$pandalanguage$pandac$Type* $tmp1101 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1100 = $tmp1101;
                panda$core$Bit $tmp1102 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1096), $tmp1100);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1100));
                panda$core$Panda$unref$panda$core$Object($tmp1096);
                if ($tmp1102.value) {
                {
                    int $tmp1105;
                    {
                        panda$core$Int64 $tmp1110 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                        panda$core$Int64 $tmp1111 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1110, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1112 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1111);
                        $tmp1109 = $tmp1112;
                        org$pandalanguage$pandac$Type* $tmp1113 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1109), p_types);
                        $tmp1108 = $tmp1113;
                        $tmp1107 = $tmp1108;
                        child1106 = $tmp1107;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1107));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1108));
                        panda$core$Panda$unref$panda$core$Object($tmp1109);
                        panda$core$MutableString$append$panda$core$String(name1048, ((org$pandalanguage$pandac$Symbol*) child1106)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1044, ((panda$core$Object*) child1106));
                    }
                    $tmp1105 = -1;
                    goto $l1103;
                    $l1103:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1106));
                    child1106 = NULL;
                    switch ($tmp1105) {
                        case -1: goto $l1114;
                    }
                    $l1114:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1116 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                    $tmp1115 = $tmp1116;
                    panda$collections$Array$add$panda$collections$Array$T(remapped1044, ((panda$core$Object*) $tmp1115));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1115));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1117, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(name1048, $tmp1117);
                org$pandalanguage$pandac$Type* $tmp1120 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp1122 = panda$core$MutableString$finish$R$panda$core$String(name1048);
                $tmp1121 = $tmp1122;
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1120, $tmp1121, self->typeKind, self->position, ((panda$collections$ListView*) remapped1044), self->resolved);
                $tmp1119 = $tmp1120;
                $tmp1118 = $tmp1119;
                $returnValue963 = $tmp1118;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1118));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1119));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1121));
                $tmp1043 = 0;
                goto $l1041;
                $l1123:;
                return $returnValue963;
            }
            $l1041:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped1044));
            remapped1044 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1048));
            name1048 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1053));
            separator1053 = NULL;
            switch ($tmp1043) {
                case 0: goto $l1123;
            }
            $l1125:;
        }
        }
        else {
        {
            $tmp1126 = self;
            $returnValue963 = $tmp1126;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1126));
            return $returnValue963;
        }
        }
        }
        }
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue1128;
    panda$core$Int64 $tmp1129 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $returnValue1128 = $tmp1129;
    return $returnValue1128;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $returnValue1131;
    panda$core$String* $tmp1132;
    $tmp1132 = self->name;
    $returnValue1131 = $tmp1132;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1132));
    return $returnValue1131;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1136;
    {
    }
    $tmp1136 = -1;
    goto $l1134;
    $l1134:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1136) {
        case -1: goto $l1137;
    }
    $l1137:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

