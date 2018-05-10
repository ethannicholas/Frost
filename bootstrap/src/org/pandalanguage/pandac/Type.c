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
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s1006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };

void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position) {
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp2;
    self->name = NULL;
    self->subtypes = NULL;
    self->test = NULL;
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
    self->test = NULL;
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
    self->test = NULL;
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
    self->test = NULL;
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
    panda$core$MutableString* name38;
    panda$core$MutableString* $tmp39;
    panda$core$MutableString* $tmp40;
    panda$core$String* separator43;
    panda$core$String* $tmp44;
    panda$collections$Iterator* Iter$76$949;
    panda$collections$Iterator* $tmp50;
    panda$collections$Iterator* $tmp51;
    org$pandalanguage$pandac$Type* t67;
    org$pandalanguage$pandac$Type* $tmp68;
    panda$core$Object* $tmp69;
    panda$core$String* $tmp74;
    panda$core$String* $tmp75;
    panda$core$Char8 $tmp82;
    panda$core$String* $tmp83;
    self->name = NULL;
    self->subtypes = NULL;
    self->test = NULL;
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
                Iter$76$949 = $tmp50;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp50));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
                $l56:;
                ITable* $tmp59 = Iter$76$949->$class->itable;
                while ($tmp59->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp59 = $tmp59->next;
                }
                $fn61 $tmp60 = $tmp59->methods[0];
                panda$core$Bit $tmp62 = $tmp60(Iter$76$949);
                panda$core$Bit $tmp63 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp62);
                bool $tmp58 = $tmp63.value;
                if (!$tmp58) goto $l57;
                {
                    int $tmp66;
                    {
                        ITable* $tmp70 = Iter$76$949->$class->itable;
                        while ($tmp70->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp70 = $tmp70->next;
                        }
                        $fn72 $tmp71 = $tmp70->methods[1];
                        panda$core$Object* $tmp73 = $tmp71(Iter$76$949);
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$76$949));
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator43));
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
    self->test = NULL;
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
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $finallyReturn111;
    panda$core$Bit $tmp105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp104 = $tmp105.value;
    if ($tmp104) goto $l106;
    panda$core$Bit $tmp107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp104 = $tmp107.value;
    $l106:;
    panda$core$Bit $tmp108 = { $tmp104 };
    bool $tmp103 = $tmp108.value;
    if ($tmp103) goto $l109;
    panda$core$Bit $tmp110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp103 = $tmp110.value;
    $l109:;
    panda$core$Bit $tmp111 = { $tmp103 };
    PANDA_ASSERT($tmp111.value);
    $finallyReturn111 = self->position.line;
    return $finallyReturn111;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $finallyReturn113;
    panda$core$Bit $tmp115 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $finallyReturn113 = $tmp115;
    return $finallyReturn113;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $finallyReturn116;
    panda$core$Bit $tmp118 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $finallyReturn116 = $tmp118;
    return $finallyReturn116;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn119;
    org$pandalanguage$pandac$Type* $tmp121;
    org$pandalanguage$pandac$Type* $tmp122;
    org$pandalanguage$pandac$Position $tmp125;
    org$pandalanguage$pandac$Type* $tmp123 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp125);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp123, &$s124, ((panda$core$Int64) { 14 }), $tmp125, ((panda$core$Bit) { true }));
    $tmp122 = $tmp123;
    $tmp121 = $tmp122;
    $finallyReturn119 = $tmp121;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
    return $finallyReturn119;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn126;
    org$pandalanguage$pandac$Type* $tmp128;
    org$pandalanguage$pandac$Type* $tmp129;
    org$pandalanguage$pandac$Position $tmp132;
    org$pandalanguage$pandac$Type* $tmp130 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp132);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp130, &$s131, ((panda$core$Int64) { 23 }), $tmp132, ((panda$core$Bit) { true }));
    $tmp129 = $tmp130;
    $tmp128 = $tmp129;
    $finallyReturn126 = $tmp128;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
    return $finallyReturn126;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn133;
    org$pandalanguage$pandac$Type* $tmp135;
    org$pandalanguage$pandac$Type* $tmp136;
    org$pandalanguage$pandac$Position $tmp139;
    org$pandalanguage$pandac$Type* $tmp137 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp139);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp137, &$s138, ((panda$core$Int64) { 10 }), $tmp139, ((panda$core$Bit) { true }));
    $tmp136 = $tmp137;
    $tmp135 = $tmp136;
    $finallyReturn133 = $tmp135;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp135));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
    return $finallyReturn133;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes144;
    panda$collections$Array* $tmp145;
    panda$collections$Array* $tmp146;
    org$pandalanguage$pandac$Type* $tmp148;
    org$pandalanguage$pandac$Type* $finallyReturn149;
    org$pandalanguage$pandac$Type* $tmp151;
    org$pandalanguage$pandac$Type* $tmp152;
    org$pandalanguage$pandac$Position $tmp155;
    int $tmp143;
    {
        panda$collections$Array* $tmp147 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp147);
        $tmp146 = $tmp147;
        $tmp145 = $tmp146;
        subtypes144 = $tmp145;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp145));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
        org$pandalanguage$pandac$Type* $tmp149 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp148 = $tmp149;
        panda$collections$Array$add$panda$collections$Array$T(subtypes144, ((panda$core$Object*) $tmp148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
        org$pandalanguage$pandac$Type* $tmp153 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Position$init(&$tmp155);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp153, &$s154, ((panda$core$Int64) { 11 }), $tmp155, ((panda$collections$ListView*) subtypes144), ((panda$core$Bit) { true }));
        $tmp152 = $tmp153;
        $tmp151 = $tmp152;
        $finallyReturn149 = $tmp151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
        $tmp143 = 0;
        goto $l141;
        $l156:;
        return $finallyReturn149;
    }
    $l141:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes144));
    switch ($tmp143) {
        case 0: goto $l156;
    }
    $l158:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn158;
    org$pandalanguage$pandac$Type* $tmp160;
    org$pandalanguage$pandac$Type* $tmp161;
    org$pandalanguage$pandac$Position $tmp164;
    org$pandalanguage$pandac$Type* $tmp162 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp164);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp162, &$s163, ((panda$core$Int64) { 10 }), $tmp164, ((panda$core$Bit) { true }));
    $tmp161 = $tmp162;
    $tmp160 = $tmp161;
    $finallyReturn158 = $tmp160;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161));
    return $finallyReturn158;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn165;
    org$pandalanguage$pandac$Type* $tmp167;
    org$pandalanguage$pandac$Type* $tmp168;
    org$pandalanguage$pandac$Position $tmp171;
    org$pandalanguage$pandac$Type* $tmp169 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp171);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp169, &$s170, ((panda$core$Int64) { 10 }), $tmp171, ((panda$core$Bit) { true }));
    $tmp168 = $tmp169;
    $tmp167 = $tmp168;
    $finallyReturn165 = $tmp167;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
    return $finallyReturn165;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn172;
    org$pandalanguage$pandac$Type* $tmp174;
    org$pandalanguage$pandac$Type* $tmp175;
    org$pandalanguage$pandac$Position $tmp178;
    org$pandalanguage$pandac$Type* $tmp176 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp178);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp176, &$s177, ((panda$core$Int64) { 10 }), $tmp178, ((panda$core$Bit) { true }));
    $tmp175 = $tmp176;
    $tmp174 = $tmp175;
    $finallyReturn172 = $tmp174;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp174));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
    return $finallyReturn172;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn179;
    org$pandalanguage$pandac$Type* $tmp181;
    org$pandalanguage$pandac$Type* $tmp182;
    org$pandalanguage$pandac$Type* $tmp183 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp183, &$s184, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }));
    $tmp182 = $tmp183;
    $tmp181 = $tmp182;
    $finallyReturn179 = $tmp181;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
    return $finallyReturn179;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn185;
    org$pandalanguage$pandac$Type* $tmp187;
    org$pandalanguage$pandac$Type* $tmp188;
    org$pandalanguage$pandac$Type* $tmp189 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp189, &$s190, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }));
    $tmp188 = $tmp189;
    $tmp187 = $tmp188;
    $finallyReturn185 = $tmp187;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp187));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
    return $finallyReturn185;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn191;
    org$pandalanguage$pandac$Type* $tmp193;
    org$pandalanguage$pandac$Type* $tmp194;
    org$pandalanguage$pandac$Type* $tmp195 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp195, &$s196, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }));
    $tmp194 = $tmp195;
    $tmp193 = $tmp194;
    $finallyReturn191 = $tmp193;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
    return $finallyReturn191;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn197;
    org$pandalanguage$pandac$Type* $tmp199;
    org$pandalanguage$pandac$Type* $tmp200;
    org$pandalanguage$pandac$Type* $tmp201 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp201, &$s202, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }));
    $tmp200 = $tmp201;
    $tmp199 = $tmp200;
    $finallyReturn197 = $tmp199;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
    return $finallyReturn197;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn203;
    org$pandalanguage$pandac$Type* $tmp205;
    org$pandalanguage$pandac$Type* $tmp206;
    org$pandalanguage$pandac$Type* $tmp207 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp207, &$s208, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }));
    $tmp206 = $tmp207;
    $tmp205 = $tmp206;
    $finallyReturn203 = $tmp205;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
    return $finallyReturn203;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn209;
    org$pandalanguage$pandac$Type* $tmp211;
    org$pandalanguage$pandac$Type* $tmp212;
    org$pandalanguage$pandac$Type* $tmp213 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp213, &$s214, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }));
    $tmp212 = $tmp213;
    $tmp211 = $tmp212;
    $finallyReturn209 = $tmp211;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
    return $finallyReturn209;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn215;
    org$pandalanguage$pandac$Type* $tmp217;
    org$pandalanguage$pandac$Type* $tmp218;
    org$pandalanguage$pandac$Type* $tmp219 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp219, &$s220, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }));
    $tmp218 = $tmp219;
    $tmp217 = $tmp218;
    $finallyReturn215 = $tmp217;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
    return $finallyReturn215;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn221;
    org$pandalanguage$pandac$Type* $tmp223;
    org$pandalanguage$pandac$Type* $tmp224;
    org$pandalanguage$pandac$Type* $tmp225 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp225, &$s226, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }));
    $tmp224 = $tmp225;
    $tmp223 = $tmp224;
    $finallyReturn221 = $tmp223;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
    return $finallyReturn221;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn227;
    org$pandalanguage$pandac$Type* $tmp229;
    org$pandalanguage$pandac$Type* $tmp230;
    org$pandalanguage$pandac$Type* $tmp231 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp231, &$s232, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 32 }));
    $tmp230 = $tmp231;
    $tmp229 = $tmp230;
    $finallyReturn227 = $tmp229;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp229));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
    return $finallyReturn227;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn233;
    org$pandalanguage$pandac$Type* $tmp235;
    org$pandalanguage$pandac$Type* $tmp236;
    org$pandalanguage$pandac$Type* $tmp237 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp237, &$s238, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 64 }));
    $tmp236 = $tmp237;
    $tmp235 = $tmp236;
    $finallyReturn233 = $tmp235;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
    return $finallyReturn233;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn239;
    org$pandalanguage$pandac$Type* $tmp241;
    org$pandalanguage$pandac$Type* $tmp242;
    org$pandalanguage$pandac$Position $tmp245;
    org$pandalanguage$pandac$Type* $tmp243 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp245);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp243, &$s244, ((panda$core$Int64) { 10 }), $tmp245, ((panda$core$Bit) { true }));
    $tmp242 = $tmp243;
    $tmp241 = $tmp242;
    $finallyReturn239 = $tmp241;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
    return $finallyReturn239;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn246;
    org$pandalanguage$pandac$Type* $tmp248;
    org$pandalanguage$pandac$Type* $tmp249;
    org$pandalanguage$pandac$Position $tmp252;
    org$pandalanguage$pandac$Type* $tmp250 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp252);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp250, &$s251, ((panda$core$Int64) { 10 }), $tmp252, ((panda$core$Bit) { true }));
    $tmp249 = $tmp250;
    $tmp248 = $tmp249;
    $finallyReturn246 = $tmp248;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
    return $finallyReturn246;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn253;
    org$pandalanguage$pandac$Type* $tmp255;
    org$pandalanguage$pandac$Type* $tmp256;
    org$pandalanguage$pandac$Position $tmp259;
    org$pandalanguage$pandac$Type* $tmp257 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp259);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp257, &$s258, ((panda$core$Int64) { 10 }), $tmp259, ((panda$core$Bit) { true }));
    $tmp256 = $tmp257;
    $tmp255 = $tmp256;
    $finallyReturn253 = $tmp255;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
    return $finallyReturn253;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn260;
    org$pandalanguage$pandac$Type* $tmp262;
    org$pandalanguage$pandac$Type* $tmp263;
    org$pandalanguage$pandac$Position $tmp266;
    org$pandalanguage$pandac$Type* $tmp264 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp266);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp264, &$s265, ((panda$core$Int64) { 10 }), $tmp266, ((panda$core$Bit) { true }));
    $tmp263 = $tmp264;
    $tmp262 = $tmp263;
    $finallyReturn260 = $tmp262;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
    return $finallyReturn260;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn267;
    org$pandalanguage$pandac$Type* $tmp269;
    org$pandalanguage$pandac$Type* $tmp270;
    org$pandalanguage$pandac$Position $tmp273;
    org$pandalanguage$pandac$Type* $tmp271 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp273);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp271, &$s272, ((panda$core$Int64) { 10 }), $tmp273, ((panda$core$Bit) { true }));
    $tmp270 = $tmp271;
    $tmp269 = $tmp270;
    $finallyReturn267 = $tmp269;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
    return $finallyReturn267;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn274;
    org$pandalanguage$pandac$Type* $tmp276;
    org$pandalanguage$pandac$Type* $tmp277;
    org$pandalanguage$pandac$Position $tmp280;
    org$pandalanguage$pandac$Type* $tmp278 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp280);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp278, &$s279, ((panda$core$Int64) { 10 }), $tmp280, ((panda$core$Bit) { true }));
    $tmp277 = $tmp278;
    $tmp276 = $tmp277;
    $finallyReturn274 = $tmp276;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
    return $finallyReturn274;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn281;
    org$pandalanguage$pandac$Type* $tmp283;
    org$pandalanguage$pandac$Type* $tmp284;
    org$pandalanguage$pandac$Position $tmp287;
    org$pandalanguage$pandac$Type* $tmp285 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp287);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp285, &$s286, ((panda$core$Int64) { 10 }), $tmp287, ((panda$core$Bit) { true }));
    $tmp284 = $tmp285;
    $tmp283 = $tmp284;
    $finallyReturn281 = $tmp283;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp283));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp284));
    return $finallyReturn281;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn288;
    org$pandalanguage$pandac$Type* $tmp290;
    org$pandalanguage$pandac$Type* $tmp291;
    org$pandalanguage$pandac$Position $tmp294;
    org$pandalanguage$pandac$Type* $tmp292 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp294);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp292, &$s293, ((panda$core$Int64) { 10 }), $tmp294, ((panda$core$Bit) { true }));
    $tmp291 = $tmp292;
    $tmp290 = $tmp291;
    $finallyReturn288 = $tmp290;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
    return $finallyReturn288;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn295;
    org$pandalanguage$pandac$Type* $tmp297;
    org$pandalanguage$pandac$Type* $tmp298;
    org$pandalanguage$pandac$Position $tmp301;
    org$pandalanguage$pandac$Type* $tmp299 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp301);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp299, &$s300, ((panda$core$Int64) { 10 }), $tmp301, ((panda$core$Bit) { true }));
    $tmp298 = $tmp299;
    $tmp297 = $tmp298;
    $finallyReturn295 = $tmp297;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
    return $finallyReturn295;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn302;
    org$pandalanguage$pandac$Type* $tmp304;
    org$pandalanguage$pandac$Type* $tmp305;
    org$pandalanguage$pandac$Position $tmp308;
    org$pandalanguage$pandac$Type* $tmp306 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp308);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp306, &$s307, ((panda$core$Int64) { 10 }), $tmp308, ((panda$core$Bit) { true }));
    $tmp305 = $tmp306;
    $tmp304 = $tmp305;
    $finallyReturn302 = $tmp304;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp304));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
    return $finallyReturn302;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn309;
    org$pandalanguage$pandac$Type* $tmp311;
    org$pandalanguage$pandac$Type* $tmp312;
    org$pandalanguage$pandac$Position $tmp315;
    org$pandalanguage$pandac$Type* $tmp313 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp315);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp313, &$s314, ((panda$core$Int64) { 10 }), $tmp315, ((panda$core$Bit) { true }));
    $tmp312 = $tmp313;
    $tmp311 = $tmp312;
    $finallyReturn309 = $tmp311;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
    return $finallyReturn309;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn316;
    org$pandalanguage$pandac$Type* $tmp318;
    org$pandalanguage$pandac$Type* $tmp319;
    org$pandalanguage$pandac$Position $tmp322;
    org$pandalanguage$pandac$Type* $tmp320 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp322);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp320, &$s321, ((panda$core$Int64) { 10 }), $tmp322, ((panda$core$Bit) { true }));
    $tmp319 = $tmp320;
    $tmp318 = $tmp319;
    $finallyReturn316 = $tmp318;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp318));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
    return $finallyReturn316;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn323;
    org$pandalanguage$pandac$Type* $tmp325;
    org$pandalanguage$pandac$Type* $tmp326;
    org$pandalanguage$pandac$Position $tmp329;
    org$pandalanguage$pandac$Type* $tmp327 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp329);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp327, &$s328, ((panda$core$Int64) { 10 }), $tmp329, ((panda$core$Bit) { true }));
    $tmp326 = $tmp327;
    $tmp325 = $tmp326;
    $finallyReturn323 = $tmp325;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp325));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
    return $finallyReturn323;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn330;
    org$pandalanguage$pandac$Type* $tmp332;
    org$pandalanguage$pandac$Type* $tmp333;
    org$pandalanguage$pandac$Position $tmp336;
    org$pandalanguage$pandac$Type* $tmp334 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp336);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp334, &$s335, ((panda$core$Int64) { 10 }), $tmp336, ((panda$core$Bit) { true }));
    $tmp333 = $tmp334;
    $tmp332 = $tmp333;
    $finallyReturn330 = $tmp332;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp332));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
    return $finallyReturn330;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $finallyReturn337;
    org$pandalanguage$pandac$Type* $tmp339;
    org$pandalanguage$pandac$Type* $tmp340;
    panda$core$String* $tmp342;
    org$pandalanguage$pandac$Position $tmp344;
    org$pandalanguage$pandac$Type* $tmp341 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp343 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp342 = $tmp343;
    org$pandalanguage$pandac$Position$init(&$tmp344);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp341, $tmp342, ((panda$core$Int64) { 15 }), $tmp344, ((panda$core$Bit) { true }));
    $tmp340 = $tmp341;
    $tmp339 = $tmp340;
    $finallyReturn337 = $tmp339;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
    return $finallyReturn337;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $finallyReturn345;
    org$pandalanguage$pandac$Type* $tmp347;
    org$pandalanguage$pandac$Type* $tmp348;
    panda$core$String* $tmp350;
    panda$core$String* $tmp352;
    org$pandalanguage$pandac$Position $tmp355;
    org$pandalanguage$pandac$Type* $tmp349 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp353 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp352 = $tmp353;
    panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s351, $tmp352);
    $tmp350 = $tmp354;
    org$pandalanguage$pandac$Position$init(&$tmp355);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp349, $tmp350, ((panda$core$Int64) { 15 }), $tmp355, ((panda$core$Bit) { true }));
    $tmp348 = $tmp349;
    $tmp347 = $tmp348;
    $finallyReturn345 = $tmp347;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
    return $finallyReturn345;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Type* $finallyReturn356;
    org$pandalanguage$pandac$Type* $tmp358;
    org$pandalanguage$pandac$Type* $tmp359;
    panda$core$String* $tmp361;
    org$pandalanguage$pandac$Position $tmp363;
    org$pandalanguage$pandac$Type* $tmp360 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp362 = panda$core$Real64$convert$R$panda$core$String(p_value);
    $tmp361 = $tmp362;
    org$pandalanguage$pandac$Position$init(&$tmp363);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp360, $tmp361, ((panda$core$Int64) { 26 }), $tmp363, ((panda$core$Bit) { true }));
    $tmp359 = $tmp360;
    $tmp358 = $tmp359;
    $finallyReturn356 = $tmp358;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp358));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp361));
    return $finallyReturn356;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn364;
    org$pandalanguage$pandac$Type* $tmp366;
    org$pandalanguage$pandac$Type* $tmp367;
    org$pandalanguage$pandac$Position $tmp370;
    org$pandalanguage$pandac$Type* $tmp368 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp370);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp368, &$s369, ((panda$core$Int64) { 18 }), $tmp370, ((panda$core$Bit) { true }));
    $tmp367 = $tmp368;
    $tmp366 = $tmp367;
    $finallyReturn364 = $tmp366;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp366));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
    return $finallyReturn364;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn371;
    org$pandalanguage$pandac$Type* $tmp373;
    org$pandalanguage$pandac$Type* $tmp374;
    org$pandalanguage$pandac$Position $tmp377;
    org$pandalanguage$pandac$Type* $tmp375 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp377);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp375, &$s376, ((panda$core$Int64) { 19 }), $tmp377, ((panda$core$Bit) { true }));
    $tmp374 = $tmp375;
    $tmp373 = $tmp374;
    $finallyReturn371 = $tmp373;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp373));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp374));
    return $finallyReturn371;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn378;
    org$pandalanguage$pandac$Type* $tmp380;
    org$pandalanguage$pandac$Type* $tmp381;
    org$pandalanguage$pandac$Position $tmp384;
    org$pandalanguage$pandac$Type* $tmp382 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp384);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp382, &$s383, ((panda$core$Int64) { 10 }), $tmp384, ((panda$core$Bit) { true }));
    $tmp381 = $tmp382;
    $tmp380 = $tmp381;
    $finallyReturn378 = $tmp380;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
    return $finallyReturn378;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn385;
    org$pandalanguage$pandac$Type* $tmp387;
    org$pandalanguage$pandac$Type* $tmp388;
    org$pandalanguage$pandac$Position $tmp391;
    org$pandalanguage$pandac$Type* $tmp389 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp391);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp389, &$s390, ((panda$core$Int64) { 10 }), $tmp391, ((panda$core$Bit) { true }));
    $tmp388 = $tmp389;
    $tmp387 = $tmp388;
    $finallyReturn385 = $tmp387;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp387));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp388));
    return $finallyReturn385;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn392;
    org$pandalanguage$pandac$Type* $tmp394;
    org$pandalanguage$pandac$Type* $tmp395;
    org$pandalanguage$pandac$Position $tmp398;
    org$pandalanguage$pandac$Type* $tmp396 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp398);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp396, &$s397, ((panda$core$Int64) { 10 }), $tmp398, ((panda$core$Bit) { true }));
    $tmp395 = $tmp396;
    $tmp394 = $tmp395;
    $finallyReturn392 = $tmp394;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp394));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp395));
    return $finallyReturn392;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children403;
    panda$collections$Array* $tmp404;
    panda$collections$Array* $tmp405;
    org$pandalanguage$pandac$Type* $tmp407;
    org$pandalanguage$pandac$Position $tmp410;
    org$pandalanguage$pandac$Type* $finallyReturn410;
    org$pandalanguage$pandac$Type* $tmp412;
    org$pandalanguage$pandac$Type* $tmp413;
    panda$core$String* $tmp415;
    panda$core$String* $tmp416;
    panda$core$String* $tmp417;
    panda$core$String* $tmp418;
    int $tmp402;
    {
        panda$collections$Array* $tmp406 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp406);
        $tmp405 = $tmp406;
        $tmp404 = $tmp405;
        children403 = $tmp404;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp404));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp405));
        org$pandalanguage$pandac$Type* $tmp408 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Position$init(&$tmp410);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp408, &$s409, ((panda$core$Int64) { 10 }), $tmp410, ((panda$core$Bit) { true }));
        $tmp407 = $tmp408;
        panda$collections$Array$add$panda$collections$Array$T(children403, ((panda$core$Object*) $tmp407));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp407));
        panda$collections$Array$add$panda$collections$Array$T(children403, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp414 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp420 = panda$core$String$convert$R$panda$core$String(&$s419);
        $tmp418 = $tmp420;
        panda$core$String* $tmp422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp418, &$s421);
        $tmp417 = $tmp422;
        panda$core$String* $tmp423 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp417, ((panda$core$Object*) p_t));
        $tmp416 = $tmp423;
        panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp416, &$s424);
        $tmp415 = $tmp425;
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp414, $tmp415, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children403), p_t->resolved);
        $tmp413 = $tmp414;
        $tmp412 = $tmp413;
        $finallyReturn410 = $tmp412;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp412));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp418));
        $tmp402 = 0;
        goto $l400;
        $l426:;
        return $finallyReturn410;
    }
    $l400:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children403));
    switch ($tmp402) {
        case 0: goto $l426;
    }
    $l428:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children432;
    panda$collections$Array* $tmp433;
    panda$collections$Array* $tmp434;
    org$pandalanguage$pandac$Type* $tmp436;
    org$pandalanguage$pandac$Position $tmp439;
    org$pandalanguage$pandac$Type* $finallyReturn439;
    org$pandalanguage$pandac$Type* $tmp441;
    org$pandalanguage$pandac$Type* $tmp442;
    panda$core$String* $tmp444;
    panda$core$String* $tmp445;
    panda$core$String* $tmp446;
    panda$core$String* $tmp447;
    int $tmp431;
    {
        panda$collections$Array* $tmp435 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp435);
        $tmp434 = $tmp435;
        $tmp433 = $tmp434;
        children432 = $tmp433;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp433));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp434));
        org$pandalanguage$pandac$Type* $tmp437 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Position$init(&$tmp439);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp437, &$s438, ((panda$core$Int64) { 10 }), $tmp439, ((panda$core$Bit) { true }));
        $tmp436 = $tmp437;
        panda$collections$Array$add$panda$collections$Array$T(children432, ((panda$core$Object*) $tmp436));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp436));
        panda$collections$Array$add$panda$collections$Array$T(children432, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp443 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp449 = panda$core$String$convert$R$panda$core$String(&$s448);
        $tmp447 = $tmp449;
        panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp447, &$s450);
        $tmp446 = $tmp451;
        panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp446, ((panda$core$Object*) p_t));
        $tmp445 = $tmp452;
        panda$core$String* $tmp454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, &$s453);
        $tmp444 = $tmp454;
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp443, $tmp444, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children432), p_t->resolved);
        $tmp442 = $tmp443;
        $tmp441 = $tmp442;
        $finallyReturn439 = $tmp441;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp441));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp442));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
        $tmp431 = 0;
        goto $l429;
        $l455:;
        return $finallyReturn439;
    }
    $l429:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children432));
    switch ($tmp431) {
        case 0: goto $l455;
    }
    $l457:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children461;
    panda$collections$Array* $tmp462;
    panda$collections$Array* $tmp463;
    org$pandalanguage$pandac$Type* $tmp465;
    org$pandalanguage$pandac$Position $tmp468;
    org$pandalanguage$pandac$Type* $tmp469;
    org$pandalanguage$pandac$Type* $tmp472;
    org$pandalanguage$pandac$Type* $tmp474;
    org$pandalanguage$pandac$Type* $tmp477;
    org$pandalanguage$pandac$Type* $tmp479;
    org$pandalanguage$pandac$Type* $tmp482;
    org$pandalanguage$pandac$Type* $tmp484;
    org$pandalanguage$pandac$Type* $finallyReturn485;
    org$pandalanguage$pandac$Type* $tmp487;
    org$pandalanguage$pandac$Type* $tmp488;
    panda$core$String* $tmp490;
    panda$core$String* $tmp491;
    panda$core$String* $tmp492;
    panda$core$String* $tmp493;
    panda$core$String* $tmp494;
    panda$core$String* $tmp495;
    org$pandalanguage$pandac$Type* $tmp503;
    int $tmp460;
    {
        panda$collections$Array* $tmp464 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp464);
        $tmp463 = $tmp464;
        $tmp462 = $tmp463;
        children461 = $tmp462;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp462));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp463));
        org$pandalanguage$pandac$Type* $tmp466 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Position$init(&$tmp468);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp466, &$s467, ((panda$core$Int64) { 10 }), $tmp468, ((panda$core$Bit) { true }));
        $tmp465 = $tmp466;
        panda$collections$Array$add$panda$collections$Array$T(children461, ((panda$core$Object*) $tmp465));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp465));
        panda$collections$Array$add$panda$collections$Array$T(children461, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp470 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp469 = $tmp470;
        panda$core$Bit $tmp471 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp469);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
        if ($tmp471.value) {
        {
            org$pandalanguage$pandac$Type* $tmp473 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp472 = $tmp473;
            panda$collections$Array$add$panda$collections$Array$T(children461, ((panda$core$Object*) $tmp472));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp475 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp474 = $tmp475;
        panda$core$Bit $tmp476 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp474);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
        if ($tmp476.value) {
        {
            org$pandalanguage$pandac$Type* $tmp478 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp477 = $tmp478;
            panda$collections$Array$add$panda$collections$Array$T(children461, ((panda$core$Object*) $tmp477));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp477));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp480 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp479 = $tmp480;
        panda$core$Bit $tmp481 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp479);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
        if ($tmp481.value) {
        {
            org$pandalanguage$pandac$Type* $tmp483 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp482 = $tmp483;
            panda$collections$Array$add$panda$collections$Array$T(children461, ((panda$core$Object*) $tmp482));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp485 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp484 = $tmp485;
            panda$collections$Array$add$panda$collections$Array$T(children461, ((panda$core$Object*) $tmp484));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
        }
        }
        }
        }
        org$pandalanguage$pandac$Type* $tmp489 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp497 = panda$core$String$convert$R$panda$core$String(&$s496);
        $tmp495 = $tmp497;
        panda$core$String* $tmp499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp495, &$s498);
        $tmp494 = $tmp499;
        panda$core$String* $tmp500 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp494, ((panda$core$Object*) p_t));
        $tmp493 = $tmp500;
        panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp493, &$s501);
        $tmp492 = $tmp502;
        org$pandalanguage$pandac$Type* $tmp504 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
        $tmp503 = $tmp504;
        panda$core$String* $tmp505 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp492, ((panda$core$Object*) $tmp503));
        $tmp491 = $tmp505;
        panda$core$String* $tmp507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp491, &$s506);
        $tmp490 = $tmp507;
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp489, $tmp490, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children461), p_t->resolved);
        $tmp488 = $tmp489;
        $tmp487 = $tmp488;
        $finallyReturn485 = $tmp487;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp487));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp488));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp491));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp492));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp493));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp494));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
        $tmp460 = 0;
        goto $l458;
        $l508:;
        return $finallyReturn485;
    }
    $l458:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children461));
    switch ($tmp460) {
        case 0: goto $l508;
    }
    $l510:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn510;
    org$pandalanguage$pandac$Type* $tmp512;
    org$pandalanguage$pandac$Type* $tmp513;
    org$pandalanguage$pandac$Position $tmp516;
    org$pandalanguage$pandac$Type* $tmp514 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp516);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp514, &$s515, ((panda$core$Int64) { 16 }), $tmp516, ((panda$core$Bit) { true }));
    $tmp513 = $tmp514;
    $tmp512 = $tmp513;
    $finallyReturn510 = $tmp512;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp512));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp513));
    return $finallyReturn510;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $finallyReturn517;
    org$pandalanguage$pandac$Type* $tmp519;
    org$pandalanguage$pandac$Type* $tmp520;
    org$pandalanguage$pandac$Position $tmp523;
    org$pandalanguage$pandac$Type* $tmp521 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp523);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp521, &$s522, ((panda$core$Int64) { 16 }), $tmp523, ((panda$core$Bit) { true }));
    $tmp520 = $tmp521;
    $tmp519 = $tmp520;
    $finallyReturn517 = $tmp519;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp519));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp520));
    return $finallyReturn517;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn524;
    panda$core$Bit $tmp531 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s530);
    bool $tmp529 = $tmp531.value;
    if ($tmp529) goto $l532;
    panda$core$Bit $tmp534 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s533);
    $tmp529 = $tmp534.value;
    $l532:;
    panda$core$Bit $tmp535 = { $tmp529 };
    bool $tmp528 = $tmp535.value;
    if ($tmp528) goto $l536;
    panda$core$Bit $tmp538 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s537);
    $tmp528 = $tmp538.value;
    $l536:;
    panda$core$Bit $tmp539 = { $tmp528 };
    bool $tmp527 = $tmp539.value;
    if ($tmp527) goto $l540;
    panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp527 = $tmp541.value;
    $l540:;
    panda$core$Bit $tmp542 = { $tmp527 };
    bool $tmp526 = $tmp542.value;
    if ($tmp526) goto $l543;
    panda$core$Bit $tmp544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    $tmp526 = $tmp544.value;
    $l543:;
    panda$core$Bit $tmp545 = { $tmp526 };
    $finallyReturn524 = $tmp545;
    return $finallyReturn524;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn546;
    panda$core$Bit $tmp551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp550 = $tmp551.value;
    if ($tmp550) goto $l552;
    panda$core$Bit $tmp553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp550 = $tmp553.value;
    $l552:;
    panda$core$Bit $tmp554 = { $tmp550 };
    bool $tmp549 = $tmp554.value;
    if ($tmp549) goto $l555;
    panda$core$Bit $tmp556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp549 = $tmp556.value;
    $l555:;
    panda$core$Bit $tmp557 = { $tmp549 };
    bool $tmp548 = $tmp557.value;
    if ($tmp548) goto $l558;
    panda$core$Bit $tmp559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp548 = $tmp559.value;
    $l558:;
    panda$core$Bit $tmp560 = { $tmp548 };
    $finallyReturn546 = $tmp560;
    return $finallyReturn546;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn561;
    panda$core$Bit $tmp564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    bool $tmp563 = $tmp564.value;
    if ($tmp563) goto $l565;
    panda$core$Bit $tmp567 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s566);
    $tmp563 = $tmp567.value;
    $l565:;
    panda$core$Bit $tmp568 = { $tmp563 };
    $finallyReturn561 = $tmp568;
    return $finallyReturn561;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn569;
    panda$core$Bit $tmp572 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s571);
    $finallyReturn569 = $tmp572;
    return $finallyReturn569;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn573;
    panda$core$Bit $tmp576 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp575 = $tmp576.value;
    if ($tmp575) goto $l577;
    panda$core$Bit $tmp578 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp575 = $tmp578.value;
    $l577:;
    panda$core$Bit $tmp579 = { $tmp575 };
    $finallyReturn573 = $tmp579;
    return $finallyReturn573;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn580;
    panda$core$Bit $finallyReturn582;
    switch (self->typeKind.value) {
        case 10:
        case 11:
        case 21:
        case 22:
        {
            $finallyReturn580 = ((panda$core$Bit) { true });
            return $finallyReturn580;
        }
        break;
        default:
        {
            $finallyReturn582 = ((panda$core$Bit) { false });
            return $finallyReturn582;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn584;
    panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp586 = $tmp587.value;
    if ($tmp586) goto $l588;
    panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp586 = $tmp589.value;
    $l588:;
    panda$core$Bit $tmp590 = { $tmp586 };
    $finallyReturn584 = $tmp590;
    return $finallyReturn584;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn591;
    panda$core$Bit $tmp594 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s593);
    $finallyReturn591 = $tmp594;
    return $finallyReturn591;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn596;
    panda$core$Object* $tmp598;
    panda$core$Bit $finallyReturn601;
    panda$core$Object* $tmp606;
    panda$core$Bit $tmp596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp596.value) {
    {
        panda$core$Object* $tmp599 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp598 = $tmp599;
        panda$core$Bit $tmp600 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp598));
        $finallyReturn596 = $tmp600;
        panda$core$Panda$unref$panda$core$Object($tmp598);
        return $finallyReturn596;
    }
    }
    panda$core$Bit $tmp604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp603 = $tmp604.value;
    if (!$tmp603) goto $l605;
    panda$core$Object* $tmp607 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp606 = $tmp607;
    panda$core$Bit $tmp609 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp606))->name, &$s608);
    $tmp603 = $tmp609.value;
    panda$core$Panda$unref$panda$core$Object($tmp606);
    $l605:;
    panda$core$Bit $tmp610 = { $tmp603 };
    $finallyReturn601 = $tmp610;
    return $finallyReturn601;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $finallyReturn612;
    panda$core$Object* $tmp614;
    panda$core$Bit $finallyReturn617;
    panda$core$Object* $tmp622;
    panda$core$Bit $tmp612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp612.value) {
    {
        panda$core$Object* $tmp615 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp614 = $tmp615;
        panda$core$Bit $tmp616 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp614));
        $finallyReturn612 = $tmp616;
        panda$core$Panda$unref$panda$core$Object($tmp614);
        return $finallyReturn612;
    }
    }
    panda$core$Bit $tmp620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp619 = $tmp620.value;
    if (!$tmp619) goto $l621;
    panda$core$Object* $tmp623 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp622 = $tmp623;
    panda$core$Bit $tmp625 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp622))->name, &$s624);
    $tmp619 = $tmp625.value;
    panda$core$Panda$unref$panda$core$Object($tmp622);
    $l621:;
    panda$core$Bit $tmp626 = { $tmp619 };
    $finallyReturn617 = $tmp626;
    return $finallyReturn617;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $finallyReturn631;
    org$pandalanguage$pandac$Type* $tmp633;
    panda$collections$Array* subtypes636;
    panda$collections$Array* $tmp637;
    panda$collections$Array* $tmp638;
    org$pandalanguage$pandac$Type* $finallyReturn639;
    org$pandalanguage$pandac$Type* $tmp641;
    org$pandalanguage$pandac$Type* $tmp642;
    panda$core$String* $tmp644;
    panda$core$String* $tmp645;
    org$pandalanguage$pandac$Position $tmp649;
    int $tmp630;
    {
        panda$core$Bit $tmp631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp631.value) {
        {
            $tmp633 = self;
            $finallyReturn631 = $tmp633;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp633));
            $tmp630 = 0;
            goto $l628;
            $l634:;
            return $finallyReturn631;
        }
        }
        panda$collections$Array* $tmp639 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp639);
        $tmp638 = $tmp639;
        $tmp637 = $tmp638;
        subtypes636 = $tmp637;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp637));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
        panda$collections$Array$add$panda$collections$Array$T(subtypes636, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp643 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp646 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp645 = $tmp646;
        panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp645, &$s647);
        $tmp644 = $tmp648;
        org$pandalanguage$pandac$Position$init(&$tmp649);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp643, $tmp644, ((panda$core$Int64) { 11 }), $tmp649, ((panda$collections$ListView*) subtypes636), ((panda$core$Bit) { true }));
        $tmp642 = $tmp643;
        $tmp641 = $tmp642;
        $finallyReturn639 = $tmp641;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp641));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
        $tmp630 = 1;
        goto $l628;
        $l650:;
        return $finallyReturn639;
    }
    $l628:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes636));
    switch ($tmp630) {
        case 1: goto $l650;
        case 0: goto $l634;
    }
    $l652:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $finallyReturn653;
    org$pandalanguage$pandac$Type* $tmp655;
    org$pandalanguage$pandac$Type* $finallyReturn656;
    org$pandalanguage$pandac$Type* $tmp658;
    panda$core$Object* $tmp659;
    panda$core$Bit $tmp653 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp653.value) {
    {
        $tmp655 = self;
        $finallyReturn653 = $tmp655;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp655));
        return $finallyReturn653;
    }
    }
    panda$core$Object* $tmp660 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp659 = $tmp660;
    $tmp658 = ((org$pandalanguage$pandac$Type*) $tmp659);
    $finallyReturn656 = $tmp658;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp658));
    panda$core$Panda$unref$panda$core$Object($tmp659);
    return $finallyReturn656;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $finallyReturn665;
    org$pandalanguage$pandac$Type* $tmp667;
    org$pandalanguage$pandac$Type* $tmp670;
    org$pandalanguage$pandac$Type* $finallyReturn673;
    org$pandalanguage$pandac$Type* $tmp675;
    org$pandalanguage$pandac$Type* $finallyReturn677;
    org$pandalanguage$pandac$Type* $tmp679;
    org$pandalanguage$pandac$Type* $tmp680;
    org$pandalanguage$pandac$Type* $tmp684;
    org$pandalanguage$pandac$Type* $finallyReturn687;
    org$pandalanguage$pandac$Type* $tmp689;
    org$pandalanguage$pandac$Type* $finallyReturn691;
    org$pandalanguage$pandac$Type* $tmp693;
    org$pandalanguage$pandac$Type* $tmp694;
    org$pandalanguage$pandac$Type* $finallyReturn702;
    org$pandalanguage$pandac$Type* $tmp704;
    org$pandalanguage$pandac$Type* $finallyReturn711;
    org$pandalanguage$pandac$Type* $tmp713;
    org$pandalanguage$pandac$Type* $finallyReturn721;
    org$pandalanguage$pandac$Type* $tmp723;
    org$pandalanguage$pandac$Type* $finallyReturn728;
    org$pandalanguage$pandac$Type* $tmp730;
    org$pandalanguage$pandac$Type* $tmp731;
    org$pandalanguage$pandac$Type* $finallyReturn734;
    org$pandalanguage$pandac$Type* $tmp736;
    org$pandalanguage$pandac$Type* $tmp737;
    org$pandalanguage$pandac$Type* $finallyReturn746;
    org$pandalanguage$pandac$Type* $tmp748;
    org$pandalanguage$pandac$Type* $finallyReturn753;
    org$pandalanguage$pandac$Type* $tmp755;
    org$pandalanguage$pandac$Type* $tmp756;
    org$pandalanguage$pandac$Type* $finallyReturn759;
    org$pandalanguage$pandac$Type* $tmp761;
    org$pandalanguage$pandac$Type* $tmp762;
    org$pandalanguage$pandac$Type* $finallyReturn766;
    org$pandalanguage$pandac$Type* $tmp768;
    org$pandalanguage$pandac$Type* $tmp769;
    org$pandalanguage$pandac$Type* $tmp770;
    panda$core$Object* $tmp771;
    org$pandalanguage$pandac$Type* $finallyReturn777;
    org$pandalanguage$pandac$Type* $tmp779;
    org$pandalanguage$pandac$Type* $tmp780;
    org$pandalanguage$pandac$Type* $tmp781;
    panda$core$Object* $tmp782;
    org$pandalanguage$pandac$Type* t1788;
    org$pandalanguage$pandac$Type* $tmp789;
    org$pandalanguage$pandac$Type* $tmp790;
    org$pandalanguage$pandac$Type* t2792;
    org$pandalanguage$pandac$Type* $tmp793;
    org$pandalanguage$pandac$Type* $tmp794;
    panda$collections$Set* ancestors804;
    panda$collections$Set* $tmp805;
    panda$collections$Set* $tmp806;
    org$pandalanguage$pandac$Type* t808;
    org$pandalanguage$pandac$Type* $tmp809;
    org$pandalanguage$pandac$ClassDecl* cl810;
    org$pandalanguage$pandac$ClassDecl* $tmp811;
    org$pandalanguage$pandac$ClassDecl* $tmp812;
    org$pandalanguage$pandac$Type* $tmp817;
    org$pandalanguage$pandac$Type* $tmp818;
    org$pandalanguage$pandac$Type* $tmp819;
    org$pandalanguage$pandac$ClassDecl* $tmp821;
    org$pandalanguage$pandac$ClassDecl* $tmp822;
    org$pandalanguage$pandac$ClassDecl* $tmp823;
    org$pandalanguage$pandac$ClassDecl* $tmp825;
    org$pandalanguage$pandac$ClassDecl* $tmp826;
    org$pandalanguage$pandac$Type* $tmp827;
    org$pandalanguage$pandac$Type* $tmp828;
    org$pandalanguage$pandac$ClassDecl* $tmp829;
    org$pandalanguage$pandac$ClassDecl* $tmp830;
    org$pandalanguage$pandac$ClassDecl* $tmp831;
    org$pandalanguage$pandac$Type* $finallyReturn836;
    org$pandalanguage$pandac$Type* $tmp838;
    org$pandalanguage$pandac$Type* $tmp842;
    org$pandalanguage$pandac$Type* $tmp843;
    org$pandalanguage$pandac$Type* $tmp844;
    org$pandalanguage$pandac$ClassDecl* $tmp846;
    org$pandalanguage$pandac$ClassDecl* $tmp847;
    org$pandalanguage$pandac$ClassDecl* $tmp848;
    org$pandalanguage$pandac$ClassDecl* $tmp850;
    org$pandalanguage$pandac$ClassDecl* $tmp851;
    org$pandalanguage$pandac$Type* $finallyReturn852;
    org$pandalanguage$pandac$Type* $tmp854;
    org$pandalanguage$pandac$Type* $tmp855;
    int $tmp664;
    {
        panda$core$Bit $tmp665 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp665.value) {
        {
            $tmp667 = self;
            $finallyReturn665 = $tmp667;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp667));
            $tmp664 = 0;
            goto $l662;
            $l668:;
            return $finallyReturn665;
        }
        }
        org$pandalanguage$pandac$Type* $tmp671 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp670 = $tmp671;
        panda$core$Bit $tmp672 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp670);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp670));
        if ($tmp672.value) {
        {
            panda$core$Bit $tmp673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp673.value) {
            {
                $tmp675 = p_other;
                $finallyReturn673 = $tmp675;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp675));
                $tmp664 = 1;
                goto $l662;
                $l676:;
                return $finallyReturn673;
            }
            }
            org$pandalanguage$pandac$Type* $tmp681 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp680 = $tmp681;
            $tmp679 = $tmp680;
            $finallyReturn677 = $tmp679;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp679));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp680));
            $tmp664 = 2;
            goto $l662;
            $l682:;
            return $finallyReturn677;
        }
        }
        org$pandalanguage$pandac$Type* $tmp685 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp684 = $tmp685;
        panda$core$Bit $tmp686 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp684);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
        if ($tmp686.value) {
        {
            panda$core$Bit $tmp687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp687.value) {
            {
                $tmp689 = self;
                $finallyReturn687 = $tmp689;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp689));
                $tmp664 = 3;
                goto $l662;
                $l690:;
                return $finallyReturn687;
            }
            }
            org$pandalanguage$pandac$Type* $tmp695 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp694 = $tmp695;
            $tmp693 = $tmp694;
            $finallyReturn691 = $tmp693;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp693));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
            $tmp664 = 4;
            goto $l662;
            $l696:;
            return $finallyReturn691;
        }
        }
        panda$core$Bit $tmp699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp698 = $tmp699.value;
        if (!$tmp698) goto $l700;
        panda$core$Bit $tmp701 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp698 = $tmp701.value;
        $l700:;
        panda$core$Bit $tmp702 = { $tmp698 };
        if ($tmp702.value) {
        {
            $tmp704 = p_other;
            $finallyReturn702 = $tmp704;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp704));
            $tmp664 = 5;
            goto $l662;
            $l705:;
            return $finallyReturn702;
        }
        }
        panda$core$Bit $tmp708 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp707 = $tmp708.value;
        if (!$tmp707) goto $l709;
        panda$core$Bit $tmp710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
        $tmp707 = $tmp710.value;
        $l709:;
        panda$core$Bit $tmp711 = { $tmp707 };
        if ($tmp711.value) {
        {
            $tmp713 = self;
            $finallyReturn711 = $tmp713;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp713));
            $tmp664 = 6;
            goto $l662;
            $l714:;
            return $finallyReturn711;
        }
        }
        panda$core$Bit $tmp716 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp716.value) {
        {
            panda$core$Bit $tmp718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
            bool $tmp717 = $tmp718.value;
            if ($tmp717) goto $l719;
            panda$core$Bit $tmp720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 26 }));
            $tmp717 = $tmp720.value;
            $l719:;
            panda$core$Bit $tmp721 = { $tmp717 };
            if ($tmp721.value) {
            {
                $tmp723 = self;
                $finallyReturn721 = $tmp723;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp723));
                $tmp664 = 7;
                goto $l662;
                $l724:;
                return $finallyReturn721;
            }
            }
            panda$core$Bit $tmp726 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp726.value) {
            {
                panda$core$Bit $tmp728 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s727);
                if ($tmp728.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp732 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp731 = $tmp732;
                    $tmp730 = $tmp731;
                    $finallyReturn728 = $tmp730;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp730));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp731));
                    $tmp664 = 8;
                    goto $l662;
                    $l733:;
                    return $finallyReturn728;
                }
                }
                org$pandalanguage$pandac$Type* $tmp738 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp737 = $tmp738;
                $tmp736 = $tmp737;
                $finallyReturn734 = $tmp736;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp736));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp737));
                $tmp664 = 9;
                goto $l662;
                $l739:;
                return $finallyReturn734;
            }
            }
        }
        }
        panda$core$Bit $tmp741 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp741.value) {
        {
            panda$core$Bit $tmp743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
            bool $tmp742 = $tmp743.value;
            if ($tmp742) goto $l744;
            panda$core$Bit $tmp745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
            $tmp742 = $tmp745.value;
            $l744:;
            panda$core$Bit $tmp746 = { $tmp742 };
            if ($tmp746.value) {
            {
                $tmp748 = p_other;
                $finallyReturn746 = $tmp748;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp748));
                $tmp664 = 10;
                goto $l662;
                $l749:;
                return $finallyReturn746;
            }
            }
            panda$core$Bit $tmp751 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp751.value) {
            {
                panda$core$Bit $tmp753 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s752);
                if ($tmp753.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp757 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp756 = $tmp757;
                    $tmp755 = $tmp756;
                    $finallyReturn753 = $tmp755;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp755));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp756));
                    $tmp664 = 11;
                    goto $l662;
                    $l758:;
                    return $finallyReturn753;
                }
                }
                org$pandalanguage$pandac$Type* $tmp763 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp762 = $tmp763;
                $tmp761 = $tmp762;
                $finallyReturn759 = $tmp761;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp761));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
                $tmp664 = 12;
                goto $l662;
                $l764:;
                return $finallyReturn759;
            }
            }
        }
        }
        panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp766.value) {
        {
            panda$core$Object* $tmp772 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp771 = $tmp772;
            org$pandalanguage$pandac$Type* $tmp773 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp771), p_compiler, p_other);
            $tmp770 = $tmp773;
            org$pandalanguage$pandac$Type* $tmp774 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp770);
            $tmp769 = $tmp774;
            $tmp768 = $tmp769;
            $finallyReturn766 = $tmp768;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp768));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp769));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp770));
            panda$core$Panda$unref$panda$core$Object($tmp771);
            $tmp664 = 13;
            goto $l662;
            $l775:;
            return $finallyReturn766;
        }
        }
        panda$core$Bit $tmp777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp777.value) {
        {
            panda$core$Object* $tmp783 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
            $tmp782 = $tmp783;
            org$pandalanguage$pandac$Type* $tmp784 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp782));
            $tmp781 = $tmp784;
            org$pandalanguage$pandac$Type* $tmp785 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp781);
            $tmp780 = $tmp785;
            $tmp779 = $tmp780;
            $finallyReturn777 = $tmp779;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp779));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp780));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp781));
            panda$core$Panda$unref$panda$core$Object($tmp782);
            $tmp664 = 14;
            goto $l662;
            $l786:;
            return $finallyReturn777;
        }
        }
        org$pandalanguage$pandac$Type* $tmp791 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp790 = $tmp791;
        $tmp789 = $tmp790;
        t1788 = $tmp789;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp789));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp790));
        org$pandalanguage$pandac$Type* $tmp795 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp794 = $tmp795;
        $tmp793 = $tmp794;
        t2792 = $tmp793;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp793));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp794));
        panda$core$Bit $tmp797 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t1788);
        bool $tmp796 = $tmp797.value;
        if (!$tmp796) goto $l798;
        panda$core$Bit $tmp799 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t2792);
        $tmp796 = $tmp799.value;
        $l798:;
        panda$core$Bit $tmp800 = { $tmp796 };
        if ($tmp800.value) {
        {
            int $tmp803;
            {
                panda$collections$Set* $tmp807 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
                panda$collections$Set$init($tmp807);
                $tmp806 = $tmp807;
                $tmp805 = $tmp806;
                ancestors804 = $tmp805;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp805));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp806));
                $tmp809 = self;
                t808 = $tmp809;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp809));
                org$pandalanguage$pandac$ClassDecl* $tmp813 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1788);
                $tmp812 = $tmp813;
                $tmp811 = $tmp812;
                cl810 = $tmp811;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp811));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
                $l814:;
                bool $tmp816 = ((panda$core$Bit) { cl810 != NULL }).value;
                if (!$tmp816) goto $l815;
                {
                    panda$collections$Set$add$panda$collections$Set$T(ancestors804, ((panda$collections$Key*) t808));
                    if (((panda$core$Bit) { cl810->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp817 = t808;
                            org$pandalanguage$pandac$Type* $tmp820 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t808, cl810->rawSuper);
                            $tmp819 = $tmp820;
                            $tmp818 = $tmp819;
                            t808 = $tmp818;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp818));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp819));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp817));
                        }
                        {
                            $tmp821 = cl810;
                            org$pandalanguage$pandac$ClassDecl* $tmp824 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t808);
                            $tmp823 = $tmp824;
                            $tmp822 = $tmp823;
                            cl810 = $tmp822;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp822));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp823));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp821));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp825 = cl810;
                            $tmp826 = NULL;
                            cl810 = $tmp826;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp826));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp825));
                        }
                    }
                    }
                }
                goto $l814;
                $l815:;
                {
                    $tmp827 = t808;
                    $tmp828 = p_other;
                    t808 = $tmp828;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp828));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp827));
                }
                {
                    $tmp829 = cl810;
                    org$pandalanguage$pandac$ClassDecl* $tmp832 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t2792);
                    $tmp831 = $tmp832;
                    $tmp830 = $tmp831;
                    cl810 = $tmp830;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp830));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp831));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp829));
                }
                $l833:;
                bool $tmp835 = ((panda$core$Bit) { cl810 != NULL }).value;
                if (!$tmp835) goto $l834;
                {
                    panda$core$Bit $tmp836 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors804, ((panda$collections$Key*) t808));
                    if ($tmp836.value) {
                    {
                        $tmp838 = t808;
                        $finallyReturn836 = $tmp838;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp838));
                        $tmp803 = 0;
                        goto $l801;
                        $l839:;
                        $tmp664 = 15;
                        goto $l662;
                        $l840:;
                        return $finallyReturn836;
                    }
                    }
                    if (((panda$core$Bit) { cl810->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp842 = t808;
                            org$pandalanguage$pandac$Type* $tmp845 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t808, cl810->rawSuper);
                            $tmp844 = $tmp845;
                            $tmp843 = $tmp844;
                            t808 = $tmp843;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp843));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp844));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp842));
                        }
                        {
                            $tmp846 = cl810;
                            org$pandalanguage$pandac$ClassDecl* $tmp849 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t808);
                            $tmp848 = $tmp849;
                            $tmp847 = $tmp848;
                            cl810 = $tmp847;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp847));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp848));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp846));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp850 = cl810;
                            $tmp851 = NULL;
                            cl810 = $tmp851;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp851));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
                        }
                    }
                    }
                }
                goto $l833;
                $l834:;
            }
            $tmp803 = -1;
            goto $l801;
            $l801:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors804));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t808));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl810));
            switch ($tmp803) {
                case 0: goto $l839;
                case -1: goto $l852;
            }
            $l852:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp856 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp855 = $tmp856;
        $tmp854 = $tmp855;
        $finallyReturn852 = $tmp854;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp854));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp855));
        $tmp664 = 16;
        goto $l662;
        $l857:;
        return $finallyReturn852;
    }
    $l662:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1788));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2792));
    switch ($tmp664) {
        case 4: goto $l696;
        case 3: goto $l690;
        case 14: goto $l786;
        case 9: goto $l739;
        case 10: goto $l749;
        case 13: goto $l775;
        case 6: goto $l714;
        case 7: goto $l724;
        case 12: goto $l764;
        case 11: goto $l758;
        case 5: goto $l705;
        case 16: goto $l857;
        case 15: goto $l840;
        case 1: goto $l676;
        case 2: goto $l682;
        case 0: goto $l668;
        case 8: goto $l733;
    }
    $l859:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* $finallyReturn861;
    org$pandalanguage$pandac$Type* $tmp863;
    org$pandalanguage$pandac$Type* found868;
    org$pandalanguage$pandac$Type* $tmp869;
    panda$core$Object* $tmp870;
    org$pandalanguage$pandac$Type* $finallyReturn871;
    org$pandalanguage$pandac$Type* $tmp873;
    org$pandalanguage$pandac$Type* $finallyReturn875;
    org$pandalanguage$pandac$Type* $tmp877;
    panda$collections$Array* remapped884;
    panda$collections$Array* $tmp885;
    panda$collections$Array* $tmp886;
    panda$core$MutableString* name888;
    panda$core$MutableString* $tmp889;
    panda$core$MutableString* $tmp890;
    panda$core$Object* $tmp892;
    panda$core$Char8 $tmp894;
    panda$core$String* separator895;
    panda$core$String* $tmp896;
    panda$core$Range$LTpanda$core$Int64$GT $tmp898;
    org$pandalanguage$pandac$Type* child916;
    org$pandalanguage$pandac$Type* $tmp917;
    org$pandalanguage$pandac$Type* $tmp918;
    panda$core$Object* $tmp919;
    panda$core$String* $tmp923;
    panda$core$String* $tmp924;
    panda$core$Char8 $tmp933;
    org$pandalanguage$pandac$Type* $finallyReturn933;
    org$pandalanguage$pandac$Type* $tmp935;
    org$pandalanguage$pandac$Type* $tmp936;
    panda$core$String* $tmp938;
    org$pandalanguage$pandac$Type* $finallyReturn942;
    org$pandalanguage$pandac$Type* $tmp944;
    org$pandalanguage$pandac$Type* $tmp945;
    org$pandalanguage$pandac$Type* $tmp946;
    panda$core$Object* $tmp947;
    panda$collections$Array* remapped955;
    panda$collections$Array* $tmp956;
    panda$collections$Array* $tmp957;
    panda$core$MutableString* name959;
    panda$core$MutableString* $tmp960;
    panda$core$MutableString* $tmp961;
    panda$core$String* separator964;
    panda$core$String* $tmp965;
    panda$core$Range$LTpanda$core$Int64$GT $tmp969;
    org$pandalanguage$pandac$Type* child988;
    org$pandalanguage$pandac$Type* $tmp989;
    org$pandalanguage$pandac$Type* $tmp990;
    panda$core$Object* $tmp991;
    panda$core$String* $tmp994;
    panda$core$String* $tmp995;
    panda$core$Object* $tmp1007;
    org$pandalanguage$pandac$Type* $tmp1011;
    org$pandalanguage$pandac$Type* child1017;
    org$pandalanguage$pandac$Type* $tmp1018;
    org$pandalanguage$pandac$Type* $tmp1019;
    panda$core$Object* $tmp1020;
    org$pandalanguage$pandac$Type* $tmp1026;
    panda$core$Char8 $tmp1028;
    org$pandalanguage$pandac$Type* $finallyReturn1028;
    org$pandalanguage$pandac$Type* $tmp1030;
    org$pandalanguage$pandac$Type* $tmp1031;
    panda$core$String* $tmp1033;
    org$pandalanguage$pandac$Type* $finallyReturn1037;
    org$pandalanguage$pandac$Type* $tmp1039;
    panda$core$Int64 $tmp860 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp860, ((panda$core$Int64) { 0 }));
    if ($tmp861.value) {
    {
        $tmp863 = self;
        $finallyReturn861 = $tmp863;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp863));
        return $finallyReturn861;
    }
    }
    switch (self->typeKind.value) {
        case 22:
        {
            int $tmp867;
            {
                panda$core$Object* $tmp871 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                $tmp870 = $tmp871;
                $tmp869 = ((org$pandalanguage$pandac$Type*) $tmp870);
                found868 = $tmp869;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp869));
                panda$core$Panda$unref$panda$core$Object($tmp870);
                if (((panda$core$Bit) { found868 != NULL }).value) {
                {
                    $tmp873 = found868;
                    $finallyReturn871 = $tmp873;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp873));
                    $tmp867 = 0;
                    goto $l865;
                    $l874:;
                    return $finallyReturn871;
                }
                }
                $tmp877 = self;
                $finallyReturn875 = $tmp877;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp877));
                $tmp867 = 1;
                goto $l865;
                $l878:;
                return $finallyReturn875;
            }
            $l865:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found868));
            switch ($tmp867) {
                case 1: goto $l878;
                case 0: goto $l874;
            }
            $l880:;
        }
        break;
        case 21:
        {
            int $tmp883;
            {
                panda$collections$Array* $tmp887 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp887);
                $tmp886 = $tmp887;
                $tmp885 = $tmp886;
                remapped884 = $tmp885;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp885));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp886));
                panda$core$MutableString* $tmp891 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$Object* $tmp893 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
                $tmp892 = $tmp893;
                panda$core$MutableString$init$panda$core$String($tmp891, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp892))->name);
                $tmp890 = $tmp891;
                $tmp889 = $tmp890;
                name888 = $tmp889;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp889));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp890));
                panda$core$Panda$unref$panda$core$Object($tmp892);
                panda$core$Char8$init$panda$core$UInt8(&$tmp894, ((panda$core$UInt8) { 60 }));
                panda$core$MutableString$append$panda$core$Char8(name888, $tmp894);
                $tmp896 = &$s897;
                separator895 = $tmp896;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp896));
                panda$core$Int64 $tmp899 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp898, ((panda$core$Int64) { 0 }), $tmp899, ((panda$core$Bit) { false }));
                int64_t $tmp901 = $tmp898.min.value;
                panda$core$Int64 i900 = { $tmp901 };
                int64_t $tmp903 = $tmp898.max.value;
                bool $tmp904 = $tmp898.inclusive.value;
                if ($tmp904) goto $l911; else goto $l912;
                $l911:;
                if ($tmp901 <= $tmp903) goto $l905; else goto $l907;
                $l912:;
                if ($tmp901 < $tmp903) goto $l905; else goto $l907;
                $l905:;
                {
                    int $tmp915;
                    {
                        panda$core$Object* $tmp920 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i900);
                        $tmp919 = $tmp920;
                        org$pandalanguage$pandac$Type* $tmp921 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp919), p_types);
                        $tmp918 = $tmp921;
                        $tmp917 = $tmp918;
                        child916 = $tmp917;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp917));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp918));
                        panda$core$Panda$unref$panda$core$Object($tmp919);
                        panda$collections$Array$add$panda$collections$Array$T(remapped884, ((panda$core$Object*) child916));
                        panda$core$Bit $tmp922 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i900, ((panda$core$Int64) { 0 }));
                        if ($tmp922.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(name888, separator895);
                            panda$core$MutableString$append$panda$core$String(name888, ((org$pandalanguage$pandac$Symbol*) child916)->name);
                            {
                                $tmp923 = separator895;
                                $tmp924 = &$s925;
                                separator895 = $tmp924;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp924));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp923));
                            }
                        }
                        }
                    }
                    $tmp915 = -1;
                    goto $l913;
                    $l913:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child916));
                    switch ($tmp915) {
                        case -1: goto $l926;
                    }
                    $l926:;
                }
                $l908:;
                int64_t $tmp928 = $tmp903 - i900.value;
                if ($tmp904) goto $l929; else goto $l930;
                $l929:;
                if ((uint64_t) $tmp928 >= 1) goto $l927; else goto $l907;
                $l930:;
                if ((uint64_t) $tmp928 > 1) goto $l927; else goto $l907;
                $l927:;
                i900.value += 1;
                goto $l905;
                $l907:;
                panda$core$Char8$init$panda$core$UInt8(&$tmp933, ((panda$core$UInt8) { 62 }));
                panda$core$MutableString$append$panda$core$Char8(name888, $tmp933);
                org$pandalanguage$pandac$Type* $tmp937 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp939 = panda$core$MutableString$finish$R$panda$core$String(name888);
                $tmp938 = $tmp939;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp937, $tmp938, ((panda$core$Int64) { 21 }), self->position, ((panda$collections$ListView*) remapped884), self->resolved);
                $tmp936 = $tmp937;
                $tmp935 = $tmp936;
                $finallyReturn933 = $tmp935;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp935));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp936));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp938));
                $tmp883 = 0;
                goto $l881;
                $l940:;
                return $finallyReturn933;
            }
            $l881:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped884));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name888));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator895));
            switch ($tmp883) {
                case 0: goto $l940;
            }
            $l942:;
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp948 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp947 = $tmp948;
            org$pandalanguage$pandac$Type* $tmp949 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp947), p_types);
            $tmp946 = $tmp949;
            org$pandalanguage$pandac$Type* $tmp950 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp946);
            $tmp945 = $tmp950;
            $tmp944 = $tmp945;
            $finallyReturn942 = $tmp944;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp944));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp945));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp946));
            panda$core$Panda$unref$panda$core$Object($tmp947);
            return $finallyReturn942;
        }
        break;
        case 25:
        case 24:
        {
            int $tmp954;
            {
                panda$collections$Array* $tmp958 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp958);
                $tmp957 = $tmp958;
                $tmp956 = $tmp957;
                remapped955 = $tmp956;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp956));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp957));
                panda$core$MutableString* $tmp962 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp962, &$s963);
                $tmp961 = $tmp962;
                $tmp960 = $tmp961;
                name959 = $tmp960;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp960));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp961));
                $tmp965 = &$s966;
                separator964 = $tmp965;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp965));
                panda$core$Int64 $tmp967 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Bit $tmp968 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp967, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp968.value);
                panda$core$Int64 $tmp970 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp971 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp970, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp969, ((panda$core$Int64) { 0 }), $tmp971, ((panda$core$Bit) { false }));
                int64_t $tmp973 = $tmp969.min.value;
                panda$core$Int64 i972 = { $tmp973 };
                int64_t $tmp975 = $tmp969.max.value;
                bool $tmp976 = $tmp969.inclusive.value;
                if ($tmp976) goto $l983; else goto $l984;
                $l983:;
                if ($tmp973 <= $tmp975) goto $l977; else goto $l979;
                $l984:;
                if ($tmp973 < $tmp975) goto $l977; else goto $l979;
                $l977:;
                {
                    int $tmp987;
                    {
                        panda$core$Object* $tmp992 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i972);
                        $tmp991 = $tmp992;
                        org$pandalanguage$pandac$Type* $tmp993 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp991), p_types);
                        $tmp990 = $tmp993;
                        $tmp989 = $tmp990;
                        child988 = $tmp989;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp989));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp990));
                        panda$core$Panda$unref$panda$core$Object($tmp991);
                        panda$core$MutableString$append$panda$core$String(name959, separator964);
                        panda$core$MutableString$append$panda$core$String(name959, ((org$pandalanguage$pandac$Symbol*) child988)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped955, ((panda$core$Object*) child988));
                        {
                            $tmp994 = separator964;
                            $tmp995 = &$s996;
                            separator964 = $tmp995;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp995));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp994));
                        }
                    }
                    $tmp987 = -1;
                    goto $l985;
                    $l985:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child988));
                    switch ($tmp987) {
                        case -1: goto $l997;
                    }
                    $l997:;
                }
                $l980:;
                int64_t $tmp999 = $tmp975 - i972.value;
                if ($tmp976) goto $l1000; else goto $l1001;
                $l1000:;
                if ((uint64_t) $tmp999 >= 1) goto $l998; else goto $l979;
                $l1001:;
                if ((uint64_t) $tmp999 > 1) goto $l998; else goto $l979;
                $l998:;
                i972.value += 1;
                goto $l977;
                $l979:;
                panda$core$Bit $tmp1004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
                if ($tmp1004.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name959, &$s1005);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(name959, &$s1006);
                }
                }
                panda$core$Int64 $tmp1008 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1009 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1008, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1010 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1009);
                $tmp1007 = $tmp1010;
                org$pandalanguage$pandac$Type* $tmp1012 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1011 = $tmp1012;
                panda$core$Bit $tmp1013 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1007), $tmp1011);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1011));
                panda$core$Panda$unref$panda$core$Object($tmp1007);
                if ($tmp1013.value) {
                {
                    int $tmp1016;
                    {
                        panda$core$Int64 $tmp1021 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                        panda$core$Int64 $tmp1022 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1021, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1023 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1022);
                        $tmp1020 = $tmp1023;
                        org$pandalanguage$pandac$Type* $tmp1024 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1020), p_types);
                        $tmp1019 = $tmp1024;
                        $tmp1018 = $tmp1019;
                        child1017 = $tmp1018;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1018));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1019));
                        panda$core$Panda$unref$panda$core$Object($tmp1020);
                        panda$core$MutableString$append$panda$core$String(name959, ((org$pandalanguage$pandac$Symbol*) child1017)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped955, ((panda$core$Object*) child1017));
                    }
                    $tmp1016 = -1;
                    goto $l1014;
                    $l1014:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1017));
                    switch ($tmp1016) {
                        case -1: goto $l1025;
                    }
                    $l1025:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1027 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                    $tmp1026 = $tmp1027;
                    panda$collections$Array$add$panda$collections$Array$T(remapped955, ((panda$core$Object*) $tmp1026));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1026));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1028, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(name959, $tmp1028);
                org$pandalanguage$pandac$Type* $tmp1032 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp1034 = panda$core$MutableString$finish$R$panda$core$String(name959);
                $tmp1033 = $tmp1034;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1032, $tmp1033, self->typeKind, self->position, ((panda$collections$ListView*) remapped955), self->resolved);
                $tmp1031 = $tmp1032;
                $tmp1030 = $tmp1031;
                $finallyReturn1028 = $tmp1030;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1030));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1031));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1033));
                $tmp954 = 0;
                goto $l952;
                $l1035:;
                return $finallyReturn1028;
            }
            $l952:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped955));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name959));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator964));
            switch ($tmp954) {
                case 0: goto $l1035;
            }
            $l1037:;
        }
        break;
        default:
        {
            $tmp1039 = self;
            $finallyReturn1037 = $tmp1039;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1039));
            return $finallyReturn1037;
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $finallyReturn1040;
    panda$core$Int64 $tmp1042 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $finallyReturn1040 = $tmp1042;
    return $finallyReturn1040;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $finallyReturn1043;
    panda$core$String* $tmp1045;
    $tmp1045 = self->name;
    $finallyReturn1043 = $tmp1045;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1045));
    return $finallyReturn1043;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1049;
    {
    }
    $tmp1049 = -1;
    goto $l1047;
    $l1047:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1049) {
        case -1: goto $l1050;
    }
    $l1050:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->test));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

