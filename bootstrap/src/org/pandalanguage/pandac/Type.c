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

typedef panda$collections$Iterator* (*$fn48)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn55)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn63)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 29, -3248623696866231612, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };

void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position) {
    self->name = NULL;
    self->subtypes = NULL;
    self->test = NULL;
    self->parameter = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp2 = NULL;
    self->parameter = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(self, p_name, p_typeKind, p_position, ((panda$core$Bit) { false }));
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_resolved) {
    self->name = NULL;
    self->subtypes = NULL;
    self->test = NULL;
    self->parameter = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp3 = NULL;
    self->parameter = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$core$Bit $tmp5 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s4);
    panda$core$Bit $tmp6 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5);
    PANDA_ASSERT($tmp6.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        panda$collections$Array* $tmp7 = self->subtypes;
        panda$collections$Array* $tmp8 = NULL;
        self->subtypes = $tmp8;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, panda$core$Int64 p_size) {
    org$pandalanguage$pandac$Position $tmp13;
    self->name = NULL;
    self->subtypes = NULL;
    self->test = NULL;
    self->parameter = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp9 = NULL;
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
        panda$collections$Array* $tmp14 = self->subtypes;
        panda$collections$Array* $tmp15 = NULL;
        self->subtypes = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_subtypes, panda$core$Bit p_resolved) {
    self->name = NULL;
    self->subtypes = NULL;
    self->test = NULL;
    self->parameter = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp16 = NULL;
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
        panda$collections$Array* $tmp26 = self->subtypes;
        panda$collections$Array* $tmp29 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp29, p_subtypes);
        panda$collections$Array* $tmp28 = $tmp29;
        panda$collections$Array* $tmp27 = $tmp28;
        self->subtypes = $tmp27;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    panda$core$MutableString* name35;
    panda$core$String* separator40;
    panda$collections$Iterator* Iter$76$943;
    org$pandalanguage$pandac$Type* t58;
    panda$core$Char8 $tmp71;
    self->name = NULL;
    self->subtypes = NULL;
    self->test = NULL;
    self->parameter = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp30 = NULL;
    self->parameter = $tmp30;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
    self->typeKind = ((panda$core$Int64) { 17 });
    {
        panda$collections$Array* $tmp31 = self->subtypes;
        panda$collections$Array* $tmp34 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp34, p_subtypes);
        panda$collections$Array* $tmp33 = $tmp34;
        panda$collections$Array* $tmp32 = $tmp33;
        self->subtypes = $tmp32;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
    }
    panda$core$MutableString* $tmp38 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init$panda$core$String($tmp38, &$s39);
    panda$core$MutableString* $tmp37 = $tmp38;
    panda$core$MutableString* $tmp36 = $tmp37;
    name35 = $tmp36;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
    panda$core$String* $tmp41 = &$s42;
    separator40 = $tmp41;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
    self->resolved = ((panda$core$Bit) { true });
    {
        ITable* $tmp46 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
        while ($tmp46->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp46 = $tmp46->next;
        }
        $fn48 $tmp47 = $tmp46->methods[0];
        panda$collections$Iterator* $tmp49 = $tmp47(((panda$collections$Iterable*) p_subtypes));
        panda$collections$Iterator* $tmp45 = $tmp49;
        panda$collections$Iterator* $tmp44 = $tmp45;
        Iter$76$943 = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
        $l50:;
        ITable* $tmp53 = Iter$76$943->$class->itable;
        while ($tmp53->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp53 = $tmp53->next;
        }
        $fn55 $tmp54 = $tmp53->methods[0];
        panda$core$Bit $tmp56 = $tmp54(Iter$76$943);
        panda$core$Bit $tmp57 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp56);
        bool $tmp52 = $tmp57.value;
        if (!$tmp52) goto $l51;
        {
            ITable* $tmp61 = Iter$76$943->$class->itable;
            while ($tmp61->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp61 = $tmp61->next;
            }
            $fn63 $tmp62 = $tmp61->methods[1];
            panda$core$Object* $tmp64 = $tmp62(Iter$76$943);
            panda$core$Object* $tmp60 = $tmp64;
            org$pandalanguage$pandac$Type* $tmp59 = ((org$pandalanguage$pandac$Type*) $tmp60);
            t58 = $tmp59;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp59));
            panda$core$Panda$unref$panda$core$Object($tmp60);
            panda$core$MutableString$append$panda$core$String(name35, separator40);
            panda$core$MutableString$append$panda$core$Object(name35, ((panda$core$Object*) t58));
            {
                panda$core$String* $tmp65 = separator40;
                panda$core$String* $tmp66 = &$s67;
                separator40 = $tmp66;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp66));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
            }
            bool $tmp68 = self->resolved.value;
            if (!$tmp68) goto $l69;
            $tmp68 = t58->resolved.value;
            $l69:;
            panda$core$Bit $tmp70 = { $tmp68 };
            self->resolved = $tmp70;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t58));
        }
        goto $l50;
        $l51:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$76$943));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp71, ((panda$core$UInt8) { 62 }));
    panda$core$MutableString$append$panda$core$Char8(name35, $tmp71);
    panda$core$String* $tmp73 = panda$core$MutableString$finish$R$panda$core$String(name35);
    panda$core$String* $tmp72 = $tmp73;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, $tmp72);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator40));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name35));
    }
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    self->name = NULL;
    self->subtypes = NULL;
    self->test = NULL;
    self->parameter = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp74 = NULL;
    self->parameter = $tmp74;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
    {
        panda$core$String* $tmp75 = ((org$pandalanguage$pandac$Symbol*) self)->name;
        panda$core$String* $tmp81 = panda$core$String$convert$R$panda$core$String(p_param->owner);
        panda$core$String* $tmp80 = $tmp81;
        panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp80, &$s82);
        panda$core$String* $tmp79 = $tmp83;
        panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp79, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
        panda$core$String* $tmp78 = $tmp84;
        panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp78, &$s85);
        panda$core$String* $tmp77 = $tmp86;
        panda$core$String* $tmp76 = $tmp77;
        ((org$pandalanguage$pandac$Symbol*) self)->name = $tmp76;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp76));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
    }
    self->typeKind = ((panda$core$Int64) { 22 });
    {
        org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp87 = self->parameter;
        org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp88 = p_param;
        self->parameter = $tmp88;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp88));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
    }
    self->resolved = ((panda$core$Bit) { true });
    {
        panda$collections$Array* $tmp89 = self->subtypes;
        panda$collections$Array* $tmp90 = NULL;
        self->subtypes = $tmp90;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp92 = $tmp93.value;
    if ($tmp92) goto $l94;
    panda$core$Bit $tmp95 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp92 = $tmp95.value;
    $l94:;
    panda$core$Bit $tmp96 = { $tmp92 };
    bool $tmp91 = $tmp96.value;
    if ($tmp91) goto $l97;
    panda$core$Bit $tmp98 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp91 = $tmp98.value;
    $l97:;
    panda$core$Bit $tmp99 = { $tmp91 };
    PANDA_ASSERT($tmp99.value);
    panda$core$Int64 $tmp100 = self->position.line;
    return $tmp100;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp102 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    panda$core$Bit $tmp101 = $tmp102;
    return $tmp101;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp104 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    panda$core$Bit $tmp103 = $tmp104;
    return $tmp103;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp110;
    org$pandalanguage$pandac$Type* $tmp108 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp110);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp108, &$s109, ((panda$core$Int64) { 14 }), $tmp110, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp107 = $tmp108;
    org$pandalanguage$pandac$Type* $tmp106 = $tmp107;
    org$pandalanguage$pandac$Type* $tmp105 = $tmp106;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp106));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp107));
    return $tmp105;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp116;
    org$pandalanguage$pandac$Type* $tmp114 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp116);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp114, &$s115, ((panda$core$Int64) { 23 }), $tmp116, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp113 = $tmp114;
    org$pandalanguage$pandac$Type* $tmp112 = $tmp113;
    org$pandalanguage$pandac$Type* $tmp111 = $tmp112;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
    return $tmp111;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp122;
    org$pandalanguage$pandac$Type* $tmp120 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp122);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp120, &$s121, ((panda$core$Int64) { 10 }), $tmp122, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp119 = $tmp120;
    org$pandalanguage$pandac$Type* $tmp118 = $tmp119;
    org$pandalanguage$pandac$Type* $tmp117 = $tmp118;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
    return $tmp117;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes123;
    org$pandalanguage$pandac$Type* tmp1129;
    org$pandalanguage$pandac$Position $tmp134;
    panda$collections$Array* $tmp126 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp126);
    panda$collections$Array* $tmp125 = $tmp126;
    panda$collections$Array* $tmp124 = $tmp125;
    subtypes123 = $tmp124;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp124));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp125));
    org$pandalanguage$pandac$Type* $tmp128 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp127 = $tmp128;
    panda$collections$Array$add$panda$collections$Array$T(subtypes123, ((panda$core$Object*) $tmp127));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
    {
        org$pandalanguage$pandac$Type* $tmp132 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Position$init(&$tmp134);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp132, &$s133, ((panda$core$Int64) { 11 }), $tmp134, ((panda$collections$ListView*) subtypes123), ((panda$core$Bit) { true }));
        org$pandalanguage$pandac$Type* $tmp131 = $tmp132;
        org$pandalanguage$pandac$Type* $tmp130 = $tmp131;
        tmp1129 = $tmp130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes123));
        org$pandalanguage$pandac$Type* $tmp135 = tmp1129;
        return $tmp135;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp141;
    org$pandalanguage$pandac$Type* $tmp139 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp141);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp139, &$s140, ((panda$core$Int64) { 10 }), $tmp141, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp138 = $tmp139;
    org$pandalanguage$pandac$Type* $tmp137 = $tmp138;
    org$pandalanguage$pandac$Type* $tmp136 = $tmp137;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp138));
    return $tmp136;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp147;
    org$pandalanguage$pandac$Type* $tmp145 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp147);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp145, &$s146, ((panda$core$Int64) { 10 }), $tmp147, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp144 = $tmp145;
    org$pandalanguage$pandac$Type* $tmp143 = $tmp144;
    org$pandalanguage$pandac$Type* $tmp142 = $tmp143;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
    return $tmp142;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp153;
    org$pandalanguage$pandac$Type* $tmp151 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp153);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp151, &$s152, ((panda$core$Int64) { 10 }), $tmp153, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp150 = $tmp151;
    org$pandalanguage$pandac$Type* $tmp149 = $tmp150;
    org$pandalanguage$pandac$Type* $tmp148 = $tmp149;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
    return $tmp148;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp157 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp157, &$s158, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$Type* $tmp156 = $tmp157;
    org$pandalanguage$pandac$Type* $tmp155 = $tmp156;
    org$pandalanguage$pandac$Type* $tmp154 = $tmp155;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
    return $tmp154;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp162 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp162, &$s163, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }));
    org$pandalanguage$pandac$Type* $tmp161 = $tmp162;
    org$pandalanguage$pandac$Type* $tmp160 = $tmp161;
    org$pandalanguage$pandac$Type* $tmp159 = $tmp160;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161));
    return $tmp159;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp167 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp167, &$s168, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$Type* $tmp166 = $tmp167;
    org$pandalanguage$pandac$Type* $tmp165 = $tmp166;
    org$pandalanguage$pandac$Type* $tmp164 = $tmp165;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
    return $tmp164;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp172 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp172, &$s173, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }));
    org$pandalanguage$pandac$Type* $tmp171 = $tmp172;
    org$pandalanguage$pandac$Type* $tmp170 = $tmp171;
    org$pandalanguage$pandac$Type* $tmp169 = $tmp170;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp170));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
    return $tmp169;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp177 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp177, &$s178, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$Type* $tmp176 = $tmp177;
    org$pandalanguage$pandac$Type* $tmp175 = $tmp176;
    org$pandalanguage$pandac$Type* $tmp174 = $tmp175;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
    return $tmp174;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp182 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp182, &$s183, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }));
    org$pandalanguage$pandac$Type* $tmp181 = $tmp182;
    org$pandalanguage$pandac$Type* $tmp180 = $tmp181;
    org$pandalanguage$pandac$Type* $tmp179 = $tmp180;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
    return $tmp179;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp187 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp187, &$s188, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$Type* $tmp186 = $tmp187;
    org$pandalanguage$pandac$Type* $tmp185 = $tmp186;
    org$pandalanguage$pandac$Type* $tmp184 = $tmp185;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
    return $tmp184;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp192 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp192, &$s193, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }));
    org$pandalanguage$pandac$Type* $tmp191 = $tmp192;
    org$pandalanguage$pandac$Type* $tmp190 = $tmp191;
    org$pandalanguage$pandac$Type* $tmp189 = $tmp190;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp190));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
    return $tmp189;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp197 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp197, &$s198, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$Type* $tmp196 = $tmp197;
    org$pandalanguage$pandac$Type* $tmp195 = $tmp196;
    org$pandalanguage$pandac$Type* $tmp194 = $tmp195;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
    return $tmp194;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp202 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp202, &$s203, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 64 }));
    org$pandalanguage$pandac$Type* $tmp201 = $tmp202;
    org$pandalanguage$pandac$Type* $tmp200 = $tmp201;
    org$pandalanguage$pandac$Type* $tmp199 = $tmp200;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp200));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
    return $tmp199;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp209;
    org$pandalanguage$pandac$Type* $tmp207 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp209);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp207, &$s208, ((panda$core$Int64) { 10 }), $tmp209, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp206 = $tmp207;
    org$pandalanguage$pandac$Type* $tmp205 = $tmp206;
    org$pandalanguage$pandac$Type* $tmp204 = $tmp205;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
    return $tmp204;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp215;
    org$pandalanguage$pandac$Type* $tmp213 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp215);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp213, &$s214, ((panda$core$Int64) { 10 }), $tmp215, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp212 = $tmp213;
    org$pandalanguage$pandac$Type* $tmp211 = $tmp212;
    org$pandalanguage$pandac$Type* $tmp210 = $tmp211;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
    return $tmp210;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp221;
    org$pandalanguage$pandac$Type* $tmp219 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp221);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp219, &$s220, ((panda$core$Int64) { 10 }), $tmp221, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp218 = $tmp219;
    org$pandalanguage$pandac$Type* $tmp217 = $tmp218;
    org$pandalanguage$pandac$Type* $tmp216 = $tmp217;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
    return $tmp216;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp227;
    org$pandalanguage$pandac$Type* $tmp225 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp227);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp225, &$s226, ((panda$core$Int64) { 10 }), $tmp227, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp224 = $tmp225;
    org$pandalanguage$pandac$Type* $tmp223 = $tmp224;
    org$pandalanguage$pandac$Type* $tmp222 = $tmp223;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
    return $tmp222;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp233;
    org$pandalanguage$pandac$Type* $tmp231 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp233);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp231, &$s232, ((panda$core$Int64) { 10 }), $tmp233, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp230 = $tmp231;
    org$pandalanguage$pandac$Type* $tmp229 = $tmp230;
    org$pandalanguage$pandac$Type* $tmp228 = $tmp229;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp229));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
    return $tmp228;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp239;
    org$pandalanguage$pandac$Type* $tmp237 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp239);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp237, &$s238, ((panda$core$Int64) { 10 }), $tmp239, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp236 = $tmp237;
    org$pandalanguage$pandac$Type* $tmp235 = $tmp236;
    org$pandalanguage$pandac$Type* $tmp234 = $tmp235;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
    return $tmp234;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp245;
    org$pandalanguage$pandac$Type* $tmp243 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp245);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp243, &$s244, ((panda$core$Int64) { 10 }), $tmp245, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp242 = $tmp243;
    org$pandalanguage$pandac$Type* $tmp241 = $tmp242;
    org$pandalanguage$pandac$Type* $tmp240 = $tmp241;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
    return $tmp240;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp251;
    org$pandalanguage$pandac$Type* $tmp249 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp251);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp249, &$s250, ((panda$core$Int64) { 10 }), $tmp251, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp248 = $tmp249;
    org$pandalanguage$pandac$Type* $tmp247 = $tmp248;
    org$pandalanguage$pandac$Type* $tmp246 = $tmp247;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp247));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
    return $tmp246;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp257;
    org$pandalanguage$pandac$Type* $tmp255 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp257);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp255, &$s256, ((panda$core$Int64) { 10 }), $tmp257, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp254 = $tmp255;
    org$pandalanguage$pandac$Type* $tmp253 = $tmp254;
    org$pandalanguage$pandac$Type* $tmp252 = $tmp253;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
    return $tmp252;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp263;
    org$pandalanguage$pandac$Type* $tmp261 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp263);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp261, &$s262, ((panda$core$Int64) { 10 }), $tmp263, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp260 = $tmp261;
    org$pandalanguage$pandac$Type* $tmp259 = $tmp260;
    org$pandalanguage$pandac$Type* $tmp258 = $tmp259;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp259));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp260));
    return $tmp258;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp269;
    org$pandalanguage$pandac$Type* $tmp267 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp269);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp267, &$s268, ((panda$core$Int64) { 10 }), $tmp269, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp266 = $tmp267;
    org$pandalanguage$pandac$Type* $tmp265 = $tmp266;
    org$pandalanguage$pandac$Type* $tmp264 = $tmp265;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
    return $tmp264;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp275;
    org$pandalanguage$pandac$Type* $tmp273 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp275);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp273, &$s274, ((panda$core$Int64) { 10 }), $tmp275, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp272 = $tmp273;
    org$pandalanguage$pandac$Type* $tmp271 = $tmp272;
    org$pandalanguage$pandac$Type* $tmp270 = $tmp271;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp272));
    return $tmp270;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp281;
    org$pandalanguage$pandac$Type* $tmp279 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp281);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp279, &$s280, ((panda$core$Int64) { 10 }), $tmp281, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp278 = $tmp279;
    org$pandalanguage$pandac$Type* $tmp277 = $tmp278;
    org$pandalanguage$pandac$Type* $tmp276 = $tmp277;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
    return $tmp276;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp287;
    org$pandalanguage$pandac$Type* $tmp285 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp287);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp285, &$s286, ((panda$core$Int64) { 10 }), $tmp287, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp284 = $tmp285;
    org$pandalanguage$pandac$Type* $tmp283 = $tmp284;
    org$pandalanguage$pandac$Type* $tmp282 = $tmp283;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp283));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp284));
    return $tmp282;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Position $tmp294;
    org$pandalanguage$pandac$Type* $tmp291 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp293 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    panda$core$String* $tmp292 = $tmp293;
    org$pandalanguage$pandac$Position$init(&$tmp294);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp291, $tmp292, ((panda$core$Int64) { 15 }), $tmp294, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp290 = $tmp291;
    org$pandalanguage$pandac$Type* $tmp289 = $tmp290;
    org$pandalanguage$pandac$Type* $tmp288 = $tmp289;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp289));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp290));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp292));
    return $tmp288;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Position $tmp304;
    org$pandalanguage$pandac$Type* $tmp298 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp302 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    panda$core$String* $tmp301 = $tmp302;
    panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s300, $tmp301);
    panda$core$String* $tmp299 = $tmp303;
    org$pandalanguage$pandac$Position$init(&$tmp304);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp298, $tmp299, ((panda$core$Int64) { 15 }), $tmp304, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp297 = $tmp298;
    org$pandalanguage$pandac$Type* $tmp296 = $tmp297;
    org$pandalanguage$pandac$Type* $tmp295 = $tmp296;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp296));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
    return $tmp295;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Position $tmp311;
    org$pandalanguage$pandac$Type* $tmp308 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp310 = panda$core$Real64$convert$R$panda$core$String(p_value);
    panda$core$String* $tmp309 = $tmp310;
    org$pandalanguage$pandac$Position$init(&$tmp311);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp308, $tmp309, ((panda$core$Int64) { 26 }), $tmp311, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp307 = $tmp308;
    org$pandalanguage$pandac$Type* $tmp306 = $tmp307;
    org$pandalanguage$pandac$Type* $tmp305 = $tmp306;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
    return $tmp305;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp317;
    org$pandalanguage$pandac$Type* $tmp315 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp317);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp315, &$s316, ((panda$core$Int64) { 18 }), $tmp317, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp314 = $tmp315;
    org$pandalanguage$pandac$Type* $tmp313 = $tmp314;
    org$pandalanguage$pandac$Type* $tmp312 = $tmp313;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp313));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
    return $tmp312;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp323;
    org$pandalanguage$pandac$Type* $tmp321 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp323);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp321, &$s322, ((panda$core$Int64) { 19 }), $tmp323, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp320 = $tmp321;
    org$pandalanguage$pandac$Type* $tmp319 = $tmp320;
    org$pandalanguage$pandac$Type* $tmp318 = $tmp319;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp319));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
    return $tmp318;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp329;
    org$pandalanguage$pandac$Type* $tmp327 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp329);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp327, &$s328, ((panda$core$Int64) { 10 }), $tmp329, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp326 = $tmp327;
    org$pandalanguage$pandac$Type* $tmp325 = $tmp326;
    org$pandalanguage$pandac$Type* $tmp324 = $tmp325;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp325));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
    return $tmp324;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp335;
    org$pandalanguage$pandac$Type* $tmp333 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp335);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp333, &$s334, ((panda$core$Int64) { 10 }), $tmp335, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp332 = $tmp333;
    org$pandalanguage$pandac$Type* $tmp331 = $tmp332;
    org$pandalanguage$pandac$Type* $tmp330 = $tmp331;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
    return $tmp330;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp341;
    org$pandalanguage$pandac$Type* $tmp339 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp341);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp339, &$s340, ((panda$core$Int64) { 10 }), $tmp341, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp338 = $tmp339;
    org$pandalanguage$pandac$Type* $tmp337 = $tmp338;
    org$pandalanguage$pandac$Type* $tmp336 = $tmp337;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp337));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp338));
    return $tmp336;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children342;
    org$pandalanguage$pandac$Position $tmp349;
    org$pandalanguage$pandac$Type* tmp2350;
    panda$collections$Array* $tmp345 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp345);
    panda$collections$Array* $tmp344 = $tmp345;
    panda$collections$Array* $tmp343 = $tmp344;
    children342 = $tmp343;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp343));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
    org$pandalanguage$pandac$Type* $tmp347 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp349);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp347, &$s348, ((panda$core$Int64) { 10 }), $tmp349, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp346 = $tmp347;
    panda$collections$Array$add$panda$collections$Array$T(children342, ((panda$core$Object*) $tmp346));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
    panda$collections$Array$add$panda$collections$Array$T(children342, ((panda$core$Object*) p_t));
    {
        org$pandalanguage$pandac$Type* $tmp353 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp359 = panda$core$String$convert$R$panda$core$String(&$s358);
        panda$core$String* $tmp357 = $tmp359;
        panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp357, &$s360);
        panda$core$String* $tmp356 = $tmp361;
        panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp356, ((panda$core$Object*) p_t));
        panda$core$String* $tmp355 = $tmp362;
        panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp355, &$s363);
        panda$core$String* $tmp354 = $tmp364;
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp353, $tmp354, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children342), p_t->resolved);
        org$pandalanguage$pandac$Type* $tmp352 = $tmp353;
        org$pandalanguage$pandac$Type* $tmp351 = $tmp352;
        tmp2350 = $tmp351;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp351));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp355));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children342));
        org$pandalanguage$pandac$Type* $tmp365 = tmp2350;
        return $tmp365;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children366;
    org$pandalanguage$pandac$Position $tmp373;
    org$pandalanguage$pandac$Type* tmp3374;
    panda$collections$Array* $tmp369 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp369);
    panda$collections$Array* $tmp368 = $tmp369;
    panda$collections$Array* $tmp367 = $tmp368;
    children366 = $tmp367;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp367));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp368));
    org$pandalanguage$pandac$Type* $tmp371 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp373);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp371, &$s372, ((panda$core$Int64) { 10 }), $tmp373, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp370 = $tmp371;
    panda$collections$Array$add$panda$collections$Array$T(children366, ((panda$core$Object*) $tmp370));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
    panda$collections$Array$add$panda$collections$Array$T(children366, ((panda$core$Object*) p_t));
    {
        org$pandalanguage$pandac$Type* $tmp377 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp383 = panda$core$String$convert$R$panda$core$String(&$s382);
        panda$core$String* $tmp381 = $tmp383;
        panda$core$String* $tmp385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp381, &$s384);
        panda$core$String* $tmp380 = $tmp385;
        panda$core$String* $tmp386 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp380, ((panda$core$Object*) p_t));
        panda$core$String* $tmp379 = $tmp386;
        panda$core$String* $tmp388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp379, &$s387);
        panda$core$String* $tmp378 = $tmp388;
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp377, $tmp378, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children366), p_t->resolved);
        org$pandalanguage$pandac$Type* $tmp376 = $tmp377;
        org$pandalanguage$pandac$Type* $tmp375 = $tmp376;
        tmp3374 = $tmp375;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp375));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp378));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children366));
        org$pandalanguage$pandac$Type* $tmp389 = tmp3374;
        return $tmp389;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children390;
    org$pandalanguage$pandac$Position $tmp397;
    org$pandalanguage$pandac$Type* tmp4415;
    panda$collections$Array* $tmp393 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp393);
    panda$collections$Array* $tmp392 = $tmp393;
    panda$collections$Array* $tmp391 = $tmp392;
    children390 = $tmp391;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp391));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp392));
    org$pandalanguage$pandac$Type* $tmp395 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp397);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp395, &$s396, ((panda$core$Int64) { 10 }), $tmp397, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp394 = $tmp395;
    panda$collections$Array$add$panda$collections$Array$T(children390, ((panda$core$Object*) $tmp394));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
    panda$collections$Array$add$panda$collections$Array$T(children390, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp399 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp398 = $tmp399;
    panda$core$Bit $tmp400 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp398);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp398));
    if ($tmp400.value) {
    {
        org$pandalanguage$pandac$Type* $tmp402 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$Type* $tmp401 = $tmp402;
        panda$collections$Array$add$panda$collections$Array$T(children390, ((panda$core$Object*) $tmp401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp404 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp403 = $tmp404;
    panda$core$Bit $tmp405 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp403);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
    if ($tmp405.value) {
    {
        org$pandalanguage$pandac$Type* $tmp407 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$Type* $tmp406 = $tmp407;
        panda$collections$Array$add$panda$collections$Array$T(children390, ((panda$core$Object*) $tmp406));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp406));
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp409 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp408 = $tmp409;
    panda$core$Bit $tmp410 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp408);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp408));
    if ($tmp410.value) {
    {
        org$pandalanguage$pandac$Type* $tmp412 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$Type* $tmp411 = $tmp412;
        panda$collections$Array$add$panda$collections$Array$T(children390, ((panda$core$Object*) $tmp411));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp411));
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp414 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
        org$pandalanguage$pandac$Type* $tmp413 = $tmp414;
        panda$collections$Array$add$panda$collections$Array$T(children390, ((panda$core$Object*) $tmp413));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
    }
    }
    }
    }
    {
        org$pandalanguage$pandac$Type* $tmp418 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp426 = panda$core$String$convert$R$panda$core$String(&$s425);
        panda$core$String* $tmp424 = $tmp426;
        panda$core$String* $tmp428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp424, &$s427);
        panda$core$String* $tmp423 = $tmp428;
        panda$core$String* $tmp429 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp423, ((panda$core$Object*) p_t));
        panda$core$String* $tmp422 = $tmp429;
        panda$core$String* $tmp431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp422, &$s430);
        panda$core$String* $tmp421 = $tmp431;
        org$pandalanguage$pandac$Type* $tmp433 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
        org$pandalanguage$pandac$Type* $tmp432 = $tmp433;
        panda$core$String* $tmp434 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp421, ((panda$core$Object*) $tmp432));
        panda$core$String* $tmp420 = $tmp434;
        panda$core$String* $tmp436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp420, &$s435);
        panda$core$String* $tmp419 = $tmp436;
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp418, $tmp419, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children390), p_t->resolved);
        org$pandalanguage$pandac$Type* $tmp417 = $tmp418;
        org$pandalanguage$pandac$Type* $tmp416 = $tmp417;
        tmp4415 = $tmp416;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp424));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children390));
        org$pandalanguage$pandac$Type* $tmp437 = tmp4415;
        return $tmp437;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp443;
    org$pandalanguage$pandac$Type* $tmp441 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp443);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp441, &$s442, ((panda$core$Int64) { 16 }), $tmp443, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp440 = $tmp441;
    org$pandalanguage$pandac$Type* $tmp439 = $tmp440;
    org$pandalanguage$pandac$Type* $tmp438 = $tmp439;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
    return $tmp438;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp449;
    org$pandalanguage$pandac$Type* $tmp447 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp449);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp447, &$s448, ((panda$core$Int64) { 16 }), $tmp449, ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$Type* $tmp446 = $tmp447;
    org$pandalanguage$pandac$Type* $tmp445 = $tmp446;
    org$pandalanguage$pandac$Type* $tmp444 = $tmp445;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp445));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
    return $tmp444;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp456 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s455);
    bool $tmp454 = $tmp456.value;
    if ($tmp454) goto $l457;
    panda$core$Bit $tmp459 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s458);
    $tmp454 = $tmp459.value;
    $l457:;
    panda$core$Bit $tmp460 = { $tmp454 };
    bool $tmp453 = $tmp460.value;
    if ($tmp453) goto $l461;
    panda$core$Bit $tmp463 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s462);
    $tmp453 = $tmp463.value;
    $l461:;
    panda$core$Bit $tmp464 = { $tmp453 };
    bool $tmp452 = $tmp464.value;
    if ($tmp452) goto $l465;
    panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp452 = $tmp466.value;
    $l465:;
    panda$core$Bit $tmp467 = { $tmp452 };
    bool $tmp451 = $tmp467.value;
    if ($tmp451) goto $l468;
    panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    $tmp451 = $tmp469.value;
    $l468:;
    panda$core$Bit $tmp470 = { $tmp451 };
    panda$core$Bit $tmp450 = $tmp470;
    return $tmp450;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp474 = $tmp475.value;
    if ($tmp474) goto $l476;
    panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp474 = $tmp477.value;
    $l476:;
    panda$core$Bit $tmp478 = { $tmp474 };
    bool $tmp473 = $tmp478.value;
    if ($tmp473) goto $l479;
    panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp473 = $tmp480.value;
    $l479:;
    panda$core$Bit $tmp481 = { $tmp473 };
    bool $tmp472 = $tmp481.value;
    if ($tmp472) goto $l482;
    panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp472 = $tmp483.value;
    $l482:;
    panda$core$Bit $tmp484 = { $tmp472 };
    panda$core$Bit $tmp471 = $tmp484;
    return $tmp471;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    bool $tmp486 = $tmp487.value;
    if ($tmp486) goto $l488;
    panda$core$Bit $tmp490 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s489);
    $tmp486 = $tmp490.value;
    $l488:;
    panda$core$Bit $tmp491 = { $tmp486 };
    panda$core$Bit $tmp485 = $tmp491;
    return $tmp485;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp494 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s493);
    panda$core$Bit $tmp492 = $tmp494;
    return $tmp492;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp497 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp496 = $tmp497.value;
    if ($tmp496) goto $l498;
    panda$core$Bit $tmp499 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp496 = $tmp499.value;
    $l498:;
    panda$core$Bit $tmp500 = { $tmp496 };
    panda$core$Bit $tmp495 = $tmp500;
    return $tmp495;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    switch (self->typeKind.value) {
        case 10:
        case 11:
        case 21:
        case 22:
        {
            panda$core$Bit $tmp501 = ((panda$core$Bit) { true });
            return $tmp501;
        }
        break;
        default:
        {
            panda$core$Bit $tmp502 = ((panda$core$Bit) { false });
            return $tmp502;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp504 = $tmp505.value;
    if ($tmp504) goto $l506;
    panda$core$Bit $tmp507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp504 = $tmp507.value;
    $l506:;
    panda$core$Bit $tmp508 = { $tmp504 };
    panda$core$Bit $tmp503 = $tmp508;
    return $tmp503;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp511 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s510);
    panda$core$Bit $tmp509 = $tmp511;
    return $tmp509;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp512.value) {
    {
        panda$core$Object* $tmp515 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp514 = $tmp515;
        panda$core$Bit $tmp516 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp514));
        panda$core$Bit $tmp513 = $tmp516;
        panda$core$Panda$unref$panda$core$Object($tmp514);
        return $tmp513;
    }
    }
    panda$core$Bit $tmp519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp518 = $tmp519.value;
    if (!$tmp518) goto $l520;
    panda$core$Object* $tmp522 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp521 = $tmp522;
    panda$core$Bit $tmp524 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp521))->name, &$s523);
    $tmp518 = $tmp524.value;
    panda$core$Panda$unref$panda$core$Object($tmp521);
    $l520:;
    panda$core$Bit $tmp525 = { $tmp518 };
    panda$core$Bit $tmp517 = $tmp525;
    return $tmp517;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp526.value) {
    {
        panda$core$Object* $tmp529 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp528 = $tmp529;
        panda$core$Bit $tmp530 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp528));
        panda$core$Bit $tmp527 = $tmp530;
        panda$core$Panda$unref$panda$core$Object($tmp528);
        return $tmp527;
    }
    }
    panda$core$Bit $tmp533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp532 = $tmp533.value;
    if (!$tmp532) goto $l534;
    panda$core$Object* $tmp536 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp535 = $tmp536;
    panda$core$Bit $tmp538 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp535))->name, &$s537);
    $tmp532 = $tmp538.value;
    panda$core$Panda$unref$panda$core$Object($tmp535);
    $l534:;
    panda$core$Bit $tmp539 = { $tmp532 };
    panda$core$Bit $tmp531 = $tmp539;
    return $tmp531;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes543;
    org$pandalanguage$pandac$Type* tmp5547;
    org$pandalanguage$pandac$Position $tmp556;
    panda$core$Bit $tmp540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp540.value) {
    {
        org$pandalanguage$pandac$Type* $tmp542 = self;
        org$pandalanguage$pandac$Type* $tmp541 = $tmp542;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp542));
        return $tmp541;
    }
    }
    panda$collections$Array* $tmp546 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp546);
    panda$collections$Array* $tmp545 = $tmp546;
    panda$collections$Array* $tmp544 = $tmp545;
    subtypes543 = $tmp544;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp544));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
    panda$collections$Array$add$panda$collections$Array$T(subtypes543, ((panda$core$Object*) self));
    {
        org$pandalanguage$pandac$Type* $tmp550 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp553 = panda$core$String$convert$R$panda$core$String(self->name);
        panda$core$String* $tmp552 = $tmp553;
        panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp552, &$s554);
        panda$core$String* $tmp551 = $tmp555;
        org$pandalanguage$pandac$Position$init(&$tmp556);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp550, $tmp551, ((panda$core$Int64) { 11 }), $tmp556, ((panda$collections$ListView*) subtypes543), ((panda$core$Bit) { true }));
        org$pandalanguage$pandac$Type* $tmp549 = $tmp550;
        org$pandalanguage$pandac$Type* $tmp548 = $tmp549;
        tmp5547 = $tmp548;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp548));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp551));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes543));
        org$pandalanguage$pandac$Type* $tmp557 = tmp5547;
        return $tmp557;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp558 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp558.value) {
    {
        org$pandalanguage$pandac$Type* $tmp560 = self;
        org$pandalanguage$pandac$Type* $tmp559 = $tmp560;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp560));
        return $tmp559;
    }
    }
    panda$core$Object* $tmp564 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp563 = $tmp564;
    org$pandalanguage$pandac$Type* $tmp562 = ((org$pandalanguage$pandac$Type*) $tmp563);
    org$pandalanguage$pandac$Type* $tmp561 = $tmp562;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp562));
    panda$core$Panda$unref$panda$core$Object($tmp563);
    return $tmp561;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* t1658;
    org$pandalanguage$pandac$Type* t2662;
    panda$collections$Set* ancestors671;
    org$pandalanguage$pandac$Type* t675;
    org$pandalanguage$pandac$ClassDecl* cl677;
    org$pandalanguage$pandac$Type* tmp6704;
    org$pandalanguage$pandac$Type* tmp7706;
    org$pandalanguage$pandac$Type* tmp8718;
    panda$core$Bit $tmp565 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp565.value) {
    {
        org$pandalanguage$pandac$Type* $tmp567 = self;
        org$pandalanguage$pandac$Type* $tmp566 = $tmp567;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp567));
        return $tmp566;
    }
    }
    org$pandalanguage$pandac$Type* $tmp569 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp568 = $tmp569;
    panda$core$Bit $tmp570 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp568);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
    if ($tmp570.value) {
    {
        panda$core$Bit $tmp571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp571.value) {
        {
            org$pandalanguage$pandac$Type* $tmp573 = p_other;
            org$pandalanguage$pandac$Type* $tmp572 = $tmp573;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp573));
            return $tmp572;
        }
        }
        org$pandalanguage$pandac$Type* $tmp577 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        org$pandalanguage$pandac$Type* $tmp576 = $tmp577;
        org$pandalanguage$pandac$Type* $tmp575 = $tmp576;
        org$pandalanguage$pandac$Type* $tmp574 = $tmp575;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp575));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
        return $tmp574;
    }
    }
    org$pandalanguage$pandac$Type* $tmp579 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp578 = $tmp579;
    panda$core$Bit $tmp580 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp578);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp578));
    if ($tmp580.value) {
    {
        panda$core$Bit $tmp581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp581.value) {
        {
            org$pandalanguage$pandac$Type* $tmp583 = self;
            org$pandalanguage$pandac$Type* $tmp582 = $tmp583;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp583));
            return $tmp582;
        }
        }
        org$pandalanguage$pandac$Type* $tmp587 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        org$pandalanguage$pandac$Type* $tmp586 = $tmp587;
        org$pandalanguage$pandac$Type* $tmp585 = $tmp586;
        org$pandalanguage$pandac$Type* $tmp584 = $tmp585;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp585));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp586));
        return $tmp584;
    }
    }
    panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp588 = $tmp589.value;
    if (!$tmp588) goto $l590;
    panda$core$Bit $tmp591 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp588 = $tmp591.value;
    $l590:;
    panda$core$Bit $tmp592 = { $tmp588 };
    if ($tmp592.value) {
    {
        org$pandalanguage$pandac$Type* $tmp594 = p_other;
        org$pandalanguage$pandac$Type* $tmp593 = $tmp594;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp594));
        return $tmp593;
    }
    }
    panda$core$Bit $tmp596 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp595 = $tmp596.value;
    if (!$tmp595) goto $l597;
    panda$core$Bit $tmp598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
    $tmp595 = $tmp598.value;
    $l597:;
    panda$core$Bit $tmp599 = { $tmp595 };
    if ($tmp599.value) {
    {
        org$pandalanguage$pandac$Type* $tmp601 = self;
        org$pandalanguage$pandac$Type* $tmp600 = $tmp601;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp601));
        return $tmp600;
    }
    }
    panda$core$Bit $tmp602 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
    if ($tmp602.value) {
    {
        panda$core$Bit $tmp604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp603 = $tmp604.value;
        if ($tmp603) goto $l605;
        panda$core$Bit $tmp606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 26 }));
        $tmp603 = $tmp606.value;
        $l605:;
        panda$core$Bit $tmp607 = { $tmp603 };
        if ($tmp607.value) {
        {
            org$pandalanguage$pandac$Type* $tmp609 = self;
            org$pandalanguage$pandac$Type* $tmp608 = $tmp609;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp609));
            return $tmp608;
        }
        }
        panda$core$Bit $tmp610 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        if ($tmp610.value) {
        {
            panda$core$Bit $tmp612 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s611);
            if ($tmp612.value) {
            {
                org$pandalanguage$pandac$Type* $tmp616 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp615 = $tmp616;
                org$pandalanguage$pandac$Type* $tmp614 = $tmp615;
                org$pandalanguage$pandac$Type* $tmp613 = $tmp614;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp614));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
                return $tmp613;
            }
            }
            org$pandalanguage$pandac$Type* $tmp620 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp619 = $tmp620;
            org$pandalanguage$pandac$Type* $tmp618 = $tmp619;
            org$pandalanguage$pandac$Type* $tmp617 = $tmp618;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp618));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
            return $tmp617;
        }
        }
    }
    }
    panda$core$Bit $tmp621 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
    if ($tmp621.value) {
    {
        panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp622 = $tmp623.value;
        if ($tmp622) goto $l624;
        panda$core$Bit $tmp625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
        $tmp622 = $tmp625.value;
        $l624:;
        panda$core$Bit $tmp626 = { $tmp622 };
        if ($tmp626.value) {
        {
            org$pandalanguage$pandac$Type* $tmp628 = p_other;
            org$pandalanguage$pandac$Type* $tmp627 = $tmp628;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp628));
            return $tmp627;
        }
        }
        panda$core$Bit $tmp629 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        if ($tmp629.value) {
        {
            panda$core$Bit $tmp631 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s630);
            if ($tmp631.value) {
            {
                org$pandalanguage$pandac$Type* $tmp635 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp634 = $tmp635;
                org$pandalanguage$pandac$Type* $tmp633 = $tmp634;
                org$pandalanguage$pandac$Type* $tmp632 = $tmp633;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp633));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
                return $tmp632;
            }
            }
            org$pandalanguage$pandac$Type* $tmp639 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp638 = $tmp639;
            org$pandalanguage$pandac$Type* $tmp637 = $tmp638;
            org$pandalanguage$pandac$Type* $tmp636 = $tmp637;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp637));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
            return $tmp636;
        }
        }
    }
    }
    panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp640.value) {
    {
        panda$core$Object* $tmp646 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp645 = $tmp646;
        org$pandalanguage$pandac$Type* $tmp647 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp645), p_compiler, p_other);
        org$pandalanguage$pandac$Type* $tmp644 = $tmp647;
        org$pandalanguage$pandac$Type* $tmp648 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp644);
        org$pandalanguage$pandac$Type* $tmp643 = $tmp648;
        org$pandalanguage$pandac$Type* $tmp642 = $tmp643;
        org$pandalanguage$pandac$Type* $tmp641 = $tmp642;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp642));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp643));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
        panda$core$Panda$unref$panda$core$Object($tmp645);
        return $tmp641;
    }
    }
    panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp649.value) {
    {
        panda$core$Object* $tmp655 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp654 = $tmp655;
        org$pandalanguage$pandac$Type* $tmp656 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp654));
        org$pandalanguage$pandac$Type* $tmp653 = $tmp656;
        org$pandalanguage$pandac$Type* $tmp657 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp653);
        org$pandalanguage$pandac$Type* $tmp652 = $tmp657;
        org$pandalanguage$pandac$Type* $tmp651 = $tmp652;
        org$pandalanguage$pandac$Type* $tmp650 = $tmp651;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp651));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp652));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp653));
        panda$core$Panda$unref$panda$core$Object($tmp654);
        return $tmp650;
    }
    }
    org$pandalanguage$pandac$Type* $tmp661 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
    org$pandalanguage$pandac$Type* $tmp660 = $tmp661;
    org$pandalanguage$pandac$Type* $tmp659 = $tmp660;
    t1658 = $tmp659;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp659));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp660));
    org$pandalanguage$pandac$Type* $tmp665 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
    org$pandalanguage$pandac$Type* $tmp664 = $tmp665;
    org$pandalanguage$pandac$Type* $tmp663 = $tmp664;
    t2662 = $tmp663;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp663));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp664));
    panda$core$Bit $tmp667 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t1658);
    bool $tmp666 = $tmp667.value;
    if (!$tmp666) goto $l668;
    panda$core$Bit $tmp669 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t2662);
    $tmp666 = $tmp669.value;
    $l668:;
    panda$core$Bit $tmp670 = { $tmp666 };
    if ($tmp670.value) {
    {
        panda$collections$Set* $tmp674 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
        panda$collections$Set$init($tmp674);
        panda$collections$Set* $tmp673 = $tmp674;
        panda$collections$Set* $tmp672 = $tmp673;
        ancestors671 = $tmp672;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp672));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp673));
        org$pandalanguage$pandac$Type* $tmp676 = self;
        t675 = $tmp676;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp676));
        org$pandalanguage$pandac$ClassDecl* $tmp680 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1658);
        org$pandalanguage$pandac$ClassDecl* $tmp679 = $tmp680;
        org$pandalanguage$pandac$ClassDecl* $tmp678 = $tmp679;
        cl677 = $tmp678;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp678));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
        $l681:;
        bool $tmp683 = ((panda$core$Bit) { cl677 != NULL }).value;
        if (!$tmp683) goto $l682;
        {
            panda$collections$Set$add$panda$collections$Set$T(ancestors671, ((panda$collections$Key*) t675));
            if (((panda$core$Bit) { cl677->rawSuper != NULL }).value) {
            {
                {
                    org$pandalanguage$pandac$Type* $tmp684 = t675;
                    org$pandalanguage$pandac$Type* $tmp687 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t675, cl677->rawSuper);
                    org$pandalanguage$pandac$Type* $tmp686 = $tmp687;
                    org$pandalanguage$pandac$Type* $tmp685 = $tmp686;
                    t675 = $tmp685;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp685));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp686));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
                }
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp688 = cl677;
                    org$pandalanguage$pandac$ClassDecl* $tmp691 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t675);
                    org$pandalanguage$pandac$ClassDecl* $tmp690 = $tmp691;
                    org$pandalanguage$pandac$ClassDecl* $tmp689 = $tmp690;
                    cl677 = $tmp689;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp689));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp688));
                }
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp692 = cl677;
                    org$pandalanguage$pandac$ClassDecl* $tmp693 = NULL;
                    cl677 = $tmp693;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp693));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp692));
                }
            }
            }
        }
        goto $l681;
        $l682:;
        {
            org$pandalanguage$pandac$Type* $tmp694 = t675;
            org$pandalanguage$pandac$Type* $tmp695 = p_other;
            t675 = $tmp695;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp695));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
        }
        {
            org$pandalanguage$pandac$ClassDecl* $tmp696 = cl677;
            org$pandalanguage$pandac$ClassDecl* $tmp699 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t2662);
            org$pandalanguage$pandac$ClassDecl* $tmp698 = $tmp699;
            org$pandalanguage$pandac$ClassDecl* $tmp697 = $tmp698;
            cl677 = $tmp697;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp697));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp698));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp696));
        }
        $l700:;
        bool $tmp702 = ((panda$core$Bit) { cl677 != NULL }).value;
        if (!$tmp702) goto $l701;
        {
            panda$core$Bit $tmp703 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors671, ((panda$collections$Key*) t675));
            if ($tmp703.value) {
            {
                {
                    org$pandalanguage$pandac$Type* $tmp705 = t675;
                    tmp6704 = $tmp705;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp705));
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t675));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors671));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl677));
                    }
                    {
                        tmp7706 = tmp6704;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1658));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2662));
                        }
                        org$pandalanguage$pandac$Type* $tmp707 = tmp7706;
                        return $tmp707;
                    }
                }
            }
            }
            if (((panda$core$Bit) { cl677->rawSuper != NULL }).value) {
            {
                {
                    org$pandalanguage$pandac$Type* $tmp708 = t675;
                    org$pandalanguage$pandac$Type* $tmp711 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t675, cl677->rawSuper);
                    org$pandalanguage$pandac$Type* $tmp710 = $tmp711;
                    org$pandalanguage$pandac$Type* $tmp709 = $tmp710;
                    t675 = $tmp709;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp709));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp710));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp708));
                }
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp712 = cl677;
                    org$pandalanguage$pandac$ClassDecl* $tmp715 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t675);
                    org$pandalanguage$pandac$ClassDecl* $tmp714 = $tmp715;
                    org$pandalanguage$pandac$ClassDecl* $tmp713 = $tmp714;
                    cl677 = $tmp713;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp713));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp714));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp712));
                }
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp716 = cl677;
                    org$pandalanguage$pandac$ClassDecl* $tmp717 = NULL;
                    cl677 = $tmp717;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp717));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp716));
                }
            }
            }
        }
        goto $l700;
        $l701:;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t675));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors671));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl677));
        }
    }
    }
    {
        org$pandalanguage$pandac$Type* $tmp721 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$Type* $tmp720 = $tmp721;
        org$pandalanguage$pandac$Type* $tmp719 = $tmp720;
        tmp8718 = $tmp719;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp719));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp720));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1658));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2662));
        }
        org$pandalanguage$pandac$Type* $tmp722 = tmp8718;
        return $tmp722;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* found727;
    org$pandalanguage$pandac$Type* tmp9731;
    org$pandalanguage$pandac$Type* tmp10734;
    panda$collections$Array* remapped737;
    panda$core$MutableString* name741;
    panda$core$Char8 $tmp747;
    panda$core$String* separator748;
    panda$core$Range$LTpanda$core$Int64$GT $tmp751;
    org$pandalanguage$pandac$Type* child766;
    panda$core$Char8 $tmp782;
    org$pandalanguage$pandac$Type* tmp11783;
    panda$collections$Array* remapped798;
    panda$core$MutableString* name802;
    panda$core$String* separator807;
    panda$core$Range$LTpanda$core$Int64$GT $tmp812;
    org$pandalanguage$pandac$Type* child828;
    org$pandalanguage$pandac$Type* child853;
    panda$core$Char8 $tmp863;
    org$pandalanguage$pandac$Type* tmp12864;
    panda$core$Int64 $tmp723 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp723, ((panda$core$Int64) { 0 }));
    if ($tmp724.value) {
    {
        org$pandalanguage$pandac$Type* $tmp726 = self;
        org$pandalanguage$pandac$Type* $tmp725 = $tmp726;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp726));
        return $tmp725;
    }
    }
    switch (self->typeKind.value) {
        case 22:
        {
            panda$core$Object* $tmp730 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            panda$core$Object* $tmp729 = $tmp730;
            org$pandalanguage$pandac$Type* $tmp728 = ((org$pandalanguage$pandac$Type*) $tmp729);
            found727 = $tmp728;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp728));
            panda$core$Panda$unref$panda$core$Object($tmp729);
            if (((panda$core$Bit) { found727 != NULL }).value) {
            {
                {
                    org$pandalanguage$pandac$Type* $tmp732 = found727;
                    tmp9731 = $tmp732;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp732));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found727));
                    org$pandalanguage$pandac$Type* $tmp733 = tmp9731;
                    return $tmp733;
                }
            }
            }
            {
                org$pandalanguage$pandac$Type* $tmp735 = self;
                tmp10734 = $tmp735;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp735));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found727));
                org$pandalanguage$pandac$Type* $tmp736 = tmp10734;
                return $tmp736;
            }
        }
        break;
        case 21:
        {
            panda$collections$Array* $tmp740 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp740);
            panda$collections$Array* $tmp739 = $tmp740;
            panda$collections$Array* $tmp738 = $tmp739;
            remapped737 = $tmp738;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp738));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp739));
            panda$core$MutableString* $tmp744 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$Object* $tmp746 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp745 = $tmp746;
            panda$core$MutableString$init$panda$core$String($tmp744, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp745))->name);
            panda$core$MutableString* $tmp743 = $tmp744;
            panda$core$MutableString* $tmp742 = $tmp743;
            name741 = $tmp742;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp742));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp743));
            panda$core$Panda$unref$panda$core$Object($tmp745);
            panda$core$Char8$init$panda$core$UInt8(&$tmp747, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name741, $tmp747);
            panda$core$String* $tmp749 = &$s750;
            separator748 = $tmp749;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp749));
            panda$core$Int64 $tmp752 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp751, ((panda$core$Int64) { 0 }), $tmp752, ((panda$core$Bit) { false }));
            int64_t $tmp754 = $tmp751.min.value;
            panda$core$Int64 i753 = { $tmp754 };
            int64_t $tmp756 = $tmp751.max.value;
            bool $tmp757 = $tmp751.inclusive.value;
            if ($tmp757) goto $l764; else goto $l765;
            $l764:;
            if ($tmp754 <= $tmp756) goto $l758; else goto $l760;
            $l765:;
            if ($tmp754 < $tmp756) goto $l758; else goto $l760;
            $l758:;
            {
                panda$core$Object* $tmp770 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i753);
                panda$core$Object* $tmp769 = $tmp770;
                org$pandalanguage$pandac$Type* $tmp771 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp769), p_types);
                org$pandalanguage$pandac$Type* $tmp768 = $tmp771;
                org$pandalanguage$pandac$Type* $tmp767 = $tmp768;
                child766 = $tmp767;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp767));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp768));
                panda$core$Panda$unref$panda$core$Object($tmp769);
                panda$collections$Array$add$panda$collections$Array$T(remapped737, ((panda$core$Object*) child766));
                panda$core$Bit $tmp772 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i753, ((panda$core$Int64) { 0 }));
                if ($tmp772.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name741, separator748);
                    panda$core$MutableString$append$panda$core$String(name741, ((org$pandalanguage$pandac$Symbol*) child766)->name);
                    {
                        panda$core$String* $tmp773 = separator748;
                        panda$core$String* $tmp774 = &$s775;
                        separator748 = $tmp774;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp774));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
                    }
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child766));
            }
            $l761:;
            int64_t $tmp777 = $tmp756 - i753.value;
            if ($tmp757) goto $l778; else goto $l779;
            $l778:;
            if ((uint64_t) $tmp777 >= 1) goto $l776; else goto $l760;
            $l779:;
            if ((uint64_t) $tmp777 > 1) goto $l776; else goto $l760;
            $l776:;
            i753.value += 1;
            goto $l758;
            $l760:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp782, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name741, $tmp782);
            {
                org$pandalanguage$pandac$Type* $tmp786 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp788 = panda$core$MutableString$finish$R$panda$core$String(name741);
                panda$core$String* $tmp787 = $tmp788;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp786, $tmp787, ((panda$core$Int64) { 21 }), self->position, ((panda$collections$ListView*) remapped737), self->resolved);
                org$pandalanguage$pandac$Type* $tmp785 = $tmp786;
                org$pandalanguage$pandac$Type* $tmp784 = $tmp785;
                tmp11783 = $tmp784;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp784));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp787));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator748));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped737));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name741));
                }
                org$pandalanguage$pandac$Type* $tmp789 = tmp11783;
                return $tmp789;
            }
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp795 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp794 = $tmp795;
            org$pandalanguage$pandac$Type* $tmp796 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp794), p_types);
            org$pandalanguage$pandac$Type* $tmp793 = $tmp796;
            org$pandalanguage$pandac$Type* $tmp797 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp793);
            org$pandalanguage$pandac$Type* $tmp792 = $tmp797;
            org$pandalanguage$pandac$Type* $tmp791 = $tmp792;
            org$pandalanguage$pandac$Type* $tmp790 = $tmp791;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp791));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp792));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp793));
            panda$core$Panda$unref$panda$core$Object($tmp794);
            return $tmp790;
        }
        break;
        case 25:
        case 24:
        {
            panda$collections$Array* $tmp801 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp801);
            panda$collections$Array* $tmp800 = $tmp801;
            panda$collections$Array* $tmp799 = $tmp800;
            remapped798 = $tmp799;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp799));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp800));
            panda$core$MutableString* $tmp805 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp805, &$s806);
            panda$core$MutableString* $tmp804 = $tmp805;
            panda$core$MutableString* $tmp803 = $tmp804;
            name802 = $tmp803;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp803));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp804));
            panda$core$String* $tmp808 = &$s809;
            separator807 = $tmp808;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp808));
            panda$core$Int64 $tmp810 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp811 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp810, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp811.value);
            panda$core$Int64 $tmp813 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp814 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp813, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp812, ((panda$core$Int64) { 0 }), $tmp814, ((panda$core$Bit) { false }));
            int64_t $tmp816 = $tmp812.min.value;
            panda$core$Int64 i815 = { $tmp816 };
            int64_t $tmp818 = $tmp812.max.value;
            bool $tmp819 = $tmp812.inclusive.value;
            if ($tmp819) goto $l826; else goto $l827;
            $l826:;
            if ($tmp816 <= $tmp818) goto $l820; else goto $l822;
            $l827:;
            if ($tmp816 < $tmp818) goto $l820; else goto $l822;
            $l820:;
            {
                panda$core$Object* $tmp832 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i815);
                panda$core$Object* $tmp831 = $tmp832;
                org$pandalanguage$pandac$Type* $tmp833 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp831), p_types);
                org$pandalanguage$pandac$Type* $tmp830 = $tmp833;
                org$pandalanguage$pandac$Type* $tmp829 = $tmp830;
                child828 = $tmp829;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp829));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp830));
                panda$core$Panda$unref$panda$core$Object($tmp831);
                panda$core$MutableString$append$panda$core$String(name802, separator807);
                panda$core$MutableString$append$panda$core$String(name802, ((org$pandalanguage$pandac$Symbol*) child828)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped798, ((panda$core$Object*) child828));
                {
                    panda$core$String* $tmp834 = separator807;
                    panda$core$String* $tmp835 = &$s836;
                    separator807 = $tmp835;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp835));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp834));
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child828));
            }
            $l823:;
            int64_t $tmp838 = $tmp818 - i815.value;
            if ($tmp819) goto $l839; else goto $l840;
            $l839:;
            if ((uint64_t) $tmp838 >= 1) goto $l837; else goto $l822;
            $l840:;
            if ((uint64_t) $tmp838 > 1) goto $l837; else goto $l822;
            $l837:;
            i815.value += 1;
            goto $l820;
            $l822:;
            panda$core$Bit $tmp843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp843.value) {
            {
                panda$core$MutableString$append$panda$core$String(name802, &$s844);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name802, &$s845);
            }
            }
            panda$core$Int64 $tmp847 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp848 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp847, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp849 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp848);
            panda$core$Object* $tmp846 = $tmp849;
            org$pandalanguage$pandac$Type* $tmp851 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp850 = $tmp851;
            panda$core$Bit $tmp852 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp846), $tmp850);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
            panda$core$Panda$unref$panda$core$Object($tmp846);
            if ($tmp852.value) {
            {
                panda$core$Int64 $tmp857 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp858 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp857, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp859 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp858);
                panda$core$Object* $tmp856 = $tmp859;
                org$pandalanguage$pandac$Type* $tmp860 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp856), p_types);
                org$pandalanguage$pandac$Type* $tmp855 = $tmp860;
                org$pandalanguage$pandac$Type* $tmp854 = $tmp855;
                child853 = $tmp854;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp854));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp855));
                panda$core$Panda$unref$panda$core$Object($tmp856);
                panda$core$MutableString$append$panda$core$String(name802, ((org$pandalanguage$pandac$Symbol*) child853)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped798, ((panda$core$Object*) child853));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child853));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp862 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp861 = $tmp862;
                panda$collections$Array$add$panda$collections$Array$T(remapped798, ((panda$core$Object*) $tmp861));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp861));
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp863, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(name802, $tmp863);
            {
                org$pandalanguage$pandac$Type* $tmp867 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp869 = panda$core$MutableString$finish$R$panda$core$String(name802);
                panda$core$String* $tmp868 = $tmp869;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp867, $tmp868, self->typeKind, self->position, ((panda$collections$ListView*) remapped798), self->resolved);
                org$pandalanguage$pandac$Type* $tmp866 = $tmp867;
                org$pandalanguage$pandac$Type* $tmp865 = $tmp866;
                tmp12864 = $tmp865;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp865));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp866));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp868));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator807));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped798));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name802));
                }
                org$pandalanguage$pandac$Type* $tmp870 = tmp12864;
                return $tmp870;
            }
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp872 = self;
            org$pandalanguage$pandac$Type* $tmp871 = $tmp872;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp872));
            return $tmp871;
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp874 = panda$core$String$hash$R$panda$core$Int64(self->name);
    panda$core$Int64 $tmp873 = $tmp874;
    return $tmp873;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $tmp876 = self->name;
    panda$core$String* $tmp875 = $tmp876;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp876));
    return $tmp875;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->test));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

