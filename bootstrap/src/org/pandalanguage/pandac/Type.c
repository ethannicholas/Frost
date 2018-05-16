#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
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
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };

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
    org$pandalanguage$pandac$Type* $finallyReturn150;
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
        $finallyReturn150 = $tmp152;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp158));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
        $tmp100 = 0;
        goto $l98;
        $l160:;
        return $finallyReturn150;
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
    panda$core$Int64 $finallyReturn171;
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
    $finallyReturn171 = self->position.line;
    return $finallyReturn171;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $finallyReturn173;
    panda$core$Bit $tmp175 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $finallyReturn173 = $tmp175;
    return $finallyReturn173;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $finallyReturn176;
    panda$core$Bit $tmp178 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $finallyReturn176 = $tmp178;
    return $finallyReturn176;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn179;
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
    $finallyReturn179 = $tmp181;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
    return $finallyReturn179;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn187;
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
    $finallyReturn187 = $tmp189;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
    return $finallyReturn187;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn195;
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
    $finallyReturn195 = $tmp197;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
    return $finallyReturn195;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes207 = NULL;
    panda$collections$Array* $tmp208;
    panda$collections$Array* $tmp209;
    org$pandalanguage$pandac$Type* $tmp211;
    org$pandalanguage$pandac$Type* $finallyReturn212;
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
        $finallyReturn212 = $tmp214;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
        $tmp206 = 0;
        goto $l204;
        $l220:;
        return $finallyReturn212;
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
    org$pandalanguage$pandac$Type* $finallyReturn222;
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
    $finallyReturn222 = $tmp224;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp224));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
    return $finallyReturn222;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn230;
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
    $finallyReturn230 = $tmp232;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp233));
    return $finallyReturn230;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn238;
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
    $finallyReturn238 = $tmp240;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp240));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
    return $finallyReturn238;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn246;
    org$pandalanguage$pandac$Type* $tmp248;
    org$pandalanguage$pandac$Type* $tmp249;
    org$pandalanguage$pandac$Type$Kind $tmp252;
    org$pandalanguage$pandac$Type* $tmp250 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp252, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp250, &$s251, $tmp252, ((panda$core$Int64) { 8 }));
    $tmp249 = $tmp250;
    $tmp248 = $tmp249;
    $finallyReturn246 = $tmp248;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
    return $finallyReturn246;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn253;
    org$pandalanguage$pandac$Type* $tmp255;
    org$pandalanguage$pandac$Type* $tmp256;
    org$pandalanguage$pandac$Type$Kind $tmp259;
    org$pandalanguage$pandac$Type* $tmp257 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp259, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp257, &$s258, $tmp259, ((panda$core$Int64) { 16 }));
    $tmp256 = $tmp257;
    $tmp255 = $tmp256;
    $finallyReturn253 = $tmp255;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
    return $finallyReturn253;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn260;
    org$pandalanguage$pandac$Type* $tmp262;
    org$pandalanguage$pandac$Type* $tmp263;
    org$pandalanguage$pandac$Type$Kind $tmp266;
    org$pandalanguage$pandac$Type* $tmp264 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp266, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp264, &$s265, $tmp266, ((panda$core$Int64) { 32 }));
    $tmp263 = $tmp264;
    $tmp262 = $tmp263;
    $finallyReturn260 = $tmp262;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
    return $finallyReturn260;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn267;
    org$pandalanguage$pandac$Type* $tmp269;
    org$pandalanguage$pandac$Type* $tmp270;
    org$pandalanguage$pandac$Type$Kind $tmp273;
    org$pandalanguage$pandac$Type* $tmp271 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp273, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp271, &$s272, $tmp273, ((panda$core$Int64) { 64 }));
    $tmp270 = $tmp271;
    $tmp269 = $tmp270;
    $finallyReturn267 = $tmp269;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
    return $finallyReturn267;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn274;
    org$pandalanguage$pandac$Type* $tmp276;
    org$pandalanguage$pandac$Type* $tmp277;
    org$pandalanguage$pandac$Type$Kind $tmp280;
    org$pandalanguage$pandac$Type* $tmp278 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp280, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp278, &$s279, $tmp280, ((panda$core$Int64) { 8 }));
    $tmp277 = $tmp278;
    $tmp276 = $tmp277;
    $finallyReturn274 = $tmp276;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
    return $finallyReturn274;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn281;
    org$pandalanguage$pandac$Type* $tmp283;
    org$pandalanguage$pandac$Type* $tmp284;
    org$pandalanguage$pandac$Type$Kind $tmp287;
    org$pandalanguage$pandac$Type* $tmp285 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp287, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp285, &$s286, $tmp287, ((panda$core$Int64) { 16 }));
    $tmp284 = $tmp285;
    $tmp283 = $tmp284;
    $finallyReturn281 = $tmp283;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp283));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp284));
    return $finallyReturn281;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn288;
    org$pandalanguage$pandac$Type* $tmp290;
    org$pandalanguage$pandac$Type* $tmp291;
    org$pandalanguage$pandac$Type$Kind $tmp294;
    org$pandalanguage$pandac$Type* $tmp292 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp294, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp292, &$s293, $tmp294, ((panda$core$Int64) { 32 }));
    $tmp291 = $tmp292;
    $tmp290 = $tmp291;
    $finallyReturn288 = $tmp290;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
    return $finallyReturn288;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn295;
    org$pandalanguage$pandac$Type* $tmp297;
    org$pandalanguage$pandac$Type* $tmp298;
    org$pandalanguage$pandac$Type$Kind $tmp301;
    org$pandalanguage$pandac$Type* $tmp299 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp301, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp299, &$s300, $tmp301, ((panda$core$Int64) { 64 }));
    $tmp298 = $tmp299;
    $tmp297 = $tmp298;
    $finallyReturn295 = $tmp297;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
    return $finallyReturn295;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn302;
    org$pandalanguage$pandac$Type* $tmp304;
    org$pandalanguage$pandac$Type* $tmp305;
    org$pandalanguage$pandac$Type$Kind $tmp308;
    org$pandalanguage$pandac$Type* $tmp306 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp308, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp306, &$s307, $tmp308, ((panda$core$Int64) { 32 }));
    $tmp305 = $tmp306;
    $tmp304 = $tmp305;
    $finallyReturn302 = $tmp304;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp304));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
    return $finallyReturn302;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn309;
    org$pandalanguage$pandac$Type* $tmp311;
    org$pandalanguage$pandac$Type* $tmp312;
    org$pandalanguage$pandac$Type$Kind $tmp315;
    org$pandalanguage$pandac$Type* $tmp313 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp315, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp313, &$s314, $tmp315, ((panda$core$Int64) { 64 }));
    $tmp312 = $tmp313;
    $tmp311 = $tmp312;
    $finallyReturn309 = $tmp311;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
    return $finallyReturn309;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn316;
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
    $finallyReturn316 = $tmp318;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp318));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
    return $finallyReturn316;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn324;
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
    $finallyReturn324 = $tmp326;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp326));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
    return $finallyReturn324;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn332;
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
    $finallyReturn332 = $tmp334;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp334));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
    return $finallyReturn332;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn340;
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
    $finallyReturn340 = $tmp342;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp342));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
    return $finallyReturn340;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn348;
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
    $finallyReturn348 = $tmp350;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
    return $finallyReturn348;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn356;
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
    $finallyReturn356 = $tmp358;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp358));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
    return $finallyReturn356;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn364;
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
    $finallyReturn364 = $tmp366;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp366));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
    return $finallyReturn364;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn372;
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
    $finallyReturn372 = $tmp374;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp374));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp375));
    return $finallyReturn372;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn380;
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
    $finallyReturn380 = $tmp382;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp382));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
    return $finallyReturn380;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn388;
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
    $finallyReturn388 = $tmp390;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
    return $finallyReturn388;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn396;
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
    $finallyReturn396 = $tmp398;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp399));
    return $finallyReturn396;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn404;
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
    $finallyReturn404 = $tmp406;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp406));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp407));
    return $finallyReturn404;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn412;
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
    $finallyReturn412 = $tmp414;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp414));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
    return $finallyReturn412;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn420;
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
    $finallyReturn420 = $tmp422;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp422));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
    return $finallyReturn420;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $finallyReturn428;
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
    $finallyReturn428 = $tmp430;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
    return $finallyReturn428;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $finallyReturn437;
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
    $finallyReturn437 = $tmp439;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp442));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
    return $finallyReturn437;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Type* $finallyReturn449;
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
    $finallyReturn449 = $tmp451;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp451));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
    return $finallyReturn449;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn458;
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
    $finallyReturn458 = $tmp460;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp460));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
    return $finallyReturn458;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn466;
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
    $finallyReturn466 = $tmp468;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
    return $finallyReturn466;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn474;
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
    $finallyReturn474 = $tmp476;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp476));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp477));
    return $finallyReturn474;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn482;
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
    $finallyReturn482 = $tmp484;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp484));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
    return $finallyReturn482;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn490;
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
    $finallyReturn490 = $tmp492;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp492));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp493));
    return $finallyReturn490;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children502 = NULL;
    panda$collections$Array* $tmp503;
    panda$collections$Array* $tmp504;
    org$pandalanguage$pandac$Type* $tmp506;
    org$pandalanguage$pandac$Type$Kind $tmp509;
    org$pandalanguage$pandac$Position $tmp510;
    org$pandalanguage$pandac$Type* $finallyReturn510;
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
        $finallyReturn510 = $tmp512;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp512));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp513));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp515));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp517));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp518));
        $tmp501 = 0;
        goto $l499;
        $l527:;
        return $finallyReturn510;
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
    org$pandalanguage$pandac$Type* $finallyReturn541;
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
        $finallyReturn541 = $tmp543;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
        $tmp532 = 0;
        goto $l530;
        $l558:;
        return $finallyReturn541;
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
    org$pandalanguage$pandac$Type* $finallyReturn589;
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
        $finallyReturn589 = $tmp591;
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
        return $finallyReturn589;
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
    org$pandalanguage$pandac$Type* $finallyReturn615;
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
    $finallyReturn615 = $tmp617;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
    return $finallyReturn615;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn623;
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
    $finallyReturn623 = $tmp625;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp625));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp626));
    return $finallyReturn623;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn631;
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
    $finallyReturn631 = $tmp652;
    return $finallyReturn631;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn653;
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
    $finallyReturn653 = $tmp667;
    return $finallyReturn653;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn668;
    panda$core$Bit $tmp671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
    bool $tmp670 = $tmp671.value;
    if ($tmp670) goto $l672;
    panda$core$Bit $tmp674 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s673);
    $tmp670 = $tmp674.value;
    $l672:;
    panda$core$Bit $tmp675 = { $tmp670 };
    $finallyReturn668 = $tmp675;
    return $finallyReturn668;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn676;
    panda$core$Bit $tmp679 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s678);
    $finallyReturn676 = $tmp679;
    return $finallyReturn676;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn680;
    panda$core$Bit $tmp683 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp682 = $tmp683.value;
    if ($tmp682) goto $l684;
    panda$core$Bit $tmp685 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp682 = $tmp685.value;
    $l684:;
    panda$core$Bit $tmp686 = { $tmp682 };
    $finallyReturn680 = $tmp686;
    return $finallyReturn680;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$396_9688;
    panda$core$Bit $finallyReturn701;
    panda$core$Bit $finallyReturn703;
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
            $finallyReturn701 = ((panda$core$Bit) { true });
            return $finallyReturn701;
        }
        }
        else {
        {
            $finallyReturn703 = ((panda$core$Bit) { false });
            return $finallyReturn703;
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn705;
    panda$core$Bit $tmp708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 15 }));
    bool $tmp707 = $tmp708.value;
    if ($tmp707) goto $l709;
    panda$core$Bit $tmp710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 14 }));
    $tmp707 = $tmp710.value;
    $l709:;
    panda$core$Bit $tmp711 = { $tmp707 };
    $finallyReturn705 = $tmp711;
    return $finallyReturn705;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn712;
    panda$core$Bit $tmp715 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s714);
    $finallyReturn712 = $tmp715;
    return $finallyReturn712;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn717;
    panda$core$Object* $tmp719;
    panda$core$Bit $finallyReturn722;
    panda$core$Object* $tmp727;
    panda$core$Bit $tmp717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp717.value) {
    {
        panda$core$Object* $tmp720 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp719 = $tmp720;
        panda$core$Bit $tmp721 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp719));
        $finallyReturn717 = $tmp721;
        panda$core$Panda$unref$panda$core$Object($tmp719);
        return $finallyReturn717;
    }
    }
    panda$core$Bit $tmp725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp724 = $tmp725.value;
    if (!$tmp724) goto $l726;
    panda$core$Object* $tmp728 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp727 = $tmp728;
    panda$core$Bit $tmp730 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp727))->name, &$s729);
    $tmp724 = $tmp730.value;
    panda$core$Panda$unref$panda$core$Object($tmp727);
    $l726:;
    panda$core$Bit $tmp731 = { $tmp724 };
    $finallyReturn722 = $tmp731;
    return $finallyReturn722;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn733;
    panda$core$Object* $tmp735;
    panda$core$Bit $finallyReturn738;
    panda$core$Object* $tmp743;
    panda$core$Bit $tmp733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp733.value) {
    {
        panda$core$Object* $tmp736 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp735 = $tmp736;
        panda$core$Bit $tmp737 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp735));
        $finallyReturn733 = $tmp737;
        panda$core$Panda$unref$panda$core$Object($tmp735);
        return $finallyReturn733;
    }
    }
    panda$core$Bit $tmp741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp740 = $tmp741.value;
    if (!$tmp740) goto $l742;
    panda$core$Object* $tmp744 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp743 = $tmp744;
    panda$core$Bit $tmp746 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp743))->name, &$s745);
    $tmp740 = $tmp746.value;
    panda$core$Panda$unref$panda$core$Object($tmp743);
    $l742:;
    panda$core$Bit $tmp747 = { $tmp740 };
    $finallyReturn738 = $tmp747;
    return $finallyReturn738;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $finallyReturn752;
    org$pandalanguage$pandac$Type* $tmp754;
    panda$collections$Array* subtypes757 = NULL;
    panda$collections$Array* $tmp758;
    panda$collections$Array* $tmp759;
    org$pandalanguage$pandac$Type* $finallyReturn760;
    org$pandalanguage$pandac$Type* $tmp762;
    org$pandalanguage$pandac$Type* $tmp763;
    panda$core$String* $tmp765;
    panda$core$String* $tmp766;
    org$pandalanguage$pandac$Type$Kind $tmp770;
    org$pandalanguage$pandac$Position $tmp771;
    int $tmp751;
    {
        panda$core$Bit $tmp752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp752.value) {
        {
            $tmp754 = self;
            $finallyReturn752 = $tmp754;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp754));
            $tmp751 = 0;
            goto $l749;
            $l755:;
            return $finallyReturn752;
        }
        }
        panda$collections$Array* $tmp760 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp760);
        $tmp759 = $tmp760;
        $tmp758 = $tmp759;
        subtypes757 = $tmp758;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp758));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp759));
        panda$collections$Array$add$panda$collections$Array$T(subtypes757, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp764 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp767 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp766 = $tmp767;
        panda$core$String* $tmp769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, &$s768);
        $tmp765 = $tmp769;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp770, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Position$init(&$tmp771);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp764, $tmp765, $tmp770, $tmp771, ((panda$collections$ListView*) subtypes757), ((panda$core$Bit) { true }));
        $tmp763 = $tmp764;
        $tmp762 = $tmp763;
        $finallyReturn760 = $tmp762;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp762));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp763));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp765));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp766));
        $tmp751 = 1;
        goto $l749;
        $l772:;
        return $finallyReturn760;
    }
    $l749:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes757));
    subtypes757 = NULL;
    switch ($tmp751) {
        case 1: goto $l772;
        case 0: goto $l755;
    }
    $l774:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $finallyReturn775;
    org$pandalanguage$pandac$Type* $tmp777;
    org$pandalanguage$pandac$Type* $finallyReturn778;
    org$pandalanguage$pandac$Type* $tmp780;
    panda$core$Object* $tmp781;
    panda$core$Bit $tmp775 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp775.value) {
    {
        $tmp777 = self;
        $finallyReturn775 = $tmp777;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp777));
        return $finallyReturn775;
    }
    }
    panda$core$Object* $tmp782 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp781 = $tmp782;
    $tmp780 = ((org$pandalanguage$pandac$Type*) $tmp781);
    $finallyReturn778 = $tmp780;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp780));
    panda$core$Panda$unref$panda$core$Object($tmp781);
    return $finallyReturn778;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $finallyReturn787;
    org$pandalanguage$pandac$Type* $tmp789;
    org$pandalanguage$pandac$Type* $tmp792;
    org$pandalanguage$pandac$Type* $finallyReturn795;
    org$pandalanguage$pandac$Type* $tmp797;
    org$pandalanguage$pandac$Type* $finallyReturn799;
    org$pandalanguage$pandac$Type* $tmp801;
    org$pandalanguage$pandac$Type* $tmp802;
    org$pandalanguage$pandac$Type* $tmp806;
    org$pandalanguage$pandac$Type* $finallyReturn809;
    org$pandalanguage$pandac$Type* $tmp811;
    org$pandalanguage$pandac$Type* $finallyReturn813;
    org$pandalanguage$pandac$Type* $tmp815;
    org$pandalanguage$pandac$Type* $tmp816;
    org$pandalanguage$pandac$Type* $finallyReturn824;
    org$pandalanguage$pandac$Type* $tmp826;
    org$pandalanguage$pandac$Type* $finallyReturn833;
    org$pandalanguage$pandac$Type* $tmp835;
    org$pandalanguage$pandac$Type* $finallyReturn843;
    org$pandalanguage$pandac$Type* $tmp845;
    org$pandalanguage$pandac$Type* $finallyReturn850;
    org$pandalanguage$pandac$Type* $tmp852;
    org$pandalanguage$pandac$Type* $tmp853;
    org$pandalanguage$pandac$Type* $finallyReturn856;
    org$pandalanguage$pandac$Type* $tmp858;
    org$pandalanguage$pandac$Type* $tmp859;
    org$pandalanguage$pandac$Type* $finallyReturn868;
    org$pandalanguage$pandac$Type* $tmp870;
    org$pandalanguage$pandac$Type* $finallyReturn875;
    org$pandalanguage$pandac$Type* $tmp877;
    org$pandalanguage$pandac$Type* $tmp878;
    org$pandalanguage$pandac$Type* $finallyReturn881;
    org$pandalanguage$pandac$Type* $tmp883;
    org$pandalanguage$pandac$Type* $tmp884;
    org$pandalanguage$pandac$Type* $finallyReturn888;
    org$pandalanguage$pandac$Type* $tmp890;
    org$pandalanguage$pandac$Type* $tmp891;
    org$pandalanguage$pandac$Type* $tmp892;
    panda$core$Object* $tmp893;
    org$pandalanguage$pandac$Type* $finallyReturn899;
    org$pandalanguage$pandac$Type* $tmp901;
    org$pandalanguage$pandac$Type* $tmp902;
    org$pandalanguage$pandac$Type* $tmp903;
    panda$core$Object* $tmp904;
    org$pandalanguage$pandac$Type* t1910 = NULL;
    org$pandalanguage$pandac$Type* $tmp911;
    org$pandalanguage$pandac$Type* $tmp912;
    org$pandalanguage$pandac$Type* t2914 = NULL;
    org$pandalanguage$pandac$Type* $tmp915;
    org$pandalanguage$pandac$Type* $tmp916;
    panda$collections$Set* ancestors926 = NULL;
    panda$collections$Set* $tmp927;
    panda$collections$Set* $tmp928;
    org$pandalanguage$pandac$Type* t930 = NULL;
    org$pandalanguage$pandac$Type* $tmp931;
    org$pandalanguage$pandac$ClassDecl* cl932 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp933;
    org$pandalanguage$pandac$ClassDecl* $tmp934;
    org$pandalanguage$pandac$Type* $tmp939;
    org$pandalanguage$pandac$Type* $tmp940;
    org$pandalanguage$pandac$Type* $tmp941;
    org$pandalanguage$pandac$ClassDecl* $tmp943;
    org$pandalanguage$pandac$ClassDecl* $tmp944;
    org$pandalanguage$pandac$ClassDecl* $tmp945;
    org$pandalanguage$pandac$ClassDecl* $tmp947;
    org$pandalanguage$pandac$ClassDecl* $tmp948;
    org$pandalanguage$pandac$Type* $tmp949;
    org$pandalanguage$pandac$Type* $tmp950;
    org$pandalanguage$pandac$ClassDecl* $tmp951;
    org$pandalanguage$pandac$ClassDecl* $tmp952;
    org$pandalanguage$pandac$ClassDecl* $tmp953;
    org$pandalanguage$pandac$Type* $finallyReturn958;
    org$pandalanguage$pandac$Type* $tmp960;
    org$pandalanguage$pandac$Type* $tmp964;
    org$pandalanguage$pandac$Type* $tmp965;
    org$pandalanguage$pandac$Type* $tmp966;
    org$pandalanguage$pandac$ClassDecl* $tmp968;
    org$pandalanguage$pandac$ClassDecl* $tmp969;
    org$pandalanguage$pandac$ClassDecl* $tmp970;
    org$pandalanguage$pandac$ClassDecl* $tmp972;
    org$pandalanguage$pandac$ClassDecl* $tmp973;
    org$pandalanguage$pandac$Type* $finallyReturn974;
    org$pandalanguage$pandac$Type* $tmp976;
    org$pandalanguage$pandac$Type* $tmp977;
    int $tmp786;
    {
        panda$core$Bit $tmp787 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp787.value) {
        {
            $tmp789 = self;
            $finallyReturn787 = $tmp789;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp789));
            $tmp786 = 0;
            goto $l784;
            $l790:;
            return $finallyReturn787;
        }
        }
        org$pandalanguage$pandac$Type* $tmp793 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp792 = $tmp793;
        panda$core$Bit $tmp794 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp792);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp792));
        if ($tmp794.value) {
        {
            panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp795.value) {
            {
                $tmp797 = p_other;
                $finallyReturn795 = $tmp797;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp797));
                $tmp786 = 1;
                goto $l784;
                $l798:;
                return $finallyReturn795;
            }
            }
            org$pandalanguage$pandac$Type* $tmp803 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp802 = $tmp803;
            $tmp801 = $tmp802;
            $finallyReturn799 = $tmp801;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp801));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp802));
            $tmp786 = 2;
            goto $l784;
            $l804:;
            return $finallyReturn799;
        }
        }
        org$pandalanguage$pandac$Type* $tmp807 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp806 = $tmp807;
        panda$core$Bit $tmp808 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp806);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp806));
        if ($tmp808.value) {
        {
            panda$core$Bit $tmp809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp809.value) {
            {
                $tmp811 = self;
                $finallyReturn809 = $tmp811;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp811));
                $tmp786 = 3;
                goto $l784;
                $l812:;
                return $finallyReturn809;
            }
            }
            org$pandalanguage$pandac$Type* $tmp817 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp816 = $tmp817;
            $tmp815 = $tmp816;
            $finallyReturn813 = $tmp815;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp815));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp816));
            $tmp786 = 4;
            goto $l784;
            $l818:;
            return $finallyReturn813;
        }
        }
        panda$core$Bit $tmp821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        bool $tmp820 = $tmp821.value;
        if (!$tmp820) goto $l822;
        panda$core$Bit $tmp823 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp820 = $tmp823.value;
        $l822:;
        panda$core$Bit $tmp824 = { $tmp820 };
        if ($tmp824.value) {
        {
            $tmp826 = p_other;
            $finallyReturn824 = $tmp826;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp826));
            $tmp786 = 5;
            goto $l784;
            $l827:;
            return $finallyReturn824;
        }
        }
        panda$core$Bit $tmp830 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp829 = $tmp830.value;
        if (!$tmp829) goto $l831;
        panda$core$Bit $tmp832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        $tmp829 = $tmp832.value;
        $l831:;
        panda$core$Bit $tmp833 = { $tmp829 };
        if ($tmp833.value) {
        {
            $tmp835 = self;
            $finallyReturn833 = $tmp835;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp835));
            $tmp786 = 6;
            goto $l784;
            $l836:;
            return $finallyReturn833;
        }
        }
        panda$core$Bit $tmp838 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp838.value) {
        {
            panda$core$Bit $tmp840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp839 = $tmp840.value;
            if ($tmp839) goto $l841;
            panda$core$Bit $tmp842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
            $tmp839 = $tmp842.value;
            $l841:;
            panda$core$Bit $tmp843 = { $tmp839 };
            if ($tmp843.value) {
            {
                $tmp845 = self;
                $finallyReturn843 = $tmp845;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp845));
                $tmp786 = 7;
                goto $l784;
                $l846:;
                return $finallyReturn843;
            }
            }
            panda$core$Bit $tmp848 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp848.value) {
            {
                panda$core$Bit $tmp850 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s849);
                if ($tmp850.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp854 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp853 = $tmp854;
                    $tmp852 = $tmp853;
                    $finallyReturn850 = $tmp852;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp852));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp853));
                    $tmp786 = 8;
                    goto $l784;
                    $l855:;
                    return $finallyReturn850;
                }
                }
                org$pandalanguage$pandac$Type* $tmp860 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp859 = $tmp860;
                $tmp858 = $tmp859;
                $finallyReturn856 = $tmp858;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp858));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp859));
                $tmp786 = 9;
                goto $l784;
                $l861:;
                return $finallyReturn856;
            }
            }
        }
        }
        panda$core$Bit $tmp863 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp863.value) {
        {
            panda$core$Bit $tmp865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp864 = $tmp865.value;
            if ($tmp864) goto $l866;
            panda$core$Bit $tmp867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
            $tmp864 = $tmp867.value;
            $l866:;
            panda$core$Bit $tmp868 = { $tmp864 };
            if ($tmp868.value) {
            {
                $tmp870 = p_other;
                $finallyReturn868 = $tmp870;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp870));
                $tmp786 = 10;
                goto $l784;
                $l871:;
                return $finallyReturn868;
            }
            }
            panda$core$Bit $tmp873 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp873.value) {
            {
                panda$core$Bit $tmp875 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s874);
                if ($tmp875.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp879 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp878 = $tmp879;
                    $tmp877 = $tmp878;
                    $finallyReturn875 = $tmp877;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp877));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp878));
                    $tmp786 = 11;
                    goto $l784;
                    $l880:;
                    return $finallyReturn875;
                }
                }
                org$pandalanguage$pandac$Type* $tmp885 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp884 = $tmp885;
                $tmp883 = $tmp884;
                $finallyReturn881 = $tmp883;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp883));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp884));
                $tmp786 = 12;
                goto $l784;
                $l886:;
                return $finallyReturn881;
            }
            }
        }
        }
        panda$core$Bit $tmp888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp888.value) {
        {
            panda$core$Object* $tmp894 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp893 = $tmp894;
            org$pandalanguage$pandac$Type* $tmp895 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp893), p_compiler, p_other);
            $tmp892 = $tmp895;
            org$pandalanguage$pandac$Type* $tmp896 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp892);
            $tmp891 = $tmp896;
            $tmp890 = $tmp891;
            $finallyReturn888 = $tmp890;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp890));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp891));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp892));
            panda$core$Panda$unref$panda$core$Object($tmp893);
            $tmp786 = 13;
            goto $l784;
            $l897:;
            return $finallyReturn888;
        }
        }
        panda$core$Bit $tmp899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp899.value) {
        {
            panda$core$Object* $tmp905 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
            $tmp904 = $tmp905;
            org$pandalanguage$pandac$Type* $tmp906 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp904));
            $tmp903 = $tmp906;
            org$pandalanguage$pandac$Type* $tmp907 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp903);
            $tmp902 = $tmp907;
            $tmp901 = $tmp902;
            $finallyReturn899 = $tmp901;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp901));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp902));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp903));
            panda$core$Panda$unref$panda$core$Object($tmp904);
            $tmp786 = 14;
            goto $l784;
            $l908:;
            return $finallyReturn899;
        }
        }
        org$pandalanguage$pandac$Type* $tmp913 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp912 = $tmp913;
        $tmp911 = $tmp912;
        t1910 = $tmp911;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp911));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
        org$pandalanguage$pandac$Type* $tmp917 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp916 = $tmp917;
        $tmp915 = $tmp916;
        t2914 = $tmp915;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp915));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
        panda$core$Bit $tmp919 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t1910);
        bool $tmp918 = $tmp919.value;
        if (!$tmp918) goto $l920;
        panda$core$Bit $tmp921 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t2914);
        $tmp918 = $tmp921.value;
        $l920:;
        panda$core$Bit $tmp922 = { $tmp918 };
        if ($tmp922.value) {
        {
            int $tmp925;
            {
                panda$collections$Set* $tmp929 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
                panda$collections$Set$init($tmp929);
                $tmp928 = $tmp929;
                $tmp927 = $tmp928;
                ancestors926 = $tmp927;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp927));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp928));
                $tmp931 = self;
                t930 = $tmp931;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp931));
                org$pandalanguage$pandac$ClassDecl* $tmp935 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1910);
                $tmp934 = $tmp935;
                $tmp933 = $tmp934;
                cl932 = $tmp933;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp933));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp934));
                $l936:;
                bool $tmp938 = ((panda$core$Bit) { cl932 != NULL }).value;
                if (!$tmp938) goto $l937;
                {
                    panda$collections$Set$add$panda$collections$Set$T(ancestors926, ((panda$collections$Key*) t930));
                    if (((panda$core$Bit) { cl932->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp939 = t930;
                            org$pandalanguage$pandac$Type* $tmp942 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t930, cl932->rawSuper);
                            $tmp941 = $tmp942;
                            $tmp940 = $tmp941;
                            t930 = $tmp940;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp940));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp941));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp939));
                        }
                        {
                            $tmp943 = cl932;
                            org$pandalanguage$pandac$ClassDecl* $tmp946 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t930);
                            $tmp945 = $tmp946;
                            $tmp944 = $tmp945;
                            cl932 = $tmp944;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp944));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp945));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp943));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp947 = cl932;
                            $tmp948 = NULL;
                            cl932 = $tmp948;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp948));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp947));
                        }
                    }
                    }
                }
                goto $l936;
                $l937:;
                {
                    $tmp949 = t930;
                    $tmp950 = p_other;
                    t930 = $tmp950;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp950));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp949));
                }
                {
                    $tmp951 = cl932;
                    org$pandalanguage$pandac$ClassDecl* $tmp954 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t2914);
                    $tmp953 = $tmp954;
                    $tmp952 = $tmp953;
                    cl932 = $tmp952;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp952));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp953));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp951));
                }
                $l955:;
                bool $tmp957 = ((panda$core$Bit) { cl932 != NULL }).value;
                if (!$tmp957) goto $l956;
                {
                    panda$core$Bit $tmp958 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors926, ((panda$collections$Key*) t930));
                    if ($tmp958.value) {
                    {
                        $tmp960 = t930;
                        $finallyReturn958 = $tmp960;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp960));
                        $tmp925 = 0;
                        goto $l923;
                        $l961:;
                        $tmp786 = 15;
                        goto $l784;
                        $l962:;
                        return $finallyReturn958;
                    }
                    }
                    if (((panda$core$Bit) { cl932->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp964 = t930;
                            org$pandalanguage$pandac$Type* $tmp967 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t930, cl932->rawSuper);
                            $tmp966 = $tmp967;
                            $tmp965 = $tmp966;
                            t930 = $tmp965;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp965));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp966));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp964));
                        }
                        {
                            $tmp968 = cl932;
                            org$pandalanguage$pandac$ClassDecl* $tmp971 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t930);
                            $tmp970 = $tmp971;
                            $tmp969 = $tmp970;
                            cl932 = $tmp969;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp969));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp970));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp968));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp972 = cl932;
                            $tmp973 = NULL;
                            cl932 = $tmp973;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp973));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp972));
                        }
                    }
                    }
                }
                goto $l955;
                $l956:;
            }
            $tmp925 = -1;
            goto $l923;
            $l923:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors926));
            ancestors926 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t930));
            t930 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl932));
            cl932 = NULL;
            switch ($tmp925) {
                case 0: goto $l961;
                case -1: goto $l974;
            }
            $l974:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp978 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp977 = $tmp978;
        $tmp976 = $tmp977;
        $finallyReturn974 = $tmp976;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp976));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp977));
        $tmp786 = 16;
        goto $l784;
        $l979:;
        return $finallyReturn974;
    }
    $l784:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1910));
    t1910 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2914));
    t2914 = NULL;
    switch ($tmp786) {
        case 1: goto $l798;
        case 2: goto $l804;
        case 3: goto $l812;
        case 6: goto $l836;
        case 16: goto $l979;
        case 5: goto $l827;
        case 12: goto $l886;
        case 4: goto $l818;
        case 11: goto $l880;
        case 7: goto $l846;
        case 9: goto $l861;
        case 13: goto $l897;
        case 15: goto $l962;
        case 10: goto $l871;
        case 0: goto $l790;
        case 8: goto $l855;
        case 14: goto $l908;
    }
    $l981:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* $finallyReturn983;
    org$pandalanguage$pandac$Type* $tmp985;
    org$pandalanguage$pandac$Type$Kind $match$531_9987;
    org$pandalanguage$pandac$Type* found992 = NULL;
    org$pandalanguage$pandac$Type* $tmp993;
    panda$core$Object* $tmp994;
    org$pandalanguage$pandac$Type* $finallyReturn995;
    org$pandalanguage$pandac$Type* $tmp997;
    org$pandalanguage$pandac$Type* $finallyReturn999;
    org$pandalanguage$pandac$Type* $tmp1001;
    org$pandalanguage$pandac$Type* base1009 = NULL;
    org$pandalanguage$pandac$Type* $tmp1010;
    org$pandalanguage$pandac$Type* $tmp1011;
    panda$core$Object* $tmp1012;
    panda$collections$Array* remappedArgs1015 = NULL;
    panda$collections$Array* $tmp1016;
    panda$collections$Array* $tmp1017;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1019;
    org$pandalanguage$pandac$Type* $tmp1034;
    panda$core$Object* $tmp1035;
    org$pandalanguage$pandac$Type* $finallyReturn1043;
    org$pandalanguage$pandac$Type* $tmp1045;
    org$pandalanguage$pandac$Type* $tmp1046;
    org$pandalanguage$pandac$Type* $finallyReturn1051;
    org$pandalanguage$pandac$Type* $tmp1053;
    org$pandalanguage$pandac$Type* $tmp1054;
    org$pandalanguage$pandac$Type* $tmp1055;
    panda$core$Object* $tmp1056;
    panda$collections$Array* remapped1069 = NULL;
    panda$collections$Array* $tmp1070;
    panda$collections$Array* $tmp1071;
    panda$core$MutableString* name1073 = NULL;
    panda$core$MutableString* $tmp1074;
    panda$core$MutableString* $tmp1075;
    panda$core$String* separator1078 = NULL;
    panda$core$String* $tmp1079;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1083;
    org$pandalanguage$pandac$Type* child1102 = NULL;
    org$pandalanguage$pandac$Type* $tmp1103;
    org$pandalanguage$pandac$Type* $tmp1104;
    panda$core$Object* $tmp1105;
    panda$core$String* $tmp1108;
    panda$core$String* $tmp1109;
    panda$core$Object* $tmp1121;
    org$pandalanguage$pandac$Type* $tmp1125;
    org$pandalanguage$pandac$Type* child1131 = NULL;
    org$pandalanguage$pandac$Type* $tmp1132;
    org$pandalanguage$pandac$Type* $tmp1133;
    panda$core$Object* $tmp1134;
    org$pandalanguage$pandac$Type* $tmp1140;
    panda$core$Char8 $tmp1142;
    org$pandalanguage$pandac$Type* $finallyReturn1142;
    org$pandalanguage$pandac$Type* $tmp1144;
    org$pandalanguage$pandac$Type* $tmp1145;
    panda$core$String* $tmp1147;
    org$pandalanguage$pandac$Type* $finallyReturn1151;
    org$pandalanguage$pandac$Type* $tmp1153;
    panda$core$Int64 $tmp982 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp982, ((panda$core$Int64) { 0 }));
    if ($tmp983.value) {
    {
        $tmp985 = self;
        $finallyReturn983 = $tmp985;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp985));
        return $finallyReturn983;
    }
    }
    {
        $match$531_9987 = self->typeKind;
        panda$core$Bit $tmp988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$531_9987.$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp988.value) {
        {
            int $tmp991;
            {
                panda$core$Object* $tmp995 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                $tmp994 = $tmp995;
                $tmp993 = ((org$pandalanguage$pandac$Type*) $tmp994);
                found992 = $tmp993;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp993));
                panda$core$Panda$unref$panda$core$Object($tmp994);
                if (((panda$core$Bit) { found992 != NULL }).value) {
                {
                    $tmp997 = found992;
                    $finallyReturn995 = $tmp997;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp997));
                    $tmp991 = 0;
                    goto $l989;
                    $l998:;
                    return $finallyReturn995;
                }
                }
                $tmp1001 = self;
                $finallyReturn999 = $tmp1001;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1001));
                $tmp991 = 1;
                goto $l989;
                $l1002:;
                return $finallyReturn999;
            }
            $l989:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found992));
            found992 = NULL;
            switch ($tmp991) {
                case 1: goto $l1002;
                case 0: goto $l998;
            }
            $l1004:;
        }
        }
        else {
        panda$core$Bit $tmp1005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$531_9987.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1005.value) {
        {
            int $tmp1008;
            {
                panda$core$Object* $tmp1013 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
                $tmp1012 = $tmp1013;
                org$pandalanguage$pandac$Type* $tmp1014 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1012), p_types);
                $tmp1011 = $tmp1014;
                $tmp1010 = $tmp1011;
                base1009 = $tmp1010;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1010));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1011));
                panda$core$Panda$unref$panda$core$Object($tmp1012);
                panda$collections$Array* $tmp1018 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1018);
                $tmp1017 = $tmp1018;
                $tmp1016 = $tmp1017;
                remappedArgs1015 = $tmp1016;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1016));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1017));
                panda$core$Int64 $tmp1020 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1019, ((panda$core$Int64) { 1 }), $tmp1020, ((panda$core$Bit) { false }));
                int64_t $tmp1022 = $tmp1019.min.value;
                panda$core$Int64 i1021 = { $tmp1022 };
                int64_t $tmp1024 = $tmp1019.max.value;
                bool $tmp1025 = $tmp1019.inclusive.value;
                if ($tmp1025) goto $l1032; else goto $l1033;
                $l1032:;
                if ($tmp1022 <= $tmp1024) goto $l1026; else goto $l1028;
                $l1033:;
                if ($tmp1022 < $tmp1024) goto $l1026; else goto $l1028;
                $l1026:;
                {
                    panda$core$Object* $tmp1036 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1021);
                    $tmp1035 = $tmp1036;
                    org$pandalanguage$pandac$Type* $tmp1037 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1035), p_types);
                    $tmp1034 = $tmp1037;
                    panda$collections$Array$add$panda$collections$Array$T(remappedArgs1015, ((panda$core$Object*) $tmp1034));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1034));
                    panda$core$Panda$unref$panda$core$Object($tmp1035);
                }
                $l1029:;
                int64_t $tmp1039 = $tmp1024 - i1021.value;
                if ($tmp1025) goto $l1040; else goto $l1041;
                $l1040:;
                if ((uint64_t) $tmp1039 >= 1) goto $l1038; else goto $l1028;
                $l1041:;
                if ((uint64_t) $tmp1039 > 1) goto $l1038; else goto $l1028;
                $l1038:;
                i1021.value += 1;
                goto $l1026;
                $l1028:;
                org$pandalanguage$pandac$Type* $tmp1047 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base1009, ((panda$collections$ListView*) remappedArgs1015));
                $tmp1046 = $tmp1047;
                $tmp1045 = $tmp1046;
                $finallyReturn1043 = $tmp1045;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1045));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1046));
                $tmp1008 = 0;
                goto $l1006;
                $l1048:;
                return $finallyReturn1043;
            }
            $l1006:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1009));
            base1009 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remappedArgs1015));
            remappedArgs1015 = NULL;
            switch ($tmp1008) {
                case 0: goto $l1048;
            }
            $l1050:;
        }
        }
        else {
        panda$core$Bit $tmp1051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$531_9987.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1051.value) {
        {
            panda$core$Object* $tmp1057 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1056 = $tmp1057;
            org$pandalanguage$pandac$Type* $tmp1058 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1056), p_types);
            $tmp1055 = $tmp1058;
            org$pandalanguage$pandac$Type* $tmp1059 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1055);
            $tmp1054 = $tmp1059;
            $tmp1053 = $tmp1054;
            $finallyReturn1051 = $tmp1053;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1053));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1054));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1055));
            panda$core$Panda$unref$panda$core$Object($tmp1056);
            return $finallyReturn1051;
        }
        }
        else {
        panda$core$Bit $tmp1062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$531_9987.$rawValue, ((panda$core$Int64) { 15 }));
        bool $tmp1061 = $tmp1062.value;
        if ($tmp1061) goto $l1063;
        panda$core$Bit $tmp1064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$531_9987.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp1061 = $tmp1064.value;
        $l1063:;
        panda$core$Bit $tmp1065 = { $tmp1061 };
        if ($tmp1065.value) {
        {
            int $tmp1068;
            {
                panda$collections$Array* $tmp1072 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1072);
                $tmp1071 = $tmp1072;
                $tmp1070 = $tmp1071;
                remapped1069 = $tmp1070;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1070));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1071));
                panda$core$MutableString* $tmp1076 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1076, &$s1077);
                $tmp1075 = $tmp1076;
                $tmp1074 = $tmp1075;
                name1073 = $tmp1074;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1074));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1075));
                $tmp1079 = &$s1080;
                separator1078 = $tmp1079;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1079));
                panda$core$Int64 $tmp1081 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Bit $tmp1082 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1081, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1082.value);
                panda$core$Int64 $tmp1084 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1085 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1084, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1083, ((panda$core$Int64) { 0 }), $tmp1085, ((panda$core$Bit) { false }));
                int64_t $tmp1087 = $tmp1083.min.value;
                panda$core$Int64 i1086 = { $tmp1087 };
                int64_t $tmp1089 = $tmp1083.max.value;
                bool $tmp1090 = $tmp1083.inclusive.value;
                if ($tmp1090) goto $l1097; else goto $l1098;
                $l1097:;
                if ($tmp1087 <= $tmp1089) goto $l1091; else goto $l1093;
                $l1098:;
                if ($tmp1087 < $tmp1089) goto $l1091; else goto $l1093;
                $l1091:;
                {
                    int $tmp1101;
                    {
                        panda$core$Object* $tmp1106 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1086);
                        $tmp1105 = $tmp1106;
                        org$pandalanguage$pandac$Type* $tmp1107 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1105), p_types);
                        $tmp1104 = $tmp1107;
                        $tmp1103 = $tmp1104;
                        child1102 = $tmp1103;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1103));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1104));
                        panda$core$Panda$unref$panda$core$Object($tmp1105);
                        panda$core$MutableString$append$panda$core$String(name1073, separator1078);
                        panda$core$MutableString$append$panda$core$String(name1073, ((org$pandalanguage$pandac$Symbol*) child1102)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1069, ((panda$core$Object*) child1102));
                        {
                            $tmp1108 = separator1078;
                            $tmp1109 = &$s1110;
                            separator1078 = $tmp1109;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1109));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1108));
                        }
                    }
                    $tmp1101 = -1;
                    goto $l1099;
                    $l1099:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1102));
                    child1102 = NULL;
                    switch ($tmp1101) {
                        case -1: goto $l1111;
                    }
                    $l1111:;
                }
                $l1094:;
                int64_t $tmp1113 = $tmp1089 - i1086.value;
                if ($tmp1090) goto $l1114; else goto $l1115;
                $l1114:;
                if ((uint64_t) $tmp1113 >= 1) goto $l1112; else goto $l1093;
                $l1115:;
                if ((uint64_t) $tmp1113 > 1) goto $l1112; else goto $l1093;
                $l1112:;
                i1086.value += 1;
                goto $l1091;
                $l1093:;
                panda$core$Bit $tmp1118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 14 }));
                if ($tmp1118.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name1073, &$s1119);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(name1073, &$s1120);
                }
                }
                panda$core$Int64 $tmp1122 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1123 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1122, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1124 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1123);
                $tmp1121 = $tmp1124;
                org$pandalanguage$pandac$Type* $tmp1126 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1125 = $tmp1126;
                panda$core$Bit $tmp1127 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1121), $tmp1125);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1125));
                panda$core$Panda$unref$panda$core$Object($tmp1121);
                if ($tmp1127.value) {
                {
                    int $tmp1130;
                    {
                        panda$core$Int64 $tmp1135 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                        panda$core$Int64 $tmp1136 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1135, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1137 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1136);
                        $tmp1134 = $tmp1137;
                        org$pandalanguage$pandac$Type* $tmp1138 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1134), p_types);
                        $tmp1133 = $tmp1138;
                        $tmp1132 = $tmp1133;
                        child1131 = $tmp1132;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1132));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1133));
                        panda$core$Panda$unref$panda$core$Object($tmp1134);
                        panda$core$MutableString$append$panda$core$String(name1073, ((org$pandalanguage$pandac$Symbol*) child1131)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1069, ((panda$core$Object*) child1131));
                    }
                    $tmp1130 = -1;
                    goto $l1128;
                    $l1128:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1131));
                    child1131 = NULL;
                    switch ($tmp1130) {
                        case -1: goto $l1139;
                    }
                    $l1139:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1141 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                    $tmp1140 = $tmp1141;
                    panda$collections$Array$add$panda$collections$Array$T(remapped1069, ((panda$core$Object*) $tmp1140));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1140));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1142, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(name1073, $tmp1142);
                org$pandalanguage$pandac$Type* $tmp1146 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp1148 = panda$core$MutableString$finish$R$panda$core$String(name1073);
                $tmp1147 = $tmp1148;
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1146, $tmp1147, self->typeKind, self->position, ((panda$collections$ListView*) remapped1069), self->resolved);
                $tmp1145 = $tmp1146;
                $tmp1144 = $tmp1145;
                $finallyReturn1142 = $tmp1144;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1144));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1145));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1147));
                $tmp1068 = 0;
                goto $l1066;
                $l1149:;
                return $finallyReturn1142;
            }
            $l1066:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped1069));
            remapped1069 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1073));
            name1073 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1078));
            separator1078 = NULL;
            switch ($tmp1068) {
                case 0: goto $l1149;
            }
            $l1151:;
        }
        }
        else {
        {
            $tmp1153 = self;
            $finallyReturn1151 = $tmp1153;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1153));
            return $finallyReturn1151;
        }
        }
        }
        }
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $finallyReturn1154;
    panda$core$Int64 $tmp1156 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $finallyReturn1154 = $tmp1156;
    return $finallyReturn1154;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $finallyReturn1157;
    panda$core$String* $tmp1159;
    $tmp1159 = self->name;
    $finallyReturn1157 = $tmp1159;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1159));
    return $finallyReturn1157;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1163;
    {
    }
    $tmp1163 = -1;
    goto $l1161;
    $l1161:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1163) {
        case -1: goto $l1164;
    }
    $l1164:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

