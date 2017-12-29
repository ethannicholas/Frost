#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
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

org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit, org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit, org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit, org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn36)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn42)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn48)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };

void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position) {
    self->parameter = NULL;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(self, p_name, p_typeKind, p_position, ((panda$core$Bit) { false }));
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_resolved) {
    self->parameter = NULL;
    panda$core$Bit $tmp2 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s1);
    panda$core$Bit $tmp3 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2);
    PANDA_ASSERT($tmp3.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        panda$core$Object* $tmp4 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
        self->subtypes = ((panda$collections$Array*) $tmp4);
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, panda$core$Int64 p_size) {
    org$pandalanguage$pandac$Position $tmp8;
    self->parameter = NULL;
    panda$core$Bit $tmp6 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s5);
    panda$core$Bit $tmp7 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6);
    PANDA_ASSERT($tmp7.value);
    self->typeKind = p_typeKind;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp8, p_size, p_size);
    ((org$pandalanguage$pandac$Symbol*) self)->position = $tmp8;
    self->resolved = ((panda$core$Bit) { true });
    {
        panda$core$Object* $tmp9 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
        self->subtypes = ((panda$collections$Array*) $tmp9);
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_subtypes, panda$core$Bit p_resolved) {
    self->parameter = NULL;
    panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 11 }));
    panda$core$Bit $tmp12 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s11);
    panda$core$Bit $tmp13 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp10, $tmp12);
    PANDA_ASSERT($tmp13.value);
    panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 21 }));
    panda$core$Bit $tmp16 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s15);
    panda$core$Bit $tmp17 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp14, $tmp16);
    PANDA_ASSERT($tmp17.value);
    panda$core$Bit $tmp18 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 22 }));
    PANDA_ASSERT($tmp18.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        panda$collections$Array* $tmp19 = (panda$collections$Array*) pandaAlloc(41);
        $tmp19->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp19->refCount.value = 1;
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp19, p_subtypes);
        panda$core$Object* $tmp21 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp19));
        self->subtypes = ((panda$collections$Array*) $tmp21);
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    panda$core$MutableString* name25;
    panda$core$String* separator30;
    panda$collections$Iterator* t$Iter33;
    org$pandalanguage$pandac$Type* t45;
    panda$core$Char8 $tmp55;
    self->parameter = NULL;
    self->typeKind = ((panda$core$Int64) { 17 });
    {
        panda$collections$Array* $tmp22 = (panda$collections$Array*) pandaAlloc(41);
        $tmp22->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp22->refCount.value = 1;
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp22, p_subtypes);
        panda$core$Object* $tmp24 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp22));
        self->subtypes = ((panda$collections$Array*) $tmp24);
    }
    panda$core$MutableString* $tmp26 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp26->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp26->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp26, &$s28);
    panda$core$Object* $tmp29 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp26));
    name25 = ((panda$core$MutableString*) $tmp29);
    panda$core$Object* $tmp32 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s31));
    separator30 = ((panda$core$String*) $tmp32);
    self->resolved = ((panda$core$Bit) { true });
    {
        ITable* $tmp34 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
        while ($tmp34->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp34 = $tmp34->next;
        }
        $fn36 $tmp35 = $tmp34->methods[0];
        panda$collections$Iterator* $tmp37 = $tmp35(((panda$collections$Iterable*) p_subtypes));
        t$Iter33 = $tmp37;
        $l38:;
        ITable* $tmp40 = t$Iter33->$class->itable;
        while ($tmp40->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp40 = $tmp40->next;
        }
        $fn42 $tmp41 = $tmp40->methods[0];
        panda$core$Bit $tmp43 = $tmp41(t$Iter33);
        panda$core$Bit $tmp44 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp43);
        if (!$tmp44.value) goto $l39;
        {
            ITable* $tmp46 = t$Iter33->$class->itable;
            while ($tmp46->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp46 = $tmp46->next;
            }
            $fn48 $tmp47 = $tmp46->methods[1];
            panda$core$Object* $tmp49 = $tmp47(t$Iter33);
            t45 = ((org$pandalanguage$pandac$Type*) $tmp49);
            panda$core$MutableString$append$panda$core$String(name25, separator30);
            panda$core$MutableString$append$panda$core$Object(name25, ((panda$core$Object*) t45));
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator30));
                panda$core$Object* $tmp51 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s50));
                separator30 = ((panda$core$String*) $tmp51);
            }
            bool $tmp52 = self->resolved.value;
            if (!$tmp52) goto $l53;
            $tmp52 = t45->resolved.value;
            $l53:;
            panda$core$Bit $tmp54 = { $tmp52 };
            self->resolved = $tmp54;
        }
        goto $l38;
        $l39:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp55, ((panda$core$UInt8) { 62 }));
    panda$core$MutableString$append$panda$core$Char8(name25, $tmp55);
    panda$core$String* $tmp56 = panda$core$MutableString$finish$R$panda$core$String(name25);
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, $tmp56);
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    self->parameter = NULL;
    {
        panda$core$String* $tmp57 = panda$core$String$convert$R$panda$core$String(p_param->owner);
        panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, &$s58);
        panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp59, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
        panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp60, &$s61);
        panda$core$Object* $tmp63 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp62));
        ((org$pandalanguage$pandac$Symbol*) self)->name = ((panda$core$String*) $tmp63);
    }
    self->typeKind = ((panda$core$Int64) { 22 });
    {
        panda$core$Object* $tmp64 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_param));
        self->parameter = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp64);
    }
    self->resolved = ((panda$core$Bit) { true });
    {
        panda$core$Object* $tmp65 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
        self->subtypes = ((panda$collections$Array*) $tmp65);
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp67 = $tmp68.value;
    if ($tmp67) goto $l69;
    panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp67 = $tmp70.value;
    $l69:;
    panda$core$Bit $tmp71 = { $tmp67 };
    bool $tmp66 = $tmp71.value;
    if ($tmp66) goto $l72;
    panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp66 = $tmp73.value;
    $l72:;
    panda$core$Bit $tmp74 = { $tmp66 };
    PANDA_ASSERT($tmp74.value);
    return self->position.line;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp75 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp75;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp76 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp76;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp80;
    org$pandalanguage$pandac$Type* $tmp77 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp77->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp77->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp80);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp77, &$s79, ((panda$core$Int64) { 14 }), $tmp80, ((panda$core$Bit) { true }));
    return $tmp77;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp84;
    org$pandalanguage$pandac$Type* $tmp81 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp81->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp81->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp84);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp81, &$s83, ((panda$core$Int64) { 23 }), $tmp84, ((panda$core$Bit) { true }));
    return $tmp81;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp88;
    org$pandalanguage$pandac$Type* $tmp85 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp85->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp85->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp88);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp85, &$s87, ((panda$core$Int64) { 10 }), $tmp88, ((panda$core$Bit) { true }));
    return $tmp85;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes89;
    org$pandalanguage$pandac$Position $tmp97;
    panda$collections$Array* $tmp90 = (panda$collections$Array*) pandaAlloc(41);
    $tmp90->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp90->refCount.value = 1;
    panda$collections$Array$init($tmp90);
    panda$core$Object* $tmp92 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp90));
    subtypes89 = ((panda$collections$Array*) $tmp92);
    org$pandalanguage$pandac$Type* $tmp93 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes89, ((panda$core$Object*) $tmp93));
    org$pandalanguage$pandac$Type* $tmp94 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp94->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp94->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp97);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp94, &$s96, ((panda$core$Int64) { 11 }), $tmp97, ((panda$collections$ListView*) subtypes89), ((panda$core$Bit) { true }));
    return $tmp94;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp101;
    org$pandalanguage$pandac$Type* $tmp98 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp98->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp98->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp101);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp98, &$s100, ((panda$core$Int64) { 10 }), $tmp101, ((panda$core$Bit) { true }));
    return $tmp98;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp105;
    org$pandalanguage$pandac$Type* $tmp102 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp102->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp102->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp105);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp102, &$s104, ((panda$core$Int64) { 10 }), $tmp105, ((panda$core$Bit) { true }));
    return $tmp102;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp109;
    org$pandalanguage$pandac$Type* $tmp106 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp106->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp106->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp109);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp106, &$s108, ((panda$core$Int64) { 10 }), $tmp109, ((panda$core$Bit) { true }));
    return $tmp106;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp110 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp110->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp110->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp110, &$s112, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }));
    return $tmp110;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp113 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp113->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp113->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp113, &$s115, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }));
    return $tmp113;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp116 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp116->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp116->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp116, &$s118, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }));
    return $tmp116;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp119 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp119->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp119->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp119, &$s121, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }));
    return $tmp119;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp122 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp122->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp122->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp122, &$s124, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }));
    return $tmp122;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp125 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp125->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp125->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp125, &$s127, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }));
    return $tmp125;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp128 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp128->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp128->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp128, &$s130, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }));
    return $tmp128;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp131 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp131->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp131->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp131, &$s133, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }));
    return $tmp131;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp134 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp134->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp134->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp134, &$s136, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 32 }));
    return $tmp134;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp137 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp137->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp137->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp137, &$s139, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 64 }));
    return $tmp137;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp143;
    org$pandalanguage$pandac$Type* $tmp140 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp140->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp140->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp143);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp140, &$s142, ((panda$core$Int64) { 10 }), $tmp143, ((panda$core$Bit) { true }));
    return $tmp140;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp147;
    org$pandalanguage$pandac$Type* $tmp144 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp144->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp144->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp147);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp144, &$s146, ((panda$core$Int64) { 10 }), $tmp147, ((panda$core$Bit) { true }));
    return $tmp144;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp151;
    org$pandalanguage$pandac$Type* $tmp148 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp148->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp148->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp151);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp148, &$s150, ((panda$core$Int64) { 10 }), $tmp151, ((panda$core$Bit) { true }));
    return $tmp148;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp155;
    org$pandalanguage$pandac$Type* $tmp152 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp152->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp152->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp155);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp152, &$s154, ((panda$core$Int64) { 10 }), $tmp155, ((panda$core$Bit) { true }));
    return $tmp152;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp159;
    org$pandalanguage$pandac$Type* $tmp156 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp156->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp156->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp159);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp156, &$s158, ((panda$core$Int64) { 10 }), $tmp159, ((panda$core$Bit) { true }));
    return $tmp156;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp163;
    org$pandalanguage$pandac$Type* $tmp160 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp160->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp160->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp163);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp160, &$s162, ((panda$core$Int64) { 10 }), $tmp163, ((panda$core$Bit) { true }));
    return $tmp160;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp167;
    org$pandalanguage$pandac$Type* $tmp164 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp164->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp164->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp167);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp164, &$s166, ((panda$core$Int64) { 10 }), $tmp167, ((panda$core$Bit) { true }));
    return $tmp164;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp171;
    org$pandalanguage$pandac$Type* $tmp168 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp168->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp168->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp171);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp168, &$s170, ((panda$core$Int64) { 10 }), $tmp171, ((panda$core$Bit) { true }));
    return $tmp168;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp175;
    org$pandalanguage$pandac$Type* $tmp172 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp172->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp172->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp175);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp172, &$s174, ((panda$core$Int64) { 10 }), $tmp175, ((panda$core$Bit) { true }));
    return $tmp172;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp179;
    org$pandalanguage$pandac$Type* $tmp176 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp176->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp176->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp179);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp176, &$s178, ((panda$core$Int64) { 10 }), $tmp179, ((panda$core$Bit) { true }));
    return $tmp176;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp183;
    org$pandalanguage$pandac$Type* $tmp180 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp180->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp180->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp183);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp180, &$s182, ((panda$core$Int64) { 10 }), $tmp183, ((panda$core$Bit) { true }));
    return $tmp180;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp187;
    org$pandalanguage$pandac$Type* $tmp184 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp184->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp184->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp187);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp184, &$s186, ((panda$core$Int64) { 10 }), $tmp187, ((panda$core$Bit) { true }));
    return $tmp184;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp191;
    org$pandalanguage$pandac$Type* $tmp188 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp188->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp188->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp191);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp188, &$s190, ((panda$core$Int64) { 10 }), $tmp191, ((panda$core$Bit) { true }));
    return $tmp188;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp195;
    org$pandalanguage$pandac$Type* $tmp192 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp192->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp192->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp195);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp192, &$s194, ((panda$core$Int64) { 10 }), $tmp195, ((panda$core$Bit) { true }));
    return $tmp192;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Position $tmp199;
    org$pandalanguage$pandac$Type* $tmp196 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp196->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp196->refCount.value = 1;
    panda$core$String* $tmp198 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    org$pandalanguage$pandac$Position$init(&$tmp199);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp196, $tmp198, ((panda$core$Int64) { 15 }), $tmp199, ((panda$core$Bit) { true }));
    return $tmp196;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Position $tmp205;
    org$pandalanguage$pandac$Type* $tmp200 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp200->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp200->refCount.value = 1;
    panda$core$String* $tmp203 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s202, $tmp203);
    org$pandalanguage$pandac$Position$init(&$tmp205);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp200, $tmp204, ((panda$core$Int64) { 15 }), $tmp205, ((panda$core$Bit) { true }));
    return $tmp200;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Position $tmp209;
    org$pandalanguage$pandac$Type* $tmp206 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp206->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp206->refCount.value = 1;
    panda$core$String* $tmp208 = panda$core$Real64$convert$R$panda$core$String(p_value);
    org$pandalanguage$pandac$Position$init(&$tmp209);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp206, $tmp208, ((panda$core$Int64) { 26 }), $tmp209, ((panda$core$Bit) { true }));
    return $tmp206;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp213;
    org$pandalanguage$pandac$Type* $tmp210 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp210->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp210->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp213);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp210, &$s212, ((panda$core$Int64) { 18 }), $tmp213, ((panda$core$Bit) { true }));
    return $tmp210;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp217;
    org$pandalanguage$pandac$Type* $tmp214 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp214->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp214->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp217);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp214, &$s216, ((panda$core$Int64) { 19 }), $tmp217, ((panda$core$Bit) { true }));
    return $tmp214;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp221;
    org$pandalanguage$pandac$Type* $tmp218 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp218->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp218->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp221);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp218, &$s220, ((panda$core$Int64) { 10 }), $tmp221, ((panda$core$Bit) { true }));
    return $tmp218;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp225;
    org$pandalanguage$pandac$Type* $tmp222 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp222->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp222->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp225);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp222, &$s224, ((panda$core$Int64) { 10 }), $tmp225, ((panda$core$Bit) { true }));
    return $tmp222;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp229;
    org$pandalanguage$pandac$Type* $tmp226 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp226->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp226->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp229);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp226, &$s228, ((panda$core$Int64) { 10 }), $tmp229, ((panda$core$Bit) { true }));
    return $tmp226;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children230;
    org$pandalanguage$pandac$Position $tmp237;
    panda$collections$Array* $tmp231 = (panda$collections$Array*) pandaAlloc(41);
    $tmp231->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp231->refCount.value = 1;
    panda$collections$Array$init($tmp231);
    panda$core$Object* $tmp233 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp231));
    children230 = ((panda$collections$Array*) $tmp233);
    org$pandalanguage$pandac$Type* $tmp234 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp234->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp234->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp237);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp234, &$s236, ((panda$core$Int64) { 10 }), $tmp237, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children230, ((panda$core$Object*) $tmp234));
    panda$collections$Array$add$panda$collections$Array$T(children230, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp238 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp238->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp238->refCount.value = 1;
    panda$core$String* $tmp241 = panda$core$String$convert$R$panda$core$String(&$s240);
    panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, &$s242);
    panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp243, ((panda$core$Object*) p_t));
    panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, &$s245);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp238, $tmp246, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children230), p_t->resolved);
    return $tmp238;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children247;
    org$pandalanguage$pandac$Position $tmp254;
    panda$collections$Array* $tmp248 = (panda$collections$Array*) pandaAlloc(41);
    $tmp248->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp248->refCount.value = 1;
    panda$collections$Array$init($tmp248);
    panda$core$Object* $tmp250 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp248));
    children247 = ((panda$collections$Array*) $tmp250);
    org$pandalanguage$pandac$Type* $tmp251 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp251->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp251->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp254);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp251, &$s253, ((panda$core$Int64) { 10 }), $tmp254, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children247, ((panda$core$Object*) $tmp251));
    panda$collections$Array$add$panda$collections$Array$T(children247, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp255 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp256 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp255);
    if ($tmp256.value) {
    {
        org$pandalanguage$pandac$Type* $tmp257 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(children247, ((panda$core$Object*) $tmp257));
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp258 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp259 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp258);
    if ($tmp259.value) {
    {
        org$pandalanguage$pandac$Type* $tmp260 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(children247, ((panda$core$Object*) $tmp260));
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp261 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp262 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp261);
    if ($tmp262.value) {
    {
        org$pandalanguage$pandac$Type* $tmp263 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(children247, ((panda$core$Object*) $tmp263));
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp264 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
        panda$collections$Array$add$panda$collections$Array$T(children247, ((panda$core$Object*) $tmp264));
    }
    }
    }
    }
    org$pandalanguage$pandac$Type* $tmp265 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp265->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp265->refCount.value = 1;
    panda$core$String* $tmp268 = panda$core$String$convert$R$panda$core$String(&$s267);
    panda$core$String* $tmp270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp268, &$s269);
    panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp270, ((panda$core$Object*) p_t));
    panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp271, &$s272);
    org$pandalanguage$pandac$Type* $tmp274 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
    panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp273, ((panda$core$Object*) $tmp274));
    panda$core$String* $tmp277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp275, &$s276);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp265, $tmp277, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children247), p_t->resolved);
    return $tmp265;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp281;
    org$pandalanguage$pandac$Type* $tmp278 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp278->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp278->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp281);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp278, &$s280, ((panda$core$Int64) { 16 }), $tmp281, ((panda$core$Bit) { true }));
    return $tmp278;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp285;
    org$pandalanguage$pandac$Type* $tmp282 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp282->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp282->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp285);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp282, &$s284, ((panda$core$Int64) { 16 }), $tmp285, ((panda$core$Bit) { true }));
    return $tmp282;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp291 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s290);
    bool $tmp289 = $tmp291.value;
    if ($tmp289) goto $l292;
    panda$core$Bit $tmp294 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s293);
    $tmp289 = $tmp294.value;
    $l292:;
    panda$core$Bit $tmp295 = { $tmp289 };
    bool $tmp288 = $tmp295.value;
    if ($tmp288) goto $l296;
    panda$core$Bit $tmp298 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s297);
    $tmp288 = $tmp298.value;
    $l296:;
    panda$core$Bit $tmp299 = { $tmp288 };
    bool $tmp287 = $tmp299.value;
    if ($tmp287) goto $l300;
    panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp287 = $tmp301.value;
    $l300:;
    panda$core$Bit $tmp302 = { $tmp287 };
    bool $tmp286 = $tmp302.value;
    if ($tmp286) goto $l303;
    panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    $tmp286 = $tmp304.value;
    $l303:;
    panda$core$Bit $tmp305 = { $tmp286 };
    return $tmp305;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp308 = $tmp309.value;
    if ($tmp308) goto $l310;
    panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp308 = $tmp311.value;
    $l310:;
    panda$core$Bit $tmp312 = { $tmp308 };
    bool $tmp307 = $tmp312.value;
    if ($tmp307) goto $l313;
    panda$core$Bit $tmp314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp307 = $tmp314.value;
    $l313:;
    panda$core$Bit $tmp315 = { $tmp307 };
    bool $tmp306 = $tmp315.value;
    if ($tmp306) goto $l316;
    panda$core$Bit $tmp317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp306 = $tmp317.value;
    $l316:;
    panda$core$Bit $tmp318 = { $tmp306 };
    return $tmp318;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    bool $tmp319 = $tmp320.value;
    if ($tmp319) goto $l321;
    panda$core$Bit $tmp323 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s322);
    $tmp319 = $tmp323.value;
    $l321:;
    panda$core$Bit $tmp324 = { $tmp319 };
    return $tmp324;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp326 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s325);
    return $tmp326;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp328 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp327 = $tmp328.value;
    if ($tmp327) goto $l329;
    panda$core$Bit $tmp330 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp327 = $tmp330.value;
    $l329:;
    panda$core$Bit $tmp331 = { $tmp327 };
    return $tmp331;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $match$371_13332;
    {
        $match$371_13332 = self->typeKind;
        panda$core$Bit $tmp336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13332, ((panda$core$Int64) { 10 }));
        bool $tmp335 = $tmp336.value;
        if ($tmp335) goto $l337;
        panda$core$Bit $tmp338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13332, ((panda$core$Int64) { 11 }));
        $tmp335 = $tmp338.value;
        $l337:;
        panda$core$Bit $tmp339 = { $tmp335 };
        bool $tmp334 = $tmp339.value;
        if ($tmp334) goto $l340;
        panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13332, ((panda$core$Int64) { 21 }));
        $tmp334 = $tmp341.value;
        $l340:;
        panda$core$Bit $tmp342 = { $tmp334 };
        bool $tmp333 = $tmp342.value;
        if ($tmp333) goto $l343;
        panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13332, ((panda$core$Int64) { 22 }));
        $tmp333 = $tmp344.value;
        $l343:;
        panda$core$Bit $tmp345 = { $tmp333 };
        if ($tmp345.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp346 = $tmp347.value;
    if ($tmp346) goto $l348;
    panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp346 = $tmp349.value;
    $l348:;
    panda$core$Bit $tmp350 = { $tmp346 };
    return $tmp350;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp352 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s351);
    return $tmp352;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp353.value) {
    {
        panda$core$Object* $tmp354 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp355 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp354));
        return $tmp355;
    }
    }
    panda$core$Bit $tmp357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp356 = $tmp357.value;
    if (!$tmp356) goto $l358;
    panda$core$Object* $tmp359 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp361 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp359))->name, &$s360);
    $tmp356 = $tmp361.value;
    $l358:;
    panda$core$Bit $tmp362 = { $tmp356 };
    return $tmp362;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp363.value) {
    {
        panda$core$Object* $tmp364 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp365 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp364));
        return $tmp365;
    }
    }
    panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp366 = $tmp367.value;
    if (!$tmp366) goto $l368;
    panda$core$Object* $tmp369 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp371 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp369))->name, &$s370);
    $tmp366 = $tmp371.value;
    $l368:;
    panda$core$Bit $tmp372 = { $tmp366 };
    return $tmp372;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes374;
    org$pandalanguage$pandac$Position $tmp383;
    panda$core$Bit $tmp373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp373.value) {
    {
        return self;
    }
    }
    panda$collections$Array* $tmp375 = (panda$collections$Array*) pandaAlloc(41);
    $tmp375->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp375->refCount.value = 1;
    panda$collections$Array$init($tmp375);
    panda$core$Object* $tmp377 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp375));
    subtypes374 = ((panda$collections$Array*) $tmp377);
    panda$collections$Array$add$panda$collections$Array$T(subtypes374, ((panda$core$Object*) self));
    org$pandalanguage$pandac$Type* $tmp378 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
    $tmp378->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp378->refCount.value = 1;
    panda$core$String* $tmp380 = panda$core$String$convert$R$panda$core$String(self->name);
    panda$core$String* $tmp382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp380, &$s381);
    org$pandalanguage$pandac$Position$init(&$tmp383);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp378, $tmp382, ((panda$core$Int64) { 11 }), $tmp383, ((panda$collections$ListView*) subtypes374), ((panda$core$Bit) { true }));
    return $tmp378;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp384 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp384.value) {
    {
        return self;
    }
    }
    panda$core$Object* $tmp385 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    return ((org$pandalanguage$pandac$Type*) $tmp385);
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* t1435;
    org$pandalanguage$pandac$Type* t2438;
    panda$collections$Set* ancestors446;
    org$pandalanguage$pandac$Type* t450;
    org$pandalanguage$pandac$ClassDecl* cl452;
    panda$core$Bit $tmp386 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp386.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp387 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp388 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp387);
    if ($tmp388.value) {
    {
        panda$core$Bit $tmp389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp389.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp390 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp390;
    }
    }
    org$pandalanguage$pandac$Type* $tmp391 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp392 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp391);
    if ($tmp392.value) {
    {
        panda$core$Bit $tmp393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp393.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp394 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp394;
    }
    }
    panda$core$Bit $tmp396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp395 = $tmp396.value;
    if (!$tmp395) goto $l397;
    panda$core$Bit $tmp398 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp395 = $tmp398.value;
    $l397:;
    panda$core$Bit $tmp399 = { $tmp395 };
    if ($tmp399.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp401 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp400 = $tmp401.value;
    if (!$tmp400) goto $l402;
    panda$core$Bit $tmp403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
    $tmp400 = $tmp403.value;
    $l402:;
    panda$core$Bit $tmp404 = { $tmp400 };
    if ($tmp404.value) {
    {
        return self;
    }
    }
    panda$core$Bit $tmp405 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
    if ($tmp405.value) {
    {
        panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp406 = $tmp407.value;
        if ($tmp406) goto $l408;
        panda$core$Bit $tmp409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 26 }));
        $tmp406 = $tmp409.value;
        $l408:;
        panda$core$Bit $tmp410 = { $tmp406 };
        if ($tmp410.value) {
        {
            return self;
        }
        }
        panda$core$Bit $tmp411 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        if ($tmp411.value) {
        {
            panda$core$Bit $tmp413 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s412);
            if ($tmp413.value) {
            {
                org$pandalanguage$pandac$Type* $tmp414 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp414;
            }
            }
            org$pandalanguage$pandac$Type* $tmp415 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp415;
        }
        }
    }
    }
    panda$core$Bit $tmp416 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
    if ($tmp416.value) {
    {
        panda$core$Bit $tmp418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp417 = $tmp418.value;
        if ($tmp417) goto $l419;
        panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
        $tmp417 = $tmp420.value;
        $l419:;
        panda$core$Bit $tmp421 = { $tmp417 };
        if ($tmp421.value) {
        {
            return p_other;
        }
        }
        panda$core$Bit $tmp422 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        if ($tmp422.value) {
        {
            panda$core$Bit $tmp424 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s423);
            if ($tmp424.value) {
            {
                org$pandalanguage$pandac$Type* $tmp425 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp425;
            }
            }
            org$pandalanguage$pandac$Type* $tmp426 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp426;
        }
        }
    }
    }
    panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp427.value) {
    {
        panda$core$Object* $tmp428 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp429 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp428), p_compiler, p_other);
        org$pandalanguage$pandac$Type* $tmp430 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp429);
        return $tmp430;
    }
    }
    panda$core$Bit $tmp431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp431.value) {
    {
        panda$core$Object* $tmp432 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp433 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp432));
        org$pandalanguage$pandac$Type* $tmp434 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp433);
        return $tmp434;
    }
    }
    org$pandalanguage$pandac$Type* $tmp436 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
    panda$core$Object* $tmp437 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp436));
    t1435 = ((org$pandalanguage$pandac$Type*) $tmp437);
    org$pandalanguage$pandac$Type* $tmp439 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
    panda$core$Object* $tmp440 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp439));
    t2438 = ((org$pandalanguage$pandac$Type*) $tmp440);
    panda$core$Bit $tmp442 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t1435);
    bool $tmp441 = $tmp442.value;
    if (!$tmp441) goto $l443;
    panda$core$Bit $tmp444 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t2438);
    $tmp441 = $tmp444.value;
    $l443:;
    panda$core$Bit $tmp445 = { $tmp441 };
    if ($tmp445.value) {
    {
        panda$collections$Set* $tmp447 = (panda$collections$Set*) pandaAlloc(24);
        $tmp447->$class = (panda$core$Class*) &panda$collections$Set$class;
        $tmp447->refCount.value = 1;
        panda$collections$Set$init($tmp447);
        panda$core$Object* $tmp449 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp447));
        ancestors446 = ((panda$collections$Set*) $tmp449);
        panda$core$Object* $tmp451 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self));
        t450 = ((org$pandalanguage$pandac$Type*) $tmp451);
        org$pandalanguage$pandac$ClassDecl* $tmp453 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1435);
        panda$core$Object* $tmp454 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp453));
        cl452 = ((org$pandalanguage$pandac$ClassDecl*) $tmp454);
        $l455:;
        if (!((panda$core$Bit) { cl452 != NULL }).value) goto $l456;
        {
            panda$collections$Set$add$panda$collections$Set$T(ancestors446, ((panda$collections$Key*) t450));
            if (((panda$core$Bit) { cl452->rawSuper != NULL }).value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) t450));
                    org$pandalanguage$pandac$Type* $tmp457 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t450, cl452->rawSuper);
                    panda$core$Object* $tmp458 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp457));
                    t450 = ((org$pandalanguage$pandac$Type*) $tmp458);
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) cl452));
                    org$pandalanguage$pandac$ClassDecl* $tmp459 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t450);
                    panda$core$Object* $tmp460 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp459));
                    cl452 = ((org$pandalanguage$pandac$ClassDecl*) $tmp460);
                }
            }
            }
            else {
            {
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) cl452));
                    panda$core$Object* $tmp461 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                    cl452 = ((org$pandalanguage$pandac$ClassDecl*) $tmp461);
                }
            }
            }
        }
        goto $l455;
        $l456:;
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) t450));
            panda$core$Object* $tmp462 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_other));
            t450 = ((org$pandalanguage$pandac$Type*) $tmp462);
        }
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) cl452));
            org$pandalanguage$pandac$ClassDecl* $tmp463 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t2438);
            panda$core$Object* $tmp464 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp463));
            cl452 = ((org$pandalanguage$pandac$ClassDecl*) $tmp464);
        }
        $l465:;
        if (!((panda$core$Bit) { cl452 != NULL }).value) goto $l466;
        {
            panda$core$Bit $tmp467 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors446, ((panda$collections$Key*) t450));
            if ($tmp467.value) {
            {
                return t450;
            }
            }
            if (((panda$core$Bit) { cl452->rawSuper != NULL }).value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) t450));
                    org$pandalanguage$pandac$Type* $tmp468 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t450, cl452->rawSuper);
                    panda$core$Object* $tmp469 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp468));
                    t450 = ((org$pandalanguage$pandac$Type*) $tmp469);
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) cl452));
                    org$pandalanguage$pandac$ClassDecl* $tmp470 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t450);
                    panda$core$Object* $tmp471 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp470));
                    cl452 = ((org$pandalanguage$pandac$ClassDecl*) $tmp471);
                }
            }
            }
            else {
            {
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) cl452));
                    panda$core$Object* $tmp472 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                    cl452 = ((org$pandalanguage$pandac$ClassDecl*) $tmp472);
                }
            }
            }
        }
        goto $l465;
        $l466:;
    }
    }
    org$pandalanguage$pandac$Type* $tmp473 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    return $tmp473;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    panda$core$Int64 $match$506_13476;
    org$pandalanguage$pandac$Type* found478;
    panda$collections$Array* remapped482;
    panda$core$MutableString* name486;
    panda$core$Char8 $tmp491;
    panda$core$String* separator492;
    panda$core$Range$LTpanda$core$Int64$GT $tmp495;
    org$pandalanguage$pandac$Type* child510;
    panda$core$Char8 $tmp523;
    panda$collections$Array* remapped536;
    panda$core$MutableString* name540;
    panda$core$String* separator545;
    panda$core$Range$LTpanda$core$Int64$GT $tmp550;
    org$pandalanguage$pandac$Type* child566;
    org$pandalanguage$pandac$Type* child586;
    panda$core$Char8 $tmp593;
    panda$core$Int64 $tmp474 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp474, ((panda$core$Int64) { 0 }));
    if ($tmp475.value) {
    {
        return self;
    }
    }
    {
        $match$506_13476 = self->typeKind;
        panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13476, ((panda$core$Int64) { 22 }));
        if ($tmp477.value) {
        {
            panda$core$Object* $tmp479 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            panda$core$Object* $tmp480 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp479)));
            found478 = ((org$pandalanguage$pandac$Type*) $tmp480);
            if (((panda$core$Bit) { found478 != NULL }).value) {
            {
                return found478;
            }
            }
            return self;
        }
        }
        else {
        panda$core$Bit $tmp481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13476, ((panda$core$Int64) { 21 }));
        if ($tmp481.value) {
        {
            panda$collections$Array* $tmp483 = (panda$collections$Array*) pandaAlloc(41);
            $tmp483->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp483->refCount.value = 1;
            panda$collections$Array$init($tmp483);
            panda$core$Object* $tmp485 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp483));
            remapped482 = ((panda$collections$Array*) $tmp485);
            panda$core$MutableString* $tmp487 = (panda$core$MutableString*) pandaAlloc(48);
            $tmp487->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp487->refCount.value = 1;
            panda$core$Object* $tmp489 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp487, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp489))->name);
            panda$core$Object* $tmp490 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp487));
            name486 = ((panda$core$MutableString*) $tmp490);
            panda$core$Char8$init$panda$core$UInt8(&$tmp491, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name486, $tmp491);
            panda$core$Object* $tmp494 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s493));
            separator492 = ((panda$core$String*) $tmp494);
            panda$core$Int64 $tmp496 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp495, ((panda$core$Int64) { 0 }), $tmp496, ((panda$core$Bit) { false }));
            int64_t $tmp498 = $tmp495.min.value;
            panda$core$Int64 i497 = { $tmp498 };
            int64_t $tmp500 = $tmp495.max.value;
            bool $tmp501 = $tmp495.inclusive.value;
            if ($tmp501) goto $l508; else goto $l509;
            $l508:;
            if ($tmp498 <= $tmp500) goto $l502; else goto $l504;
            $l509:;
            if ($tmp498 < $tmp500) goto $l502; else goto $l504;
            $l502:;
            {
                panda$core$Object* $tmp511 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i497);
                org$pandalanguage$pandac$Type* $tmp512 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp511), p_types);
                panda$core$Object* $tmp513 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp512));
                child510 = ((org$pandalanguage$pandac$Type*) $tmp513);
                panda$collections$Array$add$panda$collections$Array$T(remapped482, ((panda$core$Object*) child510));
                panda$core$Bit $tmp514 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i497, ((panda$core$Int64) { 0 }));
                if ($tmp514.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name486, separator492);
                    panda$core$MutableString$append$panda$core$String(name486, ((org$pandalanguage$pandac$Symbol*) child510)->name);
                    {
                        panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator492));
                        panda$core$Object* $tmp516 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s515));
                        separator492 = ((panda$core$String*) $tmp516);
                    }
                }
                }
            }
            $l505:;
            int64_t $tmp518 = $tmp500 - i497.value;
            if ($tmp501) goto $l519; else goto $l520;
            $l519:;
            if ((uint64_t) $tmp518 >= 1) goto $l517; else goto $l504;
            $l520:;
            if ((uint64_t) $tmp518 > 1) goto $l517; else goto $l504;
            $l517:;
            i497.value += 1;
            goto $l502;
            $l504:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp523, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name486, $tmp523);
            org$pandalanguage$pandac$Type* $tmp524 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
            $tmp524->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp524->refCount.value = 1;
            panda$core$String* $tmp526 = panda$core$MutableString$finish$R$panda$core$String(name486);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp524, $tmp526, ((panda$core$Int64) { 21 }), self->position, ((panda$collections$ListView*) remapped482), self->resolved);
            return $tmp524;
        }
        }
        else {
        panda$core$Bit $tmp527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13476, ((panda$core$Int64) { 11 }));
        if ($tmp527.value) {
        {
            panda$core$Object* $tmp528 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp529 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp528), p_types);
            org$pandalanguage$pandac$Type* $tmp530 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp529);
            return $tmp530;
        }
        }
        else {
        panda$core$Bit $tmp532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13476, ((panda$core$Int64) { 25 }));
        bool $tmp531 = $tmp532.value;
        if ($tmp531) goto $l533;
        panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13476, ((panda$core$Int64) { 24 }));
        $tmp531 = $tmp534.value;
        $l533:;
        panda$core$Bit $tmp535 = { $tmp531 };
        if ($tmp535.value) {
        {
            panda$collections$Array* $tmp537 = (panda$collections$Array*) pandaAlloc(41);
            $tmp537->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp537->refCount.value = 1;
            panda$collections$Array$init($tmp537);
            panda$core$Object* $tmp539 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp537));
            remapped536 = ((panda$collections$Array*) $tmp539);
            panda$core$MutableString* $tmp541 = (panda$core$MutableString*) pandaAlloc(48);
            $tmp541->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp541->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp541, &$s543);
            panda$core$Object* $tmp544 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp541));
            name540 = ((panda$core$MutableString*) $tmp544);
            panda$core$Object* $tmp547 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s546));
            separator545 = ((panda$core$String*) $tmp547);
            panda$core$Int64 $tmp548 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp549 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp548, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp549.value);
            panda$core$Int64 $tmp551 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp552 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp551, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp550, ((panda$core$Int64) { 0 }), $tmp552, ((panda$core$Bit) { false }));
            int64_t $tmp554 = $tmp550.min.value;
            panda$core$Int64 i553 = { $tmp554 };
            int64_t $tmp556 = $tmp550.max.value;
            bool $tmp557 = $tmp550.inclusive.value;
            if ($tmp557) goto $l564; else goto $l565;
            $l564:;
            if ($tmp554 <= $tmp556) goto $l558; else goto $l560;
            $l565:;
            if ($tmp554 < $tmp556) goto $l558; else goto $l560;
            $l558:;
            {
                panda$core$Object* $tmp567 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i553);
                org$pandalanguage$pandac$Type* $tmp568 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp567), p_types);
                panda$core$Object* $tmp569 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp568));
                child566 = ((org$pandalanguage$pandac$Type*) $tmp569);
                panda$core$MutableString$append$panda$core$String(name540, separator545);
                panda$core$MutableString$append$panda$core$String(name540, ((org$pandalanguage$pandac$Symbol*) child566)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped536, ((panda$core$Object*) child566));
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator545));
                    panda$core$Object* $tmp571 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s570));
                    separator545 = ((panda$core$String*) $tmp571);
                }
            }
            $l561:;
            int64_t $tmp573 = $tmp556 - i553.value;
            if ($tmp557) goto $l574; else goto $l575;
            $l574:;
            if ((uint64_t) $tmp573 >= 1) goto $l572; else goto $l560;
            $l575:;
            if ((uint64_t) $tmp573 > 1) goto $l572; else goto $l560;
            $l572:;
            i553.value += 1;
            goto $l558;
            $l560:;
            panda$core$Bit $tmp578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp578.value) {
            {
                panda$core$MutableString$append$panda$core$String(name540, &$s579);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name540, &$s580);
            }
            }
            panda$core$Int64 $tmp581 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp582 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp581, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp583 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp582);
            org$pandalanguage$pandac$Type* $tmp584 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp585 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp583), $tmp584);
            if ($tmp585.value) {
            {
                panda$core$Int64 $tmp587 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp588 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp587, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp589 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp588);
                org$pandalanguage$pandac$Type* $tmp590 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp589), p_types);
                panda$core$Object* $tmp591 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp590));
                child586 = ((org$pandalanguage$pandac$Type*) $tmp591);
                panda$core$MutableString$append$panda$core$String(name540, ((org$pandalanguage$pandac$Symbol*) child586)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped536, ((panda$core$Object*) child586));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp592 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped536, ((panda$core$Object*) $tmp592));
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp593, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(name540, $tmp593);
            org$pandalanguage$pandac$Type* $tmp594 = (org$pandalanguage$pandac$Type*) pandaAlloc(96);
            $tmp594->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp594->refCount.value = 1;
            panda$core$String* $tmp596 = panda$core$MutableString$finish$R$panda$core$String(name540);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp594, $tmp596, self->typeKind, self->position, ((panda$collections$ListView*) remapped536), self->resolved);
            return $tmp594;
        }
        }
        else {
        {
            return self;
        }
        }
        }
        }
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp597 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp597;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}

